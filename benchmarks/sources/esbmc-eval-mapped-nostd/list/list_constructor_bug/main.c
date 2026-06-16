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
int __const_main_myints[4] = {16, 2, 77, 29};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "first.size() == 0";
char _str_1[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_constructor_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() == 4";
char _str_3[21] = "second.back() != 100";
char _str_4[30] = "third.size() == second.size()";
char _str_5[30] = "third.back() == second.back()";
char _str_6[19] = "fourth.size() == 4";
char _str_7[21] = "fourth.back() != 100";
char _str_8[18] = "fifth.size() == 4";
char _str_9[10] = "*it == 16";
char _str_10[13] = "*(++it) != 2";
char _str_11[14] = "*(++it) == 77";
char _str_12[14] = "*(++it) != 29";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_13[28] = "The contents of fifth are: ";
char _str_14[2] = " ";
char _str_15[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_16[15] = "!this->empty()";
void std____cxx11__list_int__std__allocator_int_____list_3(struct std____cxx11__list_int__std__allocator_int__* p0);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std__allocator_int_* p3);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator___3(struct std___List_iterator_int_* p0);
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
_Bool std__operator__(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___List_iterator_int_ std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0, int p1);
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
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_std___List_node_int__ std__allocator_traits_std__allocator_std___List_node_int_______select_on_container_copy_construction(struct std__allocator_std___List_node_int__* p0);
struct std__allocator_std___List_node_int__ __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_select_on_copy(struct std__allocator_std___List_node_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
_Bool std__operator___2(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr___const(struct std___List_node_int_* p0);
int* std___List_const_iterator_int___operator____const(struct std___List_const_iterator_int_* p0);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* p0);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2, struct std____false_type p3);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1, int* p2, struct std____false_type p3);

// function: _ZNSt7__cxx114listIiSaIiEEC2Ev
void std____cxx11__list_int__std__allocator_int_____list_3(struct std____cxx11__list_int__std__allocator_int__* v0) {
bb1: ;
  struct std____cxx11__list_int__std__allocator_int__* this2;
  this2 = v0;
  struct std____cxx11__list_int__std__allocator_int__* t3 = this2;
  struct std____cxx11___List_base_int__std__allocator_int__* base4 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t3 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base_2(base4);
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v5) {
bb6: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this7;
  unsigned long __retval8;
  this7 = v5;
  struct std____cxx11___List_base_int__std__allocator_int__* t9 = this7;
  struct std____detail___List_size* base10 = (struct std____detail___List_size*)((char *)&(t9->_M_impl._M_node) + 16);
  unsigned long t11 = base10->_M_size;
  __retval8 = t11;
  unsigned long t12 = __retval8;
  return t12;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v13) {
bb14: ;
  struct std____cxx11__list_int__std__allocator_int__* this15;
  unsigned long __retval16;
  this15 = v13;
  struct std____cxx11__list_int__std__allocator_int__* t17 = this15;
  struct std____cxx11___List_base_int__std__allocator_int__* base18 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t17 + 0);
  unsigned long r19 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base18);
  __retval16 = r19;
  unsigned long t20 = __retval16;
  return t20;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v21) {
bb22: ;
  struct std__allocator_int_* this23;
  this23 = v21;
  struct std__allocator_int_* t24 = this23;
  struct std____new_allocator_int_* base25 = (struct std____new_allocator_int_*)((char *)t24 + 0);
  std____new_allocator_int_____new_allocator(base25);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2EmRKiRKS1_
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* v26, unsigned long v27, int* v28, struct std__allocator_int_* v29) {
bb30: ;
  struct std____cxx11__list_int__std__allocator_int__* this31;
  unsigned long __n32;
  int* __value33;
  struct std__allocator_int_* __a34;
  struct std__allocator_std___List_node_int__ ref_tmp035;
  this31 = v26;
  __n32 = v27;
  __value33 = v28;
  __a34 = v29;
  struct std____cxx11__list_int__std__allocator_int__* t36 = this31;
  struct std____cxx11___List_base_int__std__allocator_int__* base37 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t36 + 0);
  struct std__allocator_int_* t38 = __a34;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp035, t38);
    std____cxx11___List_base_int__std__allocator_int______List_base(base37, &ref_tmp035);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp035);
  }
    unsigned long t39 = __n32;
    int* t40 = __value33;
    std____cxx11__list_int__std__allocator_int______M_fill_initialize(t36, t39, t40);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v41) {
bb42: ;
  struct std__allocator_int_* this43;
  this43 = v41;
  struct std__allocator_int_* t44 = this43;
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v45) {
bb46: ;
  struct std____detail___List_node_base* this47;
  struct std____detail___List_node_base* __retval48;
  this47 = v45;
  struct std____detail___List_node_base* t49 = this47;
  __retval48 = t49;
  struct std____detail___List_node_base* t50 = __retval48;
  return t50;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v51) {
bb52: ;
  struct std____cxx11__list_int__std__allocator_int__* this53;
  _Bool __retval54;
  this53 = v51;
  struct std____cxx11__list_int__std__allocator_int__* t55 = this53;
  struct std____cxx11___List_base_int__std__allocator_int__* base56 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t55 + 0);
  struct std____detail___List_node_base* base57 = (struct std____detail___List_node_base*)((char *)&(base56->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t58 = base57->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base59 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t55 + 0);
  struct std____detail___List_node_base* base60 = (struct std____detail___List_node_base*)((char *)&(base59->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r61 = std____detail___List_node_base___M_base___const(base60);
  _Bool c62 = ((t58 == r61)) ? 1 : 0;
  __retval54 = c62;
  _Bool t63 = __retval54;
  return t63;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v64) {
bb65: ;
  struct std___List_iterator_int_* this66;
  struct std___List_iterator_int_* __retval67;
  this66 = v64;
  struct std___List_iterator_int_* t68 = this66;
  struct std____detail___List_node_base* t69 = t68->_M_node;
  struct std____detail___List_node_base* t70 = t69->_M_prev;
  t68->_M_node = t70;
  __retval67 = t68;
  struct std___List_iterator_int_* t71 = __retval67;
  return t71;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v72) {
bb73: ;
  struct std____cxx11__list_int__std__allocator_int__* this74;
  int* __retval75;
  struct std___List_iterator_int_ __tmp76;
  this74 = v72;
  struct std____cxx11__list_int__std__allocator_int__* t77 = this74;
    do {
          _Bool r78 = std____cxx11__list_int__std__allocator_int_____empty___const(t77);
          if (r78) {
            char* cast79 = (char*)&(_str_15);
            int c80 = 1674;
            char* cast81 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast82 = (char*)&(_str_16);
            std____glibcxx_assert_fail(cast79, c80, cast81, cast82);
          }
      _Bool c83 = 0;
      if (!c83) break;
    } while (1);
  struct std___List_iterator_int_ r84 = std____cxx11__list_int__std__allocator_int_____end(t77);
  __tmp76 = r84;
  struct std___List_iterator_int_* r85 = std___List_iterator_int___operator__(&__tmp76);
  int* r86 = std___List_iterator_int___operator____const(&__tmp76);
  __retval75 = r86;
  int* t87 = __retval75;
  return t87;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v88, struct std____detail___List_node_base* v89) {
bb90: ;
  struct std___List_iterator_int_* this91;
  struct std____detail___List_node_base* __x92;
  this91 = v88;
  __x92 = v89;
  struct std___List_iterator_int_* t93 = this91;
  struct std____detail___List_node_base* t94 = __x92;
  t93->_M_node = t94;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v95) {
bb96: ;
  struct std____cxx11__list_int__std__allocator_int__* this97;
  struct std___List_iterator_int_ __retval98;
  this97 = v95;
  struct std____cxx11__list_int__std__allocator_int__* t99 = this97;
  struct std____cxx11___List_base_int__std__allocator_int__* base100 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t99 + 0);
  struct std____detail___List_node_base* base101 = (struct std____detail___List_node_base*)((char *)&(base100->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t102 = base101->_M_next;
  std___List_iterator_int____List_iterator(&__retval98, t102);
  struct std___List_iterator_int_ t103 = __retval98;
  return t103;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v104) {
bb105: ;
  struct std____cxx11__list_int__std__allocator_int__* this106;
  struct std___List_iterator_int_ __retval107;
  this106 = v104;
  struct std____cxx11__list_int__std__allocator_int__* t108 = this106;
  struct std____cxx11___List_base_int__std__allocator_int__* base109 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t108 + 0);
  struct std____detail___List_node_base* r110 = std____detail___List_node_header___M_base(&base109->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval107, r110);
  struct std___List_iterator_int_ t111 = __retval107;
  return t111;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2ISt14_List_iteratorIiEvEET_S6_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_std___List_iterator_int___void_(struct std____cxx11__list_int__std__allocator_int__* v112, struct std___List_iterator_int_ v113, struct std___List_iterator_int_ v114, struct std__allocator_int_* v115) {
bb116: ;
  struct std____cxx11__list_int__std__allocator_int__* this117;
  struct std___List_iterator_int_ __first118;
  struct std___List_iterator_int_ __last119;
  struct std__allocator_int_* __a120;
  struct std__allocator_std___List_node_int__ ref_tmp0121;
  struct std___List_iterator_int_ agg_tmp0122;
  struct std___List_iterator_int_ agg_tmp1123;
  struct std____false_type agg_tmp2124;
  this117 = v112;
  __first118 = v113;
  __last119 = v114;
  __a120 = v115;
  struct std____cxx11__list_int__std__allocator_int__* t125 = this117;
  struct std____cxx11___List_base_int__std__allocator_int__* base126 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t125 + 0);
  struct std__allocator_int_* t127 = __a120;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0121, t127);
    std____cxx11___List_base_int__std__allocator_int______List_base(base126, &ref_tmp0121);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0121);
  }
    agg_tmp0122 = __first118; // copy
    agg_tmp1123 = __last119; // copy
    struct std___List_iterator_int_ t128 = agg_tmp0122;
    struct std___List_iterator_int_ t129 = agg_tmp1123;
    struct std____false_type t130 = agg_tmp2124;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_iterator_int___(t125, t128, t129, t130);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2ERKS2_
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v131, struct std____cxx11__list_int__std__allocator_int__* v132) {
bb133: ;
  struct std____cxx11__list_int__std__allocator_int__* this134;
  struct std____cxx11__list_int__std__allocator_int__* __x135;
  struct std__allocator_std___List_node_int__ ref_tmp0136;
  struct std___List_const_iterator_int_ agg_tmp0137;
  struct std___List_const_iterator_int_ agg_tmp1138;
  struct std____false_type agg_tmp2139;
  this134 = v131;
  __x135 = v132;
  struct std____cxx11__list_int__std__allocator_int__* t140 = this134;
  struct std____cxx11___List_base_int__std__allocator_int__* base141 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t140 + 0);
  struct std____cxx11__list_int__std__allocator_int__* t142 = __x135;
  struct std____cxx11___List_base_int__std__allocator_int__* base143 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t142 + 0);
  struct std__allocator_std___List_node_int__* r144 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base143);
  struct std__allocator_std___List_node_int__ r145 = __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_select_on_copy(r144);
  ref_tmp0136 = r145;
    std____cxx11___List_base_int__std__allocator_int______List_base(base141, &ref_tmp0136);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0136);
  }
    struct std____cxx11__list_int__std__allocator_int__* t146 = __x135;
    struct std___List_const_iterator_int_ r147 = std____cxx11__list_int__std__allocator_int_____begin___const(t146);
    agg_tmp0137 = r147;
    struct std____cxx11__list_int__std__allocator_int__* t148 = __x135;
    struct std___List_const_iterator_int_ r149 = std____cxx11__list_int__std__allocator_int_____end___const(t148);
    agg_tmp1138 = r149;
    struct std___List_const_iterator_int_ t150 = agg_tmp0137;
    struct std___List_const_iterator_int_ t151 = agg_tmp1138;
    struct std____false_type t152 = agg_tmp2139;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(t140, t150, t151, t152);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2IPivEET_S5_RKS1_
void std____cxx11__list_int__std__allocator_int_____list_int___void_(struct std____cxx11__list_int__std__allocator_int__* v153, int* v154, int* v155, struct std__allocator_int_* v156) {
bb157: ;
  struct std____cxx11__list_int__std__allocator_int__* this158;
  int* __first159;
  int* __last160;
  struct std__allocator_int_* __a161;
  struct std__allocator_std___List_node_int__ ref_tmp0162;
  struct std____false_type agg_tmp0163;
  this158 = v153;
  __first159 = v154;
  __last160 = v155;
  __a161 = v156;
  struct std____cxx11__list_int__std__allocator_int__* t164 = this158;
  struct std____cxx11___List_base_int__std__allocator_int__* base165 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t164 + 0);
  struct std__allocator_int_* t166 = __a161;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0162, t166);
    std____cxx11___List_base_int__std__allocator_int______List_base(base165, &ref_tmp0162);
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0162);
  }
    int* t167 = __first159;
    int* t168 = __last160;
    struct std____false_type t169 = agg_tmp0163;
    void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(t164, t167, t168, t169);
  return;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v170) {
bb171: ;
  struct std___List_iterator_int_* this172;
  int* __retval173;
  this172 = v170;
  struct std___List_iterator_int_* t174 = this172;
  struct std____detail___List_node_base* t175 = t174->_M_node;
  struct std___List_node_int_* derived176 = ((t175) ? (struct std___List_node_int_*)((char *)t175 - 0) : (struct std___List_node_int_*)0);
  int* r177 = std___List_node_int____M_valptr(derived176);
  __retval173 = r177;
  int* t178 = __retval173;
  return t178;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___3(struct std___List_iterator_int_* v179) {
bb180: ;
  struct std___List_iterator_int_* this181;
  struct std___List_iterator_int_* __retval182;
  this181 = v179;
  struct std___List_iterator_int_* t183 = this181;
  struct std____detail___List_node_base* t184 = t183->_M_node;
  struct std____detail___List_node_base* t185 = t184->_M_next;
  t183->_M_node = t185;
  __retval182 = t183;
  struct std___List_iterator_int_* t186 = __retval182;
  return t186;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v187, int v188) {
bb189: ;
  int __a190;
  int __b191;
  int __retval192;
  __a190 = v187;
  __b191 = v188;
  int t193 = __a190;
  int t194 = __b191;
  int b195 = t193 | t194;
  __retval192 = b195;
  int t196 = __retval192;
  return t196;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v197) {
bb198: ;
  struct std__basic_ios_char__std__char_traits_char__* this199;
  int __retval200;
  this199 = v197;
  struct std__basic_ios_char__std__char_traits_char__* t201 = this199;
  struct std__ios_base* base202 = (struct std__ios_base*)((char *)t201 + 0);
  int t203 = base202->_M_streambuf_state;
  __retval200 = t203;
  int t204 = __retval200;
  return t204;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v205, int v206) {
bb207: ;
  struct std__basic_ios_char__std__char_traits_char__* this208;
  int __state209;
  this208 = v205;
  __state209 = v206;
  struct std__basic_ios_char__std__char_traits_char__* t210 = this208;
  int r211 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t210);
  int t212 = __state209;
  int r213 = std__operator_(r211, t212);
  std__basic_ios_char__std__char_traits_char_____clear(t210, r213);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v214, char* v215) {
bb216: ;
  char* __c1217;
  char* __c2218;
  _Bool __retval219;
  __c1217 = v214;
  __c2218 = v215;
  char* t220 = __c1217;
  char t221 = *t220;
  int cast222 = (int)t221;
  char* t223 = __c2218;
  char t224 = *t223;
  int cast225 = (int)t224;
  _Bool c226 = ((cast222 == cast225)) ? 1 : 0;
  __retval219 = c226;
  _Bool t227 = __retval219;
  return t227;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v228) {
bb229: ;
  char* __p230;
  unsigned long __retval231;
  unsigned long __i232;
  __p230 = v228;
  unsigned long c233 = 0;
  __i232 = c233;
    char ref_tmp0234;
    while (1) {
      unsigned long t235 = __i232;
      char* t236 = __p230;
      char* ptr237 = &(t236)[t235];
      char c238 = 0;
      ref_tmp0234 = c238;
      _Bool r239 = __gnu_cxx__char_traits_char___eq(ptr237, &ref_tmp0234);
      _Bool u240 = !r239;
      if (!u240) break;
      unsigned long t241 = __i232;
      unsigned long u242 = t241 + 1;
      __i232 = u242;
    }
  unsigned long t243 = __i232;
  __retval231 = t243;
  unsigned long t244 = __retval231;
  return t244;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v245) {
bb246: ;
  char* __s247;
  unsigned long __retval248;
  __s247 = v245;
    _Bool r249 = std____is_constant_evaluated();
    if (r249) {
      char* t250 = __s247;
      unsigned long r251 = __gnu_cxx__char_traits_char___length(t250);
      __retval248 = r251;
      unsigned long t252 = __retval248;
      return t252;
    }
  char* t253 = __s247;
  unsigned long r254 = strlen(t253);
  __retval248 = r254;
  unsigned long t255 = __retval248;
  return t255;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v256, char* v257) {
bb258: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out259;
  char* __s260;
  struct std__basic_ostream_char__std__char_traits_char__* __retval261;
  __out259 = v256;
  __s260 = v257;
    char* t262 = __s260;
    _Bool cast263 = (_Bool)t262;
    _Bool u264 = !cast263;
    if (u264) {
      struct std__basic_ostream_char__std__char_traits_char__* t265 = __out259;
      void** v266 = (void**)t265;
      void* v267 = *((void**)v266);
      unsigned char* cast268 = (unsigned char*)v267;
      long c269 = -24;
      unsigned char* ptr270 = &(cast268)[c269];
      long* cast271 = (long*)ptr270;
      long t272 = *cast271;
      unsigned char* cast273 = (unsigned char*)t265;
      unsigned char* ptr274 = &(cast273)[t272];
      struct std__basic_ostream_char__std__char_traits_char__* cast275 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr274;
      struct std__basic_ios_char__std__char_traits_char__* cast276 = (struct std__basic_ios_char__std__char_traits_char__*)cast275;
      int t277 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast276, t277);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t278 = __out259;
      char* t279 = __s260;
      char* t280 = __s260;
      unsigned long r281 = std__char_traits_char___length(t280);
      long cast282 = (long)r281;
      struct std__basic_ostream_char__std__char_traits_char__* r283 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t278, t279, cast282);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t284 = __out259;
  __retval261 = t284;
  struct std__basic_ostream_char__std__char_traits_char__* t285 = __retval261;
  return t285;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator__(struct std___List_iterator_int_* v286, struct std___List_iterator_int_* v287) {
bb288: ;
  struct std___List_iterator_int_* __x289;
  struct std___List_iterator_int_* __y290;
  _Bool __retval291;
  __x289 = v286;
  __y290 = v287;
  struct std___List_iterator_int_* t292 = __x289;
  struct std____detail___List_node_base* t293 = t292->_M_node;
  struct std___List_iterator_int_* t294 = __y290;
  struct std____detail___List_node_base* t295 = t294->_M_node;
  _Bool c296 = ((t293 == t295)) ? 1 : 0;
  __retval291 = c296;
  _Bool t297 = __retval291;
  return t297;
}

// function: _ZNSt14_List_iteratorIiEppEi
struct std___List_iterator_int_ std___List_iterator_int___operator___2(struct std___List_iterator_int_* v298, int v299) {
bb300: ;
  struct std___List_iterator_int_* this301;
  int unnamed302;
  struct std___List_iterator_int_ __retval303;
  this301 = v298;
  unnamed302 = v299;
  struct std___List_iterator_int_* t304 = this301;
  __retval303 = *t304; // copy
  struct std____detail___List_node_base* t305 = t304->_M_node;
  struct std____detail___List_node_base* t306 = t305->_M_next;
  t304->_M_node = t306;
  struct std___List_iterator_int_ t307 = __retval303;
  return t307;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v308, void* v309) {
bb310: ;
  struct std__basic_ostream_char__std__char_traits_char__* this311;
  void* __pf312;
  struct std__basic_ostream_char__std__char_traits_char__* __retval313;
  this311 = v308;
  __pf312 = v309;
  struct std__basic_ostream_char__std__char_traits_char__* t314 = this311;
  void* t315 = __pf312;
  struct std__basic_ostream_char__std__char_traits_char__* r316 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t315)(t314);
  __retval313 = r316;
  struct std__basic_ostream_char__std__char_traits_char__* t317 = __retval313;
  return t317;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v318) {
bb319: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os320;
  struct std__basic_ostream_char__std__char_traits_char__* __retval321;
  __os320 = v318;
  struct std__basic_ostream_char__std__char_traits_char__* t322 = __os320;
  struct std__basic_ostream_char__std__char_traits_char__* r323 = std__ostream__flush(t322);
  __retval321 = r323;
  struct std__basic_ostream_char__std__char_traits_char__* t324 = __retval321;
  return t324;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v325) {
bb326: ;
  struct std__ctype_char_* __f327;
  struct std__ctype_char_* __retval328;
  __f327 = v325;
    struct std__ctype_char_* t329 = __f327;
    _Bool cast330 = (_Bool)t329;
    _Bool u331 = !cast330;
    if (u331) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t332 = __f327;
  __retval328 = t332;
  struct std__ctype_char_* t333 = __retval328;
  return t333;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v334, char v335) {
bb336: ;
  struct std__ctype_char_* this337;
  char __c338;
  char __retval339;
  this337 = v334;
  __c338 = v335;
  struct std__ctype_char_* t340 = this337;
    char t341 = t340->_M_widen_ok;
    _Bool cast342 = (_Bool)t341;
    if (cast342) {
      char t343 = __c338;
      unsigned char cast344 = (unsigned char)t343;
      unsigned long cast345 = (unsigned long)cast344;
      char t346 = t340->_M_widen[cast345];
      __retval339 = t346;
      char t347 = __retval339;
      return t347;
    }
  std__ctype_char____M_widen_init___const(t340);
  char t348 = __c338;
  void** v349 = (void**)t340;
  void* v350 = *((void**)v349);
  char vcall353 = (char)__VERIFIER_virtual_call_char_char(t340, 6, t348);
  __retval339 = vcall353;
  char t354 = __retval339;
  return t354;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v355, char v356) {
bb357: ;
  struct std__basic_ios_char__std__char_traits_char__* this358;
  char __c359;
  char __retval360;
  this358 = v355;
  __c359 = v356;
  struct std__basic_ios_char__std__char_traits_char__* t361 = this358;
  struct std__ctype_char_* t362 = t361->_M_ctype;
  struct std__ctype_char_* r363 = std__ctype_char__const__std____check_facet_std__ctype_char___(t362);
  char t364 = __c359;
  char r365 = std__ctype_char___widen_char__const(r363, t364);
  __retval360 = r365;
  char t366 = __retval360;
  return t366;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v367) {
bb368: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os369;
  struct std__basic_ostream_char__std__char_traits_char__* __retval370;
  __os369 = v367;
  struct std__basic_ostream_char__std__char_traits_char__* t371 = __os369;
  struct std__basic_ostream_char__std__char_traits_char__* t372 = __os369;
  void** v373 = (void**)t372;
  void* v374 = *((void**)v373);
  unsigned char* cast375 = (unsigned char*)v374;
  long c376 = -24;
  unsigned char* ptr377 = &(cast375)[c376];
  long* cast378 = (long*)ptr377;
  long t379 = *cast378;
  unsigned char* cast380 = (unsigned char*)t372;
  unsigned char* ptr381 = &(cast380)[t379];
  struct std__basic_ostream_char__std__char_traits_char__* cast382 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr381;
  struct std__basic_ios_char__std__char_traits_char__* cast383 = (struct std__basic_ios_char__std__char_traits_char__*)cast382;
  char c384 = 10;
  char r385 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast383, c384);
  struct std__basic_ostream_char__std__char_traits_char__* r386 = std__ostream__put(t371, r385);
  struct std__basic_ostream_char__std__char_traits_char__* r387 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r386);
  __retval370 = r387;
  struct std__basic_ostream_char__std__char_traits_char__* t388 = __retval370;
  return t388;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v389) {
bb390: ;
  struct std____cxx11__list_int__std__allocator_int__* this391;
  this391 = v389;
  struct std____cxx11__list_int__std__allocator_int__* t392 = this391;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base393 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t392 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base393);
  }
  return;
}

// function: main
int main() {
bb394: ;
  int __retval395;
  struct std____cxx11__list_int__std__allocator_int__ first396;
  struct std____cxx11__list_int__std__allocator_int__ second397;
  int ref_tmp0398;
  struct std__allocator_int_ ref_tmp1399;
  struct std____cxx11__list_int__std__allocator_int__ third400;
  struct std___List_iterator_int_ agg_tmp0401;
  struct std___List_iterator_int_ agg_tmp1402;
  struct std__allocator_int_ ref_tmp2403;
  struct std____cxx11__list_int__std__allocator_int__ fourth404;
  int myints405[4];
  struct std____cxx11__list_int__std__allocator_int__ fifth406;
  struct std__allocator_int_ ref_tmp3407;
  struct std___List_iterator_int_ it408;
  int c409 = 0;
  __retval395 = c409;
  std____cxx11__list_int__std__allocator_int_____list_3(&first396);
    unsigned long r410 = std____cxx11__list_int__std__allocator_int_____size___const(&first396);
    unsigned long c411 = 0;
    _Bool c412 = ((r410 == c411)) ? 1 : 0;
    if (c412) {
    } else {
      char* cast413 = (char*)&(_str);
      char* c414 = (char*)_str_1;
      unsigned int c415 = 19;
      char* cast416 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast413, c414, c415, cast416);
    }
    unsigned long c417 = 4;
    int c418 = 100;
    ref_tmp0398 = c418;
    std__allocator_int___allocator(&ref_tmp1399);
      std____cxx11__list_int__std__allocator_int_____list_2(&second397, c417, &ref_tmp0398, &ref_tmp1399);
    {
      std__allocator_int____allocator(&ref_tmp1399);
    }
      unsigned long r419 = std____cxx11__list_int__std__allocator_int_____size___const(&second397);
      unsigned long c420 = 4;
      _Bool c421 = ((r419 == c420)) ? 1 : 0;
      if (c421) {
      } else {
        char* cast422 = (char*)&(_str_2);
        char* c423 = (char*)_str_1;
        unsigned int c424 = 21;
        char* cast425 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast422, c423, c424, cast425);
      }
      int* r426 = std____cxx11__list_int__std__allocator_int_____back(&second397);
      int t427 = *r426;
      int c428 = 100;
      _Bool c429 = ((t427 != c428)) ? 1 : 0;
      if (c429) {
      } else {
        char* cast430 = (char*)&(_str_3);
        char* c431 = (char*)_str_1;
        unsigned int c432 = 22;
        char* cast433 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast430, c431, c432, cast433);
      }
      struct std___List_iterator_int_ r434 = std____cxx11__list_int__std__allocator_int_____begin(&second397);
      agg_tmp0401 = r434;
      struct std___List_iterator_int_ r435 = std____cxx11__list_int__std__allocator_int_____end(&second397);
      agg_tmp1402 = r435;
      std__allocator_int___allocator(&ref_tmp2403);
        struct std___List_iterator_int_ t436 = agg_tmp0401;
        struct std___List_iterator_int_ t437 = agg_tmp1402;
        std____cxx11__list_int__std__allocator_int_____list_std___List_iterator_int___void_(&third400, t436, t437, &ref_tmp2403);
      {
        std__allocator_int____allocator(&ref_tmp2403);
      }
        unsigned long r438 = std____cxx11__list_int__std__allocator_int_____size___const(&third400);
        unsigned long r439 = std____cxx11__list_int__std__allocator_int_____size___const(&second397);
        _Bool c440 = ((r438 == r439)) ? 1 : 0;
        if (c440) {
        } else {
          char* cast441 = (char*)&(_str_4);
          char* c442 = (char*)_str_1;
          unsigned int c443 = 24;
          char* cast444 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast441, c442, c443, cast444);
        }
        int* r445 = std____cxx11__list_int__std__allocator_int_____back(&third400);
        int t446 = *r445;
        int* r447 = std____cxx11__list_int__std__allocator_int_____back(&second397);
        int t448 = *r447;
        _Bool c449 = ((t446 == t448)) ? 1 : 0;
        if (c449) {
        } else {
          char* cast450 = (char*)&(_str_5);
          char* c451 = (char*)_str_1;
          unsigned int c452 = 25;
          char* cast453 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast450, c451, c452, cast453);
        }
        std____cxx11__list_int__std__allocator_int_____list(&fourth404, &third400);
          unsigned long r454 = std____cxx11__list_int__std__allocator_int_____size___const(&fourth404);
          unsigned long c455 = 4;
          _Bool c456 = ((r454 == c455)) ? 1 : 0;
          if (c456) {
          } else {
            char* cast457 = (char*)&(_str_6);
            char* c458 = (char*)_str_1;
            unsigned int c459 = 27;
            char* cast460 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast457, c458, c459, cast460);
          }
          int* r461 = std____cxx11__list_int__std__allocator_int_____back(&fourth404);
          int t462 = *r461;
          int c463 = 100;
          _Bool c464 = ((t462 != c463)) ? 1 : 0;
          if (c464) {
          } else {
            char* cast465 = (char*)&(_str_7);
            char* c466 = (char*)_str_1;
            unsigned int c467 = 28;
            char* cast468 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast465, c466, c467, cast468);
          }
          // array copy
          __builtin_memcpy(myints405, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
          int* cast469 = (int*)&(myints405);
          int* cast470 = (int*)&(myints405);
          unsigned long c471 = 16;
          unsigned long c472 = 4;
          unsigned long b473 = c471 / c472;
          int* ptr474 = &(cast470)[b473];
          std__allocator_int___allocator(&ref_tmp3407);
            std____cxx11__list_int__std__allocator_int_____list_int___void_(&fifth406, cast469, ptr474, &ref_tmp3407);
          {
            std__allocator_int____allocator(&ref_tmp3407);
          }
            unsigned long r475 = std____cxx11__list_int__std__allocator_int_____size___const(&fifth406);
            unsigned long c476 = 4;
            _Bool c477 = ((r475 == c476)) ? 1 : 0;
            if (c477) {
            } else {
              char* cast478 = (char*)&(_str_8);
              char* c479 = (char*)_str_1;
              unsigned int c480 = 33;
              char* cast481 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast478, c479, c480, cast481);
            }
            struct std___List_iterator_int_ r482 = std____cxx11__list_int__std__allocator_int_____begin(&fifth406);
            it408 = r482;
            int* r483 = std___List_iterator_int___operator____const(&it408);
            int t484 = *r483;
            int c485 = 16;
            _Bool c486 = ((t484 == c485)) ? 1 : 0;
            if (c486) {
            } else {
              char* cast487 = (char*)&(_str_9);
              char* c488 = (char*)_str_1;
              unsigned int c489 = 36;
              char* cast490 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast487, c488, c489, cast490);
            }
            struct std___List_iterator_int_* r491 = std___List_iterator_int___operator___3(&it408);
            int* r492 = std___List_iterator_int___operator____const(r491);
            int t493 = *r492;
            int c494 = 2;
            _Bool c495 = ((t493 != c494)) ? 1 : 0;
            if (c495) {
            } else {
              char* cast496 = (char*)&(_str_10);
              char* c497 = (char*)_str_1;
              unsigned int c498 = 37;
              char* cast499 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast496, c497, c498, cast499);
            }
            struct std___List_iterator_int_* r500 = std___List_iterator_int___operator___3(&it408);
            int* r501 = std___List_iterator_int___operator____const(r500);
            int t502 = *r501;
            int c503 = 77;
            _Bool c504 = ((t502 == c503)) ? 1 : 0;
            if (c504) {
            } else {
              char* cast505 = (char*)&(_str_11);
              char* c506 = (char*)_str_1;
              unsigned int c507 = 38;
              char* cast508 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast505, c506, c507, cast508);
            }
            struct std___List_iterator_int_* r509 = std___List_iterator_int___operator___3(&it408);
            int* r510 = std___List_iterator_int___operator____const(r509);
            int t511 = *r510;
            int c512 = 29;
            _Bool c513 = ((t511 != c512)) ? 1 : 0;
            if (c513) {
            } else {
              char* cast514 = (char*)&(_str_12);
              char* c515 = (char*)_str_1;
              unsigned int c516 = 39;
              char* cast517 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast514, c515, c516, cast517);
            }
            char* cast518 = (char*)&(_str_13);
            struct std__basic_ostream_char__std__char_traits_char__* r519 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast518);
              struct std___List_iterator_int_ it520;
              struct std___List_iterator_int_ ref_tmp4521;
              struct std___List_iterator_int_ agg_tmp2522;
              struct std___List_iterator_int_ r523 = std____cxx11__list_int__std__allocator_int_____begin(&fifth406);
              it520 = r523;
              while (1) {
                struct std___List_iterator_int_ r525 = std____cxx11__list_int__std__allocator_int_____end(&fifth406);
                ref_tmp4521 = r525;
                _Bool r526 = std__operator__(&it520, &ref_tmp4521);
                _Bool u527 = !r526;
                if (!u527) break;
                int* r528 = std___List_iterator_int___operator____const(&it520);
                int t529 = *r528;
                struct std__basic_ostream_char__std__char_traits_char__* r530 = std__ostream__operator__(&_ZSt4cout, t529);
                char* cast531 = (char*)&(_str_14);
                struct std__basic_ostream_char__std__char_traits_char__* r532 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r530, cast531);
              for_step524: ;
                int c533 = 0;
                struct std___List_iterator_int_ r534 = std___List_iterator_int___operator___2(&it520, c533);
                agg_tmp2522 = r534;
              }
            struct std__basic_ostream_char__std__char_traits_char__* r535 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c536 = 0;
            __retval395 = c536;
            int t537 = __retval395;
            int ret_val538 = t537;
            {
              std____cxx11__list_int__std__allocator_int______list(&fifth406);
            }
            {
              std____cxx11__list_int__std__allocator_int______list(&fourth404);
            }
            {
              std____cxx11__list_int__std__allocator_int______list(&third400);
            }
            {
              std____cxx11__list_int__std__allocator_int______list(&second397);
            }
            {
              std____cxx11__list_int__std__allocator_int______list(&first396);
            }
            return ret_val538;
  int t539 = __retval395;
  return t539;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v540) {
bb541: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this542;
  this542 = v540;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t543 = this542;
  struct std__allocator_std___List_node_int__* base544 = (struct std__allocator_std___List_node_int__*)((char *)t543 + 0);
  std__allocator_std___List_node_int_____allocator_2(base544);
    std____detail___List_node_header___List_node_header(&t543->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v545) {
bb546: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this547;
  this547 = v545;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t548 = this547;
  {
    struct std__allocator_std___List_node_int__* base549 = (struct std__allocator_std___List_node_int__*)((char *)t548 + 0);
    std__allocator_std___List_node_int______allocator(base549);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base_2(struct std____cxx11___List_base_int__std__allocator_int__* v550) {
bb551: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this552;
  this552 = v550;
  struct std____cxx11___List_base_int__std__allocator_int__* t553 = this552;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(&t553->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v554) {
bb555: ;
  struct std____detail___List_node_header* this556;
  struct std____detail___List_node_base* __retval557;
  this556 = v554;
  struct std____detail___List_node_header* t558 = this556;
  struct std____detail___List_node_base* base559 = (struct std____detail___List_node_base*)((char *)t558 + 0);
  __retval557 = base559;
  struct std____detail___List_node_base* t560 = __retval557;
  return t560;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v561) {
bb562: ;
  int* __location563;
  __location563 = v561;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v564, int* v565) {
bb566: ;
  struct std__allocator_std___List_node_int__* __a567;
  int* __p568;
  __a567 = v564;
  __p568 = v565;
  int* t569 = __p568;
  void_std__destroy_at_int_(t569);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v570) {
bb571: ;
  struct __gnu_cxx____aligned_membuf_int_* this572;
  void* __retval573;
  this572 = v570;
  struct __gnu_cxx____aligned_membuf_int_* t574 = this572;
  void* cast575 = (void*)&(t574->_M_storage);
  __retval573 = cast575;
  void* t576 = __retval573;
  return t576;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v577) {
bb578: ;
  struct __gnu_cxx____aligned_membuf_int_* this579;
  int* __retval580;
  this579 = v577;
  struct __gnu_cxx____aligned_membuf_int_* t581 = this579;
  void* r582 = __gnu_cxx____aligned_membuf_int____M_addr(t581);
  int* cast583 = (int*)r582;
  __retval580 = cast583;
  int* t584 = __retval580;
  return t584;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v585) {
bb586: ;
  struct std___List_node_int_* this587;
  int* __retval588;
  this587 = v585;
  struct std___List_node_int_* t589 = this587;
  int* r590 = __gnu_cxx____aligned_membuf_int____M_ptr(&t589->_M_storage);
  __retval588 = r590;
  int* t591 = __retval588;
  return t591;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb592: ;
  _Bool __retval593;
    _Bool c594 = 0;
    __retval593 = c594;
    _Bool t595 = __retval593;
    return t595;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v596, struct std___List_node_int_* v597, unsigned long v598) {
bb599: ;
  struct std____new_allocator_std___List_node_int__* this600;
  struct std___List_node_int_* __p601;
  unsigned long __n602;
  this600 = v596;
  __p601 = v597;
  __n602 = v598;
  struct std____new_allocator_std___List_node_int__* t603 = this600;
    unsigned long c604 = 8;
    unsigned long c605 = 16;
    _Bool c606 = ((c604 > c605)) ? 1 : 0;
    if (c606) {
      struct std___List_node_int_* t607 = __p601;
      void* cast608 = (void*)t607;
      unsigned long t609 = __n602;
      unsigned long c610 = 24;
      unsigned long b611 = t609 * c610;
      unsigned long c612 = 8;
      operator_delete_3(cast608, b611, c612);
      return;
    }
  struct std___List_node_int_* t613 = __p601;
  void* cast614 = (void*)t613;
  unsigned long t615 = __n602;
  unsigned long c616 = 24;
  unsigned long b617 = t615 * c616;
  operator_delete_2(cast614, b617);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v618, struct std___List_node_int_* v619, unsigned long v620) {
bb621: ;
  struct std__allocator_std___List_node_int__* this622;
  struct std___List_node_int_* __p623;
  unsigned long __n624;
  this622 = v618;
  __p623 = v619;
  __n624 = v620;
  struct std__allocator_std___List_node_int__* t625 = this622;
    _Bool r626 = std____is_constant_evaluated();
    if (r626) {
      struct std___List_node_int_* t627 = __p623;
      void* cast628 = (void*)t627;
      operator_delete(cast628);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base629 = (struct std____new_allocator_std___List_node_int__*)((char *)t625 + 0);
  struct std___List_node_int_* t630 = __p623;
  unsigned long t631 = __n624;
  std____new_allocator_std___List_node_int_____deallocate(base629, t630, t631);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v632, struct std___List_node_int_* v633, unsigned long v634) {
bb635: ;
  struct std__allocator_std___List_node_int__* __a636;
  struct std___List_node_int_* __p637;
  unsigned long __n638;
  __a636 = v632;
  __p637 = v633;
  __n638 = v634;
  struct std__allocator_std___List_node_int__* t639 = __a636;
  struct std___List_node_int_* t640 = __p637;
  unsigned long t641 = __n638;
  std__allocator_std___List_node_int_____deallocate(t639, t640, t641);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v642, struct std___List_node_int_* v643) {
bb644: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this645;
  struct std___List_node_int_* __p646;
  this645 = v642;
  __p646 = v643;
  struct std____cxx11___List_base_int__std__allocator_int__* t647 = this645;
  struct std__allocator_std___List_node_int__* base648 = (struct std__allocator_std___List_node_int__*)((char *)&(t647->_M_impl) + 0);
  struct std___List_node_int_* t649 = __p646;
  unsigned long c650 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base648, t649, c650);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v651, struct std___List_node_int_* v652) {
bb653: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this654;
  struct std___List_node_int_* __p655;
  this654 = v651;
  __p655 = v652;
  struct std____cxx11___List_base_int__std__allocator_int__* t656 = this654;
  struct std__allocator_std___List_node_int__* base657 = (struct std__allocator_std___List_node_int__*)((char *)&(t656->_M_impl) + 0);
  struct std___List_node_int_* t658 = __p655;
  int* r659 = std___List_node_int____M_valptr(t658);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base657, r659);
  struct std___List_node_int_* t660 = __p655;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t656, t660);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v661) {
bb662: ;
  struct std___List_node_int_* this663;
  struct std___List_node_int_* __retval664;
  this663 = v661;
  struct std___List_node_int_* t665 = this663;
  __retval664 = t665;
  struct std___List_node_int_* t666 = __retval664;
  return t666;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v667) {
bb668: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this669;
  struct std____detail___List_node_base* __cur670;
  this669 = v667;
  struct std____cxx11___List_base_int__std__allocator_int__* t671 = this669;
  struct std____detail___List_node_base* base672 = (struct std____detail___List_node_base*)((char *)&(t671->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t673 = base672->_M_next;
  __cur670 = t673;
    while (1) {
      struct std____detail___List_node_base* t674 = __cur670;
      struct std____detail___List_node_base* r675 = std____detail___List_node_header___M_base(&t671->_M_impl._M_node);
      _Bool c676 = ((t674 != r675)) ? 1 : 0;
      if (!c676) break;
        struct std___List_node_int_* __tmp677;
        struct std____detail___List_node_base* t678 = __cur670;
        struct std___List_node_int_* derived679 = (struct std___List_node_int_*)((char *)t678 - 0);
        __tmp677 = derived679;
        struct std___List_node_int_* t680 = __tmp677;
        struct std____detail___List_node_base* base681 = (struct std____detail___List_node_base*)((char *)t680 + 0);
        struct std____detail___List_node_base* t682 = base681->_M_next;
        __cur670 = t682;
        struct std___List_node_int_* t683 = __tmp677;
        struct std___List_node_int_* r684 = std___List_node_int____M_node_ptr(t683);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t671, r684);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v685) {
bb686: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this687;
  this687 = v685;
  struct std____cxx11___List_base_int__std__allocator_int__* t688 = this687;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t688);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t688->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v689) {
bb690: ;
  struct std____new_allocator_std___List_node_int__* this691;
  this691 = v689;
  struct std____new_allocator_std___List_node_int__* t692 = this691;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* v693) {
bb694: ;
  struct std__allocator_std___List_node_int__* this695;
  this695 = v693;
  struct std__allocator_std___List_node_int__* t696 = this695;
  struct std____new_allocator_std___List_node_int__* base697 = (struct std____new_allocator_std___List_node_int__*)((char *)t696 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base697);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v698) {
bb699: ;
  struct std____detail___List_node_header* this700;
  this700 = v698;
  struct std____detail___List_node_header* t701 = this700;
  struct std____detail___List_node_base* base702 = (struct std____detail___List_node_base*)((char *)t701 + 0);
  struct std____detail___List_size* base703 = (struct std____detail___List_size*)((char *)t701 + 16);
  std____detail___List_node_header___M_init(t701);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v704, struct std____detail___List_size* v705) {
bb706: ;
  struct std____detail___List_size* this707;
  struct std____detail___List_size* unnamed708;
  struct std____detail___List_size* __retval709;
  this707 = v704;
  unnamed708 = v705;
  struct std____detail___List_size* t710 = this707;
  struct std____detail___List_size* t711 = unnamed708;
  unsigned long t712 = t711->_M_size;
  t710->_M_size = t712;
  __retval709 = t710;
  struct std____detail___List_size* t713 = __retval709;
  return t713;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v714) {
bb715: ;
  struct std____detail___List_node_header* this716;
  struct std____detail___List_size ref_tmp0717;
  this716 = v714;
  struct std____detail___List_node_header* t718 = this716;
  struct std____detail___List_node_base* base719 = (struct std____detail___List_node_base*)((char *)t718 + 0);
  struct std____detail___List_node_base* base720 = (struct std____detail___List_node_base*)((char *)t718 + 0);
  base720->_M_prev = base719;
  struct std____detail___List_node_base* base721 = (struct std____detail___List_node_base*)((char *)t718 + 0);
  base721->_M_next = base719;
  struct std____detail___List_size* base722 = (struct std____detail___List_size*)((char *)t718 + 16);
  ref_tmp0717 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r723 = std____detail___List_size__operator_(base722, &ref_tmp0717);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v724) {
bb725: ;
  struct std____new_allocator_int_* this726;
  this726 = v724;
  struct std____new_allocator_int_* t727 = this726;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v728, struct std__allocator_int_* v729) {
bb730: ;
  struct std__allocator_std___List_node_int__* this731;
  struct std__allocator_int_* unnamed732;
  this731 = v728;
  unnamed732 = v729;
  struct std__allocator_std___List_node_int__* t733 = this731;
  struct std____new_allocator_std___List_node_int__* base734 = (struct std____new_allocator_std___List_node_int__*)((char *)t733 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base734);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v735, struct std__allocator_std___List_node_int__* v736) {
bb737: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this738;
  struct std__allocator_std___List_node_int__* __a739;
  this738 = v735;
  __a739 = v736;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t740 = this738;
  struct std__allocator_std___List_node_int__* base741 = (struct std__allocator_std___List_node_int__*)((char *)t740 + 0);
  struct std__allocator_std___List_node_int__* t742 = __a739;
  std__allocator_std___List_node_int_____allocator(base741, t742);
    std____detail___List_node_header___List_node_header(&t740->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v743, struct std__allocator_std___List_node_int__* v744) {
bb745: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this746;
  struct std__allocator_std___List_node_int__* __a747;
  this746 = v743;
  __a747 = v744;
  struct std____cxx11___List_base_int__std__allocator_int__* t748 = this746;
  struct std__allocator_std___List_node_int__* t749 = __a747;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t748->_M_impl, t749);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v750) {
bb751: ;
  struct std__allocator_std___List_node_int__* this752;
  this752 = v750;
  struct std__allocator_std___List_node_int__* t753 = this752;
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v754) {
bb755: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this756;
  struct std__allocator_std___List_node_int__* __retval757;
  this756 = v754;
  struct std____cxx11___List_base_int__std__allocator_int__* t758 = this756;
  struct std__allocator_std___List_node_int__* base759 = (struct std__allocator_std___List_node_int__*)((char *)&(t758->_M_impl) + 0);
  __retval757 = base759;
  struct std__allocator_std___List_node_int__* t760 = __retval757;
  return t760;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v761) {
bb762: ;
  struct std____new_allocator_std___List_node_int__* this763;
  unsigned long __retval764;
  this763 = v761;
  struct std____new_allocator_std___List_node_int__* t765 = this763;
  unsigned long c766 = 9223372036854775807;
  unsigned long c767 = 24;
  unsigned long b768 = c766 / c767;
  __retval764 = b768;
  unsigned long t769 = __retval764;
  return t769;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v770, unsigned long v771, void* v772) {
bb773: ;
  struct std____new_allocator_std___List_node_int__* this774;
  unsigned long __n775;
  void* unnamed776;
  struct std___List_node_int_* __retval777;
  this774 = v770;
  __n775 = v771;
  unnamed776 = v772;
  struct std____new_allocator_std___List_node_int__* t778 = this774;
    unsigned long t779 = __n775;
    unsigned long r780 = std____new_allocator_std___List_node_int______M_max_size___const(t778);
    _Bool c781 = ((t779 > r780)) ? 1 : 0;
    if (c781) {
        unsigned long t782 = __n775;
        unsigned long c783 = -1;
        unsigned long c784 = 24;
        unsigned long b785 = c783 / c784;
        _Bool c786 = ((t782 > b785)) ? 1 : 0;
        if (c786) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c787 = 8;
    unsigned long c788 = 16;
    _Bool c789 = ((c787 > c788)) ? 1 : 0;
    if (c789) {
      unsigned long __al790;
      unsigned long c791 = 8;
      __al790 = c791;
      unsigned long t792 = __n775;
      unsigned long c793 = 24;
      unsigned long b794 = t792 * c793;
      unsigned long t795 = __al790;
      void* r796 = operator_new_2(b794, t795);
      struct std___List_node_int_* cast797 = (struct std___List_node_int_*)r796;
      __retval777 = cast797;
      struct std___List_node_int_* t798 = __retval777;
      return t798;
    }
  unsigned long t799 = __n775;
  unsigned long c800 = 24;
  unsigned long b801 = t799 * c800;
  void* r802 = operator_new(b801);
  struct std___List_node_int_* cast803 = (struct std___List_node_int_*)r802;
  __retval777 = cast803;
  struct std___List_node_int_* t804 = __retval777;
  return t804;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v805, unsigned long v806) {
bb807: ;
  struct std__allocator_std___List_node_int__* this808;
  unsigned long __n809;
  struct std___List_node_int_* __retval810;
  this808 = v805;
  __n809 = v806;
  struct std__allocator_std___List_node_int__* t811 = this808;
    _Bool r812 = std____is_constant_evaluated();
    if (r812) {
        unsigned long t813 = __n809;
        unsigned long c814 = 24;
        unsigned long ovr815;
        _Bool ovf816 = __builtin_mul_overflow(t813, c814, &ovr815);
        __n809 = ovr815;
        if (ovf816) {
          std____throw_bad_array_new_length();
        }
      unsigned long t817 = __n809;
      void* r818 = operator_new(t817);
      struct std___List_node_int_* cast819 = (struct std___List_node_int_*)r818;
      __retval810 = cast819;
      struct std___List_node_int_* t820 = __retval810;
      return t820;
    }
  struct std____new_allocator_std___List_node_int__* base821 = (struct std____new_allocator_std___List_node_int__*)((char *)t811 + 0);
  unsigned long t822 = __n809;
  void* c823 = ((void*)0);
  struct std___List_node_int_* r824 = std____new_allocator_std___List_node_int_____allocate(base821, t822, c823);
  __retval810 = r824;
  struct std___List_node_int_* t825 = __retval810;
  return t825;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v826, unsigned long v827) {
bb828: ;
  struct std__allocator_std___List_node_int__* __a829;
  unsigned long __n830;
  struct std___List_node_int_* __retval831;
  __a829 = v826;
  __n830 = v827;
  struct std__allocator_std___List_node_int__* t832 = __a829;
  unsigned long t833 = __n830;
  struct std___List_node_int_* r834 = std__allocator_std___List_node_int_____allocate(t832, t833);
  __retval831 = r834;
  struct std___List_node_int_* t835 = __retval831;
  return t835;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v836, struct std__allocator_std___List_node_int__* v837, struct std___List_node_int_* v838) {
bb839: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this840;
  struct std__allocator_std___List_node_int__* __a841;
  struct std___List_node_int_* __ptr842;
  this840 = v836;
  __a841 = v837;
  __ptr842 = v838;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t843 = this840;
  struct std__allocator_std___List_node_int__* t844 = __a841;
  t843->_M_alloc = t844;
  struct std___List_node_int_* t845 = __ptr842;
  t843->_M_ptr = t845;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v846) {
bb847: ;
  struct std__allocator_std___List_node_int__* __a848;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval849;
  __a848 = v846;
  struct std__allocator_std___List_node_int__* t850 = __a848;
  struct std__allocator_std___List_node_int__* t851 = __a848;
  unsigned long c852 = 1;
  struct std___List_node_int_* r853 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t851, c852);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval849, t850, r853);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t854 = __retval849;
  return t854;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v855, struct std____allocated_ptr_std__allocator_std___List_node_int___* v856) {
bb857: ;
  struct std____allocated_obj_std__allocator_std___List_node_int___* this858;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr859;
  this858 = v855;
  __ptr859 = v856;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t860 = this858;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base861 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t860 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t862 = __ptr859;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base861, t862);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base863 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t860 + 0);
    struct std___List_node_int_* r864 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base863);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v865) {
bb866: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this867;
  this867 = v865;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t868 = this867;
    struct std___List_node_int_* t869 = t868->_M_ptr;
    struct std___List_node_int_* c870 = ((void*)0);
    _Bool c871 = ((t869 != c870)) ? 1 : 0;
    if (c871) {
      struct std__allocator_std___List_node_int__* t872 = t868->_M_alloc;
      struct std___List_node_int_* t873 = t868->_M_ptr;
      unsigned long c874 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t872, t873, c874);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v875) {
bb876: ;
  struct std__allocator_std___List_node_int__* __a877;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval878;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0879;
  __a877 = v875;
  struct std__allocator_std___List_node_int__* t880 = __a877;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r881 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t880);
  ref_tmp0879 = r881;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval878, &ref_tmp0879);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0879);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t882 = __retval878;
  return t882;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v883, int* v884) {
bb885: ;
  int* __location886;
  int* __args887;
  int* __retval888;
  void* __loc889;
  __location886 = v883;
  __args887 = v884;
  int* t890 = __location886;
  void* cast891 = (void*)t890;
  __loc889 = cast891;
    void* t892 = __loc889;
    int* cast893 = (int*)t892;
    int* t894 = __args887;
    int t895 = *t894;
    *cast893 = t895;
    __retval888 = cast893;
    int* t896 = __retval888;
    return t896;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v897, int* v898, int* v899) {
bb900: ;
  struct std__allocator_std___List_node_int__* __a901;
  int* __p902;
  int* __args903;
  __a901 = v897;
  __p902 = v898;
  __args903 = v899;
  int* t904 = __p902;
  int* t905 = __args903;
  int* r906 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t904, t905);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v907) {
bb908: ;
  struct std____allocated_obj_std__allocator_std___List_node_int___* this909;
  struct std___List_node_int_* __retval910;
  this909 = v907;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t911 = this909;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base912 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t911 + 0);
  struct std___List_node_int_* r913 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base912);
  __retval910 = r913;
  struct std___List_node_int_* t914 = __retval910;
  return t914;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v915, void** v916) {
bb917: ;
  struct std___List_node_int_** __obj918;
  void** __new_val919;
  struct std___List_node_int_* __retval920;
  struct std___List_node_int_* __old_val921;
  __obj918 = v915;
  __new_val919 = v916;
  struct std___List_node_int_** t922 = __obj918;
  struct std___List_node_int_* t923 = *t922;
  __old_val921 = t923;
  void** t924 = __new_val919;
  struct std___List_node_int_* c925 = ((void*)0);
  struct std___List_node_int_** t926 = __obj918;
  *t926 = c925;
  struct std___List_node_int_* t927 = __old_val921;
  __retval920 = t927;
  struct std___List_node_int_* t928 = __retval920;
  return t928;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v929) {
bb930: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this931;
  struct std___List_node_int_* __retval932;
  void* ref_tmp0933;
  this931 = v929;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t934 = this931;
  void* c935 = ((void*)0);
  ref_tmp0933 = c935;
  struct std___List_node_int_* r936 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t934->_M_ptr, &ref_tmp0933);
  __retval932 = r936;
  struct std___List_node_int_* t937 = __retval932;
  return t937;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v938) {
bb939: ;
  struct std____allocated_obj_std__allocator_std___List_node_int___* this940;
  this940 = v938;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t941 = this940;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base942 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t941 + 0);
      _Bool r943 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base942);
      if (r943) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base944 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t941 + 0);
        struct std___List_node_int_* r945 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base944);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base946 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t941 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base946);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v947, int* v948) {
bb949: ;
  struct std____cxx11__list_int__std__allocator_int__* this950;
  int* __args951;
  struct std___List_node_int_* __retval952;
  struct std__allocator_std___List_node_int__* __alloc953;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard954;
  this950 = v947;
  __args951 = v948;
  struct std____cxx11__list_int__std__allocator_int__* t955 = this950;
  struct std____cxx11___List_base_int__std__allocator_int__* base956 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t955 + 0);
  struct std__allocator_std___List_node_int__* r957 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base956);
  __alloc953 = r957;
  struct std__allocator_std___List_node_int__* t958 = __alloc953;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r959 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t958);
  __guard954 = r959;
    struct std__allocator_std___List_node_int__* t960 = __alloc953;
    struct std___List_node_int_* r961 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard954);
    int* r962 = std___List_node_int____M_valptr(r961);
    int* t963 = __args951;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t960, r962, t963);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base964 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard954) + 0);
    struct std___List_node_int_* r965 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base964);
    __retval952 = r965;
    struct std___List_node_int_* t966 = __retval952;
    struct std___List_node_int_* ret_val967 = t966;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard954);
    }
    return ret_val967;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v968, unsigned long v969) {
bb970: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this971;
  unsigned long __n972;
  this971 = v968;
  __n972 = v969;
  struct std____cxx11___List_base_int__std__allocator_int__* t973 = this971;
  unsigned long t974 = __n972;
  struct std____detail___List_size* base975 = (struct std____detail___List_size*)((char *)&(t973->_M_impl._M_node) + 16);
  unsigned long t976 = base975->_M_size;
  unsigned long b977 = t976 + t974;
  base975->_M_size = b977;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v978, struct std___List_iterator_int_ v979, int* v980) {
bb981: ;
  struct std____cxx11__list_int__std__allocator_int__* this982;
  struct std___List_iterator_int_ __position983;
  int* __args984;
  struct std___List_node_int_* __tmp985;
  this982 = v978;
  __position983 = v979;
  __args984 = v980;
  struct std____cxx11__list_int__std__allocator_int__* t986 = this982;
  int* t987 = __args984;
  struct std___List_node_int_* r988 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t986, t987);
  __tmp985 = r988;
  struct std___List_node_int_* t989 = __tmp985;
  struct std____detail___List_node_base* base990 = (struct std____detail___List_node_base*)((char *)t989 + 0);
  struct std____detail___List_node_base* t991 = __position983._M_node;
  std____detail___List_node_base___M_hook(base990, t991);
  struct std____cxx11___List_base_int__std__allocator_int__* base992 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t986 + 0);
  unsigned long c993 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base992, c993);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v994, int* v995) {
bb996: ;
  struct std____cxx11__list_int__std__allocator_int__* this997;
  int* __x998;
  struct std___List_iterator_int_ agg_tmp0999;
  this997 = v994;
  __x998 = v995;
  struct std____cxx11__list_int__std__allocator_int__* t1000 = this997;
  struct std___List_iterator_int_ r1001 = std____cxx11__list_int__std__allocator_int_____end(t1000);
  agg_tmp0999 = r1001;
  int* t1002 = __x998;
  struct std___List_iterator_int_ t1003 = agg_tmp0999;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t1000, t1003, t1002);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_fill_initializeEmRKi
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* v1004, unsigned long v1005, int* v1006) {
bb1007: ;
  struct std____cxx11__list_int__std__allocator_int__* this1008;
  unsigned long __n1009;
  int* __x1010;
  this1008 = v1004;
  __n1009 = v1005;
  __x1010 = v1006;
  struct std____cxx11__list_int__std__allocator_int__* t1011 = this1008;
    while (1) {
      unsigned long t1013 = __n1009;
      _Bool cast1014 = (_Bool)t1013;
      if (!cast1014) break;
      int* t1015 = __x1010;
      std____cxx11__list_int__std__allocator_int_____push_back(t1011, t1015);
    for_step1012: ;
      unsigned long t1016 = __n1009;
      unsigned long u1017 = t1016 - 1;
      __n1009 = u1017;
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v1018, struct std____new_allocator_std___List_node_int__* v1019) {
bb1020: ;
  struct std____new_allocator_std___List_node_int__* this1021;
  struct std____new_allocator_std___List_node_int__* unnamed1022;
  this1021 = v1018;
  unnamed1022 = v1019;
  struct std____new_allocator_std___List_node_int__* t1023 = this1021;
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1024, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1025) {
bb1026: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1027;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd1028;
  this1027 = v1024;
  __gd1028 = v1025;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1029 = this1027;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1030 = __gd1028;
  struct std__allocator_std___List_node_int__* t1031 = t1030->_M_alloc;
  t1029->_M_alloc = t1031;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1032 = __gd1028;
  struct std___List_node_int_* t1033 = t1032->_M_ptr;
  t1029->_M_ptr = t1033;
  struct std___List_node_int_* c1034 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1035 = __gd1028;
  t1035->_M_ptr = c1034;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v1036) {
bb1037: ;
  struct std___List_node_int_* __ptr1038;
  struct std___List_node_int_* __retval1039;
  __ptr1038 = v1036;
  struct std___List_node_int_* t1040 = __ptr1038;
  __retval1039 = t1040;
  struct std___List_node_int_* t1041 = __retval1039;
  return t1041;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v1042) {
bb1043: ;
  struct std___List_node_int_** __ptr1044;
  struct std___List_node_int_* __retval1045;
  __ptr1044 = v1042;
  struct std___List_node_int_** t1046 = __ptr1044;
  struct std___List_node_int_* t1047 = *t1046;
  struct std___List_node_int_* r1048 = std___List_node_int___std__to_address_std___List_node_int___(t1047);
  __retval1045 = r1048;
  struct std___List_node_int_* t1049 = __retval1045;
  return t1049;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1050) {
bb1051: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1052;
  struct std___List_node_int_* __retval1053;
  this1052 = v1050;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1054 = this1052;
  struct std___List_node_int_* r1055 = auto_std____to_address_std___List_node_int___(&t1054->_M_ptr);
  __retval1053 = r1055;
  struct std___List_node_int_* t1056 = __retval1053;
  return t1056;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1057) {
bb1058: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1059;
  _Bool __retval1060;
  this1059 = v1057;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1061 = this1059;
  struct std___List_node_int_* t1062 = t1061->_M_ptr;
  _Bool cast1063 = (_Bool)t1062;
  __retval1060 = cast1063;
  _Bool t1064 = __retval1060;
  return t1064;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1065, int* v1066) {
bb1067: ;
  int* __location1068;
  int* __args1069;
  int* __retval1070;
  void* __loc1071;
  __location1068 = v1065;
  __args1069 = v1066;
  int* t1072 = __location1068;
  void* cast1073 = (void*)t1072;
  __loc1071 = cast1073;
    void* t1074 = __loc1071;
    int* cast1075 = (int*)t1074;
    int* t1076 = __args1069;
    int t1077 = *t1076;
    *cast1075 = t1077;
    __retval1070 = cast1075;
    int* t1078 = __retval1070;
    return t1078;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(struct std__allocator_std___List_node_int__* v1079, int* v1080, int* v1081) {
bb1082: ;
  struct std__allocator_std___List_node_int__* __a1083;
  int* __p1084;
  int* __args1085;
  __a1083 = v1079;
  __p1084 = v1080;
  __args1085 = v1081;
  int* t1086 = __p1084;
  int* t1087 = __args1085;
  int* r1088 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1086, t1087);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(struct std____cxx11__list_int__std__allocator_int__* v1089, int* v1090) {
bb1091: ;
  struct std____cxx11__list_int__std__allocator_int__* this1092;
  int* __args1093;
  struct std___List_node_int_* __retval1094;
  struct std__allocator_std___List_node_int__* __alloc1095;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard1096;
  this1092 = v1089;
  __args1093 = v1090;
  struct std____cxx11__list_int__std__allocator_int__* t1097 = this1092;
  struct std____cxx11___List_base_int__std__allocator_int__* base1098 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1097 + 0);
  struct std__allocator_std___List_node_int__* r1099 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1098);
  __alloc1095 = r1099;
  struct std__allocator_std___List_node_int__* t1100 = __alloc1095;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r1101 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t1100);
  __guard1096 = r1101;
    struct std__allocator_std___List_node_int__* t1102 = __alloc1095;
    struct std___List_node_int_* r1103 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard1096);
    int* r1104 = std___List_node_int____M_valptr(r1103);
    int* t1105 = __args1093;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int__(t1102, r1104, t1105);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1106 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard1096) + 0);
    struct std___List_node_int_* r1107 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base1106);
    __retval1094 = r1107;
    struct std___List_node_int_* t1108 = __retval1094;
    struct std___List_node_int_* ret_val1109 = t1108;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1096);
    }
    return ret_val1109;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int__(struct std____cxx11__list_int__std__allocator_int__* v1110, struct std___List_iterator_int_ v1111, int* v1112) {
bb1113: ;
  struct std____cxx11__list_int__std__allocator_int__* this1114;
  struct std___List_iterator_int_ __position1115;
  int* __args1116;
  struct std___List_node_int_* __tmp1117;
  this1114 = v1110;
  __position1115 = v1111;
  __args1116 = v1112;
  struct std____cxx11__list_int__std__allocator_int__* t1118 = this1114;
  int* t1119 = __args1116;
  struct std___List_node_int_* r1120 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int__(t1118, t1119);
  __tmp1117 = r1120;
  struct std___List_node_int_* t1121 = __tmp1117;
  struct std____detail___List_node_base* base1122 = (struct std____detail___List_node_base*)((char *)t1121 + 0);
  struct std____detail___List_node_base* t1123 = __position1115._M_node;
  std____detail___List_node_base___M_hook(base1122, t1123);
  struct std____cxx11___List_base_int__std__allocator_int__* base1124 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1118 + 0);
  unsigned long c1125 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1124, c1125);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRiEEES4_DpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(struct std____cxx11__list_int__std__allocator_int__* v1126, int* v1127) {
bb1128: ;
  struct std____cxx11__list_int__std__allocator_int__* this1129;
  int* __args1130;
  int* __retval1131;
  struct std___List_iterator_int_ agg_tmp01132;
  this1129 = v1126;
  __args1130 = v1127;
  struct std____cxx11__list_int__std__allocator_int__* t1133 = this1129;
  struct std___List_iterator_int_ r1134 = std____cxx11__list_int__std__allocator_int_____end(t1133);
  agg_tmp01132 = r1134;
  int* t1135 = __args1130;
  struct std___List_iterator_int_ t1136 = agg_tmp01132;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int__(t1133, t1136, t1135);
  int* r1137 = std____cxx11__list_int__std__allocator_int_____back(t1133);
  __retval1131 = r1137;
  int* t1138 = __retval1131;
  return t1138;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchISt14_List_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v1139, struct std___List_iterator_int_ v1140, struct std___List_iterator_int_ v1141, struct std____false_type v1142) {
bb1143: ;
  struct std____cxx11__list_int__std__allocator_int__* this1144;
  struct std___List_iterator_int_ __first1145;
  struct std___List_iterator_int_ __last1146;
  struct std____false_type unnamed1147;
  _Bool __notempty1148;
  this1144 = v1139;
  __first1145 = v1140;
  __last1146 = v1141;
  unnamed1147 = v1142;
  struct std____cxx11__list_int__std__allocator_int__* t1149 = this1144;
  _Bool r1150 = std__operator__(&__first1145, &__last1146);
  _Bool u1151 = !r1150;
  __notempty1148 = u1151;
    while (1) {
      _Bool r1153 = std__operator__(&__first1145, &__last1146);
      _Bool u1154 = !r1153;
      if (!u1154) break;
      int* r1155 = std___List_iterator_int___operator____const(&__first1145);
      int* r1156 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t1149, r1155);
    for_step1152: ;
      struct std___List_iterator_int_* r1157 = std___List_iterator_int___operator___3(&__first1145);
    }
    _Bool t1158 = __notempty1148;
    if (t1158) {
        struct std___List_iterator_int_ ref_tmp01159;
        struct std___List_iterator_int_ ref_tmp11160;
        struct std___List_iterator_int_ r1161 = std____cxx11__list_int__std__allocator_int_____begin(t1149);
        ref_tmp01159 = r1161;
        struct std___List_iterator_int_ r1162 = std____cxx11__list_int__std__allocator_int_____end(t1149);
        ref_tmp11160 = r1162;
        _Bool r1163 = std__operator__(&ref_tmp01159, &ref_tmp11160);
        if (r1163) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v1164, struct std__allocator_std___List_node_int__* v1165) {
bb1166: ;
  struct std__allocator_std___List_node_int__* this1167;
  struct std__allocator_std___List_node_int__* __a1168;
  this1167 = v1164;
  __a1168 = v1165;
  struct std__allocator_std___List_node_int__* t1169 = this1167;
  struct std____new_allocator_std___List_node_int__* base1170 = (struct std____new_allocator_std___List_node_int__*)((char *)t1169 + 0);
  struct std__allocator_std___List_node_int__* t1171 = __a1168;
  struct std____new_allocator_std___List_node_int__* base1172 = (struct std____new_allocator_std___List_node_int__*)((char *)t1171 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base1170, base1172);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE37select_on_container_copy_constructionERKS2_
struct std__allocator_std___List_node_int__ std__allocator_traits_std__allocator_std___List_node_int_______select_on_container_copy_construction(struct std__allocator_std___List_node_int__* v1173) {
bb1174: ;
  struct std__allocator_std___List_node_int__* __rhs1175;
  struct std__allocator_std___List_node_int__ __retval1176;
  __rhs1175 = v1173;
  struct std__allocator_std___List_node_int__* t1177 = __rhs1175;
  std__allocator_std___List_node_int_____allocator(&__retval1176, t1177);
  struct std__allocator_std___List_node_int__ t1178 = __retval1176;
  return t1178;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaISt10_List_nodeIiEES2_E17_S_select_on_copyERKS3_
struct std__allocator_std___List_node_int__ __gnu_cxx____alloc_traits_std__allocator_std___List_node_int_____std___List_node_int______S_select_on_copy(struct std__allocator_std___List_node_int__* v1179) {
bb1180: ;
  struct std__allocator_std___List_node_int__* __a1181;
  struct std__allocator_std___List_node_int__ __retval1182;
  __a1181 = v1179;
  struct std__allocator_std___List_node_int__* t1183 = __a1181;
  struct std__allocator_std___List_node_int__ r1184 = std__allocator_traits_std__allocator_std___List_node_int_______select_on_container_copy_construction(t1183);
  __retval1182 = r1184;
  struct std__allocator_std___List_node_int__ t1185 = __retval1182;
  return t1185;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v1186) {
bb1187: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this1188;
  struct std__allocator_std___List_node_int__* __retval1189;
  this1188 = v1186;
  struct std____cxx11___List_base_int__std__allocator_int__* t1190 = this1188;
  struct std__allocator_std___List_node_int__* base1191 = (struct std__allocator_std___List_node_int__*)((char *)&(t1190->_M_impl) + 0);
  __retval1189 = base1191;
  struct std__allocator_std___List_node_int__* t1192 = __retval1189;
  return t1192;
}

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator___2(struct std___List_const_iterator_int_* v1193, struct std___List_const_iterator_int_* v1194) {
bb1195: ;
  struct std___List_const_iterator_int_* __x1196;
  struct std___List_const_iterator_int_* __y1197;
  _Bool __retval1198;
  __x1196 = v1193;
  __y1197 = v1194;
  struct std___List_const_iterator_int_* t1199 = __x1196;
  struct std____detail___List_node_base* t1200 = t1199->_M_node;
  struct std___List_const_iterator_int_* t1201 = __y1197;
  struct std____detail___List_node_base* t1202 = t1201->_M_node;
  _Bool c1203 = ((t1200 == t1202)) ? 1 : 0;
  __retval1198 = c1203;
  _Bool t1204 = __retval1198;
  return t1204;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJRKiEEERiDpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1205, int* v1206) {
bb1207: ;
  struct std____cxx11__list_int__std__allocator_int__* this1208;
  int* __args1209;
  int* __retval1210;
  struct std___List_iterator_int_ agg_tmp01211;
  this1208 = v1205;
  __args1209 = v1206;
  struct std____cxx11__list_int__std__allocator_int__* t1212 = this1208;
  struct std___List_iterator_int_ r1213 = std____cxx11__list_int__std__allocator_int_____end(t1212);
  agg_tmp01211 = r1213;
  int* t1214 = __args1209;
  struct std___List_iterator_int_ t1215 = agg_tmp01211;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t1212, t1215, t1214);
  int* r1216 = std____cxx11__list_int__std__allocator_int_____back(t1212);
  __retval1210 = r1216;
  int* t1217 = __retval1210;
  return t1217;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v1218) {
bb1219: ;
  struct __gnu_cxx____aligned_membuf_int_* this1220;
  void* __retval1221;
  this1220 = v1218;
  struct __gnu_cxx____aligned_membuf_int_* t1222 = this1220;
  void* cast1223 = (void*)&(t1222->_M_storage);
  __retval1221 = cast1223;
  void* t1224 = __retval1221;
  return t1224;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v1225) {
bb1226: ;
  struct __gnu_cxx____aligned_membuf_int_* this1227;
  int* __retval1228;
  this1227 = v1225;
  struct __gnu_cxx____aligned_membuf_int_* t1229 = this1227;
  void* r1230 = __gnu_cxx____aligned_membuf_int____M_addr___const(t1229);
  int* cast1231 = (int*)r1230;
  __retval1228 = cast1231;
  int* t1232 = __retval1228;
  return t1232;
}

// function: _ZNKSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr___const(struct std___List_node_int_* v1233) {
bb1234: ;
  struct std___List_node_int_* this1235;
  int* __retval1236;
  this1235 = v1233;
  struct std___List_node_int_* t1237 = this1235;
  int* r1238 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t1237->_M_storage);
  __retval1236 = r1238;
  int* t1239 = __retval1236;
  return t1239;
}

// function: _ZNKSt20_List_const_iteratorIiEdeEv
int* std___List_const_iterator_int___operator____const(struct std___List_const_iterator_int_* v1240) {
bb1241: ;
  struct std___List_const_iterator_int_* this1242;
  int* __retval1243;
  this1242 = v1240;
  struct std___List_const_iterator_int_* t1244 = this1242;
  struct std____detail___List_node_base* t1245 = t1244->_M_node;
  struct std___List_node_int_* derived1246 = ((t1245) ? (struct std___List_node_int_*)((char *)t1245 - 0) : (struct std___List_node_int_*)0);
  int* r1247 = std___List_node_int____M_valptr___const(derived1246);
  __retval1243 = r1247;
  int* t1248 = __retval1243;
  return t1248;
}

// function: _ZNSt20_List_const_iteratorIiEppEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* v1249) {
bb1250: ;
  struct std___List_const_iterator_int_* this1251;
  struct std___List_const_iterator_int_* __retval1252;
  this1251 = v1249;
  struct std___List_const_iterator_int_* t1253 = this1251;
  struct std____detail___List_node_base* t1254 = t1253->_M_node;
  struct std____detail___List_node_base* t1255 = t1254->_M_next;
  t1253->_M_node = t1255;
  __retval1252 = t1253;
  struct std___List_const_iterator_int_* t1256 = __retval1252;
  return t1256;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchISt20_List_const_iteratorIiEEEvT_S6_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_std___List_const_iterator_int___(struct std____cxx11__list_int__std__allocator_int__* v1257, struct std___List_const_iterator_int_ v1258, struct std___List_const_iterator_int_ v1259, struct std____false_type v1260) {
bb1261: ;
  struct std____cxx11__list_int__std__allocator_int__* this1262;
  struct std___List_const_iterator_int_ __first1263;
  struct std___List_const_iterator_int_ __last1264;
  struct std____false_type unnamed1265;
  _Bool __notempty1266;
  this1262 = v1257;
  __first1263 = v1258;
  __last1264 = v1259;
  unnamed1265 = v1260;
  struct std____cxx11__list_int__std__allocator_int__* t1267 = this1262;
  _Bool r1268 = std__operator___2(&__first1263, &__last1264);
  _Bool u1269 = !r1268;
  __notempty1266 = u1269;
    while (1) {
      _Bool r1271 = std__operator___2(&__first1263, &__last1264);
      _Bool u1272 = !r1271;
      if (!u1272) break;
      int* r1273 = std___List_const_iterator_int___operator____const(&__first1263);
      int* r1274 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int_const__(t1267, r1273);
    for_step1270: ;
      struct std___List_const_iterator_int_* r1275 = std___List_const_iterator_int___operator__(&__first1263);
    }
    _Bool t1276 = __notempty1266;
    if (t1276) {
        struct std___List_iterator_int_ ref_tmp01277;
        struct std___List_iterator_int_ ref_tmp11278;
        struct std___List_iterator_int_ r1279 = std____cxx11__list_int__std__allocator_int_____begin(t1267);
        ref_tmp01277 = r1279;
        struct std___List_iterator_int_ r1280 = std____cxx11__list_int__std__allocator_int_____end(t1267);
        ref_tmp11278 = r1280;
        _Bool r1281 = std__operator__(&ref_tmp01277, &ref_tmp11278);
        if (r1281) {
          __builtin_unreachable();
        }
    }
  return;
}

// function: _ZNSt20_List_const_iteratorIiEC2EPKNSt8__detail15_List_node_baseE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v1282, struct std____detail___List_node_base* v1283) {
bb1284: ;
  struct std___List_const_iterator_int_* this1285;
  struct std____detail___List_node_base* __x1286;
  this1285 = v1282;
  __x1286 = v1283;
  struct std___List_const_iterator_int_* t1287 = this1285;
  struct std____detail___List_node_base* t1288 = __x1286;
  t1287->_M_node = t1288;
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5beginEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* v1289) {
bb1290: ;
  struct std____cxx11__list_int__std__allocator_int__* this1291;
  struct std___List_const_iterator_int_ __retval1292;
  this1291 = v1289;
  struct std____cxx11__list_int__std__allocator_int__* t1293 = this1291;
  struct std____cxx11___List_base_int__std__allocator_int__* base1294 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1293 + 0);
  struct std____detail___List_node_base* base1295 = (struct std____detail___List_node_base*)((char *)&(base1294->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1296 = base1295->_M_next;
  std___List_const_iterator_int____List_const_iterator(&__retval1292, t1296);
  struct std___List_const_iterator_int_ t1297 = __retval1292;
  return t1297;
}

// function: _ZNKSt7__cxx114listIiSaIiEE3endEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* v1298) {
bb1299: ;
  struct std____cxx11__list_int__std__allocator_int__* this1300;
  struct std___List_const_iterator_int_ __retval1301;
  this1300 = v1298;
  struct std____cxx11__list_int__std__allocator_int__* t1302 = this1300;
  struct std____cxx11___List_base_int__std__allocator_int__* base1303 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1302 + 0);
  struct std____detail___List_node_base* base1304 = (struct std____detail___List_node_base*)((char *)&(base1303->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r1305 = std____detail___List_node_base___M_base___const(base1304);
  std___List_const_iterator_int____List_const_iterator(&__retval1301, r1305);
  struct std___List_const_iterator_int_ t1306 = __retval1301;
  return t1306;
}

// function: _ZNSt7__cxx114listIiSaIiEE22_M_initialize_dispatchIPiEEvT_S5_St12__false_type
void void_std____cxx11__list_int__std__allocator_int______M_initialize_dispatch_int__(struct std____cxx11__list_int__std__allocator_int__* v1307, int* v1308, int* v1309, struct std____false_type v1310) {
bb1311: ;
  struct std____cxx11__list_int__std__allocator_int__* this1312;
  int* __first1313;
  int* __last1314;
  struct std____false_type unnamed1315;
  _Bool __notempty1316;
  this1312 = v1307;
  __first1313 = v1308;
  __last1314 = v1309;
  unnamed1315 = v1310;
  struct std____cxx11__list_int__std__allocator_int__* t1317 = this1312;
  int* t1318 = __first1313;
  int* t1319 = __last1314;
  _Bool c1320 = ((t1318 != t1319)) ? 1 : 0;
  __notempty1316 = c1320;
    while (1) {
      int* t1322 = __first1313;
      int* t1323 = __last1314;
      _Bool c1324 = ((t1322 != t1323)) ? 1 : 0;
      if (!c1324) break;
      int* t1325 = __first1313;
      int* r1326 = int__std____cxx11__list_int__std__allocator_int_____emplace_back_int__(t1317, t1325);
    for_step1321: ;
      int* t1327 = __first1313;
      int c1328 = 1;
      int* ptr1329 = &(t1327)[c1328];
      __first1313 = ptr1329;
    }
    _Bool t1330 = __notempty1316;
    if (t1330) {
        struct std___List_iterator_int_ ref_tmp01331;
        struct std___List_iterator_int_ ref_tmp11332;
        struct std___List_iterator_int_ r1333 = std____cxx11__list_int__std__allocator_int_____begin(t1317);
        ref_tmp01331 = r1333;
        struct std___List_iterator_int_ r1334 = std____cxx11__list_int__std__allocator_int_____end(t1317);
        ref_tmp11332 = r1334;
        _Bool r1335 = std__operator__(&ref_tmp01331, &ref_tmp11332);
        if (r1335) {
          __builtin_unreachable();
        }
    }
  return;
}

