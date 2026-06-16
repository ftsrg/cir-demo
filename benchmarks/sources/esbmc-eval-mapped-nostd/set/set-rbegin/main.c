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
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___ { unsigned char __field0; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ current; };
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

int __const_main_myints[5] = {21, 64, 17, 78, 49};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[11] = "*rit == 78";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-rbegin/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "myset contains:";
char _str_3[2] = " ";
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_2(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rbegin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__set_int__std__less_int___std__allocator_int_____rbegin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* std__iterator_std__bidirectional_iterator_tag__int__long__int_const___int_const____operator_(struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* p0, struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator_(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0, struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p1);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
int* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
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

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEC2Ev
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_2(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v11) {
bb12: ;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this13;
  this13 = v11;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t14 = this13;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base15 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t14 + 0);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&t14->current);
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v16, struct std___Rb_tree_node_base* v17) {
bb18: ;
  struct std___Rb_tree_const_iterator_int_* this19;
  struct std___Rb_tree_node_base* __x20;
  this19 = v16;
  __x20 = v17;
  struct std___Rb_tree_const_iterator_int_* t21 = this19;
  struct std___Rb_tree_node_base* t22 = __x20;
  t21->_M_node = t22;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v23) {
bb24: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this25;
  struct std___Rb_tree_const_iterator_int_ __retval26;
  this25 = v23;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t27 = this25;
  struct std___Rb_tree_node_base* r28 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t27);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval26, r28);
  struct std___Rb_tree_const_iterator_int_ t29 = __retval26;
  return t29;
}

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEC2ES1_
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v30, struct std___Rb_tree_const_iterator_int_ v31) {
bb32: ;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this33;
  struct std___Rb_tree_const_iterator_int_ __x34;
  this33 = v30;
  __x34 = v31;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t35 = this33;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base36 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t35 + 0);
  t35->current = __x34; // copy
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6rbeginEv
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rbegin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v37) {
bb38: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this39;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ __retval40;
  struct std___Rb_tree_const_iterator_int_ agg_tmp041;
  this39 = v37;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t42 = this39;
  struct std___Rb_tree_const_iterator_int_ r43 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(t42);
  agg_tmp041 = r43;
  struct std___Rb_tree_const_iterator_int_ t44 = agg_tmp041;
  std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(&__retval40, t44);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ t45 = __retval40;
  return t45;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE6rbeginEv
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__set_int__std__less_int___std__allocator_int_____rbegin___const(struct std__set_int__std__less_int___std__allocator_int__* v46) {
bb47: ;
  struct std__set_int__std__less_int___std__allocator_int__* this48;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ __retval49;
  this48 = v46;
  struct std__set_int__std__less_int___std__allocator_int__* t50 = this48;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ r51 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rbegin___const(&t50->_M_t);
  __retval49 = r51;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ t52 = __retval49;
  return t52;
}

// function: _ZNSt8iteratorISt26bidirectional_iterator_tagilPKiRS1_EaSERKS4_
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* std__iterator_std__bidirectional_iterator_tag__int__long__int_const___int_const____operator_(struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* v53, struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* v54) {
bb55: ;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* this56;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* unnamed57;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* __retval58;
  this56 = v53;
  unnamed57 = v54;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* t59 = this56;
  __retval58 = t59;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* t60 = __retval58;
  return t60;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSERKS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v61, struct std___Rb_tree_const_iterator_int_* v62) {
bb63: ;
  struct std___Rb_tree_const_iterator_int_* this64;
  struct std___Rb_tree_const_iterator_int_* unnamed65;
  struct std___Rb_tree_const_iterator_int_* __retval66;
  this64 = v61;
  unnamed65 = v62;
  struct std___Rb_tree_const_iterator_int_* t67 = this64;
  struct std___Rb_tree_const_iterator_int_* t68 = unnamed65;
  struct std___Rb_tree_node_base* t69 = t68->_M_node;
  t67->_M_node = t69;
  __retval66 = t67;
  struct std___Rb_tree_const_iterator_int_* t70 = __retval66;
  return t70;
}

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEaSERKS2_
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator_(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v71, struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v72) {
bb73: ;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this74;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* unnamed75;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* __retval76;
  this74 = v71;
  unnamed75 = v72;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t77 = this74;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base78 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t77 + 0);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t79 = unnamed75;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base80 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t79 + 0);
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* r81 = std__iterator_std__bidirectional_iterator_tag__int__long__int_const___int_const____operator_(base78, base80);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t82 = unnamed75;
  struct std___Rb_tree_const_iterator_int_* r83 = std___Rb_tree_const_iterator_int___operator_(&t77->current, &t82->current);
  __retval76 = t77;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t84 = __retval76;
  return t84;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEmmEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v85) {
bb86: ;
  struct std___Rb_tree_const_iterator_int_* this87;
  struct std___Rb_tree_const_iterator_int_* __retval88;
  this87 = v85;
  struct std___Rb_tree_const_iterator_int_* t89 = this87;
  struct std___Rb_tree_node_base* t90 = t89->_M_node;
  struct std___Rb_tree_node_base* r91 = std___Rb_tree_decrement(t90);
  t89->_M_node = r91;
  __retval88 = t89;
  struct std___Rb_tree_const_iterator_int_* t92 = __retval88;
  return t92;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v93) {
bb94: ;
  struct __gnu_cxx____aligned_membuf_int_* this95;
  void* __retval96;
  this95 = v93;
  struct __gnu_cxx____aligned_membuf_int_* t97 = this95;
  void* cast98 = (void*)&(t97->_M_storage);
  __retval96 = cast98;
  void* t99 = __retval96;
  return t99;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v100) {
bb101: ;
  struct __gnu_cxx____aligned_membuf_int_* this102;
  int* __retval103;
  this102 = v100;
  struct __gnu_cxx____aligned_membuf_int_* t104 = this102;
  void* r105 = __gnu_cxx____aligned_membuf_int____M_addr___const(t104);
  int* cast106 = (int*)r105;
  __retval103 = cast106;
  int* t107 = __retval103;
  return t107;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v108) {
bb109: ;
  struct std___Rb_tree_node_int_* this110;
  int* __retval111;
  this110 = v108;
  struct std___Rb_tree_node_int_* t112 = this110;
  int* r113 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t112->_M_storage);
  __retval111 = r113;
  int* t114 = __retval111;
  return t114;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v115) {
bb116: ;
  struct std___Rb_tree_const_iterator_int_* this117;
  int* __retval118;
  this117 = v115;
  struct std___Rb_tree_const_iterator_int_* t119 = this117;
  struct std___Rb_tree_node_base* t120 = t119->_M_node;
  struct std___Rb_tree_node_int_* derived121 = ((t120) ? (struct std___Rb_tree_node_int_*)((char *)t120 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r122 = std___Rb_tree_node_int____M_valptr___const(derived121);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval118 = r122;
  int* t123 = __retval118;
  return t123;
}

// function: _ZNKSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEdeEv
int* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v124) {
bb125: ;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this126;
  int* __retval127;
  struct std___Rb_tree_const_iterator_int_ __tmp128;
  this126 = v124;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t129 = this126;
  __tmp128 = t129->current; // copy
  struct std___Rb_tree_const_iterator_int_* r130 = std___Rb_tree_const_iterator_int___operator__(&__tmp128);
  int* r131 = std___Rb_tree_const_iterator_int___operator____const(r130);
  __retval127 = r131;
  int* t132 = __retval127;
  return t132;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v133, int v134) {
bb135: ;
  int __a136;
  int __b137;
  int __retval138;
  __a136 = v133;
  __b137 = v134;
  int t139 = __a136;
  int t140 = __b137;
  int b141 = t139 | t140;
  __retval138 = b141;
  int t142 = __retval138;
  return t142;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v143) {
bb144: ;
  struct std__basic_ios_char__std__char_traits_char__* this145;
  int __retval146;
  this145 = v143;
  struct std__basic_ios_char__std__char_traits_char__* t147 = this145;
  struct std__ios_base* base148 = (struct std__ios_base*)((char *)t147 + 0);
  int t149 = base148->_M_streambuf_state;
  __retval146 = t149;
  int t150 = __retval146;
  return t150;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v151, int v152) {
bb153: ;
  struct std__basic_ios_char__std__char_traits_char__* this154;
  int __state155;
  this154 = v151;
  __state155 = v152;
  struct std__basic_ios_char__std__char_traits_char__* t156 = this154;
  int r157 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t156);
  if (__cir_exc_active) {
    return;
  }
  int t158 = __state155;
  int r159 = std__operator_(r157, t158);
  std__basic_ios_char__std__char_traits_char_____clear(t156, r159);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v160, char* v161) {
bb162: ;
  char* __c1163;
  char* __c2164;
  _Bool __retval165;
  __c1163 = v160;
  __c2164 = v161;
  char* t166 = __c1163;
  char t167 = *t166;
  int cast168 = (int)t167;
  char* t169 = __c2164;
  char t170 = *t169;
  int cast171 = (int)t170;
  _Bool c172 = ((cast168 == cast171)) ? 1 : 0;
  __retval165 = c172;
  _Bool t173 = __retval165;
  return t173;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v174) {
bb175: ;
  char* __p176;
  unsigned long __retval177;
  unsigned long __i178;
  __p176 = v174;
  unsigned long c179 = 0;
  __i178 = c179;
    char ref_tmp0180;
    while (1) {
      unsigned long t181 = __i178;
      char* t182 = __p176;
      char* ptr183 = &(t182)[t181];
      char c184 = 0;
      ref_tmp0180 = c184;
      _Bool r185 = __gnu_cxx__char_traits_char___eq(ptr183, &ref_tmp0180);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u186 = !r185;
      if (!u186) break;
      unsigned long t187 = __i178;
      unsigned long u188 = t187 + 1;
      __i178 = u188;
    }
  unsigned long t189 = __i178;
  __retval177 = t189;
  unsigned long t190 = __retval177;
  return t190;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v191) {
bb192: ;
  char* __s193;
  unsigned long __retval194;
  __s193 = v191;
    _Bool r195 = std____is_constant_evaluated();
    if (r195) {
      char* t196 = __s193;
      unsigned long r197 = __gnu_cxx__char_traits_char___length(t196);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval194 = r197;
      unsigned long t198 = __retval194;
      return t198;
    }
  char* t199 = __s193;
  unsigned long r200 = strlen(t199);
  __retval194 = r200;
  unsigned long t201 = __retval194;
  return t201;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v202, char* v203) {
bb204: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out205;
  char* __s206;
  struct std__basic_ostream_char__std__char_traits_char__* __retval207;
  __out205 = v202;
  __s206 = v203;
    char* t208 = __s206;
    _Bool cast209 = (_Bool)t208;
    _Bool u210 = !cast209;
    if (u210) {
      struct std__basic_ostream_char__std__char_traits_char__* t211 = __out205;
      void** v212 = (void**)t211;
      void* v213 = *((void**)v212);
      unsigned char* cast214 = (unsigned char*)v213;
      long c215 = -24;
      unsigned char* ptr216 = &(cast214)[c215];
      long* cast217 = (long*)ptr216;
      long t218 = *cast217;
      unsigned char* cast219 = (unsigned char*)t211;
      unsigned char* ptr220 = &(cast219)[t218];
      struct std__basic_ostream_char__std__char_traits_char__* cast221 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr220;
      struct std__basic_ios_char__std__char_traits_char__* cast222 = (struct std__basic_ios_char__std__char_traits_char__*)cast221;
      int t223 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast222, t223);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t224 = __out205;
      char* t225 = __s206;
      char* t226 = __s206;
      unsigned long r227 = std__char_traits_char___length(t226);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast228 = (long)r227;
      struct std__basic_ostream_char__std__char_traits_char__* r229 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t224, t225, cast228);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t230 = __out205;
  __retval207 = t230;
  struct std__basic_ostream_char__std__char_traits_char__* t231 = __retval207;
  return t231;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v232, void* v233) {
bb234: ;
  struct std__basic_ostream_char__std__char_traits_char__* this235;
  void* __pf236;
  struct std__basic_ostream_char__std__char_traits_char__* __retval237;
  this235 = v232;
  __pf236 = v233;
  struct std__basic_ostream_char__std__char_traits_char__* t238 = this235;
  void* t239 = __pf236;
  struct std__basic_ostream_char__std__char_traits_char__* r240 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t239)(t238);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval237 = r240;
  struct std__basic_ostream_char__std__char_traits_char__* t241 = __retval237;
  return t241;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v242) {
bb243: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os244;
  struct std__basic_ostream_char__std__char_traits_char__* __retval245;
  __os244 = v242;
  struct std__basic_ostream_char__std__char_traits_char__* t246 = __os244;
  struct std__basic_ostream_char__std__char_traits_char__* r247 = std__ostream__flush(t246);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval245 = r247;
  struct std__basic_ostream_char__std__char_traits_char__* t248 = __retval245;
  return t248;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v249) {
bb250: ;
  struct std__ctype_char_* __f251;
  struct std__ctype_char_* __retval252;
  __f251 = v249;
    struct std__ctype_char_* t253 = __f251;
    _Bool cast254 = (_Bool)t253;
    _Bool u255 = !cast254;
    if (u255) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t256 = __f251;
  __retval252 = t256;
  struct std__ctype_char_* t257 = __retval252;
  return t257;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v258, char v259) {
bb260: ;
  struct std__ctype_char_* this261;
  char __c262;
  char __retval263;
  this261 = v258;
  __c262 = v259;
  struct std__ctype_char_* t264 = this261;
    char t265 = t264->_M_widen_ok;
    _Bool cast266 = (_Bool)t265;
    if (cast266) {
      char t267 = __c262;
      unsigned char cast268 = (unsigned char)t267;
      unsigned long cast269 = (unsigned long)cast268;
      char t270 = t264->_M_widen[cast269];
      __retval263 = t270;
      char t271 = __retval263;
      return t271;
    }
  std__ctype_char____M_widen_init___const(t264);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t272 = __c262;
  void** v273 = (void**)t264;
  void* v274 = *((void**)v273);
  char vcall277 = (char)__VERIFIER_virtual_call_char_char(t264, 6, t272);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval263 = vcall277;
  char t278 = __retval263;
  return t278;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v279, char v280) {
bb281: ;
  struct std__basic_ios_char__std__char_traits_char__* this282;
  char __c283;
  char __retval284;
  this282 = v279;
  __c283 = v280;
  struct std__basic_ios_char__std__char_traits_char__* t285 = this282;
  struct std__ctype_char_* t286 = t285->_M_ctype;
  struct std__ctype_char_* r287 = std__ctype_char__const__std____check_facet_std__ctype_char___(t286);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t288 = __c283;
  char r289 = std__ctype_char___widen_char__const(r287, t288);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval284 = r289;
  char t290 = __retval284;
  return t290;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v291) {
bb292: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os293;
  struct std__basic_ostream_char__std__char_traits_char__* __retval294;
  __os293 = v291;
  struct std__basic_ostream_char__std__char_traits_char__* t295 = __os293;
  struct std__basic_ostream_char__std__char_traits_char__* t296 = __os293;
  void** v297 = (void**)t296;
  void* v298 = *((void**)v297);
  unsigned char* cast299 = (unsigned char*)v298;
  long c300 = -24;
  unsigned char* ptr301 = &(cast299)[c300];
  long* cast302 = (long*)ptr301;
  long t303 = *cast302;
  unsigned char* cast304 = (unsigned char*)t296;
  unsigned char* ptr305 = &(cast304)[t303];
  struct std__basic_ostream_char__std__char_traits_char__* cast306 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr305;
  struct std__basic_ios_char__std__char_traits_char__* cast307 = (struct std__basic_ios_char__std__char_traits_char__*)cast306;
  char c308 = 10;
  char r309 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast307, c308);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r310 = std__ostream__put(t295, r309);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r311 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r310);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval294 = r311;
  struct std__basic_ostream_char__std__char_traits_char__* t312 = __retval294;
  return t312;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v313) {
bb314: ;
  struct std__set_int__std__less_int___std__allocator_int__* this315;
  this315 = v313;
  struct std__set_int__std__less_int___std__allocator_int__* t316 = this315;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t316->_M_t);
  }
  return;
}

// function: main
int main() {
bb317: ;
  int __retval318;
  int myints319[5];
  struct std__set_int__std__less_int___std__allocator_int__ myset320;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ rit321;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ ref_tmp0322;
  int c323 = 0;
  __retval318 = c323;
  // array copy
  __builtin_memcpy(myints319, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast324 = (int*)&(myints319);
  int* cast325 = (int*)&(myints319);
  int c326 = 5;
  int* ptr327 = &(cast325)[c326];
  std__set_int__std__less_int___std__allocator_int_____set_int__(&myset320, cast324, ptr327);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_2(&rit321);
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ r328 = std__set_int__std__less_int___std__allocator_int_____rbegin___const(&myset320);
    ref_tmp0322 = r328;
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* r329 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator_(&rit321, &ref_tmp0322);
    int* r330 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(&rit321);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset320);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t331 = *r330;
    int c332 = 78;
    _Bool c333 = ((t331 == c332)) ? 1 : 0;
    if (c333) {
    } else {
      char* cast334 = (char*)&(_str);
      char* c335 = (char*)_str_1;
      unsigned int c336 = 20;
      char* cast337 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast334, c335, c336, cast337);
    }
    char* cast338 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r339 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast338);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset320);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast340 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r341 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast340);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset320);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r342 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(&rit321);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset320);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t343 = *r342;
    struct std__basic_ostream_char__std__char_traits_char__* r344 = std__ostream__operator__(r341, t343);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset320);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r345 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset320);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c346 = 0;
    __retval318 = c346;
    int t347 = __retval318;
    int ret_val348 = t347;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset320);
    }
    return ret_val348;
  int t349 = __retval318;
  return t349;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v350) {
bb351: ;
  struct std___Rb_tree_const_iterator_int_* this352;
  this352 = v350;
  struct std___Rb_tree_const_iterator_int_* t353 = this352;
  struct std___Rb_tree_node_base* c354 = ((void*)0);
  t353->_M_node = c354;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v355) {
bb356: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this357;
  this357 = v355;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t358 = this357;
    struct std___Rb_tree_node_int_* r359 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t358);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t358, r359);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t358->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t358->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v360) {
bb361: ;
  struct std___Rb_tree_node_int_* this362;
  struct std___Rb_tree_node_int_* __retval363;
  this362 = v360;
  struct std___Rb_tree_node_int_* t364 = this362;
  __retval363 = t364;
  struct std___Rb_tree_node_int_* t365 = __retval363;
  return t365;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v366) {
bb367: ;
  struct std___Rb_tree_node_int_* __x368;
  struct std___Rb_tree_node_int_* __retval369;
  __x368 = v366;
  struct std___Rb_tree_node_int_* t370 = __x368;
  struct std___Rb_tree_node_base* base371 = (struct std___Rb_tree_node_base*)((char *)t370 + 0);
  struct std___Rb_tree_node_base* t372 = base371->_M_right;
  _Bool cast373 = (_Bool)t372;
  struct std___Rb_tree_node_int_* ternary374;
  if (cast373) {
    struct std___Rb_tree_node_int_* t375 = __x368;
    struct std___Rb_tree_node_base* base376 = (struct std___Rb_tree_node_base*)((char *)t375 + 0);
    struct std___Rb_tree_node_base* t377 = base376->_M_right;
    struct std___Rb_tree_node_int_* derived378 = (struct std___Rb_tree_node_int_*)((char *)t377 - 0);
    struct std___Rb_tree_node_int_* r379 = std___Rb_tree_node_int____M_node_ptr(derived378);
    ternary374 = (struct std___Rb_tree_node_int_*)r379;
  } else {
    struct std___Rb_tree_node_int_* c380 = ((void*)0);
    ternary374 = (struct std___Rb_tree_node_int_*)c380;
  }
  __retval369 = ternary374;
  struct std___Rb_tree_node_int_* t381 = __retval369;
  return t381;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v382) {
bb383: ;
  struct std___Rb_tree_node_int_* __x384;
  struct std___Rb_tree_node_int_* __retval385;
  __x384 = v382;
  struct std___Rb_tree_node_int_* t386 = __x384;
  struct std___Rb_tree_node_base* base387 = (struct std___Rb_tree_node_base*)((char *)t386 + 0);
  struct std___Rb_tree_node_base* t388 = base387->_M_left;
  _Bool cast389 = (_Bool)t388;
  struct std___Rb_tree_node_int_* ternary390;
  if (cast389) {
    struct std___Rb_tree_node_int_* t391 = __x384;
    struct std___Rb_tree_node_base* base392 = (struct std___Rb_tree_node_base*)((char *)t391 + 0);
    struct std___Rb_tree_node_base* t393 = base392->_M_left;
    struct std___Rb_tree_node_int_* derived394 = (struct std___Rb_tree_node_int_*)((char *)t393 - 0);
    struct std___Rb_tree_node_int_* r395 = std___Rb_tree_node_int____M_node_ptr(derived394);
    ternary390 = (struct std___Rb_tree_node_int_*)r395;
  } else {
    struct std___Rb_tree_node_int_* c396 = ((void*)0);
    ternary390 = (struct std___Rb_tree_node_int_*)c396;
  }
  __retval385 = ternary390;
  struct std___Rb_tree_node_int_* t397 = __retval385;
  return t397;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v398) {
bb399: ;
  int* __location400;
  __location400 = v398;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v401, int* v402) {
bb403: ;
  struct std__allocator_std___Rb_tree_node_int__* __a404;
  int* __p405;
  __a404 = v401;
  __p405 = v402;
  int* t406 = __p405;
  void_std__destroy_at_int_(t406);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v407) {
bb408: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this409;
  struct std__allocator_std___Rb_tree_node_int__* __retval410;
  this409 = v407;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t411 = this409;
  struct std__allocator_std___Rb_tree_node_int__* base412 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t411->_M_impl) + 0);
  __retval410 = base412;
  struct std__allocator_std___Rb_tree_node_int__* t413 = __retval410;
  return t413;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v414) {
bb415: ;
  struct __gnu_cxx____aligned_membuf_int_* this416;
  void* __retval417;
  this416 = v414;
  struct __gnu_cxx____aligned_membuf_int_* t418 = this416;
  void* cast419 = (void*)&(t418->_M_storage);
  __retval417 = cast419;
  void* t420 = __retval417;
  return t420;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v421) {
bb422: ;
  struct __gnu_cxx____aligned_membuf_int_* this423;
  int* __retval424;
  this423 = v421;
  struct __gnu_cxx____aligned_membuf_int_* t425 = this423;
  void* r426 = __gnu_cxx____aligned_membuf_int____M_addr(t425);
  int* cast427 = (int*)r426;
  __retval424 = cast427;
  int* t428 = __retval424;
  return t428;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v429) {
bb430: ;
  struct std___Rb_tree_node_int_* this431;
  int* __retval432;
  this431 = v429;
  struct std___Rb_tree_node_int_* t433 = this431;
  int* r434 = __gnu_cxx____aligned_membuf_int____M_ptr(&t433->_M_storage);
  __retval432 = r434;
  int* t435 = __retval432;
  return t435;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v436, struct std___Rb_tree_node_int_* v437) {
bb438: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this439;
  struct std___Rb_tree_node_int_* __p440;
  this439 = v436;
  __p440 = v437;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t441 = this439;
  struct std__allocator_std___Rb_tree_node_int__* r442 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t441);
  struct std___Rb_tree_node_int_* t443 = __p440;
  int* r444 = std___Rb_tree_node_int____M_valptr(t443);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r442, r444);
  struct std___Rb_tree_node_int_* t445 = __p440;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb446: ;
  _Bool __retval447;
    _Bool c448 = 0;
    __retval447 = c448;
    _Bool t449 = __retval447;
    return t449;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v450, struct std___Rb_tree_node_int_* v451, unsigned long v452) {
bb453: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this454;
  struct std___Rb_tree_node_int_* __p455;
  unsigned long __n456;
  this454 = v450;
  __p455 = v451;
  __n456 = v452;
  struct std____new_allocator_std___Rb_tree_node_int__* t457 = this454;
    unsigned long c458 = 8;
    unsigned long c459 = 16;
    _Bool c460 = ((c458 > c459)) ? 1 : 0;
    if (c460) {
      struct std___Rb_tree_node_int_* t461 = __p455;
      void* cast462 = (void*)t461;
      unsigned long t463 = __n456;
      unsigned long c464 = 40;
      unsigned long b465 = t463 * c464;
      unsigned long c466 = 8;
      operator_delete_3(cast462, b465, c466);
      return;
    }
  struct std___Rb_tree_node_int_* t467 = __p455;
  void* cast468 = (void*)t467;
  unsigned long t469 = __n456;
  unsigned long c470 = 40;
  unsigned long b471 = t469 * c470;
  operator_delete_2(cast468, b471);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v472, struct std___Rb_tree_node_int_* v473, unsigned long v474) {
bb475: ;
  struct std__allocator_std___Rb_tree_node_int__* this476;
  struct std___Rb_tree_node_int_* __p477;
  unsigned long __n478;
  this476 = v472;
  __p477 = v473;
  __n478 = v474;
  struct std__allocator_std___Rb_tree_node_int__* t479 = this476;
    _Bool r480 = std____is_constant_evaluated();
    if (r480) {
      struct std___Rb_tree_node_int_* t481 = __p477;
      void* cast482 = (void*)t481;
      operator_delete(cast482);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base483 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t479 + 0);
  struct std___Rb_tree_node_int_* t484 = __p477;
  unsigned long t485 = __n478;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base483, t484, t485);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v486, struct std___Rb_tree_node_int_* v487, unsigned long v488) {
bb489: ;
  struct std__allocator_std___Rb_tree_node_int__* __a490;
  struct std___Rb_tree_node_int_* __p491;
  unsigned long __n492;
  __a490 = v486;
  __p491 = v487;
  __n492 = v488;
  struct std__allocator_std___Rb_tree_node_int__* t493 = __a490;
  struct std___Rb_tree_node_int_* t494 = __p491;
  unsigned long t495 = __n492;
  std__allocator_std___Rb_tree_node_int_____deallocate(t493, t494, t495);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v496, struct std___Rb_tree_node_int_* v497) {
bb498: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this499;
  struct std___Rb_tree_node_int_* __p500;
  this499 = v496;
  __p500 = v497;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t501 = this499;
  struct std__allocator_std___Rb_tree_node_int__* r502 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t501);
  struct std___Rb_tree_node_int_* t503 = __p500;
  unsigned long c504 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r502, t503, c504);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v505, struct std___Rb_tree_node_int_* v506) {
bb507: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this508;
  struct std___Rb_tree_node_int_* __p509;
  this508 = v505;
  __p509 = v506;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t510 = this508;
  struct std___Rb_tree_node_int_* t511 = __p509;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t510, t511);
  struct std___Rb_tree_node_int_* t512 = __p509;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t510, t512);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v513, struct std___Rb_tree_node_int_* v514) {
bb515: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this516;
  struct std___Rb_tree_node_int_* __x517;
  this516 = v513;
  __x517 = v514;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t518 = this516;
    while (1) {
      struct std___Rb_tree_node_int_* t519 = __x517;
      _Bool cast520 = (_Bool)t519;
      if (!cast520) break;
        struct std___Rb_tree_node_int_* __y521;
        struct std___Rb_tree_node_int_* t522 = __x517;
        struct std___Rb_tree_node_int_* r523 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t522);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t518, r523);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t524 = __x517;
        struct std___Rb_tree_node_int_* r525 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t524);
        if (__cir_exc_active) {
          return;
        }
        __y521 = r525;
        struct std___Rb_tree_node_int_* t526 = __x517;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t518, t526);
        struct std___Rb_tree_node_int_* t527 = __y521;
        __x517 = t527;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v528) {
bb529: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this530;
  struct std___Rb_tree_node_int_* __retval531;
  struct std___Rb_tree_node_base* __begin532;
  this530 = v528;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t533 = this530;
  struct std___Rb_tree_header* base534 = (struct std___Rb_tree_header*)((char *)&(t533->_M_impl) + 8);
  struct std___Rb_tree_node_base* t535 = base534->_M_header._M_parent;
  __begin532 = t535;
  struct std___Rb_tree_node_base* t536 = __begin532;
  _Bool cast537 = (_Bool)t536;
  struct std___Rb_tree_node_int_* ternary538;
  if (cast537) {
    struct std___Rb_tree_node_base* t539 = __begin532;
    struct std___Rb_tree_node_int_* derived540 = (struct std___Rb_tree_node_int_*)((char *)t539 - 0);
    struct std___Rb_tree_node_int_* r541 = std___Rb_tree_node_int____M_node_ptr(derived540);
    ternary538 = (struct std___Rb_tree_node_int_*)r541;
  } else {
    struct std___Rb_tree_node_int_* c542 = ((void*)0);
    ternary538 = (struct std___Rb_tree_node_int_*)c542;
  }
  __retval531 = ternary538;
  struct std___Rb_tree_node_int_* t543 = __retval531;
  return t543;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v544) {
bb545: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this546;
  this546 = v544;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t547 = this546;
  {
    struct std__allocator_std___Rb_tree_node_int__* base548 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t547 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base548);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v549) {
bb550: ;
  struct std__allocator_std___Rb_tree_node_int__* this551;
  this551 = v549;
  struct std__allocator_std___Rb_tree_node_int__* t552 = this551;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v553) {
bb554: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this555;
  this555 = v553;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t556 = this555;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t556->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v557, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v558) {
bb559: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this560;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t561;
  this560 = v557;
  __t561 = v558;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t562 = this560;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t563 = __t561;
  t562->_M_t = t563;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v564) {
bb565: ;
  struct std___Rb_tree_node_base* this566;
  struct std___Rb_tree_node_base* __retval567;
  this566 = v564;
  struct std___Rb_tree_node_base* t568 = this566;
  __retval567 = t568;
  struct std___Rb_tree_node_base* t569 = __retval567;
  return t569;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v570) {
bb571: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this572;
  struct std___Rb_tree_node_base* __retval573;
  this572 = v570;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t574 = this572;
  struct std___Rb_tree_header* base575 = (struct std___Rb_tree_header*)((char *)&(t574->_M_impl) + 8);
  struct std___Rb_tree_node_base* r576 = std___Rb_tree_node_base___M_base_ptr___const(&base575->_M_header);
  __retval573 = r576;
  struct std___Rb_tree_node_base* t577 = __retval573;
  return t577;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v578) {
bb579: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this580;
  unsigned long __retval581;
  this580 = v578;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t582 = this580;
  struct std___Rb_tree_header* base583 = (struct std___Rb_tree_header*)((char *)&(t582->_M_impl) + 8);
  unsigned long t584 = base583->_M_node_count;
  __retval581 = t584;
  unsigned long t585 = __retval581;
  return t585;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v586, int* v587, int* v588) {
bb589: ;
  struct std__less_int_* this590;
  int* __x591;
  int* __y592;
  _Bool __retval593;
  this590 = v586;
  __x591 = v587;
  __y592 = v588;
  struct std__less_int_* t594 = this590;
  int* t595 = __x591;
  int t596 = *t595;
  int* t597 = __y592;
  int t598 = *t597;
  _Bool c599 = ((t596 < t598)) ? 1 : 0;
  __retval593 = c599;
  _Bool t600 = __retval593;
  return t600;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v601, int* v602) {
bb603: ;
  struct std___Identity_int_* this604;
  int* __x605;
  int* __retval606;
  this604 = v601;
  __x605 = v602;
  struct std___Identity_int_* t607 = this604;
  int* t608 = __x605;
  __retval606 = t608;
  int* t609 = __retval606;
  return t609;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v610) {
bb611: ;
  struct std___Rb_tree_node_int_* __node612;
  int* __retval613;
  struct std___Identity_int_ ref_tmp0614;
  __node612 = v610;
  struct std___Rb_tree_node_int_* t615 = __node612;
  int* r616 = std___Rb_tree_node_int____M_valptr___const(t615);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r617 = std___Identity_int___operator___int_const___const(&ref_tmp0614, r616);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval613 = r617;
  int* t618 = __retval613;
  return t618;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v619) {
bb620: ;
  struct std___Rb_tree_node_base* __x621;
  int* __retval622;
  __x621 = v619;
  struct std___Rb_tree_node_base* t623 = __x621;
  struct std___Rb_tree_node_int_* derived624 = (struct std___Rb_tree_node_int_*)((char *)t623 - 0);
  int* r625 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived624);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval622 = r625;
  int* t626 = __retval622;
  return t626;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v627) {
bb628: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this629;
  struct std___Rb_tree_node_base** __retval630;
  this629 = v627;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t631 = this629;
  struct std___Rb_tree_header* base632 = (struct std___Rb_tree_header*)((char *)&(t631->_M_impl) + 8);
  __retval630 = &base632->_M_header._M_right;
  struct std___Rb_tree_node_base** t633 = __retval630;
  return t633;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v634, struct std___Rb_tree_node_base** v635, struct std___Rb_tree_node_base** v636) {
bb637: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this638;
  struct std___Rb_tree_node_base** __x639;
  struct std___Rb_tree_node_base** __y640;
  this638 = v634;
  __x639 = v635;
  __y640 = v636;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t641 = this638;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base642 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t641 + 0);
  struct std___Rb_tree_node_base** t643 = __x639;
  struct std___Rb_tree_node_base* t644 = *t643;
  t641->first = t644;
  struct std___Rb_tree_node_base** t645 = __y640;
  struct std___Rb_tree_node_base* t646 = *t645;
  t641->second = t646;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v647) {
bb648: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this649;
  struct std___Rb_tree_node_base* __retval650;
  this649 = v647;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t651 = this649;
  struct std___Rb_tree_header* base652 = (struct std___Rb_tree_header*)((char *)&(t651->_M_impl) + 8);
  struct std___Rb_tree_node_base* t653 = base652->_M_header._M_parent;
  __retval650 = t653;
  struct std___Rb_tree_node_base* t654 = __retval650;
  return t654;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v655) {
bb656: ;
  struct std___Rb_tree_node_base* __x657;
  struct std___Rb_tree_node_base* __retval658;
  __x657 = v655;
  struct std___Rb_tree_node_base* t659 = __x657;
  struct std___Rb_tree_node_base* t660 = t659->_M_left;
  __retval658 = t660;
  struct std___Rb_tree_node_base* t661 = __retval658;
  return t661;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v662, struct std___Rb_tree_iterator_int_* v663) {
bb664: ;
  struct std___Rb_tree_iterator_int_* __x665;
  struct std___Rb_tree_iterator_int_* __y666;
  _Bool __retval667;
  __x665 = v662;
  __y666 = v663;
  struct std___Rb_tree_iterator_int_* t668 = __x665;
  struct std___Rb_tree_node_base* t669 = t668->_M_node;
  struct std___Rb_tree_iterator_int_* t670 = __y666;
  struct std___Rb_tree_node_base* t671 = t670->_M_node;
  _Bool c672 = ((t669 == t671)) ? 1 : 0;
  __retval667 = c672;
  _Bool t673 = __retval667;
  return t673;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v674) {
bb675: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this676;
  struct std___Rb_tree_iterator_int_ __retval677;
  this676 = v674;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t678 = this676;
  struct std___Rb_tree_header* base679 = (struct std___Rb_tree_header*)((char *)&(t678->_M_impl) + 8);
  struct std___Rb_tree_node_base* t680 = base679->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval677, t680);
  struct std___Rb_tree_iterator_int_ t681 = __retval677;
  return t681;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v682, int* v683) {
bb684: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this685;
  int* __k686;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval687;
  struct std___Rb_tree_node_base* __x688;
  struct std___Rb_tree_node_base* __y689;
  _Bool __comp690;
  struct std___Rb_tree_iterator_int_ __j691;
  struct std___Rb_tree_node_base* ref_tmp1692;
  this685 = v682;
  __k686 = v683;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t693 = this685;
  struct std___Rb_tree_node_base* r694 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t693);
  __x688 = r694;
  struct std___Rb_tree_node_base* r695 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t693);
  __y689 = r695;
  _Bool c696 = 1;
  __comp690 = c696;
    while (1) {
      struct std___Rb_tree_node_base* t697 = __x688;
      _Bool cast698 = (_Bool)t697;
      if (!cast698) break;
        struct std___Rb_tree_node_base* t699 = __x688;
        __y689 = t699;
        struct std___Rb_tree_key_compare_std__less_int__* base700 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t693->_M_impl) + 0);
        struct std__less_int_* cast701 = (struct std__less_int_*)base700;
        int* t702 = __k686;
        struct std___Rb_tree_node_base* t703 = __x688;
        int* r704 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t703);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r705 = std__less_int___operator___int_const___int_const___const(cast701, t702, r704);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp690 = r705;
        _Bool t706 = __comp690;
        struct std___Rb_tree_node_base* ternary707;
        if (t706) {
          struct std___Rb_tree_node_base* t708 = __x688;
          struct std___Rb_tree_node_base* r709 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t708);
          ternary707 = (struct std___Rb_tree_node_base*)r709;
        } else {
          struct std___Rb_tree_node_base* t710 = __x688;
          struct std___Rb_tree_node_base* r711 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t710);
          ternary707 = (struct std___Rb_tree_node_base*)r711;
        }
        __x688 = ternary707;
    }
  struct std___Rb_tree_node_base* t712 = __y689;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j691, t712);
    _Bool t713 = __comp690;
    if (t713) {
        struct std___Rb_tree_iterator_int_ ref_tmp0714;
        struct std___Rb_tree_iterator_int_ r715 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t693);
        ref_tmp0714 = r715;
        _Bool r716 = std__operator__(&__j691, &ref_tmp0714);
        if (r716) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval687, &__x688, &__y689);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t717 = __retval687;
          return t717;
        } else {
          struct std___Rb_tree_iterator_int_* r718 = std___Rb_tree_iterator_int___operator__(&__j691);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base719 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t693->_M_impl) + 0);
    struct std__less_int_* cast720 = (struct std__less_int_*)base719;
    struct std___Rb_tree_node_base* t721 = __j691._M_node;
    int* r722 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t721);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t723 = __k686;
    _Bool r724 = std__less_int___operator___int_const___int_const___const(cast720, r722, t723);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r724) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval687, &__x688, &__y689);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t725 = __retval687;
      return t725;
    }
  struct std___Rb_tree_node_base* c726 = ((void*)0);
  ref_tmp1692 = c726;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval687, &__j691._M_node, &ref_tmp1692);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t727 = __retval687;
  return t727;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v728) {
bb729: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this730;
  struct std___Rb_tree_node_base** __retval731;
  this730 = v728;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t732 = this730;
  struct std___Rb_tree_header* base733 = (struct std___Rb_tree_header*)((char *)&(t732->_M_impl) + 8);
  __retval731 = &base733->_M_header._M_left;
  struct std___Rb_tree_node_base** t734 = __retval731;
  return t734;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v735, struct std___Rb_tree_node_base** v736, struct std___Rb_tree_node_base** v737) {
bb738: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this739;
  struct std___Rb_tree_node_base** __x740;
  struct std___Rb_tree_node_base** __y741;
  this739 = v735;
  __x740 = v736;
  __y741 = v737;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t742 = this739;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base743 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t742 + 0);
  struct std___Rb_tree_node_base** t744 = __x740;
  struct std___Rb_tree_node_base* t745 = *t744;
  t742->first = t745;
  struct std___Rb_tree_node_base** t746 = __y741;
  struct std___Rb_tree_node_base* t747 = *t746;
  t742->second = t747;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v748) {
bb749: ;
  struct std___Rb_tree_iterator_int_* this750;
  struct std___Rb_tree_iterator_int_* __retval751;
  this750 = v748;
  struct std___Rb_tree_iterator_int_* t752 = this750;
  struct std___Rb_tree_node_base* t753 = t752->_M_node;
  struct std___Rb_tree_node_base* r754 = std___Rb_tree_decrement(t753);
  t752->_M_node = r754;
  __retval751 = t752;
  struct std___Rb_tree_iterator_int_* t755 = __retval751;
  return t755;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v756) {
bb757: ;
  struct std___Rb_tree_node_base* __x758;
  struct std___Rb_tree_node_base* __retval759;
  __x758 = v756;
  struct std___Rb_tree_node_base* t760 = __x758;
  struct std___Rb_tree_node_base* t761 = t760->_M_right;
  __retval759 = t761;
  struct std___Rb_tree_node_base* t762 = __retval759;
  return t762;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v763) {
bb764: ;
  struct std___Rb_tree_iterator_int_* this765;
  struct std___Rb_tree_iterator_int_* __retval766;
  this765 = v763;
  struct std___Rb_tree_iterator_int_* t767 = this765;
  struct std___Rb_tree_node_base* t768 = t767->_M_node;
  struct std___Rb_tree_node_base* r769 = std___Rb_tree_increment(t768);
  t767->_M_node = r769;
  __retval766 = t767;
  struct std___Rb_tree_iterator_int_* t770 = __retval766;
  return t770;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v771, struct std___Rb_tree_node_base** v772, struct std___Rb_tree_node_base** v773) {
bb774: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this775;
  struct std___Rb_tree_node_base** __x776;
  struct std___Rb_tree_node_base** __y777;
  this775 = v771;
  __x776 = v772;
  __y777 = v773;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t778 = this775;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base779 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t778 + 0);
  struct std___Rb_tree_node_base** t780 = __x776;
  struct std___Rb_tree_node_base* t781 = *t780;
  t778->first = t781;
  struct std___Rb_tree_node_base** t782 = __y777;
  struct std___Rb_tree_node_base* t783 = *t782;
  t778->second = t783;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v784, struct std___Rb_tree_const_iterator_int_ v785, int* v786) {
bb787: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this788;
  struct std___Rb_tree_const_iterator_int_ __position789;
  int* __k790;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval791;
  this788 = v784;
  __position789 = v785;
  __k790 = v786;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t792 = this788;
    struct std___Rb_tree_node_base* t793 = __position789._M_node;
    struct std___Rb_tree_node_base* r794 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t792);
    _Bool c795 = ((t793 == r794)) ? 1 : 0;
    if (c795) {
        unsigned long r796 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t792);
        unsigned long c797 = 0;
        _Bool c798 = ((r796 > c797)) ? 1 : 0;
        _Bool ternary799;
        if (c798) {
          struct std___Rb_tree_key_compare_std__less_int__* base800 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t792->_M_impl) + 0);
          struct std__less_int_* cast801 = (struct std__less_int_*)base800;
          struct std___Rb_tree_node_base** r802 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t792);
          struct std___Rb_tree_node_base* t803 = *r802;
          int* r804 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t803);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t805 = __k790;
          _Bool r806 = std__less_int___operator___int_const___int_const___const(cast801, r804, t805);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary799 = (_Bool)r806;
        } else {
          _Bool c807 = 0;
          ternary799 = (_Bool)c807;
        }
        if (ternary799) {
          struct std___Rb_tree_node_base* ref_tmp0808;
          struct std___Rb_tree_node_base* c809 = ((void*)0);
          ref_tmp0808 = c809;
          struct std___Rb_tree_node_base** r810 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t792);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval791, &ref_tmp0808, r810);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t811 = __retval791;
          return t811;
        } else {
          int* t812 = __k790;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r813 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t792, t812);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval791 = r813;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t814 = __retval791;
          return t814;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base815 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t792->_M_impl) + 0);
        struct std__less_int_* cast816 = (struct std__less_int_*)base815;
        int* t817 = __k790;
        struct std___Rb_tree_node_base* t818 = __position789._M_node;
        int* r819 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t818);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r820 = std__less_int___operator___int_const___int_const___const(cast816, t817, r819);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r820) {
          struct std___Rb_tree_iterator_int_ __before821;
          struct std___Rb_tree_node_base* t822 = __position789._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before821, t822);
            struct std___Rb_tree_node_base* t823 = __position789._M_node;
            struct std___Rb_tree_node_base** r824 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t792);
            struct std___Rb_tree_node_base* t825 = *r824;
            _Bool c826 = ((t823 == t825)) ? 1 : 0;
            if (c826) {
              struct std___Rb_tree_node_base** r827 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t792);
              struct std___Rb_tree_node_base** r828 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t792);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval791, r827, r828);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t829 = __retval791;
              return t829;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base830 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t792->_M_impl) + 0);
                struct std__less_int_* cast831 = (struct std__less_int_*)base830;
                struct std___Rb_tree_iterator_int_* r832 = std___Rb_tree_iterator_int___operator__(&__before821);
                struct std___Rb_tree_node_base* t833 = r832->_M_node;
                int* r834 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t833);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t835 = __k790;
                _Bool r836 = std__less_int___operator___int_const___int_const___const(cast831, r834, t835);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r836) {
                    struct std___Rb_tree_node_base* t837 = __before821._M_node;
                    struct std___Rb_tree_node_base* r838 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t837);
                    _Bool cast839 = (_Bool)r838;
                    _Bool u840 = !cast839;
                    if (u840) {
                      struct std___Rb_tree_node_base* ref_tmp1841;
                      struct std___Rb_tree_node_base* c842 = ((void*)0);
                      ref_tmp1841 = c842;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval791, &ref_tmp1841, &__before821._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t843 = __retval791;
                      return t843;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval791, &__position789._M_node, &__position789._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t844 = __retval791;
                      return t844;
                    }
                } else {
                  int* t845 = __k790;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r846 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t792, t845);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval791 = r846;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t847 = __retval791;
                  return t847;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base848 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t792->_M_impl) + 0);
            struct std__less_int_* cast849 = (struct std__less_int_*)base848;
            struct std___Rb_tree_node_base* t850 = __position789._M_node;
            int* r851 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t850);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t852 = __k790;
            _Bool r853 = std__less_int___operator___int_const___int_const___const(cast849, r851, t852);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r853) {
              struct std___Rb_tree_iterator_int_ __after854;
              struct std___Rb_tree_node_base* t855 = __position789._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after854, t855);
                struct std___Rb_tree_node_base* t856 = __position789._M_node;
                struct std___Rb_tree_node_base** r857 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t792);
                struct std___Rb_tree_node_base* t858 = *r857;
                _Bool c859 = ((t856 == t858)) ? 1 : 0;
                if (c859) {
                  struct std___Rb_tree_node_base* ref_tmp2860;
                  struct std___Rb_tree_node_base* c861 = ((void*)0);
                  ref_tmp2860 = c861;
                  struct std___Rb_tree_node_base** r862 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t792);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval791, &ref_tmp2860, r862);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t863 = __retval791;
                  return t863;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base864 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t792->_M_impl) + 0);
                    struct std__less_int_* cast865 = (struct std__less_int_*)base864;
                    int* t866 = __k790;
                    struct std___Rb_tree_iterator_int_* r867 = std___Rb_tree_iterator_int___operator___2(&__after854);
                    struct std___Rb_tree_node_base* t868 = r867->_M_node;
                    int* r869 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t868);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r870 = std__less_int___operator___int_const___int_const___const(cast865, t866, r869);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r870) {
                        struct std___Rb_tree_node_base* t871 = __position789._M_node;
                        struct std___Rb_tree_node_base* r872 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t871);
                        _Bool cast873 = (_Bool)r872;
                        _Bool u874 = !cast873;
                        if (u874) {
                          struct std___Rb_tree_node_base* ref_tmp3875;
                          struct std___Rb_tree_node_base* c876 = ((void*)0);
                          ref_tmp3875 = c876;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval791, &ref_tmp3875, &__position789._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t877 = __retval791;
                          return t877;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval791, &__after854._M_node, &__after854._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t878 = __retval791;
                          return t878;
                        }
                    } else {
                      int* t879 = __k790;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r880 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t792, t879);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval791 = r880;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t881 = __retval791;
                      return t881;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp4882;
              struct std___Rb_tree_node_base* c883 = ((void*)0);
              ref_tmp4882 = c883;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval791, &__position789._M_node, &ref_tmp4882);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t884 = __retval791;
              return t884;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v885, int* v886) {
bb887: ;
  struct std___Identity_int_* this888;
  int* __x889;
  int* __retval890;
  this888 = v885;
  __x889 = v886;
  struct std___Identity_int_* t891 = this888;
  int* t892 = __x889;
  __retval890 = t892;
  int* t893 = __retval890;
  return t893;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v894) {
bb895: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this896;
  unsigned long __retval897;
  this896 = v894;
  struct std____new_allocator_std___Rb_tree_node_int__* t898 = this896;
  unsigned long c899 = 9223372036854775807;
  unsigned long c900 = 40;
  unsigned long b901 = c899 / c900;
  __retval897 = b901;
  unsigned long t902 = __retval897;
  return t902;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v903, unsigned long v904, void* v905) {
bb906: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this907;
  unsigned long __n908;
  void* unnamed909;
  struct std___Rb_tree_node_int_* __retval910;
  this907 = v903;
  __n908 = v904;
  unnamed909 = v905;
  struct std____new_allocator_std___Rb_tree_node_int__* t911 = this907;
    unsigned long t912 = __n908;
    unsigned long r913 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t911);
    _Bool c914 = ((t912 > r913)) ? 1 : 0;
    if (c914) {
        unsigned long t915 = __n908;
        unsigned long c916 = -1;
        unsigned long c917 = 40;
        unsigned long b918 = c916 / c917;
        _Bool c919 = ((t915 > b918)) ? 1 : 0;
        if (c919) {
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
    unsigned long c920 = 8;
    unsigned long c921 = 16;
    _Bool c922 = ((c920 > c921)) ? 1 : 0;
    if (c922) {
      unsigned long __al923;
      unsigned long c924 = 8;
      __al923 = c924;
      unsigned long t925 = __n908;
      unsigned long c926 = 40;
      unsigned long b927 = t925 * c926;
      unsigned long t928 = __al923;
      void* r929 = operator_new_2(b927, t928);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast930 = (struct std___Rb_tree_node_int_*)r929;
      __retval910 = cast930;
      struct std___Rb_tree_node_int_* t931 = __retval910;
      return t931;
    }
  unsigned long t932 = __n908;
  unsigned long c933 = 40;
  unsigned long b934 = t932 * c933;
  void* r935 = operator_new(b934);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast936 = (struct std___Rb_tree_node_int_*)r935;
  __retval910 = cast936;
  struct std___Rb_tree_node_int_* t937 = __retval910;
  return t937;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v938, unsigned long v939) {
bb940: ;
  struct std__allocator_std___Rb_tree_node_int__* this941;
  unsigned long __n942;
  struct std___Rb_tree_node_int_* __retval943;
  this941 = v938;
  __n942 = v939;
  struct std__allocator_std___Rb_tree_node_int__* t944 = this941;
    _Bool r945 = std____is_constant_evaluated();
    if (r945) {
        unsigned long t946 = __n942;
        unsigned long c947 = 40;
        unsigned long ovr948;
        _Bool ovf949 = __builtin_mul_overflow(t946, c947, &ovr948);
        __n942 = ovr948;
        if (ovf949) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t950 = __n942;
      void* r951 = operator_new(t950);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast952 = (struct std___Rb_tree_node_int_*)r951;
      __retval943 = cast952;
      struct std___Rb_tree_node_int_* t953 = __retval943;
      return t953;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base954 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t944 + 0);
  unsigned long t955 = __n942;
  void* c956 = ((void*)0);
  struct std___Rb_tree_node_int_* r957 = std____new_allocator_std___Rb_tree_node_int_____allocate(base954, t955, c956);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval943 = r957;
  struct std___Rb_tree_node_int_* t958 = __retval943;
  return t958;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v959, unsigned long v960) {
bb961: ;
  struct std__allocator_std___Rb_tree_node_int__* __a962;
  unsigned long __n963;
  struct std___Rb_tree_node_int_* __retval964;
  __a962 = v959;
  __n963 = v960;
  struct std__allocator_std___Rb_tree_node_int__* t965 = __a962;
  unsigned long t966 = __n963;
  struct std___Rb_tree_node_int_* r967 = std__allocator_std___Rb_tree_node_int_____allocate(t965, t966);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval964 = r967;
  struct std___Rb_tree_node_int_* t968 = __retval964;
  return t968;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v969) {
bb970: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this971;
  struct std___Rb_tree_node_int_* __retval972;
  this971 = v969;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t973 = this971;
  struct std__allocator_std___Rb_tree_node_int__* r974 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t973);
  unsigned long c975 = 1;
  struct std___Rb_tree_node_int_* r976 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r974, c975);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval972 = r976;
  struct std___Rb_tree_node_int_* t977 = __retval972;
  return t977;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v978, int* v979) {
bb980: ;
  int* __location981;
  int* __args982;
  int* __retval983;
  void* __loc984;
  __location981 = v978;
  __args982 = v979;
  int* t985 = __location981;
  void* cast986 = (void*)t985;
  __loc984 = cast986;
    void* t987 = __loc984;
    int* cast988 = (int*)t987;
    int* t989 = __args982;
    int t990 = *t989;
    *cast988 = t990;
    __retval983 = cast988;
    int* t991 = __retval983;
    return t991;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v992, int* v993, int* v994) {
bb995: ;
  struct std__allocator_std___Rb_tree_node_int__* __a996;
  int* __p997;
  int* __args998;
  __a996 = v992;
  __p997 = v993;
  __args998 = v994;
  int* t999 = __p997;
  int* t1000 = __args998;
  int* r1001 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t999, t1000);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1002, struct std___Rb_tree_node_int_* v1003, int* v1004) {
bb1005: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1006;
  struct std___Rb_tree_node_int_* __node1007;
  int* __args1008;
  this1006 = v1002;
  __node1007 = v1003;
  __args1008 = v1004;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1009 = this1006;
      struct std__allocator_std___Rb_tree_node_int__* r1011 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1009);
      struct std___Rb_tree_node_int_* t1012 = __node1007;
      int* r1013 = std___Rb_tree_node_int____M_valptr(t1012);
      if (__cir_exc_active) {
        goto cir_try_dispatch1010;
      }
      int* t1014 = __args1008;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1011, r1013, t1014);
    cir_try_dispatch1010: ;
    if (__cir_exc_active) {
    {
      int ca_tok1015 = 0;
      void* ca_exn1016 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1017 = __node1007;
        struct std___Rb_tree_node_int_* t1018 = __node1007;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1009, t1018);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1019, int* v1020) {
bb1021: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1022;
  int* __args1023;
  struct std___Rb_tree_node_int_* __retval1024;
  struct std___Rb_tree_node_int_* __tmp1025;
  this1022 = v1019;
  __args1023 = v1020;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1026 = this1022;
  struct std___Rb_tree_node_int_* r1027 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1026);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1025 = r1027;
  struct std___Rb_tree_node_int_* t1028 = __tmp1025;
  int* t1029 = __args1023;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1026, t1028, t1029);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1030 = __tmp1025;
  __retval1024 = t1030;
  struct std___Rb_tree_node_int_* t1031 = __retval1024;
  return t1031;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1032, int* v1033) {
bb1034: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1035;
  int* __arg1036;
  struct std___Rb_tree_node_int_* __retval1037;
  this1035 = v1032;
  __arg1036 = v1033;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1038 = this1035;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1039 = t1038->_M_t;
  int* t1040 = __arg1036;
  struct std___Rb_tree_node_int_* r1041 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1039, t1040);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1037 = r1041;
  struct std___Rb_tree_node_int_* t1042 = __retval1037;
  return t1042;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1043, struct std___Rb_tree_node_base* v1044, struct std___Rb_tree_node_base* v1045, struct std___Rb_tree_node_base* v1046) {
bb1047: ;
  _Bool __insert_left1048;
  struct std___Rb_tree_node_base* __x1049;
  struct std___Rb_tree_node_base* __p1050;
  struct std___Rb_tree_node_base* __header1051;
  __insert_left1048 = v1043;
  __x1049 = v1044;
  __p1050 = v1045;
  __header1051 = v1046;
  _Bool t1052 = __insert_left1048;
  struct std___Rb_tree_node_base* t1053 = __x1049;
  struct std___Rb_tree_node_base* t1054 = __p1050;
  struct std___Rb_tree_node_base* t1055 = __header1051;
  std___Rb_tree_insert_and_rebalance(t1052, t1053, t1054, t1055);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1056, struct std___Rb_tree_node_base* v1057, struct std___Rb_tree_node_base* v1058, int* v1059, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1060) {
bb1061: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1062;
  struct std___Rb_tree_node_base* __x1063;
  struct std___Rb_tree_node_base* __p1064;
  int* __v1065;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1066;
  struct std___Rb_tree_iterator_int_ __retval1067;
  _Bool __insert_left1068;
  struct std___Rb_tree_node_base* __z1069;
  this1062 = v1056;
  __x1063 = v1057;
  __p1064 = v1058;
  __v1065 = v1059;
  __node_gen1066 = v1060;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1070 = this1062;
  struct std___Rb_tree_node_base* t1071 = __x1063;
  _Bool cast1072 = (_Bool)t1071;
  _Bool ternary1073;
  if (cast1072) {
    _Bool c1074 = 1;
    ternary1073 = (_Bool)c1074;
  } else {
    struct std___Rb_tree_node_base* t1075 = __p1064;
    struct std___Rb_tree_node_base* r1076 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1070);
    _Bool c1077 = ((t1075 == r1076)) ? 1 : 0;
    ternary1073 = (_Bool)c1077;
  }
  _Bool ternary1078;
  if (ternary1073) {
    _Bool c1079 = 1;
    ternary1078 = (_Bool)c1079;
  } else {
    struct std___Identity_int_ ref_tmp01080;
    struct std___Rb_tree_key_compare_std__less_int__* base1081 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1070->_M_impl) + 0);
    struct std__less_int_* cast1082 = (struct std__less_int_*)base1081;
    int* t1083 = __v1065;
    int* r1084 = std___Identity_int___operator___int___const(&ref_tmp01080, t1083);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1085 = __p1064;
    int* r1086 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1085);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1087 = std__less_int___operator___int_const___int_const___const(cast1082, r1084, r1086);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1078 = (_Bool)r1087;
  }
  __insert_left1068 = ternary1078;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1088 = __node_gen1066;
  int* t1089 = __v1065;
  struct std___Rb_tree_node_int_* r1090 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1088, t1089);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1091 = (struct std___Rb_tree_node_base*)((char *)r1090 + 0);
  struct std___Rb_tree_node_base* r1092 = std___Rb_tree_node_base___M_base_ptr___const(base1091);
  __z1069 = r1092;
  _Bool t1093 = __insert_left1068;
  struct std___Rb_tree_node_base* t1094 = __z1069;
  struct std___Rb_tree_node_base* t1095 = __p1064;
  struct std___Rb_tree_header* base1096 = (struct std___Rb_tree_header*)((char *)&(t1070->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1093, t1094, t1095, &base1096->_M_header);
  struct std___Rb_tree_header* base1097 = (struct std___Rb_tree_header*)((char *)&(t1070->_M_impl) + 8);
  unsigned long t1098 = base1097->_M_node_count;
  unsigned long u1099 = t1098 + 1;
  base1097->_M_node_count = u1099;
  struct std___Rb_tree_node_base* t1100 = __z1069;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1067, t1100);
  struct std___Rb_tree_iterator_int_ t1101 = __retval1067;
  return t1101;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1102, struct std___Rb_tree_node_base* v1103) {
bb1104: ;
  struct std___Rb_tree_iterator_int_* this1105;
  struct std___Rb_tree_node_base* __x1106;
  this1105 = v1102;
  __x1106 = v1103;
  struct std___Rb_tree_iterator_int_* t1107 = this1105;
  struct std___Rb_tree_node_base* t1108 = __x1106;
  t1107->_M_node = t1108;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1109, struct std___Rb_tree_const_iterator_int_ v1110, int* v1111, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1112) {
bb1113: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1114;
  struct std___Rb_tree_const_iterator_int_ __position1115;
  int* __v1116;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1117;
  struct std___Rb_tree_iterator_int_ __retval1118;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1119;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01120;
  struct std___Identity_int_ ref_tmp01121;
  this1114 = v1109;
  __position1115 = v1110;
  __v1116 = v1111;
  __node_gen1117 = v1112;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1122 = this1114;
  agg_tmp01120 = __position1115; // copy
  int* t1123 = __v1116;
  int* r1124 = std___Identity_int___operator___int___const(&ref_tmp01121, t1123);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1125 = agg_tmp01120;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1126 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1122, t1125, r1124);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1119 = r1126;
    struct std___Rb_tree_node_base* t1127 = __res1119.second;
    _Bool cast1128 = (_Bool)t1127;
    if (cast1128) {
      struct std___Rb_tree_node_base* t1129 = __res1119.first;
      struct std___Rb_tree_node_base* t1130 = __res1119.second;
      int* t1131 = __v1116;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1132 = __node_gen1117;
      struct std___Rb_tree_iterator_int_ r1133 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1122, t1129, t1130, t1131, t1132);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1118 = r1133;
      struct std___Rb_tree_iterator_int_ t1134 = __retval1118;
      return t1134;
    }
  struct std___Rb_tree_node_base* t1135 = __res1119.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1118, t1135);
  struct std___Rb_tree_iterator_int_ t1136 = __retval1118;
  return t1136;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1137) {
bb1138: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1139;
  struct std___Rb_tree_iterator_int_ __retval1140;
  this1139 = v1137;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1141 = this1139;
  struct std___Rb_tree_node_base* r1142 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1141);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1140, r1142);
  struct std___Rb_tree_iterator_int_ t1143 = __retval1140;
  return t1143;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1144, struct std___Rb_tree_iterator_int_* v1145) {
bb1146: ;
  struct std___Rb_tree_const_iterator_int_* this1147;
  struct std___Rb_tree_iterator_int_* __it1148;
  this1147 = v1144;
  __it1148 = v1145;
  struct std___Rb_tree_const_iterator_int_* t1149 = this1147;
  struct std___Rb_tree_iterator_int_* t1150 = __it1148;
  struct std___Rb_tree_node_base* t1151 = t1150->_M_node;
  t1149->_M_node = t1151;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1152, int* v1153, int* v1154) {
bb1155: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1156;
  int* __first1157;
  int* __last1158;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1159;
  this1156 = v1152;
  __first1157 = v1153;
  __last1158 = v1154;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1160 = this1156;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1159, t1160);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01161;
    struct std___Rb_tree_iterator_int_ ref_tmp01162;
    struct std___Rb_tree_iterator_int_ agg_tmp11163;
    while (1) {
      int* t1165 = __first1157;
      int* t1166 = __last1158;
      _Bool c1167 = ((t1165 != t1166)) ? 1 : 0;
      if (!c1167) break;
      struct std___Rb_tree_iterator_int_ r1168 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1160);
      ref_tmp01162 = r1168;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01161, &ref_tmp01162);
      int* t1169 = __first1157;
      struct std___Rb_tree_const_iterator_int_ t1170 = agg_tmp01161;
      struct std___Rb_tree_iterator_int_ r1171 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1160, t1170, t1169, &__an1159);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11163 = r1171;
    for_step1164: ;
      int* t1172 = __first1157;
      int c1173 = 1;
      int* ptr1174 = &(t1172)[c1173];
      __first1157 = ptr1174;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1175) {
bb1176: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1177;
  this1177 = v1175;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1178 = this1177;
  struct std__allocator_std___Rb_tree_node_int__* base1179 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1178 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1179);
    struct std___Rb_tree_key_compare_std__less_int__* base1180 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1178 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1180);
    struct std___Rb_tree_header* base1181 = (struct std___Rb_tree_header*)((char *)t1178 + 8);
    std___Rb_tree_header___Rb_tree_header(base1181);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1182) {
bb1183: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1184;
  this1184 = v1182;
  struct std____new_allocator_std___Rb_tree_node_int__* t1185 = this1184;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1186) {
bb1187: ;
  struct std__allocator_std___Rb_tree_node_int__* this1188;
  this1188 = v1186;
  struct std__allocator_std___Rb_tree_node_int__* t1189 = this1188;
  struct std____new_allocator_std___Rb_tree_node_int__* base1190 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1189 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1190);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1191) {
bb1192: ;
  struct std___Rb_tree_key_compare_std__less_int__* this1193;
  this1193 = v1191;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1194) {
bb1195: ;
  struct std___Rb_tree_header* this1196;
  this1196 = v1194;
  struct std___Rb_tree_header* t1197 = this1196;
  struct std___Rb_tree_node_base* c1198 = ((void*)0);
  t1197->_M_header._M_parent = c1198;
  t1197->_M_header._M_left = &t1197->_M_header;
  t1197->_M_header._M_right = &t1197->_M_header;
  unsigned long c1199 = 0;
  t1197->_M_node_count = c1199;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1200) {
bb1201: ;
  struct std___Rb_tree_header* this1202;
  this1202 = v1200;
  struct std___Rb_tree_header* t1203 = this1202;
  unsigned int c1204 = 0;
  t1203->_M_header._M_color = c1204;
  std___Rb_tree_header___M_reset(t1203);
  if (__cir_exc_active) {
    return;
  }
  return;
}

