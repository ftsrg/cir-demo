extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____false_type { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___List_node_int_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
struct std____cxx11__list_int__std__allocator_int__ __const_main_ref_tmp2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "second != first";
char _str_1[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_operator_assign_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() == 3";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "Size of first: ";
char _str_4[17] = "Size of second: ";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_propagate_on_copy_assign();
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_always_equal();
_Bool std__operator__(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11___List_base_int__std__allocator_int______M_init(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____clear(struct std____cxx11__list_int__std__allocator_int__* p0);
void void_std____alloc_on_copy_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std__operator___2(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
_Bool std__operator___3(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr___const(struct std___List_node_int_* p0);
int* std___List_const_iterator_int___operator____const(struct std___List_const_iterator_int_* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* p0);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2);
void std___List_const_iterator_int____List_const_iterator_2(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list_std___List_const_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2, struct std__allocator_int_* p3);
extern void abort();
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std___List_iterator_int_ p3);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_std___List_const_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2, struct std___List_const_iterator_int_ p3);
void void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_std___List_const_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2, struct std____false_type p3);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std____cxx11__list_int__std__allocator_int__* std____cxx11__list_int__std__allocator_int_____operator__2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
_Bool bool_std__operator___int__std__allocator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std____detail___List_size* std____detail___List_size__operator__2(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_move_nodes(struct std____detail___List_node_header* p0, struct std____detail___List_node_header* p1);
void std____cxx11___List_base_int__std__allocator_int______M_move_nodes(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std____cxx11___List_base_int__std__allocator_int__* p1);
struct std____new_allocator_std___List_node_int__* std____new_allocator_std___List_node_int_____operator_(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
struct std__allocator_std___List_node_int__* std__allocator_std___List_node_int_____operator_(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
struct std____cxx11__list_int__std__allocator_int__* std____cxx11__list_int__std__allocator_int_____operator_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* p0);
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
int main();
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_base_2(struct std____cxx11___List_base_int__std__allocator_int__* p0);
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr(struct std___List_node_int_* p0);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std___List_node_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std___List_node_int_* p1);
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* p0);
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* p0);
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* p0);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* p0, struct std__allocator_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* p0);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* p0, unsigned long p1, void* p2);
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std__allocator_std___List_node_int__* p1, struct std___List_node_int_* p2);
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int_(struct std__allocator_std___List_node_int__* p0, int* p1);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node__(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back__(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int______M_default_initialize(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2, struct std____false_type p3);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v0) {
bb1: ;
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator(base4);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2EmRKS1_
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8: ;
  struct std____cxx11__list_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  struct std__allocator_std___List_node_int__ ref_tmp012;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std____cxx11__list_int__std__allocator_int__* t13 = this9;
  struct std____cxx11___List_base_int__std__allocator_int__* base14 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t13 + 0);
  struct std__allocator_int_* t15 = __a11;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp012, t15);
    std____cxx11___List_base_int__std__allocator_int______List_base(base14, &ref_tmp012);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp012);
  }
    unsigned long t16 = __n10;
    std____cxx11__list_int__std__allocator_int______M_default_initialize(t13, t16);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v17) {
bb18: ;
  struct std__allocator_int_* this19;
  this19 = v17;
  struct std__allocator_int_* t20 = this19;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt10_List_nodeIiEES2_E27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_propagate_on_copy_assign() {
bb21: ;
  _Bool __retval22;
  _Bool t23 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval22 = t23;
  _Bool t24 = __retval22;
  return t24;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v25) {
bb26: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this27;
  struct std__allocator_std___List_node_int__* __retval28;
  this27 = v25;
  struct std____cxx11___List_base_int__std__allocator_int__* t29 = this27;
  struct std__allocator_std___List_node_int__* base30 = (struct std__allocator_std___List_node_int__*)((char *)&(t29->_M_impl) + 0);
  __retval28 = base30;
  struct std__allocator_std___List_node_int__* t31 = __retval28;
  return t31;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt10_List_nodeIiEES2_E15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_always_equal() {
bb32: ;
  _Bool __retval33;
  _Bool t34 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval33 = t34;
  _Bool t35 = __retval33;
  return t35;
}

// function: _ZSteqRKSaISt10_List_nodeIiEES3_
_Bool std__operator__(struct std__allocator_std___List_node_int__* v36, struct std__allocator_std___List_node_int__* v37) {
bb38: ;
  struct std__allocator_std___List_node_int__* unnamed39;
  struct std__allocator_std___List_node_int__* unnamed40;
  _Bool __retval41;
  unnamed39 = v36;
  unnamed40 = v37;
  _Bool c42 = 1;
  __retval41 = c42;
  _Bool t43 = __retval41;
  return t43;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE7_M_initEv
void std____cxx11___List_base_int__std__allocator_int______M_init(struct std____cxx11___List_base_int__std__allocator_int__* v44) {
bb45: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this46;
  this46 = v44;
  struct std____cxx11___List_base_int__std__allocator_int__* t47 = this46;
  std____detail___List_node_header___M_init(&t47->_M_impl._M_node);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5clearEv
void std____cxx11__list_int__std__allocator_int_____clear(struct std____cxx11__list_int__std__allocator_int__* v48) {
bb49: ;
  struct std____cxx11__list_int__std__allocator_int__* this50;
  this50 = v48;
  struct std____cxx11__list_int__std__allocator_int__* t51 = this50;
  struct std____cxx11___List_base_int__std__allocator_int__* base52 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t51 + 0);
  std____cxx11___List_base_int__std__allocator_int______M_clear(base52);
  struct std____cxx11___List_base_int__std__allocator_int__* base53 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t51 + 0);
  std____cxx11___List_base_int__std__allocator_int______M_init(base53);
  return;
}

// function: _ZSt15__alloc_on_copyISaISt10_List_nodeIiEEEvRT_RKS3_
void void_std____alloc_on_copy_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v54, struct std__allocator_std___List_node_int__* v55) {
bb56: ;
  struct std__allocator_std___List_node_int__* __one57;
  struct std__allocator_std___List_node_int__* __two58;
  __one57 = v54;
  __two58 = v55;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v59) {
bb60: ;
  struct std____cxx11__list_int__std__allocator_int__* this61;
  struct std___List_iterator_int_ __retval62;
  this61 = v59;
  struct std____cxx11__list_int__std__allocator_int__* t63 = this61;
  struct std____cxx11___List_base_int__std__allocator_int__* base64 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t63 + 0);
  struct std____detail___List_node_base* base65 = (struct std____detail___List_node_base*)((char *)&(base64->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t66 = base65->_M_next;
  std___List_iterator_int____List_iterator(&__retval62, t66);
  struct std___List_iterator_int_ t67 = __retval62;
  return t67;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator___2(struct std___List_iterator_int_* v68, struct std___List_iterator_int_* v69) {
bb70: ;
  struct std___List_iterator_int_* __x71;
  struct std___List_iterator_int_* __y72;
  _Bool __retval73;
  __x71 = v68;
  __y72 = v69;
  struct std___List_iterator_int_* t74 = __x71;
  struct std____detail___List_node_base* t75 = t74->_M_node;
  struct std___List_iterator_int_* t76 = __y72;
  struct std____detail___List_node_base* t77 = t76->_M_node;
  _Bool c78 = ((t75 == t77)) ? 1 : 0;
  __retval73 = c78;
  _Bool t79 = __retval73;
  return t79;
}

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator___3(struct std___List_const_iterator_int_* v80, struct std___List_const_iterator_int_* v81) {
bb82: ;
  struct std___List_const_iterator_int_* __x83;
  struct std___List_const_iterator_int_* __y84;
  _Bool __retval85;
  __x83 = v80;
  __y84 = v81;
  struct std___List_const_iterator_int_* t86 = __x83;
  struct std____detail___List_node_base* t87 = t86->_M_node;
  struct std___List_const_iterator_int_* t88 = __y84;
  struct std____detail___List_node_base* t89 = t88->_M_node;
  _Bool c90 = ((t87 == t89)) ? 1 : 0;
  __retval85 = c90;
  _Bool t91 = __retval85;
  return t91;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v92) {
bb93: ;
  struct __gnu_cxx____aligned_membuf_int_* this94;
  void* __retval95;
  this94 = v92;
  struct __gnu_cxx____aligned_membuf_int_* t96 = this94;
  void* cast97 = (void*)&(t96->_M_storage);
  __retval95 = cast97;
  void* t98 = __retval95;
  return t98;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v99) {
bb100: ;
  struct __gnu_cxx____aligned_membuf_int_* this101;
  int* __retval102;
  this101 = v99;
  struct __gnu_cxx____aligned_membuf_int_* t103 = this101;
  void* r104 = __gnu_cxx____aligned_membuf_int____M_addr___const(t103);
  int* cast105 = (int*)r104;
  __retval102 = cast105;
  int* t106 = __retval102;
  return t106;
}

// function: _ZNKSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr___const(struct std___List_node_int_* v107) {
bb108: ;
  struct std___List_node_int_* this109;
  int* __retval110;
  this109 = v107;
  struct std___List_node_int_* t111 = this109;
  int* r112 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t111->_M_storage);
  __retval110 = r112;
  int* t113 = __retval110;
  return t113;
}

// function: _ZNKSt20_List_const_iteratorIiEdeEv
int* std___List_const_iterator_int___operator____const(struct std___List_const_iterator_int_* v114) {
bb115: ;
  struct std___List_const_iterator_int_* this116;
  int* __retval117;
  this116 = v114;
  struct std___List_const_iterator_int_* t118 = this116;
  struct std____detail___List_node_base* t119 = t118->_M_node;
  struct std___List_node_int_* derived120 = ((t119) ? (struct std___List_node_int_*)((char *)t119 - 0) : (struct std___List_node_int_*)0);
  int* r121 = std___List_node_int____M_valptr___const(derived120);
  __retval117 = r121;
  int* t122 = __retval117;
  return t122;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v123) {
bb124: ;
  struct std___List_iterator_int_* this125;
  struct std___List_iterator_int_* __retval126;
  this125 = v123;
  struct std___List_iterator_int_* t127 = this125;
  struct std____detail___List_node_base* t128 = t127->_M_node;
  struct std____detail___List_node_base* t129 = t128->_M_next;
  t127->_M_node = t129;
  __retval126 = t127;
  struct std___List_iterator_int_* t130 = __retval126;
  return t130;
}

// function: _ZNSt20_List_const_iteratorIiEppEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* v131) {
bb132: ;
  struct std___List_const_iterator_int_* this133;
  struct std___List_const_iterator_int_* __retval134;
  this133 = v131;
  struct std___List_const_iterator_int_* t135 = this133;
  struct std____detail___List_node_base* t136 = t135->_M_node;
  struct std____detail___List_node_base* t137 = t136->_M_next;
  t135->_M_node = t137;
  __retval134 = t135;
  struct std___List_const_iterator_int_* t138 = __retval134;
  return t138;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v139, unsigned long v140) {
bb141: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this142;
  unsigned long __n143;
  this142 = v139;
  __n143 = v140;
  struct std____cxx11___List_base_int__std__allocator_int__* t144 = this142;
  unsigned long t145 = __n143;
  struct std____detail___List_size* base146 = (struct std____detail___List_size*)((char *)&(t144->_M_impl._M_node) + 16);
  unsigned long t147 = base146->_M_size;
  unsigned long b148 = t147 - t145;
  base146->_M_size = b148;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* v149, struct std___List_iterator_int_ v150) {
bb151: ;
  struct std____cxx11__list_int__std__allocator_int__* this152;
  struct std___List_iterator_int_ __position153;
  struct std___List_node_int_* __n154;
  this152 = v149;
  __position153 = v150;
  struct std____cxx11__list_int__std__allocator_int__* t155 = this152;
  struct std____cxx11___List_base_int__std__allocator_int__* base156 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t155 + 0);
  unsigned long c157 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base156, c157);
  struct std____detail___List_node_base* t158 = __position153._M_node;
  std____detail___List_node_base___M_unhook(t158);
  struct std____detail___List_node_base* t159 = __position153._M_node;
  struct std___List_node_int_* derived160 = (struct std___List_node_int_*)((char *)t159 - 0);
  __n154 = derived160;
  struct std____cxx11___List_base_int__std__allocator_int__* base161 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t155 + 0);
  struct std___List_node_int_* t162 = __n154;
  struct std___List_node_int_* r163 = std___List_node_int____M_node_ptr(t162);
  std____cxx11___List_base_int__std__allocator_int______M_destroy_node(base161, r163);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiE
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* v164, struct std___List_const_iterator_int_ v165) {
bb166: ;
  struct std____cxx11__list_int__std__allocator_int__* this167;
  struct std___List_const_iterator_int_ __position168;
  struct std___List_iterator_int_ __retval169;
  struct std___List_iterator_int_ agg_tmp0170;
  this167 = v164;
  __position168 = v165;
  struct std____cxx11__list_int__std__allocator_int__* t171 = this167;
  struct std____detail___List_node_base* t172 = __position168._M_node;
  struct std____detail___List_node_base* t173 = t172->_M_next;
  std___List_iterator_int____List_iterator(&__retval169, t173);
  struct std___List_iterator_int_ r174 = std___List_const_iterator_int____M_const_cast___const(&__position168);
  agg_tmp0170 = r174;
  struct std___List_iterator_int_ t175 = agg_tmp0170;
  std____cxx11__list_int__std__allocator_int______M_erase(t171, t175);
  struct std___List_iterator_int_ t176 = __retval169;
  return t176;
}

// function: _ZNSt20_List_const_iteratorIiEaSEOS0_
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* v177, struct std___List_const_iterator_int_* v178) {
bb179: ;
  struct std___List_const_iterator_int_* this180;
  struct std___List_const_iterator_int_* unnamed181;
  struct std___List_const_iterator_int_* __retval182;
  this180 = v177;
  unnamed181 = v178;
  struct std___List_const_iterator_int_* t183 = this180;
  struct std___List_const_iterator_int_* t184 = unnamed181;
  struct std____detail___List_node_base* t185 = t184->_M_node;
  t183->_M_node = t185;
  __retval182 = t183;
  struct std___List_const_iterator_int_* t186 = __retval182;
  return t186;
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v187) {
bb188: ;
  struct std___List_const_iterator_int_* this189;
  struct std___List_iterator_int_ __retval190;
  this189 = v187;
  struct std___List_const_iterator_int_* t191 = this189;
  struct std____detail___List_node_base* t192 = t191->_M_node;
  std___List_iterator_int____List_iterator(&__retval190, t192);
  struct std___List_iterator_int_ t193 = __retval190;
  return t193;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiES4_
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* v194, struct std___List_const_iterator_int_ v195, struct std___List_const_iterator_int_ v196) {
bb197: ;
  struct std____cxx11__list_int__std__allocator_int__* this198;
  struct std___List_const_iterator_int_ __first199;
  struct std___List_const_iterator_int_ __last200;
  struct std___List_iterator_int_ __retval201;
  this198 = v194;
  __first199 = v195;
  __last200 = v196;
  struct std____cxx11__list_int__std__allocator_int__* t202 = this198;
    struct std___List_const_iterator_int_ ref_tmp0203;
    struct std___List_iterator_int_ ref_tmp1204;
    struct std___List_const_iterator_int_ agg_tmp0205;
    while (1) {
      _Bool r206 = std__operator___3(&__first199, &__last200);
      _Bool u207 = !r206;
      if (!u207) break;
      agg_tmp0205 = __first199; // copy
      struct std___List_const_iterator_int_ t208 = agg_tmp0205;
      struct std___List_iterator_int_ r209 = std____cxx11__list_int__std__allocator_int_____erase(t202, t208);
      ref_tmp1204 = r209;
      std___List_const_iterator_int____List_const_iterator_2(&ref_tmp0203, &ref_tmp1204);
      struct std___List_const_iterator_int_* r210 = std___List_const_iterator_int___operator_(&__first199, &ref_tmp0203);
    }
  struct std___List_iterator_int_ r211 = std___List_const_iterator_int____M_const_cast___const(&__last200);
  __retval201 = r211;
  struct std___List_iterator_int_ t212 = __retval201;
  return t212;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator_2(struct std___List_const_iterator_int_* v213, struct std___List_iterator_int_* v214) {
bb215: ;
  struct std___List_const_iterator_int_* this216;
  struct std___List_iterator_int_* __x217;
  this216 = v213;
  __x217 = v214;
  struct std___List_const_iterator_int_* t218 = this216;
  struct std___List_iterator_int_* t219 = __x217;
  struct std____detail___List_node_base* t220 = t219->_M_node;
  t218->_M_node = t220;
  return;
}

// function: _ZNSaIiEC2ISt10_List_nodeIiEEERKSaIT_E
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* v221, struct std__allocator_std___List_node_int__* v222) {
bb223: ;
  struct std__allocator_int_* this224;
  struct std__allocator_std___List_node_int__* unnamed225;
  this224 = v221;
  unnamed225 = v222;
  struct std__allocator_int_* t226 = this224;
  struct std____new_allocator_int_* base227 = (struct std____new_allocator_int_*)((char *)t226 + 0);
  std____new_allocator_int_____new_allocator(base227);
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE13get_allocatorEv
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* v228) {
bb229: ;
  struct std____cxx11__list_int__std__allocator_int__* this230;
  struct std__allocator_int_ __retval231;
  this230 = v228;
  struct std____cxx11__list_int__std__allocator_int__* t232 = this230;
  struct std____cxx11___List_base_int__std__allocator_int__* base233 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t232 + 0);
  struct std__allocator_std___List_node_int__* r234 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base233);
  std__allocator_int___allocator_std___List_node_int___(&__retval231, r234);
  struct std__allocator_int_ t235 = __retval231;
  return t235;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2ISt20_List_const_iteratorIiEvEET_S6_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_std___List_const_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* v236, struct std___List_const_iterator_int_ v237, struct std___List_const_iterator_int_ v238, struct std__allocator_int_* v239) {
bb240: ;
  struct std____cxx11__list_int__std__allocator_int__* this241;
  struct std___List_const_iterator_int_ __first242;
  struct std___List_const_iterator_int_ __last243;
  struct std__allocator_int_* __a244;
  struct std__allocator_std___List_node_int__ ref_tmp0245;
  struct std___List_const_iterator_int_ agg_tmp0246;
  struct std___List_const_iterator_int_ agg_tmp1247;
  struct std____false_type agg_tmp2248;
  this241 = v236;
  __first242 = v237;
  __last243 = v238;
  __a244 = v239;
  struct std____cxx11__list_int__std__allocator_int__* t249 = this241;
  struct std____cxx11___List_base_int__std__allocator_int__* base250 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t249 + 0);
  struct std__allocator_int_* t251 = __a244;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0245, t251);
    std____cxx11___List_base_int__std__allocator_int______List_base(base250, &ref_tmp0245);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0245);
  }
    agg_tmp0246 = __first242; // copy
    agg_tmp1247 = __last243; // copy
    struct std___List_const_iterator_int_ t252 = agg_tmp0246;
    struct std___List_const_iterator_int_ t253 = agg_tmp1247;
    struct std____false_type t254 = agg_tmp2248;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(t249, t252, t253, t254);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* v255, struct std____cxx11__list_int__std__allocator_int__* v256) {
bb257: ;
  struct std____cxx11__list_int__std__allocator_int__* this258;
  struct std____cxx11__list_int__std__allocator_int__* __x259;
  this258 = v255;
  __x259 = v256;
  struct std____cxx11__list_int__std__allocator_int__* t260 = this258;
    struct std____cxx11___List_base_int__std__allocator_int__* base261 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t260 + 0);
    struct std__allocator_std___List_node_int__* r262 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base261);
    struct std____cxx11__list_int__std__allocator_int__* t263 = __x259;
    struct std____cxx11___List_base_int__std__allocator_int__* base264 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t263 + 0);
    struct std__allocator_std___List_node_int__* r265 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base264);
    _Bool r266 = std__operator__(r262, r265);
    _Bool u267 = !r266;
    if (u267) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE11_M_transferESt14_List_iteratorIiES4_S4_
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* v268, struct std___List_iterator_int_ v269, struct std___List_iterator_int_ v270, struct std___List_iterator_int_ v271) {
bb272: ;
  struct std____cxx11__list_int__std__allocator_int__* this273;
  struct std___List_iterator_int_ __position274;
  struct std___List_iterator_int_ __first275;
  struct std___List_iterator_int_ __last276;
  this273 = v268;
  __position274 = v269;
  __first275 = v270;
  __last276 = v271;
  struct std____cxx11__list_int__std__allocator_int__* t277 = this273;
  struct std____detail___List_node_base* t278 = __position274._M_node;
  struct std____detail___List_node_base* t279 = __first275._M_node;
  struct std____detail___List_node_base* t280 = __last276._M_node;
  std____detail___List_node_base___M_transfer(t278, t279, t280);
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v281) {
bb282: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this283;
  unsigned long __retval284;
  this283 = v281;
  struct std____cxx11___List_base_int__std__allocator_int__* t285 = this283;
  struct std____detail___List_size* base286 = (struct std____detail___List_size*)((char *)&(t285->_M_impl._M_node) + 16);
  unsigned long t287 = base286->_M_size;
  __retval284 = t287;
  unsigned long t288 = __retval284;
  return t288;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_set_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* v289, unsigned long v290) {
bb291: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this292;
  unsigned long __n293;
  this292 = v289;
  __n293 = v290;
  struct std____cxx11___List_base_int__std__allocator_int__* t294 = this292;
  unsigned long t295 = __n293;
  struct std____detail___List_size* base296 = (struct std____detail___List_size*)((char *)&(t294->_M_impl._M_node) + 16);
  base296->_M_size = t295;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* v297, struct std___List_const_iterator_int_ v298, struct std____cxx11__list_int__std__allocator_int__* v299) {
bb300: ;
  struct std____cxx11__list_int__std__allocator_int__* this301;
  struct std___List_const_iterator_int_ __position302;
  struct std____cxx11__list_int__std__allocator_int__* __x303;
  this301 = v297;
  __position302 = v298;
  __x303 = v299;
  struct std____cxx11__list_int__std__allocator_int__* t304 = this301;
    struct std____cxx11__list_int__std__allocator_int__* t305 = __x303;
    _Bool r306 = std____cxx11__list_int__std__allocator_int_____empty___const(t305);
    _Bool u307 = !r306;
    if (u307) {
      struct std___List_iterator_int_ agg_tmp0308;
      struct std___List_iterator_int_ agg_tmp1309;
      struct std___List_iterator_int_ agg_tmp2310;
      struct std____cxx11__list_int__std__allocator_int__* t311 = __x303;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t304, t311);
      struct std___List_iterator_int_ r312 = std___List_const_iterator_int____M_const_cast___const(&__position302);
      agg_tmp0308 = r312;
      struct std____cxx11__list_int__std__allocator_int__* t313 = __x303;
      struct std___List_iterator_int_ r314 = std____cxx11__list_int__std__allocator_int_____begin(t313);
      agg_tmp1309 = r314;
      struct std____cxx11__list_int__std__allocator_int__* t315 = __x303;
      struct std___List_iterator_int_ r316 = std____cxx11__list_int__std__allocator_int_____end(t315);
      agg_tmp2310 = r316;
      struct std___List_iterator_int_ t317 = agg_tmp0308;
      struct std___List_iterator_int_ t318 = agg_tmp1309;
      struct std___List_iterator_int_ t319 = agg_tmp2310;
      std____cxx11__list_int__std__allocator_int______M_transfer(t304, t317, t318, t319);
      struct std____cxx11___List_base_int__std__allocator_int__* base320 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t304 + 0);
      struct std____cxx11__list_int__std__allocator_int__* t321 = __x303;
      struct std____cxx11___List_base_int__std__allocator_int__* base322 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t321 + 0);
      unsigned long r323 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base322);
      std____cxx11___List_base_int__std__allocator_int______M_inc_size(base320, r323);
      struct std____cxx11__list_int__std__allocator_int__* t324 = __x303;
      struct std____cxx11___List_base_int__std__allocator_int__* base325 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t324 + 0);
      unsigned long c326 = 0;
      std____cxx11___List_base_int__std__allocator_int______M_set_size(base325, c326);
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* v327, struct std___List_const_iterator_int_ v328, struct std____cxx11__list_int__std__allocator_int__* v329) {
bb330: ;
  struct std____cxx11__list_int__std__allocator_int__* this331;
  struct std___List_const_iterator_int_ __position332;
  struct std____cxx11__list_int__std__allocator_int__* __x333;
  struct std___List_const_iterator_int_ agg_tmp0334;
  this331 = v327;
  __position332 = v328;
  __x333 = v329;
  struct std____cxx11__list_int__std__allocator_int__* t335 = this331;
  agg_tmp0334 = __position332; // copy
  struct std____cxx11__list_int__std__allocator_int__* t336 = __x333;
  struct std___List_const_iterator_int_ t337 = agg_tmp0334;
  std____cxx11__list_int__std__allocator_int_____splice(t335, t337, t336);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertISt20_List_const_iteratorIiEvEESt14_List_iteratorIiES5_T_S8_
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_std___List_const_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* v338, struct std___List_const_iterator_int_ v339, struct std___List_const_iterator_int_ v340, struct std___List_const_iterator_int_ v341) {
bb342: ;
  struct std____cxx11__list_int__std__allocator_int__* this343;
  struct std___List_const_iterator_int_ __position344;
  struct std___List_const_iterator_int_ __first345;
  struct std___List_const_iterator_int_ __last346;
  struct std___List_iterator_int_ __retval347;
  struct std____cxx11__list_int__std__allocator_int__ __tmp348;
  struct std___List_const_iterator_int_ agg_tmp0349;
  struct std___List_const_iterator_int_ agg_tmp1350;
  struct std__allocator_int_ ref_tmp0351;
  this343 = v338;
  __position344 = v339;
  __first345 = v340;
  __last346 = v341;
  struct std____cxx11__list_int__std__allocator_int__* t352 = this343;
  agg_tmp0349 = __first345; // copy
  agg_tmp1350 = __last346; // copy
  struct std__allocator_int_ r353 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t352);
  ref_tmp0351 = r353;
    struct std___List_const_iterator_int_ t354 = agg_tmp0349;
    struct std___List_const_iterator_int_ t355 = agg_tmp1350;
    std____cxx11__list_int__std__allocator_int_____list_std___List_const_iterator_int___void_(&__tmp348, t354, t355, &ref_tmp0351);
  {
    std__allocator_int____allocator(&ref_tmp0351);
  }
      _Bool r356 = std____cxx11__list_int__std__allocator_int_____empty___const(&__tmp348);
      _Bool u357 = !r356;
      if (u357) {
        struct std___List_const_iterator_int_ agg_tmp2358;
        struct std___List_iterator_int_ r359 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp348);
        __retval347 = r359;
        agg_tmp2358 = __position344; // copy
        struct std___List_const_iterator_int_ t360 = agg_tmp2358;
        std____cxx11__list_int__std__allocator_int_____splice_2(t352, t360, &__tmp348);
        struct std___List_iterator_int_ t361 = __retval347;
        struct std___List_iterator_int_ ret_val362 = t361;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp348);
        }
        return ret_val362;
      }
    struct std___List_iterator_int_ r363 = std___List_const_iterator_int____M_const_cast___const(&__position344);
    __retval347 = r363;
    struct std___List_iterator_int_ t364 = __retval347;
    struct std___List_iterator_int_ ret_val365 = t364;
    return ret_val365;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_assign_dispatchISt20_List_const_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_std___List_const_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v366, struct std___List_const_iterator_int_ v367, struct std___List_const_iterator_int_ v368, struct std____false_type v369) {
bb370: ;
  struct std____cxx11__list_int__std__allocator_int__* this371;
  struct std___List_const_iterator_int_ __first2372;
  struct std___List_const_iterator_int_ __last2373;
  struct std____false_type unnamed374;
  struct std___List_iterator_int_ __first1375;
  struct std___List_iterator_int_ __last1376;
  this371 = v366;
  __first2372 = v367;
  __last2373 = v368;
  unnamed374 = v369;
  struct std____cxx11__list_int__std__allocator_int__* t377 = this371;
  struct std___List_iterator_int_ r378 = std____cxx11__list_int__std__allocator_int_____begin(t377);
  __first1375 = r378;
  struct std___List_iterator_int_ r379 = std____cxx11__list_int__std__allocator_int_____end(t377);
  __last1376 = r379;
    while (1) {
      _Bool r381 = std__operator___2(&__first1375, &__last1376);
      _Bool u382 = !r381;
      _Bool ternary383;
      if (u382) {
        _Bool r384 = std__operator___3(&__first2372, &__last2373);
        _Bool u385 = !r384;
        ternary383 = (_Bool)u385;
      } else {
        _Bool c386 = 0;
        ternary383 = (_Bool)c386;
      }
      if (!ternary383) break;
      int* r387 = std___List_const_iterator_int___operator____const(&__first2372);
      int t388 = *r387;
      int* r389 = std___List_iterator_int___operator____const(&__first1375);
      *r389 = t388;
    for_step380: ;
      struct std___List_iterator_int_* r390 = std___List_iterator_int___operator___2(&__first1375);
      struct std___List_const_iterator_int_* r391 = std___List_const_iterator_int___operator__(&__first2372);
    }
    _Bool r392 = std__operator___3(&__first2372, &__last2373);
    if (r392) {
      struct std___List_const_iterator_int_ agg_tmp0393;
      struct std___List_const_iterator_int_ agg_tmp1394;
      struct std___List_iterator_int_ agg_tmp2395;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp0393, &__first1375);
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp1394, &__last1376);
      struct std___List_const_iterator_int_ t396 = agg_tmp0393;
      struct std___List_const_iterator_int_ t397 = agg_tmp1394;
      struct std___List_iterator_int_ r398 = std____cxx11__list_int__std__allocator_int_____erase_2(t377, t396, t397);
      agg_tmp2395 = r398;
    } else {
      struct std___List_const_iterator_int_ agg_tmp3399;
      struct std___List_const_iterator_int_ agg_tmp4400;
      struct std___List_const_iterator_int_ agg_tmp5401;
      struct std___List_iterator_int_ agg_tmp6402;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp3399, &__last1376);
      agg_tmp4400 = __first2372; // copy
      agg_tmp5401 = __last2373; // copy
      struct std___List_const_iterator_int_ t403 = agg_tmp3399;
      struct std___List_const_iterator_int_ t404 = agg_tmp4400;
      struct std___List_const_iterator_int_ t405 = agg_tmp5401;
      struct std___List_iterator_int_ r406 = std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_std___List_const_iterator_int___void_(t377, t403, t404, t405);
      agg_tmp6402 = r406;
    }
  return;
}

// function: _ZNSt20_List_const_iteratorIiEC2EPKNSt8__detail15_List_node_baseE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v407, struct std____detail___List_node_base* v408) {
bb409: ;
  struct std___List_const_iterator_int_* this410;
  struct std____detail___List_node_base* __x411;
  this410 = v407;
  __x411 = v408;
  struct std___List_const_iterator_int_* t412 = this410;
  struct std____detail___List_node_base* t413 = __x411;
  t412->_M_node = t413;
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5beginEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* v414) {
bb415: ;
  struct std____cxx11__list_int__std__allocator_int__* this416;
  struct std___List_const_iterator_int_ __retval417;
  this416 = v414;
  struct std____cxx11__list_int__std__allocator_int__* t418 = this416;
  struct std____cxx11___List_base_int__std__allocator_int__* base419 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t418 + 0);
  struct std____detail___List_node_base* base420 = (struct std____detail___List_node_base*)((char *)&(base419->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t421 = base420->_M_next;
  std___List_const_iterator_int____List_const_iterator(&__retval417, t421);
  struct std___List_const_iterator_int_ t422 = __retval417;
  return t422;
}

// function: _ZNKSt7__cxx114listIiSaIiEE3endEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* v423) {
bb424: ;
  struct std____cxx11__list_int__std__allocator_int__* this425;
  struct std___List_const_iterator_int_ __retval426;
  this425 = v423;
  struct std____cxx11__list_int__std__allocator_int__* t427 = this425;
  struct std____cxx11___List_base_int__std__allocator_int__* base428 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t427 + 0);
  struct std____detail___List_node_base* base429 = (struct std____detail___List_node_base*)((char *)&(base428->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r430 = std____detail___List_node_base___M_base___const(base429);
  std___List_const_iterator_int____List_const_iterator(&__retval426, r430);
  struct std___List_const_iterator_int_ t431 = __retval426;
  return t431;
}

// function: _ZNSt7__cxx114listIiSaIiEEaSERKS2_
struct std____cxx11__list_int__std__allocator_int__* std____cxx11__list_int__std__allocator_int_____operator__2(struct std____cxx11__list_int__std__allocator_int__* v432, struct std____cxx11__list_int__std__allocator_int__* v433) {
bb434: ;
  struct std____cxx11__list_int__std__allocator_int__* this435;
  struct std____cxx11__list_int__std__allocator_int__* __x436;
  struct std____cxx11__list_int__std__allocator_int__* __retval437;
  this435 = v432;
  __x436 = v433;
  struct std____cxx11__list_int__std__allocator_int__* t438 = this435;
    struct std____cxx11__list_int__std__allocator_int__* t439 = __x436;
    _Bool c440 = ((t438 != t439)) ? 1 : 0;
    if (c440) {
      struct std___List_const_iterator_int_ agg_tmp0441;
      struct std___List_const_iterator_int_ agg_tmp1442;
      struct std____false_type agg_tmp2443;
        _Bool r444 = __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_propagate_on_copy_assign();
        if (r444) {
          struct std__allocator_std___List_node_int__* __this_alloc445;
          struct std__allocator_std___List_node_int__* __that_alloc446;
          struct std____cxx11___List_base_int__std__allocator_int__* base447 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t438 + 0);
          struct std__allocator_std___List_node_int__* r448 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base447);
          __this_alloc445 = r448;
          struct std____cxx11__list_int__std__allocator_int__* t449 = __x436;
          struct std____cxx11___List_base_int__std__allocator_int__* base450 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t449 + 0);
          struct std__allocator_std___List_node_int__* r451 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base450);
          __that_alloc446 = r451;
            _Bool r452 = __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_always_equal();
            _Bool u453 = !r452;
            _Bool ternary454;
            if (u453) {
              struct std__allocator_std___List_node_int__* t455 = __this_alloc445;
              struct std__allocator_std___List_node_int__* t456 = __that_alloc446;
              _Bool r457 = std__operator__(t455, t456);
              _Bool u458 = !r457;
              ternary454 = (_Bool)u458;
            } else {
              _Bool c459 = 0;
              ternary454 = (_Bool)c459;
            }
            if (ternary454) {
              std____cxx11__list_int__std__allocator_int_____clear(t438);
            }
          struct std__allocator_std___List_node_int__* t460 = __this_alloc445;
          struct std__allocator_std___List_node_int__* t461 = __that_alloc446;
          void_std____alloc_on_copy_std__allocator_std___List_node_int_____(t460, t461);
        }
      struct std____cxx11__list_int__std__allocator_int__* t462 = __x436;
      struct std___List_const_iterator_int_ r463 = std____cxx11__list_int__std__allocator_int_____begin___const(t462);
      agg_tmp0441 = r463;
      struct std____cxx11__list_int__std__allocator_int__* t464 = __x436;
      struct std___List_const_iterator_int_ r465 = std____cxx11__list_int__std__allocator_int_____end___const(t464);
      agg_tmp1442 = r465;
      struct std___List_const_iterator_int_ t466 = agg_tmp0441;
      struct std___List_const_iterator_int_ t467 = agg_tmp1442;
      struct std____false_type t468 = agg_tmp2443;
      void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_std___List_const_iterator_int___(t438, t466, t467, t468);
    }
  __retval437 = t438;
  struct std____cxx11__list_int__std__allocator_int__* t469 = __retval437;
  return t469;
}

// function: _ZSteqIiSaIiEEbRKNSt7__cxx114listIT_T0_EES7_
_Bool bool_std__operator___int__std__allocator_int___(struct std____cxx11__list_int__std__allocator_int__* v470, struct std____cxx11__list_int__std__allocator_int__* v471) {
bb472: ;
  struct std____cxx11__list_int__std__allocator_int__* __x473;
  struct std____cxx11__list_int__std__allocator_int__* __y474;
  _Bool __retval475;
  struct std___List_const_iterator_int_ __end1476;
  struct std___List_const_iterator_int_ __end2477;
  struct std___List_const_iterator_int_ __i1478;
  struct std___List_const_iterator_int_ __i2479;
  __x473 = v470;
  __y474 = v471;
    struct std____cxx11__list_int__std__allocator_int__* t480 = __x473;
    unsigned long r481 = std____cxx11__list_int__std__allocator_int_____size___const(t480);
    struct std____cxx11__list_int__std__allocator_int__* t482 = __y474;
    unsigned long r483 = std____cxx11__list_int__std__allocator_int_____size___const(t482);
    _Bool c484 = ((r481 != r483)) ? 1 : 0;
    if (c484) {
      _Bool c485 = 0;
      __retval475 = c485;
      _Bool t486 = __retval475;
      return t486;
    }
  struct std____cxx11__list_int__std__allocator_int__* t487 = __x473;
  struct std___List_const_iterator_int_ r488 = std____cxx11__list_int__std__allocator_int_____end___const(t487);
  __end1476 = r488;
  struct std____cxx11__list_int__std__allocator_int__* t489 = __y474;
  struct std___List_const_iterator_int_ r490 = std____cxx11__list_int__std__allocator_int_____end___const(t489);
  __end2477 = r490;
  struct std____cxx11__list_int__std__allocator_int__* t491 = __x473;
  struct std___List_const_iterator_int_ r492 = std____cxx11__list_int__std__allocator_int_____begin___const(t491);
  __i1478 = r492;
  struct std____cxx11__list_int__std__allocator_int__* t493 = __y474;
  struct std___List_const_iterator_int_ r494 = std____cxx11__list_int__std__allocator_int_____begin___const(t493);
  __i2479 = r494;
    while (1) {
      _Bool r495 = std__operator___3(&__i1478, &__end1476);
      _Bool u496 = !r495;
      _Bool ternary497;
      if (u496) {
        _Bool r498 = std__operator___3(&__i2479, &__end2477);
        _Bool u499 = !r498;
        ternary497 = (_Bool)u499;
      } else {
        _Bool c500 = 0;
        ternary497 = (_Bool)c500;
      }
      _Bool ternary501;
      if (ternary497) {
        int* r502 = std___List_const_iterator_int___operator____const(&__i1478);
        int t503 = *r502;
        int* r504 = std___List_const_iterator_int___operator____const(&__i2479);
        int t505 = *r504;
        _Bool c506 = ((t503 == t505)) ? 1 : 0;
        ternary501 = (_Bool)c506;
      } else {
        _Bool c507 = 0;
        ternary501 = (_Bool)c507;
      }
      if (!ternary501) break;
        struct std___List_const_iterator_int_* r508 = std___List_const_iterator_int___operator__(&__i1478);
        struct std___List_const_iterator_int_* r509 = std___List_const_iterator_int___operator__(&__i2479);
    }
  _Bool r510 = std__operator___3(&__i1478, &__end1476);
  _Bool ternary511;
  if (r510) {
    _Bool r512 = std__operator___3(&__i2479, &__end2477);
    ternary511 = (_Bool)r512;
  } else {
    _Bool c513 = 0;
    ternary511 = (_Bool)c513;
  }
  __retval475 = ternary511;
  _Bool t514 = __retval475;
  return t514;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v515) {
bb516: ;
  struct std____cxx11__list_int__std__allocator_int__* this517;
  unsigned long __retval518;
  this517 = v515;
  struct std____cxx11__list_int__std__allocator_int__* t519 = this517;
  struct std____cxx11___List_base_int__std__allocator_int__* base520 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t519 + 0);
  unsigned long r521 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base520);
  __retval518 = r521;
  unsigned long t522 = __retval518;
  return t522;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2Ev
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* v523) {
bb524: ;
  struct std____cxx11__list_int__std__allocator_int__* this525;
  this525 = v523;
  struct std____cxx11__list_int__std__allocator_int__* t526 = this525;
  struct std____cxx11___List_base_int__std__allocator_int__* base527 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t526 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base_2(base527);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSERKS0_
struct std____detail___List_size* std____detail___List_size__operator__2(struct std____detail___List_size* v528, struct std____detail___List_size* v529) {
bb530: ;
  struct std____detail___List_size* this531;
  struct std____detail___List_size* unnamed532;
  struct std____detail___List_size* __retval533;
  this531 = v528;
  unnamed532 = v529;
  struct std____detail___List_size* t534 = this531;
  struct std____detail___List_size* t535 = unnamed532;
  unsigned long t536 = t535->_M_size;
  t534->_M_size = t536;
  __retval533 = t534;
  struct std____detail___List_size* t537 = __retval533;
  return t537;
}

// function: _ZNSt8__detail17_List_node_header13_M_move_nodesEOS0_
void std____detail___List_node_header___M_move_nodes(struct std____detail___List_node_header* v538, struct std____detail___List_node_header* v539) {
bb540: ;
  struct std____detail___List_node_header* this541;
  struct std____detail___List_node_header* __x542;
  struct std____detail___List_node_base* __xnode543;
  this541 = v538;
  __x542 = v539;
  struct std____detail___List_node_header* t544 = this541;
  struct std____detail___List_node_header* t545 = __x542;
  struct std____detail___List_node_base* r546 = std____detail___List_node_header___M_base(t545);
  __xnode543 = r546;
    struct std____detail___List_node_base* t547 = __xnode543;
    struct std____detail___List_node_base* t548 = t547->_M_next;
    struct std____detail___List_node_base* t549 = __xnode543;
    _Bool c550 = ((t548 == t549)) ? 1 : 0;
    if (c550) {
      std____detail___List_node_header___M_init(t544);
    } else {
      struct std____detail___List_node_base* __node551;
      struct std____detail___List_node_base* r552 = std____detail___List_node_header___M_base(t544);
      __node551 = r552;
      struct std____detail___List_node_base* t553 = __xnode543;
      struct std____detail___List_node_base* t554 = t553->_M_next;
      struct std____detail___List_node_base* t555 = __node551;
      t555->_M_next = t554;
      struct std____detail___List_node_base* t556 = __xnode543;
      struct std____detail___List_node_base* t557 = t556->_M_prev;
      struct std____detail___List_node_base* t558 = __node551;
      t558->_M_prev = t557;
      struct std____detail___List_node_base* t559 = __node551;
      struct std____detail___List_node_base* t560 = __node551;
      struct std____detail___List_node_base* t561 = t560->_M_prev;
      t561->_M_next = t559;
      struct std____detail___List_node_base* t562 = __node551;
      struct std____detail___List_node_base* t563 = t562->_M_next;
      t563->_M_prev = t559;
      struct std____detail___List_size* base564 = (struct std____detail___List_size*)((char *)t544 + 16);
      struct std____detail___List_node_header* t565 = __x542;
      struct std____detail___List_size* base566 = (struct std____detail___List_size*)((char *)t565 + 16);
      struct std____detail___List_size* r567 = std____detail___List_size__operator__2(base564, base566);
      struct std____detail___List_node_header* t568 = __x542;
      std____detail___List_node_header___M_init(t568);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE13_M_move_nodesEOS2_
void std____cxx11___List_base_int__std__allocator_int______M_move_nodes(struct std____cxx11___List_base_int__std__allocator_int__* v569, struct std____cxx11___List_base_int__std__allocator_int__* v570) {
bb571: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this572;
  struct std____cxx11___List_base_int__std__allocator_int__* __x573;
  this572 = v569;
  __x573 = v570;
  struct std____cxx11___List_base_int__std__allocator_int__* t574 = this572;
  struct std____cxx11___List_base_int__std__allocator_int__* t575 = __x573;
  std____detail___List_node_header___M_move_nodes(&t574->_M_impl._M_node, &t575->_M_impl._M_node);
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEaSERKS2_
struct std____new_allocator_std___List_node_int__* std____new_allocator_std___List_node_int_____operator_(struct std____new_allocator_std___List_node_int__* v576, struct std____new_allocator_std___List_node_int__* v577) {
bb578: ;
  struct std____new_allocator_std___List_node_int__* this579;
  struct std____new_allocator_std___List_node_int__* unnamed580;
  struct std____new_allocator_std___List_node_int__* __retval581;
  this579 = v576;
  unnamed580 = v577;
  struct std____new_allocator_std___List_node_int__* t582 = this579;
  __retval581 = t582;
  struct std____new_allocator_std___List_node_int__* t583 = __retval581;
  return t583;
}

// function: _ZNSaISt10_List_nodeIiEEaSERKS1_
struct std__allocator_std___List_node_int__* std__allocator_std___List_node_int_____operator_(struct std__allocator_std___List_node_int__* v584, struct std__allocator_std___List_node_int__* v585) {
bb586: ;
  struct std__allocator_std___List_node_int__* this587;
  struct std__allocator_std___List_node_int__* unnamed588;
  struct std__allocator_std___List_node_int__* __retval589;
  this587 = v584;
  unnamed588 = v585;
  struct std__allocator_std___List_node_int__* t590 = this587;
  struct std____new_allocator_std___List_node_int__* base591 = (struct std____new_allocator_std___List_node_int__*)((char *)t590 + 0);
  struct std__allocator_std___List_node_int__* t592 = unnamed588;
  struct std____new_allocator_std___List_node_int__* base593 = (struct std____new_allocator_std___List_node_int__*)((char *)t592 + 0);
  struct std____new_allocator_std___List_node_int__* r594 = std____new_allocator_std___List_node_int_____operator_(base591, base593);
  __retval589 = t590;
  struct std__allocator_std___List_node_int__* t595 = __retval589;
  return t595;
}

// function: _ZNSt7__cxx114listIiSaIiEEaSEOS2_
struct std____cxx11__list_int__std__allocator_int__* std____cxx11__list_int__std__allocator_int_____operator_(struct std____cxx11__list_int__std__allocator_int__* v596, struct std____cxx11__list_int__std__allocator_int__* v597) {
bb598: ;
  struct std____cxx11__list_int__std__allocator_int__* this599;
  struct std____cxx11__list_int__std__allocator_int__* __x600;
  struct std____cxx11__list_int__std__allocator_int__* __retval601;
  _Bool __move_storage602;
  this599 = v596;
  __x600 = v597;
  struct std____cxx11__list_int__std__allocator_int__* t603 = this599;
  _Bool c604 = 1;
  __move_storage602 = c604;
  std____cxx11__list_int__std__allocator_int_____clear(t603);
  struct std____cxx11___List_base_int__std__allocator_int__* base605 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t603 + 0);
  struct std____cxx11__list_int__std__allocator_int__* t606 = __x600;
  struct std____cxx11___List_base_int__std__allocator_int__* base607 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t606 + 0);
  std____cxx11___List_base_int__std__allocator_int______M_move_nodes(base605, base607);
    struct std____cxx11__list_int__std__allocator_int__* t608 = __x600;
    struct std____cxx11___List_base_int__std__allocator_int__* base609 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t608 + 0);
    struct std__allocator_std___List_node_int__* r610 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base609);
    struct std____cxx11___List_base_int__std__allocator_int__* base611 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t603 + 0);
    struct std__allocator_std___List_node_int__* r612 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base611);
    struct std__allocator_std___List_node_int__* r613 = std__allocator_std___List_node_int_____operator_(r612, r610);
  __retval601 = t603;
  struct std____cxx11__list_int__std__allocator_int__* t614 = __retval601;
  return t614;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v615) {
bb616: ;
  struct std____cxx11__list_int__std__allocator_int__* this617;
  this617 = v615;
  struct std____cxx11__list_int__std__allocator_int__* t618 = this617;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base619 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t618 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base619);
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v620, int v621) {
bb622: ;
  int __a623;
  int __b624;
  int __retval625;
  __a623 = v620;
  __b624 = v621;
  int t626 = __a623;
  int t627 = __b624;
  int b628 = t626 | t627;
  __retval625 = b628;
  int t629 = __retval625;
  return t629;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v630) {
bb631: ;
  struct std__basic_ios_char__std__char_traits_char__* this632;
  int __retval633;
  this632 = v630;
  struct std__basic_ios_char__std__char_traits_char__* t634 = this632;
  struct std__ios_base* base635 = (struct std__ios_base*)((char *)t634 + 0);
  int t636 = base635->_M_streambuf_state;
  __retval633 = t636;
  int t637 = __retval633;
  return t637;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v638, int v639) {
bb640: ;
  struct std__basic_ios_char__std__char_traits_char__* this641;
  int __state642;
  this641 = v638;
  __state642 = v639;
  struct std__basic_ios_char__std__char_traits_char__* t643 = this641;
  int r644 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t643);
  int t645 = __state642;
  int r646 = std__operator_(r644, t645);
  std__basic_ios_char__std__char_traits_char_____clear(t643, r646);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v647, char* v648) {
bb649: ;
  char* __c1650;
  char* __c2651;
  _Bool __retval652;
  __c1650 = v647;
  __c2651 = v648;
  char* t653 = __c1650;
  char t654 = *t653;
  int cast655 = (int)t654;
  char* t656 = __c2651;
  char t657 = *t656;
  int cast658 = (int)t657;
  _Bool c659 = ((cast655 == cast658)) ? 1 : 0;
  __retval652 = c659;
  _Bool t660 = __retval652;
  return t660;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v661) {
bb662: ;
  char* __p663;
  unsigned long __retval664;
  unsigned long __i665;
  __p663 = v661;
  unsigned long c666 = 0;
  __i665 = c666;
    char ref_tmp0667;
    while (1) {
      unsigned long t668 = __i665;
      char* t669 = __p663;
      char* ptr670 = &(t669)[t668];
      char c671 = 0;
      ref_tmp0667 = c671;
      _Bool r672 = __gnu_cxx__char_traits_char___eq(ptr670, &ref_tmp0667);
      _Bool u673 = !r672;
      if (!u673) break;
      unsigned long t674 = __i665;
      unsigned long u675 = t674 + 1;
      __i665 = u675;
    }
  unsigned long t676 = __i665;
  __retval664 = t676;
  unsigned long t677 = __retval664;
  return t677;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v678) {
bb679: ;
  char* __s680;
  unsigned long __retval681;
  __s680 = v678;
    _Bool r682 = std____is_constant_evaluated();
    if (r682) {
      char* t683 = __s680;
      unsigned long r684 = __gnu_cxx__char_traits_char___length(t683);
      __retval681 = r684;
      unsigned long t685 = __retval681;
      return t685;
    }
  char* t686 = __s680;
  unsigned long r687 = strlen(t686);
  __retval681 = r687;
  unsigned long t688 = __retval681;
  return t688;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v689, char* v690) {
bb691: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out692;
  char* __s693;
  struct std__basic_ostream_char__std__char_traits_char__* __retval694;
  __out692 = v689;
  __s693 = v690;
    char* t695 = __s693;
    _Bool cast696 = (_Bool)t695;
    _Bool u697 = !cast696;
    if (u697) {
      struct std__basic_ostream_char__std__char_traits_char__* t698 = __out692;
      void** v699 = (void**)t698;
      void* v700 = *((void**)v699);
      unsigned char* cast701 = (unsigned char*)v700;
      long c702 = -24;
      unsigned char* ptr703 = &(cast701)[c702];
      long* cast704 = (long*)ptr703;
      long t705 = *cast704;
      unsigned char* cast706 = (unsigned char*)t698;
      unsigned char* ptr707 = &(cast706)[t705];
      struct std__basic_ostream_char__std__char_traits_char__* cast708 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr707;
      struct std__basic_ios_char__std__char_traits_char__* cast709 = (struct std__basic_ios_char__std__char_traits_char__*)cast708;
      int t710 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast709, t710);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t711 = __out692;
      char* t712 = __s693;
      char* t713 = __s693;
      unsigned long r714 = std__char_traits_char___length(t713);
      long cast715 = (long)r714;
      struct std__basic_ostream_char__std__char_traits_char__* r716 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t711, t712, cast715);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t717 = __out692;
  __retval694 = t717;
  struct std__basic_ostream_char__std__char_traits_char__* t718 = __retval694;
  return t718;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v719, void* v720) {
bb721: ;
  struct std__basic_ostream_char__std__char_traits_char__* this722;
  void* __pf723;
  struct std__basic_ostream_char__std__char_traits_char__* __retval724;
  this722 = v719;
  __pf723 = v720;
  struct std__basic_ostream_char__std__char_traits_char__* t725 = this722;
  void* t726 = __pf723;
  struct std__basic_ostream_char__std__char_traits_char__* r727 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t726)(t725);
  __retval724 = r727;
  struct std__basic_ostream_char__std__char_traits_char__* t728 = __retval724;
  return t728;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v729) {
bb730: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os731;
  struct std__basic_ostream_char__std__char_traits_char__* __retval732;
  __os731 = v729;
  struct std__basic_ostream_char__std__char_traits_char__* t733 = __os731;
  struct std__basic_ostream_char__std__char_traits_char__* r734 = std__ostream__flush(t733);
  __retval732 = r734;
  struct std__basic_ostream_char__std__char_traits_char__* t735 = __retval732;
  return t735;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v736) {
bb737: ;
  struct std__ctype_char_* __f738;
  struct std__ctype_char_* __retval739;
  __f738 = v736;
    struct std__ctype_char_* t740 = __f738;
    _Bool cast741 = (_Bool)t740;
    _Bool u742 = !cast741;
    if (u742) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t743 = __f738;
  __retval739 = t743;
  struct std__ctype_char_* t744 = __retval739;
  return t744;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v745, char v746) {
bb747: ;
  struct std__ctype_char_* this748;
  char __c749;
  char __retval750;
  this748 = v745;
  __c749 = v746;
  struct std__ctype_char_* t751 = this748;
    char t752 = t751->_M_widen_ok;
    _Bool cast753 = (_Bool)t752;
    if (cast753) {
      char t754 = __c749;
      unsigned char cast755 = (unsigned char)t754;
      unsigned long cast756 = (unsigned long)cast755;
      char t757 = t751->_M_widen[cast756];
      __retval750 = t757;
      char t758 = __retval750;
      return t758;
    }
  std__ctype_char____M_widen_init___const(t751);
  char t759 = __c749;
  void** v760 = (void**)t751;
  void* v761 = *((void**)v760);
  char vcall764 = (char)__VERIFIER_virtual_call_char_char(t751, 6, t759);
  __retval750 = vcall764;
  char t765 = __retval750;
  return t765;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v766, char v767) {
bb768: ;
  struct std__basic_ios_char__std__char_traits_char__* this769;
  char __c770;
  char __retval771;
  this769 = v766;
  __c770 = v767;
  struct std__basic_ios_char__std__char_traits_char__* t772 = this769;
  struct std__ctype_char_* t773 = t772->_M_ctype;
  struct std__ctype_char_* r774 = std__ctype_char__const__std____check_facet_std__ctype_char___(t773);
  char t775 = __c770;
  char r776 = std__ctype_char___widen_char__const(r774, t775);
  __retval771 = r776;
  char t777 = __retval771;
  return t777;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v778) {
bb779: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os780;
  struct std__basic_ostream_char__std__char_traits_char__* __retval781;
  __os780 = v778;
  struct std__basic_ostream_char__std__char_traits_char__* t782 = __os780;
  struct std__basic_ostream_char__std__char_traits_char__* t783 = __os780;
  void** v784 = (void**)t783;
  void* v785 = *((void**)v784);
  unsigned char* cast786 = (unsigned char*)v785;
  long c787 = -24;
  unsigned char* ptr788 = &(cast786)[c787];
  long* cast789 = (long*)ptr788;
  long t790 = *cast789;
  unsigned char* cast791 = (unsigned char*)t783;
  unsigned char* ptr792 = &(cast791)[t790];
  struct std__basic_ostream_char__std__char_traits_char__* cast793 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr792;
  struct std__basic_ios_char__std__char_traits_char__* cast794 = (struct std__basic_ios_char__std__char_traits_char__*)cast793;
  char c795 = 10;
  char r796 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast794, c795);
  struct std__basic_ostream_char__std__char_traits_char__* r797 = std__ostream__put(t782, r796);
  struct std__basic_ostream_char__std__char_traits_char__* r798 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r797);
  __retval781 = r798;
  struct std__basic_ostream_char__std__char_traits_char__* t799 = __retval781;
  return t799;
}

// function: main
int main() {
bb800: ;
  int __retval801;
  struct std____cxx11__list_int__std__allocator_int__ first802;
  struct std__allocator_int_ ref_tmp0803;
  struct std____cxx11__list_int__std__allocator_int__ second804;
  struct std__allocator_int_ ref_tmp1805;
  struct std____cxx11__list_int__std__allocator_int__ ref_tmp2806;
  struct std____cxx11__list_int__std__allocator_int__* tmp_exprcleanup807;
  int c808 = 0;
  __retval801 = c808;
  unsigned long c809 = 3;
  std__allocator_int___allocator(&ref_tmp0803);
    std____cxx11__list_int__std__allocator_int_____list(&first802, c809, &ref_tmp0803);
  {
    std__allocator_int____allocator(&ref_tmp0803);
  }
    unsigned long c810 = 5;
    std__allocator_int___allocator(&ref_tmp1805);
      std____cxx11__list_int__std__allocator_int_____list(&second804, c810, &ref_tmp1805);
    {
      std__allocator_int____allocator(&ref_tmp1805);
    }
      struct std____cxx11__list_int__std__allocator_int__* r811 = std____cxx11__list_int__std__allocator_int_____operator__2(&second804, &first802);
      _Bool r812 = bool_std__operator___int__std__allocator_int___(&second804, &first802);
      _Bool u813 = !r812;
      if (u813) {
      } else {
        char* cast814 = (char*)&(_str);
        char* c815 = (char*)_str_1;
        unsigned int c816 = 20;
        char* cast817 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast814, c815, c816, cast817);
      }
      unsigned long r818 = std____cxx11__list_int__std__allocator_int_____size___const(&second804);
      unsigned long c819 = 3;
      _Bool c820 = ((r818 == c819)) ? 1 : 0;
      if (c820) {
      } else {
        char* cast821 = (char*)&(_str_2);
        char* c822 = (char*)_str_1;
        unsigned int c823 = 21;
        char* cast824 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast821, c822, c823, cast824);
      }
      ref_tmp2806 = *&__const_main_ref_tmp2; // copy
      std____cxx11__list_int__std__allocator_int_____list_2(&ref_tmp2806);
        struct std____cxx11__list_int__std__allocator_int__* r825 = std____cxx11__list_int__std__allocator_int_____operator_(&first802, &ref_tmp2806);
        tmp_exprcleanup807 = r825;
      {
        std____cxx11__list_int__std__allocator_int______list(&ref_tmp2806);
      }
      struct std____cxx11__list_int__std__allocator_int__* t826 = tmp_exprcleanup807;
      char* cast827 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r828 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast827);
      unsigned long r829 = std____cxx11__list_int__std__allocator_int_____size___const(&first802);
      int cast830 = (int)r829;
      struct std__basic_ostream_char__std__char_traits_char__* r831 = std__ostream__operator__(r828, cast830);
      struct std__basic_ostream_char__std__char_traits_char__* r832 = std__ostream__operator___std__ostream_____(r831, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast833 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r834 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast833);
      unsigned long r835 = std____cxx11__list_int__std__allocator_int_____size___const(&second804);
      int cast836 = (int)r835;
      struct std__basic_ostream_char__std__char_traits_char__* r837 = std__ostream__operator__(r834, cast836);
      struct std__basic_ostream_char__std__char_traits_char__* r838 = std__ostream__operator___std__ostream_____(r837, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c839 = 0;
      __retval801 = c839;
      int t840 = __retval801;
      int ret_val841 = t840;
      {
        std____cxx11__list_int__std__allocator_int______list(&second804);
      }
      {
        std____cxx11__list_int__std__allocator_int______list(&first802);
      }
      return ret_val841;
  int t842 = __retval801;
  return t842;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v843) {
bb844: ;
  struct std____new_allocator_int_* this845;
  this845 = v843;
  struct std____new_allocator_int_* t846 = this845;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v847) {
bb848: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this849;
  this849 = v847;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t850 = this849;
  struct std__allocator_std___List_node_int__* base851 = (struct std__allocator_std___List_node_int__*)((char *)t850 + 0);
  std__allocator_std___List_node_int_____allocator_2(base851);
    std____detail___List_node_header___List_node_header(&t850->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v852) {
bb853: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this854;
  this854 = v852;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t855 = this854;
  {
    struct std__allocator_std___List_node_int__* base856 = (struct std__allocator_std___List_node_int__*)((char *)t855 + 0);
    std__allocator_std___List_node_int______allocator(base856);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base_2(struct std____cxx11___List_base_int__std__allocator_int__* v857) {
bb858: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this859;
  this859 = v857;
  struct std____cxx11___List_base_int__std__allocator_int__* t860 = this859;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(&t860->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v861) {
bb862: ;
  struct std____detail___List_node_header* this863;
  struct std____detail___List_node_base* __retval864;
  this863 = v861;
  struct std____detail___List_node_header* t865 = this863;
  struct std____detail___List_node_base* base866 = (struct std____detail___List_node_base*)((char *)t865 + 0);
  __retval864 = base866;
  struct std____detail___List_node_base* t867 = __retval864;
  return t867;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v868) {
bb869: ;
  int* __location870;
  __location870 = v868;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v871, int* v872) {
bb873: ;
  struct std__allocator_std___List_node_int__* __a874;
  int* __p875;
  __a874 = v871;
  __p875 = v872;
  int* t876 = __p875;
  void_std__destroy_at_int_(t876);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v877) {
bb878: ;
  struct __gnu_cxx____aligned_membuf_int_* this879;
  void* __retval880;
  this879 = v877;
  struct __gnu_cxx____aligned_membuf_int_* t881 = this879;
  void* cast882 = (void*)&(t881->_M_storage);
  __retval880 = cast882;
  void* t883 = __retval880;
  return t883;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v884) {
bb885: ;
  struct __gnu_cxx____aligned_membuf_int_* this886;
  int* __retval887;
  this886 = v884;
  struct __gnu_cxx____aligned_membuf_int_* t888 = this886;
  void* r889 = __gnu_cxx____aligned_membuf_int____M_addr(t888);
  int* cast890 = (int*)r889;
  __retval887 = cast890;
  int* t891 = __retval887;
  return t891;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v892) {
bb893: ;
  struct std___List_node_int_* this894;
  int* __retval895;
  this894 = v892;
  struct std___List_node_int_* t896 = this894;
  int* r897 = __gnu_cxx____aligned_membuf_int____M_ptr(&t896->_M_storage);
  __retval895 = r897;
  int* t898 = __retval895;
  return t898;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb899: ;
  _Bool __retval900;
    _Bool c901 = 0;
    __retval900 = c901;
    _Bool t902 = __retval900;
    return t902;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v903, struct std___List_node_int_* v904, unsigned long v905) {
bb906: ;
  struct std____new_allocator_std___List_node_int__* this907;
  struct std___List_node_int_* __p908;
  unsigned long __n909;
  this907 = v903;
  __p908 = v904;
  __n909 = v905;
  struct std____new_allocator_std___List_node_int__* t910 = this907;
    unsigned long c911 = 8;
    unsigned long c912 = 16;
    _Bool c913 = ((c911 > c912)) ? 1 : 0;
    if (c913) {
      struct std___List_node_int_* t914 = __p908;
      void* cast915 = (void*)t914;
      unsigned long t916 = __n909;
      unsigned long c917 = 24;
      unsigned long b918 = t916 * c917;
      unsigned long c919 = 8;
      operator_delete_3(cast915, b918, c919);
      return;
    }
  struct std___List_node_int_* t920 = __p908;
  void* cast921 = (void*)t920;
  unsigned long t922 = __n909;
  unsigned long c923 = 24;
  unsigned long b924 = t922 * c923;
  operator_delete_2(cast921, b924);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v925, struct std___List_node_int_* v926, unsigned long v927) {
bb928: ;
  struct std__allocator_std___List_node_int__* this929;
  struct std___List_node_int_* __p930;
  unsigned long __n931;
  this929 = v925;
  __p930 = v926;
  __n931 = v927;
  struct std__allocator_std___List_node_int__* t932 = this929;
    _Bool r933 = std____is_constant_evaluated();
    if (r933) {
      struct std___List_node_int_* t934 = __p930;
      void* cast935 = (void*)t934;
      operator_delete(cast935);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base936 = (struct std____new_allocator_std___List_node_int__*)((char *)t932 + 0);
  struct std___List_node_int_* t937 = __p930;
  unsigned long t938 = __n931;
  std____new_allocator_std___List_node_int_____deallocate(base936, t937, t938);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v939, struct std___List_node_int_* v940, unsigned long v941) {
bb942: ;
  struct std__allocator_std___List_node_int__* __a943;
  struct std___List_node_int_* __p944;
  unsigned long __n945;
  __a943 = v939;
  __p944 = v940;
  __n945 = v941;
  struct std__allocator_std___List_node_int__* t946 = __a943;
  struct std___List_node_int_* t947 = __p944;
  unsigned long t948 = __n945;
  std__allocator_std___List_node_int_____deallocate(t946, t947, t948);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v949, struct std___List_node_int_* v950) {
bb951: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this952;
  struct std___List_node_int_* __p953;
  this952 = v949;
  __p953 = v950;
  struct std____cxx11___List_base_int__std__allocator_int__* t954 = this952;
  struct std__allocator_std___List_node_int__* base955 = (struct std__allocator_std___List_node_int__*)((char *)&(t954->_M_impl) + 0);
  struct std___List_node_int_* t956 = __p953;
  unsigned long c957 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base955, t956, c957);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v958, struct std___List_node_int_* v959) {
bb960: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this961;
  struct std___List_node_int_* __p962;
  this961 = v958;
  __p962 = v959;
  struct std____cxx11___List_base_int__std__allocator_int__* t963 = this961;
  struct std__allocator_std___List_node_int__* base964 = (struct std__allocator_std___List_node_int__*)((char *)&(t963->_M_impl) + 0);
  struct std___List_node_int_* t965 = __p962;
  int* r966 = std___List_node_int____M_valptr(t965);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base964, r966);
  struct std___List_node_int_* t967 = __p962;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t963, t967);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v968) {
bb969: ;
  struct std___List_node_int_* this970;
  struct std___List_node_int_* __retval971;
  this970 = v968;
  struct std___List_node_int_* t972 = this970;
  __retval971 = t972;
  struct std___List_node_int_* t973 = __retval971;
  return t973;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v974) {
bb975: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this976;
  struct std____detail___List_node_base* __cur977;
  this976 = v974;
  struct std____cxx11___List_base_int__std__allocator_int__* t978 = this976;
  struct std____detail___List_node_base* base979 = (struct std____detail___List_node_base*)((char *)&(t978->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t980 = base979->_M_next;
  __cur977 = t980;
    while (1) {
      struct std____detail___List_node_base* t981 = __cur977;
      struct std____detail___List_node_base* r982 = std____detail___List_node_header___M_base(&t978->_M_impl._M_node);
      _Bool c983 = ((t981 != r982)) ? 1 : 0;
      if (!c983) break;
        struct std___List_node_int_* __tmp984;
        struct std____detail___List_node_base* t985 = __cur977;
        struct std___List_node_int_* derived986 = (struct std___List_node_int_*)((char *)t985 - 0);
        __tmp984 = derived986;
        struct std___List_node_int_* t987 = __tmp984;
        struct std____detail___List_node_base* base988 = (struct std____detail___List_node_base*)((char *)t987 + 0);
        struct std____detail___List_node_base* t989 = base988->_M_next;
        __cur977 = t989;
        struct std___List_node_int_* t990 = __tmp984;
        struct std___List_node_int_* r991 = std___List_node_int____M_node_ptr(t990);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t978, r991);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v992) {
bb993: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this994;
  this994 = v992;
  struct std____cxx11___List_base_int__std__allocator_int__* t995 = this994;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t995);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t995->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v996) {
bb997: ;
  struct std____new_allocator_std___List_node_int__* this998;
  this998 = v996;
  struct std____new_allocator_std___List_node_int__* t999 = this998;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* v1000) {
bb1001: ;
  struct std__allocator_std___List_node_int__* this1002;
  this1002 = v1000;
  struct std__allocator_std___List_node_int__* t1003 = this1002;
  struct std____new_allocator_std___List_node_int__* base1004 = (struct std____new_allocator_std___List_node_int__*)((char *)t1003 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1004);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1005) {
bb1006: ;
  struct std____detail___List_node_header* this1007;
  this1007 = v1005;
  struct std____detail___List_node_header* t1008 = this1007;
  struct std____detail___List_node_base* base1009 = (struct std____detail___List_node_base*)((char *)t1008 + 0);
  struct std____detail___List_size* base1010 = (struct std____detail___List_size*)((char *)t1008 + 16);
  std____detail___List_node_header___M_init(t1008);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1011, struct std____detail___List_size* v1012) {
bb1013: ;
  struct std____detail___List_size* this1014;
  struct std____detail___List_size* unnamed1015;
  struct std____detail___List_size* __retval1016;
  this1014 = v1011;
  unnamed1015 = v1012;
  struct std____detail___List_size* t1017 = this1014;
  struct std____detail___List_size* t1018 = unnamed1015;
  unsigned long t1019 = t1018->_M_size;
  t1017->_M_size = t1019;
  __retval1016 = t1017;
  struct std____detail___List_size* t1020 = __retval1016;
  return t1020;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1021) {
bb1022: ;
  struct std____detail___List_node_header* this1023;
  struct std____detail___List_size ref_tmp01024;
  this1023 = v1021;
  struct std____detail___List_node_header* t1025 = this1023;
  struct std____detail___List_node_base* base1026 = (struct std____detail___List_node_base*)((char *)t1025 + 0);
  struct std____detail___List_node_base* base1027 = (struct std____detail___List_node_base*)((char *)t1025 + 0);
  base1027->_M_prev = base1026;
  struct std____detail___List_node_base* base1028 = (struct std____detail___List_node_base*)((char *)t1025 + 0);
  base1028->_M_next = base1026;
  struct std____detail___List_size* base1029 = (struct std____detail___List_size*)((char *)t1025 + 16);
  ref_tmp01024 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1030 = std____detail___List_size__operator_(base1029, &ref_tmp01024);
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v1031, struct std__allocator_int_* v1032) {
bb1033: ;
  struct std__allocator_std___List_node_int__* this1034;
  struct std__allocator_int_* unnamed1035;
  this1034 = v1031;
  unnamed1035 = v1032;
  struct std__allocator_std___List_node_int__* t1036 = this1034;
  struct std____new_allocator_std___List_node_int__* base1037 = (struct std____new_allocator_std___List_node_int__*)((char *)t1036 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1037);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1038, struct std__allocator_std___List_node_int__* v1039) {
bb1040: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1041;
  struct std__allocator_std___List_node_int__* __a1042;
  this1041 = v1038;
  __a1042 = v1039;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1043 = this1041;
  struct std__allocator_std___List_node_int__* base1044 = (struct std__allocator_std___List_node_int__*)((char *)t1043 + 0);
  struct std__allocator_std___List_node_int__* t1045 = __a1042;
  std__allocator_std___List_node_int_____allocator(base1044, t1045);
    std____detail___List_node_header___List_node_header(&t1043->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1046, struct std__allocator_std___List_node_int__* v1047) {
bb1048: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this1049;
  struct std__allocator_std___List_node_int__* __a1050;
  this1049 = v1046;
  __a1050 = v1047;
  struct std____cxx11___List_base_int__std__allocator_int__* t1051 = this1049;
  struct std__allocator_std___List_node_int__* t1052 = __a1050;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t1051->_M_impl, t1052);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v1053) {
bb1054: ;
  struct std__allocator_std___List_node_int__* this1055;
  this1055 = v1053;
  struct std__allocator_std___List_node_int__* t1056 = this1055;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v1057) {
bb1058: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this1059;
  struct std__allocator_std___List_node_int__* __retval1060;
  this1059 = v1057;
  struct std____cxx11___List_base_int__std__allocator_int__* t1061 = this1059;
  struct std__allocator_std___List_node_int__* base1062 = (struct std__allocator_std___List_node_int__*)((char *)&(t1061->_M_impl) + 0);
  __retval1060 = base1062;
  struct std__allocator_std___List_node_int__* t1063 = __retval1060;
  return t1063;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v1064) {
bb1065: ;
  struct std____new_allocator_std___List_node_int__* this1066;
  unsigned long __retval1067;
  this1066 = v1064;
  struct std____new_allocator_std___List_node_int__* t1068 = this1066;
  unsigned long c1069 = 9223372036854775807;
  unsigned long c1070 = 24;
  unsigned long b1071 = c1069 / c1070;
  __retval1067 = b1071;
  unsigned long t1072 = __retval1067;
  return t1072;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v1073, unsigned long v1074, void* v1075) {
bb1076: ;
  struct std____new_allocator_std___List_node_int__* this1077;
  unsigned long __n1078;
  void* unnamed1079;
  struct std___List_node_int_* __retval1080;
  this1077 = v1073;
  __n1078 = v1074;
  unnamed1079 = v1075;
  struct std____new_allocator_std___List_node_int__* t1081 = this1077;
    unsigned long t1082 = __n1078;
    unsigned long r1083 = std____new_allocator_std___List_node_int______M_max_size___const(t1081);
    _Bool c1084 = ((t1082 > r1083)) ? 1 : 0;
    if (c1084) {
        unsigned long t1085 = __n1078;
        unsigned long c1086 = -1;
        unsigned long c1087 = 24;
        unsigned long b1088 = c1086 / c1087;
        _Bool c1089 = ((t1085 > b1088)) ? 1 : 0;
        if (c1089) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1090 = 8;
    unsigned long c1091 = 16;
    _Bool c1092 = ((c1090 > c1091)) ? 1 : 0;
    if (c1092) {
      unsigned long __al1093;
      unsigned long c1094 = 8;
      __al1093 = c1094;
      unsigned long t1095 = __n1078;
      unsigned long c1096 = 24;
      unsigned long b1097 = t1095 * c1096;
      unsigned long t1098 = __al1093;
      void* r1099 = operator_new_2(b1097, t1098);
      struct std___List_node_int_* cast1100 = (struct std___List_node_int_*)r1099;
      __retval1080 = cast1100;
      struct std___List_node_int_* t1101 = __retval1080;
      return t1101;
    }
  unsigned long t1102 = __n1078;
  unsigned long c1103 = 24;
  unsigned long b1104 = t1102 * c1103;
  void* r1105 = operator_new(b1104);
  struct std___List_node_int_* cast1106 = (struct std___List_node_int_*)r1105;
  __retval1080 = cast1106;
  struct std___List_node_int_* t1107 = __retval1080;
  return t1107;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v1108, unsigned long v1109) {
bb1110: ;
  struct std__allocator_std___List_node_int__* this1111;
  unsigned long __n1112;
  struct std___List_node_int_* __retval1113;
  this1111 = v1108;
  __n1112 = v1109;
  struct std__allocator_std___List_node_int__* t1114 = this1111;
    _Bool r1115 = std____is_constant_evaluated();
    if (r1115) {
        unsigned long t1116 = __n1112;
        unsigned long c1117 = 24;
        unsigned long ovr1118;
        _Bool ovf1119 = __builtin_mul_overflow(t1116, c1117, &ovr1118);
        __n1112 = ovr1118;
        if (ovf1119) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1120 = __n1112;
      void* r1121 = operator_new(t1120);
      struct std___List_node_int_* cast1122 = (struct std___List_node_int_*)r1121;
      __retval1113 = cast1122;
      struct std___List_node_int_* t1123 = __retval1113;
      return t1123;
    }
  struct std____new_allocator_std___List_node_int__* base1124 = (struct std____new_allocator_std___List_node_int__*)((char *)t1114 + 0);
  unsigned long t1125 = __n1112;
  void* c1126 = ((void*)0);
  struct std___List_node_int_* r1127 = std____new_allocator_std___List_node_int_____allocate(base1124, t1125, c1126);
  __retval1113 = r1127;
  struct std___List_node_int_* t1128 = __retval1113;
  return t1128;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v1129, unsigned long v1130) {
bb1131: ;
  struct std__allocator_std___List_node_int__* __a1132;
  unsigned long __n1133;
  struct std___List_node_int_* __retval1134;
  __a1132 = v1129;
  __n1133 = v1130;
  struct std__allocator_std___List_node_int__* t1135 = __a1132;
  unsigned long t1136 = __n1133;
  struct std___List_node_int_* r1137 = std__allocator_std___List_node_int_____allocate(t1135, t1136);
  __retval1134 = r1137;
  struct std___List_node_int_* t1138 = __retval1134;
  return t1138;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1139, struct std__allocator_std___List_node_int__* v1140, struct std___List_node_int_* v1141) {
bb1142: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1143;
  struct std__allocator_std___List_node_int__* __a1144;
  struct std___List_node_int_* __ptr1145;
  this1143 = v1139;
  __a1144 = v1140;
  __ptr1145 = v1141;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1146 = this1143;
  struct std__allocator_std___List_node_int__* t1147 = __a1144;
  t1146->_M_alloc = t1147;
  struct std___List_node_int_* t1148 = __ptr1145;
  t1146->_M_ptr = t1148;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v1149) {
bb1150: ;
  struct std__allocator_std___List_node_int__* __a1151;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval1152;
  __a1151 = v1149;
  struct std__allocator_std___List_node_int__* t1153 = __a1151;
  struct std__allocator_std___List_node_int__* t1154 = __a1151;
  unsigned long c1155 = 1;
  struct std___List_node_int_* r1156 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t1154, c1155);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval1152, t1153, r1156);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t1157 = __retval1152;
  return t1157;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v1158, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1159) {
bb1160: ;
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1161;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr1162;
  this1161 = v1158;
  __ptr1162 = v1159;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1163 = this1161;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base1164 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1163 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1165 = __ptr1162;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base1164, t1165);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1166 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1163 + 0);
    struct std___List_node_int_* r1167 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1166);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1168) {
bb1169: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1170;
  this1170 = v1168;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1171 = this1170;
    struct std___List_node_int_* t1172 = t1171->_M_ptr;
    struct std___List_node_int_* c1173 = ((void*)0);
    _Bool c1174 = ((t1172 != c1173)) ? 1 : 0;
    if (c1174) {
      struct std__allocator_std___List_node_int__* t1175 = t1171->_M_alloc;
      struct std___List_node_int_* t1176 = t1171->_M_ptr;
      unsigned long c1177 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t1175, t1176, c1177);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v1178) {
bb1179: ;
  struct std__allocator_std___List_node_int__* __a1180;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval1181;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp01182;
  __a1180 = v1178;
  struct std__allocator_std___List_node_int__* t1183 = __a1180;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r1184 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t1183);
  ref_tmp01182 = r1184;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval1181, &ref_tmp01182);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp01182);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t1185 = __retval1181;
  return t1185;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1186) {
bb1187: ;
  int* __location1188;
  int* __retval1189;
  void* __loc1190;
  __location1188 = v1186;
  int* t1191 = __location1188;
  void* cast1192 = (void*)t1191;
  __loc1190 = cast1192;
    void* t1193 = __loc1190;
    int* cast1194 = (int*)t1193;
    int c1195 = 0;
    *cast1194 = c1195;
    __retval1189 = cast1194;
    int* t1196 = __retval1189;
    return t1196;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int_(struct std__allocator_std___List_node_int__* v1197, int* v1198) {
bb1199: ;
  struct std__allocator_std___List_node_int__* __a1200;
  int* __p1201;
  __a1200 = v1197;
  __p1201 = v1198;
  int* t1202 = __p1201;
  int* r1203 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1202);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v1204) {
bb1205: ;
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1206;
  struct std___List_node_int_* __retval1207;
  this1206 = v1204;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1208 = this1206;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base1209 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1208 + 0);
  struct std___List_node_int_* r1210 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1209);
  __retval1207 = r1210;
  struct std___List_node_int_* t1211 = __retval1207;
  return t1211;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v1212, void** v1213) {
bb1214: ;
  struct std___List_node_int_** __obj1215;
  void** __new_val1216;
  struct std___List_node_int_* __retval1217;
  struct std___List_node_int_* __old_val1218;
  __obj1215 = v1212;
  __new_val1216 = v1213;
  struct std___List_node_int_** t1219 = __obj1215;
  struct std___List_node_int_* t1220 = *t1219;
  __old_val1218 = t1220;
  void** t1221 = __new_val1216;
  struct std___List_node_int_* c1222 = ((void*)0);
  struct std___List_node_int_** t1223 = __obj1215;
  *t1223 = c1222;
  struct std___List_node_int_* t1224 = __old_val1218;
  __retval1217 = t1224;
  struct std___List_node_int_* t1225 = __retval1217;
  return t1225;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1226) {
bb1227: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1228;
  struct std___List_node_int_* __retval1229;
  void* ref_tmp01230;
  this1228 = v1226;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1231 = this1228;
  void* c1232 = ((void*)0);
  ref_tmp01230 = c1232;
  struct std___List_node_int_* r1233 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t1231->_M_ptr, &ref_tmp01230);
  __retval1229 = r1233;
  struct std___List_node_int_* t1234 = __retval1229;
  return t1234;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v1235) {
bb1236: ;
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1237;
  this1237 = v1235;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1238 = this1237;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base1239 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1238 + 0);
      _Bool r1240 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base1239);
      if (r1240) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base1241 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1238 + 0);
        struct std___List_node_int_* r1242 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1241);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1243 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1238 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base1243);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node__(struct std____cxx11__list_int__std__allocator_int__* v1244) {
bb1245: ;
  struct std____cxx11__list_int__std__allocator_int__* this1246;
  struct std___List_node_int_* __retval1247;
  struct std__allocator_std___List_node_int__* __alloc1248;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard1249;
  this1246 = v1244;
  struct std____cxx11__list_int__std__allocator_int__* t1250 = this1246;
  struct std____cxx11___List_base_int__std__allocator_int__* base1251 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1250 + 0);
  struct std__allocator_std___List_node_int__* r1252 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1251);
  __alloc1248 = r1252;
  struct std__allocator_std___List_node_int__* t1253 = __alloc1248;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r1254 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t1253);
  __guard1249 = r1254;
    struct std__allocator_std___List_node_int__* t1255 = __alloc1248;
    struct std___List_node_int_* r1256 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard1249);
    int* r1257 = std___List_node_int____M_valptr(r1256);
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int_(t1255, r1257);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1258 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard1249) + 0);
    struct std___List_node_int_* r1259 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base1258);
    __retval1247 = r1259;
    struct std___List_node_int_* t1260 = __retval1247;
    struct std___List_node_int_* ret_val1261 = t1260;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1249);
    }
    return ret_val1261;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v1262, unsigned long v1263) {
bb1264: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this1265;
  unsigned long __n1266;
  this1265 = v1262;
  __n1266 = v1263;
  struct std____cxx11___List_base_int__std__allocator_int__* t1267 = this1265;
  unsigned long t1268 = __n1266;
  struct std____detail___List_size* base1269 = (struct std____detail___List_size*)((char *)&(t1267->_M_impl._M_node) + 16);
  unsigned long t1270 = base1269->_M_size;
  unsigned long b1271 = t1270 + t1268;
  base1269->_M_size = b1271;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert__(struct std____cxx11__list_int__std__allocator_int__* v1272, struct std___List_iterator_int_ v1273) {
bb1274: ;
  struct std____cxx11__list_int__std__allocator_int__* this1275;
  struct std___List_iterator_int_ __position1276;
  struct std___List_node_int_* __tmp1277;
  this1275 = v1272;
  __position1276 = v1273;
  struct std____cxx11__list_int__std__allocator_int__* t1278 = this1275;
  struct std___List_node_int_* r1279 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node__(t1278);
  __tmp1277 = r1279;
  struct std___List_node_int_* t1280 = __tmp1277;
  struct std____detail___List_node_base* base1281 = (struct std____detail___List_node_base*)((char *)t1280 + 0);
  struct std____detail___List_node_base* t1282 = __position1276._M_node;
  std____detail___List_node_base___M_hook(base1281, t1282);
  struct std____cxx11___List_base_int__std__allocator_int__* base1283 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1278 + 0);
  unsigned long c1284 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1283, c1284);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v1285, struct std____detail___List_node_base* v1286) {
bb1287: ;
  struct std___List_iterator_int_* this1288;
  struct std____detail___List_node_base* __x1289;
  this1288 = v1285;
  __x1289 = v1286;
  struct std___List_iterator_int_* t1290 = this1288;
  struct std____detail___List_node_base* t1291 = __x1289;
  t1290->_M_node = t1291;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v1292) {
bb1293: ;
  struct std____cxx11__list_int__std__allocator_int__* this1294;
  struct std___List_iterator_int_ __retval1295;
  this1294 = v1292;
  struct std____cxx11__list_int__std__allocator_int__* t1296 = this1294;
  struct std____cxx11___List_base_int__std__allocator_int__* base1297 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1296 + 0);
  struct std____detail___List_node_base* r1298 = std____detail___List_node_header___M_base(&base1297->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval1295, r1298);
  struct std___List_iterator_int_ t1299 = __retval1295;
  return t1299;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v1300) {
bb1301: ;
  struct std____detail___List_node_base* this1302;
  struct std____detail___List_node_base* __retval1303;
  this1302 = v1300;
  struct std____detail___List_node_base* t1304 = this1302;
  __retval1303 = t1304;
  struct std____detail___List_node_base* t1305 = __retval1303;
  return t1305;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v1306) {
bb1307: ;
  struct std____cxx11__list_int__std__allocator_int__* this1308;
  _Bool __retval1309;
  this1308 = v1306;
  struct std____cxx11__list_int__std__allocator_int__* t1310 = this1308;
  struct std____cxx11___List_base_int__std__allocator_int__* base1311 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1310 + 0);
  struct std____detail___List_node_base* base1312 = (struct std____detail___List_node_base*)((char *)&(base1311->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1313 = base1312->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base1314 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1310 + 0);
  struct std____detail___List_node_base* base1315 = (struct std____detail___List_node_base*)((char *)&(base1314->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1316 = std____detail___List_node_base___M_base___const(base1315);
  _Bool c1317 = ((t1313 == r1316)) ? 1 : 0;
  __retval1309 = c1317;
  _Bool t1318 = __retval1309;
  return t1318;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v1319) {
bb1320: ;
  struct std___List_iterator_int_* this1321;
  struct std___List_iterator_int_* __retval1322;
  this1321 = v1319;
  struct std___List_iterator_int_* t1323 = this1321;
  struct std____detail___List_node_base* t1324 = t1323->_M_node;
  struct std____detail___List_node_base* t1325 = t1324->_M_prev;
  t1323->_M_node = t1325;
  __retval1322 = t1323;
  struct std___List_iterator_int_* t1326 = __retval1322;
  return t1326;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v1327) {
bb1328: ;
  struct std___List_iterator_int_* this1329;
  int* __retval1330;
  this1329 = v1327;
  struct std___List_iterator_int_* t1331 = this1329;
  struct std____detail___List_node_base* t1332 = t1331->_M_node;
  struct std___List_node_int_* derived1333 = ((t1332) ? (struct std___List_node_int_*)((char *)t1332 - 0) : (struct std___List_node_int_*)0);
  int* r1334 = std___List_node_int____M_valptr(derived1333);
  __retval1330 = r1334;
  int* t1335 = __retval1330;
  return t1335;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v1336) {
bb1337: ;
  struct std____cxx11__list_int__std__allocator_int__* this1338;
  int* __retval1339;
  struct std___List_iterator_int_ __tmp1340;
  this1338 = v1336;
  struct std____cxx11__list_int__std__allocator_int__* t1341 = this1338;
    do {
          _Bool r1342 = std____cxx11__list_int__std__allocator_int_____empty___const(t1341);
          if (r1342) {
            char* cast1343 = (char*)&(_str_5);
            int c1344 = 1674;
            char* cast1345 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast1346 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1343, c1344, cast1345, cast1346);
          }
      _Bool c1347 = 0;
      if (!c1347) break;
    } while (1);
  struct std___List_iterator_int_ r1348 = std____cxx11__list_int__std__allocator_int_____end(t1341);
  __tmp1340 = r1348;
  struct std___List_iterator_int_* r1349 = std___List_iterator_int___operator__(&__tmp1340);
  int* r1350 = std___List_iterator_int___operator____const(&__tmp1340);
  __retval1339 = r1350;
  int* t1351 = __retval1339;
  return t1351;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJEEERiDpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back__(struct std____cxx11__list_int__std__allocator_int__* v1352) {
bb1353: ;
  struct std____cxx11__list_int__std__allocator_int__* this1354;
  int* __retval1355;
  struct std___List_iterator_int_ agg_tmp01356;
  this1354 = v1352;
  struct std____cxx11__list_int__std__allocator_int__* t1357 = this1354;
  struct std___List_iterator_int_ r1358 = std____cxx11__list_int__std__allocator_int_____end(t1357);
  agg_tmp01356 = r1358;
  struct std___List_iterator_int_ t1359 = agg_tmp01356;
  void_std____cxx11__list_int__std__allocator_int______M_insert__(t1357, t1359);
  int* r1360 = std____cxx11__list_int__std__allocator_int_____back(t1357);
  __retval1355 = r1360;
  int* t1361 = __retval1355;
  return t1361;
}

// function: _ZNSt7__cxx114listIiSaIiEE21_M_default_initializeEm
void std____cxx11__list_int__std__allocator_int______M_default_initialize(struct std____cxx11__list_int__std__allocator_int__* v1362, unsigned long v1363) {
bb1364: ;
  struct std____cxx11__list_int__std__allocator_int__* this1365;
  unsigned long __n1366;
  this1365 = v1362;
  __n1366 = v1363;
  struct std____cxx11__list_int__std__allocator_int__* t1367 = this1365;
    while (1) {
      unsigned long t1369 = __n1366;
      _Bool cast1370 = (_Bool)t1369;
      if (!cast1370) break;
      int* r1371 = int__std____cxx11__list_int__std__allocator_int_____emplace_back__(t1367);
    for_step1368: ;
      unsigned long t1372 = __n1366;
      unsigned long u1373 = t1372 - 1;
      __n1366 = u1373;
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v1374, struct std____new_allocator_std___List_node_int__* v1375) {
bb1376: ;
  struct std____new_allocator_std___List_node_int__* this1377;
  struct std____new_allocator_std___List_node_int__* unnamed1378;
  this1377 = v1374;
  unnamed1378 = v1375;
  struct std____new_allocator_std___List_node_int__* t1379 = this1377;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v1380, struct std__allocator_std___List_node_int__* v1381) {
bb1382: ;
  struct std__allocator_std___List_node_int__* this1383;
  struct std__allocator_std___List_node_int__* __a1384;
  this1383 = v1380;
  __a1384 = v1381;
  struct std__allocator_std___List_node_int__* t1385 = this1383;
  struct std____new_allocator_std___List_node_int__* base1386 = (struct std____new_allocator_std___List_node_int__*)((char *)t1385 + 0);
  struct std__allocator_std___List_node_int__* t1387 = __a1384;
  struct std____new_allocator_std___List_node_int__* base1388 = (struct std____new_allocator_std___List_node_int__*)((char *)t1387 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base1386, base1388);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1389, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1390) {
bb1391: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1392;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd1393;
  this1392 = v1389;
  __gd1393 = v1390;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1394 = this1392;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1395 = __gd1393;
  struct std__allocator_std___List_node_int__* t1396 = t1395->_M_alloc;
  t1394->_M_alloc = t1396;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1397 = __gd1393;
  struct std___List_node_int_* t1398 = t1397->_M_ptr;
  t1394->_M_ptr = t1398;
  struct std___List_node_int_* c1399 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1400 = __gd1393;
  t1400->_M_ptr = c1399;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v1401) {
bb1402: ;
  struct std___List_node_int_* __ptr1403;
  struct std___List_node_int_* __retval1404;
  __ptr1403 = v1401;
  struct std___List_node_int_* t1405 = __ptr1403;
  __retval1404 = t1405;
  struct std___List_node_int_* t1406 = __retval1404;
  return t1406;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v1407) {
bb1408: ;
  struct std___List_node_int_** __ptr1409;
  struct std___List_node_int_* __retval1410;
  __ptr1409 = v1407;
  struct std___List_node_int_** t1411 = __ptr1409;
  struct std___List_node_int_* t1412 = *t1411;
  struct std___List_node_int_* r1413 = std___List_node_int___std__to_address_std___List_node_int___(t1412);
  __retval1410 = r1413;
  struct std___List_node_int_* t1414 = __retval1410;
  return t1414;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1415) {
bb1416: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1417;
  struct std___List_node_int_* __retval1418;
  this1417 = v1415;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1419 = this1417;
  struct std___List_node_int_* r1420 = auto_std____to_address_std___List_node_int___(&t1419->_M_ptr);
  __retval1418 = r1420;
  struct std___List_node_int_* t1421 = __retval1418;
  return t1421;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1422) {
bb1423: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1424;
  _Bool __retval1425;
  this1424 = v1422;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1426 = this1424;
  struct std___List_node_int_* t1427 = t1426->_M_ptr;
  _Bool cast1428 = (_Bool)t1427;
  __retval1425 = cast1428;
  _Bool t1429 = __retval1425;
  return t1429;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1430, int* v1431) {
bb1432: ;
  int* __location1433;
  int* __args1434;
  int* __retval1435;
  void* __loc1436;
  __location1433 = v1430;
  __args1434 = v1431;
  int* t1437 = __location1433;
  void* cast1438 = (void*)t1437;
  __loc1436 = cast1438;
    void* t1439 = __loc1436;
    int* cast1440 = (int*)t1439;
    int* t1441 = __args1434;
    int t1442 = *t1441;
    *cast1440 = t1442;
    __retval1435 = cast1440;
    int* t1443 = __retval1435;
    return t1443;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v1444, int* v1445, int* v1446) {
bb1447: ;
  struct std__allocator_std___List_node_int__* __a1448;
  int* __p1449;
  int* __args1450;
  __a1448 = v1444;
  __p1449 = v1445;
  __args1450 = v1446;
  int* t1451 = __p1449;
  int* t1452 = __args1450;
  int* r1453 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1451, t1452);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1454, int* v1455) {
bb1456: ;
  struct std____cxx11__list_int__std__allocator_int__* this1457;
  int* __args1458;
  struct std___List_node_int_* __retval1459;
  struct std__allocator_std___List_node_int__* __alloc1460;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard1461;
  this1457 = v1454;
  __args1458 = v1455;
  struct std____cxx11__list_int__std__allocator_int__* t1462 = this1457;
  struct std____cxx11___List_base_int__std__allocator_int__* base1463 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1462 + 0);
  struct std__allocator_std___List_node_int__* r1464 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1463);
  __alloc1460 = r1464;
  struct std__allocator_std___List_node_int__* t1465 = __alloc1460;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r1466 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t1465);
  __guard1461 = r1466;
    struct std__allocator_std___List_node_int__* t1467 = __alloc1460;
    struct std___List_node_int_* r1468 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard1461);
    int* r1469 = std___List_node_int____M_valptr(r1468);
    int* t1470 = __args1458;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t1467, r1469, t1470);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1471 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard1461) + 0);
    struct std___List_node_int_* r1472 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base1471);
    __retval1459 = r1472;
    struct std___List_node_int_* t1473 = __retval1459;
    struct std___List_node_int_* ret_val1474 = t1473;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1461);
    }
    return ret_val1474;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1475, struct std___List_iterator_int_ v1476, int* v1477) {
bb1478: ;
  struct std____cxx11__list_int__std__allocator_int__* this1479;
  struct std___List_iterator_int_ __position1480;
  int* __args1481;
  struct std___List_node_int_* __tmp1482;
  this1479 = v1475;
  __position1480 = v1476;
  __args1481 = v1477;
  struct std____cxx11__list_int__std__allocator_int__* t1483 = this1479;
  int* t1484 = __args1481;
  struct std___List_node_int_* r1485 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t1483, t1484);
  __tmp1482 = r1485;
  struct std___List_node_int_* t1486 = __tmp1482;
  struct std____detail___List_node_base* base1487 = (struct std____detail___List_node_base*)((char *)t1486 + 0);
  struct std____detail___List_node_base* t1488 = __position1480._M_node;
  std____detail___List_node_base___M_hook(base1487, t1488);
  struct std____cxx11___List_base_int__std__allocator_int__* base1489 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1483 + 0);
  unsigned long c1490 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1489, c1490);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRKiEEERiDpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1491, int* v1492) {
bb1493: ;
  struct std____cxx11__list_int__std__allocator_int__* this1494;
  int* __args1495;
  int* __retval1496;
  struct std___List_iterator_int_ agg_tmp01497;
  this1494 = v1491;
  __args1495 = v1492;
  struct std____cxx11__list_int__std__allocator_int__* t1498 = this1494;
  struct std___List_iterator_int_ r1499 = std____cxx11__list_int__std__allocator_int_____end(t1498);
  agg_tmp01497 = r1499;
  int* t1500 = __args1495;
  struct std___List_iterator_int_ t1501 = agg_tmp01497;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t1498, t1501, t1500);
  int* r1502 = std____cxx11__list_int__std__allocator_int_____back(t1498);
  __retval1496 = r1502;
  int* t1503 = __retval1496;
  return t1503;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchISt20_List_const_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v1504, struct std___List_const_iterator_int_ v1505, struct std___List_const_iterator_int_ v1506, struct std____false_type v1507) {
bb1508: ;
  struct std____cxx11__list_int__std__allocator_int__* this1509;
  struct std___List_const_iterator_int_ __first1510;
  struct std___List_const_iterator_int_ __last1511;
  struct std____false_type unnamed1512;
  _Bool __notempty1513;
  this1509 = v1504;
  __first1510 = v1505;
  __last1511 = v1506;
  unnamed1512 = v1507;
  struct std____cxx11__list_int__std__allocator_int__* t1514 = this1509;
  _Bool r1515 = std__operator___3(&__first1510, &__last1511);
  _Bool u1516 = !r1515;
  __notempty1513 = u1516;
    while (1) {
      _Bool r1518 = std__operator___3(&__first1510, &__last1511);
      _Bool u1519 = !r1518;
      if (!u1519) break;
      int* r1520 = std___List_const_iterator_int___operator____const(&__first1510);
      int* r1521 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(t1514, r1520);
    for_step1517: ;
      struct std___List_const_iterator_int_* r1522 = std___List_const_iterator_int___operator__(&__first1510);
    }
    _Bool t1523 = __notempty1513;
    if (t1523) {
        struct std___List_iterator_int_ ref_tmp01524;
        struct std___List_iterator_int_ ref_tmp11525;
        struct std___List_iterator_int_ r1526 = std____cxx11__list_int__std__allocator_int_____begin(t1514);
        ref_tmp01524 = r1526;
        struct std___List_iterator_int_ r1527 = std____cxx11__list_int__std__allocator_int_____end(t1514);
        ref_tmp11525 = r1527;
        _Bool r1528 = std__operator___2(&ref_tmp01524, &ref_tmp11525);
        if (r1528) {
          __builtin_unreachable();
        }
    }
  return;
}

