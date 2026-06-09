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
struct std___List_const_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std__bidirectional_iterator_tag { unsigned char __field0; };
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
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[19] = "mylist.size() == 9";
char _str_1[104] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_resize/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "mylist.size() == 5";
char _str_3[19] = "mylist.size() == 8";
char _str_4[21] = "mylist.back() == 100";
char _str_5[20] = "mylist.size() == 12";
char _str_6[19] = "mylist.back() == 0";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[17] = "mylist contains:";
char _str_8[2] = " ";
char _str_9[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv[74] = "void std::list<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
void std____cxx11__list_int__std__allocator_int_____list_2(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
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
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std___List_const_iterator_int____List_const_iterator_3(struct std___List_const_iterator_int_* p0);
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator___2(struct std___List_const_iterator_int_* p0);
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* p0);
void void_std____advance_std___List_const_iterator_int___long_(struct std___List_const_iterator_int_* p0, long p1, struct std__bidirectional_iterator_tag p2);
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(struct std___List_const_iterator_int_* p0);
void void_std__advance_std___List_const_iterator_int___unsigned_long_(struct std___List_const_iterator_int_* p0, unsigned long p1);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void void_std__advance_std___List_const_iterator_int___long_(struct std___List_const_iterator_int_* p0, long p1);
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int______M_resize_pos_unsigned_long___const(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long* p1);
extern int __gxx_personality_v0();
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int_(struct std__allocator_std___List_node_int__* p0, int* p1);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node__(struct std____cxx11__list_int__std__allocator_int__* p0);
void void_std____cxx11__list_int__std__allocator_int______M_insert__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back__(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int______M_default_append(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1);
_Bool std__operator___3(struct std___List_const_iterator_int_* p0, struct std___List_const_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1);
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* p0);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std___List_const_iterator_int_ p2);
void std___List_const_iterator_int____List_const_iterator_2(struct std___List_const_iterator_int_* p0, struct std___List_iterator_int_* p1);
void std____cxx11__list_int__std__allocator_int_____resize(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* p0, struct std__allocator_std___List_node_int__* p1);
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
_Bool std__operator__(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);
extern void abort();
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* p0, struct std____cxx11__list_int__std__allocator_int__* p1);
extern void std____detail___List_node_base___M_transfer(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1, struct std____detail___List_node_base* p2);
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, struct std___List_iterator_int_ p2, struct std___List_iterator_int_ p3);
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, struct std____cxx11__list_int__std__allocator_int__* p2);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_const_iterator_int_ p1, unsigned long p2, int* p3);
void std____cxx11__list_int__std__allocator_int_____resize_2(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
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
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
_Bool std__operator___2(struct std___List_iterator_int_* p0, struct std___List_iterator_int_* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* p0);
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
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* p0, struct std__allocator_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0, struct std__allocator_std___List_node_int__* p1);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std__allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std____cxx11__list_int__std__allocator_int_____push_back_2(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0, struct std____new_allocator_std___List_node_int__* p1);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0, struct std__allocator_std___List_node_int__* p1);

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

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v5) {
bb6:
  struct std____cxx11___List_base_int__std__allocator_int__* this7;
  struct std__allocator_std___List_node_int__* __retval8;
  this7 = v5;
  struct std____cxx11___List_base_int__std__allocator_int__* t9 = this7;
  struct std__allocator_std___List_node_int__* base10 = (struct std__allocator_std___List_node_int__*)((char *)&(t9->_M_impl) + 0);
  __retval8 = base10;
  struct std__allocator_std___List_node_int__* t11 = __retval8;
  return t11;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v12) {
bb13:
  struct std____new_allocator_std___List_node_int__* this14;
  unsigned long __retval15;
  this14 = v12;
  struct std____new_allocator_std___List_node_int__* t16 = this14;
  unsigned long c17 = 9223372036854775807;
  unsigned long c18 = 24;
  unsigned long b19 = c17 / c18;
  __retval15 = b19;
  unsigned long t20 = __retval15;
  return t20;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v21, unsigned long v22, void* v23) {
bb24:
  struct std____new_allocator_std___List_node_int__* this25;
  unsigned long __n26;
  void* unnamed27;
  struct std___List_node_int_* __retval28;
  this25 = v21;
  __n26 = v22;
  unnamed27 = v23;
  struct std____new_allocator_std___List_node_int__* t29 = this25;
    unsigned long t30 = __n26;
    unsigned long r31 = std____new_allocator_std___List_node_int______M_max_size___const(t29);
    _Bool c32 = ((t30 > r31)) ? 1 : 0;
    if (c32) {
        unsigned long t33 = __n26;
        unsigned long c34 = -1;
        unsigned long c35 = 24;
        unsigned long b36 = c34 / c35;
        _Bool c37 = ((t33 > b36)) ? 1 : 0;
        if (c37) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c38 = 8;
    unsigned long c39 = 16;
    _Bool c40 = ((c38 > c39)) ? 1 : 0;
    if (c40) {
      unsigned long __al41;
      unsigned long c42 = 8;
      __al41 = c42;
      unsigned long t43 = __n26;
      unsigned long c44 = 24;
      unsigned long b45 = t43 * c44;
      unsigned long t46 = __al41;
      void* r47 = operator_new_2(b45, t46);
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_int_* cast48 = (struct std___List_node_int_*)r47;
      __retval28 = cast48;
      struct std___List_node_int_* t49 = __retval28;
      return t49;
    }
  unsigned long t50 = __n26;
  unsigned long c51 = 24;
  unsigned long b52 = t50 * c51;
  void* r53 = operator_new(b52);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___List_node_int_* cast54 = (struct std___List_node_int_*)r53;
  __retval28 = cast54;
  struct std___List_node_int_* t55 = __retval28;
  return t55;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v56, unsigned long v57) {
bb58:
  struct std__allocator_std___List_node_int__* this59;
  unsigned long __n60;
  struct std___List_node_int_* __retval61;
  this59 = v56;
  __n60 = v57;
  struct std__allocator_std___List_node_int__* t62 = this59;
    _Bool r63 = std____is_constant_evaluated();
    if (r63) {
        unsigned long t64 = __n60;
        unsigned long c65 = 24;
        unsigned long ovr66;
        _Bool ovf67 = __builtin_mul_overflow(t64, c65, &ovr66);
        __n60 = ovr66;
        if (ovf67) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t68 = __n60;
      void* r69 = operator_new(t68);
      if (__cir_exc_active) {
        struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___List_node_int_* cast70 = (struct std___List_node_int_*)r69;
      __retval61 = cast70;
      struct std___List_node_int_* t71 = __retval61;
      return t71;
    }
  struct std____new_allocator_std___List_node_int__* base72 = (struct std____new_allocator_std___List_node_int__*)((char *)t62 + 0);
  unsigned long t73 = __n60;
  void* c74 = ((void*)0);
  struct std___List_node_int_* r75 = std____new_allocator_std___List_node_int_____allocate(base72, t73, c74);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval61 = r75;
  struct std___List_node_int_* t76 = __retval61;
  return t76;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v77, unsigned long v78) {
bb79:
  struct std__allocator_std___List_node_int__* __a80;
  unsigned long __n81;
  struct std___List_node_int_* __retval82;
  __a80 = v77;
  __n81 = v78;
  struct std__allocator_std___List_node_int__* t83 = __a80;
  unsigned long t84 = __n81;
  struct std___List_node_int_* r85 = std__allocator_std___List_node_int_____allocate(t83, t84);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval82 = r85;
  struct std___List_node_int_* t86 = __retval82;
  return t86;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v87, struct std__allocator_std___List_node_int__* v88, struct std___List_node_int_* v89) {
bb90:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this91;
  struct std__allocator_std___List_node_int__* __a92;
  struct std___List_node_int_* __ptr93;
  this91 = v87;
  __a92 = v88;
  __ptr93 = v89;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t94 = this91;
  struct std__allocator_std___List_node_int__* t95 = __a92;
  t94->_M_alloc = t95;
  struct std___List_node_int_* t96 = __ptr93;
  t94->_M_ptr = t96;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v97) {
bb98:
  struct std__allocator_std___List_node_int__* __a99;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval100;
  __a99 = v97;
  struct std__allocator_std___List_node_int__* t101 = __a99;
  struct std__allocator_std___List_node_int__* t102 = __a99;
  unsigned long c103 = 1;
  struct std___List_node_int_* r104 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t102, c103);
  if (__cir_exc_active) {
    struct std____allocated_ptr_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval100, t101, r104);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t105 = __retval100;
  return t105;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v106, struct std____allocated_ptr_std__allocator_std___List_node_int___* v107) {
bb108:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this109;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr110;
  this109 = v106;
  __ptr110 = v107;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t111 = this109;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base112 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t113 = __ptr110;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base112, t113);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base114 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
    struct std___List_node_int_* r115 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base114);
    if (__cir_exc_active) {
      {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base116 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
        std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base116);
      }
      return;
    }
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v117) {
bb118:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this119;
  this119 = v117;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t120 = this119;
    struct std___List_node_int_* t121 = t120->_M_ptr;
    struct std___List_node_int_* c122 = ((void*)0);
    _Bool c123 = ((t121 != c122)) ? 1 : 0;
    if (c123) {
      struct std__allocator_std___List_node_int__* t124 = t120->_M_alloc;
      struct std___List_node_int_* t125 = t120->_M_ptr;
      unsigned long c126 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t124, t125, c126);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v127) {
bb128:
  struct std__allocator_std___List_node_int__* __a129;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval130;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0131;
  __a129 = v127;
  struct std__allocator_std___List_node_int__* t132 = __a129;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r133 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t132);
  if (__cir_exc_active) {
    struct std____allocated_obj_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0131 = r133;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval130, &ref_tmp0131);
    if (__cir_exc_active) {
      {
        std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0131);
      }
      struct std____allocated_obj_std__allocator_std___List_node_int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0131);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t134 = __retval130;
  return t134;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v135, int* v136) {
bb137:
  int* __location138;
  int* __args139;
  int* __retval140;
  void* __loc141;
  __location138 = v135;
  __args139 = v136;
  int* t142 = __location138;
  void* cast143 = (void*)t142;
  __loc141 = cast143;
    void* t144 = __loc141;
    int* cast145 = (int*)t144;
    int* t146 = __args139;
    int t147 = *t146;
    *cast145 = t147;
    __retval140 = cast145;
    int* t148 = __retval140;
    return t148;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* v149, int* v150, int* v151) {
bb152:
  struct std__allocator_std___List_node_int__* __a153;
  int* __p154;
  int* __args155;
  __a153 = v149;
  __p154 = v150;
  __args155 = v151;
  int* t156 = __p154;
  int* t157 = __args155;
  int* r158 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t156, t157);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v159) {
bb160:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this161;
  struct std___List_node_int_* __retval162;
  this161 = v159;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t163 = this161;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base164 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t163 + 0);
  struct std___List_node_int_* r165 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base164);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval162 = r165;
  struct std___List_node_int_* t166 = __retval162;
  return t166;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v167, void** v168) {
bb169:
  struct std___List_node_int_** __obj170;
  void** __new_val171;
  struct std___List_node_int_* __retval172;
  struct std___List_node_int_* __old_val173;
  __obj170 = v167;
  __new_val171 = v168;
  struct std___List_node_int_** t174 = __obj170;
  struct std___List_node_int_* t175 = *t174;
  __old_val173 = t175;
  void** t176 = __new_val171;
  struct std___List_node_int_* c177 = ((void*)0);
  struct std___List_node_int_** t178 = __obj170;
  *t178 = c177;
  struct std___List_node_int_* t179 = __old_val173;
  __retval172 = t179;
  struct std___List_node_int_* t180 = __retval172;
  return t180;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v181) {
bb182:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this183;
  struct std___List_node_int_* __retval184;
  void* ref_tmp0185;
  this183 = v181;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t186 = this183;
  void* c187 = ((void*)0);
  ref_tmp0185 = c187;
  struct std___List_node_int_* r188 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t186->_M_ptr, &ref_tmp0185);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval184 = r188;
  struct std___List_node_int_* t189 = __retval184;
  return t189;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v190) {
bb191:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this192;
  this192 = v190;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t193 = this192;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base194 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t193 + 0);
      _Bool r195 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base194);
      if (r195) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base196 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t193 + 0);
        struct std___List_node_int_* r197 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base196);
        if (__cir_exc_active) {
          {
            struct std____allocated_ptr_std__allocator_std___List_node_int___* base198 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t193 + 0);
            std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base198);
          }
          return;
        }
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base199 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t193 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base199);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* v200, int* v201) {
bb202:
  struct std____cxx11__list_int__std__allocator_int__* this203;
  int* __args204;
  struct std___List_node_int_* __retval205;
  struct std__allocator_std___List_node_int__* __alloc206;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard207;
  this203 = v200;
  __args204 = v201;
  struct std____cxx11__list_int__std__allocator_int__* t208 = this203;
  struct std____cxx11___List_base_int__std__allocator_int__* base209 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t208 + 0);
  struct std__allocator_std___List_node_int__* r210 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base209);
  __alloc206 = r210;
  struct std__allocator_std___List_node_int__* t211 = __alloc206;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r212 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t211);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __guard207 = r212;
    struct std__allocator_std___List_node_int__* t213 = __alloc206;
    struct std___List_node_int_* r214 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard207);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard207);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* r215 = std___List_node_int____M_valptr(r214);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard207);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* t216 = __args204;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(t213, r215, t216);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base217 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard207) + 0);
    struct std___List_node_int_* r218 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base217);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard207);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    __retval205 = r218;
    struct std___List_node_int_* t219 = __retval205;
    struct std___List_node_int_* ret_val220 = t219;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard207);
    }
    return ret_val220;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v221, unsigned long v222) {
bb223:
  struct std____cxx11___List_base_int__std__allocator_int__* this224;
  unsigned long __n225;
  this224 = v221;
  __n225 = v222;
  struct std____cxx11___List_base_int__std__allocator_int__* t226 = this224;
  unsigned long t227 = __n225;
  struct std____detail___List_size* base228 = (struct std____detail___List_size*)((char *)&(t226->_M_impl._M_node) + 16);
  unsigned long t229 = base228->_M_size;
  unsigned long b230 = t229 + t227;
  base228->_M_size = b230;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* v231, struct std___List_iterator_int_ v232, int* v233) {
bb234:
  struct std____cxx11__list_int__std__allocator_int__* this235;
  struct std___List_iterator_int_ __position236;
  int* __args237;
  struct std___List_node_int_* __tmp238;
  this235 = v231;
  __position236 = v232;
  __args237 = v233;
  struct std____cxx11__list_int__std__allocator_int__* t239 = this235;
  int* t240 = __args237;
  struct std___List_node_int_* r241 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(t239, t240);
  if (__cir_exc_active) {
    return;
  }
  __tmp238 = r241;
  struct std___List_node_int_* t242 = __tmp238;
  struct std____detail___List_node_base* base243 = (struct std____detail___List_node_base*)((char *)t242 + 0);
  struct std____detail___List_node_base* t244 = __position236._M_node;
  std____detail___List_node_base___M_hook(base243, t244);
  struct std____cxx11___List_base_int__std__allocator_int__* base245 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t239 + 0);
  unsigned long c246 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base245, c246);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backEOi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v247, int* v248) {
bb249:
  struct std____cxx11__list_int__std__allocator_int__* this250;
  int* __x251;
  struct std___List_iterator_int_ agg_tmp0252;
  this250 = v247;
  __x251 = v248;
  struct std____cxx11__list_int__std__allocator_int__* t253 = this250;
  struct std___List_iterator_int_ r254 = std____cxx11__list_int__std__allocator_int_____end(t253);
  agg_tmp0252 = r254;
  int* t255 = __x251;
  struct std___List_iterator_int_ t256 = agg_tmp0252;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t253, t256, t255);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v257) {
bb258:
  struct std____cxx11___List_base_int__std__allocator_int__* this259;
  unsigned long __retval260;
  this259 = v257;
  struct std____cxx11___List_base_int__std__allocator_int__* t261 = this259;
  struct std____detail___List_size* base262 = (struct std____detail___List_size*)((char *)&(t261->_M_impl._M_node) + 16);
  unsigned long t263 = base262->_M_size;
  __retval260 = t263;
  unsigned long t264 = __retval260;
  return t264;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v265) {
bb266:
  struct std____cxx11__list_int__std__allocator_int__* this267;
  unsigned long __retval268;
  this267 = v265;
  struct std____cxx11__list_int__std__allocator_int__* t269 = this267;
  struct std____cxx11___List_base_int__std__allocator_int__* base270 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t269 + 0);
  unsigned long r271 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base270);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval268 = r271;
  unsigned long t272 = __retval268;
  return t272;
}

// function: _ZNSt20_List_const_iteratorIiEC2Ev
void std___List_const_iterator_int____List_const_iterator_3(struct std___List_const_iterator_int_* v273) {
bb274:
  struct std___List_const_iterator_int_* this275;
  this275 = v273;
  struct std___List_const_iterator_int_* t276 = this275;
  struct std____detail___List_node_base* c277 = ((void*)0);
  t276->_M_node = c277;
  return;
}

// function: _ZNSt20_List_const_iteratorIiEC2EPKNSt8__detail15_List_node_baseE
void std___List_const_iterator_int____List_const_iterator(struct std___List_const_iterator_int_* v278, struct std____detail___List_node_base* v279) {
bb280:
  struct std___List_const_iterator_int_* this281;
  struct std____detail___List_node_base* __x282;
  this281 = v278;
  __x282 = v279;
  struct std___List_const_iterator_int_* t283 = this281;
  struct std____detail___List_node_base* t284 = __x282;
  t283->_M_node = t284;
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5beginEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin___const(struct std____cxx11__list_int__std__allocator_int__* v285) {
bb286:
  struct std____cxx11__list_int__std__allocator_int__* this287;
  struct std___List_const_iterator_int_ __retval288;
  this287 = v285;
  struct std____cxx11__list_int__std__allocator_int__* t289 = this287;
  struct std____cxx11___List_base_int__std__allocator_int__* base290 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t289 + 0);
  struct std____detail___List_node_base* base291 = (struct std____detail___List_node_base*)((char *)&(base290->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t292 = base291->_M_next;
  std___List_const_iterator_int____List_const_iterator(&__retval288, t292);
  struct std___List_const_iterator_int_ t293 = __retval288;
  return t293;
}

// function: _ZNSt20_List_const_iteratorIiEaSEOS0_
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator_(struct std___List_const_iterator_int_* v294, struct std___List_const_iterator_int_* v295) {
bb296:
  struct std___List_const_iterator_int_* this297;
  struct std___List_const_iterator_int_* unnamed298;
  struct std___List_const_iterator_int_* __retval299;
  this297 = v294;
  unnamed298 = v295;
  struct std___List_const_iterator_int_* t300 = this297;
  struct std___List_const_iterator_int_* t301 = unnamed298;
  struct std____detail___List_node_base* t302 = t301->_M_node;
  t300->_M_node = t302;
  __retval299 = t300;
  struct std___List_const_iterator_int_* t303 = __retval299;
  return t303;
}

// function: _ZNSt20_List_const_iteratorIiEppEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator___2(struct std___List_const_iterator_int_* v304) {
bb305:
  struct std___List_const_iterator_int_* this306;
  struct std___List_const_iterator_int_* __retval307;
  this306 = v304;
  struct std___List_const_iterator_int_* t308 = this306;
  struct std____detail___List_node_base* t309 = t308->_M_node;
  struct std____detail___List_node_base* t310 = t309->_M_next;
  t308->_M_node = t310;
  __retval307 = t308;
  struct std___List_const_iterator_int_* t311 = __retval307;
  return t311;
}

// function: _ZNSt20_List_const_iteratorIiEmmEv
struct std___List_const_iterator_int_* std___List_const_iterator_int___operator__(struct std___List_const_iterator_int_* v312) {
bb313:
  struct std___List_const_iterator_int_* this314;
  struct std___List_const_iterator_int_* __retval315;
  this314 = v312;
  struct std___List_const_iterator_int_* t316 = this314;
  struct std____detail___List_node_base* t317 = t316->_M_node;
  struct std____detail___List_node_base* t318 = t317->_M_prev;
  t316->_M_node = t318;
  __retval315 = t316;
  struct std___List_const_iterator_int_* t319 = __retval315;
  return t319;
}

// function: _ZSt9__advanceISt20_List_const_iteratorIiElEvRT_T0_St26bidirectional_iterator_tag
void void_std____advance_std___List_const_iterator_int___long_(struct std___List_const_iterator_int_* v320, long v321, struct std__bidirectional_iterator_tag v322) {
bb323:
  struct std___List_const_iterator_int_* __i324;
  long __n325;
  struct std__bidirectional_iterator_tag unnamed326;
  __i324 = v320;
  __n325 = v321;
  unnamed326 = v322;
    long t327 = __n325;
    long c328 = 0;
    _Bool c329 = ((t327 > c328)) ? 1 : 0;
    if (c329) {
        while (1) {
          long t330 = __n325;
          long u331 = t330 - 1;
          __n325 = u331;
          _Bool cast332 = (_Bool)t330;
          if (!cast332) break;
          struct std___List_const_iterator_int_* t333 = __i324;
          struct std___List_const_iterator_int_* r334 = std___List_const_iterator_int___operator___2(t333);
        }
    } else {
        while (1) {
          long t335 = __n325;
          long u336 = t335 + 1;
          __n325 = u336;
          _Bool cast337 = (_Bool)t335;
          if (!cast337) break;
          struct std___List_const_iterator_int_* t338 = __i324;
          struct std___List_const_iterator_int_* r339 = std___List_const_iterator_int___operator__(t338);
        }
    }
  return;
}

// function: _ZSt19__iterator_categoryISt20_List_const_iteratorIiEENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__bidirectional_iterator_tag std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(struct std___List_const_iterator_int_* v340) {
bb341:
  struct std___List_const_iterator_int_* unnamed342;
  struct std__bidirectional_iterator_tag __retval343;
  unnamed342 = v340;
  struct std__bidirectional_iterator_tag t344 = __retval343;
  return t344;
}

// function: _ZSt7advanceISt20_List_const_iteratorIiEmEvRT_T0_
void void_std__advance_std___List_const_iterator_int___unsigned_long_(struct std___List_const_iterator_int_* v345, unsigned long v346) {
bb347:
  struct std___List_const_iterator_int_* __i348;
  unsigned long __n349;
  long __d350;
  struct std__bidirectional_iterator_tag agg_tmp0351;
  __i348 = v345;
  __n349 = v346;
  unsigned long t352 = __n349;
  long cast353 = (long)t352;
  __d350 = cast353;
  struct std___List_const_iterator_int_* t354 = __i348;
  long t355 = __d350;
  struct std___List_const_iterator_int_* t356 = __i348;
  struct std__bidirectional_iterator_tag r357 = std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(t356);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0351 = r357;
  struct std__bidirectional_iterator_tag t358 = agg_tmp0351;
  void_std____advance_std___List_const_iterator_int___long_(t354, t355, t358);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v359) {
bb360:
  struct std____detail___List_node_base* this361;
  struct std____detail___List_node_base* __retval362;
  this361 = v359;
  struct std____detail___List_node_base* t363 = this361;
  __retval362 = t363;
  struct std____detail___List_node_base* t364 = __retval362;
  return t364;
}

// function: _ZNKSt7__cxx114listIiSaIiEE3endEv
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int_____end___const(struct std____cxx11__list_int__std__allocator_int__* v365) {
bb366:
  struct std____cxx11__list_int__std__allocator_int__* this367;
  struct std___List_const_iterator_int_ __retval368;
  this367 = v365;
  struct std____cxx11__list_int__std__allocator_int__* t369 = this367;
  struct std____cxx11___List_base_int__std__allocator_int__* base370 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t369 + 0);
  struct std____detail___List_node_base* base371 = (struct std____detail___List_node_base*)((char *)&(base370->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r372 = std____detail___List_node_base___M_base___const(base371);
  if (__cir_exc_active) {
    struct std___List_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_const_iterator_int____List_const_iterator(&__retval368, r372);
  struct std___List_const_iterator_int_ t373 = __retval368;
  return t373;
}

// function: _ZSt7advanceISt20_List_const_iteratorIiElEvRT_T0_
void void_std__advance_std___List_const_iterator_int___long_(struct std___List_const_iterator_int_* v374, long v375) {
bb376:
  struct std___List_const_iterator_int_* __i377;
  long __n378;
  long __d379;
  struct std__bidirectional_iterator_tag agg_tmp0380;
  __i377 = v374;
  __n378 = v375;
  long t381 = __n378;
  __d379 = t381;
  struct std___List_const_iterator_int_* t382 = __i377;
  long t383 = __d379;
  struct std___List_const_iterator_int_* t384 = __i377;
  struct std__bidirectional_iterator_tag r385 = std__iterator_traits_std___List_const_iterator_int_____iterator_category_std____iterator_category_std___List_const_iterator_int___(t384);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0380 = r385;
  struct std__bidirectional_iterator_tag t386 = agg_tmp0380;
  void_std____advance_std___List_const_iterator_int___long_(t382, t383, t386);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE13_M_resize_posERm
struct std___List_const_iterator_int_ std____cxx11__list_int__std__allocator_int______M_resize_pos_unsigned_long___const(struct std____cxx11__list_int__std__allocator_int__* v387, unsigned long* v388) {
bb389:
  struct std____cxx11__list_int__std__allocator_int__* this390;
  unsigned long* __new_size391;
  struct std___List_const_iterator_int_ __retval392;
  unsigned long __len393;
  this390 = v387;
  __new_size391 = v388;
  struct std____cxx11__list_int__std__allocator_int__* t394 = this390;
  std___List_const_iterator_int____List_const_iterator_3(&__retval392);
  unsigned long r395 = std____cxx11__list_int__std__allocator_int_____size___const(t394);
  __len393 = r395;
    unsigned long* t396 = __new_size391;
    unsigned long t397 = *t396;
    unsigned long t398 = __len393;
    _Bool c399 = ((t397 < t398)) ? 1 : 0;
    if (c399) {
        unsigned long* t400 = __new_size391;
        unsigned long t401 = *t400;
        unsigned long t402 = __len393;
        unsigned long c403 = 2;
        unsigned long b404 = t402 / c403;
        _Bool c405 = ((t401 <= b404)) ? 1 : 0;
        if (c405) {
          struct std___List_const_iterator_int_ ref_tmp0406;
          struct std___List_const_iterator_int_ r407 = std____cxx11__list_int__std__allocator_int_____begin___const(t394);
          ref_tmp0406 = r407;
          struct std___List_const_iterator_int_* r408 = std___List_const_iterator_int___operator_(&__retval392, &ref_tmp0406);
          unsigned long* t409 = __new_size391;
          unsigned long t410 = *t409;
          void_std__advance_std___List_const_iterator_int___unsigned_long_(&__retval392, t410);
          if (__cir_exc_active) {
            struct std___List_const_iterator_int_ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
        } else {
          struct std___List_const_iterator_int_ ref_tmp1411;
          long __num_erase412;
          struct std___List_const_iterator_int_ r413 = std____cxx11__list_int__std__allocator_int_____end___const(t394);
          ref_tmp1411 = r413;
          struct std___List_const_iterator_int_* r414 = std___List_const_iterator_int___operator_(&__retval392, &ref_tmp1411);
          unsigned long t415 = __len393;
          unsigned long* t416 = __new_size391;
          unsigned long t417 = *t416;
          unsigned long b418 = t415 - t417;
          long cast419 = (long)b418;
          __num_erase412 = cast419;
          long t420 = __num_erase412;
          long u421 = -t420;
          void_std__advance_std___List_const_iterator_int___long_(&__retval392, u421);
          if (__cir_exc_active) {
            struct std___List_const_iterator_int_ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
        }
      unsigned long c422 = 0;
      unsigned long* t423 = __new_size391;
      *t423 = c422;
      struct std___List_const_iterator_int_ t424 = __retval392;
      return t424;
    } else {
      struct std___List_const_iterator_int_ ref_tmp2425;
      struct std___List_const_iterator_int_ r426 = std____cxx11__list_int__std__allocator_int_____end___const(t394);
      ref_tmp2425 = r426;
      struct std___List_const_iterator_int_* r427 = std___List_const_iterator_int___operator_(&__retval392, &ref_tmp2425);
    }
  unsigned long t428 = __len393;
  unsigned long* t429 = __new_size391;
  unsigned long t430 = *t429;
  unsigned long b431 = t430 - t428;
  *t429 = b431;
  struct std___List_const_iterator_int_ t432 = __retval392;
  return t432;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v433) {
bb434:
  int* __location435;
  int* __retval436;
  void* __loc437;
  __location435 = v433;
  int* t438 = __location435;
  void* cast439 = (void*)t438;
  __loc437 = cast439;
    void* t440 = __loc437;
    int* cast441 = (int*)t440;
    int c442 = 0;
    *cast441 = c442;
    __retval436 = cast441;
    int* t443 = __retval436;
    return t443;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int_(struct std__allocator_std___List_node_int__* v444, int* v445) {
bb446:
  struct std__allocator_std___List_node_int__* __a447;
  int* __p448;
  __a447 = v444;
  __p448 = v445;
  int* t449 = __p448;
  int* r450 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t449);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node__(struct std____cxx11__list_int__std__allocator_int__* v451) {
bb452:
  struct std____cxx11__list_int__std__allocator_int__* this453;
  struct std___List_node_int_* __retval454;
  struct std__allocator_std___List_node_int__* __alloc455;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard456;
  this453 = v451;
  struct std____cxx11__list_int__std__allocator_int__* t457 = this453;
  struct std____cxx11___List_base_int__std__allocator_int__* base458 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t457 + 0);
  struct std__allocator_std___List_node_int__* r459 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base458);
  __alloc455 = r459;
  struct std__allocator_std___List_node_int__* t460 = __alloc455;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r461 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t460);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __guard456 = r461;
    struct std__allocator_std___List_node_int__* t462 = __alloc455;
    struct std___List_node_int_* r463 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard456);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard456);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* r464 = std___List_node_int____M_valptr(r463);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard456);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int_(t462, r464);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base465 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard456) + 0);
    struct std___List_node_int_* r466 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base465);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard456);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    __retval454 = r466;
    struct std___List_node_int_* t467 = __retval454;
    struct std___List_node_int_* ret_val468 = t467;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard456);
    }
    return ret_val468;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert__(struct std____cxx11__list_int__std__allocator_int__* v469, struct std___List_iterator_int_ v470) {
bb471:
  struct std____cxx11__list_int__std__allocator_int__* this472;
  struct std___List_iterator_int_ __position473;
  struct std___List_node_int_* __tmp474;
  this472 = v469;
  __position473 = v470;
  struct std____cxx11__list_int__std__allocator_int__* t475 = this472;
  struct std___List_node_int_* r476 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node__(t475);
  if (__cir_exc_active) {
    return;
  }
  __tmp474 = r476;
  struct std___List_node_int_* t477 = __tmp474;
  struct std____detail___List_node_base* base478 = (struct std____detail___List_node_base*)((char *)t477 + 0);
  struct std____detail___List_node_base* t479 = __position473._M_node;
  std____detail___List_node_base___M_hook(base478, t479);
  struct std____cxx11___List_base_int__std__allocator_int__* base480 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t475 + 0);
  unsigned long c481 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base480, c481);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE12emplace_backIJEEERiDpOT_
int* int__std____cxx11__list_int__std__allocator_int_____emplace_back__(struct std____cxx11__list_int__std__allocator_int__* v482) {
bb483:
  struct std____cxx11__list_int__std__allocator_int__* this484;
  int* __retval485;
  struct std___List_iterator_int_ agg_tmp0486;
  this484 = v482;
  struct std____cxx11__list_int__std__allocator_int__* t487 = this484;
  struct std___List_iterator_int_ r488 = std____cxx11__list_int__std__allocator_int_____end(t487);
  agg_tmp0486 = r488;
  struct std___List_iterator_int_ t489 = agg_tmp0486;
  void_std____cxx11__list_int__std__allocator_int______M_insert__(t487, t489);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r490 = std____cxx11__list_int__std__allocator_int_____back(t487);
  __retval485 = r490;
  int* t491 = __retval485;
  return t491;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v492) {
bb493:
  struct std____cxx11__list_int__std__allocator_int__* this494;
  _Bool __retval495;
  this494 = v492;
  struct std____cxx11__list_int__std__allocator_int__* t496 = this494;
  struct std____cxx11___List_base_int__std__allocator_int__* base497 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t496 + 0);
  struct std____detail___List_node_base* base498 = (struct std____detail___List_node_base*)((char *)&(base497->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t499 = base498->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base500 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t496 + 0);
  struct std____detail___List_node_base* base501 = (struct std____detail___List_node_base*)((char *)&(base500->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r502 = std____detail___List_node_base___M_base___const(base501);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  _Bool c503 = ((t499 == r502)) ? 1 : 0;
  __retval495 = c503;
  _Bool t504 = __retval495;
  return t504;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v505, unsigned long v506) {
bb507:
  struct std____cxx11___List_base_int__std__allocator_int__* this508;
  unsigned long __n509;
  this508 = v505;
  __n509 = v506;
  struct std____cxx11___List_base_int__std__allocator_int__* t510 = this508;
  unsigned long t511 = __n509;
  struct std____detail___List_size* base512 = (struct std____detail___List_size*)((char *)&(t510->_M_impl._M_node) + 16);
  unsigned long t513 = base512->_M_size;
  unsigned long b514 = t513 - t511;
  base512->_M_size = b514;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* v515, struct std___List_iterator_int_ v516) {
bb517:
  struct std____cxx11__list_int__std__allocator_int__* this518;
  struct std___List_iterator_int_ __position519;
  struct std___List_node_int_* __n520;
  this518 = v515;
  __position519 = v516;
  struct std____cxx11__list_int__std__allocator_int__* t521 = this518;
  struct std____cxx11___List_base_int__std__allocator_int__* base522 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t521 + 0);
  unsigned long c523 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base522, c523);
  if (__cir_exc_active) {
    return;
  }
  struct std____detail___List_node_base* t524 = __position519._M_node;
  std____detail___List_node_base___M_unhook(t524);
  struct std____detail___List_node_base* t525 = __position519._M_node;
  struct std___List_node_int_* derived526 = (struct std___List_node_int_*)((char *)t525 - 0);
  __n520 = derived526;
  struct std____cxx11___List_base_int__std__allocator_int__* base527 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t521 + 0);
  struct std___List_node_int_* t528 = __n520;
  struct std___List_node_int_* r529 = std___List_node_int____M_node_ptr(t528);
  if (__cir_exc_active) {
    return;
  }
  std____cxx11___List_base_int__std__allocator_int______M_destroy_node(base527, r529);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v530, struct std____detail___List_node_base* v531) {
bb532:
  struct std___List_iterator_int_* this533;
  struct std____detail___List_node_base* __x534;
  this533 = v530;
  __x534 = v531;
  struct std___List_iterator_int_* t535 = this533;
  struct std____detail___List_node_base* t536 = __x534;
  t535->_M_node = t536;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8pop_backEv
void std____cxx11__list_int__std__allocator_int_____pop_back(struct std____cxx11__list_int__std__allocator_int__* v537) {
bb538:
  struct std____cxx11__list_int__std__allocator_int__* this539;
  struct std___List_iterator_int_ agg_tmp0540;
  this539 = v537;
  struct std____cxx11__list_int__std__allocator_int__* t541 = this539;
    do {
          _Bool r542 = std____cxx11__list_int__std__allocator_int_____empty___const(t541);
          if (r542) {
            char* cast543 = (char*)&(_str_9);
            int c544 = 1840;
            char* cast545 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE8pop_backEv);
            char* cast546 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast543, c544, cast545, cast546);
          }
      _Bool c547 = 0;
      if (!c547) break;
    } while (1);
  struct std____cxx11___List_base_int__std__allocator_int__* base548 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t541 + 0);
  struct std____detail___List_node_base* base549 = (struct std____detail___List_node_base*)((char *)&(base548->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t550 = base549->_M_prev;
  std___List_iterator_int____List_iterator(&agg_tmp0540, t550);
  struct std___List_iterator_int_ t551 = agg_tmp0540;
  std____cxx11__list_int__std__allocator_int______M_erase(t541, t551);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE17_M_default_appendEm
void std____cxx11__list_int__std__allocator_int______M_default_append(struct std____cxx11__list_int__std__allocator_int__* v552, unsigned long v553) {
bb554:
  struct std____cxx11__list_int__std__allocator_int__* this555;
  unsigned long __n556;
  unsigned long __i557;
  this555 = v552;
  __n556 = v553;
  struct std____cxx11__list_int__std__allocator_int__* t558 = this555;
  unsigned long c559 = 0;
  __i557 = c559;
        while (1) {
          unsigned long t562 = __i557;
          unsigned long t563 = __n556;
          _Bool c564 = ((t562 < t563)) ? 1 : 0;
          if (!c564) break;
          int* r565 = int__std____cxx11__list_int__std__allocator_int_____emplace_back__(t558);
          if (__cir_exc_active) {
            goto cir_try_dispatch560;
          }
        for_step561: ;
          unsigned long t566 = __i557;
          unsigned long u567 = t566 + 1;
          __i557 = u567;
        }
    cir_try_dispatch560: ;
    if (__cir_exc_active) {
    {
      int ca_tok568 = 0;
      void* ca_exn569 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
          while (1) {
            unsigned long t571 = __i557;
            _Bool cast572 = (_Bool)t571;
            if (!cast572) break;
            std____cxx11__list_int__std__allocator_int_____pop_back(t558);
          for_step570: ;
            unsigned long t573 = __i557;
            unsigned long u574 = t573 - 1;
            __i557 = u574;
          }
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

// function: _ZSteqRKSt20_List_const_iteratorIiES2_
_Bool std__operator___3(struct std___List_const_iterator_int_* v575, struct std___List_const_iterator_int_* v576) {
bb577:
  struct std___List_const_iterator_int_* __x578;
  struct std___List_const_iterator_int_* __y579;
  _Bool __retval580;
  __x578 = v575;
  __y579 = v576;
  struct std___List_const_iterator_int_* t581 = __x578;
  struct std____detail___List_node_base* t582 = t581->_M_node;
  struct std___List_const_iterator_int_* t583 = __y579;
  struct std____detail___List_node_base* t584 = t583->_M_node;
  _Bool c585 = ((t582 == t584)) ? 1 : 0;
  __retval580 = c585;
  _Bool t586 = __retval580;
  return t586;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiE
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase(struct std____cxx11__list_int__std__allocator_int__* v587, struct std___List_const_iterator_int_ v588) {
bb589:
  struct std____cxx11__list_int__std__allocator_int__* this590;
  struct std___List_const_iterator_int_ __position591;
  struct std___List_iterator_int_ __retval592;
  struct std___List_iterator_int_ agg_tmp0593;
  this590 = v587;
  __position591 = v588;
  struct std____cxx11__list_int__std__allocator_int__* t594 = this590;
  struct std____detail___List_node_base* t595 = __position591._M_node;
  struct std____detail___List_node_base* t596 = t595->_M_next;
  std___List_iterator_int____List_iterator(&__retval592, t596);
  struct std___List_iterator_int_ r597 = std___List_const_iterator_int____M_const_cast___const(&__position591);
  agg_tmp0593 = r597;
  struct std___List_iterator_int_ t598 = agg_tmp0593;
  std____cxx11__list_int__std__allocator_int______M_erase(t594, t598);
  struct std___List_iterator_int_ t599 = __retval592;
  return t599;
}

// function: _ZNKSt20_List_const_iteratorIiE13_M_const_castEv
struct std___List_iterator_int_ std___List_const_iterator_int____M_const_cast___const(struct std___List_const_iterator_int_* v600) {
bb601:
  struct std___List_const_iterator_int_* this602;
  struct std___List_iterator_int_ __retval603;
  this602 = v600;
  struct std___List_const_iterator_int_* t604 = this602;
  struct std____detail___List_node_base* t605 = t604->_M_node;
  std___List_iterator_int____List_iterator(&__retval603, t605);
  struct std___List_iterator_int_ t606 = __retval603;
  return t606;
}

// function: _ZNSt7__cxx114listIiSaIiEE5eraseESt20_List_const_iteratorIiES4_
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____erase_2(struct std____cxx11__list_int__std__allocator_int__* v607, struct std___List_const_iterator_int_ v608, struct std___List_const_iterator_int_ v609) {
bb610:
  struct std____cxx11__list_int__std__allocator_int__* this611;
  struct std___List_const_iterator_int_ __first612;
  struct std___List_const_iterator_int_ __last613;
  struct std___List_iterator_int_ __retval614;
  this611 = v607;
  __first612 = v608;
  __last613 = v609;
  struct std____cxx11__list_int__std__allocator_int__* t615 = this611;
    struct std___List_const_iterator_int_ ref_tmp0616;
    struct std___List_iterator_int_ ref_tmp1617;
    struct std___List_const_iterator_int_ agg_tmp0618;
    while (1) {
      _Bool r619 = std__operator___3(&__first612, &__last613);
      _Bool u620 = !r619;
      if (!u620) break;
      agg_tmp0618 = __first612; // copy
      struct std___List_const_iterator_int_ t621 = agg_tmp0618;
      struct std___List_iterator_int_ r622 = std____cxx11__list_int__std__allocator_int_____erase(t615, t621);
      ref_tmp1617 = r622;
      std___List_const_iterator_int____List_const_iterator_2(&ref_tmp0616, &ref_tmp1617);
      struct std___List_const_iterator_int_* r623 = std___List_const_iterator_int___operator_(&__first612, &ref_tmp0616);
    }
  struct std___List_iterator_int_ r624 = std___List_const_iterator_int____M_const_cast___const(&__last613);
  __retval614 = r624;
  struct std___List_iterator_int_ t625 = __retval614;
  return t625;
}

// function: _ZNSt20_List_const_iteratorIiEC2ERKSt14_List_iteratorIiE
void std___List_const_iterator_int____List_const_iterator_2(struct std___List_const_iterator_int_* v626, struct std___List_iterator_int_* v627) {
bb628:
  struct std___List_const_iterator_int_* this629;
  struct std___List_iterator_int_* __x630;
  this629 = v626;
  __x630 = v627;
  struct std___List_const_iterator_int_* t631 = this629;
  struct std___List_iterator_int_* t632 = __x630;
  struct std____detail___List_node_base* t633 = t632->_M_node;
  t631->_M_node = t633;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6resizeEm
void std____cxx11__list_int__std__allocator_int_____resize(struct std____cxx11__list_int__std__allocator_int__* v634, unsigned long v635) {
bb636:
  struct std____cxx11__list_int__std__allocator_int__* this637;
  unsigned long __new_size638;
  struct std___List_const_iterator_int_ __i639;
  this637 = v634;
  __new_size638 = v635;
  struct std____cxx11__list_int__std__allocator_int__* t640 = this637;
  struct std___List_const_iterator_int_ r641 = std____cxx11__list_int__std__allocator_int______M_resize_pos_unsigned_long___const(t640, &__new_size638);
  if (__cir_exc_active) {
    return;
  }
  __i639 = r641;
    unsigned long t642 = __new_size638;
    _Bool cast643 = (_Bool)t642;
    if (cast643) {
      unsigned long t644 = __new_size638;
      std____cxx11__list_int__std__allocator_int______M_default_append(t640, t644);
      if (__cir_exc_active) {
        return;
      }
    } else {
      struct std___List_const_iterator_int_ agg_tmp0645;
      struct std___List_const_iterator_int_ agg_tmp1646;
      struct std___List_iterator_int_ ref_tmp0647;
      struct std___List_iterator_int_ agg_tmp2648;
      agg_tmp0645 = __i639; // copy
      struct std___List_iterator_int_ r649 = std____cxx11__list_int__std__allocator_int_____end(t640);
      ref_tmp0647 = r649;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp1646, &ref_tmp0647);
      struct std___List_const_iterator_int_ t650 = agg_tmp0645;
      struct std___List_const_iterator_int_ t651 = agg_tmp1646;
      struct std___List_iterator_int_ r652 = std____cxx11__list_int__std__allocator_int_____erase_2(t640, t650, t651);
      agg_tmp2648 = r652;
    }
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(struct std____cxx11___List_base_int__std__allocator_int__* v653) {
bb654:
  struct std____cxx11___List_base_int__std__allocator_int__* this655;
  struct std__allocator_std___List_node_int__* __retval656;
  this655 = v653;
  struct std____cxx11___List_base_int__std__allocator_int__* t657 = this655;
  struct std__allocator_std___List_node_int__* base658 = (struct std__allocator_std___List_node_int__*)((char *)&(t657->_M_impl) + 0);
  __retval656 = base658;
  struct std__allocator_std___List_node_int__* t659 = __retval656;
  return t659;
}

// function: _ZNSaIiEC2ISt10_List_nodeIiEEERKSaIT_E
void std__allocator_int___allocator_std___List_node_int___(struct std__allocator_int_* v660, struct std__allocator_std___List_node_int__* v661) {
bb662:
  struct std__allocator_int_* this663;
  struct std__allocator_std___List_node_int__* unnamed664;
  this663 = v660;
  unnamed664 = v661;
  struct std__allocator_int_* t665 = this663;
  struct std____new_allocator_int_* base666 = (struct std____new_allocator_int_*)((char *)t665 + 0);
  std____new_allocator_int_____new_allocator(base666);
  return;
}

// function: _ZNKSt7__cxx114listIiSaIiEE13get_allocatorEv
struct std__allocator_int_ std____cxx11__list_int__std__allocator_int_____get_allocator___const(struct std____cxx11__list_int__std__allocator_int__* v667) {
bb668:
  struct std____cxx11__list_int__std__allocator_int__* this669;
  struct std__allocator_int_ __retval670;
  this669 = v667;
  struct std____cxx11__list_int__std__allocator_int__* t671 = this669;
  struct std____cxx11___List_base_int__std__allocator_int__* base672 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t671 + 0);
  struct std__allocator_std___List_node_int__* r673 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base672);
  std__allocator_int___allocator_std___List_node_int___(&__retval670, r673);
  struct std__allocator_int_ t674 = __retval670;
  return t674;
}

// function: _ZNSt7__cxx114listIiSaIiEEC2EmRKiRKS1_
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v675, unsigned long v676, int* v677, struct std__allocator_int_* v678) {
bb679:
  struct std____cxx11__list_int__std__allocator_int__* this680;
  unsigned long __n681;
  int* __value682;
  struct std__allocator_int_* __a683;
  struct std__allocator_std___List_node_int__ ref_tmp0684;
  this680 = v675;
  __n681 = v676;
  __value682 = v677;
  __a683 = v678;
  struct std____cxx11__list_int__std__allocator_int__* t685 = this680;
  struct std____cxx11___List_base_int__std__allocator_int__* base686 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t685 + 0);
  struct std__allocator_int_* t687 = __a683;
  std__allocator_std___List_node_int_____allocator_int_(&ref_tmp0684, t687);
    std____cxx11___List_base_int__std__allocator_int______List_base(base686, &ref_tmp0684);
    if (__cir_exc_active) {
      {
        std__allocator_std___List_node_int______allocator(&ref_tmp0684);
      }
      return;
    }
  {
    std__allocator_std___List_node_int______allocator(&ref_tmp0684);
  }
    unsigned long t688 = __n681;
    int* t689 = __value682;
    std____cxx11__list_int__std__allocator_int______M_fill_initialize(t685, t688, t689);
    if (__cir_exc_active) {
      {
        struct std____cxx11___List_base_int__std__allocator_int__* base690 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t685 + 0);
        std____cxx11___List_base_int__std__allocator_int_______List_base(base690);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v691) {
bb692:
  struct std__allocator_int_* this693;
  this693 = v691;
  struct std__allocator_int_* t694 = this693;
  return;
}

// function: _ZSteqRKSaISt10_List_nodeIiEES3_
_Bool std__operator__(struct std__allocator_std___List_node_int__* v695, struct std__allocator_std___List_node_int__* v696) {
bb697:
  struct std__allocator_std___List_node_int__* unnamed698;
  struct std__allocator_std___List_node_int__* unnamed699;
  _Bool __retval700;
  unnamed698 = v695;
  unnamed699 = v696;
  _Bool c701 = 1;
  __retval700 = c701;
  _Bool t702 = __retval700;
  return t702;
}

// function: _ZNSt7__cxx114listIiSaIiEE25_M_check_equal_allocatorsERKS2_
void std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(struct std____cxx11__list_int__std__allocator_int__* v703, struct std____cxx11__list_int__std__allocator_int__* v704) {
bb705:
  struct std____cxx11__list_int__std__allocator_int__* this706;
  struct std____cxx11__list_int__std__allocator_int__* __x707;
  this706 = v703;
  __x707 = v704;
  struct std____cxx11__list_int__std__allocator_int__* t708 = this706;
    struct std____cxx11___List_base_int__std__allocator_int__* base709 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t708 + 0);
    struct std__allocator_std___List_node_int__* r710 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base709);
    struct std____cxx11__list_int__std__allocator_int__* t711 = __x707;
    struct std____cxx11___List_base_int__std__allocator_int__* base712 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t711 + 0);
    struct std__allocator_std___List_node_int__* r713 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator___const(base712);
    _Bool r714 = std__operator__(r710, r713);
    _Bool u715 = !r714;
    if (u715) {
      abort();
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE11_M_transferESt14_List_iteratorIiES4_S4_
void std____cxx11__list_int__std__allocator_int______M_transfer(struct std____cxx11__list_int__std__allocator_int__* v716, struct std___List_iterator_int_ v717, struct std___List_iterator_int_ v718, struct std___List_iterator_int_ v719) {
bb720:
  struct std____cxx11__list_int__std__allocator_int__* this721;
  struct std___List_iterator_int_ __position722;
  struct std___List_iterator_int_ __first723;
  struct std___List_iterator_int_ __last724;
  this721 = v716;
  __position722 = v717;
  __first723 = v718;
  __last724 = v719;
  struct std____cxx11__list_int__std__allocator_int__* t725 = this721;
  struct std____detail___List_node_base* t726 = __position722._M_node;
  struct std____detail___List_node_base* t727 = __first723._M_node;
  struct std____detail___List_node_base* t728 = __last724._M_node;
  std____detail___List_node_base___M_transfer(t726, t727, t728);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_set_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_set_size(struct std____cxx11___List_base_int__std__allocator_int__* v729, unsigned long v730) {
bb731:
  struct std____cxx11___List_base_int__std__allocator_int__* this732;
  unsigned long __n733;
  this732 = v729;
  __n733 = v730;
  struct std____cxx11___List_base_int__std__allocator_int__* t734 = this732;
  unsigned long t735 = __n733;
  struct std____detail___List_size* base736 = (struct std____detail___List_size*)((char *)&(t734->_M_impl._M_node) + 16);
  base736->_M_size = t735;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiEOS2_
void std____cxx11__list_int__std__allocator_int_____splice(struct std____cxx11__list_int__std__allocator_int__* v737, struct std___List_const_iterator_int_ v738, struct std____cxx11__list_int__std__allocator_int__* v739) {
bb740:
  struct std____cxx11__list_int__std__allocator_int__* this741;
  struct std___List_const_iterator_int_ __position742;
  struct std____cxx11__list_int__std__allocator_int__* __x743;
  this741 = v737;
  __position742 = v738;
  __x743 = v739;
  struct std____cxx11__list_int__std__allocator_int__* t744 = this741;
    struct std____cxx11__list_int__std__allocator_int__* t745 = __x743;
    _Bool r746 = std____cxx11__list_int__std__allocator_int_____empty___const(t745);
    _Bool u747 = !r746;
    if (u747) {
      struct std___List_iterator_int_ agg_tmp0748;
      struct std___List_iterator_int_ agg_tmp1749;
      struct std___List_iterator_int_ agg_tmp2750;
      struct std____cxx11__list_int__std__allocator_int__* t751 = __x743;
      std____cxx11__list_int__std__allocator_int______M_check_equal_allocators(t744, t751);
      struct std___List_iterator_int_ r752 = std___List_const_iterator_int____M_const_cast___const(&__position742);
      agg_tmp0748 = r752;
      struct std____cxx11__list_int__std__allocator_int__* t753 = __x743;
      struct std___List_iterator_int_ r754 = std____cxx11__list_int__std__allocator_int_____begin(t753);
      agg_tmp1749 = r754;
      struct std____cxx11__list_int__std__allocator_int__* t755 = __x743;
      struct std___List_iterator_int_ r756 = std____cxx11__list_int__std__allocator_int_____end(t755);
      agg_tmp2750 = r756;
      struct std___List_iterator_int_ t757 = agg_tmp0748;
      struct std___List_iterator_int_ t758 = agg_tmp1749;
      struct std___List_iterator_int_ t759 = agg_tmp2750;
      std____cxx11__list_int__std__allocator_int______M_transfer(t744, t757, t758, t759);
      if (__cir_exc_active) {
        return;
      }
      struct std____cxx11___List_base_int__std__allocator_int__* base760 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t744 + 0);
      struct std____cxx11__list_int__std__allocator_int__* t761 = __x743;
      struct std____cxx11___List_base_int__std__allocator_int__* base762 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t761 + 0);
      unsigned long r763 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base762);
      if (__cir_exc_active) {
        return;
      }
      std____cxx11___List_base_int__std__allocator_int______M_inc_size(base760, r763);
      if (__cir_exc_active) {
        return;
      }
      struct std____cxx11__list_int__std__allocator_int__* t764 = __x743;
      struct std____cxx11___List_base_int__std__allocator_int__* base765 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t764 + 0);
      unsigned long c766 = 0;
      std____cxx11___List_base_int__std__allocator_int______M_set_size(base765, c766);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6spliceESt20_List_const_iteratorIiERS2_
void std____cxx11__list_int__std__allocator_int_____splice_2(struct std____cxx11__list_int__std__allocator_int__* v767, struct std___List_const_iterator_int_ v768, struct std____cxx11__list_int__std__allocator_int__* v769) {
bb770:
  struct std____cxx11__list_int__std__allocator_int__* this771;
  struct std___List_const_iterator_int_ __position772;
  struct std____cxx11__list_int__std__allocator_int__* __x773;
  struct std___List_const_iterator_int_ agg_tmp0774;
  this771 = v767;
  __position772 = v768;
  __x773 = v769;
  struct std____cxx11__list_int__std__allocator_int__* t775 = this771;
  agg_tmp0774 = __position772; // copy
  struct std____cxx11__list_int__std__allocator_int__* t776 = __x773;
  struct std___List_const_iterator_int_ t777 = agg_tmp0774;
  std____cxx11__list_int__std__allocator_int_____splice(t775, t777, t776);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE6insertESt20_List_const_iteratorIiEmRKi
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____insert(struct std____cxx11__list_int__std__allocator_int__* v778, struct std___List_const_iterator_int_ v779, unsigned long v780, int* v781) {
bb782:
  struct std____cxx11__list_int__std__allocator_int__* this783;
  struct std___List_const_iterator_int_ __position784;
  unsigned long __n785;
  int* __x786;
  struct std___List_iterator_int_ __retval787;
  this783 = v778;
  __position784 = v779;
  __n785 = v780;
  __x786 = v781;
  struct std____cxx11__list_int__std__allocator_int__* t788 = this783;
    unsigned long t789 = __n785;
    _Bool cast790 = (_Bool)t789;
    if (cast790) {
      struct std____cxx11__list_int__std__allocator_int__ __tmp791;
      struct std__allocator_int_ ref_tmp0792;
      struct std___List_const_iterator_int_ agg_tmp0793;
      unsigned long t794 = __n785;
      int* t795 = __x786;
      struct std__allocator_int_ r796 = std____cxx11__list_int__std__allocator_int_____get_allocator___const(t788);
      ref_tmp0792 = r796;
        std____cxx11__list_int__std__allocator_int_____list(&__tmp791, t794, t795, &ref_tmp0792);
        if (__cir_exc_active) {
          {
            std__allocator_int____allocator(&ref_tmp0792);
          }
          struct std___List_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
      {
        std__allocator_int____allocator(&ref_tmp0792);
      }
        struct std___List_iterator_int_ r797 = std____cxx11__list_int__std__allocator_int_____begin(&__tmp791);
        __retval787 = r797;
        agg_tmp0793 = __position784; // copy
        struct std___List_const_iterator_int_ t798 = agg_tmp0793;
        std____cxx11__list_int__std__allocator_int_____splice_2(t788, t798, &__tmp791);
        struct std___List_iterator_int_ t799 = __retval787;
        struct std___List_iterator_int_ ret_val800 = t799;
        {
          std____cxx11__list_int__std__allocator_int______list(&__tmp791);
        }
        return ret_val800;
    }
  struct std___List_iterator_int_ r801 = std___List_const_iterator_int____M_const_cast___const(&__position784);
  __retval787 = r801;
  struct std___List_iterator_int_ t802 = __retval787;
  return t802;
}

// function: _ZNSt7__cxx114listIiSaIiEE6resizeEmRKi
void std____cxx11__list_int__std__allocator_int_____resize_2(struct std____cxx11__list_int__std__allocator_int__* v803, unsigned long v804, int* v805) {
bb806:
  struct std____cxx11__list_int__std__allocator_int__* this807;
  unsigned long __new_size808;
  int* __x809;
  struct std___List_const_iterator_int_ __i810;
  this807 = v803;
  __new_size808 = v804;
  __x809 = v805;
  struct std____cxx11__list_int__std__allocator_int__* t811 = this807;
  struct std___List_const_iterator_int_ r812 = std____cxx11__list_int__std__allocator_int______M_resize_pos_unsigned_long___const(t811, &__new_size808);
  if (__cir_exc_active) {
    return;
  }
  __i810 = r812;
    unsigned long t813 = __new_size808;
    _Bool cast814 = (_Bool)t813;
    if (cast814) {
      struct std___List_const_iterator_int_ agg_tmp0815;
      struct std___List_iterator_int_ ref_tmp0816;
      struct std___List_iterator_int_ agg_tmp1817;
      struct std___List_iterator_int_ r818 = std____cxx11__list_int__std__allocator_int_____end(t811);
      ref_tmp0816 = r818;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp0815, &ref_tmp0816);
      unsigned long t819 = __new_size808;
      int* t820 = __x809;
      struct std___List_const_iterator_int_ t821 = agg_tmp0815;
      struct std___List_iterator_int_ r822 = std____cxx11__list_int__std__allocator_int_____insert(t811, t821, t819, t820);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp1817 = r822;
    } else {
      struct std___List_const_iterator_int_ agg_tmp2823;
      struct std___List_const_iterator_int_ agg_tmp3824;
      struct std___List_iterator_int_ ref_tmp1825;
      struct std___List_iterator_int_ agg_tmp4826;
      agg_tmp2823 = __i810; // copy
      struct std___List_iterator_int_ r827 = std____cxx11__list_int__std__allocator_int_____end(t811);
      ref_tmp1825 = r827;
      std___List_const_iterator_int____List_const_iterator_2(&agg_tmp3824, &ref_tmp1825);
      struct std___List_const_iterator_int_ t828 = agg_tmp2823;
      struct std___List_const_iterator_int_ t829 = agg_tmp3824;
      struct std___List_iterator_int_ r830 = std____cxx11__list_int__std__allocator_int_____erase_2(t811, t828, t829);
      agg_tmp4826 = r830;
    }
  return;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v831) {
bb832:
  struct std___List_iterator_int_* this833;
  struct std___List_iterator_int_* __retval834;
  this833 = v831;
  struct std___List_iterator_int_* t835 = this833;
  struct std____detail___List_node_base* t836 = t835->_M_node;
  struct std____detail___List_node_base* t837 = t836->_M_prev;
  t835->_M_node = t837;
  __retval834 = t835;
  struct std___List_iterator_int_* t838 = __retval834;
  return t838;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v839) {
bb840:
  struct std____cxx11__list_int__std__allocator_int__* this841;
  int* __retval842;
  struct std___List_iterator_int_ __tmp843;
  this841 = v839;
  struct std____cxx11__list_int__std__allocator_int__* t844 = this841;
    do {
          _Bool r845 = std____cxx11__list_int__std__allocator_int_____empty___const(t844);
          if (r845) {
            char* cast846 = (char*)&(_str_9);
            int c847 = 1674;
            char* cast848 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast849 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast846, c847, cast848, cast849);
          }
      _Bool c850 = 0;
      if (!c850) break;
    } while (1);
  struct std___List_iterator_int_ r851 = std____cxx11__list_int__std__allocator_int_____end(t844);
  __tmp843 = r851;
  struct std___List_iterator_int_* r852 = std___List_iterator_int___operator__(&__tmp843);
  int* r853 = std___List_iterator_int___operator____const(&__tmp843);
  __retval842 = r853;
  int* t854 = __retval842;
  return t854;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v855, int v856) {
bb857:
  int __a858;
  int __b859;
  int __retval860;
  __a858 = v855;
  __b859 = v856;
  int t861 = __a858;
  int t862 = __b859;
  int b863 = t861 | t862;
  __retval860 = b863;
  int t864 = __retval860;
  return t864;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v865) {
bb866:
  struct std__basic_ios_char__std__char_traits_char__* this867;
  int __retval868;
  this867 = v865;
  struct std__basic_ios_char__std__char_traits_char__* t869 = this867;
  struct std__ios_base* base870 = (struct std__ios_base*)((char *)t869 + 0);
  int t871 = base870->_M_streambuf_state;
  __retval868 = t871;
  int t872 = __retval868;
  return t872;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v873, int v874) {
bb875:
  struct std__basic_ios_char__std__char_traits_char__* this876;
  int __state877;
  this876 = v873;
  __state877 = v874;
  struct std__basic_ios_char__std__char_traits_char__* t878 = this876;
  int r879 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t878);
  if (__cir_exc_active) {
    return;
  }
  int t880 = __state877;
  int r881 = std__operator_(r879, t880);
  std__basic_ios_char__std__char_traits_char_____clear(t878, r881);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v882, char* v883) {
bb884:
  char* __c1885;
  char* __c2886;
  _Bool __retval887;
  __c1885 = v882;
  __c2886 = v883;
  char* t888 = __c1885;
  char t889 = *t888;
  int cast890 = (int)t889;
  char* t891 = __c2886;
  char t892 = *t891;
  int cast893 = (int)t892;
  _Bool c894 = ((cast890 == cast893)) ? 1 : 0;
  __retval887 = c894;
  _Bool t895 = __retval887;
  return t895;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v896) {
bb897:
  char* __p898;
  unsigned long __retval899;
  unsigned long __i900;
  __p898 = v896;
  unsigned long c901 = 0;
  __i900 = c901;
    char ref_tmp0902;
    while (1) {
      unsigned long t903 = __i900;
      char* t904 = __p898;
      char* ptr905 = &(t904)[t903];
      char c906 = 0;
      ref_tmp0902 = c906;
      _Bool r907 = __gnu_cxx__char_traits_char___eq(ptr905, &ref_tmp0902);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u908 = !r907;
      if (!u908) break;
      unsigned long t909 = __i900;
      unsigned long u910 = t909 + 1;
      __i900 = u910;
    }
  unsigned long t911 = __i900;
  __retval899 = t911;
  unsigned long t912 = __retval899;
  return t912;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v913) {
bb914:
  char* __s915;
  unsigned long __retval916;
  __s915 = v913;
    _Bool r917 = std____is_constant_evaluated();
    if (r917) {
      char* t918 = __s915;
      unsigned long r919 = __gnu_cxx__char_traits_char___length(t918);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval916 = r919;
      unsigned long t920 = __retval916;
      return t920;
    }
  char* t921 = __s915;
  unsigned long r922 = strlen(t921);
  __retval916 = r922;
  unsigned long t923 = __retval916;
  return t923;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v924, char* v925) {
bb926:
  struct std__basic_ostream_char__std__char_traits_char__* __out927;
  char* __s928;
  struct std__basic_ostream_char__std__char_traits_char__* __retval929;
  __out927 = v924;
  __s928 = v925;
    char* t930 = __s928;
    _Bool cast931 = (_Bool)t930;
    _Bool u932 = !cast931;
    if (u932) {
      struct std__basic_ostream_char__std__char_traits_char__* t933 = __out927;
      void** v934 = (void**)t933;
      void* v935 = *((void**)v934);
      unsigned char* cast936 = (unsigned char*)v935;
      long c937 = -24;
      unsigned char* ptr938 = &(cast936)[c937];
      long* cast939 = (long*)ptr938;
      long t940 = *cast939;
      unsigned char* cast941 = (unsigned char*)t933;
      unsigned char* ptr942 = &(cast941)[t940];
      struct std__basic_ostream_char__std__char_traits_char__* cast943 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr942;
      struct std__basic_ios_char__std__char_traits_char__* cast944 = (struct std__basic_ios_char__std__char_traits_char__*)cast943;
      int t945 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast944, t945);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t946 = __out927;
      char* t947 = __s928;
      char* t948 = __s928;
      unsigned long r949 = std__char_traits_char___length(t948);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast950 = (long)r949;
      struct std__basic_ostream_char__std__char_traits_char__* r951 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t946, t947, cast950);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t952 = __out927;
  __retval929 = t952;
  struct std__basic_ostream_char__std__char_traits_char__* t953 = __retval929;
  return t953;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v954) {
bb955:
  struct std____cxx11__list_int__std__allocator_int__* this956;
  struct std___List_iterator_int_ __retval957;
  this956 = v954;
  struct std____cxx11__list_int__std__allocator_int__* t958 = this956;
  struct std____cxx11___List_base_int__std__allocator_int__* base959 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t958 + 0);
  struct std____detail___List_node_base* base960 = (struct std____detail___List_node_base*)((char *)&(base959->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t961 = base960->_M_next;
  std___List_iterator_int____List_iterator(&__retval957, t961);
  struct std___List_iterator_int_ t962 = __retval957;
  return t962;
}

// function: _ZSteqRKSt14_List_iteratorIiES2_
_Bool std__operator___2(struct std___List_iterator_int_* v963, struct std___List_iterator_int_* v964) {
bb965:
  struct std___List_iterator_int_* __x966;
  struct std___List_iterator_int_* __y967;
  _Bool __retval968;
  __x966 = v963;
  __y967 = v964;
  struct std___List_iterator_int_* t969 = __x966;
  struct std____detail___List_node_base* t970 = t969->_M_node;
  struct std___List_iterator_int_* t971 = __y967;
  struct std____detail___List_node_base* t972 = t971->_M_node;
  _Bool c973 = ((t970 == t972)) ? 1 : 0;
  __retval968 = c973;
  _Bool t974 = __retval968;
  return t974;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v975) {
bb976:
  struct std____cxx11__list_int__std__allocator_int__* this977;
  struct std___List_iterator_int_ __retval978;
  this977 = v975;
  struct std____cxx11__list_int__std__allocator_int__* t979 = this977;
  struct std____cxx11___List_base_int__std__allocator_int__* base980 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t979 + 0);
  struct std____detail___List_node_base* r981 = std____detail___List_node_header___M_base(&base980->_M_impl._M_node);
  if (__cir_exc_active) {
    struct std___List_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___List_iterator_int____List_iterator(&__retval978, r981);
  struct std___List_iterator_int_ t982 = __retval978;
  return t982;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v983) {
bb984:
  struct std___List_iterator_int_* this985;
  int* __retval986;
  this985 = v983;
  struct std___List_iterator_int_* t987 = this985;
  struct std____detail___List_node_base* t988 = t987->_M_node;
  struct std___List_node_int_* derived989 = ((t988) ? (struct std___List_node_int_*)((char *)t988 - 0) : (struct std___List_node_int_*)0);
  int* r990 = std___List_node_int____M_valptr(derived989);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval986 = r990;
  int* t991 = __retval986;
  return t991;
}

// function: _ZNSt14_List_iteratorIiEppEv
struct std___List_iterator_int_* std___List_iterator_int___operator___2(struct std___List_iterator_int_* v992) {
bb993:
  struct std___List_iterator_int_* this994;
  struct std___List_iterator_int_* __retval995;
  this994 = v992;
  struct std___List_iterator_int_* t996 = this994;
  struct std____detail___List_node_base* t997 = t996->_M_node;
  struct std____detail___List_node_base* t998 = t997->_M_next;
  t996->_M_node = t998;
  __retval995 = t996;
  struct std___List_iterator_int_* t999 = __retval995;
  return t999;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1000, void* v1001) {
bb1002:
  struct std__basic_ostream_char__std__char_traits_char__* this1003;
  void* __pf1004;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1005;
  this1003 = v1000;
  __pf1004 = v1001;
  struct std__basic_ostream_char__std__char_traits_char__* t1006 = this1003;
  void* t1007 = __pf1004;
  struct std__basic_ostream_char__std__char_traits_char__* r1008 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1007)(t1006);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1005 = r1008;
  struct std__basic_ostream_char__std__char_traits_char__* t1009 = __retval1005;
  return t1009;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1010) {
bb1011:
  struct std__basic_ostream_char__std__char_traits_char__* __os1012;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1013;
  __os1012 = v1010;
  struct std__basic_ostream_char__std__char_traits_char__* t1014 = __os1012;
  struct std__basic_ostream_char__std__char_traits_char__* r1015 = std__ostream__flush(t1014);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1013 = r1015;
  struct std__basic_ostream_char__std__char_traits_char__* t1016 = __retval1013;
  return t1016;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1017) {
bb1018:
  struct std__ctype_char_* __f1019;
  struct std__ctype_char_* __retval1020;
  __f1019 = v1017;
    struct std__ctype_char_* t1021 = __f1019;
    _Bool cast1022 = (_Bool)t1021;
    _Bool u1023 = !cast1022;
    if (u1023) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t1024 = __f1019;
  __retval1020 = t1024;
  struct std__ctype_char_* t1025 = __retval1020;
  return t1025;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1026, char v1027) {
bb1028:
  struct std__ctype_char_* this1029;
  char __c1030;
  char __retval1031;
  this1029 = v1026;
  __c1030 = v1027;
  struct std__ctype_char_* t1032 = this1029;
    char t1033 = t1032->_M_widen_ok;
    _Bool cast1034 = (_Bool)t1033;
    if (cast1034) {
      char t1035 = __c1030;
      unsigned char cast1036 = (unsigned char)t1035;
      unsigned long cast1037 = (unsigned long)cast1036;
      char t1038 = t1032->_M_widen[cast1037];
      __retval1031 = t1038;
      char t1039 = __retval1031;
      return t1039;
    }
  std__ctype_char____M_widen_init___const(t1032);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1040 = __c1030;
  void** v1041 = (void**)t1032;
  void* v1042 = *((void**)v1041);
  char vcall1045 = (char)__VERIFIER_virtual_call_char_char(t1032, 6, t1040);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1031 = vcall1045;
  char t1046 = __retval1031;
  return t1046;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1047, char v1048) {
bb1049:
  struct std__basic_ios_char__std__char_traits_char__* this1050;
  char __c1051;
  char __retval1052;
  this1050 = v1047;
  __c1051 = v1048;
  struct std__basic_ios_char__std__char_traits_char__* t1053 = this1050;
  struct std__ctype_char_* t1054 = t1053->_M_ctype;
  struct std__ctype_char_* r1055 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1054);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1056 = __c1051;
  char r1057 = std__ctype_char___widen_char__const(r1055, t1056);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1052 = r1057;
  char t1058 = __retval1052;
  return t1058;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1059) {
bb1060:
  struct std__basic_ostream_char__std__char_traits_char__* __os1061;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1062;
  __os1061 = v1059;
  struct std__basic_ostream_char__std__char_traits_char__* t1063 = __os1061;
  struct std__basic_ostream_char__std__char_traits_char__* t1064 = __os1061;
  void** v1065 = (void**)t1064;
  void* v1066 = *((void**)v1065);
  unsigned char* cast1067 = (unsigned char*)v1066;
  long c1068 = -24;
  unsigned char* ptr1069 = &(cast1067)[c1068];
  long* cast1070 = (long*)ptr1069;
  long t1071 = *cast1070;
  unsigned char* cast1072 = (unsigned char*)t1064;
  unsigned char* ptr1073 = &(cast1072)[t1071];
  struct std__basic_ostream_char__std__char_traits_char__* cast1074 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1073;
  struct std__basic_ios_char__std__char_traits_char__* cast1075 = (struct std__basic_ios_char__std__char_traits_char__*)cast1074;
  char c1076 = 10;
  char r1077 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1075, c1076);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1078 = std__ostream__put(t1063, r1077);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1079 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1078);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1062 = r1079;
  struct std__basic_ostream_char__std__char_traits_char__* t1080 = __retval1062;
  return t1080;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v1081) {
bb1082:
  struct std____cxx11__list_int__std__allocator_int__* this1083;
  this1083 = v1081;
  struct std____cxx11__list_int__std__allocator_int__* t1084 = this1083;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base1085 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1084 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base1085);
  }
  return;
}

// function: main
int main() {
bb1086:
  int __retval1087;
  struct std____cxx11__list_int__std__allocator_int__ mylist1088;
  unsigned int i1089;
  int ref_tmp11090;
  int c1091 = 0;
  __retval1087 = c1091;
  std____cxx11__list_int__std__allocator_int_____list_2(&mylist1088);
      int ref_tmp01092;
      unsigned int c1093 = 1;
      i1089 = c1093;
      while (1) {
        unsigned int t1095 = i1089;
        unsigned int c1096 = 10;
        _Bool c1097 = ((t1095 < c1096)) ? 1 : 0;
        if (!c1097) break;
        unsigned int t1098 = i1089;
        int cast1099 = (int)t1098;
        ref_tmp01092 = cast1099;
        std____cxx11__list_int__std__allocator_int_____push_back(&mylist1088, &ref_tmp01092);
        if (__cir_exc_active) {
          {
            std____cxx11__list_int__std__allocator_int______list(&mylist1088);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1094: ;
        unsigned int t1100 = i1089;
        unsigned int u1101 = t1100 + 1;
        i1089 = u1101;
      }
    unsigned long r1102 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist1088);
    unsigned long c1103 = 9;
    _Bool c1104 = ((r1102 == c1103)) ? 1 : 0;
    if (c1104) {
    } else {
      char* cast1105 = (char*)&(_str);
      char* c1106 = _str_1;
      unsigned int c1107 = 22;
      char* cast1108 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1105, c1106, c1107, cast1108);
    }
    unsigned long c1109 = 5;
    std____cxx11__list_int__std__allocator_int_____resize(&mylist1088, c1109);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist1088);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1110 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist1088);
    unsigned long c1111 = 5;
    _Bool c1112 = ((r1110 == c1111)) ? 1 : 0;
    if (c1112) {
    } else {
      char* cast1113 = (char*)&(_str_2);
      char* c1114 = _str_1;
      unsigned int c1115 = 24;
      char* cast1116 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1113, c1114, c1115, cast1116);
    }
    unsigned long c1117 = 8;
    int c1118 = 100;
    ref_tmp11090 = c1118;
    std____cxx11__list_int__std__allocator_int_____resize_2(&mylist1088, c1117, &ref_tmp11090);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist1088);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1119 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist1088);
    unsigned long c1120 = 8;
    _Bool c1121 = ((r1119 == c1120)) ? 1 : 0;
    if (c1121) {
    } else {
      char* cast1122 = (char*)&(_str_3);
      char* c1123 = _str_1;
      unsigned int c1124 = 26;
      char* cast1125 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1122, c1123, c1124, cast1125);
    }
    int* r1126 = std____cxx11__list_int__std__allocator_int_____back(&mylist1088);
    int t1127 = *r1126;
    int c1128 = 100;
    _Bool c1129 = ((t1127 == c1128)) ? 1 : 0;
    if (c1129) {
    } else {
      char* cast1130 = (char*)&(_str_4);
      char* c1131 = _str_1;
      unsigned int c1132 = 27;
      char* cast1133 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1130, c1131, c1132, cast1133);
    }
    unsigned long c1134 = 12;
    std____cxx11__list_int__std__allocator_int_____resize(&mylist1088, c1134);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist1088);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1135 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist1088);
    unsigned long c1136 = 12;
    _Bool c1137 = ((r1135 == c1136)) ? 1 : 0;
    if (c1137) {
    } else {
      char* cast1138 = (char*)&(_str_5);
      char* c1139 = _str_1;
      unsigned int c1140 = 29;
      char* cast1141 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1138, c1139, c1140, cast1141);
    }
    int* r1142 = std____cxx11__list_int__std__allocator_int_____back(&mylist1088);
    int t1143 = *r1142;
    int c1144 = 0;
    _Bool c1145 = ((t1143 == c1144)) ? 1 : 0;
    if (c1145) {
    } else {
      char* cast1146 = (char*)&(_str_6);
      char* c1147 = _str_1;
      unsigned int c1148 = 30;
      char* cast1149 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1146, c1147, c1148, cast1149);
    }
    char* cast1150 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r1151 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1150);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist1088);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___List_iterator_int_ it1152;
      struct std___List_iterator_int_ ref_tmp21153;
      struct std___List_iterator_int_ r1154 = std____cxx11__list_int__std__allocator_int_____begin(&mylist1088);
      it1152 = r1154;
      while (1) {
        struct std___List_iterator_int_ r1156 = std____cxx11__list_int__std__allocator_int_____end(&mylist1088);
        ref_tmp21153 = r1156;
        _Bool r1157 = std__operator___2(&it1152, &ref_tmp21153);
        _Bool u1158 = !r1157;
        if (!u1158) break;
        char* cast1159 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* r1160 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1159);
        if (__cir_exc_active) {
          {
            std____cxx11__list_int__std__allocator_int______list(&mylist1088);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r1161 = std___List_iterator_int___operator____const(&it1152);
        int t1162 = *r1161;
        struct std__basic_ostream_char__std__char_traits_char__* r1163 = std__ostream__operator__(r1160, t1162);
        if (__cir_exc_active) {
          {
            std____cxx11__list_int__std__allocator_int______list(&mylist1088);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1155: ;
        struct std___List_iterator_int_* r1164 = std___List_iterator_int___operator___2(&it1152);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1165 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std____cxx11__list_int__std__allocator_int______list(&mylist1088);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1166 = 0;
    __retval1087 = c1166;
    int t1167 = __retval1087;
    int ret_val1168 = t1167;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist1088);
    }
    return ret_val1168;
  int t1169 = __retval1087;
  return t1169;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1170) {
bb1171:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1172;
  this1172 = v1170;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1173 = this1172;
  struct std__allocator_std___List_node_int__* base1174 = (struct std__allocator_std___List_node_int__*)((char *)t1173 + 0);
  std__allocator_std___List_node_int_____allocator_2(base1174);
    std____detail___List_node_header___List_node_header(&t1173->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1175) {
bb1176:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1177;
  this1177 = v1175;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1178 = this1177;
  {
    struct std__allocator_std___List_node_int__* base1179 = (struct std__allocator_std___List_node_int__*)((char *)t1178 + 0);
    std__allocator_std___List_node_int______allocator(base1179);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base_2(struct std____cxx11___List_base_int__std__allocator_int__* v1180) {
bb1181:
  struct std____cxx11___List_base_int__std__allocator_int__* this1182;
  this1182 = v1180;
  struct std____cxx11___List_base_int__std__allocator_int__* t1183 = this1182;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl_2(&t1183->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v1184) {
bb1185:
  struct std____detail___List_node_header* this1186;
  struct std____detail___List_node_base* __retval1187;
  this1186 = v1184;
  struct std____detail___List_node_header* t1188 = this1186;
  struct std____detail___List_node_base* base1189 = (struct std____detail___List_node_base*)((char *)t1188 + 0);
  __retval1187 = base1189;
  struct std____detail___List_node_base* t1190 = __retval1187;
  return t1190;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1191) {
bb1192:
  int* __location1193;
  __location1193 = v1191;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v1194, int* v1195) {
bb1196:
  struct std__allocator_std___List_node_int__* __a1197;
  int* __p1198;
  __a1197 = v1194;
  __p1198 = v1195;
  int* t1199 = __p1198;
  void_std__destroy_at_int_(t1199);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1200) {
bb1201:
  struct __gnu_cxx____aligned_membuf_int_* this1202;
  void* __retval1203;
  this1202 = v1200;
  struct __gnu_cxx____aligned_membuf_int_* t1204 = this1202;
  void* cast1205 = (void*)&(t1204->_M_storage);
  __retval1203 = cast1205;
  void* t1206 = __retval1203;
  return t1206;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1207) {
bb1208:
  struct __gnu_cxx____aligned_membuf_int_* this1209;
  int* __retval1210;
  this1209 = v1207;
  struct __gnu_cxx____aligned_membuf_int_* t1211 = this1209;
  void* r1212 = __gnu_cxx____aligned_membuf_int____M_addr(t1211);
  int* cast1213 = (int*)r1212;
  __retval1210 = cast1213;
  int* t1214 = __retval1210;
  return t1214;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v1215) {
bb1216:
  struct std___List_node_int_* this1217;
  int* __retval1218;
  this1217 = v1215;
  struct std___List_node_int_* t1219 = this1217;
  int* r1220 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1219->_M_storage);
  __retval1218 = r1220;
  int* t1221 = __retval1218;
  return t1221;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1222:
  _Bool __retval1223;
    _Bool c1224 = 0;
    __retval1223 = c1224;
    _Bool t1225 = __retval1223;
    return t1225;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v1226, struct std___List_node_int_* v1227, unsigned long v1228) {
bb1229:
  struct std____new_allocator_std___List_node_int__* this1230;
  struct std___List_node_int_* __p1231;
  unsigned long __n1232;
  this1230 = v1226;
  __p1231 = v1227;
  __n1232 = v1228;
  struct std____new_allocator_std___List_node_int__* t1233 = this1230;
    unsigned long c1234 = 8;
    unsigned long c1235 = 16;
    _Bool c1236 = ((c1234 > c1235)) ? 1 : 0;
    if (c1236) {
      struct std___List_node_int_* t1237 = __p1231;
      void* cast1238 = (void*)t1237;
      unsigned long t1239 = __n1232;
      unsigned long c1240 = 24;
      unsigned long b1241 = t1239 * c1240;
      unsigned long c1242 = 8;
      operator_delete_3(cast1238, b1241, c1242);
      return;
    }
  struct std___List_node_int_* t1243 = __p1231;
  void* cast1244 = (void*)t1243;
  unsigned long t1245 = __n1232;
  unsigned long c1246 = 24;
  unsigned long b1247 = t1245 * c1246;
  operator_delete_2(cast1244, b1247);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v1248, struct std___List_node_int_* v1249, unsigned long v1250) {
bb1251:
  struct std__allocator_std___List_node_int__* this1252;
  struct std___List_node_int_* __p1253;
  unsigned long __n1254;
  this1252 = v1248;
  __p1253 = v1249;
  __n1254 = v1250;
  struct std__allocator_std___List_node_int__* t1255 = this1252;
    _Bool r1256 = std____is_constant_evaluated();
    if (r1256) {
      struct std___List_node_int_* t1257 = __p1253;
      void* cast1258 = (void*)t1257;
      operator_delete(cast1258);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base1259 = (struct std____new_allocator_std___List_node_int__*)((char *)t1255 + 0);
  struct std___List_node_int_* t1260 = __p1253;
  unsigned long t1261 = __n1254;
  std____new_allocator_std___List_node_int_____deallocate(base1259, t1260, t1261);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v1262, struct std___List_node_int_* v1263, unsigned long v1264) {
bb1265:
  struct std__allocator_std___List_node_int__* __a1266;
  struct std___List_node_int_* __p1267;
  unsigned long __n1268;
  __a1266 = v1262;
  __p1267 = v1263;
  __n1268 = v1264;
  struct std__allocator_std___List_node_int__* t1269 = __a1266;
  struct std___List_node_int_* t1270 = __p1267;
  unsigned long t1271 = __n1268;
  std__allocator_std___List_node_int_____deallocate(t1269, t1270, t1271);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v1272, struct std___List_node_int_* v1273) {
bb1274:
  struct std____cxx11___List_base_int__std__allocator_int__* this1275;
  struct std___List_node_int_* __p1276;
  this1275 = v1272;
  __p1276 = v1273;
  struct std____cxx11___List_base_int__std__allocator_int__* t1277 = this1275;
  struct std__allocator_std___List_node_int__* base1278 = (struct std__allocator_std___List_node_int__*)((char *)&(t1277->_M_impl) + 0);
  struct std___List_node_int_* t1279 = __p1276;
  unsigned long c1280 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base1278, t1279, c1280);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v1281, struct std___List_node_int_* v1282) {
bb1283:
  struct std____cxx11___List_base_int__std__allocator_int__* this1284;
  struct std___List_node_int_* __p1285;
  this1284 = v1281;
  __p1285 = v1282;
  struct std____cxx11___List_base_int__std__allocator_int__* t1286 = this1284;
  struct std__allocator_std___List_node_int__* base1287 = (struct std__allocator_std___List_node_int__*)((char *)&(t1286->_M_impl) + 0);
  struct std___List_node_int_* t1288 = __p1285;
  int* r1289 = std___List_node_int____M_valptr(t1288);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base1287, r1289);
  struct std___List_node_int_* t1290 = __p1285;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t1286, t1290);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v1291) {
bb1292:
  struct std___List_node_int_* this1293;
  struct std___List_node_int_* __retval1294;
  this1293 = v1291;
  struct std___List_node_int_* t1295 = this1293;
  __retval1294 = t1295;
  struct std___List_node_int_* t1296 = __retval1294;
  return t1296;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v1297) {
bb1298:
  struct std____cxx11___List_base_int__std__allocator_int__* this1299;
  struct std____detail___List_node_base* __cur1300;
  this1299 = v1297;
  struct std____cxx11___List_base_int__std__allocator_int__* t1301 = this1299;
  struct std____detail___List_node_base* base1302 = (struct std____detail___List_node_base*)((char *)&(t1301->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t1303 = base1302->_M_next;
  __cur1300 = t1303;
    while (1) {
      struct std____detail___List_node_base* t1304 = __cur1300;
      struct std____detail___List_node_base* r1305 = std____detail___List_node_header___M_base(&t1301->_M_impl._M_node);
      if (__cir_exc_active) {
        return;
      }
      _Bool c1306 = ((t1304 != r1305)) ? 1 : 0;
      if (!c1306) break;
        struct std___List_node_int_* __tmp1307;
        struct std____detail___List_node_base* t1308 = __cur1300;
        struct std___List_node_int_* derived1309 = (struct std___List_node_int_*)((char *)t1308 - 0);
        __tmp1307 = derived1309;
        struct std___List_node_int_* t1310 = __tmp1307;
        struct std____detail___List_node_base* base1311 = (struct std____detail___List_node_base*)((char *)t1310 + 0);
        struct std____detail___List_node_base* t1312 = base1311->_M_next;
        __cur1300 = t1312;
        struct std___List_node_int_* t1313 = __tmp1307;
        struct std___List_node_int_* r1314 = std___List_node_int____M_node_ptr(t1313);
        if (__cir_exc_active) {
          return;
        }
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t1301, r1314);
        if (__cir_exc_active) {
          return;
        }
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1315) {
bb1316:
  struct std____cxx11___List_base_int__std__allocator_int__* this1317;
  this1317 = v1315;
  struct std____cxx11___List_base_int__std__allocator_int__* t1318 = this1317;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t1318);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t1318->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator_2(struct std____new_allocator_std___List_node_int__* v1319) {
bb1320:
  struct std____new_allocator_std___List_node_int__* this1321;
  this1321 = v1319;
  struct std____new_allocator_std___List_node_int__* t1322 = this1321;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator_2(struct std__allocator_std___List_node_int__* v1323) {
bb1324:
  struct std__allocator_std___List_node_int__* this1325;
  this1325 = v1323;
  struct std__allocator_std___List_node_int__* t1326 = this1325;
  struct std____new_allocator_std___List_node_int__* base1327 = (struct std____new_allocator_std___List_node_int__*)((char *)t1326 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1327);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v1328) {
bb1329:
  struct std____detail___List_node_header* this1330;
  this1330 = v1328;
  struct std____detail___List_node_header* t1331 = this1330;
  struct std____detail___List_node_base* base1332 = (struct std____detail___List_node_base*)((char *)t1331 + 0);
  struct std____detail___List_size* base1333 = (struct std____detail___List_size*)((char *)t1331 + 16);
  std____detail___List_node_header___M_init(t1331);
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v1334, struct std____detail___List_size* v1335) {
bb1336:
  struct std____detail___List_size* this1337;
  struct std____detail___List_size* unnamed1338;
  struct std____detail___List_size* __retval1339;
  this1337 = v1334;
  unnamed1338 = v1335;
  struct std____detail___List_size* t1340 = this1337;
  struct std____detail___List_size* t1341 = unnamed1338;
  unsigned long t1342 = t1341->_M_size;
  t1340->_M_size = t1342;
  __retval1339 = t1340;
  struct std____detail___List_size* t1343 = __retval1339;
  return t1343;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v1344) {
bb1345:
  struct std____detail___List_node_header* this1346;
  struct std____detail___List_size ref_tmp01347;
  this1346 = v1344;
  struct std____detail___List_node_header* t1348 = this1346;
  struct std____detail___List_node_base* base1349 = (struct std____detail___List_node_base*)((char *)t1348 + 0);
  struct std____detail___List_node_base* base1350 = (struct std____detail___List_node_base*)((char *)t1348 + 0);
  base1350->_M_prev = base1349;
  struct std____detail___List_node_base* base1351 = (struct std____detail___List_node_base*)((char *)t1348 + 0);
  base1351->_M_next = base1349;
  struct std____detail___List_size* base1352 = (struct std____detail___List_size*)((char *)t1348 + 16);
  ref_tmp01347 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r1353 = std____detail___List_size__operator_(base1352, &ref_tmp01347);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1354, struct std____allocated_ptr_std__allocator_std___List_node_int___* v1355) {
bb1356:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1357;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd1358;
  this1357 = v1354;
  __gd1358 = v1355;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1359 = this1357;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1360 = __gd1358;
  struct std__allocator_std___List_node_int__* t1361 = t1360->_M_alloc;
  t1359->_M_alloc = t1361;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1362 = __gd1358;
  struct std___List_node_int_* t1363 = t1362->_M_ptr;
  t1359->_M_ptr = t1363;
  struct std___List_node_int_* c1364 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1365 = __gd1358;
  t1365->_M_ptr = c1364;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v1366) {
bb1367:
  struct std___List_node_int_* __ptr1368;
  struct std___List_node_int_* __retval1369;
  __ptr1368 = v1366;
  struct std___List_node_int_* t1370 = __ptr1368;
  __retval1369 = t1370;
  struct std___List_node_int_* t1371 = __retval1369;
  return t1371;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v1372) {
bb1373:
  struct std___List_node_int_** __ptr1374;
  struct std___List_node_int_* __retval1375;
  __ptr1374 = v1372;
  struct std___List_node_int_** t1376 = __ptr1374;
  struct std___List_node_int_* t1377 = *t1376;
  struct std___List_node_int_* r1378 = std___List_node_int___std__to_address_std___List_node_int___(t1377);
  __retval1375 = r1378;
  struct std___List_node_int_* t1379 = __retval1375;
  return t1379;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1380) {
bb1381:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1382;
  struct std___List_node_int_* __retval1383;
  this1382 = v1380;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1384 = this1382;
  struct std___List_node_int_* r1385 = auto_std____to_address_std___List_node_int___(&t1384->_M_ptr);
  __retval1383 = r1385;
  struct std___List_node_int_* t1386 = __retval1383;
  return t1386;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v1387) {
bb1388:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this1389;
  _Bool __retval1390;
  this1389 = v1387;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t1391 = this1389;
  struct std___List_node_int_* t1392 = t1391->_M_ptr;
  _Bool cast1393 = (_Bool)t1392;
  __retval1390 = cast1393;
  _Bool t1394 = __retval1390;
  return t1394;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1395) {
bb1396:
  struct std____new_allocator_int_* this1397;
  this1397 = v1395;
  struct std____new_allocator_int_* t1398 = this1397;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2IiEERKSaIT_E
void std__allocator_std___List_node_int_____allocator_int_(struct std__allocator_std___List_node_int__* v1399, struct std__allocator_int_* v1400) {
bb1401:
  struct std__allocator_std___List_node_int__* this1402;
  struct std__allocator_int_* unnamed1403;
  this1402 = v1399;
  unnamed1403 = v1400;
  struct std__allocator_std___List_node_int__* t1404 = this1402;
  struct std____new_allocator_std___List_node_int__* base1405 = (struct std____new_allocator_std___List_node_int__*)((char *)t1404 + 0);
  std____new_allocator_std___List_node_int_______new_allocator_2(base1405);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v1406, struct std__allocator_std___List_node_int__* v1407) {
bb1408:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this1409;
  struct std__allocator_std___List_node_int__* __a1410;
  this1409 = v1406;
  __a1410 = v1407;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t1411 = this1409;
  struct std__allocator_std___List_node_int__* base1412 = (struct std__allocator_std___List_node_int__*)((char *)t1411 + 0);
  struct std__allocator_std___List_node_int__* t1413 = __a1410;
  std__allocator_std___List_node_int_____allocator(base1412, t1413);
    std____detail___List_node_header___List_node_header(&t1411->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2EOSaISt10_List_nodeIiEE
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v1414, struct std__allocator_std___List_node_int__* v1415) {
bb1416:
  struct std____cxx11___List_base_int__std__allocator_int__* this1417;
  struct std__allocator_std___List_node_int__* __a1418;
  this1417 = v1414;
  __a1418 = v1415;
  struct std____cxx11___List_base_int__std__allocator_int__* t1419 = this1417;
  struct std__allocator_std___List_node_int__* t1420 = __a1418;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t1419->_M_impl, t1420);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v1421) {
bb1422:
  struct std__allocator_std___List_node_int__* this1423;
  this1423 = v1421;
  struct std__allocator_std___List_node_int__* t1424 = this1423;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1425, int* v1426) {
bb1427:
  int* __location1428;
  int* __args1429;
  int* __retval1430;
  void* __loc1431;
  __location1428 = v1425;
  __args1429 = v1426;
  int* t1432 = __location1428;
  void* cast1433 = (void*)t1432;
  __loc1431 = cast1433;
    void* t1434 = __loc1431;
    int* cast1435 = (int*)t1434;
    int* t1436 = __args1429;
    int t1437 = *t1436;
    *cast1435 = t1437;
    __retval1430 = cast1435;
    int* t1438 = __retval1430;
    return t1438;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v1439, int* v1440, int* v1441) {
bb1442:
  struct std__allocator_std___List_node_int__* __a1443;
  int* __p1444;
  int* __args1445;
  __a1443 = v1439;
  __p1444 = v1440;
  __args1445 = v1441;
  int* t1446 = __p1444;
  int* t1447 = __args1445;
  int* r1448 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1446, t1447);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1449, int* v1450) {
bb1451:
  struct std____cxx11__list_int__std__allocator_int__* this1452;
  int* __args1453;
  struct std___List_node_int_* __retval1454;
  struct std__allocator_std___List_node_int__* __alloc1455;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard1456;
  this1452 = v1449;
  __args1453 = v1450;
  struct std____cxx11__list_int__std__allocator_int__* t1457 = this1452;
  struct std____cxx11___List_base_int__std__allocator_int__* base1458 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1457 + 0);
  struct std__allocator_std___List_node_int__* r1459 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base1458);
  __alloc1455 = r1459;
  struct std__allocator_std___List_node_int__* t1460 = __alloc1455;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r1461 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t1460);
  if (__cir_exc_active) {
    struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
    return __cir_eh_ret;
  }
  __guard1456 = r1461;
    struct std__allocator_std___List_node_int__* t1462 = __alloc1455;
    struct std___List_node_int_* r1463 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard1456);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1456);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* r1464 = std___List_node_int____M_valptr(r1463);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1456);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    int* t1465 = __args1453;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t1462, r1464, t1465);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base1466 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard1456) + 0);
    struct std___List_node_int_* r1467 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base1466);
    if (__cir_exc_active) {
      {
        std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1456);
      }
      struct std___List_node_int_* __cir_eh_ret = (struct std___List_node_int_*)0;
      return __cir_eh_ret;
    }
    __retval1454 = r1467;
    struct std___List_node_int_* t1468 = __retval1454;
    struct std___List_node_int_* ret_val1469 = t1468;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard1456);
    }
    return ret_val1469;
  abort();
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v1470, struct std___List_iterator_int_ v1471, int* v1472) {
bb1473:
  struct std____cxx11__list_int__std__allocator_int__* this1474;
  struct std___List_iterator_int_ __position1475;
  int* __args1476;
  struct std___List_node_int_* __tmp1477;
  this1474 = v1470;
  __position1475 = v1471;
  __args1476 = v1472;
  struct std____cxx11__list_int__std__allocator_int__* t1478 = this1474;
  int* t1479 = __args1476;
  struct std___List_node_int_* r1480 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t1478, t1479);
  if (__cir_exc_active) {
    return;
  }
  __tmp1477 = r1480;
  struct std___List_node_int_* t1481 = __tmp1477;
  struct std____detail___List_node_base* base1482 = (struct std____detail___List_node_base*)((char *)t1481 + 0);
  struct std____detail___List_node_base* t1483 = __position1475._M_node;
  std____detail___List_node_base___M_hook(base1482, t1483);
  struct std____cxx11___List_base_int__std__allocator_int__* base1484 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t1478 + 0);
  unsigned long c1485 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base1484, c1485);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back_2(struct std____cxx11__list_int__std__allocator_int__* v1486, int* v1487) {
bb1488:
  struct std____cxx11__list_int__std__allocator_int__* this1489;
  int* __x1490;
  struct std___List_iterator_int_ agg_tmp01491;
  this1489 = v1486;
  __x1490 = v1487;
  struct std____cxx11__list_int__std__allocator_int__* t1492 = this1489;
  struct std___List_iterator_int_ r1493 = std____cxx11__list_int__std__allocator_int_____end(t1492);
  agg_tmp01491 = r1493;
  int* t1494 = __x1490;
  struct std___List_iterator_int_ t1495 = agg_tmp01491;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t1492, t1495, t1494);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE18_M_fill_initializeEmRKi
void std____cxx11__list_int__std__allocator_int______M_fill_initialize(struct std____cxx11__list_int__std__allocator_int__* v1496, unsigned long v1497, int* v1498) {
bb1499:
  struct std____cxx11__list_int__std__allocator_int__* this1500;
  unsigned long __n1501;
  int* __x1502;
  this1500 = v1496;
  __n1501 = v1497;
  __x1502 = v1498;
  struct std____cxx11__list_int__std__allocator_int__* t1503 = this1500;
    while (1) {
      unsigned long t1505 = __n1501;
      _Bool cast1506 = (_Bool)t1505;
      if (!cast1506) break;
      int* t1507 = __x1502;
      std____cxx11__list_int__std__allocator_int_____push_back_2(t1503, t1507);
      if (__cir_exc_active) {
        return;
      }
    for_step1504: ;
      unsigned long t1508 = __n1501;
      unsigned long u1509 = t1508 - 1;
      __n1501 = u1509;
    }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2ERKS2_
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v1510, struct std____new_allocator_std___List_node_int__* v1511) {
bb1512:
  struct std____new_allocator_std___List_node_int__* this1513;
  struct std____new_allocator_std___List_node_int__* unnamed1514;
  this1513 = v1510;
  unnamed1514 = v1511;
  struct std____new_allocator_std___List_node_int__* t1515 = this1513;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2ERKS1_
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v1516, struct std__allocator_std___List_node_int__* v1517) {
bb1518:
  struct std__allocator_std___List_node_int__* this1519;
  struct std__allocator_std___List_node_int__* __a1520;
  this1519 = v1516;
  __a1520 = v1517;
  struct std__allocator_std___List_node_int__* t1521 = this1519;
  struct std____new_allocator_std___List_node_int__* base1522 = (struct std____new_allocator_std___List_node_int__*)((char *)t1521 + 0);
  struct std__allocator_std___List_node_int__* t1523 = __a1520;
  struct std____new_allocator_std___List_node_int__* base1524 = (struct std____new_allocator_std___List_node_int__*)((char *)t1523 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base1522, base1524);
  return;
}

