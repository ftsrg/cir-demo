extern void abort(void);
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

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int __const_main_myints[3] = {1776, 7, 4};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "first.back() == 100";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_assign/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "first.size() == 7";
char _str_3[21] = "second.back() == 100";
char _str_4[19] = "second.size() == 7";
char _str_5[18] = "first.back() == 4";
char _str_6[18] = "first.size() == 3";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[16] = "Size of first: ";
char _str_8[17] = "Size of second: ";
char _str_9[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[15] = "!this->empty()";
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std__operator___2(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std__operator__(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
extern void abort();
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std___List_iterator_int_ p3);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, unsigned long p2, int* p3);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
_Bool std__operator___3(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2);
void std____cxx11__list_int__std__allocator_int______M_fill_assign(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std____cxx11__list_int__std__allocator_int_____assign(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std__allocator_int_* p3);
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std___List_iterator_int_ p3);
void void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_std___List_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std____false_type p3);
void void_std____cxx11__list_int__std__allocator_int_____assign_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, int* p2, int* p3);
void void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std____false_type p3);
void void_std____cxx11__list_int__std__allocator_int_____assign_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2);
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
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* p0);
int main();
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
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
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
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std____false_type p3);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std____false_type p3);

// function: _ZNSt7__cxx114listIiSaIiEEC2Ev
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* v0) {
bb1:
  struct std____cxx11__list_int__std__allocator_int__* this2;
  this2 = v0;
  struct std____cxx11__list_int__std__allocator_int__* t3 = this2;
  struct std____cxx11___List_base_int__std__allocator_int__* base4 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t3 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base_2(base4);
  return;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator___2(struct std___List_iterator_int_* v5, struct std___List_iterator_int_* v6) {
bb7:
  struct std___List_iterator_int_* __x8;
  struct std___List_iterator_int_* __y9;
  _Bool __retval10;
  __x8 = v5;
  __y9 = v6;
  struct std___List_iterator_int_* t11 = __x8;
  struct std____detail___List_node_base* t12 = t11->_M_node;
  struct std___List_iterator_int_* t13 = __y9;
  struct std____detail___List_node_base* t14 = t13->_M_node;
  _Bool c15 = ((t12 == t14)) ? 1 : 0;
  __retval10 = c15;
  _Bool t16 = __retval10;
  return t16;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v17) {
bb18:
  struct std___List_iterator_int_* this19;
  int* __retval20;
  this19 = v17;
  struct std___List_iterator_int_* t21 = this19;
  struct std____detail___List_node_base* t22 = t21->_M_node;
  struct std___List_node_int_* derived23 = ((t22) ? (struct std___List_node_int_*)((char *)t22 - 0) : (struct std___List_node_int_*)0);
  int* r24 = std___List_node_int____M_valptr(derived23);
  __retval20 = r24;
  int* t25 = __retval20;
  return t25;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v26) {
bb27:
  struct std___List_iterator_int_* this28;
  struct std___List_iterator_int_* __retval29;
  this28 = v26;
  struct std___List_iterator_int_* t30 = this28;
  struct std____detail___List_node_base* t31 = t30->_M_node;
  struct std____detail___List_node_base* t32 = t31->_M_next;
  t30->_M_node = t32;
  __retval29 = t30;
  struct std___List_iterator_int_* t33 = __retval29;
  return t33;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v34) {
bb35:
  struct std____cxx11___List_base_int__std__allocator_int__* this36;
  struct std__allocator_std___List_node_int__* __retval37;
  this36 = v34;
  struct std____cxx11___List_base_int__std__allocator_int__* t38 = this36;
  struct std__allocator_std___List_node_int__* base39 = (struct std__allocator_std___List_node_int__*)((char *)&(t38->_M_impl) + 0);
  __retval37 = base39;
  struct std__allocator_std___List_node_int__* t40 = __retval37;
  return t40;
}

// function: _ZNSaIiEC2ISt10_List_nodeIiEEERKSaIT_E
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* v41, struct std__allocator_std___List_node_int__* v42) {
bb43:
  struct std__allocator_int_* this44;
  struct std__allocator_std___List_node_int__* unnamed45;
  this44 = v41;
  unnamed45 = v42;
  struct std__allocator_int_* t46 = this44;
  struct std____new_allocator_int_* base47 = (struct std____new_allocator_int_*)((char *)t46 + 0);
  std____new_allocator_int_____new_allocator(base47);
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE13get_allocatorEv
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* v48) {
bb49:
  struct std____cxx11__list_int__std__allocator_int__* this50;
  struct std__allocator_int_ __retval51;
  this50 = v48;
  struct std____cxx11__list_int__std__allocator_int__* t52 = this50;
  struct std____cxx11___List_base_int__std__allocator_int__* base53 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t52 + 0);
  struct std__allocator_std___List_node_int__* r54 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base53);
  std__allocator_int___allocator_std___List_node_int___(&__retval51, r54);
  struct std__allocator_int_ t55 = __retval51;
  return t55;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2EmRKiRKS1_
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v56, unsigned long v57, int* v58, struct std__allocator_int_* v59) {
bb60:
  struct std____cxx11__list_int__std__allocator_int__* this61;
  unsigned long __n62;
  int* __value63;
  struct std__allocator_int_* __a64;
  struct std__allocator_std___List_node_int__ ref_tmp065;
  this61 = v56;
  __n62 = v57;
  __value63 = v58;
  __a64 = v59;
  struct std____cxx11__list_int__std__allocator_int__* t66 = this61;
  struct std____cxx11___List_base_int__std__allocator_int__* base67 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std__allocator_int_* t68 = __a64;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp065, t68);
    std____cxx11___List_base_int__std__allocator_int______List_base(base67, &ref_tmp065);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp065);
  }
    unsigned long t69 = __n62;
    int* t70 = __value63;
    std____cxx11__list_int__std__allocator_int______M_fill_initialize(t66, t69, t70);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v71) {
bb72:
  struct std__allocator_int_* this73;
  this73 = v71;
  struct std__allocator_int_* t74 = this73;
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v75) {
bb76:
  struct std____detail___List_node_base* this77;
  struct std____detail___List_node_base* __retval78;
  this77 = v75;
  struct std____detail___List_node_base* t79 = this77;
  __retval78 = t79;
  struct std____detail___List_node_base* t80 = __retval78;
  return t80;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v81) {
bb82:
  struct std____cxx11__list_int__std__allocator_int__* this83;
  _Bool __retval84;
  this83 = v81;
  struct std____cxx11__list_int__std__allocator_int__* t85 = this83;
  struct std____cxx11___List_base_int__std__allocator_int__* base86 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t85 + 0);
  struct std____detail___List_node_base* base87 = (struct std____detail___List_node_base*)((char *)&(base86->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t88 = base87->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base89 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t85 + 0);
  struct std____detail___List_node_base* base90 = (struct std____detail___List_node_base*)((char *)&(base89->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r91 = std____detail___List_node_base___M_base___const(base90);
  _Bool c92 = ((t88 == r91)) ? 1 : 0;
  __retval84 = c92;
  _Bool t93 = __retval84;
  return t93;
}

// function: _ZSteqRKSaISt10_List_nodeIiEES3_
_Bool std__operator__(struct std__allocator_std___List_node_int__* v94, struct std__allocator_std___List_node_int__* v95) {
bb96:
  struct std__allocator_std___List_node_int__* unnamed97;
  struct std__allocator_std___List_node_int__* unnamed98;
  _Bool __retval99;
  unnamed97 = v94;
  unnamed98 = v95;
  _Bool c100 = 1;
  __retval99 = c100;
  _Bool t101 = __retval99;
  return t101;
}

// function: _ZNSt7__cxx114listIiSaIiEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* v102, struct std____cxx11__list_int__std__allocator_int__* v103) {
bb104:
  struct std____cxx11__list_int__std__allocator_int__* this105;
  struct std____cxx11__list_int__std__allocator_int__* __x106;
  this105 = v102;
  __x106 = v103;
  struct std____cxx11__list_int__std__allocator_int__* t107 = this105;
    struct std____cxx11___List_base_int__std__allocator_int__* base108 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t107 + 0);
    struct std__allocator_std___List_node_int__* r109 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base108);
    struct std____cxx11__list_int__std__allocator_int__* t110 = __x106;
    struct std____cxx11___List_base_int__std__allocator_int__* base111 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t110 + 0);
    struct std__allocator_std___List_node_int__* r112 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base111);
    _Bool r113 = std__operator__(r109, r112);
    _Bool u114 = !r113;
    if (u114) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE11_M_transferESt14_List_iteratorIiES4_S4_
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* v115, struct std___List_iterator_int_ v116, struct std___List_iterator_int_ v117, struct std___List_iterator_int_ v118) {
bb119:
  struct std____cxx11__list_int__std__allocator_int__* this120;
  struct std___List_iterator_int_ __position121;
  struct std___List_iterator_int_ __first122;
  struct std___List_iterator_int_ __last123;
  this120 = v115;
  __position121 = v116;
  __first122 = v117;
  __last123 = v118;
  struct std____cxx11__list_int__std__allocator_int__* t124 = this120;
  struct std____detail___List_node_base* t125 = __position121._M_node;
  struct std____detail___List_node_base* t126 = __first122._M_node;
  struct std____detail___List_node_base* t127 = __last123._M_node;
  std____detail___List_node_base___M_transfer(t125, t126, t127);
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v128) {
bb129:
  struct std____cxx11___List_base_int__std__allocator_int__* this130;
  unsigned long __retval131;
  this130 = v128;
  struct std____cxx11___List_base_int__std__allocator_int__* t132 = this130;
  struct std____detail___List_size* base133 = (struct std____detail___List_size*)((char *)&(t132->_M_impl._M_node) + 16);
  unsigned long t134 = base133->_M_size;
  __retval131 = t134;
  unsigned long t135 = __retval131;
  return t135;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_set_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* v136, unsigned long v137) {
bb138:
  struct std____cxx11___List_base_int__std__allocator_int__* this139;
  unsigned long __n140;
  this139 = v136;
  __n140 = v137;
  struct std____cxx11___List_base_int__std__allocator_int__* t141 = this139;
  unsigned long t142 = __n140;
  struct std____detail___List_size* base143 = (struct std____detail___List_size*)((char *)&(t141->_M_impl._M_node) + 16);
  base143->_M_size = t142;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* v144, struct std___List_const_iterator_int_ v145, struct std____cxx11__list_int__std__allocator_int__* v146) {
bb147:
  struct std____cxx11__list_int__std__allocator_int__* this148;
  struct std___List_const_iterator_int_ __position149;
  struct std____cxx11__list_int__std__allocator_int__* __x150;
  this148 = v144;
  __position149 = v145;
  __x150 = v146;
  struct std____cxx11__list_int__std__allocator_int__* t151 = this148;
    struct std____cxx11__list_int__std__allocator_int__* t152 = __x150;
    _Bool r153 = std____cxx11__list_int__std__allocator_int_____empty___const(t152);
    _Bool u154 = !r153;
    if (u154) {
      struct std___List_iterator_int_ agg_tmp0155;
      struct std___List_iterator_int_ agg_tmp1156;
      struct std___List_iterator_int_ agg_tmp2157;
      struct std____cxx11__list_int__std__allocator_int__* t158 = __x150;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t151, t158);
      struct std___List_iterator_int_ r159 = std___List_const_iterator_int____M_const_cast___const(&__position149);
      agg_tmp0155 = r159;
      struct std____cxx11__list_int__std__allocator_int__* t160 = __x150;
      struct std___List_iterator_int_ r161 = std____cxx11__list_int__std__allocator_int_____begin(t160);
      agg_tmp1156 = r161;
      struct std____cxx11__list_int__std__allocator_int__* t162 = __x150;
      struct std___List_iterator_int_ r163 = std____cxx11__list_int__std__allocator_int_____end(t162);
      agg_tmp2157 = r163;
      struct std___List_iterator_int_ t164 = agg_tmp0155;
      struct std___List_iterator_int_ t165 = agg_tmp1156;
      struct std___List_iterator_int_ t166 = agg_tmp2157;
      std____cxx11__list_int__std__allocator_int______M_transfer(t151, t164, t165, t166);
      struct std____cxx11___List_base_int__std__allocator_int__* base167 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t151 + 0);
      struct std____cxx11__list_int__std__allocator_int__* t168 = __x150;
      struct std____cxx11___List_base_int__std__allocator_int__* base169 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t168 + 0);
      unsigned long r170 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base169);
      std____cxx11___List_base_int__std__allocator_int______M_inc_size(base167, r170);
      struct std____cxx11__list_int__std__allocator_int__* t171 = __x150;
      struct std____cxx11___List_base_int__std__allocator_int__* base172 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t171 + 0);
      unsigned long c173 = 0;
      std____cxx11___List_base_int__std__allocator_int______M_set_size(base172, c173);
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* v174, struct std___List_const_iterator_int_ v175, struct std____cxx11__list_int__std__allocator_int__* v176) {
bb177:
  struct std____cxx11__list_int__std__allocator_int__* this178;
  struct std___List_const_iterator_int_ __position179;
  struct std____cxx11__list_int__std__allocator_int__* __x180;
  struct std___List_const_iterator_int_ agg_tmp0181;
  this178 = v174;
  __position179 = v175;
  __x180 = v176;
  struct std____cxx11__list_int__std__allocator_int__* t182 = this178;
  agg_tmp0181 = __position179; // copy
  struct std____cxx11__list_int__std__allocator_int__* t183 = __x180;
  struct std___List_const_iterator_int_ t184 = agg_tmp0181;
  std____cxx11__list_int__std__allocator_int_____splice(t182, t184, t183);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v185, struct std____detail___List_node_base* v186) {
bb187:
  struct std___List_iterator_int_* this188;
  struct std____detail___List_node_base* __x189;
  this188 = v185;
  __x189 = v186;
  struct std___List_iterator_int_* t190 = this188;
  struct std____detail___List_node_base* t191 = __x189;
  t190->_M_node = t191;
  return;
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v192) {
bb193:
  struct std___List_const_iterator_int_* this194;
  struct std___List_iterator_int_ __retval195;
  this194 = v192;
  struct std___List_const_iterator_int_* t196 = this194;
  struct std____detail___List_node_base* t197 = t196->_M_node;
  std___List_iterator_int____List_iterator(&__retval195, t197);
  struct std___List_iterator_int_ t198 = __retval195;
  return t198;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertESt20_List_const_iteratorIiEmRKi
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* v199, struct std___List_const_iterator_int_ v200, unsigned long v201, int* v202) {
bb203:
  struct std____cxx11__list_int__std__allocator_int__* this204;
  struct std___List_const_iterator_int_ __position205;
  unsigned long __n206;
  int* __x207;
  struct std___List_iterator_int_ __retval208;
  this204 = v199;
  __position205 = v200;
  __n206 = v201;
  __x207 = v202;
  struct std____cxx11__list_int__std__allocator_int__* t209 = this204;
    unsigned long t210 = __n206;
    _Bool cast211 = (_Bool)t210;
    if (cast211) {
      struct std____cxx11__list_int__std__allocator_int__ __tmp212;
      struct std__allocator_int_ ref_tmp0213;
      struct std___List_const_iterator_int_ agg_tmp0214;
      unsigned long t215 = __n206;
      int* t216 = __x207;
      struct std__allocator_int_ r217 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t209);
      ref_tmp0213 = r217;
        std____cxx11__list_int__std__allocator_int_____list(&__tmp212, t215, t216, &ref_tmp0213);
      {
        std__allocator_int____allocator(&ref_tmp0213);
      }
        struct std___List_iterator_int_ r218 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp212);
        __retval208 = r218;
        agg_tmp0214 = __position205; // copy
        struct std___List_const_iterator_int_ t219 = agg_tmp0214;
        std____cxx11__list_int__std__allocator_int_____splice_2(t209, t219, &__tmp212);
        struct std___List_iterator_int_ t220 = __retval208;
        struct std___List_iterator_int_ ret_val221 = t220;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp212);
        }
        return ret_val221;
    }
  struct std___List_iterator_int_ r222 = std___List_const_iterator_int____M_const_cast___const(&__position205);
  __retval208 = r222;
  struct std___List_iterator_int_ t223 = __retval208;
  return t223;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v224, struct std___List_iterator_int_* v225) {
bb226:
  struct std___List_const_iterator_int_* this227;
  struct std___List_iterator_int_* __x228;
  this227 = v224;
  __x228 = v225;
  struct std___List_const_iterator_int_* t229 = this227;
  struct std___List_iterator_int_* t230 = __x228;
  struct std____detail___List_node_base* t231 = t230->_M_node;
  t229->_M_node = t231;
  return;
}

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator___3(struct std___List_const_iterator_int_* v232, struct std___List_const_iterator_int_* v233) {
bb234:
  struct std___List_const_iterator_int_* __x235;
  struct std___List_const_iterator_int_* __y236;
  _Bool __retval237;
  __x235 = v232;
  __y236 = v233;
  struct std___List_const_iterator_int_* t238 = __x235;
  struct std____detail___List_node_base* t239 = t238->_M_node;
  struct std___List_const_iterator_int_* t240 = __y236;
  struct std____detail___List_node_base* t241 = t240->_M_node;
  _Bool c242 = ((t239 == t241)) ? 1 : 0;
  __retval237 = c242;
  _Bool t243 = __retval237;
  return t243;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v244, unsigned long v245) {
bb246:
  struct std____cxx11___List_base_int__std__allocator_int__* this247;
  unsigned long __n248;
  this247 = v244;
  __n248 = v245;
  struct std____cxx11___List_base_int__std__allocator_int__* t249 = this247;
  unsigned long t250 = __n248;
  struct std____detail___List_size* base251 = (struct std____detail___List_size*)((char *)&(t249->_M_impl._M_node) + 16);
  unsigned long t252 = base251->_M_size;
  unsigned long b253 = t252 - t250;
  base251->_M_size = b253;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* v254, struct std___List_iterator_int_ v255) {
bb256:
  struct std____cxx11__list_int__std__allocator_int__* this257;
  struct std___List_iterator_int_ __position258;
  struct std___List_node_int_* __n259;
  this257 = v254;
  __position258 = v255;
  struct std____cxx11__list_int__std__allocator_int__* t260 = this257;
  struct std____cxx11___List_base_int__std__allocator_int__* base261 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t260 + 0);
  unsigned long c262 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base261, c262);
  struct std____detail___List_node_base* t263 = __position258._M_node;
  std____detail___List_node_base___M_unhook(t263);
  struct std____detail___List_node_base* t264 = __position258._M_node;
  struct std___List_node_int_* derived265 = (struct std___List_node_int_*)((char *)t264 - 0);
  __n259 = derived265;
  struct std____cxx11___List_base_int__std__allocator_int__* base266 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t260 + 0);
  struct std___List_node_int_* t267 = __n259;
  struct std___List_node_int_* r268 = std___List_node_int____M_node_ptr(t267);
  std____cxx11___List_base_int__std__allocator_int______M_destroy_node(base266, r268);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiE
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* v269, struct std___List_const_iterator_int_ v270) {
bb271:
  struct std____cxx11__list_int__std__allocator_int__* this272;
  struct std___List_const_iterator_int_ __position273;
  struct std___List_iterator_int_ __retval274;
  struct std___List_iterator_int_ agg_tmp0275;
  this272 = v269;
  __position273 = v270;
  struct std____cxx11__list_int__std__allocator_int__* t276 = this272;
  struct std____detail___List_node_base* t277 = __position273._M_node;
  struct std____detail___List_node_base* t278 = t277->_M_next;
  std___List_iterator_int____List_iterator(&__retval274, t278);
  struct std___List_iterator_int_ r279 = std___List_const_iterator_int____M_const_cast___const(&__position273);
  agg_tmp0275 = r279;
  struct std___List_iterator_int_ t280 = agg_tmp0275;
  std____cxx11__list_int__std__allocator_int______M_erase(t276, t280);
  struct std___List_iterator_int_ t281 = __retval274;
  return t281;
}

// function: _ZNSt20_List_const_iteratorIiEaSEOS0_
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* v282, struct std___List_const_iterator_int_* v283) {
bb284:
  struct std___List_const_iterator_int_* this285;
  struct std___List_const_iterator_int_* unnamed286;
  struct std___List_const_iterator_int_* __retval287;
  this285 = v282;
  unnamed286 = v283;
  struct std___List_const_iterator_int_* t288 = this285;
  struct std___List_const_iterator_int_* t289 = unnamed286;
  struct std____detail___List_node_base* t290 = t289->_M_node;
  t288->_M_node = t290;
  __retval287 = t288;
  struct std___List_const_iterator_int_* t291 = __retval287;
  return t291;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiES4_
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* v292, struct std___List_const_iterator_int_ v293, struct std___List_const_iterator_int_ v294) {
bb295:
  struct std____cxx11__list_int__std__allocator_int__* this296;
  struct std___List_const_iterator_int_ __first297;
  struct std___List_const_iterator_int_ __last298;
  struct std___List_iterator_int_ __retval299;
  this296 = v292;
  __first297 = v293;
  __last298 = v294;
  struct std____cxx11__list_int__std__allocator_int__* t300 = this296;
    struct std___List_const_iterator_int_ ref_tmp0301;
    struct std___List_iterator_int_ ref_tmp1302;
    struct std___List_const_iterator_int_ agg_tmp0303;
    while (1) {
      _Bool r304 = std__operator___3(&__first297, &__last298);
      _Bool u305 = !r304;
      if (!u305) break;
      agg_tmp0303 = __first297; // copy
      struct std___List_const_iterator_int_ t306 = agg_tmp0303;
      struct std___List_iterator_int_ r307 = std____cxx11__list_int__std__allocator_int_____erase(t300, t306);
      ref_tmp1302 = r307;
      std___List_const_iterator_int____List_const_iterator(&ref_tmp0301, &ref_tmp1302);
      struct std___List_const_iterator_int_* r308 = std___List_const_iterator_int___operator_(&__first297, &ref_tmp0301);
    }
  struct std___List_iterator_int_ r309 = std___List_const_iterator_int____M_const_cast___const(&__last298);
  __retval299 = r309;
  struct std___List_iterator_int_ t310 = __retval299;
  return t310;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_fill_assignEmRKi
void std____cxx11__list_int__std__allocator_int______M_fill_assign(struct std____cxx11__list_int__std__allocator_int__* v311, unsigned long v312, int* v313) {
bb314:
  struct std____cxx11__list_int__std__allocator_int__* this315;
  unsigned long __n316;
  int* __val317;
  struct std___List_iterator_int_ __i318;
  this315 = v311;
  __n316 = v312;
  __val317 = v313;
  struct std____cxx11__list_int__std__allocator_int__* t319 = this315;
  struct std___List_iterator_int_ r320 = std____cxx11__list_int__std__allocator_int_____begin(t319);
  __i318 = r320;
    struct std___List_iterator_int_ ref_tmp0321;
    while (1) {
      struct std___List_iterator_int_ r323 = std____cxx11__list_int__std__allocator_int_____end(t319);
      ref_tmp0321 = r323;
      _Bool r324 = std__operator___2(&__i318, &ref_tmp0321);
      _Bool u325 = !r324;
      _Bool ternary326;
      if (u325) {
        unsigned long t327 = __n316;
        unsigned long c328 = 0;
        _Bool c329 = ((t327 > c328)) ? 1 : 0;
        ternary326 = (_Bool)c329;
      } else {
        _Bool c330 = 0;
        ternary326 = (_Bool)c330;
      }
      if (!ternary326) break;
      int* t331 = __val317;
      int t332 = *t331;
      int* r333 = std___List_iterator_int___operator____const(&__i318);
      *r333 = t332;
    for_step322: ;
      struct std___List_iterator_int_* r334 = std___List_iterator_int___operator___2(&__i318);
      unsigned long t335 = __n316;
      unsigned long u336 = t335 - 1;
      __n316 = u336;
    }
    unsigned long t337 = __n316;
    unsigned long c338 = 0;
    _Bool c339 = ((t337 > c338)) ? 1 : 0;
    if (c339) {
      struct std___List_const_iterator_int_ agg_tmp0340;
      struct std___List_iterator_int_ ref_tmp1341;
      struct std___List_iterator_int_ agg_tmp1342;
      struct std___List_iterator_int_ r343 = std____cxx11__list_int__std__allocator_int_____end(t319);
      ref_tmp1341 = r343;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp0340, &ref_tmp1341);
      unsigned long t344 = __n316;
      int* t345 = __val317;
      struct std___List_const_iterator_int_ t346 = agg_tmp0340;
      struct std___List_iterator_int_ r347 = std____cxx11__list_int__std__allocator_int_____insert(t319, t346, t344, t345);
      agg_tmp1342 = r347;
    } else {
      struct std___List_const_iterator_int_ agg_tmp2348;
      struct std___List_const_iterator_int_ agg_tmp3349;
      struct std___List_iterator_int_ ref_tmp2350;
      struct std___List_iterator_int_ agg_tmp4351;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp2348, &__i318);
      struct std___List_iterator_int_ r352 = std____cxx11__list_int__std__allocator_int_____end(t319);
      ref_tmp2350 = r352;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp3349, &ref_tmp2350);
      struct std___List_const_iterator_int_ t353 = agg_tmp2348;
      struct std___List_const_iterator_int_ t354 = agg_tmp3349;
      struct std___List_iterator_int_ r355 = std____cxx11__list_int__std__allocator_int_____erase_2(t319, t353, t354);
      agg_tmp4351 = r355;
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6assignEmRKi
void std____cxx11__list_int__std__allocator_int_____assign(struct std____cxx11__list_int__std__allocator_int__* v356, unsigned long v357, int* v358) {
bb359:
  struct std____cxx11__list_int__std__allocator_int__* this360;
  unsigned long __n361;
  int* __val362;
  this360 = v356;
  __n361 = v357;
  __val362 = v358;
  struct std____cxx11__list_int__std__allocator_int__* t363 = this360;
  unsigned long t364 = __n361;
  int* t365 = __val362;
  std____cxx11__list_int__std__allocator_int______M_fill_assign(t363, t364, t365);
  return;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v366) {
bb367:
  struct std___List_iterator_int_* this368;
  struct std___List_iterator_int_* __retval369;
  this368 = v366;
  struct std___List_iterator_int_* t370 = this368;
  struct std____detail___List_node_base* t371 = t370->_M_node;
  struct std____detail___List_node_base* t372 = t371->_M_prev;
  t370->_M_node = t372;
  __retval369 = t370;
  struct std___List_iterator_int_* t373 = __retval369;
  return t373;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v374) {
bb375:
  struct std____cxx11__list_int__std__allocator_int__* this376;
  int* __retval377;
  struct std___List_iterator_int_ __tmp378;
  this376 = v374;
  struct std____cxx11__list_int__std__allocator_int__* t379 = this376;
    do {
          _Bool r380 = std____cxx11__list_int__std__allocator_int_____empty___const(t379);
          if (r380) {
            char* cast381 = (char*)&(_str_9);
            int c382 = 1674;
            char* cast383 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast384 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast381, c382, cast383, cast384);
          }
      _Bool c385 = 0;
      if (!c385) break;
    } while (1);
  struct std___List_iterator_int_ r386 = std____cxx11__list_int__std__allocator_int_____end(t379);
  __tmp378 = r386;
  struct std___List_iterator_int_* r387 = std___List_iterator_int___operator__(&__tmp378);
  int* r388 = std___List_iterator_int___operator____const(&__tmp378);
  __retval377 = r388;
  int* t389 = __retval377;
  return t389;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v390) {
bb391:
  struct std____cxx11__list_int__std__allocator_int__* this392;
  unsigned long __retval393;
  this392 = v390;
  struct std____cxx11__list_int__std__allocator_int__* t394 = this392;
  struct std____cxx11___List_base_int__std__allocator_int__* base395 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t394 + 0);
  unsigned long r396 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base395);
  __retval393 = r396;
  unsigned long t397 = __retval393;
  return t397;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2ISt14_List_iteratorIiEvEET_S6_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* v398, struct std___List_iterator_int_ v399, struct std___List_iterator_int_ v400, struct std__allocator_int_* v401) {
bb402:
  struct std____cxx11__list_int__std__allocator_int__* this403;
  struct std___List_iterator_int_ __first404;
  struct std___List_iterator_int_ __last405;
  struct std__allocator_int_* __a406;
  struct std__allocator_std___List_node_int__ ref_tmp0407;
  struct std___List_iterator_int_ agg_tmp0408;
  struct std___List_iterator_int_ agg_tmp1409;
  struct std____false_type agg_tmp2410;
  this403 = v398;
  __first404 = v399;
  __last405 = v400;
  __a406 = v401;
  struct std____cxx11__list_int__std__allocator_int__* t411 = this403;
  struct std____cxx11___List_base_int__std__allocator_int__* base412 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t411 + 0);
  struct std__allocator_int_* t413 = __a406;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0407, t413);
    std____cxx11___List_base_int__std__allocator_int______List_base(base412, &ref_tmp0407);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0407);
  }
    agg_tmp0408 = __first404; // copy
    agg_tmp1409 = __last405; // copy
    struct std___List_iterator_int_ t414 = agg_tmp0408;
    struct std___List_iterator_int_ t415 = agg_tmp1409;
    struct std____false_type t416 = agg_tmp2410;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_iterator_int___(t411, t414, t415, t416);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertISt14_List_iteratorIiEvEES5_St20_List_const_iteratorIiET_S8_
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* v417, struct std___List_const_iterator_int_ v418, struct std___List_iterator_int_ v419, struct std___List_iterator_int_ v420) {
bb421:
  struct std____cxx11__list_int__std__allocator_int__* this422;
  struct std___List_const_iterator_int_ __position423;
  struct std___List_iterator_int_ __first424;
  struct std___List_iterator_int_ __last425;
  struct std___List_iterator_int_ __retval426;
  struct std____cxx11__list_int__std__allocator_int__ __tmp427;
  struct std___List_iterator_int_ agg_tmp0428;
  struct std___List_iterator_int_ agg_tmp1429;
  struct std__allocator_int_ ref_tmp0430;
  this422 = v417;
  __position423 = v418;
  __first424 = v419;
  __last425 = v420;
  struct std____cxx11__list_int__std__allocator_int__* t431 = this422;
  agg_tmp0428 = __first424; // copy
  agg_tmp1429 = __last425; // copy
  struct std__allocator_int_ r432 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t431);
  ref_tmp0430 = r432;
    struct std___List_iterator_int_ t433 = agg_tmp0428;
    struct std___List_iterator_int_ t434 = agg_tmp1429;
    std____cxx11__list_int__std__allocator_int_____list_std___List_iterator_int___void_(&__tmp427, t433, t434, &ref_tmp0430);
  {
    std__allocator_int____allocator(&ref_tmp0430);
  }
      _Bool r435 = std____cxx11__list_int__std__allocator_int_____empty___const(&__tmp427);
      _Bool u436 = !r435;
      if (u436) {
        struct std___List_const_iterator_int_ agg_tmp2437;
        struct std___List_iterator_int_ r438 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp427);
        __retval426 = r438;
        agg_tmp2437 = __position423; // copy
        struct std___List_const_iterator_int_ t439 = agg_tmp2437;
        std____cxx11__list_int__std__allocator_int_____splice_2(t431, t439, &__tmp427);
        struct std___List_iterator_int_ t440 = __retval426;
        struct std___List_iterator_int_ ret_val441 = t440;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp427);
        }
        return ret_val441;
      }
    struct std___List_iterator_int_ r442 = std___List_const_iterator_int____M_const_cast___const(&__position423);
    __retval426 = r442;
    struct std___List_iterator_int_ t443 = __retval426;
    struct std___List_iterator_int_ ret_val444 = t443;
    return ret_val444;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_assign_dispatchISt14_List_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_std___List_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v445, struct std___List_iterator_int_ v446, struct std___List_iterator_int_ v447, struct std____false_type v448) {
bb449:
  struct std____cxx11__list_int__std__allocator_int__* this450;
  struct std___List_iterator_int_ __first2451;
  struct std___List_iterator_int_ __last2452;
  struct std____false_type unnamed453;
  struct std___List_iterator_int_ __first1454;
  struct std___List_iterator_int_ __last1455;
  this450 = v445;
  __first2451 = v446;
  __last2452 = v447;
  unnamed453 = v448;
  struct std____cxx11__list_int__std__allocator_int__* t456 = this450;
  struct std___List_iterator_int_ r457 = std____cxx11__list_int__std__allocator_int_____begin(t456);
  __first1454 = r457;
  struct std___List_iterator_int_ r458 = std____cxx11__list_int__std__allocator_int_____end(t456);
  __last1455 = r458;
    while (1) {
      _Bool r460 = std__operator___2(&__first1454, &__last1455);
      _Bool u461 = !r460;
      _Bool ternary462;
      if (u461) {
        _Bool r463 = std__operator___2(&__first2451, &__last2452);
        _Bool u464 = !r463;
        ternary462 = (_Bool)u464;
      } else {
        _Bool c465 = 0;
        ternary462 = (_Bool)c465;
      }
      if (!ternary462) break;
      int* r466 = std___List_iterator_int___operator____const(&__first2451);
      int t467 = *r466;
      int* r468 = std___List_iterator_int___operator____const(&__first1454);
      *r468 = t467;
    for_step459: ;
      struct std___List_iterator_int_* r469 = std___List_iterator_int___operator___2(&__first1454);
      struct std___List_iterator_int_* r470 = std___List_iterator_int___operator___2(&__first2451);
    }
    _Bool r471 = std__operator___2(&__first2451, &__last2452);
    if (r471) {
      struct std___List_const_iterator_int_ agg_tmp0472;
      struct std___List_const_iterator_int_ agg_tmp1473;
      struct std___List_iterator_int_ agg_tmp2474;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp0472, &__first1454);
      std___List_const_iterator_int____List_const_iterator(&agg_tmp1473, &__last1455);
      struct std___List_const_iterator_int_ t475 = agg_tmp0472;
      struct std___List_const_iterator_int_ t476 = agg_tmp1473;
      struct std___List_iterator_int_ r477 = std____cxx11__list_int__std__allocator_int_____erase_2(t456, t475, t476);
      agg_tmp2474 = r477;
    } else {
      struct std___List_const_iterator_int_ agg_tmp3478;
      struct std___List_iterator_int_ agg_tmp4479;
      struct std___List_iterator_int_ agg_tmp5480;
      struct std___List_iterator_int_ agg_tmp6481;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp3478, &__last1455);
      agg_tmp4479 = __first2451; // copy
      agg_tmp5480 = __last2452; // copy
      struct std___List_const_iterator_int_ t482 = agg_tmp3478;
      struct std___List_iterator_int_ t483 = agg_tmp4479;
      struct std___List_iterator_int_ t484 = agg_tmp5480;
      struct std___List_iterator_int_ r485 = std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_std___List_iterator_int___void_(t456, t482, t483, t484);
      agg_tmp6481 = r485;
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6assignISt14_List_iteratorIiEvEEvT_S6_
void void_std____cxx11__list_int__std__allocator_int_____assign_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* v486, struct std___List_iterator_int_ v487, struct std___List_iterator_int_ v488) {
bb489:
  struct std____cxx11__list_int__std__allocator_int__* this490;
  struct std___List_iterator_int_ __first491;
  struct std___List_iterator_int_ __last492;
  struct std___List_iterator_int_ agg_tmp0493;
  struct std___List_iterator_int_ agg_tmp1494;
  struct std____false_type agg_tmp2495;
  this490 = v486;
  __first491 = v487;
  __last492 = v488;
  struct std____cxx11__list_int__std__allocator_int__* t496 = this490;
  agg_tmp0493 = __first491; // copy
  agg_tmp1494 = __last492; // copy
  struct std___List_iterator_int_ t497 = agg_tmp0493;
  struct std___List_iterator_int_ t498 = agg_tmp1494;
  struct std____false_type t499 = agg_tmp2495;
  void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_std___List_iterator_int___(t496, t497, t498, t499);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v500) {
bb501:
  struct std____cxx11__list_int__std__allocator_int__* this502;
  struct std___List_iterator_int_ __retval503;
  this502 = v500;
  struct std____cxx11__list_int__std__allocator_int__* t504 = this502;
  struct std____cxx11___List_base_int__std__allocator_int__* base505 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t504 + 0);
  struct std____detail___List_node_base* base506 = (struct std____detail___List_node_base*)((char *)&(base505->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t507 = base506->_M_next;
  std___List_iterator_int____List_iterator(&__retval503, t507);
  struct std___List_iterator_int_ t508 = __retval503;
  return t508;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v509) {
bb510:
  struct std____cxx11__list_int__std__allocator_int__* this511;
  struct std___List_iterator_int_ __retval512;
  this511 = v509;
  struct std____cxx11__list_int__std__allocator_int__* t513 = this511;
  struct std____cxx11___List_base_int__std__allocator_int__* base514 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t513 + 0);
  struct std____detail___List_node_base* r515 = std____detail___List_node_header___M_base(&base514->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval512, r515);
  struct std___List_iterator_int_ t516 = __retval512;
  return t516;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2IPivEET_S5_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* v517, int* v518, int* v519, struct std__allocator_int_* v520) {
bb521:
  struct std____cxx11__list_int__std__allocator_int__* this522;
  int* __first523;
  int* __last524;
  struct std__allocator_int_* __a525;
  struct std__allocator_std___List_node_int__ ref_tmp0526;
  struct std____false_type agg_tmp0527;
  this522 = v517;
  __first523 = v518;
  __last524 = v519;
  __a525 = v520;
  struct std____cxx11__list_int__std__allocator_int__* t528 = this522;
  struct std____cxx11___List_base_int__std__allocator_int__* base529 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t528 + 0);
  struct std__allocator_int_* t530 = __a525;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0526, t530);
    std____cxx11___List_base_int__std__allocator_int______List_base(base529, &ref_tmp0526);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0526);
  }
    int* t531 = __first523;
    int* t532 = __last524;
    struct std____false_type t533 = agg_tmp0527;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(t528, t531, t532, t533);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertIPivEESt14_List_iteratorIiESt20_List_const_iteratorIiET_S9_
struct std___List_iterator_int_ std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_int___void_(struct std____cxx11__list_int__std__allocator_int__* v534, struct std___List_const_iterator_int_ v535, int* v536, int* v537) {
bb538:
  struct std____cxx11__list_int__std__allocator_int__* this539;
  struct std___List_const_iterator_int_ __position540;
  int* __first541;
  int* __last542;
  struct std___List_iterator_int_ __retval543;
  struct std____cxx11__list_int__std__allocator_int__ __tmp544;
  struct std__allocator_int_ ref_tmp0545;
  this539 = v534;
  __position540 = v535;
  __first541 = v536;
  __last542 = v537;
  struct std____cxx11__list_int__std__allocator_int__* t546 = this539;
  int* t547 = __first541;
  int* t548 = __last542;
  struct std__allocator_int_ r549 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t546);
  ref_tmp0545 = r549;
    std____cxx11__list_int__std__allocator_int_____list_int___void_(&__tmp544, t547, t548, &ref_tmp0545);
  {
    std__allocator_int____allocator(&ref_tmp0545);
  }
      _Bool r550 = std____cxx11__list_int__std__allocator_int_____empty___const(&__tmp544);
      _Bool u551 = !r550;
      if (u551) {
        struct std___List_const_iterator_int_ agg_tmp0552;
        struct std___List_iterator_int_ r553 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp544);
        __retval543 = r553;
        agg_tmp0552 = __position540; // copy
        struct std___List_const_iterator_int_ t554 = agg_tmp0552;
        std____cxx11__list_int__std__allocator_int_____splice_2(t546, t554, &__tmp544);
        struct std___List_iterator_int_ t555 = __retval543;
        struct std___List_iterator_int_ ret_val556 = t555;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp544);
        }
        return ret_val556;
      }
    struct std___List_iterator_int_ r557 = std___List_const_iterator_int____M_const_cast___const(&__position540);
    __retval543 = r557;
    struct std___List_iterator_int_ t558 = __retval543;
    struct std___List_iterator_int_ ret_val559 = t558;
    return ret_val559;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_assign_dispatchIPiEEvT_S5_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* v560, int* v561, int* v562, struct std____false_type v563) {
bb564:
  struct std____cxx11__list_int__std__allocator_int__* this565;
  int* __first2566;
  int* __last2567;
  struct std____false_type unnamed568;
  struct std___List_iterator_int_ __first1569;
  struct std___List_iterator_int_ __last1570;
  this565 = v560;
  __first2566 = v561;
  __last2567 = v562;
  unnamed568 = v563;
  struct std____cxx11__list_int__std__allocator_int__* t571 = this565;
  struct std___List_iterator_int_ r572 = std____cxx11__list_int__std__allocator_int_____begin(t571);
  __first1569 = r572;
  struct std___List_iterator_int_ r573 = std____cxx11__list_int__std__allocator_int_____end(t571);
  __last1570 = r573;
    while (1) {
      _Bool r575 = std__operator___2(&__first1569, &__last1570);
      _Bool u576 = !r575;
      _Bool ternary577;
      if (u576) {
        int* t578 = __first2566;
        int* t579 = __last2567;
        _Bool c580 = ((t578 != t579)) ? 1 : 0;
        ternary577 = (_Bool)c580;
      } else {
        _Bool c581 = 0;
        ternary577 = (_Bool)c581;
      }
      if (!ternary577) break;
      int* t582 = __first2566;
      int t583 = *t582;
      int* r584 = std___List_iterator_int___operator____const(&__first1569);
      *r584 = t583;
    for_step574: ;
      struct std___List_iterator_int_* r585 = std___List_iterator_int___operator___2(&__first1569);
      int* t586 = __first2566;
      int c587 = 1;
      int* ptr588 = &(t586)[c587];
      __first2566 = ptr588;
    }
    int* t589 = __first2566;
    int* t590 = __last2567;
    _Bool c591 = ((t589 == t590)) ? 1 : 0;
    if (c591) {
      struct std___List_const_iterator_int_ agg_tmp0592;
      struct std___List_const_iterator_int_ agg_tmp1593;
      struct std___List_iterator_int_ agg_tmp2594;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp0592, &__first1569);
      std___List_const_iterator_int____List_const_iterator(&agg_tmp1593, &__last1570);
      struct std___List_const_iterator_int_ t595 = agg_tmp0592;
      struct std___List_const_iterator_int_ t596 = agg_tmp1593;
      struct std___List_iterator_int_ r597 = std____cxx11__list_int__std__allocator_int_____erase_2(t571, t595, t596);
      agg_tmp2594 = r597;
    } else {
      struct std___List_const_iterator_int_ agg_tmp3598;
      struct std___List_iterator_int_ agg_tmp4599;
      std___List_const_iterator_int____List_const_iterator(&agg_tmp3598, &__last1570);
      int* t600 = __first2566;
      int* t601 = __last2567;
      struct std___List_const_iterator_int_ t602 = agg_tmp3598;
      struct std___List_iterator_int_ r603 = std___List_iterator_int__std____cxx11__list_int__std__allocator_int_____insert_int___void_(t571, t602, t600, t601);
      agg_tmp4599 = r603;
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6assignIPivEEvT_S5_
void void_std____cxx11__list_int__std__allocator_int_____assign_int___void_(struct std____cxx11__list_int__std__allocator_int__* v604, int* v605, int* v606) {
bb607:
  struct std____cxx11__list_int__std__allocator_int__* this608;
  int* __first609;
  int* __last610;
  struct std____false_type agg_tmp0611;
  this608 = v604;
  __first609 = v605;
  __last610 = v606;
  struct std____cxx11__list_int__std__allocator_int__* t612 = this608;
  int* t613 = __first609;
  int* t614 = __last610;
  struct std____false_type t615 = agg_tmp0611;
  void_std____cxx11__list_int__std__allocator_int______M_assign_dispatch_int__(t612, t613, t614, t615);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v616, int v617) {
bb618:
  int __a619;
  int __b620;
  int __retval621;
  __a619 = v616;
  __b620 = v617;
  int t622 = __a619;
  int t623 = __b620;
  int b624 = t622 | t623;
  __retval621 = b624;
  int t625 = __retval621;
  return t625;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v626) {
bb627:
  struct std__basic_ios_char__std__char_traits_char__* this628;
  int __retval629;
  this628 = v626;
  struct std__basic_ios_char__std__char_traits_char__* t630 = this628;
  struct std__ios_base* base631 = (struct std__ios_base*)((char *)t630 + 0);
  int t632 = base631->_M_streambuf_state;
  __retval629 = t632;
  int t633 = __retval629;
  return t633;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v634, int v635) {
bb636:
  struct std__basic_ios_char__std__char_traits_char__* this637;
  int __state638;
  this637 = v634;
  __state638 = v635;
  struct std__basic_ios_char__std__char_traits_char__* t639 = this637;
  int r640 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t639);
  int t641 = __state638;
  int r642 = std__operator_(r640, t641);
  std__basic_ios_char__std__char_traits_char_____clear(t639, r642);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v643, char* v644) {
bb645:
  char* __c1646;
  char* __c2647;
  _Bool __retval648;
  __c1646 = v643;
  __c2647 = v644;
  char* t649 = __c1646;
  char t650 = *t649;
  int cast651 = (int)t650;
  char* t652 = __c2647;
  char t653 = *t652;
  int cast654 = (int)t653;
  _Bool c655 = ((cast651 == cast654)) ? 1 : 0;
  __retval648 = c655;
  _Bool t656 = __retval648;
  return t656;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v657) {
bb658:
  char* __p659;
  unsigned long __retval660;
  unsigned long __i661;
  __p659 = v657;
  unsigned long c662 = 0;
  __i661 = c662;
    char ref_tmp0663;
    while (1) {
      unsigned long t664 = __i661;
      char* t665 = __p659;
      char* ptr666 = &(t665)[t664];
      char c667 = 0;
      ref_tmp0663 = c667;
      _Bool r668 = __gnu_cxx__char_traits_char___eq(ptr666, &ref_tmp0663);
      _Bool u669 = !r668;
      if (!u669) break;
      unsigned long t670 = __i661;
      unsigned long u671 = t670 + 1;
      __i661 = u671;
    }
  unsigned long t672 = __i661;
  __retval660 = t672;
  unsigned long t673 = __retval660;
  return t673;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v674) {
bb675:
  char* __s676;
  unsigned long __retval677;
  __s676 = v674;
    _Bool r678 = std____is_constant_evaluated();
    if (r678) {
      char* t679 = __s676;
      unsigned long r680 = __gnu_cxx__char_traits_char___length(t679);
      __retval677 = r680;
      unsigned long t681 = __retval677;
      return t681;
    }
  char* t682 = __s676;
  unsigned long r683 = strlen(t682);
  __retval677 = r683;
  unsigned long t684 = __retval677;
  return t684;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v685, char* v686) {
bb687:
  struct std__basic_ostream_char__std__char_traits_char__* __out688;
  char* __s689;
  struct std__basic_ostream_char__std__char_traits_char__* __retval690;
  __out688 = v685;
  __s689 = v686;
    char* t691 = __s689;
    _Bool cast692 = (_Bool)t691;
    _Bool u693 = !cast692;
    if (u693) {
      struct std__basic_ostream_char__std__char_traits_char__* t694 = __out688;
      void** v695 = (void**)t694;
      void* v696 = *((void**)v695);
      unsigned char* cast697 = (unsigned char*)v696;
      long c698 = -24;
      unsigned char* ptr699 = &(cast697)[c698];
      long* cast700 = (long*)ptr699;
      long t701 = *cast700;
      unsigned char* cast702 = (unsigned char*)t694;
      unsigned char* ptr703 = &(cast702)[t701];
      struct std__basic_ostream_char__std__char_traits_char__* cast704 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr703;
      struct std__basic_ios_char__std__char_traits_char__* cast705 = (struct std__basic_ios_char__std__char_traits_char__*)cast704;
      int t706 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast705, t706);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t707 = __out688;
      char* t708 = __s689;
      char* t709 = __s689;
      unsigned long r710 = std__char_traits_char___length(t709);
      long cast711 = (long)r710;
      struct std__basic_ostream_char__std__char_traits_char__* r712 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t707, t708, cast711);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t713 = __out688;
  __retval690 = t713;
  struct std__basic_ostream_char__std__char_traits_char__* t714 = __retval690;
  return t714;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v715, void* v716) {
bb717:
  struct std__basic_ostream_char__std__char_traits_char__* this718;
  void* __pf719;
  struct std__basic_ostream_char__std__char_traits_char__* __retval720;
  this718 = v715;
  __pf719 = v716;
  struct std__basic_ostream_char__std__char_traits_char__* t721 = this718;
  void* t722 = __pf719;
  struct std__basic_ostream_char__std__char_traits_char__* r723 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t722)(t721);
  __retval720 = r723;
  struct std__basic_ostream_char__std__char_traits_char__* t724 = __retval720;
  return t724;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v725) {
bb726:
  struct std__basic_ostream_char__std__char_traits_char__* __os727;
  struct std__basic_ostream_char__std__char_traits_char__* __retval728;
  __os727 = v725;
  struct std__basic_ostream_char__std__char_traits_char__* t729 = __os727;
  struct std__basic_ostream_char__std__char_traits_char__* r730 = std__ostream__flush(t729);
  __retval728 = r730;
  struct std__basic_ostream_char__std__char_traits_char__* t731 = __retval728;
  return t731;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v732) {
bb733:
  struct std__ctype_char_* __f734;
  struct std__ctype_char_* __retval735;
  __f734 = v732;
    struct std__ctype_char_* t736 = __f734;
    _Bool cast737 = (_Bool)t736;
    _Bool u738 = !cast737;
    if (u738) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t739 = __f734;
  __retval735 = t739;
  struct std__ctype_char_* t740 = __retval735;
  return t740;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v741, char v742) {
bb743:
  struct std__ctype_char_* this744;
  char __c745;
  char __retval746;
  this744 = v741;
  __c745 = v742;
  struct std__ctype_char_* t747 = this744;
    char t748 = t747->_M_widen_ok;
    _Bool cast749 = (_Bool)t748;
    if (cast749) {
      char t750 = __c745;
      unsigned char cast751 = (unsigned char)t750;
      unsigned long cast752 = (unsigned long)cast751;
      char t753 = t747->_M_widen[cast752];
      __retval746 = t753;
      char t754 = __retval746;
      return t754;
    }
  std__ctype_char____M_widen_init___const(t747);
  char t755 = __c745;
  void** v756 = (void**)t747;
  void* v757 = *((void**)v756);
  char vcall760 = (char)__VERIFIER_virtual_call_char_char(t747, 6, t755);
  __retval746 = vcall760;
  char t761 = __retval746;
  return t761;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v762, char v763) {
bb764:
  struct std__basic_ios_char__std__char_traits_char__* this765;
  char __c766;
  char __retval767;
  this765 = v762;
  __c766 = v763;
  struct std__basic_ios_char__std__char_traits_char__* t768 = this765;
  struct std__ctype_char_* t769 = t768->_M_ctype;
  struct std__ctype_char_* r770 = std__ctype_char__const__std____check_facet_std__ctype_char___(t769);
  char t771 = __c766;
  char r772 = std__ctype_char___widen_char__const(r770, t771);
  __retval767 = r772;
  char t773 = __retval767;
  return t773;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v774) {
bb775:
  struct std__basic_ostream_char__std__char_traits_char__* __os776;
  struct std__basic_ostream_char__std__char_traits_char__* __retval777;
  __os776 = v774;
  struct std__basic_ostream_char__std__char_traits_char__* t778 = __os776;
  struct std__basic_ostream_char__std__char_traits_char__* t779 = __os776;
  void** v780 = (void**)t779;
  void* v781 = *((void**)v780);
  unsigned char* cast782 = (unsigned char*)v781;
  long c783 = -24;
  unsigned char* ptr784 = &(cast782)[c783];
  long* cast785 = (long*)ptr784;
  long t786 = *cast785;
  unsigned char* cast787 = (unsigned char*)t779;
  unsigned char* ptr788 = &(cast787)[t786];
  struct std__basic_ostream_char__std__char_traits_char__* cast789 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr788;
  struct std__basic_ios_char__std__char_traits_char__* cast790 = (struct std__basic_ios_char__std__char_traits_char__*)cast789;
  char c791 = 10;
  char r792 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast790, c791);
  struct std__basic_ostream_char__std__char_traits_char__* r793 = std__ostream__put(t778, r792);
  struct std__basic_ostream_char__std__char_traits_char__* r794 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r793);
  __retval777 = r794;
  struct std__basic_ostream_char__std__char_traits_char__* t795 = __retval777;
  return t795;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v796) {
bb797:
  struct std____cxx11__list_int__std__allocator_int__* this798;
  this798 = v796;
  struct std____cxx11__list_int__std__allocator_int__* t799 = this798;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base800 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t799 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base800);
  }
  return;
}

// function: main
int main() {
bb801:
  int __retval802;
  struct std____cxx11__list_int__std__allocator_int__ first803;
  struct std____cxx11__list_int__std__allocator_int__ second804;
  int ref_tmp0805;
  struct std___List_iterator_int_ agg_tmp0806;
  struct std___List_iterator_int_ agg_tmp1807;
  int myints808[3];
  int c809 = 0;
  __retval802 = c809;
  std____cxx11__list_int__std__allocator_int_____list_2(&first803);
    std____cxx11__list_int__std__allocator_int_____list_2(&second804);
      unsigned long c810 = 7;
      int c811 = 100;
      ref_tmp0805 = c811;
      std____cxx11__list_int__std__allocator_int_____assign(&first803, c810, &ref_tmp0805);
      int* r812 = std____cxx11__list_int__std__allocator_int_____back(&first803);
      int t813 = *r812;
      int c814 = 100;
      _Bool c815 = ((t813 == c814)) ? 1 : 0;
      if (c815) {
      } else {
        char* cast816 = (char*)&(_str);
        char* c817 = _str_1;
        unsigned int c818 = 20;
        char* cast819 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast816, c817, c818, cast819);
      }
      unsigned long r820 = std____cxx11__list_int__std__allocator_int_____size___const(&first803);
      unsigned long c821 = 7;
      _Bool c822 = ((r820 == c821)) ? 1 : 0;
      if (c822) {
      } else {
        char* cast823 = (char*)&(_str_2);
        char* c824 = _str_1;
        unsigned int c825 = 21;
        char* cast826 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast823, c824, c825, cast826);
      }
      struct std___List_iterator_int_ r827 = std____cxx11__list_int__std__allocator_int_____begin(&first803);
      agg_tmp0806 = r827;
      struct std___List_iterator_int_ r828 = std____cxx11__list_int__std__allocator_int_____end(&first803);
      agg_tmp1807 = r828;
      struct std___List_iterator_int_ t829 = agg_tmp0806;
      struct std___List_iterator_int_ t830 = agg_tmp1807;
      void_std____cxx11__list_int__std__allocator_int_____assign_std___List_iterator_int___void_(&second804, t829, t830);
      int* r831 = std____cxx11__list_int__std__allocator_int_____back(&second804);
      int t832 = *r831;
      int c833 = 100;
      _Bool c834 = ((t832 == c833)) ? 1 : 0;
      if (c834) {
      } else {
        char* cast835 = (char*)&(_str_3);
        char* c836 = _str_1;
        unsigned int c837 = 24;
        char* cast838 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast835, c836, c837, cast838);
      }
      unsigned long r839 = std____cxx11__list_int__std__allocator_int_____size___const(&second804);
      unsigned long c840 = 7;
      _Bool c841 = ((r839 == c840)) ? 1 : 0;
      if (c841) {
      } else {
        char* cast842 = (char*)&(_str_4);
        char* c843 = _str_1;
        unsigned int c844 = 25;
        char* cast845 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast842, c843, c844, cast845);
      }
      // array copy
      __builtin_memcpy(myints808, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
      int* cast846 = (int*)&(myints808);
      int* cast847 = (int*)&(myints808);
      int c848 = 3;
      int* ptr849 = &(cast847)[c848];
      void_std____cxx11__list_int__std__allocator_int_____assign_int___void_(&first803, cast846, ptr849);
      int* r850 = std____cxx11__list_int__std__allocator_int_____back(&first803);
      int t851 = *r850;
      int c852 = 4;
      _Bool c853 = ((t851 == c852)) ? 1 : 0;
      if (c853) {
      } else {
        char* cast854 = (char*)&(_str_5);
        char* c855 = _str_1;
        unsigned int c856 = 30;
        char* cast857 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast854, c855, c856, cast857);
      }
      unsigned long r858 = std____cxx11__list_int__std__allocator_int_____size___const(&first803);
      unsigned long c859 = 3;
      _Bool c860 = ((r858 == c859)) ? 1 : 0;
      if (c860) {
      } else {
        char* cast861 = (char*)&(_str_6);
        char* c862 = _str_1;
        unsigned int c863 = 31;
        char* cast864 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast861, c862, c863, cast864);
      }
      char* cast865 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r866 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast865);
      unsigned long r867 = std____cxx11__list_int__std__allocator_int_____size___const(&first803);
      int cast868 = (int)r867;
      struct std__basic_ostream_char__std__char_traits_char__* r869 = std__ostream__operator__(r866, cast868);
      struct std__basic_ostream_char__std__char_traits_char__* r870 = std__ostream__operator___std__ostream_____(r869, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast871 = (char*)&(_str_8);
      struct std__basic_ostream_char__std__char_traits_char__* r872 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast871);
      unsigned long r873 = std____cxx11__list_int__std__allocator_int_____size___const(&second804);
      int cast874 = (int)r873;
      struct std__basic_ostream_char__std__char_traits_char__* r875 = std__ostream__operator__(r872, cast874);
      struct std__basic_ostream_char__std__char_traits_char__* r876 = std__ostream__operator___std__ostream_____(r875, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c877 = 0;
      __retval802 = c877;
      int t878 = __retval802;
      int ret_val879 = t878;
      {
        std____cxx11__list_int__std__allocator_int______list(&second804);
      }
      {
        std____cxx11__list_int__std__allocator_int______list(&first803);
      }
      return ret_val879;
  int t880 = __retval802;
  return t880;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v881) {
bb882:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this883;
  this883 = v881;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t884 = this883;
  struct std__allocator_std___List_node_int__* base885 = (struct std__allocator_std___List_node_int__*)((char *)t884 + 0);
  std__allocator_std___List_node_int_____allocator_2(base885);
    std____detail___List_node_header___List_node_header(&t884->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v886) {
bb887:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this888;
  this888 = v886;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t889 = this888;
  {
    struct std__allocator_std___List_node_int__* base890 = (struct std__allocator_std___List_node_int__*)((char *)t889 + 0);
    std__allocator_std___List_node_int______allocator(base890);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base_2(struct std____cxx11___List_base_int__std__allocator_int__* v891) {
bb892:
  struct std____cxx11___List_base_int__std__allocator_int__* this893;
  this893 = v891;
  struct std____cxx11___List_base_int__std__allocator_int__* t894 = this893;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(&t894->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v895) {
bb896:
  struct std____detail___List_node_header* this897;
  struct std____detail___List_node_base* __retval898;
  this897 = v895;
  struct std____detail___List_node_header* t899 = this897;
  struct std____detail___List_node_base* base900 = (struct std____detail___List_node_base*)((char *)t899 + 0);
  __retval898 = base900;
  struct std____detail___List_node_base* t901 = __retval898;
  return t901;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v902) {
bb903:
  int* __location904;
  __location904 = v902;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v905, int* v906) {
bb907:
  struct std__allocator_std___List_node_int__* __a908;
  int* __p909;
  __a908 = v905;
  __p909 = v906;
  int* t910 = __p909;
  void_std__destroy_at_int_(t910);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v911) {
bb912:
  struct __gnu_cxx____aligned_membuf_int_* this913;
  void* __retval914;
  this913 = v911;
  struct __gnu_cxx____aligned_membuf_int_* t915 = this913;
  void* cast916 = (void*)&(t915->_M_storage);
  __retval914 = cast916;
  void* t917 = __retval914;
  return t917;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v918) {
bb919:
  struct __gnu_cxx____aligned_membuf_int_* this920;
  int* __retval921;
  this920 = v918;
  struct __gnu_cxx____aligned_membuf_int_* t922 = this920;
  void* r923 = __gnu_cxx____aligned_membuf_int____M_addr(t922);
  int* cast924 = (int*)r923;
  __retval921 = cast924;
  int* t925 = __retval921;
  return t925;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v926) {
bb927:
  struct std___List_node_int_* this928;
  int* __retval929;
  this928 = v926;
  struct std___List_node_int_* t930 = this928;
  int* r931 = __gnu_cxx____aligned_membuf_int____M_ptr(&t930->_M_storage);
  __retval929 = r931;
  int* t932 = __retval929;
  return t932;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb933:
  _Bool __retval934;
    _Bool c935 = 0;
    __retval934 = c935;
    _Bool t936 = __retval934;
    return t936;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v937, struct std___List_node_int_* v938, unsigned long v939) {
bb940:
  struct std____new_allocator_std___List_node_int__* this941;
  struct std___List_node_int_* __p942;
  unsigned long __n943;
  this941 = v937;
  __p942 = v938;
  __n943 = v939;
  struct std____new_allocator_std___List_node_int__* t944 = this941;
    unsigned long c945 = 8;
    unsigned long c946 = 16;
    _Bool c947 = ((c945 > c946)) ? 1 : 0;
    if (c947) {
      struct std___List_node_int_* t948 = __p942;
      void* cast949 = (void*)t948;
      unsigned long t950 = __n943;
      unsigned long c951 = 24;
      unsigned long b952 = t950 * c951;
      unsigned long c953 = 8;
      operator_delete_3(cast949, b952, c953);
      return;
    }
  struct std___List_node_int_* t954 = __p942;
  void* cast955 = (void*)t954;
  unsigned long t956 = __n943;
  unsigned long c957 = 24;
  unsigned long b958 = t956 * c957;
  operator_delete_2(cast955, b958);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v959, struct std___List_node_int_* v960, unsigned long v961) {
bb962:
  struct std__allocator_std___List_node_int__* this963;
  struct std___List_node_int_* __p964;
  unsigned long __n965;
  this963 = v959;
  __p964 = v960;
  __n965 = v961;
  struct std__allocator_std___List_node_int__* t966 = this963;
    _Bool r967 = std____is_constant_evaluated();
    if (r967) {
      struct std___List_node_int_* t968 = __p964;
      void* cast969 = (void*)t968;
      operator_delete(cast969);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base970 = (struct std____new_allocator_std___List_node_int__*)((char *)t966 + 0);
  struct std___List_node_int_* t971 = __p964;
  unsigned long t972 = __n965;
  std____new_allocator_std___List_node_int_____deallocate(base970, t971, t972);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v973, struct std___List_node_int_* v974, unsigned long v975) {
bb976:
  struct std__allocator_std___List_node_int__* __a977;
  struct std___List_node_int_* __p978;
  unsigned long __n979;
  __a977 = v973;
  __p978 = v974;
  __n979 = v975;
  struct std__allocator_std___List_node_int__* t980 = __a977;
  struct std___List_node_int_* t981 = __p978;
  unsigned long t982 = __n979;
  std__allocator_std___List_node_int_____deallocate(t980, t981, t982);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v983, struct std___List_node_int_* v984) {
bb985:
  struct std____cxx11___List_base_int__std__allocator_int__* this986;
  struct std___List_node_int_* __p987;
  this986 = v983;
  __p987 = v984;
  struct std____cxx11___List_base_int__std__allocator_int__* t988 = this986;
  struct std__allocator_std___List_node_int__* base989 = (struct std__allocator_std___List_node_int__*)((char *)&(t988->_M_impl) + 0);
  struct std___List_node_int_* t990 = __p987;
  unsigned long c991 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base989, t990, c991);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v992, struct std___List_node_int_* v993) {
bb994:
  struct std____cxx11___List_base_int__std__allocator_int__* this995;
  struct std___List_node_int_* __p996;
  this995 = v992;
  __p996 = v993;
  struct std____cxx11___List_base_int__std__allocator_int__* t997 = this995;
  struct std__allocator_std___List_node_int__* base998 = (struct std__allocator_std___List_node_int__*)((char *)&(t997->_M_impl) + 0);
  struct std___List_node_int_* t999 = __p996;
  int* r1000 = std___List_node_int____M_valptr(t999);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base998, r1000);
  struct std___List_node_int_* t1001 = __p996;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t997, t1001);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v1002) {
bb1003:
  struct std___List_node_int_* this1004;
  struct std___List_node_int_* __retval1005;
  this1004 = v1002;
  struct std___List_node_int_* t1006 = this1004;
  __retval1005 = t1006;
  struct std___List_node_int_* t1007 = __retval1005;
  return t1007;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v1008) {
bb1009:
  struct std____cxx11___List_base_int__std__allocator_int__* this1010;
  struct std____detail___List_node_base* __cur1011;
  this1010 = v1008;
  struct std____cxx11___List_base_int__std__allocator_int__* t1012 = this1010;
  struct std____detail___List_node_base* base1013 = (struct std____detail___List_node_base*)((char *)&(t1012->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1014 = base1013->_M_next;
  __cur1011 = t1014;
    while (1) {
      struct std____detail___List_node_base* t1015 = __cur1011;
      struct std____detail___List_node_base* r1016 = std____detail___List_node_header___M_base(&t1012->_M_impl._M_node);
      _Bool c1017 = ((t1015 != r1016)) ? 1 : 0;
      if (!c1017) break;
        struct std___List_node_int_* __tmp1018;
        struct std____detail___List_node_base* t1019 = __cur1011;
        struct std___List_node_int_* derived1020 = (struct std___List_node_int_*)((char *)t1019 - 0);
        __tmp1018 = derived1020;
        struct std___List_node_int_* t1021 = __tmp1018;
        struct std____detail___List_node_base* base1022 = (struct std____detail___List_node_base*)((char *)t1021 + 0);
        struct std____detail___List_node_base* t1023 = base1022->_M_next;
        __cur1011 = t1023;
        struct std___List_node_int_* t1024 = __tmp1018;
        struct std___List_node_int_* r1025 = std___List_node_int____M_node_ptr(t1024);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t1012, r1025);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1026) {
bb1027:
  struct std____cxx11___List_base_int__std__allocator_int__* this1028;
  this1028 = v1026;
  struct std____cxx11___List_base_int__std__allocator_int__* t1029 = this1028;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t1029);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t1029->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v1030) {
bb1031:
  struct std____new_allocator_std___List_node_int__* this1032;
  this1032 = v1030;
  struct std____new_allocator_std___List_node_int__* t1033 = this1032;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* v1034) {
bb1035:
  struct std__allocator_std___List_node_int__* this1036;
  this1036 = v1034;
  struct std__allocator_std___List_node_int__* t1037 = this1036;
  struct std____new_allocator_std___List_node_int__* base1038 = (struct std____new_allocator_std___List_node_int__*)((char *)t1037 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1038);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1039) {
bb1040:
  struct std____detail___List_node_header* this1041;
  this1041 = v1039;
  struct std____detail___List_node_header* t1042 = this1041;
  struct std____detail___List_node_base* base1043 = (struct std____detail___List_node_base*)((char *)t1042 + 0);
  struct std____detail___List_size* base1044 = (struct std____detail___List_size*)((char *)t1042 + 16);
  std____detail___List_node_header___M_init(t1042);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1045, struct std____detail___List_size* v1046) {
bb1047:
  struct std____detail___List_size* this1048;
  struct std____detail___List_size* unnamed1049;
  struct std____detail___List_size* __retval1050;
  this1048 = v1045;
  unnamed1049 = v1046;
  struct std____detail___List_size* t1051 = this1048;
  struct std____detail___List_size* t1052 = unnamed1049;
  unsigned long t1053 = t1052->_M_size;
  t1051->_M_size = t1053;
  __retval1050 = t1051;
  struct std____detail___List_size* t1054 = __retval1050;
  return t1054;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1055) {
bb1056:
  struct std____detail___List_node_header* this1057;
  struct std____detail___List_size ref_tmp01058;
  this1057 = v1055;
  struct std____detail___List_node_header* t1059 = this1057;
  struct std____detail___List_node_base* base1060 = (struct std____detail___List_node_base*)((char *)t1059 + 0);
  struct std____detail___List_node_base* base1061 = (struct std____detail___List_node_base*)((char *)t1059 + 0);
  base1061->_M_prev = base1060;
  struct std____detail___List_node_base* base1062 = (struct std____detail___List_node_base*)((char *)t1059 + 0);
  base1062->_M_next = base1060;
  struct std____detail___List_size* base1063 = (struct std____detail___List_size*)((char *)t1059 + 16);
  ref_tmp01058 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1064 = std____detail___List_size__operator_(base1063, &ref_tmp01058);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1065) {
bb1066:
  struct std____new_allocator_int_* this1067;
  this1067 = v1065;
  struct std____new_allocator_int_* t1068 = this1067;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v1069, struct std__allocator_int_* v1070) {
bb1071:
  struct std__allocator_std___List_node_int__* this1072;
  struct std__allocator_int_* unnamed1073;
  this1072 = v1069;
  unnamed1073 = v1070;
  struct std__allocator_std___List_node_int__* t1074 = this1072;
  struct std____new_allocator_std___List_node_int__* base1075 = (struct std____new_allocator_std___List_node_int__*)((char *)t1074 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1075);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1076, struct std__allocator_std___List_node_int__* v1077) {
bb1078:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1079;
  struct std__allocator_std___List_node_int__* __a1080;
  this1079 = v1076;
  __a1080 = v1077;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1081 = this1079;
  struct std__allocator_std___List_node_int__* base1082 = (struct std__allocator_std___List_node_int__*)((char *)t1081 + 0);
  struct std__allocator_std___List_node_int__* t1083 = __a1080;
  std__allocator_std___List_node_int_____allocator(base1082, t1083);
    std____detail___List_node_header___List_node_header(&t1081->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1084, struct std__allocator_std___List_node_int__* v1085) {
bb1086:
  struct std____cxx11___List_base_int__std__allocator_int__* this1087;
  struct std__allocator_std___List_node_int__* __a1088;
  this1087 = v1084;
  __a1088 = v1085;
  struct std____cxx11___List_base_int__std__allocator_int__* t1089 = this1087;
  struct std__allocator_std___List_node_int__* t1090 = __a1088;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t1089->_M_impl, t1090);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v1091) {
bb1092:
  struct std__allocator_std___List_node_int__* this1093;
  this1093 = v1091;
  struct std__allocator_std___List_node_int__* t1094 = this1093;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v1095) {
bb1096:
  struct std____cxx11___List_base_int__std__allocator_int__* this1097;
  struct std__allocator_std___List_node_int__* __retval1098;
  this1097 = v1095;
  struct std____cxx11___List_base_int__std__allocator_int__* t1099 = this1097;
  struct std__allocator_std___List_node_int__* base1100 = (struct std__allocator_std___List_node_int__*)((char *)&(t1099->_M_impl) + 0);
  __retval1098 = base1100;
  struct std__allocator_std___List_node_int__* t1101 = __retval1098;
  return t1101;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v1102) {
bb1103:
  struct std____new_allocator_std___List_node_int__* this1104;
  unsigned long __retval1105;
  this1104 = v1102;
  struct std____new_allocator_std___List_node_int__* t1106 = this1104;
  unsigned long c1107 = 9223372036854775807;
  unsigned long c1108 = 24;
  unsigned long b1109 = c1107 / c1108;
  __retval1105 = b1109;
  unsigned long t1110 = __retval1105;
  return t1110;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v1111, unsigned long v1112, void* v1113) {
bb1114:
  struct std____new_allocator_std___List_node_int__* this1115;
  unsigned long __n1116;
  void* unnamed1117;
  struct std___List_node_int_* __retval1118;
  this1115 = v1111;
  __n1116 = v1112;
  unnamed1117 = v1113;
  struct std____new_allocator_std___List_node_int__* t1119 = this1115;
    unsigned long t1120 = __n1116;
    unsigned long r1121 = std____new_allocator_std___List_node_int______M_max_size___const(t1119);
    _Bool c1122 = ((t1120 > r1121)) ? 1 : 0;
    if (c1122) {
        unsigned long t1123 = __n1116;
        unsigned long c1124 = -1;
        unsigned long c1125 = 24;
        unsigned long b1126 = c1124 / c1125;
        _Bool c1127 = ((t1123 > b1126)) ? 1 : 0;
        if (c1127) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1128 = 8;
    unsigned long c1129 = 16;
    _Bool c1130 = ((c1128 > c1129)) ? 1 : 0;
    if (c1130) {
      unsigned long __al1131;
      unsigned long c1132 = 8;
      __al1131 = c1132;
      unsigned long t1133 = __n1116;
      unsigned long c1134 = 24;
      unsigned long b1135 = t1133 * c1134;
      unsigned long t1136 = __al1131;
      void* r1137 = operator_new_2(b1135, t1136);
      struct std___List_node_int_* cast1138 = (struct std___List_node_int_*)r1137;
      __retval1118 = cast1138;
      struct std___List_node_int_* t1139 = __retval1118;
      return t1139;
    }
  unsigned long t1140 = __n1116;
  unsigned long c1141 = 24;
  unsigned long b1142 = t1140 * c1141;
  void* r1143 = operator_new(b1142);
  struct std___List_node_int_* cast1144 = (struct std___List_node_int_*)r1143;
  __retval1118 = cast1144;
  struct std___List_node_int_* t1145 = __retval1118;
  return t1145;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v1146, unsigned long v1147) {
bb1148:
  struct std__allocator_std___List_node_int__* this1149;
  unsigned long __n1150;
  struct std___List_node_int_* __retval1151;
  this1149 = v1146;
  __n1150 = v1147;
  struct std__allocator_std___List_node_int__* t1152 = this1149;
    _Bool r1153 = std____is_constant_evaluated();
    if (r1153) {
        unsigned long t1154 = __n1150;
        unsigned long c1155 = 24;
        unsigned long ovr1156;
        _Bool ovf1157 = __builtin_mul_overflow(t1154, c1155, &ovr1156);
        __n1150 = ovr1156;
        if (ovf1157) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1158 = __n1150;
      void* r1159 = operator_new(t1158);
      struct std___List_node_int_* cast1160 = (struct std___List_node_int_*)r1159;
      __retval1151 = cast1160;
      struct std___List_node_int_* t1161 = __retval1151;
      return t1161;
    }
  struct std____new_allocator_std___List_node_int__* base1162 = (struct std____new_allocator_std___List_node_int__*)((char *)t1152 + 0);
  unsigned long t1163 = __n1150;
  void* c1164 = ((void*)0);
  struct std___List_node_int_* r1165 = std____new_allocator_std___List_node_int_____allocate(base1162, t1163, c1164);
  __retval1151 = r1165;
  struct std___List_node_int_* t1166 = __retval1151;
  return t1166;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v1167, unsigned long v1168) {
bb1169:
  struct std__allocator_std___List_node_int__* __a1170;
  unsigned long __n1171;
  struct std___List_node_int_* __retval1172;
  __a1170 = v1167;
  __n1171 = v1168;
  struct std__allocator_std___List_node_int__* t1173 = __a1170;
  unsigned long t1174 = __n1171;
  struct std___List_node_int_* r1175 = std__allocator_std___List_node_int_____allocate(t1173, t1174);
  __retval1172 = r1175;
  struct std___List_node_int_* t1176 = __retval1172;
  return t1176;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1177, struct std__allocator_std___List_node_int__* v1178, struct std___List_node_int_* v1179) {
bb1180:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1181;
  struct std__allocator_std___List_node_int__* __a1182;
  struct std___List_node_int_* __ptr1183;
  this1181 = v1177;
  __a1182 = v1178;
  __ptr1183 = v1179;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1184 = this1181;
  struct std__allocator_std___List_node_int__* t1185 = __a1182;
  t1184->_M_alloc = t1185;
  struct std___List_node_int_* t1186 = __ptr1183;
  t1184->_M_ptr = t1186;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v1187) {
bb1188:
  struct std__allocator_std___List_node_int__* __a1189;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval1190;
  __a1189 = v1187;
  struct std__allocator_std___List_node_int__* t1191 = __a1189;
  struct std__allocator_std___List_node_int__* t1192 = __a1189;
  unsigned long c1193 = 1;
  struct std___List_node_int_* r1194 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t1192, c1193);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval1190, t1191, r1194);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t1195 = __retval1190;
  return t1195;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v1196, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1197) {
bb1198:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1199;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr1200;
  this1199 = v1196;
  __ptr1200 = v1197;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1201 = this1199;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base1202 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1201 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1203 = __ptr1200;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base1202, t1203);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1204 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1201 + 0);
    struct std___List_node_int_* r1205 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1204);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1206) {
bb1207:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1208;
  this1208 = v1206;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1209 = this1208;
    struct std___List_node_int_* t1210 = t1209->_M_ptr;
    struct std___List_node_int_* c1211 = ((void*)0);
    _Bool c1212 = ((t1210 != c1211)) ? 1 : 0;
    if (c1212) {
      struct std__allocator_std___List_node_int__* t1213 = t1209->_M_alloc;
      struct std___List_node_int_* t1214 = t1209->_M_ptr;
      unsigned long c1215 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t1213, t1214, c1215);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v1216) {
bb1217:
  struct std__allocator_std___List_node_int__* __a1218;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval1219;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp01220;
  __a1218 = v1216;
  struct std__allocator_std___List_node_int__* t1221 = __a1218;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r1222 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t1221);
  ref_tmp01220 = r1222;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval1219, &ref_tmp01220);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp01220);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t1223 = __retval1219;
  return t1223;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1224, int* v1225) {
bb1226:
  int* __location1227;
  int* __args1228;
  int* __retval1229;
  void* __loc1230;
  __location1227 = v1224;
  __args1228 = v1225;
  int* t1231 = __location1227;
  void* cast1232 = (void*)t1231;
  __loc1230 = cast1232;
    void* t1233 = __loc1230;
    int* cast1234 = (int*)t1233;
    int* t1235 = __args1228;
    int t1236 = *t1235;
    *cast1234 = t1236;
    __retval1229 = cast1234;
    int* t1237 = __retval1229;
    return t1237;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v1238, int* v1239, int* v1240) {
bb1241:
  struct std__allocator_std___List_node_int__* __a1242;
  int* __p1243;
  int* __args1244;
  __a1242 = v1238;
  __p1243 = v1239;
  __args1244 = v1240;
  int* t1245 = __p1243;
  int* t1246 = __args1244;
  int* r1247 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1245, t1246);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v1248) {
bb1249:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1250;
  struct std___List_node_int_* __retval1251;
  this1250 = v1248;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1252 = this1250;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base1253 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1252 + 0);
  struct std___List_node_int_* r1254 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1253);
  __retval1251 = r1254;
  struct std___List_node_int_* t1255 = __retval1251;
  return t1255;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v1256, void** v1257) {
bb1258:
  struct std___List_node_int_** __obj1259;
  void** __new_val1260;
  struct std___List_node_int_* __retval1261;
  struct std___List_node_int_* __old_val1262;
  __obj1259 = v1256;
  __new_val1260 = v1257;
  struct std___List_node_int_** t1263 = __obj1259;
  struct std___List_node_int_* t1264 = *t1263;
  __old_val1262 = t1264;
  void** t1265 = __new_val1260;
  struct std___List_node_int_* c1266 = ((void*)0);
  struct std___List_node_int_** t1267 = __obj1259;
  *t1267 = c1266;
  struct std___List_node_int_* t1268 = __old_val1262;
  __retval1261 = t1268;
  struct std___List_node_int_* t1269 = __retval1261;
  return t1269;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1270) {
bb1271:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1272;
  struct std___List_node_int_* __retval1273;
  void* ref_tmp01274;
  this1272 = v1270;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1275 = this1272;
  void* c1276 = ((void*)0);
  ref_tmp01274 = c1276;
  struct std___List_node_int_* r1277 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t1275->_M_ptr, &ref_tmp01274);
  __retval1273 = r1277;
  struct std___List_node_int_* t1278 = __retval1273;
  return t1278;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v1279) {
bb1280:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this1281;
  this1281 = v1279;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t1282 = this1281;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base1283 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1282 + 0);
      _Bool r1284 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base1283);
      if (r1284) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base1285 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1282 + 0);
        struct std___List_node_int_* r1286 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base1285);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1287 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t1282 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base1287);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1288, int* v1289) {
bb1290:
  struct std____cxx11__list_int__std__allocator_int__* this1291;
  int* __args1292;
  struct std___List_node_int_* __retval1293;
  struct std__allocator_std___List_node_int__* __alloc1294;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard1295;
  this1291 = v1288;
  __args1292 = v1289;
  struct std____cxx11__list_int__std__allocator_int__* t1296 = this1291;
  struct std____cxx11___List_base_int__std__allocator_int__* base1297 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1296 + 0);
  struct std__allocator_std___List_node_int__* r1298 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1297);
  __alloc1294 = r1298;
  struct std__allocator_std___List_node_int__* t1299 = __alloc1294;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r1300 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t1299);
  __guard1295 = r1300;
    struct std__allocator_std___List_node_int__* t1301 = __alloc1294;
    struct std___List_node_int_* r1302 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard1295);
    int* r1303 = std___List_node_int____M_valptr(r1302);
    int* t1304 = __args1292;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t1301, r1303, t1304);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1305 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard1295) + 0);
    struct std___List_node_int_* r1306 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base1305);
    __retval1293 = r1306;
    struct std___List_node_int_* t1307 = __retval1293;
    struct std___List_node_int_* ret_val1308 = t1307;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1295);
    }
    return ret_val1308;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v1309, unsigned long v1310) {
bb1311:
  struct std____cxx11___List_base_int__std__allocator_int__* this1312;
  unsigned long __n1313;
  this1312 = v1309;
  __n1313 = v1310;
  struct std____cxx11___List_base_int__std__allocator_int__* t1314 = this1312;
  unsigned long t1315 = __n1313;
  struct std____detail___List_size* base1316 = (struct std____detail___List_size*)((char *)&(t1314->_M_impl._M_node) + 16);
  unsigned long t1317 = base1316->_M_size;
  unsigned long b1318 = t1317 + t1315;
  base1316->_M_size = b1318;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1319, struct std___List_iterator_int_ v1320, int* v1321) {
bb1322:
  struct std____cxx11__list_int__std__allocator_int__* this1323;
  struct std___List_iterator_int_ __position1324;
  int* __args1325;
  struct std___List_node_int_* __tmp1326;
  this1323 = v1319;
  __position1324 = v1320;
  __args1325 = v1321;
  struct std____cxx11__list_int__std__allocator_int__* t1327 = this1323;
  int* t1328 = __args1325;
  struct std___List_node_int_* r1329 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t1327, t1328);
  __tmp1326 = r1329;
  struct std___List_node_int_* t1330 = __tmp1326;
  struct std____detail___List_node_base* base1331 = (struct std____detail___List_node_base*)((char *)t1330 + 0);
  struct std____detail___List_node_base* t1332 = __position1324._M_node;
  std____detail___List_node_base___M_hook(base1331, t1332);
  struct std____cxx11___List_base_int__std__allocator_int__* base1333 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1327 + 0);
  unsigned long c1334 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1333, c1334);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v1335, int* v1336) {
bb1337:
  struct std____cxx11__list_int__std__allocator_int__* this1338;
  int* __x1339;
  struct std___List_iterator_int_ agg_tmp01340;
  this1338 = v1335;
  __x1339 = v1336;
  struct std____cxx11__list_int__std__allocator_int__* t1341 = this1338;
  struct std___List_iterator_int_ r1342 = std____cxx11__list_int__std__allocator_int_____end(t1341);
  agg_tmp01340 = r1342;
  int* t1343 = __x1339;
  struct std___List_iterator_int_ t1344 = agg_tmp01340;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t1341, t1344, t1343);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_fill_initializeEmRKi
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* v1345, unsigned long v1346, int* v1347) {
bb1348:
  struct std____cxx11__list_int__std__allocator_int__* this1349;
  unsigned long __n1350;
  int* __x1351;
  this1349 = v1345;
  __n1350 = v1346;
  __x1351 = v1347;
  struct std____cxx11__list_int__std__allocator_int__* t1352 = this1349;
    while (1) {
      unsigned long t1354 = __n1350;
      _Bool cast1355 = (_Bool)t1354;
      if (!cast1355) break;
      int* t1356 = __x1351;
      std____cxx11__list_int__std__allocator_int_____push_back(t1352, t1356);
    for_step1353: ;
      unsigned long t1357 = __n1350;
      unsigned long u1358 = t1357 - 1;
      __n1350 = u1358;
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v1359, struct std____new_allocator_std___List_node_int__* v1360) {
bb1361:
  struct std____new_allocator_std___List_node_int__* this1362;
  struct std____new_allocator_std___List_node_int__* unnamed1363;
  this1362 = v1359;
  unnamed1363 = v1360;
  struct std____new_allocator_std___List_node_int__* t1364 = this1362;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v1365, struct std__allocator_std___List_node_int__* v1366) {
bb1367:
  struct std__allocator_std___List_node_int__* this1368;
  struct std__allocator_std___List_node_int__* __a1369;
  this1368 = v1365;
  __a1369 = v1366;
  struct std__allocator_std___List_node_int__* t1370 = this1368;
  struct std____new_allocator_std___List_node_int__* base1371 = (struct std____new_allocator_std___List_node_int__*)((char *)t1370 + 0);
  struct std__allocator_std___List_node_int__* t1372 = __a1369;
  struct std____new_allocator_std___List_node_int__* base1373 = (struct std____new_allocator_std___List_node_int__*)((char *)t1372 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base1371, base1373);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1374, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1375) {
bb1376:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1377;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd1378;
  this1377 = v1374;
  __gd1378 = v1375;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1379 = this1377;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1380 = __gd1378;
  struct std__allocator_std___List_node_int__* t1381 = t1380->_M_alloc;
  t1379->_M_alloc = t1381;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1382 = __gd1378;
  struct std___List_node_int_* t1383 = t1382->_M_ptr;
  t1379->_M_ptr = t1383;
  struct std___List_node_int_* c1384 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1385 = __gd1378;
  t1385->_M_ptr = c1384;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v1386) {
bb1387:
  struct std___List_node_int_* __ptr1388;
  struct std___List_node_int_* __retval1389;
  __ptr1388 = v1386;
  struct std___List_node_int_* t1390 = __ptr1388;
  __retval1389 = t1390;
  struct std___List_node_int_* t1391 = __retval1389;
  return t1391;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v1392) {
bb1393:
  struct std___List_node_int_** __ptr1394;
  struct std___List_node_int_* __retval1395;
  __ptr1394 = v1392;
  struct std___List_node_int_** t1396 = __ptr1394;
  struct std___List_node_int_* t1397 = *t1396;
  struct std___List_node_int_* r1398 = std___List_node_int___std__to_address_std___List_node_int___(t1397);
  __retval1395 = r1398;
  struct std___List_node_int_* t1399 = __retval1395;
  return t1399;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1400) {
bb1401:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1402;
  struct std___List_node_int_* __retval1403;
  this1402 = v1400;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1404 = this1402;
  struct std___List_node_int_* r1405 = auto_std____to_address_std___List_node_int___(&t1404->_M_ptr);
  __retval1403 = r1405;
  struct std___List_node_int_* t1406 = __retval1403;
  return t1406;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1407) {
bb1408:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1409;
  _Bool __retval1410;
  this1409 = v1407;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1411 = this1409;
  struct std___List_node_int_* t1412 = t1411->_M_ptr;
  _Bool cast1413 = (_Bool)t1412;
  __retval1410 = cast1413;
  _Bool t1414 = __retval1410;
  return t1414;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1415, int* v1416) {
bb1417:
  int* __location1418;
  int* __args1419;
  int* __retval1420;
  void* __loc1421;
  __location1418 = v1415;
  __args1419 = v1416;
  int* t1422 = __location1418;
  void* cast1423 = (void*)t1422;
  __loc1421 = cast1423;
    void* t1424 = __loc1421;
    int* cast1425 = (int*)t1424;
    int* t1426 = __args1419;
    int t1427 = *t1426;
    *cast1425 = t1427;
    __retval1420 = cast1425;
    int* t1428 = __retval1420;
    return t1428;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* v1429, int* v1430, int* v1431) {
bb1432:
  struct std__allocator_std___List_node_int__* __a1433;
  int* __p1434;
  int* __args1435;
  __a1433 = v1429;
  __p1434 = v1430;
  __args1435 = v1431;
  int* t1436 = __p1434;
  int* t1437 = __args1435;
  int* r1438 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1436, t1437);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* v1439, int* v1440) {
bb1441:
  struct std____cxx11__list_int__std__allocator_int__* this1442;
  int* __args1443;
  struct std___List_node_int_* __retval1444;
  struct std__allocator_std___List_node_int__* __alloc1445;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard1446;
  this1442 = v1439;
  __args1443 = v1440;
  struct std____cxx11__list_int__std__allocator_int__* t1447 = this1442;
  struct std____cxx11___List_base_int__std__allocator_int__* base1448 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1447 + 0);
  struct std__allocator_std___List_node_int__* r1449 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1448);
  __alloc1445 = r1449;
  struct std__allocator_std___List_node_int__* t1450 = __alloc1445;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r1451 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t1450);
  __guard1446 = r1451;
    struct std__allocator_std___List_node_int__* t1452 = __alloc1445;
    struct std___List_node_int_* r1453 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard1446);
    int* r1454 = std___List_node_int____M_valptr(r1453);
    int* t1455 = __args1443;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(t1452, r1454, t1455);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1456 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard1446) + 0);
    struct std___List_node_int_* r1457 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base1456);
    __retval1444 = r1457;
    struct std___List_node_int_* t1458 = __retval1444;
    struct std___List_node_int_* ret_val1459 = t1458;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1446);
    }
    return ret_val1459;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* v1460, struct std___List_iterator_int_ v1461, int* v1462) {
bb1463:
  struct std____cxx11__list_int__std__allocator_int__* this1464;
  struct std___List_iterator_int_ __position1465;
  int* __args1466;
  struct std___List_node_int_* __tmp1467;
  this1464 = v1460;
  __position1465 = v1461;
  __args1466 = v1462;
  struct std____cxx11__list_int__std__allocator_int__* t1468 = this1464;
  int* t1469 = __args1466;
  struct std___List_node_int_* r1470 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(t1468, t1469);
  __tmp1467 = r1470;
  struct std___List_node_int_* t1471 = __tmp1467;
  struct std____detail___List_node_base* base1472 = (struct std____detail___List_node_base*)((char *)t1471 + 0);
  struct std____detail___List_node_base* t1473 = __position1465._M_node;
  std____detail___List_node_base___M_hook(base1472, t1473);
  struct std____cxx11___List_base_int__std__allocator_int__* base1474 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1468 + 0);
  unsigned long c1475 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1474, c1475);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRiEEES4_DpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* v1476, int* v1477) {
bb1478:
  struct std____cxx11__list_int__std__allocator_int__* this1479;
  int* __args1480;
  int* __retval1481;
  struct std___List_iterator_int_ agg_tmp01482;
  this1479 = v1476;
  __args1480 = v1477;
  struct std____cxx11__list_int__std__allocator_int__* t1483 = this1479;
  struct std___List_iterator_int_ r1484 = std____cxx11__list_int__std__allocator_int_____end(t1483);
  agg_tmp01482 = r1484;
  int* t1485 = __args1480;
  struct std___List_iterator_int_ t1486 = agg_tmp01482;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int__(t1483, t1486, t1485);
  int* r1487 = std____cxx11__list_int__std__allocator_int_____back(t1483);
  __retval1481 = r1487;
  int* t1488 = __retval1481;
  return t1488;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchISt14_List_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v1489, struct std___List_iterator_int_ v1490, struct std___List_iterator_int_ v1491, struct std____false_type v1492) {
bb1493:
  struct std____cxx11__list_int__std__allocator_int__* this1494;
  struct std___List_iterator_int_ __first1495;
  struct std___List_iterator_int_ __last1496;
  struct std____false_type unnamed1497;
  _Bool __notempty1498;
  this1494 = v1489;
  __first1495 = v1490;
  __last1496 = v1491;
  unnamed1497 = v1492;
  struct std____cxx11__list_int__std__allocator_int__* t1499 = this1494;
  _Bool r1500 = std__operator___2(&__first1495, &__last1496);
  _Bool u1501 = !r1500;
  __notempty1498 = u1501;
    while (1) {
      _Bool r1503 = std__operator___2(&__first1495, &__last1496);
      _Bool u1504 = !r1503;
      if (!u1504) break;
      int* r1505 = std___List_iterator_int___operator____const(&__first1495);
      int* r1506 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t1499, r1505);
    for_step1502: ;
      struct std___List_iterator_int_* r1507 = std___List_iterator_int___operator___2(&__first1495);
    }
    _Bool t1508 = __notempty1498;
    if (t1508) {
        struct std___List_iterator_int_ ref_tmp01509;
        struct std___List_iterator_int_ ref_tmp11510;
        struct std___List_iterator_int_ r1511 = std____cxx11__list_int__std__allocator_int_____begin(t1499);
        ref_tmp01509 = r1511;
        struct std___List_iterator_int_ r1512 = std____cxx11__list_int__std__allocator_int_____end(t1499);
        ref_tmp11510 = r1512;
        _Bool r1513 = std__operator___2(&ref_tmp01509, &ref_tmp11510);
        if (r1513) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchIPiEEvT_S5_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* v1514, int* v1515, int* v1516, struct std____false_type v1517) {
bb1518:
  struct std____cxx11__list_int__std__allocator_int__* this1519;
  int* __first1520;
  int* __last1521;
  struct std____false_type unnamed1522;
  _Bool __notempty1523;
  this1519 = v1514;
  __first1520 = v1515;
  __last1521 = v1516;
  unnamed1522 = v1517;
  struct std____cxx11__list_int__std__allocator_int__* t1524 = this1519;
  int* t1525 = __first1520;
  int* t1526 = __last1521;
  _Bool c1527 = ((t1525 != t1526)) ? 1 : 0;
  __notempty1523 = c1527;
    while (1) {
      int* t1529 = __first1520;
      int* t1530 = __last1521;
      _Bool c1531 = ((t1529 != t1530)) ? 1 : 0;
      if (!c1531) break;
      int* t1532 = __first1520;
      int* r1533 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t1524, t1532);
    for_step1528: ;
      int* t1534 = __first1520;
      int c1535 = 1;
      int* ptr1536 = &(t1534)[c1535];
      __first1520 = ptr1536;
    }
    _Bool t1537 = __notempty1523;
    if (t1537) {
        struct std___List_iterator_int_ ref_tmp01538;
        struct std___List_iterator_int_ ref_tmp11539;
        struct std___List_iterator_int_ r1540 = std____cxx11__list_int__std__allocator_int_____begin(t1524);
        ref_tmp01538 = r1540;
        struct std___List_iterator_int_ r1541 = std____cxx11__list_int__std__allocator_int_____end(t1524);
        ref_tmp11539 = r1541;
        _Bool r1542 = std__operator___2(&ref_tmp01538, &ref_tmp11539);
        if (r1542) {
          __builtin_unreachable();
        }
    }
  return;
}

