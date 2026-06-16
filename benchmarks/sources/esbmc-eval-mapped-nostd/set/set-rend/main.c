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

int __const_main_myints[5] = {78, 21, 64, 49, 17};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[11] = "*rit == 78";
char _str_1[100] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-rend/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "myset contains:";
char _str_3[2] = " ";
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_3(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_2(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rend___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__set_int__std__less_int___std__allocator_int_____rend___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* std__iterator_std__bidirectional_iterator_tag__int__long__int_const___int_const____operator_(struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* p0, struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator_(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0, struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p1);
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0, struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p1);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator__(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0, int p1);
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
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_3(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v11) {
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

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v23) {
bb24: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this25;
  struct std___Rb_tree_const_iterator_int_ __retval26;
  this25 = v23;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t27 = this25;
  struct std___Rb_tree_header* base28 = (struct std___Rb_tree_header*)((char *)&(t27->_M_impl) + 8);
  struct std___Rb_tree_node_base* t29 = base28->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval26, t29);
  struct std___Rb_tree_const_iterator_int_ t30 = __retval26;
  return t30;
}

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEC2ES1_
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_2(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v31, struct std___Rb_tree_const_iterator_int_ v32) {
bb33: ;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this34;
  struct std___Rb_tree_const_iterator_int_ __x35;
  this34 = v31;
  __x35 = v32;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t36 = this34;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base37 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t36 + 0);
  t36->current = __x35; // copy
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4rendEv
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rend___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v38) {
bb39: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this40;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ __retval41;
  struct std___Rb_tree_const_iterator_int_ agg_tmp042;
  this40 = v38;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t43 = this40;
  struct std___Rb_tree_const_iterator_int_ r44 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(t43);
  agg_tmp042 = r44;
  struct std___Rb_tree_const_iterator_int_ t45 = agg_tmp042;
  std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_2(&__retval41, t45);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ t46 = __retval41;
  return t46;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4rendEv
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__set_int__std__less_int___std__allocator_int_____rend___const(struct std__set_int__std__less_int___std__allocator_int__* v47) {
bb48: ;
  struct std__set_int__std__less_int___std__allocator_int__* this49;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ __retval50;
  this49 = v47;
  struct std__set_int__std__less_int___std__allocator_int__* t51 = this49;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ r52 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rend___const(&t51->_M_t);
  __retval50 = r52;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ t53 = __retval50;
  return t53;
}

// function: _ZNSt8iteratorISt26bidirectional_iterator_tagilPKiRS1_EaSERKS4_
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* std__iterator_std__bidirectional_iterator_tag__int__long__int_const___int_const____operator_(struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* v54, struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* v55) {
bb56: ;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* this57;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* unnamed58;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* __retval59;
  this57 = v54;
  unnamed58 = v55;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* t60 = this57;
  __retval59 = t60;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* t61 = __retval59;
  return t61;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSERKS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v62, struct std___Rb_tree_const_iterator_int_* v63) {
bb64: ;
  struct std___Rb_tree_const_iterator_int_* this65;
  struct std___Rb_tree_const_iterator_int_* unnamed66;
  struct std___Rb_tree_const_iterator_int_* __retval67;
  this65 = v62;
  unnamed66 = v63;
  struct std___Rb_tree_const_iterator_int_* t68 = this65;
  struct std___Rb_tree_const_iterator_int_* t69 = unnamed66;
  struct std___Rb_tree_node_base* t70 = t69->_M_node;
  t68->_M_node = t70;
  __retval67 = t68;
  struct std___Rb_tree_const_iterator_int_* t71 = __retval67;
  return t71;
}

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEaSERKS2_
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator_(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v72, struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v73) {
bb74: ;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this75;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* unnamed76;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* __retval77;
  this75 = v72;
  unnamed76 = v73;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t78 = this75;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base79 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t78 + 0);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t80 = unnamed76;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base81 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t80 + 0);
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* r82 = std__iterator_std__bidirectional_iterator_tag__int__long__int_const___int_const____operator_(base79, base81);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t83 = unnamed76;
  struct std___Rb_tree_const_iterator_int_* r84 = std___Rb_tree_const_iterator_int___operator_(&t78->current, &t83->current);
  __retval77 = t78;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t85 = __retval77;
  return t85;
}

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEC2ERKS2_
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v86, struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v87) {
bb88: ;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this89;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* __x90;
  this89 = v86;
  __x90 = v87;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t91 = this89;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base92 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t91 + 0);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t93 = __x90;
  t91->current = t93->current; // copy
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEmmEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v94) {
bb95: ;
  struct std___Rb_tree_const_iterator_int_* this96;
  struct std___Rb_tree_const_iterator_int_* __retval97;
  this96 = v94;
  struct std___Rb_tree_const_iterator_int_* t98 = this96;
  struct std___Rb_tree_node_base* t99 = t98->_M_node;
  struct std___Rb_tree_node_base* r100 = std___Rb_tree_decrement(t99);
  t98->_M_node = r100;
  __retval97 = t98;
  struct std___Rb_tree_const_iterator_int_* t101 = __retval97;
  return t101;
}

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEppEi
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator__(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v102, int v103) {
bb104: ;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this105;
  int unnamed106;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ __retval107;
  this105 = v102;
  unnamed106 = v103;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t108 = this105;
  std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(&__retval107, t108);
  struct std___Rb_tree_const_iterator_int_* r109 = std___Rb_tree_const_iterator_int___operator__(&t108->current);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ t110 = __retval107;
  return t110;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v111) {
bb112: ;
  struct __gnu_cxx____aligned_membuf_int_* this113;
  void* __retval114;
  this113 = v111;
  struct __gnu_cxx____aligned_membuf_int_* t115 = this113;
  void* cast116 = (void*)&(t115->_M_storage);
  __retval114 = cast116;
  void* t117 = __retval114;
  return t117;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v118) {
bb119: ;
  struct __gnu_cxx____aligned_membuf_int_* this120;
  int* __retval121;
  this120 = v118;
  struct __gnu_cxx____aligned_membuf_int_* t122 = this120;
  void* r123 = __gnu_cxx____aligned_membuf_int____M_addr___const(t122);
  int* cast124 = (int*)r123;
  __retval121 = cast124;
  int* t125 = __retval121;
  return t125;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v126) {
bb127: ;
  struct std___Rb_tree_node_int_* this128;
  int* __retval129;
  this128 = v126;
  struct std___Rb_tree_node_int_* t130 = this128;
  int* r131 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t130->_M_storage);
  __retval129 = r131;
  int* t132 = __retval129;
  return t132;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v133) {
bb134: ;
  struct std___Rb_tree_const_iterator_int_* this135;
  int* __retval136;
  this135 = v133;
  struct std___Rb_tree_const_iterator_int_* t137 = this135;
  struct std___Rb_tree_node_base* t138 = t137->_M_node;
  struct std___Rb_tree_node_int_* derived139 = ((t138) ? (struct std___Rb_tree_node_int_*)((char *)t138 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r140 = std___Rb_tree_node_int____M_valptr___const(derived139);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval136 = r140;
  int* t141 = __retval136;
  return t141;
}

// function: _ZNKSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEdeEv
int* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v142) {
bb143: ;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this144;
  int* __retval145;
  struct std___Rb_tree_const_iterator_int_ __tmp146;
  this144 = v142;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t147 = this144;
  __tmp146 = t147->current; // copy
  struct std___Rb_tree_const_iterator_int_* r148 = std___Rb_tree_const_iterator_int___operator__(&__tmp146);
  int* r149 = std___Rb_tree_const_iterator_int___operator____const(r148);
  __retval145 = r149;
  int* t150 = __retval145;
  return t150;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v151, int v152) {
bb153: ;
  int __a154;
  int __b155;
  int __retval156;
  __a154 = v151;
  __b155 = v152;
  int t157 = __a154;
  int t158 = __b155;
  int b159 = t157 | t158;
  __retval156 = b159;
  int t160 = __retval156;
  return t160;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v161) {
bb162: ;
  struct std__basic_ios_char__std__char_traits_char__* this163;
  int __retval164;
  this163 = v161;
  struct std__basic_ios_char__std__char_traits_char__* t165 = this163;
  struct std__ios_base* base166 = (struct std__ios_base*)((char *)t165 + 0);
  int t167 = base166->_M_streambuf_state;
  __retval164 = t167;
  int t168 = __retval164;
  return t168;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v169, int v170) {
bb171: ;
  struct std__basic_ios_char__std__char_traits_char__* this172;
  int __state173;
  this172 = v169;
  __state173 = v170;
  struct std__basic_ios_char__std__char_traits_char__* t174 = this172;
  int r175 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t174);
  if (__cir_exc_active) {
    return;
  }
  int t176 = __state173;
  int r177 = std__operator_(r175, t176);
  std__basic_ios_char__std__char_traits_char_____clear(t174, r177);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v178, char* v179) {
bb180: ;
  char* __c1181;
  char* __c2182;
  _Bool __retval183;
  __c1181 = v178;
  __c2182 = v179;
  char* t184 = __c1181;
  char t185 = *t184;
  int cast186 = (int)t185;
  char* t187 = __c2182;
  char t188 = *t187;
  int cast189 = (int)t188;
  _Bool c190 = ((cast186 == cast189)) ? 1 : 0;
  __retval183 = c190;
  _Bool t191 = __retval183;
  return t191;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v192) {
bb193: ;
  char* __p194;
  unsigned long __retval195;
  unsigned long __i196;
  __p194 = v192;
  unsigned long c197 = 0;
  __i196 = c197;
    char ref_tmp0198;
    while (1) {
      unsigned long t199 = __i196;
      char* t200 = __p194;
      char* ptr201 = &(t200)[t199];
      char c202 = 0;
      ref_tmp0198 = c202;
      _Bool r203 = __gnu_cxx__char_traits_char___eq(ptr201, &ref_tmp0198);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u204 = !r203;
      if (!u204) break;
      unsigned long t205 = __i196;
      unsigned long u206 = t205 + 1;
      __i196 = u206;
    }
  unsigned long t207 = __i196;
  __retval195 = t207;
  unsigned long t208 = __retval195;
  return t208;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v209) {
bb210: ;
  char* __s211;
  unsigned long __retval212;
  __s211 = v209;
    _Bool r213 = std____is_constant_evaluated();
    if (r213) {
      char* t214 = __s211;
      unsigned long r215 = __gnu_cxx__char_traits_char___length(t214);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval212 = r215;
      unsigned long t216 = __retval212;
      return t216;
    }
  char* t217 = __s211;
  unsigned long r218 = strlen(t217);
  __retval212 = r218;
  unsigned long t219 = __retval212;
  return t219;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v220, char* v221) {
bb222: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out223;
  char* __s224;
  struct std__basic_ostream_char__std__char_traits_char__* __retval225;
  __out223 = v220;
  __s224 = v221;
    char* t226 = __s224;
    _Bool cast227 = (_Bool)t226;
    _Bool u228 = !cast227;
    if (u228) {
      struct std__basic_ostream_char__std__char_traits_char__* t229 = __out223;
      void** v230 = (void**)t229;
      void* v231 = *((void**)v230);
      unsigned char* cast232 = (unsigned char*)v231;
      long c233 = -24;
      unsigned char* ptr234 = &(cast232)[c233];
      long* cast235 = (long*)ptr234;
      long t236 = *cast235;
      unsigned char* cast237 = (unsigned char*)t229;
      unsigned char* ptr238 = &(cast237)[t236];
      struct std__basic_ostream_char__std__char_traits_char__* cast239 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr238;
      struct std__basic_ios_char__std__char_traits_char__* cast240 = (struct std__basic_ios_char__std__char_traits_char__*)cast239;
      int t241 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast240, t241);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t242 = __out223;
      char* t243 = __s224;
      char* t244 = __s224;
      unsigned long r245 = std__char_traits_char___length(t244);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast246 = (long)r245;
      struct std__basic_ostream_char__std__char_traits_char__* r247 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t242, t243, cast246);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t248 = __out223;
  __retval225 = t248;
  struct std__basic_ostream_char__std__char_traits_char__* t249 = __retval225;
  return t249;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v250, void* v251) {
bb252: ;
  struct std__basic_ostream_char__std__char_traits_char__* this253;
  void* __pf254;
  struct std__basic_ostream_char__std__char_traits_char__* __retval255;
  this253 = v250;
  __pf254 = v251;
  struct std__basic_ostream_char__std__char_traits_char__* t256 = this253;
  void* t257 = __pf254;
  struct std__basic_ostream_char__std__char_traits_char__* r258 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t257)(t256);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval255 = r258;
  struct std__basic_ostream_char__std__char_traits_char__* t259 = __retval255;
  return t259;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v260) {
bb261: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os262;
  struct std__basic_ostream_char__std__char_traits_char__* __retval263;
  __os262 = v260;
  struct std__basic_ostream_char__std__char_traits_char__* t264 = __os262;
  struct std__basic_ostream_char__std__char_traits_char__* r265 = std__ostream__flush(t264);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval263 = r265;
  struct std__basic_ostream_char__std__char_traits_char__* t266 = __retval263;
  return t266;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v267) {
bb268: ;
  struct std__ctype_char_* __f269;
  struct std__ctype_char_* __retval270;
  __f269 = v267;
    struct std__ctype_char_* t271 = __f269;
    _Bool cast272 = (_Bool)t271;
    _Bool u273 = !cast272;
    if (u273) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t274 = __f269;
  __retval270 = t274;
  struct std__ctype_char_* t275 = __retval270;
  return t275;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v276, char v277) {
bb278: ;
  struct std__ctype_char_* this279;
  char __c280;
  char __retval281;
  this279 = v276;
  __c280 = v277;
  struct std__ctype_char_* t282 = this279;
    char t283 = t282->_M_widen_ok;
    _Bool cast284 = (_Bool)t283;
    if (cast284) {
      char t285 = __c280;
      unsigned char cast286 = (unsigned char)t285;
      unsigned long cast287 = (unsigned long)cast286;
      char t288 = t282->_M_widen[cast287];
      __retval281 = t288;
      char t289 = __retval281;
      return t289;
    }
  std__ctype_char____M_widen_init___const(t282);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t290 = __c280;
  void** v291 = (void**)t282;
  void* v292 = *((void**)v291);
  char vcall295 = (char)__VERIFIER_virtual_call_char_char(t282, 6, t290);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval281 = vcall295;
  char t296 = __retval281;
  return t296;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v297, char v298) {
bb299: ;
  struct std__basic_ios_char__std__char_traits_char__* this300;
  char __c301;
  char __retval302;
  this300 = v297;
  __c301 = v298;
  struct std__basic_ios_char__std__char_traits_char__* t303 = this300;
  struct std__ctype_char_* t304 = t303->_M_ctype;
  struct std__ctype_char_* r305 = std__ctype_char__const__std____check_facet_std__ctype_char___(t304);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t306 = __c301;
  char r307 = std__ctype_char___widen_char__const(r305, t306);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval302 = r307;
  char t308 = __retval302;
  return t308;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v309) {
bb310: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os311;
  struct std__basic_ostream_char__std__char_traits_char__* __retval312;
  __os311 = v309;
  struct std__basic_ostream_char__std__char_traits_char__* t313 = __os311;
  struct std__basic_ostream_char__std__char_traits_char__* t314 = __os311;
  void** v315 = (void**)t314;
  void* v316 = *((void**)v315);
  unsigned char* cast317 = (unsigned char*)v316;
  long c318 = -24;
  unsigned char* ptr319 = &(cast317)[c318];
  long* cast320 = (long*)ptr319;
  long t321 = *cast320;
  unsigned char* cast322 = (unsigned char*)t314;
  unsigned char* ptr323 = &(cast322)[t321];
  struct std__basic_ostream_char__std__char_traits_char__* cast324 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr323;
  struct std__basic_ios_char__std__char_traits_char__* cast325 = (struct std__basic_ios_char__std__char_traits_char__*)cast324;
  char c326 = 10;
  char r327 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast325, c326);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r328 = std__ostream__put(t313, r327);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r329 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r328);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval312 = r329;
  struct std__basic_ostream_char__std__char_traits_char__* t330 = __retval312;
  return t330;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v331) {
bb332: ;
  struct std__set_int__std__less_int___std__allocator_int__* this333;
  this333 = v331;
  struct std__set_int__std__less_int___std__allocator_int__* t334 = this333;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t334->_M_t);
  }
  return;
}

// function: main
int main() {
bb335: ;
  int __retval336;
  int myints337[5];
  struct std__set_int__std__less_int___std__allocator_int__ myset338;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ rit339;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ ref_tmp0340;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ agg_tmp0341;
  int c342 = 0;
  __retval336 = c342;
  // array copy
  __builtin_memcpy(myints337, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast343 = (int*)&(myints337);
  int* cast344 = (int*)&(myints337);
  int c345 = 5;
  int* ptr346 = &(cast344)[c345];
  std__set_int__std__less_int___std__allocator_int_____set_int__(&myset338, cast343, ptr346);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator_3(&rit339);
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ r347 = std__set_int__std__less_int___std__allocator_int_____rend___const(&myset338);
    ref_tmp0340 = r347;
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* r348 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator_(&rit339, &ref_tmp0340);
    int c349 = 0;
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ r350 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator__(&rit339, c349);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset338);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp0341 = r350;
    int* r351 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(&rit339);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset338);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t352 = *r351;
    int c353 = 78;
    _Bool c354 = ((t352 == c353)) ? 1 : 0;
    if (c354) {
    } else {
      char* cast355 = (char*)&(_str);
      char* c356 = (char*)_str_1;
      unsigned int c357 = 21;
      char* cast358 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast355, c356, c357, cast358);
    }
    char* cast359 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r360 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast359);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset338);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast361 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast361);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset338);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r363 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(&rit339);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset338);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t364 = *r363;
    struct std__basic_ostream_char__std__char_traits_char__* r365 = std__ostream__operator__(r362, t364);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset338);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r366 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset338);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c367 = 0;
    __retval336 = c367;
    int t368 = __retval336;
    int ret_val369 = t368;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset338);
    }
    return ret_val369;
  int t370 = __retval336;
  return t370;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v371) {
bb372: ;
  struct std___Rb_tree_const_iterator_int_* this373;
  this373 = v371;
  struct std___Rb_tree_const_iterator_int_* t374 = this373;
  struct std___Rb_tree_node_base* c375 = ((void*)0);
  t374->_M_node = c375;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v376) {
bb377: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this378;
  this378 = v376;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t379 = this378;
    struct std___Rb_tree_node_int_* r380 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t379);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t379, r380);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t379->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t379->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v381) {
bb382: ;
  struct std___Rb_tree_node_int_* this383;
  struct std___Rb_tree_node_int_* __retval384;
  this383 = v381;
  struct std___Rb_tree_node_int_* t385 = this383;
  __retval384 = t385;
  struct std___Rb_tree_node_int_* t386 = __retval384;
  return t386;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v387) {
bb388: ;
  struct std___Rb_tree_node_int_* __x389;
  struct std___Rb_tree_node_int_* __retval390;
  __x389 = v387;
  struct std___Rb_tree_node_int_* t391 = __x389;
  struct std___Rb_tree_node_base* base392 = (struct std___Rb_tree_node_base*)((char *)t391 + 0);
  struct std___Rb_tree_node_base* t393 = base392->_M_right;
  _Bool cast394 = (_Bool)t393;
  struct std___Rb_tree_node_int_* ternary395;
  if (cast394) {
    struct std___Rb_tree_node_int_* t396 = __x389;
    struct std___Rb_tree_node_base* base397 = (struct std___Rb_tree_node_base*)((char *)t396 + 0);
    struct std___Rb_tree_node_base* t398 = base397->_M_right;
    struct std___Rb_tree_node_int_* derived399 = (struct std___Rb_tree_node_int_*)((char *)t398 - 0);
    struct std___Rb_tree_node_int_* r400 = std___Rb_tree_node_int____M_node_ptr(derived399);
    ternary395 = (struct std___Rb_tree_node_int_*)r400;
  } else {
    struct std___Rb_tree_node_int_* c401 = ((void*)0);
    ternary395 = (struct std___Rb_tree_node_int_*)c401;
  }
  __retval390 = ternary395;
  struct std___Rb_tree_node_int_* t402 = __retval390;
  return t402;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v403) {
bb404: ;
  struct std___Rb_tree_node_int_* __x405;
  struct std___Rb_tree_node_int_* __retval406;
  __x405 = v403;
  struct std___Rb_tree_node_int_* t407 = __x405;
  struct std___Rb_tree_node_base* base408 = (struct std___Rb_tree_node_base*)((char *)t407 + 0);
  struct std___Rb_tree_node_base* t409 = base408->_M_left;
  _Bool cast410 = (_Bool)t409;
  struct std___Rb_tree_node_int_* ternary411;
  if (cast410) {
    struct std___Rb_tree_node_int_* t412 = __x405;
    struct std___Rb_tree_node_base* base413 = (struct std___Rb_tree_node_base*)((char *)t412 + 0);
    struct std___Rb_tree_node_base* t414 = base413->_M_left;
    struct std___Rb_tree_node_int_* derived415 = (struct std___Rb_tree_node_int_*)((char *)t414 - 0);
    struct std___Rb_tree_node_int_* r416 = std___Rb_tree_node_int____M_node_ptr(derived415);
    ternary411 = (struct std___Rb_tree_node_int_*)r416;
  } else {
    struct std___Rb_tree_node_int_* c417 = ((void*)0);
    ternary411 = (struct std___Rb_tree_node_int_*)c417;
  }
  __retval406 = ternary411;
  struct std___Rb_tree_node_int_* t418 = __retval406;
  return t418;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v419) {
bb420: ;
  int* __location421;
  __location421 = v419;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v422, int* v423) {
bb424: ;
  struct std__allocator_std___Rb_tree_node_int__* __a425;
  int* __p426;
  __a425 = v422;
  __p426 = v423;
  int* t427 = __p426;
  void_std__destroy_at_int_(t427);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v428) {
bb429: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this430;
  struct std__allocator_std___Rb_tree_node_int__* __retval431;
  this430 = v428;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t432 = this430;
  struct std__allocator_std___Rb_tree_node_int__* base433 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t432->_M_impl) + 0);
  __retval431 = base433;
  struct std__allocator_std___Rb_tree_node_int__* t434 = __retval431;
  return t434;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v435) {
bb436: ;
  struct __gnu_cxx____aligned_membuf_int_* this437;
  void* __retval438;
  this437 = v435;
  struct __gnu_cxx____aligned_membuf_int_* t439 = this437;
  void* cast440 = (void*)&(t439->_M_storage);
  __retval438 = cast440;
  void* t441 = __retval438;
  return t441;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v442) {
bb443: ;
  struct __gnu_cxx____aligned_membuf_int_* this444;
  int* __retval445;
  this444 = v442;
  struct __gnu_cxx____aligned_membuf_int_* t446 = this444;
  void* r447 = __gnu_cxx____aligned_membuf_int____M_addr(t446);
  int* cast448 = (int*)r447;
  __retval445 = cast448;
  int* t449 = __retval445;
  return t449;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v450) {
bb451: ;
  struct std___Rb_tree_node_int_* this452;
  int* __retval453;
  this452 = v450;
  struct std___Rb_tree_node_int_* t454 = this452;
  int* r455 = __gnu_cxx____aligned_membuf_int____M_ptr(&t454->_M_storage);
  __retval453 = r455;
  int* t456 = __retval453;
  return t456;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v457, struct std___Rb_tree_node_int_* v458) {
bb459: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this460;
  struct std___Rb_tree_node_int_* __p461;
  this460 = v457;
  __p461 = v458;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t462 = this460;
  struct std__allocator_std___Rb_tree_node_int__* r463 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t462);
  struct std___Rb_tree_node_int_* t464 = __p461;
  int* r465 = std___Rb_tree_node_int____M_valptr(t464);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r463, r465);
  struct std___Rb_tree_node_int_* t466 = __p461;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb467: ;
  _Bool __retval468;
    _Bool c469 = 0;
    __retval468 = c469;
    _Bool t470 = __retval468;
    return t470;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v471, struct std___Rb_tree_node_int_* v472, unsigned long v473) {
bb474: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this475;
  struct std___Rb_tree_node_int_* __p476;
  unsigned long __n477;
  this475 = v471;
  __p476 = v472;
  __n477 = v473;
  struct std____new_allocator_std___Rb_tree_node_int__* t478 = this475;
    unsigned long c479 = 8;
    unsigned long c480 = 16;
    _Bool c481 = ((c479 > c480)) ? 1 : 0;
    if (c481) {
      struct std___Rb_tree_node_int_* t482 = __p476;
      void* cast483 = (void*)t482;
      unsigned long t484 = __n477;
      unsigned long c485 = 40;
      unsigned long b486 = t484 * c485;
      unsigned long c487 = 8;
      operator_delete_3(cast483, b486, c487);
      return;
    }
  struct std___Rb_tree_node_int_* t488 = __p476;
  void* cast489 = (void*)t488;
  unsigned long t490 = __n477;
  unsigned long c491 = 40;
  unsigned long b492 = t490 * c491;
  operator_delete_2(cast489, b492);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v493, struct std___Rb_tree_node_int_* v494, unsigned long v495) {
bb496: ;
  struct std__allocator_std___Rb_tree_node_int__* this497;
  struct std___Rb_tree_node_int_* __p498;
  unsigned long __n499;
  this497 = v493;
  __p498 = v494;
  __n499 = v495;
  struct std__allocator_std___Rb_tree_node_int__* t500 = this497;
    _Bool r501 = std____is_constant_evaluated();
    if (r501) {
      struct std___Rb_tree_node_int_* t502 = __p498;
      void* cast503 = (void*)t502;
      operator_delete(cast503);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base504 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t500 + 0);
  struct std___Rb_tree_node_int_* t505 = __p498;
  unsigned long t506 = __n499;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base504, t505, t506);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v507, struct std___Rb_tree_node_int_* v508, unsigned long v509) {
bb510: ;
  struct std__allocator_std___Rb_tree_node_int__* __a511;
  struct std___Rb_tree_node_int_* __p512;
  unsigned long __n513;
  __a511 = v507;
  __p512 = v508;
  __n513 = v509;
  struct std__allocator_std___Rb_tree_node_int__* t514 = __a511;
  struct std___Rb_tree_node_int_* t515 = __p512;
  unsigned long t516 = __n513;
  std__allocator_std___Rb_tree_node_int_____deallocate(t514, t515, t516);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v517, struct std___Rb_tree_node_int_* v518) {
bb519: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this520;
  struct std___Rb_tree_node_int_* __p521;
  this520 = v517;
  __p521 = v518;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t522 = this520;
  struct std__allocator_std___Rb_tree_node_int__* r523 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t522);
  struct std___Rb_tree_node_int_* t524 = __p521;
  unsigned long c525 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r523, t524, c525);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v526, struct std___Rb_tree_node_int_* v527) {
bb528: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this529;
  struct std___Rb_tree_node_int_* __p530;
  this529 = v526;
  __p530 = v527;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t531 = this529;
  struct std___Rb_tree_node_int_* t532 = __p530;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t531, t532);
  struct std___Rb_tree_node_int_* t533 = __p530;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t531, t533);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v534, struct std___Rb_tree_node_int_* v535) {
bb536: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this537;
  struct std___Rb_tree_node_int_* __x538;
  this537 = v534;
  __x538 = v535;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t539 = this537;
    while (1) {
      struct std___Rb_tree_node_int_* t540 = __x538;
      _Bool cast541 = (_Bool)t540;
      if (!cast541) break;
        struct std___Rb_tree_node_int_* __y542;
        struct std___Rb_tree_node_int_* t543 = __x538;
        struct std___Rb_tree_node_int_* r544 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t543);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t539, r544);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t545 = __x538;
        struct std___Rb_tree_node_int_* r546 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t545);
        if (__cir_exc_active) {
          return;
        }
        __y542 = r546;
        struct std___Rb_tree_node_int_* t547 = __x538;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t539, t547);
        struct std___Rb_tree_node_int_* t548 = __y542;
        __x538 = t548;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v549) {
bb550: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this551;
  struct std___Rb_tree_node_int_* __retval552;
  struct std___Rb_tree_node_base* __begin553;
  this551 = v549;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t554 = this551;
  struct std___Rb_tree_header* base555 = (struct std___Rb_tree_header*)((char *)&(t554->_M_impl) + 8);
  struct std___Rb_tree_node_base* t556 = base555->_M_header._M_parent;
  __begin553 = t556;
  struct std___Rb_tree_node_base* t557 = __begin553;
  _Bool cast558 = (_Bool)t557;
  struct std___Rb_tree_node_int_* ternary559;
  if (cast558) {
    struct std___Rb_tree_node_base* t560 = __begin553;
    struct std___Rb_tree_node_int_* derived561 = (struct std___Rb_tree_node_int_*)((char *)t560 - 0);
    struct std___Rb_tree_node_int_* r562 = std___Rb_tree_node_int____M_node_ptr(derived561);
    ternary559 = (struct std___Rb_tree_node_int_*)r562;
  } else {
    struct std___Rb_tree_node_int_* c563 = ((void*)0);
    ternary559 = (struct std___Rb_tree_node_int_*)c563;
  }
  __retval552 = ternary559;
  struct std___Rb_tree_node_int_* t564 = __retval552;
  return t564;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v565) {
bb566: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this567;
  this567 = v565;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t568 = this567;
  {
    struct std__allocator_std___Rb_tree_node_int__* base569 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t568 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base569);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v570) {
bb571: ;
  struct std__allocator_std___Rb_tree_node_int__* this572;
  this572 = v570;
  struct std__allocator_std___Rb_tree_node_int__* t573 = this572;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v574) {
bb575: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this576;
  this576 = v574;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t577 = this576;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t577->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v578, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v579) {
bb580: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this581;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t582;
  this581 = v578;
  __t582 = v579;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t583 = this581;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t584 = __t582;
  t583->_M_t = t584;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v585) {
bb586: ;
  struct std___Rb_tree_node_base* this587;
  struct std___Rb_tree_node_base* __retval588;
  this587 = v585;
  struct std___Rb_tree_node_base* t589 = this587;
  __retval588 = t589;
  struct std___Rb_tree_node_base* t590 = __retval588;
  return t590;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v591) {
bb592: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this593;
  struct std___Rb_tree_node_base* __retval594;
  this593 = v591;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t595 = this593;
  struct std___Rb_tree_header* base596 = (struct std___Rb_tree_header*)((char *)&(t595->_M_impl) + 8);
  struct std___Rb_tree_node_base* r597 = std___Rb_tree_node_base___M_base_ptr___const(&base596->_M_header);
  __retval594 = r597;
  struct std___Rb_tree_node_base* t598 = __retval594;
  return t598;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v599) {
bb600: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this601;
  unsigned long __retval602;
  this601 = v599;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t603 = this601;
  struct std___Rb_tree_header* base604 = (struct std___Rb_tree_header*)((char *)&(t603->_M_impl) + 8);
  unsigned long t605 = base604->_M_node_count;
  __retval602 = t605;
  unsigned long t606 = __retval602;
  return t606;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v607, int* v608, int* v609) {
bb610: ;
  struct std__less_int_* this611;
  int* __x612;
  int* __y613;
  _Bool __retval614;
  this611 = v607;
  __x612 = v608;
  __y613 = v609;
  struct std__less_int_* t615 = this611;
  int* t616 = __x612;
  int t617 = *t616;
  int* t618 = __y613;
  int t619 = *t618;
  _Bool c620 = ((t617 < t619)) ? 1 : 0;
  __retval614 = c620;
  _Bool t621 = __retval614;
  return t621;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v622, int* v623) {
bb624: ;
  struct std___Identity_int_* this625;
  int* __x626;
  int* __retval627;
  this625 = v622;
  __x626 = v623;
  struct std___Identity_int_* t628 = this625;
  int* t629 = __x626;
  __retval627 = t629;
  int* t630 = __retval627;
  return t630;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v631) {
bb632: ;
  struct std___Rb_tree_node_int_* __node633;
  int* __retval634;
  struct std___Identity_int_ ref_tmp0635;
  __node633 = v631;
  struct std___Rb_tree_node_int_* t636 = __node633;
  int* r637 = std___Rb_tree_node_int____M_valptr___const(t636);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r638 = std___Identity_int___operator___int_const___const(&ref_tmp0635, r637);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval634 = r638;
  int* t639 = __retval634;
  return t639;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v640) {
bb641: ;
  struct std___Rb_tree_node_base* __x642;
  int* __retval643;
  __x642 = v640;
  struct std___Rb_tree_node_base* t644 = __x642;
  struct std___Rb_tree_node_int_* derived645 = (struct std___Rb_tree_node_int_*)((char *)t644 - 0);
  int* r646 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived645);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval643 = r646;
  int* t647 = __retval643;
  return t647;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v648) {
bb649: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this650;
  struct std___Rb_tree_node_base** __retval651;
  this650 = v648;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t652 = this650;
  struct std___Rb_tree_header* base653 = (struct std___Rb_tree_header*)((char *)&(t652->_M_impl) + 8);
  __retval651 = &base653->_M_header._M_right;
  struct std___Rb_tree_node_base** t654 = __retval651;
  return t654;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v655, struct std___Rb_tree_node_base** v656, struct std___Rb_tree_node_base** v657) {
bb658: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this659;
  struct std___Rb_tree_node_base** __x660;
  struct std___Rb_tree_node_base** __y661;
  this659 = v655;
  __x660 = v656;
  __y661 = v657;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t662 = this659;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base663 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t662 + 0);
  struct std___Rb_tree_node_base** t664 = __x660;
  struct std___Rb_tree_node_base* t665 = *t664;
  t662->first = t665;
  struct std___Rb_tree_node_base** t666 = __y661;
  struct std___Rb_tree_node_base* t667 = *t666;
  t662->second = t667;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v668) {
bb669: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this670;
  struct std___Rb_tree_node_base* __retval671;
  this670 = v668;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t672 = this670;
  struct std___Rb_tree_header* base673 = (struct std___Rb_tree_header*)((char *)&(t672->_M_impl) + 8);
  struct std___Rb_tree_node_base* t674 = base673->_M_header._M_parent;
  __retval671 = t674;
  struct std___Rb_tree_node_base* t675 = __retval671;
  return t675;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v676) {
bb677: ;
  struct std___Rb_tree_node_base* __x678;
  struct std___Rb_tree_node_base* __retval679;
  __x678 = v676;
  struct std___Rb_tree_node_base* t680 = __x678;
  struct std___Rb_tree_node_base* t681 = t680->_M_left;
  __retval679 = t681;
  struct std___Rb_tree_node_base* t682 = __retval679;
  return t682;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v683, struct std___Rb_tree_iterator_int_* v684) {
bb685: ;
  struct std___Rb_tree_iterator_int_* __x686;
  struct std___Rb_tree_iterator_int_* __y687;
  _Bool __retval688;
  __x686 = v683;
  __y687 = v684;
  struct std___Rb_tree_iterator_int_* t689 = __x686;
  struct std___Rb_tree_node_base* t690 = t689->_M_node;
  struct std___Rb_tree_iterator_int_* t691 = __y687;
  struct std___Rb_tree_node_base* t692 = t691->_M_node;
  _Bool c693 = ((t690 == t692)) ? 1 : 0;
  __retval688 = c693;
  _Bool t694 = __retval688;
  return t694;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v695) {
bb696: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this697;
  struct std___Rb_tree_iterator_int_ __retval698;
  this697 = v695;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t699 = this697;
  struct std___Rb_tree_header* base700 = (struct std___Rb_tree_header*)((char *)&(t699->_M_impl) + 8);
  struct std___Rb_tree_node_base* t701 = base700->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval698, t701);
  struct std___Rb_tree_iterator_int_ t702 = __retval698;
  return t702;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v703, int* v704) {
bb705: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this706;
  int* __k707;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval708;
  struct std___Rb_tree_node_base* __x709;
  struct std___Rb_tree_node_base* __y710;
  _Bool __comp711;
  struct std___Rb_tree_iterator_int_ __j712;
  struct std___Rb_tree_node_base* ref_tmp1713;
  this706 = v703;
  __k707 = v704;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t714 = this706;
  struct std___Rb_tree_node_base* r715 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t714);
  __x709 = r715;
  struct std___Rb_tree_node_base* r716 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t714);
  __y710 = r716;
  _Bool c717 = 1;
  __comp711 = c717;
    while (1) {
      struct std___Rb_tree_node_base* t718 = __x709;
      _Bool cast719 = (_Bool)t718;
      if (!cast719) break;
        struct std___Rb_tree_node_base* t720 = __x709;
        __y710 = t720;
        struct std___Rb_tree_key_compare_std__less_int__* base721 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t714->_M_impl) + 0);
        struct std__less_int_* cast722 = (struct std__less_int_*)base721;
        int* t723 = __k707;
        struct std___Rb_tree_node_base* t724 = __x709;
        int* r725 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t724);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r726 = std__less_int___operator___int_const___int_const___const(cast722, t723, r725);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp711 = r726;
        _Bool t727 = __comp711;
        struct std___Rb_tree_node_base* ternary728;
        if (t727) {
          struct std___Rb_tree_node_base* t729 = __x709;
          struct std___Rb_tree_node_base* r730 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t729);
          ternary728 = (struct std___Rb_tree_node_base*)r730;
        } else {
          struct std___Rb_tree_node_base* t731 = __x709;
          struct std___Rb_tree_node_base* r732 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t731);
          ternary728 = (struct std___Rb_tree_node_base*)r732;
        }
        __x709 = ternary728;
    }
  struct std___Rb_tree_node_base* t733 = __y710;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j712, t733);
    _Bool t734 = __comp711;
    if (t734) {
        struct std___Rb_tree_iterator_int_ ref_tmp0735;
        struct std___Rb_tree_iterator_int_ r736 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t714);
        ref_tmp0735 = r736;
        _Bool r737 = std__operator__(&__j712, &ref_tmp0735);
        if (r737) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval708, &__x709, &__y710);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t738 = __retval708;
          return t738;
        } else {
          struct std___Rb_tree_iterator_int_* r739 = std___Rb_tree_iterator_int___operator__(&__j712);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base740 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t714->_M_impl) + 0);
    struct std__less_int_* cast741 = (struct std__less_int_*)base740;
    struct std___Rb_tree_node_base* t742 = __j712._M_node;
    int* r743 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t742);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t744 = __k707;
    _Bool r745 = std__less_int___operator___int_const___int_const___const(cast741, r743, t744);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r745) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval708, &__x709, &__y710);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t746 = __retval708;
      return t746;
    }
  struct std___Rb_tree_node_base* c747 = ((void*)0);
  ref_tmp1713 = c747;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval708, &__j712._M_node, &ref_tmp1713);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t748 = __retval708;
  return t748;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v749) {
bb750: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this751;
  struct std___Rb_tree_node_base** __retval752;
  this751 = v749;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t753 = this751;
  struct std___Rb_tree_header* base754 = (struct std___Rb_tree_header*)((char *)&(t753->_M_impl) + 8);
  __retval752 = &base754->_M_header._M_left;
  struct std___Rb_tree_node_base** t755 = __retval752;
  return t755;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v756, struct std___Rb_tree_node_base** v757, struct std___Rb_tree_node_base** v758) {
bb759: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this760;
  struct std___Rb_tree_node_base** __x761;
  struct std___Rb_tree_node_base** __y762;
  this760 = v756;
  __x761 = v757;
  __y762 = v758;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t763 = this760;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base764 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t763 + 0);
  struct std___Rb_tree_node_base** t765 = __x761;
  struct std___Rb_tree_node_base* t766 = *t765;
  t763->first = t766;
  struct std___Rb_tree_node_base** t767 = __y762;
  struct std___Rb_tree_node_base* t768 = *t767;
  t763->second = t768;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v769) {
bb770: ;
  struct std___Rb_tree_iterator_int_* this771;
  struct std___Rb_tree_iterator_int_* __retval772;
  this771 = v769;
  struct std___Rb_tree_iterator_int_* t773 = this771;
  struct std___Rb_tree_node_base* t774 = t773->_M_node;
  struct std___Rb_tree_node_base* r775 = std___Rb_tree_decrement(t774);
  t773->_M_node = r775;
  __retval772 = t773;
  struct std___Rb_tree_iterator_int_* t776 = __retval772;
  return t776;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v777) {
bb778: ;
  struct std___Rb_tree_node_base* __x779;
  struct std___Rb_tree_node_base* __retval780;
  __x779 = v777;
  struct std___Rb_tree_node_base* t781 = __x779;
  struct std___Rb_tree_node_base* t782 = t781->_M_right;
  __retval780 = t782;
  struct std___Rb_tree_node_base* t783 = __retval780;
  return t783;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v784) {
bb785: ;
  struct std___Rb_tree_iterator_int_* this786;
  struct std___Rb_tree_iterator_int_* __retval787;
  this786 = v784;
  struct std___Rb_tree_iterator_int_* t788 = this786;
  struct std___Rb_tree_node_base* t789 = t788->_M_node;
  struct std___Rb_tree_node_base* r790 = std___Rb_tree_increment(t789);
  t788->_M_node = r790;
  __retval787 = t788;
  struct std___Rb_tree_iterator_int_* t791 = __retval787;
  return t791;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v792, struct std___Rb_tree_node_base** v793, struct std___Rb_tree_node_base** v794) {
bb795: ;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this796;
  struct std___Rb_tree_node_base** __x797;
  struct std___Rb_tree_node_base** __y798;
  this796 = v792;
  __x797 = v793;
  __y798 = v794;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t799 = this796;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base800 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t799 + 0);
  struct std___Rb_tree_node_base** t801 = __x797;
  struct std___Rb_tree_node_base* t802 = *t801;
  t799->first = t802;
  struct std___Rb_tree_node_base** t803 = __y798;
  struct std___Rb_tree_node_base* t804 = *t803;
  t799->second = t804;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v805, struct std___Rb_tree_const_iterator_int_ v806, int* v807) {
bb808: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this809;
  struct std___Rb_tree_const_iterator_int_ __position810;
  int* __k811;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval812;
  this809 = v805;
  __position810 = v806;
  __k811 = v807;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t813 = this809;
    struct std___Rb_tree_node_base* t814 = __position810._M_node;
    struct std___Rb_tree_node_base* r815 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t813);
    _Bool c816 = ((t814 == r815)) ? 1 : 0;
    if (c816) {
        unsigned long r817 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t813);
        unsigned long c818 = 0;
        _Bool c819 = ((r817 > c818)) ? 1 : 0;
        _Bool ternary820;
        if (c819) {
          struct std___Rb_tree_key_compare_std__less_int__* base821 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t813->_M_impl) + 0);
          struct std__less_int_* cast822 = (struct std__less_int_*)base821;
          struct std___Rb_tree_node_base** r823 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t813);
          struct std___Rb_tree_node_base* t824 = *r823;
          int* r825 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t824);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t826 = __k811;
          _Bool r827 = std__less_int___operator___int_const___int_const___const(cast822, r825, t826);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary820 = (_Bool)r827;
        } else {
          _Bool c828 = 0;
          ternary820 = (_Bool)c828;
        }
        if (ternary820) {
          struct std___Rb_tree_node_base* ref_tmp0829;
          struct std___Rb_tree_node_base* c830 = ((void*)0);
          ref_tmp0829 = c830;
          struct std___Rb_tree_node_base** r831 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t813);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval812, &ref_tmp0829, r831);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t832 = __retval812;
          return t832;
        } else {
          int* t833 = __k811;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r834 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t813, t833);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval812 = r834;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t835 = __retval812;
          return t835;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base836 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t813->_M_impl) + 0);
        struct std__less_int_* cast837 = (struct std__less_int_*)base836;
        int* t838 = __k811;
        struct std___Rb_tree_node_base* t839 = __position810._M_node;
        int* r840 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t839);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r841 = std__less_int___operator___int_const___int_const___const(cast837, t838, r840);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r841) {
          struct std___Rb_tree_iterator_int_ __before842;
          struct std___Rb_tree_node_base* t843 = __position810._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before842, t843);
            struct std___Rb_tree_node_base* t844 = __position810._M_node;
            struct std___Rb_tree_node_base** r845 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t813);
            struct std___Rb_tree_node_base* t846 = *r845;
            _Bool c847 = ((t844 == t846)) ? 1 : 0;
            if (c847) {
              struct std___Rb_tree_node_base** r848 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t813);
              struct std___Rb_tree_node_base** r849 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t813);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval812, r848, r849);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t850 = __retval812;
              return t850;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base851 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t813->_M_impl) + 0);
                struct std__less_int_* cast852 = (struct std__less_int_*)base851;
                struct std___Rb_tree_iterator_int_* r853 = std___Rb_tree_iterator_int___operator__(&__before842);
                struct std___Rb_tree_node_base* t854 = r853->_M_node;
                int* r855 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t854);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t856 = __k811;
                _Bool r857 = std__less_int___operator___int_const___int_const___const(cast852, r855, t856);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r857) {
                    struct std___Rb_tree_node_base* t858 = __before842._M_node;
                    struct std___Rb_tree_node_base* r859 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t858);
                    _Bool cast860 = (_Bool)r859;
                    _Bool u861 = !cast860;
                    if (u861) {
                      struct std___Rb_tree_node_base* ref_tmp1862;
                      struct std___Rb_tree_node_base* c863 = ((void*)0);
                      ref_tmp1862 = c863;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval812, &ref_tmp1862, &__before842._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t864 = __retval812;
                      return t864;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval812, &__position810._M_node, &__position810._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t865 = __retval812;
                      return t865;
                    }
                } else {
                  int* t866 = __k811;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r867 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t813, t866);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval812 = r867;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t868 = __retval812;
                  return t868;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base869 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t813->_M_impl) + 0);
            struct std__less_int_* cast870 = (struct std__less_int_*)base869;
            struct std___Rb_tree_node_base* t871 = __position810._M_node;
            int* r872 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t871);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t873 = __k811;
            _Bool r874 = std__less_int___operator___int_const___int_const___const(cast870, r872, t873);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r874) {
              struct std___Rb_tree_iterator_int_ __after875;
              struct std___Rb_tree_node_base* t876 = __position810._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after875, t876);
                struct std___Rb_tree_node_base* t877 = __position810._M_node;
                struct std___Rb_tree_node_base** r878 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t813);
                struct std___Rb_tree_node_base* t879 = *r878;
                _Bool c880 = ((t877 == t879)) ? 1 : 0;
                if (c880) {
                  struct std___Rb_tree_node_base* ref_tmp2881;
                  struct std___Rb_tree_node_base* c882 = ((void*)0);
                  ref_tmp2881 = c882;
                  struct std___Rb_tree_node_base** r883 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t813);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval812, &ref_tmp2881, r883);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t884 = __retval812;
                  return t884;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base885 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t813->_M_impl) + 0);
                    struct std__less_int_* cast886 = (struct std__less_int_*)base885;
                    int* t887 = __k811;
                    struct std___Rb_tree_iterator_int_* r888 = std___Rb_tree_iterator_int___operator___2(&__after875);
                    struct std___Rb_tree_node_base* t889 = r888->_M_node;
                    int* r890 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t889);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r891 = std__less_int___operator___int_const___int_const___const(cast886, t887, r890);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r891) {
                        struct std___Rb_tree_node_base* t892 = __position810._M_node;
                        struct std___Rb_tree_node_base* r893 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t892);
                        _Bool cast894 = (_Bool)r893;
                        _Bool u895 = !cast894;
                        if (u895) {
                          struct std___Rb_tree_node_base* ref_tmp3896;
                          struct std___Rb_tree_node_base* c897 = ((void*)0);
                          ref_tmp3896 = c897;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval812, &ref_tmp3896, &__position810._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t898 = __retval812;
                          return t898;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval812, &__after875._M_node, &__after875._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t899 = __retval812;
                          return t899;
                        }
                    } else {
                      int* t900 = __k811;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r901 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t813, t900);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval812 = r901;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t902 = __retval812;
                      return t902;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp4903;
              struct std___Rb_tree_node_base* c904 = ((void*)0);
              ref_tmp4903 = c904;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval812, &__position810._M_node, &ref_tmp4903);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t905 = __retval812;
              return t905;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v906, int* v907) {
bb908: ;
  struct std___Identity_int_* this909;
  int* __x910;
  int* __retval911;
  this909 = v906;
  __x910 = v907;
  struct std___Identity_int_* t912 = this909;
  int* t913 = __x910;
  __retval911 = t913;
  int* t914 = __retval911;
  return t914;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v915) {
bb916: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this917;
  unsigned long __retval918;
  this917 = v915;
  struct std____new_allocator_std___Rb_tree_node_int__* t919 = this917;
  unsigned long c920 = 9223372036854775807;
  unsigned long c921 = 40;
  unsigned long b922 = c920 / c921;
  __retval918 = b922;
  unsigned long t923 = __retval918;
  return t923;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v924, unsigned long v925, void* v926) {
bb927: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this928;
  unsigned long __n929;
  void* unnamed930;
  struct std___Rb_tree_node_int_* __retval931;
  this928 = v924;
  __n929 = v925;
  unnamed930 = v926;
  struct std____new_allocator_std___Rb_tree_node_int__* t932 = this928;
    unsigned long t933 = __n929;
    unsigned long r934 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t932);
    _Bool c935 = ((t933 > r934)) ? 1 : 0;
    if (c935) {
        unsigned long t936 = __n929;
        unsigned long c937 = -1;
        unsigned long c938 = 40;
        unsigned long b939 = c937 / c938;
        _Bool c940 = ((t936 > b939)) ? 1 : 0;
        if (c940) {
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
    unsigned long c941 = 8;
    unsigned long c942 = 16;
    _Bool c943 = ((c941 > c942)) ? 1 : 0;
    if (c943) {
      unsigned long __al944;
      unsigned long c945 = 8;
      __al944 = c945;
      unsigned long t946 = __n929;
      unsigned long c947 = 40;
      unsigned long b948 = t946 * c947;
      unsigned long t949 = __al944;
      void* r950 = operator_new_2(b948, t949);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast951 = (struct std___Rb_tree_node_int_*)r950;
      __retval931 = cast951;
      struct std___Rb_tree_node_int_* t952 = __retval931;
      return t952;
    }
  unsigned long t953 = __n929;
  unsigned long c954 = 40;
  unsigned long b955 = t953 * c954;
  void* r956 = operator_new(b955);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast957 = (struct std___Rb_tree_node_int_*)r956;
  __retval931 = cast957;
  struct std___Rb_tree_node_int_* t958 = __retval931;
  return t958;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v959, unsigned long v960) {
bb961: ;
  struct std__allocator_std___Rb_tree_node_int__* this962;
  unsigned long __n963;
  struct std___Rb_tree_node_int_* __retval964;
  this962 = v959;
  __n963 = v960;
  struct std__allocator_std___Rb_tree_node_int__* t965 = this962;
    _Bool r966 = std____is_constant_evaluated();
    if (r966) {
        unsigned long t967 = __n963;
        unsigned long c968 = 40;
        unsigned long ovr969;
        _Bool ovf970 = __builtin_mul_overflow(t967, c968, &ovr969);
        __n963 = ovr969;
        if (ovf970) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t971 = __n963;
      void* r972 = operator_new(t971);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast973 = (struct std___Rb_tree_node_int_*)r972;
      __retval964 = cast973;
      struct std___Rb_tree_node_int_* t974 = __retval964;
      return t974;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base975 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t965 + 0);
  unsigned long t976 = __n963;
  void* c977 = ((void*)0);
  struct std___Rb_tree_node_int_* r978 = std____new_allocator_std___Rb_tree_node_int_____allocate(base975, t976, c977);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval964 = r978;
  struct std___Rb_tree_node_int_* t979 = __retval964;
  return t979;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v980, unsigned long v981) {
bb982: ;
  struct std__allocator_std___Rb_tree_node_int__* __a983;
  unsigned long __n984;
  struct std___Rb_tree_node_int_* __retval985;
  __a983 = v980;
  __n984 = v981;
  struct std__allocator_std___Rb_tree_node_int__* t986 = __a983;
  unsigned long t987 = __n984;
  struct std___Rb_tree_node_int_* r988 = std__allocator_std___Rb_tree_node_int_____allocate(t986, t987);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval985 = r988;
  struct std___Rb_tree_node_int_* t989 = __retval985;
  return t989;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v990) {
bb991: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this992;
  struct std___Rb_tree_node_int_* __retval993;
  this992 = v990;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t994 = this992;
  struct std__allocator_std___Rb_tree_node_int__* r995 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t994);
  unsigned long c996 = 1;
  struct std___Rb_tree_node_int_* r997 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r995, c996);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval993 = r997;
  struct std___Rb_tree_node_int_* t998 = __retval993;
  return t998;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v999, int* v1000) {
bb1001: ;
  int* __location1002;
  int* __args1003;
  int* __retval1004;
  void* __loc1005;
  __location1002 = v999;
  __args1003 = v1000;
  int* t1006 = __location1002;
  void* cast1007 = (void*)t1006;
  __loc1005 = cast1007;
    void* t1008 = __loc1005;
    int* cast1009 = (int*)t1008;
    int* t1010 = __args1003;
    int t1011 = *t1010;
    *cast1009 = t1011;
    __retval1004 = cast1009;
    int* t1012 = __retval1004;
    return t1012;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1013, int* v1014, int* v1015) {
bb1016: ;
  struct std__allocator_std___Rb_tree_node_int__* __a1017;
  int* __p1018;
  int* __args1019;
  __a1017 = v1013;
  __p1018 = v1014;
  __args1019 = v1015;
  int* t1020 = __p1018;
  int* t1021 = __args1019;
  int* r1022 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1020, t1021);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1023, struct std___Rb_tree_node_int_* v1024, int* v1025) {
bb1026: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1027;
  struct std___Rb_tree_node_int_* __node1028;
  int* __args1029;
  this1027 = v1023;
  __node1028 = v1024;
  __args1029 = v1025;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1030 = this1027;
      struct std__allocator_std___Rb_tree_node_int__* r1032 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1030);
      struct std___Rb_tree_node_int_* t1033 = __node1028;
      int* r1034 = std___Rb_tree_node_int____M_valptr(t1033);
      if (__cir_exc_active) {
        goto cir_try_dispatch1031;
      }
      int* t1035 = __args1029;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1032, r1034, t1035);
    cir_try_dispatch1031: ;
    if (__cir_exc_active) {
    {
      int ca_tok1036 = 0;
      void* ca_exn1037 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1038 = __node1028;
        struct std___Rb_tree_node_int_* t1039 = __node1028;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1030, t1039);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1040, int* v1041) {
bb1042: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1043;
  int* __args1044;
  struct std___Rb_tree_node_int_* __retval1045;
  struct std___Rb_tree_node_int_* __tmp1046;
  this1043 = v1040;
  __args1044 = v1041;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1047 = this1043;
  struct std___Rb_tree_node_int_* r1048 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1047);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1046 = r1048;
  struct std___Rb_tree_node_int_* t1049 = __tmp1046;
  int* t1050 = __args1044;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1047, t1049, t1050);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1051 = __tmp1046;
  __retval1045 = t1051;
  struct std___Rb_tree_node_int_* t1052 = __retval1045;
  return t1052;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1053, int* v1054) {
bb1055: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1056;
  int* __arg1057;
  struct std___Rb_tree_node_int_* __retval1058;
  this1056 = v1053;
  __arg1057 = v1054;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1059 = this1056;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1060 = t1059->_M_t;
  int* t1061 = __arg1057;
  struct std___Rb_tree_node_int_* r1062 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1060, t1061);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1058 = r1062;
  struct std___Rb_tree_node_int_* t1063 = __retval1058;
  return t1063;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1064, struct std___Rb_tree_node_base* v1065, struct std___Rb_tree_node_base* v1066, struct std___Rb_tree_node_base* v1067) {
bb1068: ;
  _Bool __insert_left1069;
  struct std___Rb_tree_node_base* __x1070;
  struct std___Rb_tree_node_base* __p1071;
  struct std___Rb_tree_node_base* __header1072;
  __insert_left1069 = v1064;
  __x1070 = v1065;
  __p1071 = v1066;
  __header1072 = v1067;
  _Bool t1073 = __insert_left1069;
  struct std___Rb_tree_node_base* t1074 = __x1070;
  struct std___Rb_tree_node_base* t1075 = __p1071;
  struct std___Rb_tree_node_base* t1076 = __header1072;
  std___Rb_tree_insert_and_rebalance(t1073, t1074, t1075, t1076);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1077, struct std___Rb_tree_node_base* v1078, struct std___Rb_tree_node_base* v1079, int* v1080, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1081) {
bb1082: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1083;
  struct std___Rb_tree_node_base* __x1084;
  struct std___Rb_tree_node_base* __p1085;
  int* __v1086;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1087;
  struct std___Rb_tree_iterator_int_ __retval1088;
  _Bool __insert_left1089;
  struct std___Rb_tree_node_base* __z1090;
  this1083 = v1077;
  __x1084 = v1078;
  __p1085 = v1079;
  __v1086 = v1080;
  __node_gen1087 = v1081;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1091 = this1083;
  struct std___Rb_tree_node_base* t1092 = __x1084;
  _Bool cast1093 = (_Bool)t1092;
  _Bool ternary1094;
  if (cast1093) {
    _Bool c1095 = 1;
    ternary1094 = (_Bool)c1095;
  } else {
    struct std___Rb_tree_node_base* t1096 = __p1085;
    struct std___Rb_tree_node_base* r1097 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1091);
    _Bool c1098 = ((t1096 == r1097)) ? 1 : 0;
    ternary1094 = (_Bool)c1098;
  }
  _Bool ternary1099;
  if (ternary1094) {
    _Bool c1100 = 1;
    ternary1099 = (_Bool)c1100;
  } else {
    struct std___Identity_int_ ref_tmp01101;
    struct std___Rb_tree_key_compare_std__less_int__* base1102 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1091->_M_impl) + 0);
    struct std__less_int_* cast1103 = (struct std__less_int_*)base1102;
    int* t1104 = __v1086;
    int* r1105 = std___Identity_int___operator___int___const(&ref_tmp01101, t1104);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1106 = __p1085;
    int* r1107 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1106);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1108 = std__less_int___operator___int_const___int_const___const(cast1103, r1105, r1107);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1099 = (_Bool)r1108;
  }
  __insert_left1089 = ternary1099;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1109 = __node_gen1087;
  int* t1110 = __v1086;
  struct std___Rb_tree_node_int_* r1111 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1109, t1110);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1112 = (struct std___Rb_tree_node_base*)((char *)r1111 + 0);
  struct std___Rb_tree_node_base* r1113 = std___Rb_tree_node_base___M_base_ptr___const(base1112);
  __z1090 = r1113;
  _Bool t1114 = __insert_left1089;
  struct std___Rb_tree_node_base* t1115 = __z1090;
  struct std___Rb_tree_node_base* t1116 = __p1085;
  struct std___Rb_tree_header* base1117 = (struct std___Rb_tree_header*)((char *)&(t1091->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1114, t1115, t1116, &base1117->_M_header);
  struct std___Rb_tree_header* base1118 = (struct std___Rb_tree_header*)((char *)&(t1091->_M_impl) + 8);
  unsigned long t1119 = base1118->_M_node_count;
  unsigned long u1120 = t1119 + 1;
  base1118->_M_node_count = u1120;
  struct std___Rb_tree_node_base* t1121 = __z1090;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1088, t1121);
  struct std___Rb_tree_iterator_int_ t1122 = __retval1088;
  return t1122;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1123, struct std___Rb_tree_node_base* v1124) {
bb1125: ;
  struct std___Rb_tree_iterator_int_* this1126;
  struct std___Rb_tree_node_base* __x1127;
  this1126 = v1123;
  __x1127 = v1124;
  struct std___Rb_tree_iterator_int_* t1128 = this1126;
  struct std___Rb_tree_node_base* t1129 = __x1127;
  t1128->_M_node = t1129;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1130, struct std___Rb_tree_const_iterator_int_ v1131, int* v1132, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1133) {
bb1134: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1135;
  struct std___Rb_tree_const_iterator_int_ __position1136;
  int* __v1137;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1138;
  struct std___Rb_tree_iterator_int_ __retval1139;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1140;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01141;
  struct std___Identity_int_ ref_tmp01142;
  this1135 = v1130;
  __position1136 = v1131;
  __v1137 = v1132;
  __node_gen1138 = v1133;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1143 = this1135;
  agg_tmp01141 = __position1136; // copy
  int* t1144 = __v1137;
  int* r1145 = std___Identity_int___operator___int___const(&ref_tmp01142, t1144);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1146 = agg_tmp01141;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1147 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1143, t1146, r1145);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1140 = r1147;
    struct std___Rb_tree_node_base* t1148 = __res1140.second;
    _Bool cast1149 = (_Bool)t1148;
    if (cast1149) {
      struct std___Rb_tree_node_base* t1150 = __res1140.first;
      struct std___Rb_tree_node_base* t1151 = __res1140.second;
      int* t1152 = __v1137;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1153 = __node_gen1138;
      struct std___Rb_tree_iterator_int_ r1154 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1143, t1150, t1151, t1152, t1153);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1139 = r1154;
      struct std___Rb_tree_iterator_int_ t1155 = __retval1139;
      return t1155;
    }
  struct std___Rb_tree_node_base* t1156 = __res1140.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1139, t1156);
  struct std___Rb_tree_iterator_int_ t1157 = __retval1139;
  return t1157;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1158) {
bb1159: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1160;
  struct std___Rb_tree_iterator_int_ __retval1161;
  this1160 = v1158;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1162 = this1160;
  struct std___Rb_tree_node_base* r1163 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1162);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1161, r1163);
  struct std___Rb_tree_iterator_int_ t1164 = __retval1161;
  return t1164;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1165, struct std___Rb_tree_iterator_int_* v1166) {
bb1167: ;
  struct std___Rb_tree_const_iterator_int_* this1168;
  struct std___Rb_tree_iterator_int_* __it1169;
  this1168 = v1165;
  __it1169 = v1166;
  struct std___Rb_tree_const_iterator_int_* t1170 = this1168;
  struct std___Rb_tree_iterator_int_* t1171 = __it1169;
  struct std___Rb_tree_node_base* t1172 = t1171->_M_node;
  t1170->_M_node = t1172;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1173, int* v1174, int* v1175) {
bb1176: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1177;
  int* __first1178;
  int* __last1179;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1180;
  this1177 = v1173;
  __first1178 = v1174;
  __last1179 = v1175;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1181 = this1177;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1180, t1181);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01182;
    struct std___Rb_tree_iterator_int_ ref_tmp01183;
    struct std___Rb_tree_iterator_int_ agg_tmp11184;
    while (1) {
      int* t1186 = __first1178;
      int* t1187 = __last1179;
      _Bool c1188 = ((t1186 != t1187)) ? 1 : 0;
      if (!c1188) break;
      struct std___Rb_tree_iterator_int_ r1189 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1181);
      ref_tmp01183 = r1189;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01182, &ref_tmp01183);
      int* t1190 = __first1178;
      struct std___Rb_tree_const_iterator_int_ t1191 = agg_tmp01182;
      struct std___Rb_tree_iterator_int_ r1192 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1181, t1191, t1190, &__an1180);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11184 = r1192;
    for_step1185: ;
      int* t1193 = __first1178;
      int c1194 = 1;
      int* ptr1195 = &(t1193)[c1194];
      __first1178 = ptr1195;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1196) {
bb1197: ;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1198;
  this1198 = v1196;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1199 = this1198;
  struct std__allocator_std___Rb_tree_node_int__* base1200 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1199 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1200);
    struct std___Rb_tree_key_compare_std__less_int__* base1201 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1199 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1201);
    struct std___Rb_tree_header* base1202 = (struct std___Rb_tree_header*)((char *)t1199 + 8);
    std___Rb_tree_header___Rb_tree_header(base1202);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1203) {
bb1204: ;
  struct std____new_allocator_std___Rb_tree_node_int__* this1205;
  this1205 = v1203;
  struct std____new_allocator_std___Rb_tree_node_int__* t1206 = this1205;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1207) {
bb1208: ;
  struct std__allocator_std___Rb_tree_node_int__* this1209;
  this1209 = v1207;
  struct std__allocator_std___Rb_tree_node_int__* t1210 = this1209;
  struct std____new_allocator_std___Rb_tree_node_int__* base1211 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1210 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1211);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1212) {
bb1213: ;
  struct std___Rb_tree_key_compare_std__less_int__* this1214;
  this1214 = v1212;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1215) {
bb1216: ;
  struct std___Rb_tree_header* this1217;
  this1217 = v1215;
  struct std___Rb_tree_header* t1218 = this1217;
  struct std___Rb_tree_node_base* c1219 = ((void*)0);
  t1218->_M_header._M_parent = c1219;
  t1218->_M_header._M_left = &t1218->_M_header;
  t1218->_M_header._M_right = &t1218->_M_header;
  unsigned long c1220 = 0;
  t1218->_M_node_count = c1220;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1221) {
bb1222: ;
  struct std___Rb_tree_header* this1223;
  this1223 = v1221;
  struct std___Rb_tree_header* t1224 = this1223;
  unsigned int c1225 = 0;
  t1224->_M_header._M_color = c1225;
  std___Rb_tree_header___M_reset(t1224);
  if (__cir_exc_active) {
    return;
  }
  return;
}

