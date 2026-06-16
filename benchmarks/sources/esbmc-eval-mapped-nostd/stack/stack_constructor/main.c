extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };
struct std__stack_int__std__deque_int__std__allocator_int___ { struct std__deque_int__std__allocator_int__ c; };
struct std__stack_int__std__vector_int__std__allocator_int___ { struct std__vector_int__std__allocator_int__ c; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "first.size() == 0";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stack/stack_constructor/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "second.size() == 3";
char _str_3[18] = "third.size() == 0";
char _str_4[19] = "fourth.size() == 2";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "size of first: ";
char _str_6[17] = "size of second: ";
char _str_7[16] = "size of third: ";
char _str_8[17] = "size of fourth: ";
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_11[9] = "__n >= 0";
char _str_12[48] = "cannot create std::deque larger than max_size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__deque_int__std__allocator_int_____deque_2(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
void std__stack_int__std__deque_int__std__allocator_int_______stack(struct std__stack_int__std__deque_int__std__allocator_int___* p0, struct std__deque_int__std__allocator_int__* p1);
void std__stack_int__std__vector_int__std__allocator_int_______stack_std__vector_int__std__allocator_int_____void_(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
void std__stack_int__std__vector_int__std__allocator_int_______stack(struct std__stack_int__std__vector_int__std__allocator_int___* p0, struct std__vector_int__std__allocator_int__* p1);
unsigned long std__stack_int__std__deque_int__std__allocator_int_______size___const(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
unsigned long std__stack_int__std__vector_int__std__allocator_int_______size___const(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
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
void std__stack_int__std__vector_int__std__allocator_int________stack(struct std__stack_int__std__vector_int__std__allocator_int___* p0);
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* p0);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0, struct std__allocator_int_* p1);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* p0);
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* p0, unsigned long p1, void* p2);
int** std__allocator_int____allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
extern int __gxx_personality_v0();
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, int** p2);
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_int____deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* p0, int** p1, unsigned long p2);
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* p0, int** p1, unsigned long p2);
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size();
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* p0, int** p1);
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1, unsigned long p2);
void void_std____do_uninit_fill_int___int_(int* p0, int* p1, int* p2);
void void_std__uninitialized_fill_int___int_(int* p0, int* p1, int* p2);
void void_std____uninitialized_fill_a_int___int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std__operator___2(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__allocator_int_* p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0, int* p1, int** p2);
void std__deque_int__std__allocator_int______M_fill_initialize(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____deque_3(struct std__deque_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl_2(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
void std___Deque_base_int__std__allocator_int______Deque_base_2(struct std___Deque_base_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0, struct std__deque_int__std__allocator_int__* p1);
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* p0);
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* p0);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__operator__(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int_int___int___* p1);
int* std___Deque_iterator_int__int_const___int_const____operator____const(struct std___Deque_iterator_int_int___int___* p0);
unsigned long std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
void std___Deque_iterator_int__int_const___int_const_____M_set_node(struct std___Deque_iterator_int_int___int___* p0, int** p1);
struct std___Deque_iterator_int_int___int___* std___Deque_iterator_int__int_const___int_const____operator__(struct std___Deque_iterator_int_int___int___* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____do_uninit_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int_int___int___* p1);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__uninitialized_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int__int____int___* p1);
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____begin___const(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____end___const(struct std__deque_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____vector_3(struct std__vector_int__std__allocator_int__* p0);
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1: ;
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2EmRKiRKS0_
void std__deque_int__std__allocator_int_____deque_2(struct std__deque_int__std__allocator_int__* v5, unsigned long v6, int* v7, struct std__allocator_int_* v8) {
bb9: ;
  struct std__deque_int__std__allocator_int__* this10;
  unsigned long __n11;
  int* __value12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __n11 = v6;
  __value12 = v7;
  __a13 = v8;
  struct std__deque_int__std__allocator_int__* t14 = this10;
  struct std___Deque_base_int__std__allocator_int__* base15 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t14 + 0);
  struct std__allocator_int_* t16 = __a13;
  unsigned long t17 = __n11;
  struct std__allocator_int_* t18 = __a13;
  unsigned long r19 = std__deque_int__std__allocator_int______S_check_init_len(t17, t18);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_base_int__std__allocator_int______Deque_base(base15, t16, r19);
  if (__cir_exc_active) {
    return;
  }
    int* t20 = __value12;
    std__deque_int__std__allocator_int______M_fill_initialize(t14, t20);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base21 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t14 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base21);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v22) {
bb23: ;
  struct std__allocator_int_* this24;
  this24 = v22;
  struct std__allocator_int_* t25 = this24;
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* v26, unsigned long v27, int* v28, struct std__allocator_int_* v29) {
bb30: ;
  struct std__vector_int__std__allocator_int__* this31;
  unsigned long __n32;
  int* __value33;
  struct std__allocator_int_* __a34;
  this31 = v26;
  __n32 = v27;
  __value33 = v28;
  __a34 = v29;
  struct std__vector_int__std__allocator_int__* t35 = this31;
  struct std___Vector_base_int__std__allocator_int__* base36 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t35 + 0);
  unsigned long t37 = __n32;
  struct std__allocator_int_* t38 = __a34;
  unsigned long r39 = std__vector_int__std__allocator_int______S_check_init_len(t37, t38);
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_int_* t40 = __a34;
  std___Vector_base_int__std__allocator_int______Vector_base(base36, r39, t40);
  if (__cir_exc_active) {
    return;
  }
    unsigned long t41 = __n32;
    int* t42 = __value33;
    std__vector_int__std__allocator_int______M_fill_initialize(t35, t41, t42);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base43 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t35 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base43);
      }
      return;
    }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEEC2IS2_vEEv
void std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(struct std__stack_int__std__deque_int__std__allocator_int___* v44) {
bb45: ;
  struct std__stack_int__std__deque_int__std__allocator_int___* this46;
  this46 = v44;
  struct std__stack_int__std__deque_int__std__allocator_int___* t47 = this46;
  struct std__deque_int__std__allocator_int__ c48 = {0};
  t47->c = c48;
  std__deque_int__std__allocator_int_____deque_3(&t47->c);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEEC2ERKS2_
void std__stack_int__std__deque_int__std__allocator_int_______stack(struct std__stack_int__std__deque_int__std__allocator_int___* v49, struct std__deque_int__std__allocator_int__* v50) {
bb51: ;
  struct std__stack_int__std__deque_int__std__allocator_int___* this52;
  struct std__deque_int__std__allocator_int__* __c53;
  this52 = v49;
  __c53 = v50;
  struct std__stack_int__std__deque_int__std__allocator_int___* t54 = this52;
  struct std__deque_int__std__allocator_int__* t55 = __c53;
  std__deque_int__std__allocator_int_____deque(&t54->c, t55);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5stackIiSt6vectorIiSaIiEEEC2IS2_vEEv
void std__stack_int__std__vector_int__std__allocator_int_______stack_std__vector_int__std__allocator_int_____void_(struct std__stack_int__std__vector_int__std__allocator_int___* v56) {
bb57: ;
  struct std__stack_int__std__vector_int__std__allocator_int___* this58;
  this58 = v56;
  struct std__stack_int__std__vector_int__std__allocator_int___* t59 = this58;
  struct std__vector_int__std__allocator_int__ c60 = {0};
  t59->c = c60;
  std__vector_int__std__allocator_int_____vector_3(&t59->c);
  return;
}

// function: _ZNSt5stackIiSt6vectorIiSaIiEEEC2ERKS2_
void std__stack_int__std__vector_int__std__allocator_int_______stack(struct std__stack_int__std__vector_int__std__allocator_int___* v61, struct std__vector_int__std__allocator_int__* v62) {
bb63: ;
  struct std__stack_int__std__vector_int__std__allocator_int___* this64;
  struct std__vector_int__std__allocator_int__* __c65;
  this64 = v61;
  __c65 = v62;
  struct std__stack_int__std__vector_int__std__allocator_int___* t66 = this64;
  struct std__vector_int__std__allocator_int__* t67 = __c65;
  std__vector_int__std__allocator_int_____vector(&t66->c, t67);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNKSt5stackIiSt5dequeIiSaIiEEE4sizeEv
unsigned long std__stack_int__std__deque_int__std__allocator_int_______size___const(struct std__stack_int__std__deque_int__std__allocator_int___* v68) {
bb69: ;
  struct std__stack_int__std__deque_int__std__allocator_int___* this70;
  unsigned long __retval71;
  this70 = v68;
  struct std__stack_int__std__deque_int__std__allocator_int___* t72 = this70;
  unsigned long r73 = std__deque_int__std__allocator_int_____size___const(&t72->c);
  __retval71 = r73;
  unsigned long t74 = __retval71;
  return t74;
}

// function: _ZNKSt5stackIiSt6vectorIiSaIiEEE4sizeEv
unsigned long std__stack_int__std__vector_int__std__allocator_int_______size___const(struct std__stack_int__std__vector_int__std__allocator_int___* v75) {
bb76: ;
  struct std__stack_int__std__vector_int__std__allocator_int___* this77;
  unsigned long __retval78;
  this77 = v75;
  struct std__stack_int__std__vector_int__std__allocator_int___* t79 = this77;
  unsigned long r80 = std__vector_int__std__allocator_int_____size___const(&t79->c);
  __retval78 = r80;
  unsigned long t81 = __retval78;
  return t81;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v82, int v83) {
bb84: ;
  int __a85;
  int __b86;
  int __retval87;
  __a85 = v82;
  __b86 = v83;
  int t88 = __a85;
  int t89 = __b86;
  int b90 = t88 | t89;
  __retval87 = b90;
  int t91 = __retval87;
  return t91;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v92) {
bb93: ;
  struct std__basic_ios_char__std__char_traits_char__* this94;
  int __retval95;
  this94 = v92;
  struct std__basic_ios_char__std__char_traits_char__* t96 = this94;
  struct std__ios_base* base97 = (struct std__ios_base*)((char *)t96 + 0);
  int t98 = base97->_M_streambuf_state;
  __retval95 = t98;
  int t99 = __retval95;
  return t99;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v100, int v101) {
bb102: ;
  struct std__basic_ios_char__std__char_traits_char__* this103;
  int __state104;
  this103 = v100;
  __state104 = v101;
  struct std__basic_ios_char__std__char_traits_char__* t105 = this103;
  int r106 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t105);
  if (__cir_exc_active) {
    return;
  }
  int t107 = __state104;
  int r108 = std__operator__2(r106, t107);
  std__basic_ios_char__std__char_traits_char_____clear(t105, r108);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v109, char* v110) {
bb111: ;
  char* __c1112;
  char* __c2113;
  _Bool __retval114;
  __c1112 = v109;
  __c2113 = v110;
  char* t115 = __c1112;
  char t116 = *t115;
  int cast117 = (int)t116;
  char* t118 = __c2113;
  char t119 = *t118;
  int cast120 = (int)t119;
  _Bool c121 = ((cast117 == cast120)) ? 1 : 0;
  __retval114 = c121;
  _Bool t122 = __retval114;
  return t122;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v123) {
bb124: ;
  char* __p125;
  unsigned long __retval126;
  unsigned long __i127;
  __p125 = v123;
  unsigned long c128 = 0;
  __i127 = c128;
    char ref_tmp0129;
    while (1) {
      unsigned long t130 = __i127;
      char* t131 = __p125;
      char* ptr132 = &(t131)[t130];
      char c133 = 0;
      ref_tmp0129 = c133;
      _Bool r134 = __gnu_cxx__char_traits_char___eq(ptr132, &ref_tmp0129);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u135 = !r134;
      if (!u135) break;
      unsigned long t136 = __i127;
      unsigned long u137 = t136 + 1;
      __i127 = u137;
    }
  unsigned long t138 = __i127;
  __retval126 = t138;
  unsigned long t139 = __retval126;
  return t139;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v140) {
bb141: ;
  char* __s142;
  unsigned long __retval143;
  __s142 = v140;
    _Bool r144 = std____is_constant_evaluated();
    if (r144) {
      char* t145 = __s142;
      unsigned long r146 = __gnu_cxx__char_traits_char___length(t145);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval143 = r146;
      unsigned long t147 = __retval143;
      return t147;
    }
  char* t148 = __s142;
  unsigned long r149 = strlen(t148);
  __retval143 = r149;
  unsigned long t150 = __retval143;
  return t150;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v151, char* v152) {
bb153: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out154;
  char* __s155;
  struct std__basic_ostream_char__std__char_traits_char__* __retval156;
  __out154 = v151;
  __s155 = v152;
    char* t157 = __s155;
    _Bool cast158 = (_Bool)t157;
    _Bool u159 = !cast158;
    if (u159) {
      struct std__basic_ostream_char__std__char_traits_char__* t160 = __out154;
      void** v161 = (void**)t160;
      void* v162 = *((void**)v161);
      unsigned char* cast163 = (unsigned char*)v162;
      long c164 = -24;
      unsigned char* ptr165 = &(cast163)[c164];
      long* cast166 = (long*)ptr165;
      long t167 = *cast166;
      unsigned char* cast168 = (unsigned char*)t160;
      unsigned char* ptr169 = &(cast168)[t167];
      struct std__basic_ostream_char__std__char_traits_char__* cast170 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr169;
      struct std__basic_ios_char__std__char_traits_char__* cast171 = (struct std__basic_ios_char__std__char_traits_char__*)cast170;
      int t172 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast171, t172);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t173 = __out154;
      char* t174 = __s155;
      char* t175 = __s155;
      unsigned long r176 = std__char_traits_char___length(t175);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast177 = (long)r176;
      struct std__basic_ostream_char__std__char_traits_char__* r178 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t173, t174, cast177);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __out154;
  __retval156 = t179;
  struct std__basic_ostream_char__std__char_traits_char__* t180 = __retval156;
  return t180;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v181, void* v182) {
bb183: ;
  struct std__basic_ostream_char__std__char_traits_char__* this184;
  void* __pf185;
  struct std__basic_ostream_char__std__char_traits_char__* __retval186;
  this184 = v181;
  __pf185 = v182;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = this184;
  void* t188 = __pf185;
  struct std__basic_ostream_char__std__char_traits_char__* r189 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t188)(t187);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval186 = r189;
  struct std__basic_ostream_char__std__char_traits_char__* t190 = __retval186;
  return t190;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v191) {
bb192: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os193;
  struct std__basic_ostream_char__std__char_traits_char__* __retval194;
  __os193 = v191;
  struct std__basic_ostream_char__std__char_traits_char__* t195 = __os193;
  struct std__basic_ostream_char__std__char_traits_char__* r196 = std__ostream__flush(t195);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval194 = r196;
  struct std__basic_ostream_char__std__char_traits_char__* t197 = __retval194;
  return t197;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v198) {
bb199: ;
  struct std__ctype_char_* __f200;
  struct std__ctype_char_* __retval201;
  __f200 = v198;
    struct std__ctype_char_* t202 = __f200;
    _Bool cast203 = (_Bool)t202;
    _Bool u204 = !cast203;
    if (u204) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t205 = __f200;
  __retval201 = t205;
  struct std__ctype_char_* t206 = __retval201;
  return t206;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v207, char v208) {
bb209: ;
  struct std__ctype_char_* this210;
  char __c211;
  char __retval212;
  this210 = v207;
  __c211 = v208;
  struct std__ctype_char_* t213 = this210;
    char t214 = t213->_M_widen_ok;
    _Bool cast215 = (_Bool)t214;
    if (cast215) {
      char t216 = __c211;
      unsigned char cast217 = (unsigned char)t216;
      unsigned long cast218 = (unsigned long)cast217;
      char t219 = t213->_M_widen[cast218];
      __retval212 = t219;
      char t220 = __retval212;
      return t220;
    }
  std__ctype_char____M_widen_init___const(t213);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t221 = __c211;
  void** v222 = (void**)t213;
  void* v223 = *((void**)v222);
  char vcall226 = (char)__VERIFIER_virtual_call_char_char(t213, 6, t221);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval212 = vcall226;
  char t227 = __retval212;
  return t227;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v228, char v229) {
bb230: ;
  struct std__basic_ios_char__std__char_traits_char__* this231;
  char __c232;
  char __retval233;
  this231 = v228;
  __c232 = v229;
  struct std__basic_ios_char__std__char_traits_char__* t234 = this231;
  struct std__ctype_char_* t235 = t234->_M_ctype;
  struct std__ctype_char_* r236 = std__ctype_char__const__std____check_facet_std__ctype_char___(t235);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t237 = __c232;
  char r238 = std__ctype_char___widen_char__const(r236, t237);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval233 = r238;
  char t239 = __retval233;
  return t239;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v240) {
bb241: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os242;
  struct std__basic_ostream_char__std__char_traits_char__* __retval243;
  __os242 = v240;
  struct std__basic_ostream_char__std__char_traits_char__* t244 = __os242;
  struct std__basic_ostream_char__std__char_traits_char__* t245 = __os242;
  void** v246 = (void**)t245;
  void* v247 = *((void**)v246);
  unsigned char* cast248 = (unsigned char*)v247;
  long c249 = -24;
  unsigned char* ptr250 = &(cast248)[c249];
  long* cast251 = (long*)ptr250;
  long t252 = *cast251;
  unsigned char* cast253 = (unsigned char*)t245;
  unsigned char* ptr254 = &(cast253)[t252];
  struct std__basic_ostream_char__std__char_traits_char__* cast255 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr254;
  struct std__basic_ios_char__std__char_traits_char__* cast256 = (struct std__basic_ios_char__std__char_traits_char__*)cast255;
  char c257 = 10;
  char r258 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast256, c257);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r259 = std__ostream__put(t244, r258);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r260 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r259);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval243 = r260;
  struct std__basic_ostream_char__std__char_traits_char__* t261 = __retval243;
  return t261;
}

// function: _ZNSt5stackIiSt6vectorIiSaIiEEED2Ev
void std__stack_int__std__vector_int__std__allocator_int________stack(struct std__stack_int__std__vector_int__std__allocator_int___* v262) {
bb263: ;
  struct std__stack_int__std__vector_int__std__allocator_int___* this264;
  this264 = v262;
  struct std__stack_int__std__vector_int__std__allocator_int___* t265 = this264;
  {
    std__vector_int__std__allocator_int______vector(&t265->c);
  }
  return;
}

// function: _ZNSt5stackIiSt5dequeIiSaIiEEED2Ev
void std__stack_int__std__deque_int__std__allocator_int________stack(struct std__stack_int__std__deque_int__std__allocator_int___* v266) {
bb267: ;
  struct std__stack_int__std__deque_int__std__allocator_int___* this268;
  this268 = v266;
  struct std__stack_int__std__deque_int__std__allocator_int___* t269 = this268;
  {
    std__deque_int__std__allocator_int______deque(&t269->c);
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v270) {
bb271: ;
  struct std__vector_int__std__allocator_int__* this272;
  this272 = v270;
  struct std__vector_int__std__allocator_int__* t273 = this272;
    struct std___Vector_base_int__std__allocator_int__* base274 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t273 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base275 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base274->_M_impl) + 0);
    int* t276 = base275->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base277 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t273 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base278 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base277->_M_impl) + 0);
    int* t279 = base278->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base280 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t273 + 0);
    struct std__allocator_int_* r281 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base280);
    void_std___Destroy_int___int_(t276, t279, r281);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base282 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t273 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base282);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base283 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t273 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base283);
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v284) {
bb285: ;
  struct std__deque_int__std__allocator_int__* this286;
  struct std___Deque_iterator_int__int____int___ agg_tmp0287;
  struct std___Deque_iterator_int__int____int___ agg_tmp1288;
  this286 = v284;
  struct std__deque_int__std__allocator_int__* t289 = this286;
    struct std___Deque_iterator_int__int____int___ r290 = std__deque_int__std__allocator_int_____begin(t289);
    agg_tmp0287 = r290;
    struct std___Deque_iterator_int__int____int___ r291 = std__deque_int__std__allocator_int_____end(t289);
    agg_tmp1288 = r291;
    struct std___Deque_base_int__std__allocator_int__* base292 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t289 + 0);
    struct std__allocator_int_* r293 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base292);
    struct std___Deque_iterator_int__int____int___ t294 = agg_tmp0287;
    struct std___Deque_iterator_int__int____int___ t295 = agg_tmp1288;
    std__deque_int__std__allocator_int______M_destroy_data(t289, t294, t295, r293);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base296 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t289 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base296);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base297 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t289 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base297);
  }
  return;
}

// function: main
int main() {
bb298: ;
  int __retval299;
  struct std__deque_int__std__allocator_int__ mydeque300;
  int ref_tmp0301;
  struct std__allocator_int_ ref_tmp1302;
  struct std__vector_int__std__allocator_int__ myvector303;
  int ref_tmp2304;
  struct std__allocator_int_ ref_tmp3305;
  struct std__stack_int__std__deque_int__std__allocator_int___ first306;
  struct std__stack_int__std__deque_int__std__allocator_int___ second307;
  struct std__stack_int__std__vector_int__std__allocator_int___ third308;
  struct std__stack_int__std__vector_int__std__allocator_int___ fourth309;
  int c310 = 0;
  __retval299 = c310;
  unsigned long c311 = 3;
  int c312 = 100;
  ref_tmp0301 = c312;
  std__allocator_int___allocator_2(&ref_tmp1302);
    std__deque_int__std__allocator_int_____deque_2(&mydeque300, c311, &ref_tmp0301, &ref_tmp1302);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp1302);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp1302);
  }
    unsigned long c313 = 2;
    int c314 = 200;
    ref_tmp2304 = c314;
    std__allocator_int___allocator_2(&ref_tmp3305);
      std__vector_int__std__allocator_int_____vector_2(&myvector303, c313, &ref_tmp2304, &ref_tmp3305);
      if (__cir_exc_active) {
        {
          std__allocator_int____allocator(&ref_tmp3305);
        }
        {
          std__deque_int__std__allocator_int______deque(&mydeque300);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    {
      std__allocator_int____allocator(&ref_tmp3305);
    }
      std__stack_int__std__deque_int__std__allocator_int_______stack_std__deque_int__std__allocator_int_____void_(&first306);
      if (__cir_exc_active) {
        {
          std__vector_int__std__allocator_int______vector(&myvector303);
        }
        {
          std__deque_int__std__allocator_int______deque(&mydeque300);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        std__stack_int__std__deque_int__std__allocator_int_______stack(&second307, &mydeque300);
        if (__cir_exc_active) {
          {
            std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
          }
          {
            std__vector_int__std__allocator_int______vector(&myvector303);
          }
          {
            std__deque_int__std__allocator_int______deque(&mydeque300);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
          std__stack_int__std__vector_int__std__allocator_int_______stack_std__vector_int__std__allocator_int_____void_(&third308);
          if (__cir_exc_active) {
            {
              std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
            }
            {
              std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
            }
            {
              std__vector_int__std__allocator_int______vector(&myvector303);
            }
            {
              std__deque_int__std__allocator_int______deque(&mydeque300);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
            std__stack_int__std__vector_int__std__allocator_int_______stack(&fourth309, &myvector303);
            if (__cir_exc_active) {
              {
                std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
              }
              {
                std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
              }
              {
                std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
              }
              {
                std__vector_int__std__allocator_int______vector(&myvector303);
              }
              {
                std__deque_int__std__allocator_int______deque(&mydeque300);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
              unsigned long r315 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&first306);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              unsigned long c316 = 0;
              _Bool c317 = ((r315 == c316)) ? 1 : 0;
              if (c317) {
              } else {
                char* cast318 = (char*)&(_str);
                char* c319 = (char*)_str_1;
                unsigned int c320 = 27;
                char* cast321 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast318, c319, c320, cast321);
              }
              unsigned long r322 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&second307);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              unsigned long c323 = 3;
              _Bool c324 = ((r322 == c323)) ? 1 : 0;
              if (c324) {
              } else {
                char* cast325 = (char*)&(_str_2);
                char* c326 = (char*)_str_1;
                unsigned int c327 = 28;
                char* cast328 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast325, c326, c327, cast328);
              }
              unsigned long r329 = std__stack_int__std__vector_int__std__allocator_int_______size___const(&third308);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              unsigned long c330 = 0;
              _Bool c331 = ((r329 == c330)) ? 1 : 0;
              if (c331) {
              } else {
                char* cast332 = (char*)&(_str_3);
                char* c333 = (char*)_str_1;
                unsigned int c334 = 29;
                char* cast335 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast332, c333, c334, cast335);
              }
              unsigned long r336 = std__stack_int__std__vector_int__std__allocator_int_______size___const(&fourth309);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              unsigned long c337 = 2;
              _Bool c338 = ((r336 == c337)) ? 1 : 0;
              if (c338) {
              } else {
                char* cast339 = (char*)&(_str_4);
                char* c340 = (char*)_str_1;
                unsigned int c341 = 30;
                char* cast342 = (char*)&(__PRETTY_FUNCTION___main);
                __assert_fail(cast339, c340, c341, cast342);
              }
              char* cast343 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* r344 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast343);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              unsigned long r345 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&first306);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              int cast346 = (int)r345;
              struct std__basic_ostream_char__std__char_traits_char__* r347 = std__ostream__operator__(r344, cast346);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r348 = std__ostream__operator___std__ostream_____(r347, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast349 = (char*)&(_str_6);
              struct std__basic_ostream_char__std__char_traits_char__* r350 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast349);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              unsigned long r351 = std__stack_int__std__deque_int__std__allocator_int_______size___const(&second307);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              int cast352 = (int)r351;
              struct std__basic_ostream_char__std__char_traits_char__* r353 = std__ostream__operator__(r350, cast352);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r354 = std__ostream__operator___std__ostream_____(r353, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast355 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* r356 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast355);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              unsigned long r357 = std__stack_int__std__vector_int__std__allocator_int_______size___const(&third308);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              int cast358 = (int)r357;
              struct std__basic_ostream_char__std__char_traits_char__* r359 = std__ostream__operator__(r356, cast358);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r360 = std__ostream__operator___std__ostream_____(r359, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              char* cast361 = (char*)&(_str_8);
              struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast361);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              unsigned long r363 = std__stack_int__std__vector_int__std__allocator_int_______size___const(&fourth309);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              int cast364 = (int)r363;
              struct std__basic_ostream_char__std__char_traits_char__* r365 = std__ostream__operator__(r362, cast364);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              struct std__basic_ostream_char__std__char_traits_char__* r366 = std__ostream__operator___std__ostream_____(r365, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              if (__cir_exc_active) {
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
                }
                {
                  std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
                }
                {
                  std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
                }
                {
                  std__vector_int__std__allocator_int______vector(&myvector303);
                }
                {
                  std__deque_int__std__allocator_int______deque(&mydeque300);
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
              int c367 = 0;
              __retval299 = c367;
              int t368 = __retval299;
              int ret_val369 = t368;
              {
                std__stack_int__std__vector_int__std__allocator_int________stack(&fourth309);
              }
              {
                std__stack_int__std__vector_int__std__allocator_int________stack(&third308);
              }
              {
                std__stack_int__std__deque_int__std__allocator_int________stack(&second307);
              }
              {
                std__stack_int__std__deque_int__std__allocator_int________stack(&first306);
              }
              {
                std__vector_int__std__allocator_int______vector(&myvector303);
              }
              {
                std__deque_int__std__allocator_int______deque(&mydeque300);
              }
              return ret_val369;
  int t370 = __retval299;
  return t370;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v371) {
bb372: ;
  struct std____new_allocator_int_* this373;
  this373 = v371;
  struct std____new_allocator_int_* t374 = this373;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v375, unsigned long* v376) {
bb377: ;
  unsigned long* __a378;
  unsigned long* __b379;
  unsigned long* __retval380;
  __a378 = v375;
  __b379 = v376;
    unsigned long* t381 = __b379;
    unsigned long t382 = *t381;
    unsigned long* t383 = __a378;
    unsigned long t384 = *t383;
    _Bool c385 = ((t382 < t384)) ? 1 : 0;
    if (c385) {
      unsigned long* t386 = __b379;
      __retval380 = t386;
      unsigned long* t387 = __retval380;
      return t387;
    }
  unsigned long* t388 = __a378;
  __retval380 = t388;
  unsigned long* t389 = __retval380;
  return t389;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v390) {
bb391: ;
  struct std__allocator_int_* __a392;
  unsigned long __retval393;
  unsigned long __diffmax394;
  unsigned long __allocmax395;
  __a392 = v390;
  unsigned long c396 = 2305843009213693951;
  __diffmax394 = c396;
  unsigned long c397 = 4611686018427387903;
  __allocmax395 = c397;
  unsigned long* r398 = unsigned_long_const__std__min_unsigned_long_(&__diffmax394, &__allocmax395);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t399 = *r398;
  __retval393 = t399;
  unsigned long t400 = __retval393;
  return t400;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v401, struct std__allocator_int_* v402) {
bb403: ;
  struct std__allocator_int_* this404;
  struct std__allocator_int_* __a405;
  this404 = v401;
  __a405 = v402;
  struct std__allocator_int_* t406 = this404;
  struct std____new_allocator_int_* base407 = (struct std____new_allocator_int_*)((char *)t406 + 0);
  struct std__allocator_int_* t408 = __a405;
  struct std____new_allocator_int_* base409 = (struct std____new_allocator_int_*)((char *)t408 + 0);
  std____new_allocator_int_____new_allocator(base407, base409);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v410, struct std__allocator_int_* v411) {
bb412: ;
  unsigned long __n413;
  struct std__allocator_int_* __a414;
  unsigned long __retval415;
  __n413 = v410;
  __a414 = v411;
    struct std__allocator_int_ ref_tmp0416;
    _Bool tmp_exprcleanup417;
    unsigned long t418 = __n413;
    struct std__allocator_int_* t419 = __a414;
    std__allocator_int___allocator(&ref_tmp0416, t419);
      unsigned long r420 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0416);
      _Bool c421 = ((t418 > r420)) ? 1 : 0;
      tmp_exprcleanup417 = c421;
    {
      std__allocator_int____allocator(&ref_tmp0416);
    }
    _Bool t422 = tmp_exprcleanup417;
    if (t422) {
      char* cast423 = (char*)&(_str_9);
      std____throw_length_error(cast423);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t424 = __n413;
  __retval415 = t424;
  unsigned long t425 = __retval415;
  return t425;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v426, struct std__allocator_int_* v427) {
bb428: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this429;
  struct std__allocator_int_* __a430;
  this429 = v426;
  __a430 = v427;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t431 = this429;
  struct std__allocator_int_* base432 = (struct std__allocator_int_*)((char *)t431 + 0);
  struct std__allocator_int_* t433 = __a430;
  std__allocator_int___allocator(base432, t433);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base434 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t431 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base434);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb435: ;
  _Bool __retval436;
    _Bool c437 = 0;
    __retval436 = c437;
    _Bool t438 = __retval436;
    return t438;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v439) {
bb440: ;
  struct std____new_allocator_int_* this441;
  unsigned long __retval442;
  this441 = v439;
  struct std____new_allocator_int_* t443 = this441;
  unsigned long c444 = 9223372036854775807;
  unsigned long c445 = 4;
  unsigned long b446 = c444 / c445;
  __retval442 = b446;
  unsigned long t447 = __retval442;
  return t447;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v448, unsigned long v449, void* v450) {
bb451: ;
  struct std____new_allocator_int_* this452;
  unsigned long __n453;
  void* unnamed454;
  int* __retval455;
  this452 = v448;
  __n453 = v449;
  unnamed454 = v450;
  struct std____new_allocator_int_* t456 = this452;
    unsigned long t457 = __n453;
    unsigned long r458 = std____new_allocator_int____M_max_size___const(t456);
    _Bool c459 = ((t457 > r458)) ? 1 : 0;
    if (c459) {
        unsigned long t460 = __n453;
        unsigned long c461 = -1;
        unsigned long c462 = 4;
        unsigned long b463 = c461 / c462;
        _Bool c464 = ((t460 > b463)) ? 1 : 0;
        if (c464) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c465 = 4;
    unsigned long c466 = 16;
    _Bool c467 = ((c465 > c466)) ? 1 : 0;
    if (c467) {
      unsigned long __al468;
      unsigned long c469 = 4;
      __al468 = c469;
      unsigned long t470 = __n453;
      unsigned long c471 = 4;
      unsigned long b472 = t470 * c471;
      unsigned long t473 = __al468;
      void* r474 = operator_new_2(b472, t473);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast475 = (int*)r474;
      __retval455 = cast475;
      int* t476 = __retval455;
      return t476;
    }
  unsigned long t477 = __n453;
  unsigned long c478 = 4;
  unsigned long b479 = t477 * c478;
  void* r480 = operator_new(b479);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast481 = (int*)r480;
  __retval455 = cast481;
  int* t482 = __retval455;
  return t482;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v483, unsigned long v484) {
bb485: ;
  struct std__allocator_int_* this486;
  unsigned long __n487;
  int* __retval488;
  this486 = v483;
  __n487 = v484;
  struct std__allocator_int_* t489 = this486;
    _Bool r490 = std____is_constant_evaluated();
    if (r490) {
        unsigned long t491 = __n487;
        unsigned long c492 = 4;
        unsigned long ovr493;
        _Bool ovf494 = __builtin_mul_overflow(t491, c492, &ovr493);
        __n487 = ovr493;
        if (ovf494) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t495 = __n487;
      void* r496 = operator_new(t495);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast497 = (int*)r496;
      __retval488 = cast497;
      int* t498 = __retval488;
      return t498;
    }
  struct std____new_allocator_int_* base499 = (struct std____new_allocator_int_*)((char *)t489 + 0);
  unsigned long t500 = __n487;
  void* c501 = ((void*)0);
  int* r502 = std____new_allocator_int___allocate(base499, t500, c501);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval488 = r502;
  int* t503 = __retval488;
  return t503;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v504, unsigned long v505) {
bb506: ;
  struct std__allocator_int_* __a507;
  unsigned long __n508;
  int* __retval509;
  __a507 = v504;
  __n508 = v505;
  struct std__allocator_int_* t510 = __a507;
  unsigned long t511 = __n508;
  int* r512 = std__allocator_int___allocate(t510, t511);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval509 = r512;
  int* t513 = __retval509;
  return t513;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v514, unsigned long v515) {
bb516: ;
  struct std___Vector_base_int__std__allocator_int__* this517;
  unsigned long __n518;
  int* __retval519;
  this517 = v514;
  __n518 = v515;
  struct std___Vector_base_int__std__allocator_int__* t520 = this517;
  unsigned long t521 = __n518;
  unsigned long c522 = 0;
  _Bool c523 = ((t521 != c522)) ? 1 : 0;
  int* ternary524;
  if (c523) {
    struct std__allocator_int_* base525 = (struct std__allocator_int_*)((char *)&(t520->_M_impl) + 0);
    unsigned long t526 = __n518;
    int* r527 = std__allocator_traits_std__allocator_int_____allocate(base525, t526);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary524 = (int*)r527;
  } else {
    int* c528 = ((void*)0);
    ternary524 = (int*)c528;
  }
  __retval519 = ternary524;
  int* t529 = __retval519;
  return t529;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v530, unsigned long v531) {
bb532: ;
  struct std___Vector_base_int__std__allocator_int__* this533;
  unsigned long __n534;
  this533 = v530;
  __n534 = v531;
  struct std___Vector_base_int__std__allocator_int__* t535 = this533;
  unsigned long t536 = __n534;
  int* r537 = std___Vector_base_int__std__allocator_int______M_allocate(t535, t536);
  if (__cir_exc_active) {
    return;
  }
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base538 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t535->_M_impl) + 0);
  base538->_M_start = r537;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base539 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t535->_M_impl) + 0);
  int* t540 = base539->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base541 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t535->_M_impl) + 0);
  base541->_M_finish = t540;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base542 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t535->_M_impl) + 0);
  int* t543 = base542->_M_start;
  unsigned long t544 = __n534;
  int* ptr545 = &(t543)[t544];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base546 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t535->_M_impl) + 0);
  base546->_M_end_of_storage = ptr545;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v547) {
bb548: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this549;
  this549 = v547;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t550 = this549;
  {
    struct std__allocator_int_* base551 = (struct std__allocator_int_*)((char *)t550 + 0);
    std__allocator_int____allocator(base551);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v552, unsigned long v553, struct std__allocator_int_* v554) {
bb555: ;
  struct std___Vector_base_int__std__allocator_int__* this556;
  unsigned long __n557;
  struct std__allocator_int_* __a558;
  this556 = v552;
  __n557 = v553;
  __a558 = v554;
  struct std___Vector_base_int__std__allocator_int__* t559 = this556;
  struct std__allocator_int_* t560 = __a558;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t559->_M_impl, t560);
    unsigned long t561 = __n557;
    std___Vector_base_int__std__allocator_int______M_create_storage(t559, t561);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t559->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb562: ;
  _Bool __retval563;
    _Bool c564 = 0;
    __retval563 = c564;
    _Bool t565 = __retval563;
    return t565;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v566, int** v567) {
bb568: ;
  struct std___UninitDestroyGuard_int____void_* this569;
  int** __first570;
  this569 = v566;
  __first570 = v567;
  struct std___UninitDestroyGuard_int____void_* t571 = this569;
  int** t572 = __first570;
  int* t573 = *t572;
  t571->_M_first = t573;
  int** t574 = __first570;
  t571->_M_cur = t574;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v575, int* v576) {
bb577: ;
  int* __location578;
  int* __args579;
  int* __retval580;
  void* __loc581;
  __location578 = v575;
  __args579 = v576;
  int* t582 = __location578;
  void* cast583 = (void*)t582;
  __loc581 = cast583;
    void* t584 = __loc581;
    int* cast585 = (int*)t584;
    int* t586 = __args579;
    int t587 = *t586;
    *cast585 = t587;
    __retval580 = cast585;
    int* t588 = __retval580;
    return t588;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v589, int* v590) {
bb591: ;
  int* __p592;
  int* __args593;
  __p592 = v589;
  __args593 = v590;
    _Bool r594 = std____is_constant_evaluated();
    if (r594) {
      int* t595 = __p592;
      int* t596 = __args593;
      int* r597 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t595, t596);
      return;
    }
  int* t598 = __p592;
  void* cast599 = (void*)t598;
  int* cast600 = (int*)cast599;
  int* t601 = __args593;
  int t602 = *t601;
  *cast600 = t602;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v603) {
bb604: ;
  struct std___UninitDestroyGuard_int____void_* this605;
  this605 = v603;
  struct std___UninitDestroyGuard_int____void_* t606 = this605;
  int** c607 = ((void*)0);
  t606->_M_cur = c607;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v608) {
bb609: ;
  struct std___UninitDestroyGuard_int____void_* this610;
  this610 = v608;
  struct std___UninitDestroyGuard_int____void_* t611 = this610;
    int** t612 = t611->_M_cur;
    int** c613 = ((void*)0);
    _Bool c614 = ((t612 != c613)) ? 1 : 0;
    if (c614) {
      int* t615 = t611->_M_first;
      int** t616 = t611->_M_cur;
      int* t617 = *t616;
      void_std___Destroy_int__(t615, t617);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v618, unsigned long v619, int* v620) {
bb621: ;
  int* __first622;
  unsigned long __n623;
  int* __x624;
  int* __retval625;
  struct std___UninitDestroyGuard_int____void_ __guard626;
  __first622 = v618;
  __n623 = v619;
  __x624 = v620;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard626, &__first622);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
        do {
              unsigned long t627 = __n623;
              unsigned long c628 = 0;
              _Bool c629 = ((t627 >= c628)) ? 1 : 0;
              _Bool u630 = !c629;
              if (u630) {
                char* cast631 = (char*)&(_str_10);
                int c632 = 463;
                char* cast633 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast634 = (char*)&(_str_11);
                std____glibcxx_assert_fail(cast631, c632, cast633, cast634);
              }
          _Bool c635 = 0;
          if (!c635) break;
        } while (1);
      while (1) {
        unsigned long t637 = __n623;
        unsigned long u638 = t637 - 1;
        __n623 = u638;
        _Bool cast639 = (_Bool)t637;
        if (!cast639) break;
        int* t640 = __first622;
        int* t641 = __x624;
        void_std___Construct_int__int_const__(t640, t641);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard626);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step636: ;
        int* t642 = __first622;
        int c643 = 1;
        int* ptr644 = &(t642)[c643];
        __first622 = ptr644;
      }
    std___UninitDestroyGuard_int___void___release(&__guard626);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard626);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t645 = __first622;
    __retval625 = t645;
    int* t646 = __retval625;
    int* ret_val647 = t646;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard626);
    }
    return ret_val647;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v648, unsigned long v649, int* v650) {
bb651: ;
  int* __first652;
  unsigned long __n653;
  int* __x654;
  int* __retval655;
  __first652 = v648;
  __n653 = v649;
  __x654 = v650;
  int* t656 = __first652;
  unsigned long t657 = __n653;
  int* t658 = __x654;
  int* r659 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t656, t657, t658);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval655 = r659;
  int* t660 = __retval655;
  return t660;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v661, unsigned long v662, int* v663, struct std__allocator_int_* v664) {
bb665: ;
  int* __first666;
  unsigned long __n667;
  int* __x668;
  struct std__allocator_int_* unnamed669;
  int* __retval670;
  __first666 = v661;
  __n667 = v662;
  __x668 = v663;
  unnamed669 = v664;
    _Bool r671 = std__is_constant_evaluated();
    if (r671) {
      int* t672 = __first666;
      unsigned long t673 = __n667;
      int* t674 = __x668;
      int* r675 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t672, t673, t674);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval670 = r675;
      int* t676 = __retval670;
      return t676;
    }
  int* t677 = __first666;
  unsigned long t678 = __n667;
  int* t679 = __x668;
  int* r680 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t677, t678, t679);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval670 = r680;
  int* t681 = __retval670;
  return t681;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v682) {
bb683: ;
  struct std___Vector_base_int__std__allocator_int__* this684;
  struct std__allocator_int_* __retval685;
  this684 = v682;
  struct std___Vector_base_int__std__allocator_int__* t686 = this684;
  struct std__allocator_int_* base687 = (struct std__allocator_int_*)((char *)&(t686->_M_impl) + 0);
  __retval685 = base687;
  struct std__allocator_int_* t688 = __retval685;
  return t688;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v689, unsigned long v690, int* v691) {
bb692: ;
  struct std__vector_int__std__allocator_int__* this693;
  unsigned long __n694;
  int* __value695;
  this693 = v689;
  __n694 = v690;
  __value695 = v691;
  struct std__vector_int__std__allocator_int__* t696 = this693;
  struct std___Vector_base_int__std__allocator_int__* base697 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t696 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base698 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base697->_M_impl) + 0);
  int* t699 = base698->_M_start;
  unsigned long t700 = __n694;
  int* t701 = __value695;
  struct std___Vector_base_int__std__allocator_int__* base702 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t696 + 0);
  struct std__allocator_int_* r703 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base702);
  int* r704 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t699, t700, t701, r703);
  if (__cir_exc_active) {
    return;
  }
  struct std___Vector_base_int__std__allocator_int__* base705 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t696 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base706 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base705->_M_impl) + 0);
  base706->_M_finish = r704;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v707, int* v708, unsigned long v709) {
bb710: ;
  struct std____new_allocator_int_* this711;
  int* __p712;
  unsigned long __n713;
  this711 = v707;
  __p712 = v708;
  __n713 = v709;
  struct std____new_allocator_int_* t714 = this711;
    unsigned long c715 = 4;
    unsigned long c716 = 16;
    _Bool c717 = ((c715 > c716)) ? 1 : 0;
    if (c717) {
      int* t718 = __p712;
      void* cast719 = (void*)t718;
      unsigned long t720 = __n713;
      unsigned long c721 = 4;
      unsigned long b722 = t720 * c721;
      unsigned long c723 = 4;
      operator_delete_3(cast719, b722, c723);
      return;
    }
  int* t724 = __p712;
  void* cast725 = (void*)t724;
  unsigned long t726 = __n713;
  unsigned long c727 = 4;
  unsigned long b728 = t726 * c727;
  operator_delete_2(cast725, b728);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v729, int* v730, unsigned long v731) {
bb732: ;
  struct std__allocator_int_* this733;
  int* __p734;
  unsigned long __n735;
  this733 = v729;
  __p734 = v730;
  __n735 = v731;
  struct std__allocator_int_* t736 = this733;
    _Bool r737 = std____is_constant_evaluated();
    if (r737) {
      int* t738 = __p734;
      void* cast739 = (void*)t738;
      operator_delete(cast739);
      return;
    }
  struct std____new_allocator_int_* base740 = (struct std____new_allocator_int_*)((char *)t736 + 0);
  int* t741 = __p734;
  unsigned long t742 = __n735;
  std____new_allocator_int___deallocate(base740, t741, t742);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v743, int* v744, unsigned long v745) {
bb746: ;
  struct std__allocator_int_* __a747;
  int* __p748;
  unsigned long __n749;
  __a747 = v743;
  __p748 = v744;
  __n749 = v745;
  struct std__allocator_int_* t750 = __a747;
  int* t751 = __p748;
  unsigned long t752 = __n749;
  std__allocator_int___deallocate(t750, t751, t752);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v753, int* v754, unsigned long v755) {
bb756: ;
  struct std___Vector_base_int__std__allocator_int__* this757;
  int* __p758;
  unsigned long __n759;
  this757 = v753;
  __p758 = v754;
  __n759 = v755;
  struct std___Vector_base_int__std__allocator_int__* t760 = this757;
    int* t761 = __p758;
    _Bool cast762 = (_Bool)t761;
    if (cast762) {
      struct std__allocator_int_* base763 = (struct std__allocator_int_*)((char *)&(t760->_M_impl) + 0);
      int* t764 = __p758;
      unsigned long t765 = __n759;
      std__allocator_traits_std__allocator_int_____deallocate(base763, t764, t765);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v766) {
bb767: ;
  struct std___Vector_base_int__std__allocator_int__* this768;
  this768 = v766;
  struct std___Vector_base_int__std__allocator_int__* t769 = this768;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base770 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t769->_M_impl) + 0);
    int* t771 = base770->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base772 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t769->_M_impl) + 0);
    int* t773 = base772->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base774 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t769->_M_impl) + 0);
    int* t775 = base774->_M_start;
    long diff776 = t773 - t775;
    unsigned long cast777 = (unsigned long)diff776;
    std___Vector_base_int__std__allocator_int______M_deallocate(t769, t771, cast777);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t769->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t769->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v778, struct std____new_allocator_int_* v779) {
bb780: ;
  struct std____new_allocator_int_* this781;
  struct std____new_allocator_int_* unnamed782;
  this781 = v778;
  unnamed782 = v779;
  struct std____new_allocator_int_* t783 = this781;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v784) {
bb785: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this786;
  this786 = v784;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t787 = this786;
  int* c788 = ((void*)0);
  t787->_M_start = c788;
  int* c789 = ((void*)0);
  t787->_M_finish = c789;
  int* c790 = ((void*)0);
  t787->_M_end_of_storage = c790;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v791) {
bb792: ;
  int* __location793;
  __location793 = v791;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v794, int* v795) {
bb796: ;
  int* __first797;
  int* __last798;
  __first797 = v794;
  __last798 = v795;
      _Bool r799 = std____is_constant_evaluated();
      if (r799) {
          while (1) {
            int* t801 = __first797;
            int* t802 = __last798;
            _Bool c803 = ((t801 != t802)) ? 1 : 0;
            if (!c803) break;
            int* t804 = __first797;
            void_std__destroy_at_int_(t804);
            if (__cir_exc_active) {
              return;
            }
          for_step800: ;
            int* t805 = __first797;
            int c806 = 1;
            int* ptr807 = &(t805)[c806];
            __first797 = ptr807;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v808, int* v809, struct std__allocator_int_* v810) {
bb811: ;
  int* __first812;
  int* __last813;
  struct std__allocator_int_* unnamed814;
  __first812 = v808;
  __last813 = v809;
  unnamed814 = v810;
  int* t815 = __first812;
  int* t816 = __last813;
  void_std___Destroy_int__(t815, t816);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v817) {
bb818: ;
  struct std__allocator_int_* __a819;
  unsigned long __retval820;
  unsigned long __diffmax821;
  unsigned long __allocmax822;
  __a819 = v817;
  unsigned long c823 = 9223372036854775807;
  __diffmax821 = c823;
  unsigned long c824 = 4611686018427387903;
  __allocmax822 = c824;
  unsigned long* r825 = unsigned_long_const__std__min_unsigned_long_(&__diffmax821, &__allocmax822);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t826 = *r825;
  __retval820 = t826;
  unsigned long t827 = __retval820;
  return t827;
}

// function: _ZNSt5dequeIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long v828, struct std__allocator_int_* v829) {
bb830: ;
  unsigned long __n831;
  struct std__allocator_int_* __a832;
  unsigned long __retval833;
  __n831 = v828;
  __a832 = v829;
    unsigned long t834 = __n831;
    struct std__allocator_int_* t835 = __a832;
    unsigned long r836 = std__deque_int__std__allocator_int______S_max_size(t835);
    _Bool c837 = ((t834 > r836)) ? 1 : 0;
    if (c837) {
      char* cast838 = (char*)&(_str_12);
      std____throw_length_error(cast838);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t839 = __n831;
  __retval833 = t839;
  unsigned long t840 = __retval833;
  return t840;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2ERKS0_
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v841, struct std__allocator_int_* v842) {
bb843: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this844;
  struct std__allocator_int_* __a845;
  this844 = v841;
  __a845 = v842;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t846 = this844;
  struct std__allocator_int_* base847 = (struct std__allocator_int_*)((char *)t846 + 0);
  struct std__allocator_int_* t848 = __a845;
  std__allocator_int___allocator(base847, t848);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base849 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t846 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base849);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v850) {
bb851: ;
  unsigned long __size852;
  unsigned long __retval853;
  __size852 = v850;
  unsigned long t854 = __size852;
  unsigned long c855 = 512;
  _Bool c856 = ((t854 < c855)) ? 1 : 0;
  unsigned long ternary857;
  if (c856) {
    unsigned long c858 = 512;
    unsigned long t859 = __size852;
    unsigned long b860 = c858 / t859;
    ternary857 = (unsigned long)b860;
  } else {
    unsigned long c861 = 1;
    ternary857 = (unsigned long)c861;
  }
  __retval853 = ternary857;
  unsigned long t862 = __retval853;
  return t862;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v863, unsigned long* v864) {
bb865: ;
  unsigned long* __a866;
  unsigned long* __b867;
  unsigned long* __retval868;
  __a866 = v863;
  __b867 = v864;
    unsigned long* t869 = __a866;
    unsigned long t870 = *t869;
    unsigned long* t871 = __b867;
    unsigned long t872 = *t871;
    _Bool c873 = ((t870 < t872)) ? 1 : 0;
    if (c873) {
      unsigned long* t874 = __b867;
      __retval868 = t874;
      unsigned long* t875 = __retval868;
      return t875;
    }
  unsigned long* t876 = __a866;
  __retval868 = t876;
  unsigned long* t877 = __retval868;
  return t877;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v878) {
bb879: ;
  struct std___Deque_base_int__std__allocator_int__* this880;
  struct std__allocator_int_* __retval881;
  this880 = v878;
  struct std___Deque_base_int__std__allocator_int__* t882 = this880;
  struct std__allocator_int_* base883 = (struct std__allocator_int_*)((char *)&(t882->_M_impl) + 0);
  __retval881 = base883;
  struct std__allocator_int_* t884 = __retval881;
  return t884;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v885, struct std__allocator_int_* v886) {
bb887: ;
  struct std__allocator_int___* this888;
  struct std__allocator_int_* unnamed889;
  this888 = v885;
  unnamed889 = v886;
  struct std__allocator_int___* t890 = this888;
  struct std____new_allocator_int___* base891 = (struct std____new_allocator_int___*)((char *)t890 + 0);
  std____new_allocator_int______new_allocator(base891);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v892) {
bb893: ;
  struct std___Deque_base_int__std__allocator_int__* this894;
  struct std__allocator_int___ __retval895;
  this894 = v892;
  struct std___Deque_base_int__std__allocator_int__* t896 = this894;
  struct std__allocator_int_* r897 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t896);
  std__allocator_int____allocator_int_(&__retval895, r897);
  struct std__allocator_int___ t898 = __retval895;
  return t898;
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v899) {
bb900: ;
  struct std____new_allocator_int___* this901;
  unsigned long __retval902;
  this901 = v899;
  struct std____new_allocator_int___* t903 = this901;
  unsigned long c904 = 9223372036854775807;
  unsigned long c905 = 8;
  unsigned long b906 = c904 / c905;
  __retval902 = b906;
  unsigned long t907 = __retval902;
  return t907;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v908, unsigned long v909, void* v910) {
bb911: ;
  struct std____new_allocator_int___* this912;
  unsigned long __n913;
  void* unnamed914;
  int** __retval915;
  this912 = v908;
  __n913 = v909;
  unnamed914 = v910;
  struct std____new_allocator_int___* t916 = this912;
    unsigned long t917 = __n913;
    unsigned long r918 = std____new_allocator_int_____M_max_size___const(t916);
    _Bool c919 = ((t917 > r918)) ? 1 : 0;
    if (c919) {
        unsigned long t920 = __n913;
        unsigned long c921 = -1;
        unsigned long c922 = 8;
        unsigned long b923 = c921 / c922;
        _Bool c924 = ((t920 > b923)) ? 1 : 0;
        if (c924) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c925 = 8;
    unsigned long c926 = 16;
    _Bool c927 = ((c925 > c926)) ? 1 : 0;
    if (c927) {
      unsigned long __al928;
      unsigned long c929 = 8;
      __al928 = c929;
      unsigned long t930 = __n913;
      unsigned long c931 = 8;
      unsigned long b932 = t930 * c931;
      unsigned long t933 = __al928;
      void* r934 = operator_new_2(b932, t933);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast935 = (int**)r934;
      __retval915 = cast935;
      int** t936 = __retval915;
      return t936;
    }
  unsigned long t937 = __n913;
  unsigned long c938 = 8;
  unsigned long b939 = t937 * c938;
  void* r940 = operator_new(b939);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast941 = (int**)r940;
  __retval915 = cast941;
  int** t942 = __retval915;
  return t942;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v943, unsigned long v944) {
bb945: ;
  struct std__allocator_int___* this946;
  unsigned long __n947;
  int** __retval948;
  this946 = v943;
  __n947 = v944;
  struct std__allocator_int___* t949 = this946;
    _Bool r950 = std____is_constant_evaluated();
    if (r950) {
        unsigned long t951 = __n947;
        unsigned long c952 = 8;
        unsigned long ovr953;
        _Bool ovf954 = __builtin_mul_overflow(t951, c952, &ovr953);
        __n947 = ovr953;
        if (ovf954) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t955 = __n947;
      void* r956 = operator_new(t955);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast957 = (int**)r956;
      __retval948 = cast957;
      int** t958 = __retval948;
      return t958;
    }
  struct std____new_allocator_int___* base959 = (struct std____new_allocator_int___*)((char *)t949 + 0);
  unsigned long t960 = __n947;
  void* c961 = ((void*)0);
  int** r962 = std____new_allocator_int____allocate(base959, t960, c961);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval948 = r962;
  int** t963 = __retval948;
  return t963;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v964, unsigned long v965) {
bb966: ;
  struct std__allocator_int___* __a967;
  unsigned long __n968;
  int** __retval969;
  __a967 = v964;
  __n968 = v965;
  struct std__allocator_int___* t970 = __a967;
  unsigned long t971 = __n968;
  int** r972 = std__allocator_int____allocate(t970, t971);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval969 = r972;
  int** t973 = __retval969;
  return t973;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v974, unsigned long v975) {
bb976: ;
  struct std___Deque_base_int__std__allocator_int__* this977;
  unsigned long __n978;
  int** __retval979;
  struct std__allocator_int___ __map_alloc980;
  this977 = v974;
  __n978 = v975;
  struct std___Deque_base_int__std__allocator_int__* t981 = this977;
  struct std__allocator_int___ r982 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t981);
  __map_alloc980 = r982;
  unsigned long t983 = __n978;
  int** r984 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc980, t983);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval979 = r984;
  int** t985 = __retval979;
  return t985;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v986) {
bb987: ;
  struct std___Deque_base_int__std__allocator_int__* this988;
  int* __retval989;
  this988 = v986;
  struct std___Deque_base_int__std__allocator_int__* t990 = this988;
  struct std__allocator_int_* base991 = (struct std__allocator_int_*)((char *)&(t990->_M_impl) + 0);
  unsigned long c992 = 4;
  unsigned long r993 = std____deque_buf_size(c992);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r994 = std__allocator_traits_std__allocator_int_____allocate(base991, r993);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval989 = r994;
  int* t995 = __retval989;
  return t995;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v996, int* v997) {
bb998: ;
  struct std___Deque_base_int__std__allocator_int__* this999;
  int* __p1000;
  this999 = v996;
  __p1000 = v997;
  struct std___Deque_base_int__std__allocator_int__* t1001 = this999;
  struct std__allocator_int_* base1002 = (struct std__allocator_int_*)((char *)&(t1001->_M_impl) + 0);
  int* t1003 = __p1000;
  unsigned long c1004 = 4;
  unsigned long r1005 = std____deque_buf_size(c1004);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1002, t1003, r1005);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1006, int** v1007, int** v1008) {
bb1009: ;
  struct std___Deque_base_int__std__allocator_int__* this1010;
  int** __nstart1011;
  int** __nfinish1012;
  this1010 = v1006;
  __nstart1011 = v1007;
  __nfinish1012 = v1008;
  struct std___Deque_base_int__std__allocator_int__* t1013 = this1010;
    int** __n1014;
    int** t1015 = __nstart1011;
    __n1014 = t1015;
    while (1) {
      int** t1017 = __n1014;
      int** t1018 = __nfinish1012;
      _Bool c1019 = ((t1017 < t1018)) ? 1 : 0;
      if (!c1019) break;
      int** t1020 = __n1014;
      int* t1021 = *t1020;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1013, t1021);
    for_step1016: ;
      int** t1022 = __n1014;
      int c1023 = 1;
      int** ptr1024 = &(t1022)[c1023];
      __n1014 = ptr1024;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1025, int** v1026, int** v1027) {
bb1028: ;
  struct std___Deque_base_int__std__allocator_int__* this1029;
  int** __nstart1030;
  int** __nfinish1031;
  int** __cur1032;
  this1029 = v1025;
  __nstart1030 = v1026;
  __nfinish1031 = v1027;
  struct std___Deque_base_int__std__allocator_int__* t1033 = this1029;
        int** t1035 = __nstart1030;
        __cur1032 = t1035;
        while (1) {
          int** t1037 = __cur1032;
          int** t1038 = __nfinish1031;
          _Bool c1039 = ((t1037 < t1038)) ? 1 : 0;
          if (!c1039) break;
          int* r1040 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1033);
          if (__cir_exc_active) {
            goto cir_try_dispatch1034;
          }
          int** t1041 = __cur1032;
          *t1041 = r1040;
        for_step1036: ;
          int** t1042 = __cur1032;
          int c1043 = 1;
          int** ptr1044 = &(t1042)[c1043];
          __cur1032 = ptr1044;
        }
    cir_try_dispatch1034: ;
    if (__cir_exc_active) {
    {
      int ca_tok1045 = 0;
      void* ca_exn1046 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1047 = __nstart1030;
        int** t1048 = __cur1032;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1033, t1047, t1048);
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

// function: _ZNSt15__new_allocatorIPiE10deallocateEPS0_m
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1049, int** v1050, unsigned long v1051) {
bb1052: ;
  struct std____new_allocator_int___* this1053;
  int** __p1054;
  unsigned long __n1055;
  this1053 = v1049;
  __p1054 = v1050;
  __n1055 = v1051;
  struct std____new_allocator_int___* t1056 = this1053;
    unsigned long c1057 = 8;
    unsigned long c1058 = 16;
    _Bool c1059 = ((c1057 > c1058)) ? 1 : 0;
    if (c1059) {
      int** t1060 = __p1054;
      void* cast1061 = (void*)t1060;
      unsigned long t1062 = __n1055;
      unsigned long c1063 = 8;
      unsigned long b1064 = t1062 * c1063;
      unsigned long c1065 = 8;
      operator_delete_3(cast1061, b1064, c1065);
      return;
    }
  int** t1066 = __p1054;
  void* cast1067 = (void*)t1066;
  unsigned long t1068 = __n1055;
  unsigned long c1069 = 8;
  unsigned long b1070 = t1068 * c1069;
  operator_delete_2(cast1067, b1070);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1071, int** v1072, unsigned long v1073) {
bb1074: ;
  struct std__allocator_int___* this1075;
  int** __p1076;
  unsigned long __n1077;
  this1075 = v1071;
  __p1076 = v1072;
  __n1077 = v1073;
  struct std__allocator_int___* t1078 = this1075;
    _Bool r1079 = std____is_constant_evaluated();
    if (r1079) {
      int** t1080 = __p1076;
      void* cast1081 = (void*)t1080;
      operator_delete(cast1081);
      return;
    }
  struct std____new_allocator_int___* base1082 = (struct std____new_allocator_int___*)((char *)t1078 + 0);
  int** t1083 = __p1076;
  unsigned long t1084 = __n1077;
  std____new_allocator_int____deallocate(base1082, t1083, t1084);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1085, int** v1086, unsigned long v1087) {
bb1088: ;
  struct std__allocator_int___* __a1089;
  int** __p1090;
  unsigned long __n1091;
  __a1089 = v1085;
  __p1090 = v1086;
  __n1091 = v1087;
  struct std__allocator_int___* t1092 = __a1089;
  int** t1093 = __p1090;
  unsigned long t1094 = __n1091;
  std__allocator_int____deallocate(t1092, t1093, t1094);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1095, int** v1096, unsigned long v1097) {
bb1098: ;
  struct std___Deque_base_int__std__allocator_int__* this1099;
  int** __p1100;
  unsigned long __n1101;
  struct std__allocator_int___ __map_alloc1102;
  this1099 = v1095;
  __p1100 = v1096;
  __n1101 = v1097;
  struct std___Deque_base_int__std__allocator_int__* t1103 = this1099;
  struct std__allocator_int___ r1104 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1103);
  __map_alloc1102 = r1104;
  int** t1105 = __p1100;
  unsigned long t1106 = __n1101;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1102, t1105, t1106);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1107: ;
  unsigned long __retval1108;
  unsigned long c1109 = 4;
  unsigned long r1110 = std____deque_buf_size(c1109);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1108 = r1110;
  unsigned long t1111 = __retval1108;
  return t1111;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1112, int** v1113) {
bb1114: ;
  struct std___Deque_iterator_int__int____int___* this1115;
  int** __new_node1116;
  this1115 = v1112;
  __new_node1116 = v1113;
  struct std___Deque_iterator_int__int____int___* t1117 = this1115;
  int** t1118 = __new_node1116;
  t1117->_M_node = t1118;
  int** t1119 = __new_node1116;
  int* t1120 = *t1119;
  t1117->_M_first = t1120;
  int* t1121 = t1117->_M_first;
  unsigned long r1122 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1123 = (long)r1122;
  int* ptr1124 = &(t1121)[cast1123];
  t1117->_M_last = ptr1124;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1125, unsigned long v1126) {
bb1127: ;
  struct std___Deque_base_int__std__allocator_int__* this1128;
  unsigned long __num_elements1129;
  unsigned long __num_nodes1130;
  unsigned long ref_tmp01131;
  unsigned long ref_tmp11132;
  int** __nstart1133;
  int** __nfinish1134;
  this1128 = v1125;
  __num_elements1129 = v1126;
  struct std___Deque_base_int__std__allocator_int__* t1135 = this1128;
  unsigned long t1136 = __num_elements1129;
  unsigned long c1137 = 4;
  unsigned long r1138 = std____deque_buf_size(c1137);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1139 = t1136 / r1138;
  unsigned long c1140 = 1;
  unsigned long b1141 = b1139 + c1140;
  __num_nodes1130 = b1141;
  unsigned long c1142 = 8;
  ref_tmp01131 = c1142;
  unsigned long t1143 = __num_nodes1130;
  unsigned long c1144 = 2;
  unsigned long b1145 = t1143 + c1144;
  ref_tmp11132 = b1145;
  unsigned long* r1146 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01131, &ref_tmp11132);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1147 = *r1146;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1148 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  base1148->_M_map_size = t1147;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1149 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  unsigned long t1150 = base1149->_M_map_size;
  int** r1151 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1135, t1150);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1152 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  base1152->_M_map = r1151;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1153 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  int** t1154 = base1153->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1155 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  unsigned long t1156 = base1155->_M_map_size;
  unsigned long t1157 = __num_nodes1130;
  unsigned long b1158 = t1156 - t1157;
  unsigned long c1159 = 2;
  unsigned long b1160 = b1158 / c1159;
  int** ptr1161 = &(t1154)[b1160];
  __nstart1133 = ptr1161;
  int** t1162 = __nstart1133;
  unsigned long t1163 = __num_nodes1130;
  int** ptr1164 = &(t1162)[t1163];
  __nfinish1134 = ptr1164;
      int** t1166 = __nstart1133;
      int** t1167 = __nfinish1134;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1135, t1166, t1167);
      if (__cir_exc_active) {
        goto cir_try_dispatch1165;
      }
    cir_try_dispatch1165: ;
    if (__cir_exc_active) {
    {
      int ca_tok1168 = 0;
      void* ca_exn1169 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1170 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
        int** t1171 = base1170->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1172 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
        unsigned long t1173 = base1172->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1135, t1171, t1173);
        int** c1174 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1175 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
        base1175->_M_map = c1174;
        unsigned long c1176 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1177 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
        base1177->_M_map_size = c1176;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1178 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  int** t1179 = __nstart1133;
  std___Deque_iterator_int__int___int_____M_set_node(&base1178->_M_start, t1179);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1180 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  int** t1181 = __nfinish1134;
  int c1182 = -1;
  int** ptr1183 = &(t1181)[c1182];
  std___Deque_iterator_int__int___int_____M_set_node(&base1180->_M_finish, ptr1183);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1184 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  int* t1185 = base1184->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1186 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  base1186->_M_start._M_cur = t1185;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1187 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  int* t1188 = base1187->_M_finish._M_first;
  unsigned long t1189 = __num_elements1129;
  unsigned long c1190 = 4;
  unsigned long r1191 = std____deque_buf_size(c1190);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1192 = t1189 % r1191;
  int* ptr1193 = &(t1188)[b1192];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1194 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1135->_M_impl) + 0);
  base1194->_M_finish._M_cur = ptr1193;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1195) {
bb1196: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1197;
  this1197 = v1195;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1198 = this1197;
  {
    struct std__allocator_int_* base1199 = (struct std__allocator_int_*)((char *)t1198 + 0);
    std__allocator_int____allocator(base1199);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2ERKS0_m
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1200, struct std__allocator_int_* v1201, unsigned long v1202) {
bb1203: ;
  struct std___Deque_base_int__std__allocator_int__* this1204;
  struct std__allocator_int_* __a1205;
  unsigned long __num_elements1206;
  this1204 = v1200;
  __a1205 = v1201;
  __num_elements1206 = v1202;
  struct std___Deque_base_int__std__allocator_int__* t1207 = this1204;
  struct std__allocator_int_* t1208 = __a1205;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1207->_M_impl, t1208);
    unsigned long t1209 = __num_elements1206;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1207, t1209);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1207->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZSt16__do_uninit_fillIPiiEvT_S1_RKT0_
void void_std____do_uninit_fill_int___int_(int* v1210, int* v1211, int* v1212) {
bb1213: ;
  int* __first1214;
  int* __last1215;
  int* __x1216;
  struct std___UninitDestroyGuard_int____void_ __guard1217;
  __first1214 = v1210;
  __last1215 = v1211;
  __x1216 = v1212;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1217, &__first1214);
  if (__cir_exc_active) {
    return;
  }
      while (1) {
        int* t1219 = __first1214;
        int* t1220 = __last1215;
        _Bool c1221 = ((t1219 != t1220)) ? 1 : 0;
        if (!c1221) break;
        int* t1222 = __first1214;
        int* t1223 = __x1216;
        void_std___Construct_int__int_const__(t1222, t1223);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1217);
          }
          return;
        }
      for_step1218: ;
        int* t1224 = __first1214;
        int c1225 = 1;
        int* ptr1226 = &(t1224)[c1225];
        __first1214 = ptr1226;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1217);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1217);
      }
      return;
    }
  {
    std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1217);
  }
  return;
}

// function: _ZSt18uninitialized_fillIPiiEvT_S1_RKT0_
void void_std__uninitialized_fill_int___int_(int* v1227, int* v1228, int* v1229) {
bb1230: ;
  int* __first1231;
  int* __last1232;
  int* __x1233;
  __first1231 = v1227;
  __last1232 = v1228;
  __x1233 = v1229;
  int* t1234 = __first1231;
  int* t1235 = __last1232;
  int* t1236 = __x1233;
  void_std____do_uninit_fill_int___int_(t1234, t1235, t1236);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt22__uninitialized_fill_aIPiiiEvT_S1_RKT0_RSaIT1_E
void void_std____uninitialized_fill_a_int___int__int_(int* v1237, int* v1238, int* v1239, struct std__allocator_int_* v1240) {
bb1241: ;
  int* __first1242;
  int* __last1243;
  int* __x1244;
  struct std__allocator_int_* unnamed1245;
  __first1242 = v1237;
  __last1243 = v1238;
  __x1244 = v1239;
  unnamed1245 = v1240;
    _Bool r1246 = std__is_constant_evaluated();
    if (r1246) {
      int* t1247 = __first1242;
      int* t1248 = __last1243;
      int* t1249 = __x1244;
      void_std____do_uninit_fill_int___int_(t1247, t1248, t1249);
      if (__cir_exc_active) {
        return;
      }
      return;
    }
  int* t1250 = __first1242;
  int* t1251 = __last1243;
  int* t1252 = __x1244;
  void_std__uninitialized_fill_int___int_(t1250, t1251, t1252);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1253: ;
  unsigned long __retval1254;
  unsigned long c1255 = 4;
  unsigned long r1256 = std____deque_buf_size(c1255);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1254 = r1256;
  unsigned long t1257 = __retval1254;
  return t1257;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1258) {
bb1259: ;
  struct std___Deque_base_int__std__allocator_int__* this1260;
  struct std__allocator_int_* __retval1261;
  this1260 = v1258;
  struct std___Deque_base_int__std__allocator_int__* t1262 = this1260;
  struct std__allocator_int_* base1263 = (struct std__allocator_int_*)((char *)&(t1262->_M_impl) + 0);
  __retval1261 = base1263;
  struct std__allocator_int_* t1264 = __retval1261;
  return t1264;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator___2(struct std___Deque_iterator_int__int____int___* v1265, struct std___Deque_iterator_int__int____int___* v1266) {
bb1267: ;
  struct std___Deque_iterator_int__int____int___* __x1268;
  struct std___Deque_iterator_int__int____int___* __y1269;
  _Bool __retval1270;
  __x1268 = v1265;
  __y1269 = v1266;
  struct std___Deque_iterator_int__int____int___* t1271 = __x1268;
  int* t1272 = t1271->_M_cur;
  struct std___Deque_iterator_int__int____int___* t1273 = __y1269;
  int* t1274 = t1273->_M_cur;
  _Bool c1275 = ((t1272 == t1274)) ? 1 : 0;
  __retval1270 = c1275;
  _Bool t1276 = __retval1270;
  return t1276;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v1277) {
bb1278: ;
  struct std___Deque_iterator_int__int____int___* this1279;
  int* __retval1280;
  this1279 = v1277;
  struct std___Deque_iterator_int__int____int___* t1281 = this1279;
  int* t1282 = t1281->_M_cur;
  __retval1280 = t1282;
  int* t1283 = __retval1280;
  return t1283;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v1284) {
bb1285: ;
  struct std___Deque_iterator_int__int____int___* this1286;
  struct std___Deque_iterator_int__int____int___* __retval1287;
  this1286 = v1284;
  struct std___Deque_iterator_int__int____int___* t1288 = this1286;
  int* t1289 = t1288->_M_cur;
  int c1290 = 1;
  int* ptr1291 = &(t1289)[c1290];
  t1288->_M_cur = ptr1291;
    int* t1292 = t1288->_M_cur;
    int* t1293 = t1288->_M_last;
    _Bool c1294 = ((t1292 == t1293)) ? 1 : 0;
    if (c1294) {
      int** t1295 = t1288->_M_node;
      int c1296 = 1;
      int** ptr1297 = &(t1295)[c1296];
      std___Deque_iterator_int__int___int_____M_set_node(t1288, ptr1297);
      int* t1298 = t1288->_M_first;
      t1288->_M_cur = t1298;
    }
  __retval1287 = t1288;
  struct std___Deque_iterator_int__int____int___* t1299 = __retval1287;
  return t1299;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEEvT_S4_
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1300, struct std___Deque_iterator_int__int____int___ v1301) {
bb1302: ;
  struct std___Deque_iterator_int__int____int___ __first1303;
  struct std___Deque_iterator_int__int____int___ __last1304;
  __first1303 = v1300;
  __last1304 = v1301;
      _Bool r1305 = std____is_constant_evaluated();
      if (r1305) {
          while (1) {
            _Bool r1307 = std__operator___2(&__first1303, &__last1304);
            _Bool u1308 = !r1307;
            if (!u1308) break;
            int* r1309 = std___Deque_iterator_int__int___int____operator____const(&__first1303);
            void_std__destroy_at_int_(r1309);
            if (__cir_exc_active) {
              return;
            }
          for_step1306: ;
            struct std___Deque_iterator_int__int____int___* r1310 = std___Deque_iterator_int__int___int____operator__(&__first1303);
          }
      }
  return;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEiEvT_S4_RSaIT0_E
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1311, struct std___Deque_iterator_int__int____int___ v1312, struct std__allocator_int_* v1313) {
bb1314: ;
  struct std___Deque_iterator_int__int____int___ __first1315;
  struct std___Deque_iterator_int__int____int___ __last1316;
  struct std__allocator_int_* unnamed1317;
  struct std___Deque_iterator_int__int____int___ agg_tmp01318;
  struct std___Deque_iterator_int__int____int___ agg_tmp11319;
  __first1315 = v1311;
  __last1316 = v1312;
  unnamed1317 = v1313;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01318, &__first1315);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11319, &__last1316);
  struct std___Deque_iterator_int__int____int___ t1320 = agg_tmp01318;
  struct std___Deque_iterator_int__int____int___ t1321 = agg_tmp11319;
  void_std___Destroy_std___Deque_iterator_int__int___int____(t1320, t1321);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1322, struct std___Deque_iterator_int__int____int___* v1323) {
bb1324: ;
  struct std___Deque_iterator_int__int____int___* this1325;
  struct std___Deque_iterator_int__int____int___* __x1326;
  this1325 = v1322;
  __x1326 = v1323;
  struct std___Deque_iterator_int__int____int___* t1327 = this1325;
  struct std___Deque_iterator_int__int____int___* t1328 = __x1326;
  int* t1329 = t1328->_M_cur;
  t1327->_M_cur = t1329;
  struct std___Deque_iterator_int__int____int___* t1330 = __x1326;
  int* t1331 = t1330->_M_first;
  t1327->_M_first = t1331;
  struct std___Deque_iterator_int__int____int___* t1332 = __x1326;
  int* t1333 = t1332->_M_last;
  t1327->_M_last = t1333;
  struct std___Deque_iterator_int__int____int___* t1334 = __x1326;
  int** t1335 = t1334->_M_node;
  t1327->_M_node = t1335;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ES1_PS1_
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1336, int* v1337, int** v1338) {
bb1339: ;
  struct std___Deque_iterator_int__int____int___* this1340;
  int* __x1341;
  int** __y1342;
  this1340 = v1336;
  __x1341 = v1337;
  __y1342 = v1338;
  struct std___Deque_iterator_int__int____int___* t1343 = this1340;
  int* t1344 = __x1341;
  t1343->_M_cur = t1344;
  int** t1345 = __y1342;
  int* t1346 = *t1345;
  t1343->_M_first = t1346;
  int** t1347 = __y1342;
  int* t1348 = *t1347;
  unsigned long r1349 = std___Deque_iterator_int__int___int_____S_buffer_size();
  int* ptr1350 = &(t1348)[r1349];
  t1343->_M_last = ptr1350;
  int** t1351 = __y1342;
  t1343->_M_node = t1351;
  return;
}

// function: _ZNSt5dequeIiSaIiEE18_M_fill_initializeERKi
void std__deque_int__std__allocator_int______M_fill_initialize(struct std__deque_int__std__allocator_int__* v1352, int* v1353) {
bb1354: ;
  struct std__deque_int__std__allocator_int__* this1355;
  int* __value1356;
  int** __cur1357;
  this1355 = v1352;
  __value1356 = v1353;
  struct std__deque_int__std__allocator_int__* t1358 = this1355;
    struct std___Deque_iterator_int__int____int___ agg_tmp01359;
    struct std___Deque_iterator_int__int____int___ agg_tmp11360;
        struct std___Deque_base_int__std__allocator_int__* base1362 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1358 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1363 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1362->_M_impl) + 0);
        int** t1364 = base1363->_M_start._M_node;
        __cur1357 = t1364;
        while (1) {
          int** t1366 = __cur1357;
          struct std___Deque_base_int__std__allocator_int__* base1367 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1358 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1368 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1367->_M_impl) + 0);
          int** t1369 = base1368->_M_finish._M_node;
          _Bool c1370 = ((t1366 < t1369)) ? 1 : 0;
          if (!c1370) break;
          int** t1371 = __cur1357;
          int* t1372 = *t1371;
          int** t1373 = __cur1357;
          int* t1374 = *t1373;
          unsigned long r1375 = std__deque_int__std__allocator_int______S_buffer_size();
          int* ptr1376 = &(t1374)[r1375];
          int* t1377 = __value1356;
          struct std___Deque_base_int__std__allocator_int__* base1378 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1358 + 0);
          struct std__allocator_int_* r1379 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1378);
          void_std____uninitialized_fill_a_int___int__int_(t1372, ptr1376, t1377, r1379);
          if (__cir_exc_active) {
            goto cir_try_dispatch1361;
          }
        for_step1365: ;
          int** t1380 = __cur1357;
          int c1381 = 1;
          int** ptr1382 = &(t1380)[c1381];
          __cur1357 = ptr1382;
        }
      struct std___Deque_base_int__std__allocator_int__* base1383 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1358 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1384 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1383->_M_impl) + 0);
      int* t1385 = base1384->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base1386 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1358 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1387 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1386->_M_impl) + 0);
      int* t1388 = base1387->_M_finish._M_cur;
      int* t1389 = __value1356;
      struct std___Deque_base_int__std__allocator_int__* base1390 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1358 + 0);
      struct std__allocator_int_* r1391 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1390);
      void_std____uninitialized_fill_a_int___int__int_(t1385, t1388, t1389, r1391);
      if (__cir_exc_active) {
        goto cir_try_dispatch1361;
      }
    cir_try_dispatch1361: ;
    if (__cir_exc_active) {
    {
      int ca_tok1392 = 0;
      void* ca_exn1393 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base1394 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1358 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1395 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1394->_M_impl) + 0);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01359, &base1395->_M_start);
        int** t1396 = __cur1357;
        int* t1397 = *t1396;
        int** t1398 = __cur1357;
        std___Deque_iterator_int__int___int_____Deque_iterator_2(&agg_tmp11360, t1397, t1398);
        struct std___Deque_base_int__std__allocator_int__* base1399 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1358 + 0);
        struct std__allocator_int_* r1400 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1399);
        struct std___Deque_iterator_int__int____int___ t1401 = agg_tmp01359;
        struct std___Deque_iterator_int__int____int___ t1402 = agg_tmp11360;
        void_std___Destroy_std___Deque_iterator_int__int___int____int_(t1401, t1402, r1400);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          return;
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

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1403) {
bb1404: ;
  struct std___Deque_base_int__std__allocator_int__* this1405;
  this1405 = v1403;
  struct std___Deque_base_int__std__allocator_int__* t1406 = this1405;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1407 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
      int** t1408 = base1407->_M_map;
      _Bool cast1409 = (_Bool)t1408;
      if (cast1409) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1410 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
        int** t1411 = base1410->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1412 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
        int** t1413 = base1412->_M_finish._M_node;
        int c1414 = 1;
        int** ptr1415 = &(t1413)[c1414];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1406, t1411, ptr1415);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1416 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
        int** t1417 = base1416->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1418 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1406->_M_impl) + 0);
        unsigned long t1419 = base1418->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1406, t1417, t1419);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1406->_M_impl);
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* v1420) {
bb1421: ;
  struct std___Deque_iterator_int__int____int___* this1422;
  this1422 = v1420;
  struct std___Deque_iterator_int__int____int___* t1423 = this1422;
  int* c1424 = ((void*)0);
  t1423->_M_cur = c1424;
  int* c1425 = ((void*)0);
  t1423->_M_first = c1425;
  int* c1426 = ((void*)0);
  t1423->_M_last = c1426;
  int** c1427 = ((void*)0);
  t1423->_M_node = c1427;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1428) {
bb1429: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1430;
  this1430 = v1428;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1431 = this1430;
  int** c1432 = ((void*)0);
  t1431->_M_map = c1432;
  unsigned long c1433 = 0;
  t1431->_M_map_size = c1433;
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1431->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1431->_M_finish);
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1434) {
bb1435: ;
  struct std____new_allocator_int___* this1436;
  this1436 = v1434;
  struct std____new_allocator_int___* t1437 = this1436;
  return;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1438, struct std___Deque_iterator_int__int____int___ v1439, struct std___Deque_iterator_int__int____int___ v1440) {
bb1441: ;
  struct std__deque_int__std__allocator_int__* this1442;
  struct std___Deque_iterator_int__int____int___ __first1443;
  struct std___Deque_iterator_int__int____int___ __last1444;
  this1442 = v1438;
  __first1443 = v1439;
  __last1444 = v1440;
  struct std__deque_int__std__allocator_int__* t1445 = this1442;
    int** __node1446;
    int** t1447 = __first1443._M_node;
    int c1448 = 1;
    int** ptr1449 = &(t1447)[c1448];
    __node1446 = ptr1449;
    while (1) {
      int** t1451 = __node1446;
      int** t1452 = __last1444._M_node;
      _Bool c1453 = ((t1451 < t1452)) ? 1 : 0;
      if (!c1453) break;
      int** t1454 = __node1446;
      int* t1455 = *t1454;
      int** t1456 = __node1446;
      int* t1457 = *t1456;
      unsigned long r1458 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1459 = &(t1457)[r1458];
      struct std___Deque_base_int__std__allocator_int__* base1460 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1445 + 0);
      struct std__allocator_int_* r1461 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1460);
      void_std___Destroy_int___int_(t1455, ptr1459, r1461);
      if (__cir_exc_active) {
        return;
      }
    for_step1450: ;
      int** t1462 = __node1446;
      int c1463 = 1;
      int** ptr1464 = &(t1462)[c1463];
      __node1446 = ptr1464;
    }
    int** t1465 = __first1443._M_node;
    int** t1466 = __last1444._M_node;
    _Bool c1467 = ((t1465 != t1466)) ? 1 : 0;
    if (c1467) {
      int* t1468 = __first1443._M_cur;
      int* t1469 = __first1443._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1470 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1445 + 0);
      struct std__allocator_int_* r1471 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1470);
      void_std___Destroy_int___int_(t1468, t1469, r1471);
      if (__cir_exc_active) {
        return;
      }
      int* t1472 = __last1444._M_first;
      int* t1473 = __last1444._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1474 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1445 + 0);
      struct std__allocator_int_* r1475 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1474);
      void_std___Destroy_int___int_(t1472, t1473, r1475);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1476 = __first1443._M_cur;
      int* t1477 = __last1444._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1478 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1445 + 0);
      struct std__allocator_int_* r1479 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1478);
      void_std___Destroy_int___int_(t1476, t1477, r1479);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1480, struct std___Deque_iterator_int__int____int___ v1481, struct std___Deque_iterator_int__int____int___ v1482, struct std__allocator_int_* v1483) {
bb1484: ;
  struct std__deque_int__std__allocator_int__* this1485;
  struct std___Deque_iterator_int__int____int___ __first1486;
  struct std___Deque_iterator_int__int____int___ __last1487;
  struct std__allocator_int_* unnamed1488;
  this1485 = v1480;
  __first1486 = v1481;
  __last1487 = v1482;
  unnamed1488 = v1483;
  struct std__deque_int__std__allocator_int__* t1489 = this1485;
    _Bool c1490 = 0;
    if (c1490) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01491;
      struct std___Deque_iterator_int__int____int___ agg_tmp11492;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01491, &__first1486);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11492, &__last1487);
      struct std___Deque_iterator_int__int____int___ t1493 = agg_tmp01491;
      struct std___Deque_iterator_int__int____int___ t1494 = agg_tmp11492;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1489, t1493, t1494);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v1495) {
bb1496: ;
  struct std__deque_int__std__allocator_int__* this1497;
  struct std___Deque_iterator_int__int____int___ __retval1498;
  this1497 = v1495;
  struct std__deque_int__std__allocator_int__* t1499 = this1497;
  struct std___Deque_base_int__std__allocator_int__* base1500 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1499 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1501 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1500->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1498, &base1501->_M_start);
  struct std___Deque_iterator_int__int____int___ t1502 = __retval1498;
  return t1502;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v1503) {
bb1504: ;
  struct std__deque_int__std__allocator_int__* this1505;
  struct std___Deque_iterator_int__int____int___ __retval1506;
  this1505 = v1503;
  struct std__deque_int__std__allocator_int__* t1507 = this1505;
  struct std___Deque_base_int__std__allocator_int__* base1508 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1507 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1509 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1508->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1506, &base1509->_M_finish);
  struct std___Deque_iterator_int__int____int___ t1510 = __retval1506;
  return t1510;
}

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque_3(struct std__deque_int__std__allocator_int__* v1511) {
bb1512: ;
  struct std__deque_int__std__allocator_int__* this1513;
  this1513 = v1511;
  struct std__deque_int__std__allocator_int__* t1514 = this1513;
  struct std___Deque_base_int__std__allocator_int__* base1515 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1514 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base_2(base1515);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl_2(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1516) {
bb1517: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1518;
  this1518 = v1516;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1519 = this1518;
  struct std__allocator_int_* base1520 = (struct std__allocator_int_*)((char *)t1519 + 0);
  std__allocator_int___allocator_2(base1520);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1521 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1519 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1521);
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base_2(struct std___Deque_base_int__std__allocator_int__* v1522) {
bb1523: ;
  struct std___Deque_base_int__std__allocator_int__* this1524;
  this1524 = v1522;
  struct std___Deque_base_int__std__allocator_int__* t1525 = this1524;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl_2(&t1525->_M_impl);
    unsigned long c1526 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1525, c1526);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1525->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2ERKS1_
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v1527, struct std__deque_int__std__allocator_int__* v1528) {
bb1529: ;
  struct std__deque_int__std__allocator_int__* this1530;
  struct std__deque_int__std__allocator_int__* __x1531;
  struct std__allocator_int_ ref_tmp01532;
  struct std___Deque_iterator_int_int___int___ agg_tmp01533;
  struct std___Deque_iterator_int_int___int___ agg_tmp11534;
  struct std___Deque_iterator_int__int____int___ agg_tmp21535;
  struct std___Deque_iterator_int__int____int___ agg_tmp31536;
  this1530 = v1527;
  __x1531 = v1528;
  struct std__deque_int__std__allocator_int__* t1537 = this1530;
  struct std___Deque_base_int__std__allocator_int__* base1538 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1537 + 0);
  struct std__deque_int__std__allocator_int__* t1539 = __x1531;
  struct std___Deque_base_int__std__allocator_int__* base1540 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1539 + 0);
  struct std__allocator_int_* r1541 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base1540);
  struct std__allocator_int_ r1542 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(r1541);
  if (__cir_exc_active) {
    return;
  }
  ref_tmp01532 = r1542;
    struct std__deque_int__std__allocator_int__* t1543 = __x1531;
    unsigned long r1544 = std__deque_int__std__allocator_int_____size___const(t1543);
    std___Deque_base_int__std__allocator_int______Deque_base(base1538, &ref_tmp01532, r1544);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp01532);
      }
      return;
    }
  {
    std__allocator_int____allocator(&ref_tmp01532);
  }
    struct std__deque_int__std__allocator_int__* t1545 = __x1531;
    struct std___Deque_iterator_int_int___int___ r1546 = std__deque_int__std__allocator_int_____begin___const(t1545);
    agg_tmp01533 = r1546;
    struct std__deque_int__std__allocator_int__* t1547 = __x1531;
    struct std___Deque_iterator_int_int___int___ r1548 = std__deque_int__std__allocator_int_____end___const(t1547);
    agg_tmp11534 = r1548;
    struct std___Deque_base_int__std__allocator_int__* base1549 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1537 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1550 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1549->_M_impl) + 0);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21535, &base1550->_M_start);
    struct std___Deque_base_int__std__allocator_int__* base1551 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1537 + 0);
    struct std__allocator_int_* r1552 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1551);
    struct std___Deque_iterator_int_int___int___ t1553 = agg_tmp01533;
    struct std___Deque_iterator_int_int___int___ t1554 = agg_tmp11534;
    struct std___Deque_iterator_int__int____int___ t1555 = agg_tmp21535;
    struct std___Deque_iterator_int__int____int___ r1556 = std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____int_(t1553, t1554, t1555, r1552);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base1557 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1537 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base1557);
      }
      return;
    }
    agg_tmp31536 = r1556;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* v1558) {
bb1559: ;
  struct std__allocator_int_* __rhs1560;
  struct std__allocator_int_ __retval1561;
  __rhs1560 = v1558;
  struct std__allocator_int_* t1562 = __rhs1560;
  std__allocator_int___allocator(&__retval1561, t1562);
  struct std__allocator_int_ t1563 = __retval1561;
  return t1563;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* v1564) {
bb1565: ;
  struct std__allocator_int_* __a1566;
  struct std__allocator_int_ __retval1567;
  __a1566 = v1564;
  struct std__allocator_int_* t1568 = __a1566;
  struct std__allocator_int_ r1569 = std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(t1568);
  if (__cir_exc_active) {
    struct std__allocator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1567 = r1569;
  struct std__allocator_int_ t1570 = __retval1567;
  return t1570;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v1571, struct std___Deque_iterator_int__int____int___* v1572) {
bb1573: ;
  struct std___Deque_iterator_int__int____int___* __x1574;
  struct std___Deque_iterator_int__int____int___* __y1575;
  long __retval1576;
  __x1574 = v1571;
  __y1575 = v1572;
  unsigned long r1577 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1578 = (long)r1577;
  struct std___Deque_iterator_int__int____int___* t1579 = __x1574;
  int** t1580 = t1579->_M_node;
  struct std___Deque_iterator_int__int____int___* t1581 = __y1575;
  int** t1582 = t1581->_M_node;
  long diff1583 = t1580 - t1582;
  struct std___Deque_iterator_int__int____int___* t1584 = __x1574;
  int** t1585 = t1584->_M_node;
  _Bool cast1586 = (_Bool)t1585;
  long cast1587 = (long)cast1586;
  long b1588 = diff1583 - cast1587;
  long b1589 = cast1578 * b1588;
  struct std___Deque_iterator_int__int____int___* t1590 = __x1574;
  int* t1591 = t1590->_M_cur;
  struct std___Deque_iterator_int__int____int___* t1592 = __x1574;
  int* t1593 = t1592->_M_first;
  long diff1594 = t1591 - t1593;
  long b1595 = b1589 + diff1594;
  struct std___Deque_iterator_int__int____int___* t1596 = __y1575;
  int* t1597 = t1596->_M_last;
  struct std___Deque_iterator_int__int____int___* t1598 = __y1575;
  int* t1599 = t1598->_M_cur;
  long diff1600 = t1597 - t1599;
  long b1601 = b1595 + diff1600;
  __retval1576 = b1601;
  long t1602 = __retval1576;
  return t1602;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v1603) {
bb1604: ;
  struct std__deque_int__std__allocator_int__* this1605;
  unsigned long __retval1606;
  this1605 = v1603;
  struct std__deque_int__std__allocator_int__* t1607 = this1605;
  struct std___Deque_base_int__std__allocator_int__* base1608 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1607 + 0);
  struct std__allocator_int_* r1609 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base1608);
  unsigned long r1610 = std__deque_int__std__allocator_int______S_max_size(r1609);
  __retval1606 = r1610;
  unsigned long t1611 = __retval1606;
  return t1611;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v1612) {
bb1613: ;
  struct std__deque_int__std__allocator_int__* this1614;
  unsigned long __retval1615;
  unsigned long __sz1616;
  this1614 = v1612;
  struct std__deque_int__std__allocator_int__* t1617 = this1614;
  struct std___Deque_base_int__std__allocator_int__* base1618 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1617 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1619 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1618->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base1620 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1617 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1621 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1620->_M_impl) + 0);
  long r1622 = std__operator_(&base1619->_M_finish, &base1621->_M_start);
  unsigned long cast1623 = (unsigned long)r1622;
  __sz1616 = cast1623;
    unsigned long t1624 = __sz1616;
    unsigned long r1625 = std__deque_int__std__allocator_int_____max_size___const(t1617);
    _Bool c1626 = ((t1624 > r1625)) ? 1 : 0;
    if (c1626) {
      __builtin_unreachable();
    }
  unsigned long t1627 = __sz1616;
  __retval1615 = t1627;
  unsigned long t1628 = __retval1615;
  return t1628;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvEC2ERS3_
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v1629, struct std___Deque_iterator_int__int____int___* v1630) {
bb1631: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this1632;
  struct std___Deque_iterator_int__int____int___* __first1633;
  this1632 = v1629;
  __first1633 = v1630;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t1634 = this1632;
  struct std___Deque_iterator_int__int____int___* t1635 = __first1633;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t1634->_M_first, t1635);
  struct std___Deque_iterator_int__int____int___* t1636 = __first1633;
  t1634->_M_cur = t1636;
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRKiPS0_ES5_
_Bool std__operator__(struct std___Deque_iterator_int_int___int___* v1637, struct std___Deque_iterator_int_int___int___* v1638) {
bb1639: ;
  struct std___Deque_iterator_int_int___int___* __x1640;
  struct std___Deque_iterator_int_int___int___* __y1641;
  _Bool __retval1642;
  __x1640 = v1637;
  __y1641 = v1638;
  struct std___Deque_iterator_int_int___int___* t1643 = __x1640;
  int* t1644 = t1643->_M_cur;
  struct std___Deque_iterator_int_int___int___* t1645 = __y1641;
  int* t1646 = t1645->_M_cur;
  _Bool c1647 = ((t1644 == t1646)) ? 1 : 0;
  __retval1642 = c1647;
  _Bool t1648 = __retval1642;
  return t1648;
}

// function: _ZNKSt15_Deque_iteratorIiRKiPS0_EdeEv
int* std___Deque_iterator_int__int_const___int_const____operator____const(struct std___Deque_iterator_int_int___int___* v1649) {
bb1650: ;
  struct std___Deque_iterator_int_int___int___* this1651;
  int* __retval1652;
  this1651 = v1649;
  struct std___Deque_iterator_int_int___int___* t1653 = this1651;
  int* t1654 = t1653->_M_cur;
  __retval1652 = t1654;
  int* t1655 = __retval1652;
  return t1655;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_E14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int_const___int_const_____S_buffer_size() {
bb1656: ;
  unsigned long __retval1657;
  unsigned long c1658 = 4;
  unsigned long r1659 = std____deque_buf_size(c1658);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1657 = r1659;
  unsigned long t1660 = __retval1657;
  return t1660;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_E11_M_set_nodeEPPi
void std___Deque_iterator_int__int_const___int_const_____M_set_node(struct std___Deque_iterator_int_int___int___* v1661, int** v1662) {
bb1663: ;
  struct std___Deque_iterator_int_int___int___* this1664;
  int** __new_node1665;
  this1664 = v1661;
  __new_node1665 = v1662;
  struct std___Deque_iterator_int_int___int___* t1666 = this1664;
  int** t1667 = __new_node1665;
  t1666->_M_node = t1667;
  int** t1668 = __new_node1665;
  int* t1669 = *t1668;
  t1666->_M_first = t1669;
  int* t1670 = t1666->_M_first;
  unsigned long r1671 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
  long cast1672 = (long)r1671;
  int* ptr1673 = &(t1670)[cast1672];
  t1666->_M_last = ptr1673;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EppEv
struct std___Deque_iterator_int_int___int___* std___Deque_iterator_int__int_const___int_const____operator__(struct std___Deque_iterator_int_int___int___* v1674) {
bb1675: ;
  struct std___Deque_iterator_int_int___int___* this1676;
  struct std___Deque_iterator_int_int___int___* __retval1677;
  this1676 = v1674;
  struct std___Deque_iterator_int_int___int___* t1678 = this1676;
  int* t1679 = t1678->_M_cur;
  int c1680 = 1;
  int* ptr1681 = &(t1679)[c1680];
  t1678->_M_cur = ptr1681;
    int* t1682 = t1678->_M_cur;
    int* t1683 = t1678->_M_last;
    _Bool c1684 = ((t1682 == t1683)) ? 1 : 0;
    if (c1684) {
      int** t1685 = t1678->_M_node;
      int c1686 = 1;
      int** ptr1687 = &(t1685)[c1686];
      std___Deque_iterator_int__int_const___int_const_____M_set_node(t1678, ptr1687);
      int* t1688 = t1678->_M_first;
      t1678->_M_cur = t1688;
    }
  __retval1677 = t1678;
  struct std___Deque_iterator_int_int___int___* t1689 = __retval1677;
  return t1689;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvE7releaseEv
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v1690) {
bb1691: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this1692;
  this1692 = v1690;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t1693 = this1692;
  struct std___Deque_iterator_int__int____int___* c1694 = ((void*)0);
  t1693->_M_cur = c1694;
  return;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvED2Ev
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v1695) {
bb1696: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this1697;
  this1697 = v1695;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t1698 = this1697;
    struct std___Deque_iterator_int__int____int___* t1699 = t1698->_M_cur;
    struct std___Deque_iterator_int__int____int___* c1700 = ((void*)0);
    _Bool c1701 = ((t1699 != c1700)) ? 1 : 0;
    if (c1701) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01702;
      struct std___Deque_iterator_int__int____int___ agg_tmp11703;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01702, &t1698->_M_first);
      struct std___Deque_iterator_int__int____int___* t1704 = t1698->_M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11703, t1704);
      struct std___Deque_iterator_int__int____int___ t1705 = agg_tmp01702;
      struct std___Deque_iterator_int__int____int___ t1706 = agg_tmp11703;
      void_std___Destroy_std___Deque_iterator_int__int___int____(t1705, t1706);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt16__do_uninit_copyISt15_Deque_iteratorIiRKiPS1_ES4_S0_IiRiPiEET1_T_T0_S8_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____do_uninit_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int_int___int___ v1707, struct std___Deque_iterator_int_int___int___ v1708, struct std___Deque_iterator_int__int____int___ v1709) {
bb1710: ;
  struct std___Deque_iterator_int_int___int___ __first1711;
  struct std___Deque_iterator_int_int___int___ __last1712;
  struct std___Deque_iterator_int__int____int___ __result1713;
  struct std___Deque_iterator_int__int____int___ __retval1714;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ __guard1715;
  __first1711 = v1707;
  __last1712 = v1708;
  __result1713 = v1709;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(&__guard1715, &__result1713);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1717 = std__operator__(&__first1711, &__last1712);
        _Bool u1718 = !r1717;
        if (!u1718) break;
        int* r1719 = std___Deque_iterator_int__int___int____operator____const(&__result1713);
        int* r1720 = std___Deque_iterator_int__int_const___int_const____operator____const(&__first1711);
        void_std___Construct_int__int_const__(r1719, r1720);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1715);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
      for_step1716: ;
        struct std___Deque_iterator_int_int___int___* r1721 = std___Deque_iterator_int__int_const___int_const____operator__(&__first1711);
        struct std___Deque_iterator_int__int____int___* r1722 = std___Deque_iterator_int__int___int____operator__(&__result1713);
      }
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(&__guard1715);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1715);
      }
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    std___Deque_iterator_int__int___int_____Deque_iterator(&__retval1714, &__result1713);
    struct std___Deque_iterator_int__int____int___ t1723 = __retval1714;
    struct std___Deque_iterator_int__int____int___ ret_val1724 = t1723;
    {
      std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard1715);
    }
    return ret_val1724;
  abort();
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EC2ERKS3_
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator(struct std___Deque_iterator_int_int___int___* v1725, struct std___Deque_iterator_int_int___int___* v1726) {
bb1727: ;
  struct std___Deque_iterator_int_int___int___* this1728;
  struct std___Deque_iterator_int_int___int___* __x1729;
  this1728 = v1725;
  __x1729 = v1726;
  struct std___Deque_iterator_int_int___int___* t1730 = this1728;
  struct std___Deque_iterator_int_int___int___* t1731 = __x1729;
  int* t1732 = t1731->_M_cur;
  t1730->_M_cur = t1732;
  struct std___Deque_iterator_int_int___int___* t1733 = __x1729;
  int* t1734 = t1733->_M_first;
  t1730->_M_first = t1734;
  struct std___Deque_iterator_int_int___int___* t1735 = __x1729;
  int* t1736 = t1735->_M_last;
  t1730->_M_last = t1736;
  struct std___Deque_iterator_int_int___int___* t1737 = __x1729;
  int** t1738 = t1737->_M_node;
  t1730->_M_node = t1738;
  return;
}

// function: _ZSt18uninitialized_copyISt15_Deque_iteratorIiRKiPS1_ES0_IiRiPiEET0_T_S9_S8_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__uninitialized_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int_int___int___ v1739, struct std___Deque_iterator_int_int___int___ v1740, struct std___Deque_iterator_int__int____int___ v1741) {
bb1742: ;
  struct std___Deque_iterator_int_int___int___ __first1743;
  struct std___Deque_iterator_int_int___int___ __last1744;
  struct std___Deque_iterator_int__int____int___ __result1745;
  struct std___Deque_iterator_int__int____int___ __retval1746;
  __first1743 = v1739;
  __last1744 = v1740;
  __result1745 = v1741;
        struct std___Deque_iterator_int_int___int___ agg_tmp01747;
        struct std___Deque_iterator_int_int___int___ agg_tmp11748;
        struct std___Deque_iterator_int__int____int___ agg_tmp21749;
        std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp01747, &__first1743);
        std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp11748, &__last1744);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21749, &__result1745);
        struct std___Deque_iterator_int_int___int___ t1750 = agg_tmp01747;
        struct std___Deque_iterator_int_int___int___ t1751 = agg_tmp11748;
        struct std___Deque_iterator_int__int____int___ t1752 = agg_tmp21749;
        struct std___Deque_iterator_int__int____int___ r1753 = std___Deque_iterator_int__int___int___std____do_uninit_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(t1750, t1751, t1752);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __retval1746 = r1753;
        struct std___Deque_iterator_int__int____int___ t1754 = __retval1746;
        return t1754;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt15_Deque_iteratorIiRKiPS1_ES4_S0_IiRiPiEiET1_T_T0_S8_RSaIT2_E
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int_int___int___ v1755, struct std___Deque_iterator_int_int___int___ v1756, struct std___Deque_iterator_int__int____int___ v1757, struct std__allocator_int_* v1758) {
bb1759: ;
  struct std___Deque_iterator_int_int___int___ __first1760;
  struct std___Deque_iterator_int_int___int___ __last1761;
  struct std___Deque_iterator_int__int____int___ __result1762;
  struct std__allocator_int_* unnamed1763;
  struct std___Deque_iterator_int__int____int___ __retval1764;
  __first1760 = v1755;
  __last1761 = v1756;
  __result1762 = v1757;
  unnamed1763 = v1758;
    _Bool r1765 = std__is_constant_evaluated();
    if (r1765) {
      struct std___Deque_iterator_int_int___int___ agg_tmp01766;
      struct std___Deque_iterator_int_int___int___ agg_tmp11767;
      struct std___Deque_iterator_int__int____int___ agg_tmp21768;
      std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp01766, &__first1760);
      std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp11767, &__last1761);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp21768, &__result1762);
      struct std___Deque_iterator_int_int___int___ t1769 = agg_tmp01766;
      struct std___Deque_iterator_int_int___int___ t1770 = agg_tmp11767;
      struct std___Deque_iterator_int__int____int___ t1771 = agg_tmp21768;
      struct std___Deque_iterator_int__int____int___ r1772 = std___Deque_iterator_int__int___int___std____do_uninit_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(t1769, t1770, t1771);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1764 = r1772;
      struct std___Deque_iterator_int__int____int___ t1773 = __retval1764;
      return t1773;
    }
    struct std___Deque_iterator_int_int___int___ agg_tmp31774;
    struct std___Deque_iterator_int_int___int___ agg_tmp41775;
    struct std___Deque_iterator_int__int____int___ agg_tmp51776;
    std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp31774, &__first1760);
    std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp41775, &__last1761);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp51776, &__result1762);
    struct std___Deque_iterator_int_int___int___ t1777 = agg_tmp31774;
    struct std___Deque_iterator_int_int___int___ t1778 = agg_tmp41775;
    struct std___Deque_iterator_int__int____int___ t1779 = agg_tmp51776;
    struct std___Deque_iterator_int__int____int___ r1780 = std___Deque_iterator_int__int___int___std__uninitialized_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(t1777, t1778, t1779);
    if (__cir_exc_active) {
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    __retval1764 = r1780;
    struct std___Deque_iterator_int__int____int___ t1781 = __retval1764;
    return t1781;
  abort();
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EC2IS_IiRiPiEvEERKT_
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(struct std___Deque_iterator_int_int___int___* v1782, struct std___Deque_iterator_int__int____int___* v1783) {
bb1784: ;
  struct std___Deque_iterator_int_int___int___* this1785;
  struct std___Deque_iterator_int__int____int___* __x1786;
  this1785 = v1782;
  __x1786 = v1783;
  struct std___Deque_iterator_int_int___int___* t1787 = this1785;
  struct std___Deque_iterator_int__int____int___* t1788 = __x1786;
  int* t1789 = t1788->_M_cur;
  t1787->_M_cur = t1789;
  struct std___Deque_iterator_int__int____int___* t1790 = __x1786;
  int* t1791 = t1790->_M_first;
  t1787->_M_first = t1791;
  struct std___Deque_iterator_int__int____int___* t1792 = __x1786;
  int* t1793 = t1792->_M_last;
  t1787->_M_last = t1793;
  struct std___Deque_iterator_int__int____int___* t1794 = __x1786;
  int** t1795 = t1794->_M_node;
  t1787->_M_node = t1795;
  return;
}

// function: _ZNKSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____begin___const(struct std__deque_int__std__allocator_int__* v1796) {
bb1797: ;
  struct std__deque_int__std__allocator_int__* this1798;
  struct std___Deque_iterator_int_int___int___ __retval1799;
  this1798 = v1796;
  struct std__deque_int__std__allocator_int__* t1800 = this1798;
  struct std___Deque_base_int__std__allocator_int__* base1801 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1800 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1802 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1801->_M_impl) + 0);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(&__retval1799, &base1802->_M_start);
  struct std___Deque_iterator_int_int___int___ t1803 = __retval1799;
  return t1803;
}

// function: _ZNKSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____end___const(struct std__deque_int__std__allocator_int__* v1804) {
bb1805: ;
  struct std__deque_int__std__allocator_int__* this1806;
  struct std___Deque_iterator_int_int___int___ __retval1807;
  this1806 = v1804;
  struct std__deque_int__std__allocator_int__* t1808 = this1806;
  struct std___Deque_base_int__std__allocator_int__* base1809 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1808 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1810 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1809->_M_impl) + 0);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(&__retval1807, &base1810->_M_finish);
  struct std___Deque_iterator_int_int___int___ t1811 = __retval1807;
  return t1811;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector_3(struct std__vector_int__std__allocator_int__* v1812) {
bb1813: ;
  struct std__vector_int__std__allocator_int__* this1814;
  this1814 = v1812;
  struct std__vector_int__std__allocator_int__* t1815 = this1814;
  struct std___Vector_base_int__std__allocator_int__* base1816 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1815 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base_2(base1816);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1817) {
bb1818: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1819;
  this1819 = v1817;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1820 = this1819;
  struct std__allocator_int_* base1821 = (struct std__allocator_int_*)((char *)t1820 + 0);
  std__allocator_int___allocator_2(base1821);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1822 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1820 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1822);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1823) {
bb1824: ;
  struct std___Vector_base_int__std__allocator_int__* this1825;
  this1825 = v1823;
  struct std___Vector_base_int__std__allocator_int__* t1826 = this1825;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1826->_M_impl);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2ERKS1_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v1827, struct std__vector_int__std__allocator_int__* v1828) {
bb1829: ;
  struct std__vector_int__std__allocator_int__* this1830;
  struct std__vector_int__std__allocator_int__* __x1831;
  struct std__allocator_int_ ref_tmp01832;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01833;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11834;
  this1830 = v1827;
  __x1831 = v1828;
  struct std__vector_int__std__allocator_int__* t1835 = this1830;
  struct std___Vector_base_int__std__allocator_int__* base1836 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1835 + 0);
  struct std__vector_int__std__allocator_int__* t1837 = __x1831;
  unsigned long r1838 = std__vector_int__std__allocator_int_____size___const(t1837);
  struct std__vector_int__std__allocator_int__* t1839 = __x1831;
  struct std___Vector_base_int__std__allocator_int__* base1840 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1839 + 0);
  struct std__allocator_int_* r1841 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base1840);
  struct std__allocator_int_ r1842 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(r1841);
  if (__cir_exc_active) {
    return;
  }
  ref_tmp01832 = r1842;
    std___Vector_base_int__std__allocator_int______Vector_base(base1836, r1838, &ref_tmp01832);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp01832);
      }
      return;
    }
  {
    std__allocator_int____allocator(&ref_tmp01832);
  }
    struct std__vector_int__std__allocator_int__* t1843 = __x1831;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1844 = std__vector_int__std__allocator_int_____begin___const(t1843);
    agg_tmp01833 = r1844;
    struct std__vector_int__std__allocator_int__* t1845 = __x1831;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1846 = std__vector_int__std__allocator_int_____end___const(t1845);
    agg_tmp11834 = r1846;
    struct std___Vector_base_int__std__allocator_int__* base1847 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1835 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1848 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1847->_M_impl) + 0);
    int* t1849 = base1848->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1850 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1835 + 0);
    struct std__allocator_int_* r1851 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1850);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1852 = agg_tmp01833;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1853 = agg_tmp11834;
    int* r1854 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(t1852, t1853, t1849, r1851);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base1855 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1835 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base1855);
      }
      return;
    }
    struct std___Vector_base_int__std__allocator_int__* base1856 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1835 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1857 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1856->_M_impl) + 0);
    base1857->_M_finish = r1854;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1858) {
bb1859: ;
  struct std__vector_int__std__allocator_int__* this1860;
  unsigned long __retval1861;
  long __dif1862;
  this1860 = v1858;
  struct std__vector_int__std__allocator_int__* t1863 = this1860;
  struct std___Vector_base_int__std__allocator_int__* base1864 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1863 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1865 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1864->_M_impl) + 0);
  int* t1866 = base1865->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1867 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1863 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1868 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1867->_M_impl) + 0);
  int* t1869 = base1868->_M_start;
  long diff1870 = t1866 - t1869;
  __dif1862 = diff1870;
    long t1871 = __dif1862;
    long c1872 = 0;
    _Bool c1873 = ((t1871 < c1872)) ? 1 : 0;
    if (c1873) {
      __builtin_unreachable();
    }
  long t1874 = __dif1862;
  unsigned long cast1875 = (unsigned long)t1874;
  __retval1861 = cast1875;
  unsigned long t1876 = __retval1861;
  return t1876;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v1877) {
bb1878: ;
  struct std___Vector_base_int__std__allocator_int__* this1879;
  struct std__allocator_int_* __retval1880;
  this1879 = v1877;
  struct std___Vector_base_int__std__allocator_int__* t1881 = this1879;
  struct std__allocator_int_* base1882 = (struct std__allocator_int_*)((char *)&(t1881->_M_impl) + 0);
  __retval1880 = base1882;
  struct std__allocator_int_* t1883 = __retval1880;
  return t1883;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1884) {
bb1885: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1886;
  int** __retval1887;
  this1886 = v1884;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1888 = this1886;
  __retval1887 = &t1888->_M_current;
  int** t1889 = __retval1887;
  return t1889;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1890, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1891) {
bb1892: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1893;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1894;
  _Bool __retval1895;
  __lhs1893 = v1890;
  __rhs1894 = v1891;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1896 = __lhs1893;
  int** r1897 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1896);
  int* t1898 = *r1897;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1899 = __rhs1894;
  int** r1900 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1899);
  int* t1901 = *r1900;
  _Bool c1902 = ((t1898 == t1901)) ? 1 : 0;
  __retval1895 = c1902;
  _Bool t1903 = __retval1895;
  return t1903;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1904) {
bb1905: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1906;
  int* __retval1907;
  this1906 = v1904;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1908 = this1906;
  int* t1909 = t1908->_M_current;
  __retval1907 = t1909;
  int* t1910 = __retval1907;
  return t1910;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1911) {
bb1912: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1913;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __retval1914;
  this1913 = v1911;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1915 = this1913;
  int* t1916 = t1915->_M_current;
  int c1917 = 1;
  int* ptr1918 = &(t1916)[c1917];
  t1915->_M_current = ptr1918;
  __retval1914 = t1915;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1919 = __retval1914;
  return t1919;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiET1_T_T0_S9_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1920, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1921, int* v1922) {
bb1923: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1924;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1925;
  int* __result1926;
  int* __retval1927;
  struct std___UninitDestroyGuard_int____void_ __guard1928;
  __first1924 = v1920;
  __last1925 = v1921;
  __result1926 = v1922;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1928, &__result1926);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1930 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1924, &__last1925);
        _Bool u1931 = !r1930;
        if (!u1931) break;
        int* t1932 = __result1926;
        int* r1933 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(&__first1924);
        void_std___Construct_int__int_const__(t1932, r1933);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1928);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1929: ;
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r1934 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(&__first1924);
        int* t1935 = __result1926;
        int c1936 = 1;
        int* ptr1937 = &(t1935)[c1936];
        __result1926 = ptr1937;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1928);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1928);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1938 = __result1926;
    __retval1927 = t1938;
    int* t1939 = __retval1927;
    int* ret_val1940 = t1939;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1928);
    }
    return ret_val1940;
  abort();
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1941, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1942) {
bb1943: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1944;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1945;
  long __retval1946;
  __lhs1944 = v1941;
  __rhs1945 = v1942;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1947 = __lhs1944;
  int** r1948 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1947);
  int* t1949 = *r1948;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1950 = __rhs1945;
  int** r1951 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1950);
  int* t1952 = *r1951;
  long diff1953 = t1949 - t1952;
  __retval1946 = diff1953;
  long t1954 = __retval1946;
  return t1954;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1955) {
bb1956: ;
  int* __it1957;
  int* __retval1958;
  __it1957 = v1955;
  int* t1959 = __it1957;
  __retval1958 = t1959;
  int* t1960 = __retval1958;
  return t1960;
}

// function: _ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1961) {
bb1962: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it1963;
  int* __retval1964;
  __it1963 = v1961;
  int** r1965 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(&__it1963);
  int* t1966 = *r1965;
  __retval1964 = t1966;
  int* t1967 = __retval1964;
  return t1967;
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1968, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1969, int* v1970) {
bb1971: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1972;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1973;
  int* __result1974;
  int* __retval1975;
  __first1972 = v1968;
  __last1973 = v1969;
  __result1974 = v1970;
      long __n1976;
      long r1977 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__last1973, &__first1972);
      __n1976 = r1977;
        long t1978 = __n1976;
        long c1979 = 0;
        _Bool c1980 = ((t1978 > c1979)) ? 1 : 0;
        if (c1980) {
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01981;
          int* t1982 = __result1974;
          int* r1983 = int__std____niter_base_int__(t1982);
          void* cast1984 = (void*)r1983;
          agg_tmp01981 = __first1972; // copy
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1985 = agg_tmp01981;
          int* r1986 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t1985);
          void* cast1987 = (void*)r1986;
          long t1988 = __n1976;
          unsigned long cast1989 = (unsigned long)t1988;
          unsigned long c1990 = 4;
          unsigned long b1991 = cast1989 * c1990;
          void* r1992 = memcpy(cast1984, cast1987, b1991);
          long t1993 = __n1976;
          int* t1994 = __result1974;
          int* ptr1995 = &(t1994)[t1993];
          __result1974 = ptr1995;
        }
      int* t1996 = __result1974;
      __retval1975 = t1996;
      int* t1997 = __retval1975;
      return t1997;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiiET1_T_T0_S9_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1998, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1999, int* v2000, struct std__allocator_int_* v2001) {
bb2002: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first2003;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last2004;
  int* __result2005;
  struct std__allocator_int_* unnamed2006;
  int* __retval2007;
  __first2003 = v1998;
  __last2004 = v1999;
  __result2005 = v2000;
  unnamed2006 = v2001;
    _Bool r2008 = std__is_constant_evaluated();
    if (r2008) {
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp02009;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp12010;
      agg_tmp02009 = __first2003; // copy
      agg_tmp12010 = __last2004; // copy
      int* t2011 = __result2005;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2012 = agg_tmp02009;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2013 = agg_tmp12010;
      int* r2014 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t2012, t2013, t2011);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval2007 = r2014;
      int* t2015 = __retval2007;
      return t2015;
    }
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp22016;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp32017;
    agg_tmp22016 = __first2003; // copy
    agg_tmp32017 = __last2004; // copy
    int* t2018 = __result2005;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2019 = agg_tmp22016;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2020 = agg_tmp32017;
    int* r2021 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t2019, t2020, t2018);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval2007 = r2021;
    int* t2022 = __retval2007;
    return t2022;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v2023, int** v2024) {
bb2025: ;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this2026;
  int** __i2027;
  this2026 = v2023;
  __i2027 = v2024;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t2028 = this2026;
  int** t2029 = __i2027;
  int* t2030 = *t2029;
  t2028->_M_current = t2030;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v2031) {
bb2032: ;
  struct std__vector_int__std__allocator_int__* this2033;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval2034;
  this2033 = v2031;
  struct std__vector_int__std__allocator_int__* t2035 = this2033;
  struct std___Vector_base_int__std__allocator_int__* base2036 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2035 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2037 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2036->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval2034, &base2037->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2038 = __retval2034;
  return t2038;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v2039) {
bb2040: ;
  struct std__vector_int__std__allocator_int__* this2041;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval2042;
  this2041 = v2039;
  struct std__vector_int__std__allocator_int__* t2043 = this2041;
  struct std___Vector_base_int__std__allocator_int__* base2044 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2043 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2045 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2044->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval2042, &base2045->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2046 = __retval2042;
  return t2046;
}

