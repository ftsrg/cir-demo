extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Deque_iterator_int__int____int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___Deque_iterator_int_int___int___ { int* _M_cur; int* _M_first; int* _M_last; int** _M_node; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ { struct std___Deque_iterator_int__int____int___ _M_first; struct std___Deque_iterator_int__int____int___* _M_cur; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____new_allocator_int___ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__allocator_int___ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl_data { int** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_int__int____int___ _M_start; struct std___Deque_iterator_int__int____int___ _M_finish; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Deque_base_int__std__allocator_int_____Deque_impl { struct std___Deque_base_int__std__allocator_int_____Deque_impl_data __field0; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Deque_base_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int_____Deque_impl _M_impl; };
struct std__deque_int__std__allocator_int__ { struct std___Deque_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int __const_main_myints[4] = {16, 2, 77, 29};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "fourth == third";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/deque/deque_constructor_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "first.size() == 0";
char _str_3[19] = "second.size() == 4";
char _str_4[17] = "second[2] == 100";
char _str_5[16] = "third[0] == 100";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[27] = "The contents of fifth are:";
char _str_7[22] = "fifth[i] != myints[i]";
char _str_8[48] = "cannot create std::deque larger than max_size()";
char _str_9[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm[91] = "reference std::deque<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
void std__deque_int__std__allocator_int_____deque_3(struct std__deque_int__std__allocator_int__* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__deque_int__std__allocator_int_____deque_2(struct std__deque_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* p0);
void std__deque_int__std__allocator_int_____deque_std___Deque_iterator_int__int___int____void_(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* p0, struct std__deque_int__std__allocator_int__* p1);
long* long_const__std__min_long_(long* p0, long* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int int_std____memcmp_int__int_(int* p0, int* p1, unsigned long p2);
_Bool bool_std____equal_true___equal_int_(int* p0, int* p1, int* p2);
_Bool bool_std____equal_aux1_int___int__(int* p0, int* p1, int* p2);
_Bool __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(int* p0, int* p1, struct std___Deque_iterator_int_int___int___ p2);
struct std___Deque_iterator_int_int___int___* std___Deque_iterator_int__int_const___int_const____operator__(struct std___Deque_iterator_int_int___int___* p0, long p1);
_Bool bool_std____equal_dit_int__int_const___int_const___std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int_int___int___* p1, struct std___Deque_iterator_int_int___int___ p2);
_Bool bool_std____equal_aux1_int__int_const___int_const___int__int_const___int_const__(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int_int___int___ p2);
struct std___Deque_iterator_int_int___int___ std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ p0);
_Bool bool_std____equal_aux_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int_int___int___ p2);
_Bool bool_std__equal_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int_int___int___ p2);
_Bool bool_std__operator___int__std__allocator_int___(struct std__deque_int__std__allocator_int__* p0, struct std__deque_int__std__allocator_int__* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* p0);
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* p0, long p1);
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* p0, unsigned long p1);
void std__deque_int__std__allocator_int_____deque_int___void_(struct std__deque_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
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
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* p0);
int main();
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl_2(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0);
unsigned long std____deque_buf_size(unsigned long p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator_int_(struct std__allocator_int___* p0, struct std__allocator_int_* p1);
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* p0, unsigned long p1, void* p2);
int** std__allocator_int____allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* p0, unsigned long p1);
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* p0, unsigned long p1);
extern int __gxx_personality_v0();
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
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
void std___Deque_base_int__std__allocator_int______Deque_base_3(struct std___Deque_base_int__std__allocator_int__* p0);
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* p0);
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* p0);
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
unsigned long std__deque_int__std__allocator_int______S_buffer_size();
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
extern void std____throw_length_error(char* p0);
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* p0, struct std__allocator_int_* p1);
void std___Deque_base_int__std__allocator_int______Deque_base_2(struct std___Deque_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1, unsigned long p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
void void_std____do_uninit_fill_int___int_(int* p0, int* p1, int* p2);
void void_std__uninitialized_fill_int___int_(int* p0, int* p1, int* p2);
void void_std____uninitialized_fill_a_int___int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
_Bool std__operator___2(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* p0);
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__allocator_int_* p2);
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* p0, int* p1, int** p2);
void std__deque_int__std__allocator_int______M_fill_initialize(struct std__deque_int__std__allocator_int__* p0, int* p1);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
long std__operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
long std__iterator_traits_std___Deque_iterator_int__int___int______difference_type_std____distance_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_std___Deque_iterator_int__int___int______difference_type_std__distance_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* p0);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* p0, long p1);
void void_std____advance_std___Deque_iterator_int__int___int____long_(struct std___Deque_iterator_int__int____int___* p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_std___Deque_iterator_int__int___int____unsigned_long_(struct std___Deque_iterator_int__int____int___* p0, unsigned long p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
int* int__std____do_uninit_copy_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
int* int__std__uninitialized_copy_std___Deque_iterator_int__int___int____int__(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2);
int* int__std____uninitialized_copy_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int___int_(struct std___Deque_iterator_int__int____int___ p0, struct std___Deque_iterator_int__int____int___ p1, int* p2, struct std__allocator_int_* p3);
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* p0, struct std___Deque_iterator_int__int____int___* p1);
void void_std__deque_int__std__allocator_int______M_range_initialize_std___Deque_iterator_int__int___int____(struct std__deque_int__std__allocator_int__* p0, struct std___Deque_iterator_int__int____int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__forward_iterator_tag p3);
struct std__random_access_iterator_tag std__iterator_traits_std___Deque_iterator_int__int___int______iterator_category_std____iterator_category_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* p0);
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0, struct std___Deque_iterator_int__int____int___* p1);
_Bool std__operator__(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int_int___int___* p1);
int* std___Deque_iterator_int__int_const___int_const____operator____const(struct std___Deque_iterator_int_int___int___* p0);
unsigned long std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
void std___Deque_iterator_int__int_const___int_const_____M_set_node(struct std___Deque_iterator_int_int___int___* p0, int** p1);
struct std___Deque_iterator_int_int___int___* std___Deque_iterator_int__int_const___int_const____operator___2(struct std___Deque_iterator_int_int___int___* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0);
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* p0);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____do_uninit_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int__int____int___ p2);
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int_int___int___* p1);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__uninitialized_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int__int____int___ p2);
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int_int___int___ p0, struct std___Deque_iterator_int_int___int___ p1, struct std___Deque_iterator_int__int____int___ p2, struct std__allocator_int_* p3);
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(struct std___Deque_iterator_int_int___int___* p0, struct std___Deque_iterator_int__int____int___* p1);
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____begin___const(struct std__deque_int__std__allocator_int__* p0);
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____end___const(struct std__deque_int__std__allocator_int__* p0);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___unsigned_long_(int** p0, unsigned long p1);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__deque_int__std__allocator_int______M_range_initialize_int__(struct std__deque_int__std__allocator_int__* p0, int* p1, int* p2, struct std__forward_iterator_tag p3);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);

// function: _ZNSt5dequeIiSaIiEEC2Ev
void std__deque_int__std__allocator_int_____deque_3(struct std__deque_int__std__allocator_int__* v0) {
bb1: ;
  struct std__deque_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__deque_int__std__allocator_int__* t3 = this2;
  struct std___Deque_base_int__std__allocator_int__* base4 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Deque_base_int__std__allocator_int______Deque_base_3(base4);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v5) {
bb6: ;
  struct std__allocator_int_* this7;
  this7 = v5;
  struct std__allocator_int_* t8 = this7;
  struct std____new_allocator_int_* base9 = (struct std____new_allocator_int_*)((char *)t8 + 0);
  std____new_allocator_int_____new_allocator_2(base9);
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2EmRKiRKS0_
void std__deque_int__std__allocator_int_____deque_2(struct std__deque_int__std__allocator_int__* v10, unsigned long v11, int* v12, struct std__allocator_int_* v13) {
bb14: ;
  struct std__deque_int__std__allocator_int__* this15;
  unsigned long __n16;
  int* __value17;
  struct std__allocator_int_* __a18;
  this15 = v10;
  __n16 = v11;
  __value17 = v12;
  __a18 = v13;
  struct std__deque_int__std__allocator_int__* t19 = this15;
  struct std___Deque_base_int__std__allocator_int__* base20 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t19 + 0);
  struct std__allocator_int_* t21 = __a18;
  unsigned long t22 = __n16;
  struct std__allocator_int_* t23 = __a18;
  unsigned long r24 = std__deque_int__std__allocator_int______S_check_init_len(t22, t23);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_base_int__std__allocator_int______Deque_base_2(base20, t21, r24);
  if (__cir_exc_active) {
    return;
  }
    int* t25 = __value17;
    std__deque_int__std__allocator_int______M_fill_initialize(t19, t25);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base26 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t19 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base26);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v27) {
bb28: ;
  struct std__allocator_int_* this29;
  this29 = v27;
  struct std__allocator_int_* t30 = this29;
  return;
}

// function: _ZNSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____begin(struct std__deque_int__std__allocator_int__* v31) {
bb32: ;
  struct std__deque_int__std__allocator_int__* this33;
  struct std___Deque_iterator_int__int____int___ __retval34;
  this33 = v31;
  struct std__deque_int__std__allocator_int__* t35 = this33;
  struct std___Deque_base_int__std__allocator_int__* base36 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t35 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base37 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base36->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval34, &base37->_M_start);
  struct std___Deque_iterator_int__int____int___ t38 = __retval34;
  return t38;
}

// function: _ZNSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int__int____int___ std__deque_int__std__allocator_int_____end(struct std__deque_int__std__allocator_int__* v39) {
bb40: ;
  struct std__deque_int__std__allocator_int__* this41;
  struct std___Deque_iterator_int__int____int___ __retval42;
  this41 = v39;
  struct std__deque_int__std__allocator_int__* t43 = this41;
  struct std___Deque_base_int__std__allocator_int__* base44 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t43 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base45 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base44->_M_impl) + 0);
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval42, &base45->_M_finish);
  struct std___Deque_iterator_int__int____int___ t46 = __retval42;
  return t46;
}

// function: _ZNSt5dequeIiSaIiEEC2ISt15_Deque_iteratorIiRiPiEvEET_S7_RKS0_
void std__deque_int__std__allocator_int_____deque_std___Deque_iterator_int__int___int____void_(struct std__deque_int__std__allocator_int__* v47, struct std___Deque_iterator_int__int____int___ v48, struct std___Deque_iterator_int__int____int___ v49, struct std__allocator_int_* v50) {
bb51: ;
  struct std__deque_int__std__allocator_int__* this52;
  struct std___Deque_iterator_int__int____int___ __first53;
  struct std___Deque_iterator_int__int____int___ __last54;
  struct std__allocator_int_* __a55;
  struct std___Deque_iterator_int__int____int___ agg_tmp056;
  struct std___Deque_iterator_int__int____int___ agg_tmp157;
  struct std__forward_iterator_tag agg_tmp258;
  struct std__random_access_iterator_tag ref_tmp059;
  this52 = v47;
  __first53 = v48;
  __last54 = v49;
  __a55 = v50;
  struct std__deque_int__std__allocator_int__* t60 = this52;
  struct std___Deque_base_int__std__allocator_int__* base61 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t60 + 0);
  struct std__allocator_int_* t62 = __a55;
  std___Deque_base_int__std__allocator_int______Deque_base(base61, t62);
  if (__cir_exc_active) {
    return;
  }
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp056, &__first53);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp157, &__last54);
    struct std__random_access_iterator_tag r63 = std__iterator_traits_std___Deque_iterator_int__int___int______iterator_category_std____iterator_category_std___Deque_iterator_int__int___int____(&__first53);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base64 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t60 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base64);
      }
      return;
    }
    ref_tmp059 = r63;
    struct std__forward_iterator_tag* base65 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp059) + 0);
    struct std___Deque_iterator_int__int____int___ t66 = agg_tmp056;
    struct std___Deque_iterator_int__int____int___ t67 = agg_tmp157;
    struct std__forward_iterator_tag t68 = agg_tmp258;
    void_std__deque_int__std__allocator_int______M_range_initialize_std___Deque_iterator_int__int___int____(t60, t66, t67, t68);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base69 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t60 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base69);
      }
      return;
    }
  return;
}

// function: _ZNSt5dequeIiSaIiEEC2ERKS1_
void std__deque_int__std__allocator_int_____deque(struct std__deque_int__std__allocator_int__* v70, struct std__deque_int__std__allocator_int__* v71) {
bb72: ;
  struct std__deque_int__std__allocator_int__* this73;
  struct std__deque_int__std__allocator_int__* __x74;
  struct std__allocator_int_ ref_tmp075;
  struct std___Deque_iterator_int_int___int___ agg_tmp076;
  struct std___Deque_iterator_int_int___int___ agg_tmp177;
  struct std___Deque_iterator_int__int____int___ agg_tmp278;
  struct std___Deque_iterator_int__int____int___ agg_tmp379;
  this73 = v70;
  __x74 = v71;
  struct std__deque_int__std__allocator_int__* t80 = this73;
  struct std___Deque_base_int__std__allocator_int__* base81 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t80 + 0);
  struct std__deque_int__std__allocator_int__* t82 = __x74;
  struct std___Deque_base_int__std__allocator_int__* base83 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t82 + 0);
  struct std__allocator_int_* r84 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base83);
  struct std__allocator_int_ r85 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(r84);
  if (__cir_exc_active) {
    return;
  }
  ref_tmp075 = r85;
    struct std__deque_int__std__allocator_int__* t86 = __x74;
    unsigned long r87 = std__deque_int__std__allocator_int_____size___const(t86);
    std___Deque_base_int__std__allocator_int______Deque_base_2(base81, &ref_tmp075, r87);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp075);
      }
      return;
    }
  {
    std__allocator_int____allocator(&ref_tmp075);
  }
    struct std__deque_int__std__allocator_int__* t88 = __x74;
    struct std___Deque_iterator_int_int___int___ r89 = std__deque_int__std__allocator_int_____begin___const(t88);
    agg_tmp076 = r89;
    struct std__deque_int__std__allocator_int__* t90 = __x74;
    struct std___Deque_iterator_int_int___int___ r91 = std__deque_int__std__allocator_int_____end___const(t90);
    agg_tmp177 = r91;
    struct std___Deque_base_int__std__allocator_int__* base92 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t80 + 0);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base93 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base92->_M_impl) + 0);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp278, &base93->_M_start);
    struct std___Deque_base_int__std__allocator_int__* base94 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t80 + 0);
    struct std__allocator_int_* r95 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base94);
    struct std___Deque_iterator_int_int___int___ t96 = agg_tmp076;
    struct std___Deque_iterator_int_int___int___ t97 = agg_tmp177;
    struct std___Deque_iterator_int__int____int___ t98 = agg_tmp278;
    struct std___Deque_iterator_int__int____int___ r99 = std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____int_(t96, t97, t98, r95);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base100 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t80 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base100);
      }
      return;
    }
    agg_tmp379 = r99;
  return;
}

// function: _ZSt3minIlERKT_S2_S2_
long* long_const__std__min_long_(long* v101, long* v102) {
bb103: ;
  long* __a104;
  long* __b105;
  long* __retval106;
  __a104 = v101;
  __b105 = v102;
    long* t107 = __b105;
    long t108 = *t107;
    long* t109 = __a104;
    long t110 = *t109;
    _Bool c111 = ((t108 < t110)) ? 1 : 0;
    if (c111) {
      long* t112 = __b105;
      __retval106 = t112;
      long* t113 = __retval106;
      return t113;
    }
  long* t114 = __a104;
  __retval106 = t114;
  long* t115 = __retval106;
  return t115;
}

// function: _ZSt8__memcmpIiiEiPKT_PKT0_m
int int_std____memcmp_int__int_(int* v116, int* v117, unsigned long v118) {
bb119: ;
  int* __first1120;
  int* __first2121;
  unsigned long __num122;
  int __retval123;
  __first1120 = v116;
  __first2121 = v117;
  __num122 = v118;
    _Bool r124 = std__is_constant_evaluated();
    if (r124) {
        while (1) {
          unsigned long t126 = __num122;
          unsigned long c127 = 0;
          _Bool c128 = ((t126 > c127)) ? 1 : 0;
          if (!c128) break;
            int* t129 = __first1120;
            int t130 = *t129;
            int* t131 = __first2121;
            int t132 = *t131;
            _Bool c133 = ((t130 != t132)) ? 1 : 0;
            if (c133) {
              int* t134 = __first1120;
              int t135 = *t134;
              int* t136 = __first2121;
              int t137 = *t136;
              _Bool c138 = ((t135 < t137)) ? 1 : 0;
              int c139 = -1;
              int c140 = 1;
              int sel141 = c138 ? c139 : c140;
              __retval123 = sel141;
              int t142 = __retval123;
              int ret_val143 = t142;
              return ret_val143;
            }
        for_step125: ;
          int* t144 = __first1120;
          int c145 = 1;
          int* ptr146 = &(t144)[c145];
          __first1120 = ptr146;
          int* t147 = __first2121;
          int c148 = 1;
          int* ptr149 = &(t147)[c148];
          __first2121 = ptr149;
          unsigned long t150 = __num122;
          unsigned long u151 = t150 - 1;
          __num122 = u151;
        }
      int c152 = 0;
      __retval123 = c152;
      int t153 = __retval123;
      return t153;
    } else {
      int* t154 = __first1120;
      void* cast155 = (void*)t154;
      int* t156 = __first2121;
      void* cast157 = (void*)t156;
      unsigned long c158 = 4;
      unsigned long t159 = __num122;
      unsigned long b160 = c158 * t159;
      int r161 = memcmp(cast155, cast157, b160);
      __retval123 = r161;
      int t162 = __retval123;
      return t162;
    }
  abort();
}

// function: _ZNSt7__equalILb1EE5equalIiEEbPKT_S4_S4_
_Bool bool_std____equal_true___equal_int_(int* v163, int* v164, int* v165) {
bb166: ;
  int* __first1167;
  int* __last1168;
  int* __first2169;
  _Bool __retval170;
  __first1167 = v163;
  __last1168 = v164;
  __first2169 = v165;
    unsigned long __len171;
    int* t172 = __last1168;
    int* t173 = __first1167;
    long diff174 = t172 - t173;
    unsigned long cast175 = (unsigned long)diff174;
    __len171 = cast175;
    unsigned long t176 = __len171;
    _Bool cast177 = (_Bool)t176;
    if (cast177) {
      int* t178 = __first1167;
      int* t179 = __first2169;
      unsigned long t180 = __len171;
      int r181 = int_std____memcmp_int__int_(t178, t179, t180);
      if (__cir_exc_active) {
        _Bool __cir_eh_ret = (_Bool)0;
        return __cir_eh_ret;
      }
      _Bool cast182 = (_Bool)r181;
      _Bool u183 = !cast182;
      __retval170 = u183;
      _Bool t184 = __retval170;
      return t184;
    }
  _Bool c185 = 1;
  __retval170 = c185;
  _Bool t186 = __retval170;
  return t186;
}

// function: _ZSt12__equal_aux1IPiS0_EbT_S1_T0_
_Bool bool_std____equal_aux1_int___int__(int* v187, int* v188, int* v189) {
bb190: ;
  int* __first1191;
  int* __last1192;
  int* __first2193;
  _Bool __retval194;
  _Bool __simple195;
  __first1191 = v187;
  __last1192 = v188;
  __first2193 = v189;
  _Bool c196 = 1;
  __simple195 = c196;
  int* t197 = __first1191;
  int* t198 = __last1192;
  int* t199 = __first2193;
  _Bool r200 = bool_std____equal_true___equal_int_(t197, t198, t199);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval194 = r200;
  _Bool t201 = __retval194;
  return t201;
}

// function: _ZSt12__equal_aux1IPiiRKiPS1_EN9__gnu_cxx11__enable_ifIXsr23__is_random_access_iterIT_EE7__valueEbE6__typeES6_S6_St15_Deque_iteratorIT0_T1_T2_E
_Bool __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(int* v202, int* v203, struct std___Deque_iterator_int_int___int___ v204) {
bb205: ;
  int* __first1206;
  int* __last1207;
  struct std___Deque_iterator_int_int___int___ __first2208;
  _Bool __retval209;
  long __len210;
  __first1206 = v202;
  __last1207 = v203;
  __first2208 = v204;
  int* t211 = __last1207;
  int* t212 = __first1206;
  long diff213 = t211 - t212;
  __len210 = diff213;
    while (1) {
      long t214 = __len210;
      long c215 = 0;
      _Bool c216 = ((t214 > c215)) ? 1 : 0;
      if (!c216) break;
        long __clen217;
        long ref_tmp0218;
        int* t219 = __first2208._M_last;
        int* t220 = __first2208._M_cur;
        long diff221 = t219 - t220;
        ref_tmp0218 = diff221;
        long* r222 = long_const__std__min_long_(&__len210, &ref_tmp0218);
        if (__cir_exc_active) {
          _Bool __cir_eh_ret = (_Bool)0;
          return __cir_eh_ret;
        }
        long t223 = *r222;
        __clen217 = t223;
          int* t224 = __first1206;
          int* t225 = __first1206;
          long t226 = __clen217;
          int* ptr227 = &(t225)[t226];
          int* t228 = __first2208._M_cur;
          _Bool r229 = bool_std____equal_aux1_int___int__(t224, ptr227, t228);
          if (__cir_exc_active) {
            _Bool __cir_eh_ret = (_Bool)0;
            return __cir_eh_ret;
          }
          _Bool u230 = !r229;
          if (u230) {
            _Bool c231 = 0;
            __retval209 = c231;
            _Bool t232 = __retval209;
            _Bool ret_val233 = t232;
            return ret_val233;
          }
        long t234 = __clen217;
        int* t235 = __first1206;
        int* ptr236 = &(t235)[t234];
        __first1206 = ptr236;
        long t237 = __clen217;
        long t238 = __len210;
        long b239 = t238 - t237;
        __len210 = b239;
        long t240 = __clen217;
        struct std___Deque_iterator_int_int___int___* r241 = std___Deque_iterator_int__int_const___int_const____operator__(&__first2208, t240);
    }
  _Bool c242 = 1;
  __retval209 = c242;
  _Bool t243 = __retval209;
  return t243;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EpLEl
struct std___Deque_iterator_int_int___int___* std___Deque_iterator_int__int_const___int_const____operator__(struct std___Deque_iterator_int_int___int___* v244, long v245) {
bb246: ;
  struct std___Deque_iterator_int_int___int___* this247;
  long __n248;
  struct std___Deque_iterator_int_int___int___* __retval249;
  long __offset250;
  this247 = v244;
  __n248 = v245;
  struct std___Deque_iterator_int_int___int___* t251 = this247;
  long t252 = __n248;
  int* t253 = t251->_M_cur;
  int* t254 = t251->_M_first;
  long diff255 = t253 - t254;
  long b256 = t252 + diff255;
  __offset250 = b256;
    long t257 = __offset250;
    long c258 = 0;
    _Bool c259 = ((t257 >= c258)) ? 1 : 0;
    _Bool ternary260;
    if (c259) {
      long t261 = __offset250;
      unsigned long r262 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
      long cast263 = (long)r262;
      _Bool c264 = ((t261 < cast263)) ? 1 : 0;
      ternary260 = (_Bool)c264;
    } else {
      _Bool c265 = 0;
      ternary260 = (_Bool)c265;
    }
    if (ternary260) {
      long t266 = __n248;
      int* t267 = t251->_M_cur;
      int* ptr268 = &(t267)[t266];
      t251->_M_cur = ptr268;
    } else {
      long __node_offset269;
      long t270 = __offset250;
      long c271 = 0;
      _Bool c272 = ((t270 > c271)) ? 1 : 0;
      long ternary273;
      if (c272) {
        long t274 = __offset250;
        unsigned long r275 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
        long cast276 = (long)r275;
        long b277 = t274 / cast276;
        ternary273 = (long)b277;
      } else {
        long t278 = __offset250;
        long u279 = -t278;
        long c280 = 1;
        long b281 = u279 - c280;
        unsigned long cast282 = (unsigned long)b281;
        unsigned long r283 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
        unsigned long b284 = cast282 / r283;
        long cast285 = (long)b284;
        long u286 = -cast285;
        long c287 = 1;
        long b288 = u286 - c287;
        ternary273 = (long)b288;
      }
      __node_offset269 = ternary273;
      int** t289 = t251->_M_node;
      long t290 = __node_offset269;
      int** ptr291 = &(t289)[t290];
      std___Deque_iterator_int__int_const___int_const_____M_set_node(t251, ptr291);
      int* t292 = t251->_M_first;
      long t293 = __offset250;
      long t294 = __node_offset269;
      unsigned long r295 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
      long cast296 = (long)r295;
      long b297 = t294 * cast296;
      long b298 = t293 - b297;
      int* ptr299 = &(t292)[b298];
      t251->_M_cur = ptr299;
    }
  __retval249 = t251;
  struct std___Deque_iterator_int_int___int___* t300 = __retval249;
  return t300;
}

// function: _ZSt11__equal_ditIiRKiPS0_St15_Deque_iteratorIiS1_S2_EEbRKS3_IT_T0_T1_ESA_T2_
_Bool bool_std____equal_dit_int__int_const___int_const___std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___* v301, struct std___Deque_iterator_int_int___int___* v302, struct std___Deque_iterator_int_int___int___ v303) {
bb304: ;
  struct std___Deque_iterator_int_int___int___* __first1305;
  struct std___Deque_iterator_int_int___int___* __last1306;
  struct std___Deque_iterator_int_int___int___ __first2307;
  _Bool __retval308;
  struct std___Deque_iterator_int_int___int___ agg_tmp3309;
  __first1305 = v301;
  __last1306 = v302;
  __first2307 = v303;
    struct std___Deque_iterator_int_int___int___* t310 = __first1305;
    int** t311 = t310->_M_node;
    struct std___Deque_iterator_int_int___int___* t312 = __last1306;
    int** t313 = t312->_M_node;
    _Bool c314 = ((t311 != t313)) ? 1 : 0;
    if (c314) {
      struct std___Deque_iterator_int_int___int___ agg_tmp2315;
        struct std___Deque_iterator_int_int___int___ agg_tmp0316;
        struct std___Deque_iterator_int_int___int___* t317 = __first1305;
        int* t318 = t317->_M_cur;
        struct std___Deque_iterator_int_int___int___* t319 = __first1305;
        int* t320 = t319->_M_last;
        std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp0316, &__first2307);
        struct std___Deque_iterator_int_int___int___ t321 = agg_tmp0316;
        _Bool r322 = __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(t318, t320, t321);
        if (__cir_exc_active) {
          _Bool __cir_eh_ret = (_Bool)0;
          return __cir_eh_ret;
        }
        _Bool u323 = !r322;
        if (u323) {
          _Bool c324 = 0;
          __retval308 = c324;
          _Bool t325 = __retval308;
          return t325;
        }
      struct std___Deque_iterator_int_int___int___* t326 = __first1305;
      int* t327 = t326->_M_last;
      struct std___Deque_iterator_int_int___int___* t328 = __first1305;
      int* t329 = t328->_M_cur;
      long diff330 = t327 - t329;
      struct std___Deque_iterator_int_int___int___* r331 = std___Deque_iterator_int__int_const___int_const____operator__(&__first2307, diff330);
        int** __node332;
        struct std___Deque_iterator_int_int___int___* t333 = __first1305;
        int** t334 = t333->_M_node;
        int c335 = 1;
        int** ptr336 = &(t334)[c335];
        __node332 = ptr336;
        while (1) {
          int** t338 = __node332;
          struct std___Deque_iterator_int_int___int___* t339 = __last1306;
          int** t340 = t339->_M_node;
          _Bool c341 = ((t338 != t340)) ? 1 : 0;
          if (!c341) break;
            struct std___Deque_iterator_int_int___int___ agg_tmp1342;
            int** t343 = __node332;
            int* t344 = *t343;
            int** t345 = __node332;
            int* t346 = *t345;
            unsigned long r347 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
            int* ptr348 = &(t346)[r347];
            std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp1342, &__first2307);
            struct std___Deque_iterator_int_int___int___ t349 = agg_tmp1342;
            _Bool r350 = __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(t344, ptr348, t349);
            if (__cir_exc_active) {
              _Bool __cir_eh_ret = (_Bool)0;
              return __cir_eh_ret;
            }
            _Bool u351 = !r350;
            if (u351) {
              _Bool c352 = 0;
              __retval308 = c352;
              _Bool t353 = __retval308;
              _Bool ret_val354 = t353;
              return ret_val354;
            }
        for_step337: ;
          unsigned long r355 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
          long cast356 = (long)r355;
          struct std___Deque_iterator_int_int___int___* r357 = std___Deque_iterator_int__int_const___int_const____operator__(&__first2307, cast356);
          int** t358 = __node332;
          int c359 = 1;
          int** ptr360 = &(t358)[c359];
          __node332 = ptr360;
        }
      struct std___Deque_iterator_int_int___int___* t361 = __last1306;
      int* t362 = t361->_M_first;
      struct std___Deque_iterator_int_int___int___* t363 = __last1306;
      int* t364 = t363->_M_cur;
      std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp2315, &__first2307);
      struct std___Deque_iterator_int_int___int___ t365 = agg_tmp2315;
      _Bool r366 = __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(t362, t364, t365);
      if (__cir_exc_active) {
        _Bool __cir_eh_ret = (_Bool)0;
        return __cir_eh_ret;
      }
      __retval308 = r366;
      _Bool t367 = __retval308;
      return t367;
    }
  struct std___Deque_iterator_int_int___int___* t368 = __first1305;
  int* t369 = t368->_M_cur;
  struct std___Deque_iterator_int_int___int___* t370 = __last1306;
  int* t371 = t370->_M_cur;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp3309, &__first2307);
  struct std___Deque_iterator_int_int___int___ t372 = agg_tmp3309;
  _Bool r373 = __gnu_cxx____enable_if___is_random_access_iter_int______value__bool_____type_std____equal_aux1_int___int__int_const___int_const__(t369, t371, t372);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval308 = r373;
  _Bool t374 = __retval308;
  return t374;
}

// function: _ZSt12__equal_aux1IiRKiPS0_iS1_S2_EbSt15_Deque_iteratorIT_T0_T1_ES7_S3_IT2_T3_T4_E
_Bool bool_std____equal_aux1_int__int_const___int_const___int__int_const___int_const__(struct std___Deque_iterator_int_int___int___ v375, struct std___Deque_iterator_int_int___int___ v376, struct std___Deque_iterator_int_int___int___ v377) {
bb378: ;
  struct std___Deque_iterator_int_int___int___ __first1379;
  struct std___Deque_iterator_int_int___int___ __last1380;
  struct std___Deque_iterator_int_int___int___ __first2381;
  _Bool __retval382;
  struct std___Deque_iterator_int_int___int___ agg_tmp0383;
  __first1379 = v375;
  __last1380 = v376;
  __first2381 = v377;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp0383, &__first2381);
  struct std___Deque_iterator_int_int___int___ t384 = agg_tmp0383;
  _Bool r385 = bool_std____equal_dit_int__int_const___int_const___std___Deque_iterator_int__int_const___int_const____(&__first1379, &__last1380, t384);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval382 = r385;
  _Bool t386 = __retval382;
  return t386;
}

// function: _ZSt12__niter_baseISt15_Deque_iteratorIiRKiPS1_EET_S5_
struct std___Deque_iterator_int_int___int___ std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ v387) {
bb388: ;
  struct std___Deque_iterator_int_int___int___ __it389;
  struct std___Deque_iterator_int_int___int___ __retval390;
  __it389 = v387;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&__retval390, &__it389);
  struct std___Deque_iterator_int_int___int___ t391 = __retval390;
  return t391;
}

// function: _ZSt11__equal_auxISt15_Deque_iteratorIiRKiPS1_ES4_EbT_S5_T0_
_Bool bool_std____equal_aux_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ v392, struct std___Deque_iterator_int_int___int___ v393, struct std___Deque_iterator_int_int___int___ v394) {
bb395: ;
  struct std___Deque_iterator_int_int___int___ __first1396;
  struct std___Deque_iterator_int_int___int___ __last1397;
  struct std___Deque_iterator_int_int___int___ __first2398;
  _Bool __retval399;
  struct std___Deque_iterator_int_int___int___ agg_tmp0400;
  struct std___Deque_iterator_int_int___int___ agg_tmp1401;
  struct std___Deque_iterator_int_int___int___ agg_tmp2402;
  struct std___Deque_iterator_int_int___int___ agg_tmp3403;
  struct std___Deque_iterator_int_int___int___ agg_tmp4404;
  struct std___Deque_iterator_int_int___int___ agg_tmp5405;
  __first1396 = v392;
  __last1397 = v393;
  __first2398 = v394;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp1401, &__first1396);
  struct std___Deque_iterator_int_int___int___ t406 = agg_tmp1401;
  struct std___Deque_iterator_int_int___int___ r407 = std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(t406);
  agg_tmp0400 = r407;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp3403, &__last1397);
  struct std___Deque_iterator_int_int___int___ t408 = agg_tmp3403;
  struct std___Deque_iterator_int_int___int___ r409 = std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(t408);
  agg_tmp2402 = r409;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp5405, &__first2398);
  struct std___Deque_iterator_int_int___int___ t410 = agg_tmp5405;
  struct std___Deque_iterator_int_int___int___ r411 = std___Deque_iterator_int__int_const___int_const___std____niter_base_std___Deque_iterator_int__int_const___int_const____(t410);
  agg_tmp4404 = r411;
  struct std___Deque_iterator_int_int___int___ t412 = agg_tmp0400;
  struct std___Deque_iterator_int_int___int___ t413 = agg_tmp2402;
  struct std___Deque_iterator_int_int___int___ t414 = agg_tmp4404;
  _Bool r415 = bool_std____equal_aux1_int__int_const___int_const___int__int_const___int_const__(t412, t413, t414);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval399 = r415;
  _Bool t416 = __retval399;
  return t416;
}

// function: _ZSt5equalISt15_Deque_iteratorIiRKiPS1_ES4_EbT_S5_T0_
_Bool bool_std__equal_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(struct std___Deque_iterator_int_int___int___ v417, struct std___Deque_iterator_int_int___int___ v418, struct std___Deque_iterator_int_int___int___ v419) {
bb420: ;
  struct std___Deque_iterator_int_int___int___ __first1421;
  struct std___Deque_iterator_int_int___int___ __last1422;
  struct std___Deque_iterator_int_int___int___ __first2423;
  _Bool __retval424;
  struct std___Deque_iterator_int_int___int___ agg_tmp0425;
  struct std___Deque_iterator_int_int___int___ agg_tmp1426;
  struct std___Deque_iterator_int_int___int___ agg_tmp2427;
  __first1421 = v417;
  __last1422 = v418;
  __first2423 = v419;
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp0425, &__first1421);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp1426, &__last1422);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp2427, &__first2423);
  struct std___Deque_iterator_int_int___int___ t428 = agg_tmp0425;
  struct std___Deque_iterator_int_int___int___ t429 = agg_tmp1426;
  struct std___Deque_iterator_int_int___int___ t430 = agg_tmp2427;
  _Bool r431 = bool_std____equal_aux_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(t428, t429, t430);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  __retval424 = r431;
  _Bool t432 = __retval424;
  return t432;
}

// function: _ZSteqIiSaIiEEbRKSt5dequeIT_T0_ES6_
_Bool bool_std__operator___int__std__allocator_int___(struct std__deque_int__std__allocator_int__* v433, struct std__deque_int__std__allocator_int__* v434) {
bb435: ;
  struct std__deque_int__std__allocator_int__* __x436;
  struct std__deque_int__std__allocator_int__* __y437;
  _Bool __retval438;
  __x436 = v433;
  __y437 = v434;
  struct std__deque_int__std__allocator_int__* t439 = __x436;
  unsigned long r440 = std__deque_int__std__allocator_int_____size___const(t439);
  struct std__deque_int__std__allocator_int__* t441 = __y437;
  unsigned long r442 = std__deque_int__std__allocator_int_____size___const(t441);
  _Bool c443 = ((r440 == r442)) ? 1 : 0;
  _Bool ternary444;
  if (c443) {
    struct std___Deque_iterator_int_int___int___ agg_tmp0445;
    struct std___Deque_iterator_int_int___int___ agg_tmp1446;
    struct std___Deque_iterator_int_int___int___ agg_tmp2447;
    struct std__deque_int__std__allocator_int__* t448 = __x436;
    struct std___Deque_iterator_int_int___int___ r449 = std__deque_int__std__allocator_int_____begin___const(t448);
    agg_tmp0445 = r449;
    struct std__deque_int__std__allocator_int__* t450 = __x436;
    struct std___Deque_iterator_int_int___int___ r451 = std__deque_int__std__allocator_int_____end___const(t450);
    agg_tmp1446 = r451;
    struct std__deque_int__std__allocator_int__* t452 = __y437;
    struct std___Deque_iterator_int_int___int___ r453 = std__deque_int__std__allocator_int_____begin___const(t452);
    agg_tmp2447 = r453;
    struct std___Deque_iterator_int_int___int___ t454 = agg_tmp0445;
    struct std___Deque_iterator_int_int___int___ t455 = agg_tmp1446;
    struct std___Deque_iterator_int_int___int___ t456 = agg_tmp2447;
    _Bool r457 = bool_std__equal_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____(t454, t455, t456);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    ternary444 = (_Bool)r457;
  } else {
    _Bool c458 = 0;
    ternary444 = (_Bool)c458;
  }
  __retval438 = ternary444;
  _Bool t459 = __retval438;
  return t459;
}

// function: _ZNKSt5dequeIiSaIiEE8max_sizeEv
unsigned long std__deque_int__std__allocator_int_____max_size___const(struct std__deque_int__std__allocator_int__* v460) {
bb461: ;
  struct std__deque_int__std__allocator_int__* this462;
  unsigned long __retval463;
  this462 = v460;
  struct std__deque_int__std__allocator_int__* t464 = this462;
  struct std___Deque_base_int__std__allocator_int__* base465 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t464 + 0);
  struct std__allocator_int_* r466 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(base465);
  unsigned long r467 = std__deque_int__std__allocator_int______S_max_size(r466);
  __retval463 = r467;
  unsigned long t468 = __retval463;
  return t468;
}

// function: _ZNKSt5dequeIiSaIiEE4sizeEv
unsigned long std__deque_int__std__allocator_int_____size___const(struct std__deque_int__std__allocator_int__* v469) {
bb470: ;
  struct std__deque_int__std__allocator_int__* this471;
  unsigned long __retval472;
  unsigned long __sz473;
  this471 = v469;
  struct std__deque_int__std__allocator_int__* t474 = this471;
  struct std___Deque_base_int__std__allocator_int__* base475 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t474 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base476 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base475->_M_impl) + 0);
  struct std___Deque_base_int__std__allocator_int__* base477 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t474 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base478 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base477->_M_impl) + 0);
  long r479 = std__operator_(&base476->_M_finish, &base478->_M_start);
  unsigned long cast480 = (unsigned long)r479;
  __sz473 = cast480;
    unsigned long t481 = __sz473;
    unsigned long r482 = std__deque_int__std__allocator_int_____max_size___const(t474);
    _Bool c483 = ((t481 > r482)) ? 1 : 0;
    if (c483) {
      __builtin_unreachable();
    }
  unsigned long t484 = __sz473;
  __retval472 = t484;
  unsigned long t485 = __retval472;
  return t485;
}

// function: _ZStplRKSt15_Deque_iteratorIiRiPiEl
struct std___Deque_iterator_int__int____int___ std__operator__3(struct std___Deque_iterator_int__int____int___* v486, long v487) {
bb488: ;
  struct std___Deque_iterator_int__int____int___* __x489;
  long __n490;
  struct std___Deque_iterator_int__int____int___ __retval491;
  __x489 = v486;
  __n490 = v487;
  struct std___Deque_iterator_int__int____int___* t492 = __x489;
  std___Deque_iterator_int__int___int_____Deque_iterator(&__retval491, t492);
  long t493 = __n490;
  struct std___Deque_iterator_int__int____int___* r494 = std___Deque_iterator_int__int___int____operator___2(&__retval491, t493);
  struct std___Deque_iterator_int__int____int___ t495 = __retval491;
  return t495;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEixEl
int* std___Deque_iterator_int__int___int____operator___long__const(struct std___Deque_iterator_int__int____int___* v496, long v497) {
bb498: ;
  struct std___Deque_iterator_int__int____int___* this499;
  long __n500;
  int* __retval501;
  struct std___Deque_iterator_int__int____int___ ref_tmp0502;
  this499 = v496;
  __n500 = v497;
  struct std___Deque_iterator_int__int____int___* t503 = this499;
  long t504 = __n500;
  struct std___Deque_iterator_int__int____int___ r505 = std__operator__3(t503, t504);
  ref_tmp0502 = r505;
  int* r506 = std___Deque_iterator_int__int___int____operator____const(&ref_tmp0502);
  __retval501 = r506;
  int* t507 = __retval501;
  return t507;
}

// function: _ZNSt5dequeIiSaIiEEixEm
int* std__deque_int__std__allocator_int_____operator__(struct std__deque_int__std__allocator_int__* v508, unsigned long v509) {
bb510: ;
  struct std__deque_int__std__allocator_int__* this511;
  unsigned long __n512;
  int* __retval513;
  this511 = v508;
  __n512 = v509;
  struct std__deque_int__std__allocator_int__* t514 = this511;
    do {
          unsigned long t515 = __n512;
          unsigned long r516 = std__deque_int__std__allocator_int_____size___const(t514);
          _Bool c517 = ((t515 < r516)) ? 1 : 0;
          _Bool u518 = !c517;
          if (u518) {
            char* cast519 = (char*)&(_str_9);
            int c520 = 1433;
            char* cast521 = (char*)&(__PRETTY_FUNCTION____ZNSt5dequeIiSaIiEEixEm);
            char* cast522 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast519, c520, cast521, cast522);
          }
      _Bool c523 = 0;
      if (!c523) break;
    } while (1);
  struct std___Deque_base_int__std__allocator_int__* base524 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t514 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base525 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base524->_M_impl) + 0);
  unsigned long t526 = __n512;
  long cast527 = (long)t526;
  int* r528 = std___Deque_iterator_int__int___int____operator___long__const(&base525->_M_start, cast527);
  __retval513 = r528;
  int* t529 = __retval513;
  return t529;
}

// function: _ZNSt5dequeIiSaIiEEC2IPivEET_S4_RKS0_
void std__deque_int__std__allocator_int_____deque_int___void_(struct std__deque_int__std__allocator_int__* v530, int* v531, int* v532, struct std__allocator_int_* v533) {
bb534: ;
  struct std__deque_int__std__allocator_int__* this535;
  int* __first536;
  int* __last537;
  struct std__allocator_int_* __a538;
  struct std__forward_iterator_tag agg_tmp0539;
  struct std__random_access_iterator_tag ref_tmp0540;
  this535 = v530;
  __first536 = v531;
  __last537 = v532;
  __a538 = v533;
  struct std__deque_int__std__allocator_int__* t541 = this535;
  struct std___Deque_base_int__std__allocator_int__* base542 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t541 + 0);
  struct std__allocator_int_* t543 = __a538;
  std___Deque_base_int__std__allocator_int______Deque_base(base542, t543);
  if (__cir_exc_active) {
    return;
  }
    int* t544 = __first536;
    int* t545 = __last537;
    struct std__random_access_iterator_tag r546 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first536);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base547 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t541 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base547);
      }
      return;
    }
    ref_tmp0540 = r546;
    struct std__forward_iterator_tag* base548 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp0540) + 0);
    struct std__forward_iterator_tag t549 = agg_tmp0539;
    void_std__deque_int__std__allocator_int______M_range_initialize_int__(t541, t544, t545, t549);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base550 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t541 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base550);
      }
      return;
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v551, int v552) {
bb553: ;
  int __a554;
  int __b555;
  int __retval556;
  __a554 = v551;
  __b555 = v552;
  int t557 = __a554;
  int t558 = __b555;
  int b559 = t557 | t558;
  __retval556 = b559;
  int t560 = __retval556;
  return t560;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v561) {
bb562: ;
  struct std__basic_ios_char__std__char_traits_char__* this563;
  int __retval564;
  this563 = v561;
  struct std__basic_ios_char__std__char_traits_char__* t565 = this563;
  struct std__ios_base* base566 = (struct std__ios_base*)((char *)t565 + 0);
  int t567 = base566->_M_streambuf_state;
  __retval564 = t567;
  int t568 = __retval564;
  return t568;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v569, int v570) {
bb571: ;
  struct std__basic_ios_char__std__char_traits_char__* this572;
  int __state573;
  this572 = v569;
  __state573 = v570;
  struct std__basic_ios_char__std__char_traits_char__* t574 = this572;
  int r575 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t574);
  if (__cir_exc_active) {
    return;
  }
  int t576 = __state573;
  int r577 = std__operator__2(r575, t576);
  std__basic_ios_char__std__char_traits_char_____clear(t574, r577);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v578, char* v579) {
bb580: ;
  char* __c1581;
  char* __c2582;
  _Bool __retval583;
  __c1581 = v578;
  __c2582 = v579;
  char* t584 = __c1581;
  char t585 = *t584;
  int cast586 = (int)t585;
  char* t587 = __c2582;
  char t588 = *t587;
  int cast589 = (int)t588;
  _Bool c590 = ((cast586 == cast589)) ? 1 : 0;
  __retval583 = c590;
  _Bool t591 = __retval583;
  return t591;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v592) {
bb593: ;
  char* __p594;
  unsigned long __retval595;
  unsigned long __i596;
  __p594 = v592;
  unsigned long c597 = 0;
  __i596 = c597;
    char ref_tmp0598;
    while (1) {
      unsigned long t599 = __i596;
      char* t600 = __p594;
      char* ptr601 = &(t600)[t599];
      char c602 = 0;
      ref_tmp0598 = c602;
      _Bool r603 = __gnu_cxx__char_traits_char___eq(ptr601, &ref_tmp0598);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u604 = !r603;
      if (!u604) break;
      unsigned long t605 = __i596;
      unsigned long u606 = t605 + 1;
      __i596 = u606;
    }
  unsigned long t607 = __i596;
  __retval595 = t607;
  unsigned long t608 = __retval595;
  return t608;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v609) {
bb610: ;
  char* __s611;
  unsigned long __retval612;
  __s611 = v609;
    _Bool r613 = std____is_constant_evaluated();
    if (r613) {
      char* t614 = __s611;
      unsigned long r615 = __gnu_cxx__char_traits_char___length(t614);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval612 = r615;
      unsigned long t616 = __retval612;
      return t616;
    }
  char* t617 = __s611;
  unsigned long r618 = strlen(t617);
  __retval612 = r618;
  unsigned long t619 = __retval612;
  return t619;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v620, char* v621) {
bb622: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out623;
  char* __s624;
  struct std__basic_ostream_char__std__char_traits_char__* __retval625;
  __out623 = v620;
  __s624 = v621;
    char* t626 = __s624;
    _Bool cast627 = (_Bool)t626;
    _Bool u628 = !cast627;
    if (u628) {
      struct std__basic_ostream_char__std__char_traits_char__* t629 = __out623;
      void** v630 = (void**)t629;
      void* v631 = *((void**)v630);
      unsigned char* cast632 = (unsigned char*)v631;
      long c633 = -24;
      unsigned char* ptr634 = &(cast632)[c633];
      long* cast635 = (long*)ptr634;
      long t636 = *cast635;
      unsigned char* cast637 = (unsigned char*)t629;
      unsigned char* ptr638 = &(cast637)[t636];
      struct std__basic_ostream_char__std__char_traits_char__* cast639 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr638;
      struct std__basic_ios_char__std__char_traits_char__* cast640 = (struct std__basic_ios_char__std__char_traits_char__*)cast639;
      int t641 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast640, t641);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t642 = __out623;
      char* t643 = __s624;
      char* t644 = __s624;
      unsigned long r645 = std__char_traits_char___length(t644);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast646 = (long)r645;
      struct std__basic_ostream_char__std__char_traits_char__* r647 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t642, t643, cast646);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t648 = __out623;
  __retval625 = t648;
  struct std__basic_ostream_char__std__char_traits_char__* t649 = __retval625;
  return t649;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v650, void* v651) {
bb652: ;
  struct std__basic_ostream_char__std__char_traits_char__* this653;
  void* __pf654;
  struct std__basic_ostream_char__std__char_traits_char__* __retval655;
  this653 = v650;
  __pf654 = v651;
  struct std__basic_ostream_char__std__char_traits_char__* t656 = this653;
  void* t657 = __pf654;
  struct std__basic_ostream_char__std__char_traits_char__* r658 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t657)(t656);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval655 = r658;
  struct std__basic_ostream_char__std__char_traits_char__* t659 = __retval655;
  return t659;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v660) {
bb661: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os662;
  struct std__basic_ostream_char__std__char_traits_char__* __retval663;
  __os662 = v660;
  struct std__basic_ostream_char__std__char_traits_char__* t664 = __os662;
  struct std__basic_ostream_char__std__char_traits_char__* r665 = std__ostream__flush(t664);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval663 = r665;
  struct std__basic_ostream_char__std__char_traits_char__* t666 = __retval663;
  return t666;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v667) {
bb668: ;
  struct std__ctype_char_* __f669;
  struct std__ctype_char_* __retval670;
  __f669 = v667;
    struct std__ctype_char_* t671 = __f669;
    _Bool cast672 = (_Bool)t671;
    _Bool u673 = !cast672;
    if (u673) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t674 = __f669;
  __retval670 = t674;
  struct std__ctype_char_* t675 = __retval670;
  return t675;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v676, char v677) {
bb678: ;
  struct std__ctype_char_* this679;
  char __c680;
  char __retval681;
  this679 = v676;
  __c680 = v677;
  struct std__ctype_char_* t682 = this679;
    char t683 = t682->_M_widen_ok;
    _Bool cast684 = (_Bool)t683;
    if (cast684) {
      char t685 = __c680;
      unsigned char cast686 = (unsigned char)t685;
      unsigned long cast687 = (unsigned long)cast686;
      char t688 = t682->_M_widen[cast687];
      __retval681 = t688;
      char t689 = __retval681;
      return t689;
    }
  std__ctype_char____M_widen_init___const(t682);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t690 = __c680;
  void** v691 = (void**)t682;
  void* v692 = *((void**)v691);
  char vcall695 = (char)__VERIFIER_virtual_call_char_char(t682, 6, t690);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval681 = vcall695;
  char t696 = __retval681;
  return t696;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v697, char v698) {
bb699: ;
  struct std__basic_ios_char__std__char_traits_char__* this700;
  char __c701;
  char __retval702;
  this700 = v697;
  __c701 = v698;
  struct std__basic_ios_char__std__char_traits_char__* t703 = this700;
  struct std__ctype_char_* t704 = t703->_M_ctype;
  struct std__ctype_char_* r705 = std__ctype_char__const__std____check_facet_std__ctype_char___(t704);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t706 = __c701;
  char r707 = std__ctype_char___widen_char__const(r705, t706);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval702 = r707;
  char t708 = __retval702;
  return t708;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v709) {
bb710: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os711;
  struct std__basic_ostream_char__std__char_traits_char__* __retval712;
  __os711 = v709;
  struct std__basic_ostream_char__std__char_traits_char__* t713 = __os711;
  struct std__basic_ostream_char__std__char_traits_char__* t714 = __os711;
  void** v715 = (void**)t714;
  void* v716 = *((void**)v715);
  unsigned char* cast717 = (unsigned char*)v716;
  long c718 = -24;
  unsigned char* ptr719 = &(cast717)[c718];
  long* cast720 = (long*)ptr719;
  long t721 = *cast720;
  unsigned char* cast722 = (unsigned char*)t714;
  unsigned char* ptr723 = &(cast722)[t721];
  struct std__basic_ostream_char__std__char_traits_char__* cast724 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr723;
  struct std__basic_ios_char__std__char_traits_char__* cast725 = (struct std__basic_ios_char__std__char_traits_char__*)cast724;
  char c726 = 10;
  char r727 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast725, c726);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r728 = std__ostream__put(t713, r727);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r729 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r728);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval712 = r729;
  struct std__basic_ostream_char__std__char_traits_char__* t730 = __retval712;
  return t730;
}

// function: _ZNSt5dequeIiSaIiEED2Ev
void std__deque_int__std__allocator_int______deque(struct std__deque_int__std__allocator_int__* v731) {
bb732: ;
  struct std__deque_int__std__allocator_int__* this733;
  struct std___Deque_iterator_int__int____int___ agg_tmp0734;
  struct std___Deque_iterator_int__int____int___ agg_tmp1735;
  this733 = v731;
  struct std__deque_int__std__allocator_int__* t736 = this733;
    struct std___Deque_iterator_int__int____int___ r737 = std__deque_int__std__allocator_int_____begin(t736);
    agg_tmp0734 = r737;
    struct std___Deque_iterator_int__int____int___ r738 = std__deque_int__std__allocator_int_____end(t736);
    agg_tmp1735 = r738;
    struct std___Deque_base_int__std__allocator_int__* base739 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std__allocator_int_* r740 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base739);
    struct std___Deque_iterator_int__int____int___ t741 = agg_tmp0734;
    struct std___Deque_iterator_int__int____int___ t742 = agg_tmp1735;
    std__deque_int__std__allocator_int______M_destroy_data(t736, t741, t742, r740);
    if (__cir_exc_active) {
      {
        struct std___Deque_base_int__std__allocator_int__* base743 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t736 + 0);
        std___Deque_base_int__std__allocator_int_______Deque_base(base743);
      }
      return;
    }
  {
    struct std___Deque_base_int__std__allocator_int__* base744 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t736 + 0);
    std___Deque_base_int__std__allocator_int_______Deque_base(base744);
  }
  return;
}

// function: main
int main() {
bb745: ;
  int __retval746;
  unsigned int i747;
  struct std__deque_int__std__allocator_int__ first748;
  struct std__deque_int__std__allocator_int__ second749;
  int ref_tmp0750;
  struct std__allocator_int_ ref_tmp1751;
  struct std__deque_int__std__allocator_int__ third752;
  struct std___Deque_iterator_int__int____int___ agg_tmp0753;
  struct std___Deque_iterator_int__int____int___ agg_tmp1754;
  struct std__allocator_int_ ref_tmp2755;
  struct std__deque_int__std__allocator_int__ fourth756;
  int myints757[4];
  struct std__deque_int__std__allocator_int__ fifth758;
  struct std__allocator_int_ ref_tmp3759;
  int c760 = 0;
  __retval746 = c760;
  std__deque_int__std__allocator_int_____deque_3(&first748);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    unsigned long c761 = 4;
    int c762 = 100;
    ref_tmp0750 = c762;
    std__allocator_int___allocator_2(&ref_tmp1751);
      std__deque_int__std__allocator_int_____deque_2(&second749, c761, &ref_tmp0750, &ref_tmp1751);
      if (__cir_exc_active) {
        {
          std__allocator_int____allocator(&ref_tmp1751);
        }
        {
          std__deque_int__std__allocator_int______deque(&first748);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    {
      std__allocator_int____allocator(&ref_tmp1751);
    }
      struct std___Deque_iterator_int__int____int___ r763 = std__deque_int__std__allocator_int_____begin(&second749);
      agg_tmp0753 = r763;
      struct std___Deque_iterator_int__int____int___ r764 = std__deque_int__std__allocator_int_____end(&second749);
      agg_tmp1754 = r764;
      std__allocator_int___allocator_2(&ref_tmp2755);
        struct std___Deque_iterator_int__int____int___ t765 = agg_tmp0753;
        struct std___Deque_iterator_int__int____int___ t766 = agg_tmp1754;
        std__deque_int__std__allocator_int_____deque_std___Deque_iterator_int__int___int____void_(&third752, t765, t766, &ref_tmp2755);
        if (__cir_exc_active) {
          {
            std__allocator_int____allocator(&ref_tmp2755);
          }
          {
            std__deque_int__std__allocator_int______deque(&second749);
          }
          {
            std__deque_int__std__allocator_int______deque(&first748);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      {
        std__allocator_int____allocator(&ref_tmp2755);
      }
        std__deque_int__std__allocator_int_____deque(&fourth756, &third752);
        if (__cir_exc_active) {
          {
            std__deque_int__std__allocator_int______deque(&third752);
          }
          {
            std__deque_int__std__allocator_int______deque(&second749);
          }
          {
            std__deque_int__std__allocator_int______deque(&first748);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
          _Bool r767 = bool_std__operator___int__std__allocator_int___(&fourth756, &third752);
          if (__cir_exc_active) {
            {
              std__deque_int__std__allocator_int______deque(&fourth756);
            }
            {
              std__deque_int__std__allocator_int______deque(&third752);
            }
            {
              std__deque_int__std__allocator_int______deque(&second749);
            }
            {
              std__deque_int__std__allocator_int______deque(&first748);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          if (r767) {
          } else {
            char* cast768 = (char*)&(_str);
            char* c769 = (char*)_str_1;
            unsigned int c770 = 25;
            char* cast771 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast768, c769, c770, cast771);
          }
          unsigned long r772 = std__deque_int__std__allocator_int_____size___const(&first748);
          unsigned long c773 = 0;
          _Bool c774 = ((r772 == c773)) ? 1 : 0;
          if (c774) {
          } else {
            char* cast775 = (char*)&(_str_2);
            char* c776 = (char*)_str_1;
            unsigned int c777 = 26;
            char* cast778 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast775, c776, c777, cast778);
          }
          unsigned long r779 = std__deque_int__std__allocator_int_____size___const(&second749);
          unsigned long c780 = 4;
          _Bool c781 = ((r779 == c780)) ? 1 : 0;
          if (c781) {
          } else {
            char* cast782 = (char*)&(_str_3);
            char* c783 = (char*)_str_1;
            unsigned int c784 = 27;
            char* cast785 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast782, c783, c784, cast785);
          }
          unsigned long c786 = 2;
          int* r787 = std__deque_int__std__allocator_int_____operator__(&second749, c786);
          int t788 = *r787;
          int c789 = 100;
          _Bool c790 = ((t788 == c789)) ? 1 : 0;
          if (c790) {
          } else {
            char* cast791 = (char*)&(_str_4);
            char* c792 = (char*)_str_1;
            unsigned int c793 = 28;
            char* cast794 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast791, c792, c793, cast794);
          }
          unsigned long c795 = 0;
          int* r796 = std__deque_int__std__allocator_int_____operator__(&third752, c795);
          int t797 = *r796;
          int c798 = 100;
          _Bool c799 = ((t797 == c798)) ? 1 : 0;
          if (c799) {
          } else {
            char* cast800 = (char*)&(_str_5);
            char* c801 = (char*)_str_1;
            unsigned int c802 = 29;
            char* cast803 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast800, c801, c802, cast803);
          }
          // array copy
          __builtin_memcpy(myints757, __const_main_myints, (unsigned long)4 * sizeof(__const_main_myints[0]));
          int* cast804 = (int*)&(myints757);
          int* cast805 = (int*)&(myints757);
          unsigned long c806 = 16;
          unsigned long c807 = 4;
          unsigned long b808 = c806 / c807;
          int* ptr809 = &(cast805)[b808];
          std__allocator_int___allocator_2(&ref_tmp3759);
            std__deque_int__std__allocator_int_____deque_int___void_(&fifth758, cast804, ptr809, &ref_tmp3759);
            if (__cir_exc_active) {
              {
                std__allocator_int____allocator(&ref_tmp3759);
              }
              {
                std__deque_int__std__allocator_int______deque(&fourth756);
              }
              {
                std__deque_int__std__allocator_int______deque(&third752);
              }
              {
                std__deque_int__std__allocator_int______deque(&second749);
              }
              {
                std__deque_int__std__allocator_int______deque(&first748);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            std__allocator_int____allocator(&ref_tmp3759);
          }
            char* cast810 = (char*)&(_str_6);
            struct std__basic_ostream_char__std__char_traits_char__* r811 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast810);
            if (__cir_exc_active) {
              {
                std__deque_int__std__allocator_int______deque(&fifth758);
              }
              {
                std__deque_int__std__allocator_int______deque(&fourth756);
              }
              {
                std__deque_int__std__allocator_int______deque(&third752);
              }
              {
                std__deque_int__std__allocator_int______deque(&second749);
              }
              {
                std__deque_int__std__allocator_int______deque(&first748);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
              unsigned int c812 = 0;
              i747 = c812;
              while (1) {
                unsigned int t814 = i747;
                unsigned long cast815 = (unsigned long)t814;
                unsigned long r816 = std__deque_int__std__allocator_int_____size___const(&fifth758);
                _Bool c817 = ((cast815 < r816)) ? 1 : 0;
                if (!c817) break;
                unsigned int t818 = i747;
                unsigned long cast819 = (unsigned long)t818;
                int* r820 = std__deque_int__std__allocator_int_____operator__(&fifth758, cast819);
                int t821 = *r820;
                unsigned int t822 = i747;
                unsigned long cast823 = (unsigned long)t822;
                int t824 = myints757[cast823];
                _Bool c825 = ((t821 != t824)) ? 1 : 0;
                if (c825) {
                } else {
                  char* cast826 = (char*)&(_str_7);
                  char* c827 = (char*)_str_1;
                  unsigned int c828 = 37;
                  char* cast829 = (char*)&(__PRETTY_FUNCTION___main);
                  __assert_fail(cast826, c827, c828, cast829);
                }
              for_step813: ;
                unsigned int t830 = i747;
                unsigned int u831 = t830 + 1;
                i747 = u831;
              }
            struct std__basic_ostream_char__std__char_traits_char__* r832 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            if (__cir_exc_active) {
              {
                std__deque_int__std__allocator_int______deque(&fifth758);
              }
              {
                std__deque_int__std__allocator_int______deque(&fourth756);
              }
              {
                std__deque_int__std__allocator_int______deque(&third752);
              }
              {
                std__deque_int__std__allocator_int______deque(&second749);
              }
              {
                std__deque_int__std__allocator_int______deque(&first748);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            int c833 = 0;
            __retval746 = c833;
            int t834 = __retval746;
            int ret_val835 = t834;
            {
              std__deque_int__std__allocator_int______deque(&fifth758);
            }
            {
              std__deque_int__std__allocator_int______deque(&fourth756);
            }
            {
              std__deque_int__std__allocator_int______deque(&third752);
            }
            {
              std__deque_int__std__allocator_int______deque(&second749);
            }
            {
              std__deque_int__std__allocator_int______deque(&first748);
            }
            return ret_val835;
  int t836 = __retval746;
  return t836;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl_2(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v837) {
bb838: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this839;
  this839 = v837;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t840 = this839;
  struct std__allocator_int_* base841 = (struct std__allocator_int_*)((char *)t840 + 0);
  std__allocator_int___allocator_2(base841);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base842 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t840 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base842);
  return;
}

// function: _ZSt16__deque_buf_sizem
unsigned long std____deque_buf_size(unsigned long v843) {
bb844: ;
  unsigned long __size845;
  unsigned long __retval846;
  __size845 = v843;
  unsigned long t847 = __size845;
  unsigned long c848 = 512;
  _Bool c849 = ((t847 < c848)) ? 1 : 0;
  unsigned long ternary850;
  if (c849) {
    unsigned long c851 = 512;
    unsigned long t852 = __size845;
    unsigned long b853 = c851 / t852;
    ternary850 = (unsigned long)b853;
  } else {
    unsigned long c854 = 1;
    ternary850 = (unsigned long)c854;
  }
  __retval846 = ternary850;
  unsigned long t855 = __retval846;
  return t855;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v856, unsigned long* v857) {
bb858: ;
  unsigned long* __a859;
  unsigned long* __b860;
  unsigned long* __retval861;
  __a859 = v856;
  __b860 = v857;
    unsigned long* t862 = __a859;
    unsigned long t863 = *t862;
    unsigned long* t864 = __b860;
    unsigned long t865 = *t864;
    _Bool c866 = ((t863 < t865)) ? 1 : 0;
    if (c866) {
      unsigned long* t867 = __b860;
      __retval861 = t867;
      unsigned long* t868 = __retval861;
      return t868;
    }
  unsigned long* t869 = __a859;
  __retval861 = t869;
  unsigned long* t870 = __retval861;
  return t870;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Deque_base_int__std__allocator_int__* v871) {
bb872: ;
  struct std___Deque_base_int__std__allocator_int__* this873;
  struct std__allocator_int_* __retval874;
  this873 = v871;
  struct std___Deque_base_int__std__allocator_int__* t875 = this873;
  struct std__allocator_int_* base876 = (struct std__allocator_int_*)((char *)&(t875->_M_impl) + 0);
  __retval874 = base876;
  struct std__allocator_int_* t877 = __retval874;
  return t877;
}

// function: _ZNSaIPiEC2IiEERKSaIT_E
void std__allocator_int____allocator_int_(struct std__allocator_int___* v878, struct std__allocator_int_* v879) {
bb880: ;
  struct std__allocator_int___* this881;
  struct std__allocator_int_* unnamed882;
  this881 = v878;
  unnamed882 = v879;
  struct std__allocator_int___* t883 = this881;
  struct std____new_allocator_int___* base884 = (struct std____new_allocator_int___*)((char *)t883 + 0);
  std____new_allocator_int______new_allocator(base884);
  return;
}

// function: _ZNKSt11_Deque_baseIiSaIiEE20_M_get_map_allocatorEv
struct std__allocator_int___ std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(struct std___Deque_base_int__std__allocator_int__* v885) {
bb886: ;
  struct std___Deque_base_int__std__allocator_int__* this887;
  struct std__allocator_int___ __retval888;
  this887 = v885;
  struct std___Deque_base_int__std__allocator_int__* t889 = this887;
  struct std__allocator_int_* r890 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator___const(t889);
  std__allocator_int____allocator_int_(&__retval888, r890);
  struct std__allocator_int___ t891 = __retval888;
  return t891;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb892: ;
  _Bool __retval893;
    _Bool c894 = 0;
    __retval893 = c894;
    _Bool t895 = __retval893;
    return t895;
  abort();
}

// function: _ZNKSt15__new_allocatorIPiE11_M_max_sizeEv
unsigned long std____new_allocator_int_____M_max_size___const(struct std____new_allocator_int___* v896) {
bb897: ;
  struct std____new_allocator_int___* this898;
  unsigned long __retval899;
  this898 = v896;
  struct std____new_allocator_int___* t900 = this898;
  unsigned long c901 = 9223372036854775807;
  unsigned long c902 = 8;
  unsigned long b903 = c901 / c902;
  __retval899 = b903;
  unsigned long t904 = __retval899;
  return t904;
}

// function: _ZNSt15__new_allocatorIPiE8allocateEmPKv
int** std____new_allocator_int____allocate(struct std____new_allocator_int___* v905, unsigned long v906, void* v907) {
bb908: ;
  struct std____new_allocator_int___* this909;
  unsigned long __n910;
  void* unnamed911;
  int** __retval912;
  this909 = v905;
  __n910 = v906;
  unnamed911 = v907;
  struct std____new_allocator_int___* t913 = this909;
    unsigned long t914 = __n910;
    unsigned long r915 = std____new_allocator_int_____M_max_size___const(t913);
    _Bool c916 = ((t914 > r915)) ? 1 : 0;
    if (c916) {
        unsigned long t917 = __n910;
        unsigned long c918 = -1;
        unsigned long c919 = 8;
        unsigned long b920 = c918 / c919;
        _Bool c921 = ((t917 > b920)) ? 1 : 0;
        if (c921) {
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
    unsigned long c922 = 8;
    unsigned long c923 = 16;
    _Bool c924 = ((c922 > c923)) ? 1 : 0;
    if (c924) {
      unsigned long __al925;
      unsigned long c926 = 8;
      __al925 = c926;
      unsigned long t927 = __n910;
      unsigned long c928 = 8;
      unsigned long b929 = t927 * c928;
      unsigned long t930 = __al925;
      void* r931 = operator_new_2(b929, t930);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast932 = (int**)r931;
      __retval912 = cast932;
      int** t933 = __retval912;
      return t933;
    }
  unsigned long t934 = __n910;
  unsigned long c935 = 8;
  unsigned long b936 = t934 * c935;
  void* r937 = operator_new(b936);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  int** cast938 = (int**)r937;
  __retval912 = cast938;
  int** t939 = __retval912;
  return t939;
}

// function: _ZNSaIPiE8allocateEm
int** std__allocator_int____allocate(struct std__allocator_int___* v940, unsigned long v941) {
bb942: ;
  struct std__allocator_int___* this943;
  unsigned long __n944;
  int** __retval945;
  this943 = v940;
  __n944 = v941;
  struct std__allocator_int___* t946 = this943;
    _Bool r947 = std____is_constant_evaluated();
    if (r947) {
        unsigned long t948 = __n944;
        unsigned long c949 = 8;
        unsigned long ovr950;
        _Bool ovf951 = __builtin_mul_overflow(t948, c949, &ovr950);
        __n944 = ovr950;
        if (ovf951) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int** __cir_eh_ret = (int**)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t952 = __n944;
      void* r953 = operator_new(t952);
      if (__cir_exc_active) {
        int** __cir_eh_ret = (int**)0;
        return __cir_eh_ret;
      }
      int** cast954 = (int**)r953;
      __retval945 = cast954;
      int** t955 = __retval945;
      return t955;
    }
  struct std____new_allocator_int___* base956 = (struct std____new_allocator_int___*)((char *)t946 + 0);
  unsigned long t957 = __n944;
  void* c958 = ((void*)0);
  int** r959 = std____new_allocator_int____allocate(base956, t957, c958);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval945 = r959;
  int** t960 = __retval945;
  return t960;
}

// function: _ZNSt16allocator_traitsISaIPiEE8allocateERS1_m
int** std__allocator_traits_std__allocator_int______allocate(struct std__allocator_int___* v961, unsigned long v962) {
bb963: ;
  struct std__allocator_int___* __a964;
  unsigned long __n965;
  int** __retval966;
  __a964 = v961;
  __n965 = v962;
  struct std__allocator_int___* t967 = __a964;
  unsigned long t968 = __n965;
  int** r969 = std__allocator_int____allocate(t967, t968);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval966 = r969;
  int** t970 = __retval966;
  return t970;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_allocate_mapEm
int** std___Deque_base_int__std__allocator_int______M_allocate_map(struct std___Deque_base_int__std__allocator_int__* v971, unsigned long v972) {
bb973: ;
  struct std___Deque_base_int__std__allocator_int__* this974;
  unsigned long __n975;
  int** __retval976;
  struct std__allocator_int___ __map_alloc977;
  this974 = v971;
  __n975 = v972;
  struct std___Deque_base_int__std__allocator_int__* t978 = this974;
  struct std__allocator_int___ r979 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t978);
  __map_alloc977 = r979;
  unsigned long t980 = __n975;
  int** r981 = std__allocator_traits_std__allocator_int______allocate(&__map_alloc977, t980);
  if (__cir_exc_active) {
    int** __cir_eh_ret = (int**)0;
    return __cir_eh_ret;
  }
  __retval976 = r981;
  int** t982 = __retval976;
  return t982;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v983) {
bb984: ;
  struct std____new_allocator_int_* this985;
  unsigned long __retval986;
  this985 = v983;
  struct std____new_allocator_int_* t987 = this985;
  unsigned long c988 = 9223372036854775807;
  unsigned long c989 = 4;
  unsigned long b990 = c988 / c989;
  __retval986 = b990;
  unsigned long t991 = __retval986;
  return t991;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v992, unsigned long v993, void* v994) {
bb995: ;
  struct std____new_allocator_int_* this996;
  unsigned long __n997;
  void* unnamed998;
  int* __retval999;
  this996 = v992;
  __n997 = v993;
  unnamed998 = v994;
  struct std____new_allocator_int_* t1000 = this996;
    unsigned long t1001 = __n997;
    unsigned long r1002 = std____new_allocator_int____M_max_size___const(t1000);
    _Bool c1003 = ((t1001 > r1002)) ? 1 : 0;
    if (c1003) {
        unsigned long t1004 = __n997;
        unsigned long c1005 = -1;
        unsigned long c1006 = 4;
        unsigned long b1007 = c1005 / c1006;
        _Bool c1008 = ((t1004 > b1007)) ? 1 : 0;
        if (c1008) {
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
    unsigned long c1009 = 4;
    unsigned long c1010 = 16;
    _Bool c1011 = ((c1009 > c1010)) ? 1 : 0;
    if (c1011) {
      unsigned long __al1012;
      unsigned long c1013 = 4;
      __al1012 = c1013;
      unsigned long t1014 = __n997;
      unsigned long c1015 = 4;
      unsigned long b1016 = t1014 * c1015;
      unsigned long t1017 = __al1012;
      void* r1018 = operator_new_2(b1016, t1017);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1019 = (int*)r1018;
      __retval999 = cast1019;
      int* t1020 = __retval999;
      return t1020;
    }
  unsigned long t1021 = __n997;
  unsigned long c1022 = 4;
  unsigned long b1023 = t1021 * c1022;
  void* r1024 = operator_new(b1023);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1025 = (int*)r1024;
  __retval999 = cast1025;
  int* t1026 = __retval999;
  return t1026;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1027, unsigned long v1028) {
bb1029: ;
  struct std__allocator_int_* this1030;
  unsigned long __n1031;
  int* __retval1032;
  this1030 = v1027;
  __n1031 = v1028;
  struct std__allocator_int_* t1033 = this1030;
    _Bool r1034 = std____is_constant_evaluated();
    if (r1034) {
        unsigned long t1035 = __n1031;
        unsigned long c1036 = 4;
        unsigned long ovr1037;
        _Bool ovf1038 = __builtin_mul_overflow(t1035, c1036, &ovr1037);
        __n1031 = ovr1037;
        if (ovf1038) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1039 = __n1031;
      void* r1040 = operator_new(t1039);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1041 = (int*)r1040;
      __retval1032 = cast1041;
      int* t1042 = __retval1032;
      return t1042;
    }
  struct std____new_allocator_int_* base1043 = (struct std____new_allocator_int_*)((char *)t1033 + 0);
  unsigned long t1044 = __n1031;
  void* c1045 = ((void*)0);
  int* r1046 = std____new_allocator_int___allocate(base1043, t1044, c1045);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1032 = r1046;
  int* t1047 = __retval1032;
  return t1047;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1048, unsigned long v1049) {
bb1050: ;
  struct std__allocator_int_* __a1051;
  unsigned long __n1052;
  int* __retval1053;
  __a1051 = v1048;
  __n1052 = v1049;
  struct std__allocator_int_* t1054 = __a1051;
  unsigned long t1055 = __n1052;
  int* r1056 = std__allocator_int___allocate(t1054, t1055);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1053 = r1056;
  int* t1057 = __retval1053;
  return t1057;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_allocate_nodeEv
int* std___Deque_base_int__std__allocator_int______M_allocate_node(struct std___Deque_base_int__std__allocator_int__* v1058) {
bb1059: ;
  struct std___Deque_base_int__std__allocator_int__* this1060;
  int* __retval1061;
  this1060 = v1058;
  struct std___Deque_base_int__std__allocator_int__* t1062 = this1060;
  struct std__allocator_int_* base1063 = (struct std__allocator_int_*)((char *)&(t1062->_M_impl) + 0);
  unsigned long c1064 = 4;
  unsigned long r1065 = std____deque_buf_size(c1064);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1066 = std__allocator_traits_std__allocator_int_____allocate(base1063, r1065);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1061 = r1066;
  int* t1067 = __retval1061;
  return t1067;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1068, int* v1069, unsigned long v1070) {
bb1071: ;
  struct std____new_allocator_int_* this1072;
  int* __p1073;
  unsigned long __n1074;
  this1072 = v1068;
  __p1073 = v1069;
  __n1074 = v1070;
  struct std____new_allocator_int_* t1075 = this1072;
    unsigned long c1076 = 4;
    unsigned long c1077 = 16;
    _Bool c1078 = ((c1076 > c1077)) ? 1 : 0;
    if (c1078) {
      int* t1079 = __p1073;
      void* cast1080 = (void*)t1079;
      unsigned long t1081 = __n1074;
      unsigned long c1082 = 4;
      unsigned long b1083 = t1081 * c1082;
      unsigned long c1084 = 4;
      operator_delete_3(cast1080, b1083, c1084);
      return;
    }
  int* t1085 = __p1073;
  void* cast1086 = (void*)t1085;
  unsigned long t1087 = __n1074;
  unsigned long c1088 = 4;
  unsigned long b1089 = t1087 * c1088;
  operator_delete_2(cast1086, b1089);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1090, int* v1091, unsigned long v1092) {
bb1093: ;
  struct std__allocator_int_* this1094;
  int* __p1095;
  unsigned long __n1096;
  this1094 = v1090;
  __p1095 = v1091;
  __n1096 = v1092;
  struct std__allocator_int_* t1097 = this1094;
    _Bool r1098 = std____is_constant_evaluated();
    if (r1098) {
      int* t1099 = __p1095;
      void* cast1100 = (void*)t1099;
      operator_delete(cast1100);
      return;
    }
  struct std____new_allocator_int_* base1101 = (struct std____new_allocator_int_*)((char *)t1097 + 0);
  int* t1102 = __p1095;
  unsigned long t1103 = __n1096;
  std____new_allocator_int___deallocate(base1101, t1102, t1103);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1104, int* v1105, unsigned long v1106) {
bb1107: ;
  struct std__allocator_int_* __a1108;
  int* __p1109;
  unsigned long __n1110;
  __a1108 = v1104;
  __p1109 = v1105;
  __n1110 = v1106;
  struct std__allocator_int_* t1111 = __a1108;
  int* t1112 = __p1109;
  unsigned long t1113 = __n1110;
  std__allocator_int___deallocate(t1111, t1112, t1113);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE18_M_deallocate_nodeEPi
void std___Deque_base_int__std__allocator_int______M_deallocate_node(struct std___Deque_base_int__std__allocator_int__* v1114, int* v1115) {
bb1116: ;
  struct std___Deque_base_int__std__allocator_int__* this1117;
  int* __p1118;
  this1117 = v1114;
  __p1118 = v1115;
  struct std___Deque_base_int__std__allocator_int__* t1119 = this1117;
  struct std__allocator_int_* base1120 = (struct std__allocator_int_*)((char *)&(t1119->_M_impl) + 0);
  int* t1121 = __p1118;
  unsigned long c1122 = 4;
  unsigned long r1123 = std____deque_buf_size(c1122);
  if (__cir_exc_active) {
    return;
  }
  std__allocator_traits_std__allocator_int_____deallocate(base1120, t1121, r1123);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_M_destroy_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_destroy_nodes(struct std___Deque_base_int__std__allocator_int__* v1124, int** v1125, int** v1126) {
bb1127: ;
  struct std___Deque_base_int__std__allocator_int__* this1128;
  int** __nstart1129;
  int** __nfinish1130;
  this1128 = v1124;
  __nstart1129 = v1125;
  __nfinish1130 = v1126;
  struct std___Deque_base_int__std__allocator_int__* t1131 = this1128;
    int** __n1132;
    int** t1133 = __nstart1129;
    __n1132 = t1133;
    while (1) {
      int** t1135 = __n1132;
      int** t1136 = __nfinish1130;
      _Bool c1137 = ((t1135 < t1136)) ? 1 : 0;
      if (!c1137) break;
      int** t1138 = __n1132;
      int* t1139 = *t1138;
      std___Deque_base_int__std__allocator_int______M_deallocate_node(t1131, t1139);
    for_step1134: ;
      int** t1140 = __n1132;
      int c1141 = 1;
      int** ptr1142 = &(t1140)[c1141];
      __n1132 = ptr1142;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE15_M_create_nodesEPPiS3_
void std___Deque_base_int__std__allocator_int______M_create_nodes(struct std___Deque_base_int__std__allocator_int__* v1143, int** v1144, int** v1145) {
bb1146: ;
  struct std___Deque_base_int__std__allocator_int__* this1147;
  int** __nstart1148;
  int** __nfinish1149;
  int** __cur1150;
  this1147 = v1143;
  __nstart1148 = v1144;
  __nfinish1149 = v1145;
  struct std___Deque_base_int__std__allocator_int__* t1151 = this1147;
        int** t1153 = __nstart1148;
        __cur1150 = t1153;
        while (1) {
          int** t1155 = __cur1150;
          int** t1156 = __nfinish1149;
          _Bool c1157 = ((t1155 < t1156)) ? 1 : 0;
          if (!c1157) break;
          int* r1158 = std___Deque_base_int__std__allocator_int______M_allocate_node(t1151);
          if (__cir_exc_active) {
            goto cir_try_dispatch1152;
          }
          int** t1159 = __cur1150;
          *t1159 = r1158;
        for_step1154: ;
          int** t1160 = __cur1150;
          int c1161 = 1;
          int** ptr1162 = &(t1160)[c1161];
          __cur1150 = ptr1162;
        }
    cir_try_dispatch1152: ;
    if (__cir_exc_active) {
    {
      int ca_tok1163 = 0;
      void* ca_exn1164 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        int** t1165 = __nstart1148;
        int** t1166 = __cur1150;
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1151, t1165, t1166);
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
void std____new_allocator_int____deallocate(struct std____new_allocator_int___* v1167, int** v1168, unsigned long v1169) {
bb1170: ;
  struct std____new_allocator_int___* this1171;
  int** __p1172;
  unsigned long __n1173;
  this1171 = v1167;
  __p1172 = v1168;
  __n1173 = v1169;
  struct std____new_allocator_int___* t1174 = this1171;
    unsigned long c1175 = 8;
    unsigned long c1176 = 16;
    _Bool c1177 = ((c1175 > c1176)) ? 1 : 0;
    if (c1177) {
      int** t1178 = __p1172;
      void* cast1179 = (void*)t1178;
      unsigned long t1180 = __n1173;
      unsigned long c1181 = 8;
      unsigned long b1182 = t1180 * c1181;
      unsigned long c1183 = 8;
      operator_delete_3(cast1179, b1182, c1183);
      return;
    }
  int** t1184 = __p1172;
  void* cast1185 = (void*)t1184;
  unsigned long t1186 = __n1173;
  unsigned long c1187 = 8;
  unsigned long b1188 = t1186 * c1187;
  operator_delete_2(cast1185, b1188);
  return;
}

// function: _ZNSaIPiE10deallocateEPS_m
void std__allocator_int____deallocate(struct std__allocator_int___* v1189, int** v1190, unsigned long v1191) {
bb1192: ;
  struct std__allocator_int___* this1193;
  int** __p1194;
  unsigned long __n1195;
  this1193 = v1189;
  __p1194 = v1190;
  __n1195 = v1191;
  struct std__allocator_int___* t1196 = this1193;
    _Bool r1197 = std____is_constant_evaluated();
    if (r1197) {
      int** t1198 = __p1194;
      void* cast1199 = (void*)t1198;
      operator_delete(cast1199);
      return;
    }
  struct std____new_allocator_int___* base1200 = (struct std____new_allocator_int___*)((char *)t1196 + 0);
  int** t1201 = __p1194;
  unsigned long t1202 = __n1195;
  std____new_allocator_int____deallocate(base1200, t1201, t1202);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIPiEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_int______deallocate(struct std__allocator_int___* v1203, int** v1204, unsigned long v1205) {
bb1206: ;
  struct std__allocator_int___* __a1207;
  int** __p1208;
  unsigned long __n1209;
  __a1207 = v1203;
  __p1208 = v1204;
  __n1209 = v1205;
  struct std__allocator_int___* t1210 = __a1207;
  int** t1211 = __p1208;
  unsigned long t1212 = __n1209;
  std__allocator_int____deallocate(t1210, t1211, t1212);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_deallocate_mapEPPim
void std___Deque_base_int__std__allocator_int______M_deallocate_map(struct std___Deque_base_int__std__allocator_int__* v1213, int** v1214, unsigned long v1215) {
bb1216: ;
  struct std___Deque_base_int__std__allocator_int__* this1217;
  int** __p1218;
  unsigned long __n1219;
  struct std__allocator_int___ __map_alloc1220;
  this1217 = v1213;
  __p1218 = v1214;
  __n1219 = v1215;
  struct std___Deque_base_int__std__allocator_int__* t1221 = this1217;
  struct std__allocator_int___ r1222 = std___Deque_base_int__std__allocator_int______M_get_map_allocator___const(t1221);
  __map_alloc1220 = r1222;
  int** t1223 = __p1218;
  unsigned long t1224 = __n1219;
  std__allocator_traits_std__allocator_int______deallocate(&__map_alloc1220, t1223, t1224);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int___int_____S_buffer_size() {
bb1225: ;
  unsigned long __retval1226;
  unsigned long c1227 = 4;
  unsigned long r1228 = std____deque_buf_size(c1227);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1226 = r1228;
  unsigned long t1229 = __retval1226;
  return t1229;
}

// function: _ZNSt15_Deque_iteratorIiRiPiE11_M_set_nodeEPS1_
void std___Deque_iterator_int__int___int_____M_set_node(struct std___Deque_iterator_int__int____int___* v1230, int** v1231) {
bb1232: ;
  struct std___Deque_iterator_int__int____int___* this1233;
  int** __new_node1234;
  this1233 = v1230;
  __new_node1234 = v1231;
  struct std___Deque_iterator_int__int____int___* t1235 = this1233;
  int** t1236 = __new_node1234;
  t1235->_M_node = t1236;
  int** t1237 = __new_node1234;
  int* t1238 = *t1237;
  t1235->_M_first = t1238;
  int* t1239 = t1235->_M_first;
  unsigned long r1240 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1241 = (long)r1240;
  int* ptr1242 = &(t1239)[cast1241];
  t1235->_M_last = ptr1242;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE17_M_initialize_mapEm
void std___Deque_base_int__std__allocator_int______M_initialize_map(struct std___Deque_base_int__std__allocator_int__* v1243, unsigned long v1244) {
bb1245: ;
  struct std___Deque_base_int__std__allocator_int__* this1246;
  unsigned long __num_elements1247;
  unsigned long __num_nodes1248;
  unsigned long ref_tmp01249;
  unsigned long ref_tmp11250;
  int** __nstart1251;
  int** __nfinish1252;
  this1246 = v1243;
  __num_elements1247 = v1244;
  struct std___Deque_base_int__std__allocator_int__* t1253 = this1246;
  unsigned long t1254 = __num_elements1247;
  unsigned long c1255 = 4;
  unsigned long r1256 = std____deque_buf_size(c1255);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1257 = t1254 / r1256;
  unsigned long c1258 = 1;
  unsigned long b1259 = b1257 + c1258;
  __num_nodes1248 = b1259;
  unsigned long c1260 = 8;
  ref_tmp01249 = c1260;
  unsigned long t1261 = __num_nodes1248;
  unsigned long c1262 = 2;
  unsigned long b1263 = t1261 + c1262;
  ref_tmp11250 = b1263;
  unsigned long* r1264 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp01249, &ref_tmp11250);
  if (__cir_exc_active) {
    return;
  }
  unsigned long t1265 = *r1264;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1266 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  base1266->_M_map_size = t1265;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1267 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  unsigned long t1268 = base1267->_M_map_size;
  int** r1269 = std___Deque_base_int__std__allocator_int______M_allocate_map(t1253, t1268);
  if (__cir_exc_active) {
    return;
  }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1270 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  base1270->_M_map = r1269;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1271 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  int** t1272 = base1271->_M_map;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1273 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  unsigned long t1274 = base1273->_M_map_size;
  unsigned long t1275 = __num_nodes1248;
  unsigned long b1276 = t1274 - t1275;
  unsigned long c1277 = 2;
  unsigned long b1278 = b1276 / c1277;
  int** ptr1279 = &(t1272)[b1278];
  __nstart1251 = ptr1279;
  int** t1280 = __nstart1251;
  unsigned long t1281 = __num_nodes1248;
  int** ptr1282 = &(t1280)[t1281];
  __nfinish1252 = ptr1282;
      int** t1284 = __nstart1251;
      int** t1285 = __nfinish1252;
      std___Deque_base_int__std__allocator_int______M_create_nodes(t1253, t1284, t1285);
      if (__cir_exc_active) {
        goto cir_try_dispatch1283;
      }
    cir_try_dispatch1283: ;
    if (__cir_exc_active) {
    {
      int ca_tok1286 = 0;
      void* ca_exn1287 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1288 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
        int** t1289 = base1288->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1290 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
        unsigned long t1291 = base1290->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1253, t1289, t1291);
        int** c1292 = ((void*)0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1293 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
        base1293->_M_map = c1292;
        unsigned long c1294 = 0;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1295 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
        base1295->_M_map_size = c1294;
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1296 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  int** t1297 = __nstart1251;
  std___Deque_iterator_int__int___int_____M_set_node(&base1296->_M_start, t1297);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1298 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  int** t1299 = __nfinish1252;
  int c1300 = -1;
  int** ptr1301 = &(t1299)[c1300];
  std___Deque_iterator_int__int___int_____M_set_node(&base1298->_M_finish, ptr1301);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1302 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  int* t1303 = base1302->_M_start._M_first;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1304 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  base1304->_M_start._M_cur = t1303;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1305 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  int* t1306 = base1305->_M_finish._M_first;
  unsigned long t1307 = __num_elements1247;
  unsigned long c1308 = 4;
  unsigned long r1309 = std____deque_buf_size(c1308);
  if (__cir_exc_active) {
    return;
  }
  unsigned long b1310 = t1307 % r1309;
  int* ptr1311 = &(t1306)[b1310];
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1312 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1253->_M_impl) + 0);
  base1312->_M_finish._M_cur = ptr1311;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implD2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1313) {
bb1314: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1315;
  this1315 = v1313;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1316 = this1315;
  {
    struct std__allocator_int_* base1317 = (struct std__allocator_int_*)((char *)t1316 + 0);
    std__allocator_int____allocator(base1317);
  }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2Ev
void std___Deque_base_int__std__allocator_int______Deque_base_3(struct std___Deque_base_int__std__allocator_int__* v1318) {
bb1319: ;
  struct std___Deque_base_int__std__allocator_int__* this1320;
  this1320 = v1318;
  struct std___Deque_base_int__std__allocator_int__* t1321 = this1320;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl_2(&t1321->_M_impl);
    unsigned long c1322 = 0;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1321, c1322);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1321->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEED2Ev
void std___Deque_base_int__std__allocator_int_______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1323) {
bb1324: ;
  struct std___Deque_base_int__std__allocator_int__* this1325;
  this1325 = v1323;
  struct std___Deque_base_int__std__allocator_int__* t1326 = this1325;
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1327 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1326->_M_impl) + 0);
      int** t1328 = base1327->_M_map;
      _Bool cast1329 = (_Bool)t1328;
      if (cast1329) {
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1330 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1326->_M_impl) + 0);
        int** t1331 = base1330->_M_start._M_node;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1332 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1326->_M_impl) + 0);
        int** t1333 = base1332->_M_finish._M_node;
        int c1334 = 1;
        int** ptr1335 = &(t1333)[c1334];
        std___Deque_base_int__std__allocator_int______M_destroy_nodes(t1326, t1331, ptr1335);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1336 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1326->_M_impl) + 0);
        int** t1337 = base1336->_M_map;
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1338 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(t1326->_M_impl) + 0);
        unsigned long t1339 = base1338->_M_map_size;
        std___Deque_base_int__std__allocator_int______M_deallocate_map(t1326, t1337, t1339);
      }
  {
    std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1326->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1340) {
bb1341: ;
  struct std____new_allocator_int_* this1342;
  this1342 = v1340;
  struct std____new_allocator_int_* t1343 = this1342;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2Ev
void std___Deque_iterator_int__int___int_____Deque_iterator_3(struct std___Deque_iterator_int__int____int___* v1344) {
bb1345: ;
  struct std___Deque_iterator_int__int____int___* this1346;
  this1346 = v1344;
  struct std___Deque_iterator_int__int____int___* t1347 = this1346;
  int* c1348 = ((void*)0);
  t1347->_M_cur = c1348;
  int* c1349 = ((void*)0);
  t1347->_M_first = c1349;
  int* c1350 = ((void*)0);
  t1347->_M_last = c1350;
  int** c1351 = ((void*)0);
  t1347->_M_node = c1351;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE16_Deque_impl_dataC2Ev
void std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* v1352) {
bb1353: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* this1354;
  this1354 = v1352;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* t1355 = this1354;
  int** c1356 = ((void*)0);
  t1355->_M_map = c1356;
  unsigned long c1357 = 0;
  t1355->_M_map_size = c1357;
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1355->_M_start);
  std___Deque_iterator_int__int___int_____Deque_iterator_3(&t1355->_M_finish);
  return;
}

// function: _ZNSt15__new_allocatorIPiEC2Ev
void std____new_allocator_int______new_allocator(struct std____new_allocator_int___* v1358) {
bb1359: ;
  struct std____new_allocator_int___* this1360;
  this1360 = v1358;
  struct std____new_allocator_int___* t1361 = this1360;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1362) {
bb1363: ;
  int* __location1364;
  __location1364 = v1362;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1365, int* v1366) {
bb1367: ;
  int* __first1368;
  int* __last1369;
  __first1368 = v1365;
  __last1369 = v1366;
      _Bool r1370 = std____is_constant_evaluated();
      if (r1370) {
          while (1) {
            int* t1372 = __first1368;
            int* t1373 = __last1369;
            _Bool c1374 = ((t1372 != t1373)) ? 1 : 0;
            if (!c1374) break;
            int* t1375 = __first1368;
            void_std__destroy_at_int_(t1375);
            if (__cir_exc_active) {
              return;
            }
          for_step1371: ;
            int* t1376 = __first1368;
            int c1377 = 1;
            int* ptr1378 = &(t1376)[c1377];
            __first1368 = ptr1378;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1379, int* v1380, struct std__allocator_int_* v1381) {
bb1382: ;
  int* __first1383;
  int* __last1384;
  struct std__allocator_int_* unnamed1385;
  __first1383 = v1379;
  __last1384 = v1380;
  unnamed1385 = v1381;
  int* t1386 = __first1383;
  int* t1387 = __last1384;
  void_std___Destroy_int__(t1386, t1387);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt5dequeIiSaIiEE14_S_buffer_sizeEv
unsigned long std__deque_int__std__allocator_int______S_buffer_size() {
bb1388: ;
  unsigned long __retval1389;
  unsigned long c1390 = 4;
  unsigned long r1391 = std____deque_buf_size(c1390);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval1389 = r1391;
  unsigned long t1392 = __retval1389;
  return t1392;
}

// function: _ZNSt5dequeIiSaIiEE19_M_destroy_data_auxESt15_Deque_iteratorIiRiPiES5_
void std__deque_int__std__allocator_int______M_destroy_data_aux(struct std__deque_int__std__allocator_int__* v1393, struct std___Deque_iterator_int__int____int___ v1394, struct std___Deque_iterator_int__int____int___ v1395) {
bb1396: ;
  struct std__deque_int__std__allocator_int__* this1397;
  struct std___Deque_iterator_int__int____int___ __first1398;
  struct std___Deque_iterator_int__int____int___ __last1399;
  this1397 = v1393;
  __first1398 = v1394;
  __last1399 = v1395;
  struct std__deque_int__std__allocator_int__* t1400 = this1397;
    int** __node1401;
    int** t1402 = __first1398._M_node;
    int c1403 = 1;
    int** ptr1404 = &(t1402)[c1403];
    __node1401 = ptr1404;
    while (1) {
      int** t1406 = __node1401;
      int** t1407 = __last1399._M_node;
      _Bool c1408 = ((t1406 < t1407)) ? 1 : 0;
      if (!c1408) break;
      int** t1409 = __node1401;
      int* t1410 = *t1409;
      int** t1411 = __node1401;
      int* t1412 = *t1411;
      unsigned long r1413 = std__deque_int__std__allocator_int______S_buffer_size();
      int* ptr1414 = &(t1412)[r1413];
      struct std___Deque_base_int__std__allocator_int__* base1415 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1400 + 0);
      struct std__allocator_int_* r1416 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1415);
      void_std___Destroy_int___int_(t1410, ptr1414, r1416);
      if (__cir_exc_active) {
        return;
      }
    for_step1405: ;
      int** t1417 = __node1401;
      int c1418 = 1;
      int** ptr1419 = &(t1417)[c1418];
      __node1401 = ptr1419;
    }
    int** t1420 = __first1398._M_node;
    int** t1421 = __last1399._M_node;
    _Bool c1422 = ((t1420 != t1421)) ? 1 : 0;
    if (c1422) {
      int* t1423 = __first1398._M_cur;
      int* t1424 = __first1398._M_last;
      struct std___Deque_base_int__std__allocator_int__* base1425 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1400 + 0);
      struct std__allocator_int_* r1426 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1425);
      void_std___Destroy_int___int_(t1423, t1424, r1426);
      if (__cir_exc_active) {
        return;
      }
      int* t1427 = __last1399._M_first;
      int* t1428 = __last1399._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1429 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1400 + 0);
      struct std__allocator_int_* r1430 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1429);
      void_std___Destroy_int___int_(t1427, t1428, r1430);
      if (__cir_exc_active) {
        return;
      }
    } else {
      int* t1431 = __first1398._M_cur;
      int* t1432 = __last1399._M_cur;
      struct std___Deque_base_int__std__allocator_int__* base1433 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1400 + 0);
      struct std__allocator_int_* r1434 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1433);
      void_std___Destroy_int___int_(t1431, t1432, r1434);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ERKS2_
void std___Deque_iterator_int__int___int_____Deque_iterator(struct std___Deque_iterator_int__int____int___* v1435, struct std___Deque_iterator_int__int____int___* v1436) {
bb1437: ;
  struct std___Deque_iterator_int__int____int___* this1438;
  struct std___Deque_iterator_int__int____int___* __x1439;
  this1438 = v1435;
  __x1439 = v1436;
  struct std___Deque_iterator_int__int____int___* t1440 = this1438;
  struct std___Deque_iterator_int__int____int___* t1441 = __x1439;
  int* t1442 = t1441->_M_cur;
  t1440->_M_cur = t1442;
  struct std___Deque_iterator_int__int____int___* t1443 = __x1439;
  int* t1444 = t1443->_M_first;
  t1440->_M_first = t1444;
  struct std___Deque_iterator_int__int____int___* t1445 = __x1439;
  int* t1446 = t1445->_M_last;
  t1440->_M_last = t1446;
  struct std___Deque_iterator_int__int____int___* t1447 = __x1439;
  int** t1448 = t1447->_M_node;
  t1440->_M_node = t1448;
  return;
}

// function: _ZNSt5dequeIiSaIiEE15_M_destroy_dataESt15_Deque_iteratorIiRiPiES5_RKS0_
void std__deque_int__std__allocator_int______M_destroy_data(struct std__deque_int__std__allocator_int__* v1449, struct std___Deque_iterator_int__int____int___ v1450, struct std___Deque_iterator_int__int____int___ v1451, struct std__allocator_int_* v1452) {
bb1453: ;
  struct std__deque_int__std__allocator_int__* this1454;
  struct std___Deque_iterator_int__int____int___ __first1455;
  struct std___Deque_iterator_int__int____int___ __last1456;
  struct std__allocator_int_* unnamed1457;
  this1454 = v1449;
  __first1455 = v1450;
  __last1456 = v1451;
  unnamed1457 = v1452;
  struct std__deque_int__std__allocator_int__* t1458 = this1454;
    _Bool c1459 = 0;
    if (c1459) {
      struct std___Deque_iterator_int__int____int___ agg_tmp01460;
      struct std___Deque_iterator_int__int____int___ agg_tmp11461;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01460, &__first1455);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11461, &__last1456);
      struct std___Deque_iterator_int__int____int___ t1462 = agg_tmp01460;
      struct std___Deque_iterator_int__int____int___ t1463 = agg_tmp11461;
      std__deque_int__std__allocator_int______M_destroy_data_aux(t1458, t1462, t1463);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Deque_base_int__std__allocator_int__* v1464) {
bb1465: ;
  struct std___Deque_base_int__std__allocator_int__* this1466;
  struct std__allocator_int_* __retval1467;
  this1466 = v1464;
  struct std___Deque_base_int__std__allocator_int__* t1468 = this1466;
  struct std__allocator_int_* base1469 = (struct std__allocator_int_*)((char *)&(t1468->_M_impl) + 0);
  __retval1467 = base1469;
  struct std__allocator_int_* t1470 = __retval1467;
  return t1470;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1471, unsigned long* v1472) {
bb1473: ;
  unsigned long* __a1474;
  unsigned long* __b1475;
  unsigned long* __retval1476;
  __a1474 = v1471;
  __b1475 = v1472;
    unsigned long* t1477 = __b1475;
    unsigned long t1478 = *t1477;
    unsigned long* t1479 = __a1474;
    unsigned long t1480 = *t1479;
    _Bool c1481 = ((t1478 < t1480)) ? 1 : 0;
    if (c1481) {
      unsigned long* t1482 = __b1475;
      __retval1476 = t1482;
      unsigned long* t1483 = __retval1476;
      return t1483;
    }
  unsigned long* t1484 = __a1474;
  __retval1476 = t1484;
  unsigned long* t1485 = __retval1476;
  return t1485;
}

// function: _ZNSt5dequeIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__deque_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1486) {
bb1487: ;
  struct std__allocator_int_* __a1488;
  unsigned long __retval1489;
  unsigned long __diffmax1490;
  unsigned long __allocmax1491;
  __a1488 = v1486;
  unsigned long c1492 = 9223372036854775807;
  __diffmax1490 = c1492;
  unsigned long c1493 = 4611686018427387903;
  __allocmax1491 = c1493;
  unsigned long* r1494 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1490, &__allocmax1491);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t1495 = *r1494;
  __retval1489 = t1495;
  unsigned long t1496 = __retval1489;
  return t1496;
}

// function: _ZNSt5dequeIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__deque_int__std__allocator_int______S_check_init_len(unsigned long v1497, struct std__allocator_int_* v1498) {
bb1499: ;
  unsigned long __n1500;
  struct std__allocator_int_* __a1501;
  unsigned long __retval1502;
  __n1500 = v1497;
  __a1501 = v1498;
    unsigned long t1503 = __n1500;
    struct std__allocator_int_* t1504 = __a1501;
    unsigned long r1505 = std__deque_int__std__allocator_int______S_max_size(t1504);
    _Bool c1506 = ((t1503 > r1505)) ? 1 : 0;
    if (c1506) {
      char* cast1507 = (char*)&(_str_8);
      std____throw_length_error(cast1507);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t1508 = __n1500;
  __retval1502 = t1508;
  unsigned long t1509 = __retval1502;
  return t1509;
}

// function: _ZNSt11_Deque_baseIiSaIiEE11_Deque_implC2ERKS0_
void std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(struct std___Deque_base_int__std__allocator_int_____Deque_impl* v1510, struct std__allocator_int_* v1511) {
bb1512: ;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* this1513;
  struct std__allocator_int_* __a1514;
  this1513 = v1510;
  __a1514 = v1511;
  struct std___Deque_base_int__std__allocator_int_____Deque_impl* t1515 = this1513;
  struct std__allocator_int_* base1516 = (struct std__allocator_int_*)((char *)t1515 + 0);
  struct std__allocator_int_* t1517 = __a1514;
  std__allocator_int___allocator(base1516, t1517);
    struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1518 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)t1515 + 0);
    std___Deque_base_int__std__allocator_int______Deque_impl_data___Deque_impl_data(base1518);
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2ERKS0_m
void std___Deque_base_int__std__allocator_int______Deque_base_2(struct std___Deque_base_int__std__allocator_int__* v1519, struct std__allocator_int_* v1520, unsigned long v1521) {
bb1522: ;
  struct std___Deque_base_int__std__allocator_int__* this1523;
  struct std__allocator_int_* __a1524;
  unsigned long __num_elements1525;
  this1523 = v1519;
  __a1524 = v1520;
  __num_elements1525 = v1521;
  struct std___Deque_base_int__std__allocator_int__* t1526 = this1523;
  struct std__allocator_int_* t1527 = __a1524;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1526->_M_impl, t1527);
    unsigned long t1528 = __num_elements1525;
    std___Deque_base_int__std__allocator_int______M_initialize_map(t1526, t1528);
    if (__cir_exc_active) {
      {
        std___Deque_base_int__std__allocator_int______Deque_impl____Deque_impl(&t1526->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1529: ;
  _Bool __retval1530;
    _Bool c1531 = 0;
    __retval1530 = c1531;
    _Bool t1532 = __retval1530;
    return t1532;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1533, int** v1534) {
bb1535: ;
  struct std___UninitDestroyGuard_int____void_* this1536;
  int** __first1537;
  this1536 = v1533;
  __first1537 = v1534;
  struct std___UninitDestroyGuard_int____void_* t1538 = this1536;
  int** t1539 = __first1537;
  int* t1540 = *t1539;
  t1538->_M_first = t1540;
  int** t1541 = __first1537;
  t1538->_M_cur = t1541;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1542, int* v1543) {
bb1544: ;
  int* __location1545;
  int* __args1546;
  int* __retval1547;
  void* __loc1548;
  __location1545 = v1542;
  __args1546 = v1543;
  int* t1549 = __location1545;
  void* cast1550 = (void*)t1549;
  __loc1548 = cast1550;
    void* t1551 = __loc1548;
    int* cast1552 = (int*)t1551;
    int* t1553 = __args1546;
    int t1554 = *t1553;
    *cast1552 = t1554;
    __retval1547 = cast1552;
    int* t1555 = __retval1547;
    return t1555;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1556, int* v1557) {
bb1558: ;
  int* __p1559;
  int* __args1560;
  __p1559 = v1556;
  __args1560 = v1557;
    _Bool r1561 = std____is_constant_evaluated();
    if (r1561) {
      int* t1562 = __p1559;
      int* t1563 = __args1560;
      int* r1564 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1562, t1563);
      return;
    }
  int* t1565 = __p1559;
  void* cast1566 = (void*)t1565;
  int* cast1567 = (int*)cast1566;
  int* t1568 = __args1560;
  int t1569 = *t1568;
  *cast1567 = t1569;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1570) {
bb1571: ;
  struct std___UninitDestroyGuard_int____void_* this1572;
  this1572 = v1570;
  struct std___UninitDestroyGuard_int____void_* t1573 = this1572;
  int** c1574 = ((void*)0);
  t1573->_M_cur = c1574;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1575) {
bb1576: ;
  struct std___UninitDestroyGuard_int____void_* this1577;
  this1577 = v1575;
  struct std___UninitDestroyGuard_int____void_* t1578 = this1577;
    int** t1579 = t1578->_M_cur;
    int** c1580 = ((void*)0);
    _Bool c1581 = ((t1579 != c1580)) ? 1 : 0;
    if (c1581) {
      int* t1582 = t1578->_M_first;
      int** t1583 = t1578->_M_cur;
      int* t1584 = *t1583;
      void_std___Destroy_int__(t1582, t1584);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt16__do_uninit_fillIPiiEvT_S1_RKT0_
void void_std____do_uninit_fill_int___int_(int* v1585, int* v1586, int* v1587) {
bb1588: ;
  int* __first1589;
  int* __last1590;
  int* __x1591;
  struct std___UninitDestroyGuard_int____void_ __guard1592;
  __first1589 = v1585;
  __last1590 = v1586;
  __x1591 = v1587;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1592, &__first1589);
  if (__cir_exc_active) {
    return;
  }
      while (1) {
        int* t1594 = __first1589;
        int* t1595 = __last1590;
        _Bool c1596 = ((t1594 != t1595)) ? 1 : 0;
        if (!c1596) break;
        int* t1597 = __first1589;
        int* t1598 = __x1591;
        void_std___Construct_int__int_const__(t1597, t1598);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1592);
          }
          return;
        }
      for_step1593: ;
        int* t1599 = __first1589;
        int c1600 = 1;
        int* ptr1601 = &(t1599)[c1600];
        __first1589 = ptr1601;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1592);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1592);
      }
      return;
    }
  {
    std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1592);
  }
  return;
}

// function: _ZSt18uninitialized_fillIPiiEvT_S1_RKT0_
void void_std__uninitialized_fill_int___int_(int* v1602, int* v1603, int* v1604) {
bb1605: ;
  int* __first1606;
  int* __last1607;
  int* __x1608;
  __first1606 = v1602;
  __last1607 = v1603;
  __x1608 = v1604;
  int* t1609 = __first1606;
  int* t1610 = __last1607;
  int* t1611 = __x1608;
  void_std____do_uninit_fill_int___int_(t1609, t1610, t1611);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt22__uninitialized_fill_aIPiiiEvT_S1_RKT0_RSaIT1_E
void void_std____uninitialized_fill_a_int___int__int_(int* v1612, int* v1613, int* v1614, struct std__allocator_int_* v1615) {
bb1616: ;
  int* __first1617;
  int* __last1618;
  int* __x1619;
  struct std__allocator_int_* unnamed1620;
  __first1617 = v1612;
  __last1618 = v1613;
  __x1619 = v1614;
  unnamed1620 = v1615;
    _Bool r1621 = std__is_constant_evaluated();
    if (r1621) {
      int* t1622 = __first1617;
      int* t1623 = __last1618;
      int* t1624 = __x1619;
      void_std____do_uninit_fill_int___int_(t1622, t1623, t1624);
      if (__cir_exc_active) {
        return;
      }
      return;
    }
  int* t1625 = __first1617;
  int* t1626 = __last1618;
  int* t1627 = __x1619;
  void_std__uninitialized_fill_int___int_(t1625, t1626, t1627);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRiPiES4_
_Bool std__operator___2(struct std___Deque_iterator_int__int____int___* v1628, struct std___Deque_iterator_int__int____int___* v1629) {
bb1630: ;
  struct std___Deque_iterator_int__int____int___* __x1631;
  struct std___Deque_iterator_int__int____int___* __y1632;
  _Bool __retval1633;
  __x1631 = v1628;
  __y1632 = v1629;
  struct std___Deque_iterator_int__int____int___* t1634 = __x1631;
  int* t1635 = t1634->_M_cur;
  struct std___Deque_iterator_int__int____int___* t1636 = __y1632;
  int* t1637 = t1636->_M_cur;
  _Bool c1638 = ((t1635 == t1637)) ? 1 : 0;
  __retval1633 = c1638;
  _Bool t1639 = __retval1633;
  return t1639;
}

// function: _ZNKSt15_Deque_iteratorIiRiPiEdeEv
int* std___Deque_iterator_int__int___int____operator____const(struct std___Deque_iterator_int__int____int___* v1640) {
bb1641: ;
  struct std___Deque_iterator_int__int____int___* this1642;
  int* __retval1643;
  this1642 = v1640;
  struct std___Deque_iterator_int__int____int___* t1644 = this1642;
  int* t1645 = t1644->_M_cur;
  __retval1643 = t1645;
  int* t1646 = __retval1643;
  return t1646;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEppEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___3(struct std___Deque_iterator_int__int____int___* v1647) {
bb1648: ;
  struct std___Deque_iterator_int__int____int___* this1649;
  struct std___Deque_iterator_int__int____int___* __retval1650;
  this1649 = v1647;
  struct std___Deque_iterator_int__int____int___* t1651 = this1649;
  int* t1652 = t1651->_M_cur;
  int c1653 = 1;
  int* ptr1654 = &(t1652)[c1653];
  t1651->_M_cur = ptr1654;
    int* t1655 = t1651->_M_cur;
    int* t1656 = t1651->_M_last;
    _Bool c1657 = ((t1655 == t1656)) ? 1 : 0;
    if (c1657) {
      int** t1658 = t1651->_M_node;
      int c1659 = 1;
      int** ptr1660 = &(t1658)[c1659];
      std___Deque_iterator_int__int___int_____M_set_node(t1651, ptr1660);
      int* t1661 = t1651->_M_first;
      t1651->_M_cur = t1661;
    }
  __retval1650 = t1651;
  struct std___Deque_iterator_int__int____int___* t1662 = __retval1650;
  return t1662;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEEvT_S4_
void void_std___Destroy_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1663, struct std___Deque_iterator_int__int____int___ v1664) {
bb1665: ;
  struct std___Deque_iterator_int__int____int___ __first1666;
  struct std___Deque_iterator_int__int____int___ __last1667;
  __first1666 = v1663;
  __last1667 = v1664;
      _Bool r1668 = std____is_constant_evaluated();
      if (r1668) {
          while (1) {
            _Bool r1670 = std__operator___2(&__first1666, &__last1667);
            _Bool u1671 = !r1670;
            if (!u1671) break;
            int* r1672 = std___Deque_iterator_int__int___int____operator____const(&__first1666);
            void_std__destroy_at_int_(r1672);
            if (__cir_exc_active) {
              return;
            }
          for_step1669: ;
            struct std___Deque_iterator_int__int____int___* r1673 = std___Deque_iterator_int__int___int____operator___3(&__first1666);
          }
      }
  return;
}

// function: _ZSt8_DestroyISt15_Deque_iteratorIiRiPiEiEvT_S4_RSaIT0_E
void void_std___Destroy_std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int__int____int___ v1674, struct std___Deque_iterator_int__int____int___ v1675, struct std__allocator_int_* v1676) {
bb1677: ;
  struct std___Deque_iterator_int__int____int___ __first1678;
  struct std___Deque_iterator_int__int____int___ __last1679;
  struct std__allocator_int_* unnamed1680;
  struct std___Deque_iterator_int__int____int___ agg_tmp01681;
  struct std___Deque_iterator_int__int____int___ agg_tmp11682;
  __first1678 = v1674;
  __last1679 = v1675;
  unnamed1680 = v1676;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01681, &__first1678);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11682, &__last1679);
  struct std___Deque_iterator_int__int____int___ t1683 = agg_tmp01681;
  struct std___Deque_iterator_int__int____int___ t1684 = agg_tmp11682;
  void_std___Destroy_std___Deque_iterator_int__int___int____(t1683, t1684);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEC2ES1_PS1_
void std___Deque_iterator_int__int___int_____Deque_iterator_2(struct std___Deque_iterator_int__int____int___* v1685, int* v1686, int** v1687) {
bb1688: ;
  struct std___Deque_iterator_int__int____int___* this1689;
  int* __x1690;
  int** __y1691;
  this1689 = v1685;
  __x1690 = v1686;
  __y1691 = v1687;
  struct std___Deque_iterator_int__int____int___* t1692 = this1689;
  int* t1693 = __x1690;
  t1692->_M_cur = t1693;
  int** t1694 = __y1691;
  int* t1695 = *t1694;
  t1692->_M_first = t1695;
  int** t1696 = __y1691;
  int* t1697 = *t1696;
  unsigned long r1698 = std___Deque_iterator_int__int___int_____S_buffer_size();
  int* ptr1699 = &(t1697)[r1698];
  t1692->_M_last = ptr1699;
  int** t1700 = __y1691;
  t1692->_M_node = t1700;
  return;
}

// function: _ZNSt5dequeIiSaIiEE18_M_fill_initializeERKi
void std__deque_int__std__allocator_int______M_fill_initialize(struct std__deque_int__std__allocator_int__* v1701, int* v1702) {
bb1703: ;
  struct std__deque_int__std__allocator_int__* this1704;
  int* __value1705;
  int** __cur1706;
  this1704 = v1701;
  __value1705 = v1702;
  struct std__deque_int__std__allocator_int__* t1707 = this1704;
    struct std___Deque_iterator_int__int____int___ agg_tmp01708;
    struct std___Deque_iterator_int__int____int___ agg_tmp11709;
        struct std___Deque_base_int__std__allocator_int__* base1711 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1707 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1712 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1711->_M_impl) + 0);
        int** t1713 = base1712->_M_start._M_node;
        __cur1706 = t1713;
        while (1) {
          int** t1715 = __cur1706;
          struct std___Deque_base_int__std__allocator_int__* base1716 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1707 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1717 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1716->_M_impl) + 0);
          int** t1718 = base1717->_M_finish._M_node;
          _Bool c1719 = ((t1715 < t1718)) ? 1 : 0;
          if (!c1719) break;
          int** t1720 = __cur1706;
          int* t1721 = *t1720;
          int** t1722 = __cur1706;
          int* t1723 = *t1722;
          unsigned long r1724 = std__deque_int__std__allocator_int______S_buffer_size();
          int* ptr1725 = &(t1723)[r1724];
          int* t1726 = __value1705;
          struct std___Deque_base_int__std__allocator_int__* base1727 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1707 + 0);
          struct std__allocator_int_* r1728 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1727);
          void_std____uninitialized_fill_a_int___int__int_(t1721, ptr1725, t1726, r1728);
          if (__cir_exc_active) {
            goto cir_try_dispatch1710;
          }
        for_step1714: ;
          int** t1729 = __cur1706;
          int c1730 = 1;
          int** ptr1731 = &(t1729)[c1730];
          __cur1706 = ptr1731;
        }
      struct std___Deque_base_int__std__allocator_int__* base1732 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1707 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1733 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1732->_M_impl) + 0);
      int* t1734 = base1733->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base1735 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1707 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1736 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1735->_M_impl) + 0);
      int* t1737 = base1736->_M_finish._M_cur;
      int* t1738 = __value1705;
      struct std___Deque_base_int__std__allocator_int__* base1739 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1707 + 0);
      struct std__allocator_int_* r1740 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1739);
      void_std____uninitialized_fill_a_int___int__int_(t1734, t1737, t1738, r1740);
      if (__cir_exc_active) {
        goto cir_try_dispatch1710;
      }
    cir_try_dispatch1710: ;
    if (__cir_exc_active) {
    {
      int ca_tok1741 = 0;
      void* ca_exn1742 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base1743 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1707 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base1744 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base1743->_M_impl) + 0);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01708, &base1744->_M_start);
        int** t1745 = __cur1706;
        int* t1746 = *t1745;
        int** t1747 = __cur1706;
        std___Deque_iterator_int__int___int_____Deque_iterator_2(&agg_tmp11709, t1746, t1747);
        struct std___Deque_base_int__std__allocator_int__* base1748 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t1707 + 0);
        struct std__allocator_int_* r1749 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base1748);
        struct std___Deque_iterator_int__int____int___ t1750 = agg_tmp01708;
        struct std___Deque_iterator_int__int____int___ t1751 = agg_tmp11709;
        void_std___Destroy_std___Deque_iterator_int__int___int____int_(t1750, t1751, r1749);
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

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1752, struct std____new_allocator_int_* v1753) {
bb1754: ;
  struct std____new_allocator_int_* this1755;
  struct std____new_allocator_int_* unnamed1756;
  this1755 = v1752;
  unnamed1756 = v1753;
  struct std____new_allocator_int_* t1757 = this1755;
  return;
}

// function: _ZNSt11_Deque_baseIiSaIiEEC2ERKS0_
void std___Deque_base_int__std__allocator_int______Deque_base(struct std___Deque_base_int__std__allocator_int__* v1758, struct std__allocator_int_* v1759) {
bb1760: ;
  struct std___Deque_base_int__std__allocator_int__* this1761;
  struct std__allocator_int_* __a1762;
  this1761 = v1758;
  __a1762 = v1759;
  struct std___Deque_base_int__std__allocator_int__* t1763 = this1761;
  struct std__allocator_int_* t1764 = __a1762;
  std___Deque_base_int__std__allocator_int______Deque_impl___Deque_impl(&t1763->_M_impl, t1764);
  return;
}

// function: _ZStmiRKSt15_Deque_iteratorIiRiPiES4_
long std__operator_(struct std___Deque_iterator_int__int____int___* v1765, struct std___Deque_iterator_int__int____int___* v1766) {
bb1767: ;
  struct std___Deque_iterator_int__int____int___* __x1768;
  struct std___Deque_iterator_int__int____int___* __y1769;
  long __retval1770;
  __x1768 = v1765;
  __y1769 = v1766;
  unsigned long r1771 = std___Deque_iterator_int__int___int_____S_buffer_size();
  long cast1772 = (long)r1771;
  struct std___Deque_iterator_int__int____int___* t1773 = __x1768;
  int** t1774 = t1773->_M_node;
  struct std___Deque_iterator_int__int____int___* t1775 = __y1769;
  int** t1776 = t1775->_M_node;
  long diff1777 = t1774 - t1776;
  struct std___Deque_iterator_int__int____int___* t1778 = __x1768;
  int** t1779 = t1778->_M_node;
  _Bool cast1780 = (_Bool)t1779;
  long cast1781 = (long)cast1780;
  long b1782 = diff1777 - cast1781;
  long b1783 = cast1772 * b1782;
  struct std___Deque_iterator_int__int____int___* t1784 = __x1768;
  int* t1785 = t1784->_M_cur;
  struct std___Deque_iterator_int__int____int___* t1786 = __x1768;
  int* t1787 = t1786->_M_first;
  long diff1788 = t1785 - t1787;
  long b1789 = b1783 + diff1788;
  struct std___Deque_iterator_int__int____int___* t1790 = __y1769;
  int* t1791 = t1790->_M_last;
  struct std___Deque_iterator_int__int____int___* t1792 = __y1769;
  int* t1793 = t1792->_M_cur;
  long diff1794 = t1791 - t1793;
  long b1795 = b1789 + diff1794;
  __retval1770 = b1795;
  long t1796 = __retval1770;
  return t1796;
}

// function: _ZSt10__distanceISt15_Deque_iteratorIiRiPiEENSt15iterator_traitsIT_E15difference_typeES5_S5_St26random_access_iterator_tag
long std__iterator_traits_std___Deque_iterator_int__int___int______difference_type_std____distance_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1797, struct std___Deque_iterator_int__int____int___ v1798, struct std__random_access_iterator_tag v1799) {
bb1800: ;
  struct std___Deque_iterator_int__int____int___ __first1801;
  struct std___Deque_iterator_int__int____int___ __last1802;
  struct std__random_access_iterator_tag unnamed1803;
  long __retval1804;
  __first1801 = v1797;
  __last1802 = v1798;
  unnamed1803 = v1799;
  long r1805 = std__operator_(&__last1802, &__first1801);
  __retval1804 = r1805;
  long t1806 = __retval1804;
  return t1806;
}

// function: _ZSt8distanceISt15_Deque_iteratorIiRiPiEENSt15iterator_traitsIT_E15difference_typeES5_S5_
long std__iterator_traits_std___Deque_iterator_int__int___int______difference_type_std__distance_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___ v1807, struct std___Deque_iterator_int__int____int___ v1808) {
bb1809: ;
  struct std___Deque_iterator_int__int____int___ __first1810;
  struct std___Deque_iterator_int__int____int___ __last1811;
  long __retval1812;
  struct std___Deque_iterator_int__int____int___ agg_tmp01813;
  struct std___Deque_iterator_int__int____int___ agg_tmp11814;
  struct std__random_access_iterator_tag agg_tmp21815;
  __first1810 = v1807;
  __last1811 = v1808;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01813, &__first1810);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11814, &__last1811);
  struct std__random_access_iterator_tag r1816 = std__iterator_traits_std___Deque_iterator_int__int___int______iterator_category_std____iterator_category_std___Deque_iterator_int__int___int____(&__first1810);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp21815 = r1816;
  struct std___Deque_iterator_int__int____int___ t1817 = agg_tmp01813;
  struct std___Deque_iterator_int__int____int___ t1818 = agg_tmp11814;
  struct std__random_access_iterator_tag t1819 = agg_tmp21815;
  long r1820 = std__iterator_traits_std___Deque_iterator_int__int___int______difference_type_std____distance_std___Deque_iterator_int__int___int____(t1817, t1818, t1819);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1812 = r1820;
  long t1821 = __retval1812;
  return t1821;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEmmEv
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator__(struct std___Deque_iterator_int__int____int___* v1822) {
bb1823: ;
  struct std___Deque_iterator_int__int____int___* this1824;
  struct std___Deque_iterator_int__int____int___* __retval1825;
  this1824 = v1822;
  struct std___Deque_iterator_int__int____int___* t1826 = this1824;
    int* t1827 = t1826->_M_cur;
    int* t1828 = t1826->_M_first;
    _Bool c1829 = ((t1827 == t1828)) ? 1 : 0;
    if (c1829) {
      int** t1830 = t1826->_M_node;
      int c1831 = -1;
      int** ptr1832 = &(t1830)[c1831];
      std___Deque_iterator_int__int___int_____M_set_node(t1826, ptr1832);
      int* t1833 = t1826->_M_last;
      t1826->_M_cur = t1833;
    }
  int* t1834 = t1826->_M_cur;
  int c1835 = -1;
  int* ptr1836 = &(t1834)[c1835];
  t1826->_M_cur = ptr1836;
  __retval1825 = t1826;
  struct std___Deque_iterator_int__int____int___* t1837 = __retval1825;
  return t1837;
}

// function: _ZNSt15_Deque_iteratorIiRiPiEpLEl
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator___2(struct std___Deque_iterator_int__int____int___* v1838, long v1839) {
bb1840: ;
  struct std___Deque_iterator_int__int____int___* this1841;
  long __n1842;
  struct std___Deque_iterator_int__int____int___* __retval1843;
  long __offset1844;
  this1841 = v1838;
  __n1842 = v1839;
  struct std___Deque_iterator_int__int____int___* t1845 = this1841;
  long t1846 = __n1842;
  int* t1847 = t1845->_M_cur;
  int* t1848 = t1845->_M_first;
  long diff1849 = t1847 - t1848;
  long b1850 = t1846 + diff1849;
  __offset1844 = b1850;
    long t1851 = __offset1844;
    long c1852 = 0;
    _Bool c1853 = ((t1851 >= c1852)) ? 1 : 0;
    _Bool ternary1854;
    if (c1853) {
      long t1855 = __offset1844;
      unsigned long r1856 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast1857 = (long)r1856;
      _Bool c1858 = ((t1855 < cast1857)) ? 1 : 0;
      ternary1854 = (_Bool)c1858;
    } else {
      _Bool c1859 = 0;
      ternary1854 = (_Bool)c1859;
    }
    if (ternary1854) {
      long t1860 = __n1842;
      int* t1861 = t1845->_M_cur;
      int* ptr1862 = &(t1861)[t1860];
      t1845->_M_cur = ptr1862;
    } else {
      long __node_offset1863;
      long t1864 = __offset1844;
      long c1865 = 0;
      _Bool c1866 = ((t1864 > c1865)) ? 1 : 0;
      long ternary1867;
      if (c1866) {
        long t1868 = __offset1844;
        unsigned long r1869 = std___Deque_iterator_int__int___int_____S_buffer_size();
        long cast1870 = (long)r1869;
        long b1871 = t1868 / cast1870;
        ternary1867 = (long)b1871;
      } else {
        long t1872 = __offset1844;
        long u1873 = -t1872;
        long c1874 = 1;
        long b1875 = u1873 - c1874;
        unsigned long cast1876 = (unsigned long)b1875;
        unsigned long r1877 = std___Deque_iterator_int__int___int_____S_buffer_size();
        unsigned long b1878 = cast1876 / r1877;
        long cast1879 = (long)b1878;
        long u1880 = -cast1879;
        long c1881 = 1;
        long b1882 = u1880 - c1881;
        ternary1867 = (long)b1882;
      }
      __node_offset1863 = ternary1867;
      int** t1883 = t1845->_M_node;
      long t1884 = __node_offset1863;
      int** ptr1885 = &(t1883)[t1884];
      std___Deque_iterator_int__int___int_____M_set_node(t1845, ptr1885);
      int* t1886 = t1845->_M_first;
      long t1887 = __offset1844;
      long t1888 = __node_offset1863;
      unsigned long r1889 = std___Deque_iterator_int__int___int_____S_buffer_size();
      long cast1890 = (long)r1889;
      long b1891 = t1888 * cast1890;
      long b1892 = t1887 - b1891;
      int* ptr1893 = &(t1886)[b1892];
      t1845->_M_cur = ptr1893;
    }
  __retval1843 = t1845;
  struct std___Deque_iterator_int__int____int___* t1894 = __retval1843;
  return t1894;
}

// function: _ZSt9__advanceISt15_Deque_iteratorIiRiPiElEvRT_T0_St26random_access_iterator_tag
void void_std____advance_std___Deque_iterator_int__int___int____long_(struct std___Deque_iterator_int__int____int___* v1895, long v1896, struct std__random_access_iterator_tag v1897) {
bb1898: ;
  struct std___Deque_iterator_int__int____int___* __i1899;
  long __n1900;
  struct std__random_access_iterator_tag unnamed1901;
  __i1899 = v1895;
  __n1900 = v1896;
  unnamed1901 = v1897;
    long t1902 = __n1900;
    _Bool isconst1903 = 0;
    _Bool ternary1904;
    if (isconst1903) {
      long t1905 = __n1900;
      long c1906 = 1;
      _Bool c1907 = ((t1905 == c1906)) ? 1 : 0;
      ternary1904 = (_Bool)c1907;
    } else {
      _Bool c1908 = 0;
      ternary1904 = (_Bool)c1908;
    }
    if (ternary1904) {
      struct std___Deque_iterator_int__int____int___* t1909 = __i1899;
      struct std___Deque_iterator_int__int____int___* r1910 = std___Deque_iterator_int__int___int____operator___3(t1909);
    } else {
        long t1911 = __n1900;
        _Bool isconst1912 = 0;
        _Bool ternary1913;
        if (isconst1912) {
          long t1914 = __n1900;
          long c1915 = -1;
          _Bool c1916 = ((t1914 == c1915)) ? 1 : 0;
          ternary1913 = (_Bool)c1916;
        } else {
          _Bool c1917 = 0;
          ternary1913 = (_Bool)c1917;
        }
        if (ternary1913) {
          struct std___Deque_iterator_int__int____int___* t1918 = __i1899;
          struct std___Deque_iterator_int__int____int___* r1919 = std___Deque_iterator_int__int___int____operator__(t1918);
        } else {
          long t1920 = __n1900;
          struct std___Deque_iterator_int__int____int___* t1921 = __i1899;
          struct std___Deque_iterator_int__int____int___* r1922 = std___Deque_iterator_int__int___int____operator___2(t1921, t1920);
        }
    }
  return;
}

// function: _ZSt7advanceISt15_Deque_iteratorIiRiPiEmEvRT_T0_
void void_std__advance_std___Deque_iterator_int__int___int____unsigned_long_(struct std___Deque_iterator_int__int____int___* v1923, unsigned long v1924) {
bb1925: ;
  struct std___Deque_iterator_int__int____int___* __i1926;
  unsigned long __n1927;
  long __d1928;
  struct std__random_access_iterator_tag agg_tmp01929;
  __i1926 = v1923;
  __n1927 = v1924;
  unsigned long t1930 = __n1927;
  long cast1931 = (long)t1930;
  __d1928 = cast1931;
  struct std___Deque_iterator_int__int____int___* t1932 = __i1926;
  long t1933 = __d1928;
  struct std___Deque_iterator_int__int____int___* t1934 = __i1926;
  struct std__random_access_iterator_tag r1935 = std__iterator_traits_std___Deque_iterator_int__int___int______iterator_category_std____iterator_category_std___Deque_iterator_int__int___int____(t1934);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp01929 = r1935;
  struct std__random_access_iterator_tag t1936 = agg_tmp01929;
  void_std____advance_std___Deque_iterator_int__int___int____long_(t1932, t1933, t1936);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1937, int* v1938) {
bb1939: ;
  int* __location1940;
  int* __args1941;
  int* __retval1942;
  void* __loc1943;
  __location1940 = v1937;
  __args1941 = v1938;
  int* t1944 = __location1940;
  void* cast1945 = (void*)t1944;
  __loc1943 = cast1945;
    void* t1946 = __loc1943;
    int* cast1947 = (int*)t1946;
    int* t1948 = __args1941;
    int t1949 = *t1948;
    *cast1947 = t1949;
    __retval1942 = cast1947;
    int* t1950 = __retval1942;
    return t1950;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1951, int* v1952) {
bb1953: ;
  int* __p1954;
  int* __args1955;
  __p1954 = v1951;
  __args1955 = v1952;
    _Bool r1956 = std____is_constant_evaluated();
    if (r1956) {
      int* t1957 = __p1954;
      int* t1958 = __args1955;
      int* r1959 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1957, t1958);
      return;
    }
  int* t1960 = __p1954;
  void* cast1961 = (void*)t1960;
  int* cast1962 = (int*)cast1961;
  int* t1963 = __args1955;
  int t1964 = *t1963;
  *cast1962 = t1964;
  return;
}

// function: _ZSt16__do_uninit_copyISt15_Deque_iteratorIiRiPiES3_S2_ET1_T_T0_S4_
int* int__std____do_uninit_copy_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__(struct std___Deque_iterator_int__int____int___ v1965, struct std___Deque_iterator_int__int____int___ v1966, int* v1967) {
bb1968: ;
  struct std___Deque_iterator_int__int____int___ __first1969;
  struct std___Deque_iterator_int__int____int___ __last1970;
  int* __result1971;
  int* __retval1972;
  struct std___UninitDestroyGuard_int____void_ __guard1973;
  __first1969 = v1965;
  __last1970 = v1966;
  __result1971 = v1967;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1973, &__result1971);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1975 = std__operator___2(&__first1969, &__last1970);
        _Bool u1976 = !r1975;
        if (!u1976) break;
        int* t1977 = __result1971;
        int* r1978 = std___Deque_iterator_int__int___int____operator____const(&__first1969);
        void_std___Construct_int__int__(t1977, r1978);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1973);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1974: ;
        struct std___Deque_iterator_int__int____int___* r1979 = std___Deque_iterator_int__int___int____operator___3(&__first1969);
        int* t1980 = __result1971;
        int c1981 = 1;
        int* ptr1982 = &(t1980)[c1981];
        __result1971 = ptr1982;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1973);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1973);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1983 = __result1971;
    __retval1972 = t1983;
    int* t1984 = __retval1972;
    int* ret_val1985 = t1984;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1973);
    }
    return ret_val1985;
  abort();
}

// function: _ZSt18uninitialized_copyISt15_Deque_iteratorIiRiPiES2_ET0_T_S5_S4_
int* int__std__uninitialized_copy_std___Deque_iterator_int__int___int____int__(struct std___Deque_iterator_int__int____int___ v1986, struct std___Deque_iterator_int__int____int___ v1987, int* v1988) {
bb1989: ;
  struct std___Deque_iterator_int__int____int___ __first1990;
  struct std___Deque_iterator_int__int____int___ __last1991;
  int* __result1992;
  int* __retval1993;
  __first1990 = v1986;
  __last1991 = v1987;
  __result1992 = v1988;
        struct std___Deque_iterator_int__int____int___ agg_tmp01994;
        struct std___Deque_iterator_int__int____int___ agg_tmp11995;
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp01994, &__first1990);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp11995, &__last1991);
        int* t1996 = __result1992;
        struct std___Deque_iterator_int__int____int___ t1997 = agg_tmp01994;
        struct std___Deque_iterator_int__int____int___ t1998 = agg_tmp11995;
        int* r1999 = int__std____do_uninit_copy_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__(t1997, t1998, t1996);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        __retval1993 = r1999;
        int* t2000 = __retval1993;
        return t2000;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt15_Deque_iteratorIiRiPiES3_S2_iET1_T_T0_S4_RSaIT2_E
int* int__std____uninitialized_copy_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int___int_(struct std___Deque_iterator_int__int____int___ v2001, struct std___Deque_iterator_int__int____int___ v2002, int* v2003, struct std__allocator_int_* v2004) {
bb2005: ;
  struct std___Deque_iterator_int__int____int___ __first2006;
  struct std___Deque_iterator_int__int____int___ __last2007;
  int* __result2008;
  struct std__allocator_int_* unnamed2009;
  int* __retval2010;
  __first2006 = v2001;
  __last2007 = v2002;
  __result2008 = v2003;
  unnamed2009 = v2004;
    _Bool r2011 = std__is_constant_evaluated();
    if (r2011) {
      struct std___Deque_iterator_int__int____int___ agg_tmp02012;
      struct std___Deque_iterator_int__int____int___ agg_tmp12013;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02012, &__first2006);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12013, &__last2007);
      int* t2014 = __result2008;
      struct std___Deque_iterator_int__int____int___ t2015 = agg_tmp02012;
      struct std___Deque_iterator_int__int____int___ t2016 = agg_tmp12013;
      int* r2017 = int__std____do_uninit_copy_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int__(t2015, t2016, t2014);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval2010 = r2017;
      int* t2018 = __retval2010;
      return t2018;
    }
    struct std___Deque_iterator_int__int____int___ agg_tmp22019;
    struct std___Deque_iterator_int__int____int___ agg_tmp32020;
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22019, &__first2006);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32020, &__last2007);
    int* t2021 = __result2008;
    struct std___Deque_iterator_int__int____int___ t2022 = agg_tmp22019;
    struct std___Deque_iterator_int__int____int___ t2023 = agg_tmp32020;
    int* r2024 = int__std__uninitialized_copy_std___Deque_iterator_int__int___int____int__(t2022, t2023, t2021);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval2010 = r2024;
    int* t2025 = __retval2010;
    return t2025;
  abort();
}

// function: _ZNSt15_Deque_iteratorIiRiPiEaSERKS2_
struct std___Deque_iterator_int__int____int___* std___Deque_iterator_int__int___int____operator_(struct std___Deque_iterator_int__int____int___* v2026, struct std___Deque_iterator_int__int____int___* v2027) {
bb2028: ;
  struct std___Deque_iterator_int__int____int___* this2029;
  struct std___Deque_iterator_int__int____int___* unnamed2030;
  struct std___Deque_iterator_int__int____int___* __retval2031;
  this2029 = v2026;
  unnamed2030 = v2027;
  struct std___Deque_iterator_int__int____int___* t2032 = this2029;
  struct std___Deque_iterator_int__int____int___* t2033 = unnamed2030;
  int* t2034 = t2033->_M_cur;
  t2032->_M_cur = t2034;
  struct std___Deque_iterator_int__int____int___* t2035 = unnamed2030;
  int* t2036 = t2035->_M_first;
  t2032->_M_first = t2036;
  struct std___Deque_iterator_int__int____int___* t2037 = unnamed2030;
  int* t2038 = t2037->_M_last;
  t2032->_M_last = t2038;
  struct std___Deque_iterator_int__int____int___* t2039 = unnamed2030;
  int** t2040 = t2039->_M_node;
  t2032->_M_node = t2040;
  __retval2031 = t2032;
  struct std___Deque_iterator_int__int____int___* t2041 = __retval2031;
  return t2041;
}

// function: _ZNSt5dequeIiSaIiEE19_M_range_initializeISt15_Deque_iteratorIiRiPiEEEvT_S7_St20forward_iterator_tag
void void_std__deque_int__std__allocator_int______M_range_initialize_std___Deque_iterator_int__int___int____(struct std__deque_int__std__allocator_int__* v2042, struct std___Deque_iterator_int__int____int___ v2043, struct std___Deque_iterator_int__int____int___ v2044, struct std__forward_iterator_tag v2045) {
bb2046: ;
  struct std__deque_int__std__allocator_int__* this2047;
  struct std___Deque_iterator_int__int____int___ __first2048;
  struct std___Deque_iterator_int__int____int___ __last2049;
  struct std__forward_iterator_tag unnamed2050;
  unsigned long __n2051;
  struct std___Deque_iterator_int__int____int___ agg_tmp02052;
  struct std___Deque_iterator_int__int____int___ agg_tmp12053;
  int** __cur_node2054;
  this2047 = v2042;
  __first2048 = v2043;
  __last2049 = v2044;
  unnamed2050 = v2045;
  struct std__deque_int__std__allocator_int__* t2055 = this2047;
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02052, &__first2048);
  std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12053, &__last2049);
  struct std___Deque_iterator_int__int____int___ t2056 = agg_tmp02052;
  struct std___Deque_iterator_int__int____int___ t2057 = agg_tmp12053;
  long r2058 = std__iterator_traits_std___Deque_iterator_int__int___int______difference_type_std__distance_std___Deque_iterator_int__int___int____(t2056, t2057);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast2059 = (unsigned long)r2058;
  __n2051 = cast2059;
  struct std___Deque_base_int__std__allocator_int__* base2060 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2055 + 0);
  unsigned long t2061 = __n2051;
  struct std___Deque_base_int__std__allocator_int__* base2062 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2055 + 0);
  struct std__allocator_int_* r2063 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2062);
  unsigned long r2064 = std__deque_int__std__allocator_int______S_check_init_len(t2061, r2063);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_base_int__std__allocator_int______M_initialize_map(base2060, r2064);
  if (__cir_exc_active) {
    return;
  }
    struct std___Deque_iterator_int__int____int___ agg_tmp42065;
    struct std___Deque_iterator_int__int____int___ agg_tmp52066;
    struct std___Deque_iterator_int__int____int___ agg_tmp62067;
    struct std___Deque_iterator_int__int____int___ agg_tmp72068;
        struct std___Deque_base_int__std__allocator_int__* base2070 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2055 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2071 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2070->_M_impl) + 0);
        int** t2072 = base2071->_M_start._M_node;
        __cur_node2054 = t2072;
        while (1) {
          int** t2074 = __cur_node2054;
          struct std___Deque_base_int__std__allocator_int__* base2075 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2055 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2076 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2075->_M_impl) + 0);
          int** t2077 = base2076->_M_finish._M_node;
          _Bool c2078 = ((t2074 < t2077)) ? 1 : 0;
          if (!c2078) break;
            struct std___Deque_iterator_int__int____int___ __mid2079;
            struct std___Deque_iterator_int__int____int___ agg_tmp22080;
            struct std___Deque_iterator_int__int____int___ agg_tmp32081;
              unsigned long t2082 = __n2051;
              unsigned long r2083 = std__deque_int__std__allocator_int______S_buffer_size();
              _Bool c2084 = ((t2082 < r2083)) ? 1 : 0;
              if (c2084) {
                __builtin_unreachable();
              }
            std___Deque_iterator_int__int___int_____Deque_iterator(&__mid2079, &__first2048);
            unsigned long r2085 = std__deque_int__std__allocator_int______S_buffer_size();
            void_std__advance_std___Deque_iterator_int__int___int____unsigned_long_(&__mid2079, r2085);
            if (__cir_exc_active) {
              goto cir_try_dispatch2069;
            }
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22080, &__first2048);
            std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp32081, &__mid2079);
            int** t2086 = __cur_node2054;
            int* t2087 = *t2086;
            struct std___Deque_base_int__std__allocator_int__* base2088 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2055 + 0);
            struct std__allocator_int_* r2089 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2088);
            struct std___Deque_iterator_int__int____int___ t2090 = agg_tmp22080;
            struct std___Deque_iterator_int__int____int___ t2091 = agg_tmp32081;
            int* r2092 = int__std____uninitialized_copy_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int___int_(t2090, t2091, t2087, r2089);
            if (__cir_exc_active) {
              goto cir_try_dispatch2069;
            }
            struct std___Deque_iterator_int__int____int___* r2093 = std___Deque_iterator_int__int___int____operator_(&__first2048, &__mid2079);
        for_step2073: ;
          int** t2094 = __cur_node2054;
          int c2095 = 1;
          int** ptr2096 = &(t2094)[c2095];
          __cur_node2054 = ptr2096;
        }
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp42065, &__first2048);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp52066, &__last2049);
      struct std___Deque_base_int__std__allocator_int__* base2097 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2055 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2098 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2097->_M_impl) + 0);
      int* t2099 = base2098->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base2100 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2055 + 0);
      struct std__allocator_int_* r2101 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2100);
      struct std___Deque_iterator_int__int____int___ t2102 = agg_tmp42065;
      struct std___Deque_iterator_int__int____int___ t2103 = agg_tmp52066;
      int* r2104 = int__std____uninitialized_copy_a_std___Deque_iterator_int__int___int____std___Deque_iterator_int__int___int____int___int_(t2102, t2103, t2099, r2101);
      if (__cir_exc_active) {
        goto cir_try_dispatch2069;
      }
    cir_try_dispatch2069: ;
    if (__cir_exc_active) {
    {
      int ca_tok2105 = 0;
      void* ca_exn2106 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base2107 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2055 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2108 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2107->_M_impl) + 0);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp62067, &base2108->_M_start);
        int** t2109 = __cur_node2054;
        int* t2110 = *t2109;
        int** t2111 = __cur_node2054;
        std___Deque_iterator_int__int___int_____Deque_iterator_2(&agg_tmp72068, t2110, t2111);
        struct std___Deque_base_int__std__allocator_int__* base2112 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2055 + 0);
        struct std__allocator_int_* r2113 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2112);
        struct std___Deque_iterator_int__int____int___ t2114 = agg_tmp62067;
        struct std___Deque_iterator_int__int____int___ t2115 = agg_tmp72068;
        void_std___Destroy_std___Deque_iterator_int__int___int____int_(t2114, t2115, r2113);
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

// function: _ZSt19__iterator_categoryISt15_Deque_iteratorIiRiPiEENSt15iterator_traitsIT_E17iterator_categoryERKS5_
struct std__random_access_iterator_tag std__iterator_traits_std___Deque_iterator_int__int___int______iterator_category_std____iterator_category_std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int__int____int___* v2116) {
bb2117: ;
  struct std___Deque_iterator_int__int____int___* unnamed2118;
  struct std__random_access_iterator_tag __retval2119;
  unnamed2118 = v2116;
  struct std__random_access_iterator_tag t2120 = __retval2119;
  return t2120;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v2121, struct std__allocator_int_* v2122) {
bb2123: ;
  struct std__allocator_int_* this2124;
  struct std__allocator_int_* __a2125;
  this2124 = v2121;
  __a2125 = v2122;
  struct std__allocator_int_* t2126 = this2124;
  struct std____new_allocator_int_* base2127 = (struct std____new_allocator_int_*)((char *)t2126 + 0);
  struct std__allocator_int_* t2128 = __a2125;
  struct std____new_allocator_int_* base2129 = (struct std____new_allocator_int_*)((char *)t2128 + 0);
  std____new_allocator_int_____new_allocator(base2127, base2129);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* v2130) {
bb2131: ;
  struct std__allocator_int_* __rhs2132;
  struct std__allocator_int_ __retval2133;
  __rhs2132 = v2130;
  struct std__allocator_int_* t2134 = __rhs2132;
  std__allocator_int___allocator(&__retval2133, t2134);
  struct std__allocator_int_ t2135 = __retval2133;
  return t2135;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* v2136) {
bb2137: ;
  struct std__allocator_int_* __a2138;
  struct std__allocator_int_ __retval2139;
  __a2138 = v2136;
  struct std__allocator_int_* t2140 = __a2138;
  struct std__allocator_int_ r2141 = std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(t2140);
  if (__cir_exc_active) {
    struct std__allocator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2139 = r2141;
  struct std__allocator_int_ t2142 = __retval2139;
  return t2142;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvEC2ERS3_
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v2143, struct std___Deque_iterator_int__int____int___* v2144) {
bb2145: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this2146;
  struct std___Deque_iterator_int__int____int___* __first2147;
  this2146 = v2143;
  __first2147 = v2144;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t2148 = this2146;
  struct std___Deque_iterator_int__int____int___* t2149 = __first2147;
  std___Deque_iterator_int__int___int_____Deque_iterator(&t2148->_M_first, t2149);
  struct std___Deque_iterator_int__int____int___* t2150 = __first2147;
  t2148->_M_cur = t2150;
  return;
}

// function: _ZSteqRKSt15_Deque_iteratorIiRKiPS0_ES5_
_Bool std__operator__(struct std___Deque_iterator_int_int___int___* v2151, struct std___Deque_iterator_int_int___int___* v2152) {
bb2153: ;
  struct std___Deque_iterator_int_int___int___* __x2154;
  struct std___Deque_iterator_int_int___int___* __y2155;
  _Bool __retval2156;
  __x2154 = v2151;
  __y2155 = v2152;
  struct std___Deque_iterator_int_int___int___* t2157 = __x2154;
  int* t2158 = t2157->_M_cur;
  struct std___Deque_iterator_int_int___int___* t2159 = __y2155;
  int* t2160 = t2159->_M_cur;
  _Bool c2161 = ((t2158 == t2160)) ? 1 : 0;
  __retval2156 = c2161;
  _Bool t2162 = __retval2156;
  return t2162;
}

// function: _ZNKSt15_Deque_iteratorIiRKiPS0_EdeEv
int* std___Deque_iterator_int__int_const___int_const____operator____const(struct std___Deque_iterator_int_int___int___* v2163) {
bb2164: ;
  struct std___Deque_iterator_int_int___int___* this2165;
  int* __retval2166;
  this2165 = v2163;
  struct std___Deque_iterator_int_int___int___* t2167 = this2165;
  int* t2168 = t2167->_M_cur;
  __retval2166 = t2168;
  int* t2169 = __retval2166;
  return t2169;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_E14_S_buffer_sizeEv
unsigned long std___Deque_iterator_int__int_const___int_const_____S_buffer_size() {
bb2170: ;
  unsigned long __retval2171;
  unsigned long c2172 = 4;
  unsigned long r2173 = std____deque_buf_size(c2172);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval2171 = r2173;
  unsigned long t2174 = __retval2171;
  return t2174;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_E11_M_set_nodeEPPi
void std___Deque_iterator_int__int_const___int_const_____M_set_node(struct std___Deque_iterator_int_int___int___* v2175, int** v2176) {
bb2177: ;
  struct std___Deque_iterator_int_int___int___* this2178;
  int** __new_node2179;
  this2178 = v2175;
  __new_node2179 = v2176;
  struct std___Deque_iterator_int_int___int___* t2180 = this2178;
  int** t2181 = __new_node2179;
  t2180->_M_node = t2181;
  int** t2182 = __new_node2179;
  int* t2183 = *t2182;
  t2180->_M_first = t2183;
  int* t2184 = t2180->_M_first;
  unsigned long r2185 = std___Deque_iterator_int__int_const___int_const_____S_buffer_size();
  long cast2186 = (long)r2185;
  int* ptr2187 = &(t2184)[cast2186];
  t2180->_M_last = ptr2187;
  return;
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EppEv
struct std___Deque_iterator_int_int___int___* std___Deque_iterator_int__int_const___int_const____operator___2(struct std___Deque_iterator_int_int___int___* v2188) {
bb2189: ;
  struct std___Deque_iterator_int_int___int___* this2190;
  struct std___Deque_iterator_int_int___int___* __retval2191;
  this2190 = v2188;
  struct std___Deque_iterator_int_int___int___* t2192 = this2190;
  int* t2193 = t2192->_M_cur;
  int c2194 = 1;
  int* ptr2195 = &(t2193)[c2194];
  t2192->_M_cur = ptr2195;
    int* t2196 = t2192->_M_cur;
    int* t2197 = t2192->_M_last;
    _Bool c2198 = ((t2196 == t2197)) ? 1 : 0;
    if (c2198) {
      int** t2199 = t2192->_M_node;
      int c2200 = 1;
      int** ptr2201 = &(t2199)[c2200];
      std___Deque_iterator_int__int_const___int_const_____M_set_node(t2192, ptr2201);
      int* t2202 = t2192->_M_first;
      t2192->_M_cur = t2202;
    }
  __retval2191 = t2192;
  struct std___Deque_iterator_int_int___int___* t2203 = __retval2191;
  return t2203;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvE7releaseEv
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v2204) {
bb2205: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this2206;
  this2206 = v2204;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t2207 = this2206;
  struct std___Deque_iterator_int__int____int___* c2208 = ((void*)0);
  t2207->_M_cur = c2208;
  return;
}

// function: _ZNSt19_UninitDestroyGuardISt15_Deque_iteratorIiRiPiEvED2Ev
void std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* v2209) {
bb2210: ;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* this2211;
  this2211 = v2209;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_* t2212 = this2211;
    struct std___Deque_iterator_int__int____int___* t2213 = t2212->_M_cur;
    struct std___Deque_iterator_int__int____int___* c2214 = ((void*)0);
    _Bool c2215 = ((t2213 != c2214)) ? 1 : 0;
    if (c2215) {
      struct std___Deque_iterator_int__int____int___ agg_tmp02216;
      struct std___Deque_iterator_int__int____int___ agg_tmp12217;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02216, &t2212->_M_first);
      struct std___Deque_iterator_int__int____int___* t2218 = t2212->_M_cur;
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp12217, t2218);
      struct std___Deque_iterator_int__int____int___ t2219 = agg_tmp02216;
      struct std___Deque_iterator_int__int____int___ t2220 = agg_tmp12217;
      void_std___Destroy_std___Deque_iterator_int__int___int____(t2219, t2220);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt16__do_uninit_copyISt15_Deque_iteratorIiRKiPS1_ES4_S0_IiRiPiEET1_T_T0_S8_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____do_uninit_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int_int___int___ v2221, struct std___Deque_iterator_int_int___int___ v2222, struct std___Deque_iterator_int__int____int___ v2223) {
bb2224: ;
  struct std___Deque_iterator_int_int___int___ __first2225;
  struct std___Deque_iterator_int_int___int___ __last2226;
  struct std___Deque_iterator_int__int____int___ __result2227;
  struct std___Deque_iterator_int__int____int___ __retval2228;
  struct std___UninitDestroyGuard_std___Deque_iterator_int__int____int_____void_ __guard2229;
  __first2225 = v2221;
  __last2226 = v2222;
  __result2227 = v2223;
  std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void____UninitDestroyGuard(&__guard2229, &__result2227);
  if (__cir_exc_active) {
    struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r2231 = std__operator__(&__first2225, &__last2226);
        _Bool u2232 = !r2231;
        if (!u2232) break;
        int* r2233 = std___Deque_iterator_int__int___int____operator____const(&__result2227);
        int* r2234 = std___Deque_iterator_int__int_const___int_const____operator____const(&__first2225);
        void_std___Construct_int__int_const__(r2233, r2234);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard2229);
          }
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
      for_step2230: ;
        struct std___Deque_iterator_int_int___int___* r2235 = std___Deque_iterator_int__int_const___int_const____operator___2(&__first2225);
        struct std___Deque_iterator_int__int____int___* r2236 = std___Deque_iterator_int__int___int____operator___3(&__result2227);
      }
    std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void___release(&__guard2229);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard2229);
      }
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    std___Deque_iterator_int__int___int_____Deque_iterator(&__retval2228, &__result2227);
    struct std___Deque_iterator_int__int____int___ t2237 = __retval2228;
    struct std___Deque_iterator_int__int____int___ ret_val2238 = t2237;
    {
      std___UninitDestroyGuard_std___Deque_iterator_int__int___int____void_____UninitDestroyGuard(&__guard2229);
    }
    return ret_val2238;
  abort();
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EC2ERKS3_
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator(struct std___Deque_iterator_int_int___int___* v2239, struct std___Deque_iterator_int_int___int___* v2240) {
bb2241: ;
  struct std___Deque_iterator_int_int___int___* this2242;
  struct std___Deque_iterator_int_int___int___* __x2243;
  this2242 = v2239;
  __x2243 = v2240;
  struct std___Deque_iterator_int_int___int___* t2244 = this2242;
  struct std___Deque_iterator_int_int___int___* t2245 = __x2243;
  int* t2246 = t2245->_M_cur;
  t2244->_M_cur = t2246;
  struct std___Deque_iterator_int_int___int___* t2247 = __x2243;
  int* t2248 = t2247->_M_first;
  t2244->_M_first = t2248;
  struct std___Deque_iterator_int_int___int___* t2249 = __x2243;
  int* t2250 = t2249->_M_last;
  t2244->_M_last = t2250;
  struct std___Deque_iterator_int_int___int___* t2251 = __x2243;
  int** t2252 = t2251->_M_node;
  t2244->_M_node = t2252;
  return;
}

// function: _ZSt18uninitialized_copyISt15_Deque_iteratorIiRKiPS1_ES0_IiRiPiEET0_T_S9_S8_
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std__uninitialized_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(struct std___Deque_iterator_int_int___int___ v2253, struct std___Deque_iterator_int_int___int___ v2254, struct std___Deque_iterator_int__int____int___ v2255) {
bb2256: ;
  struct std___Deque_iterator_int_int___int___ __first2257;
  struct std___Deque_iterator_int_int___int___ __last2258;
  struct std___Deque_iterator_int__int____int___ __result2259;
  struct std___Deque_iterator_int__int____int___ __retval2260;
  __first2257 = v2253;
  __last2258 = v2254;
  __result2259 = v2255;
        struct std___Deque_iterator_int_int___int___ agg_tmp02261;
        struct std___Deque_iterator_int_int___int___ agg_tmp12262;
        struct std___Deque_iterator_int__int____int___ agg_tmp22263;
        std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp02261, &__first2257);
        std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp12262, &__last2258);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22263, &__result2259);
        struct std___Deque_iterator_int_int___int___ t2264 = agg_tmp02261;
        struct std___Deque_iterator_int_int___int___ t2265 = agg_tmp12262;
        struct std___Deque_iterator_int__int____int___ t2266 = agg_tmp22263;
        struct std___Deque_iterator_int__int____int___ r2267 = std___Deque_iterator_int__int___int___std____do_uninit_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(t2264, t2265, t2266);
        if (__cir_exc_active) {
          struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __retval2260 = r2267;
        struct std___Deque_iterator_int__int____int___ t2268 = __retval2260;
        return t2268;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt15_Deque_iteratorIiRKiPS1_ES4_S0_IiRiPiEiET1_T_T0_S8_RSaIT2_E
struct std___Deque_iterator_int__int____int___ std___Deque_iterator_int__int___int___std____uninitialized_copy_a_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____int_(struct std___Deque_iterator_int_int___int___ v2269, struct std___Deque_iterator_int_int___int___ v2270, struct std___Deque_iterator_int__int____int___ v2271, struct std__allocator_int_* v2272) {
bb2273: ;
  struct std___Deque_iterator_int_int___int___ __first2274;
  struct std___Deque_iterator_int_int___int___ __last2275;
  struct std___Deque_iterator_int__int____int___ __result2276;
  struct std__allocator_int_* unnamed2277;
  struct std___Deque_iterator_int__int____int___ __retval2278;
  __first2274 = v2269;
  __last2275 = v2270;
  __result2276 = v2271;
  unnamed2277 = v2272;
    _Bool r2279 = std__is_constant_evaluated();
    if (r2279) {
      struct std___Deque_iterator_int_int___int___ agg_tmp02280;
      struct std___Deque_iterator_int_int___int___ agg_tmp12281;
      struct std___Deque_iterator_int__int____int___ agg_tmp22282;
      std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp02280, &__first2274);
      std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp12281, &__last2275);
      std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp22282, &__result2276);
      struct std___Deque_iterator_int_int___int___ t2283 = agg_tmp02280;
      struct std___Deque_iterator_int_int___int___ t2284 = agg_tmp12281;
      struct std___Deque_iterator_int__int____int___ t2285 = agg_tmp22282;
      struct std___Deque_iterator_int__int____int___ r2286 = std___Deque_iterator_int__int___int___std____do_uninit_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(t2283, t2284, t2285);
      if (__cir_exc_active) {
        struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval2278 = r2286;
      struct std___Deque_iterator_int__int____int___ t2287 = __retval2278;
      return t2287;
    }
    struct std___Deque_iterator_int_int___int___ agg_tmp32288;
    struct std___Deque_iterator_int_int___int___ agg_tmp42289;
    struct std___Deque_iterator_int__int____int___ agg_tmp52290;
    std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp32288, &__first2274);
    std___Deque_iterator_int__int_const___int_const_____Deque_iterator(&agg_tmp42289, &__last2275);
    std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp52290, &__result2276);
    struct std___Deque_iterator_int_int___int___ t2291 = agg_tmp32288;
    struct std___Deque_iterator_int_int___int___ t2292 = agg_tmp42289;
    struct std___Deque_iterator_int__int____int___ t2293 = agg_tmp52290;
    struct std___Deque_iterator_int__int____int___ r2294 = std___Deque_iterator_int__int___int___std__uninitialized_copy_std___Deque_iterator_int__int_const___int_const____std___Deque_iterator_int__int___int____(t2291, t2292, t2293);
    if (__cir_exc_active) {
      struct std___Deque_iterator_int__int____int___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    __retval2278 = r2294;
    struct std___Deque_iterator_int__int____int___ t2295 = __retval2278;
    return t2295;
  abort();
}

// function: _ZNSt15_Deque_iteratorIiRKiPS0_EC2IS_IiRiPiEvEERKT_
void std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(struct std___Deque_iterator_int_int___int___* v2296, struct std___Deque_iterator_int__int____int___* v2297) {
bb2298: ;
  struct std___Deque_iterator_int_int___int___* this2299;
  struct std___Deque_iterator_int__int____int___* __x2300;
  this2299 = v2296;
  __x2300 = v2297;
  struct std___Deque_iterator_int_int___int___* t2301 = this2299;
  struct std___Deque_iterator_int__int____int___* t2302 = __x2300;
  int* t2303 = t2302->_M_cur;
  t2301->_M_cur = t2303;
  struct std___Deque_iterator_int__int____int___* t2304 = __x2300;
  int* t2305 = t2304->_M_first;
  t2301->_M_first = t2305;
  struct std___Deque_iterator_int__int____int___* t2306 = __x2300;
  int* t2307 = t2306->_M_last;
  t2301->_M_last = t2307;
  struct std___Deque_iterator_int__int____int___* t2308 = __x2300;
  int** t2309 = t2308->_M_node;
  t2301->_M_node = t2309;
  return;
}

// function: _ZNKSt5dequeIiSaIiEE5beginEv
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____begin___const(struct std__deque_int__std__allocator_int__* v2310) {
bb2311: ;
  struct std__deque_int__std__allocator_int__* this2312;
  struct std___Deque_iterator_int_int___int___ __retval2313;
  this2312 = v2310;
  struct std__deque_int__std__allocator_int__* t2314 = this2312;
  struct std___Deque_base_int__std__allocator_int__* base2315 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2314 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2316 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2315->_M_impl) + 0);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(&__retval2313, &base2316->_M_start);
  struct std___Deque_iterator_int_int___int___ t2317 = __retval2313;
  return t2317;
}

// function: _ZNKSt5dequeIiSaIiEE3endEv
struct std___Deque_iterator_int_int___int___ std__deque_int__std__allocator_int_____end___const(struct std__deque_int__std__allocator_int__* v2318) {
bb2319: ;
  struct std__deque_int__std__allocator_int__* this2320;
  struct std___Deque_iterator_int_int___int___ __retval2321;
  this2320 = v2318;
  struct std__deque_int__std__allocator_int__* t2322 = this2320;
  struct std___Deque_base_int__std__allocator_int__* base2323 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2322 + 0);
  struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2324 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2323->_M_impl) + 0);
  std___Deque_iterator_int__int_const___int_const_____Deque_iterator_std___Deque_iterator_int__int___int____void_(&__retval2321, &base2324->_M_finish);
  struct std___Deque_iterator_int_int___int___ t2325 = __retval2321;
  return t2325;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v2326, int* v2327, struct std__random_access_iterator_tag v2328) {
bb2329: ;
  int* __first2330;
  int* __last2331;
  struct std__random_access_iterator_tag unnamed2332;
  long __retval2333;
  __first2330 = v2326;
  __last2331 = v2327;
  unnamed2332 = v2328;
  int* t2334 = __last2331;
  int* t2335 = __first2330;
  long diff2336 = t2334 - t2335;
  __retval2333 = diff2336;
  long t2337 = __retval2333;
  return t2337;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v2338, int* v2339) {
bb2340: ;
  int* __first2341;
  int* __last2342;
  long __retval2343;
  struct std__random_access_iterator_tag agg_tmp02344;
  __first2341 = v2338;
  __last2342 = v2339;
  int* t2345 = __first2341;
  int* t2346 = __last2342;
  struct std__random_access_iterator_tag r2347 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first2341);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp02344 = r2347;
  struct std__random_access_iterator_tag t2348 = agg_tmp02344;
  long r2349 = std__iterator_traits_int____difference_type_std____distance_int__(t2345, t2346, t2348);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval2343 = r2349;
  long t2350 = __retval2343;
  return t2350;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v2351, long v2352, struct std__random_access_iterator_tag v2353) {
bb2354: ;
  int** __i2355;
  long __n2356;
  struct std__random_access_iterator_tag unnamed2357;
  __i2355 = v2351;
  __n2356 = v2352;
  unnamed2357 = v2353;
    long t2358 = __n2356;
    _Bool isconst2359 = 0;
    _Bool ternary2360;
    if (isconst2359) {
      long t2361 = __n2356;
      long c2362 = 1;
      _Bool c2363 = ((t2361 == c2362)) ? 1 : 0;
      ternary2360 = (_Bool)c2363;
    } else {
      _Bool c2364 = 0;
      ternary2360 = (_Bool)c2364;
    }
    if (ternary2360) {
      int** t2365 = __i2355;
      int* t2366 = *t2365;
      int c2367 = 1;
      int* ptr2368 = &(t2366)[c2367];
      *t2365 = ptr2368;
    } else {
        long t2369 = __n2356;
        _Bool isconst2370 = 0;
        _Bool ternary2371;
        if (isconst2370) {
          long t2372 = __n2356;
          long c2373 = -1;
          _Bool c2374 = ((t2372 == c2373)) ? 1 : 0;
          ternary2371 = (_Bool)c2374;
        } else {
          _Bool c2375 = 0;
          ternary2371 = (_Bool)c2375;
        }
        if (ternary2371) {
          int** t2376 = __i2355;
          int* t2377 = *t2376;
          int c2378 = -1;
          int* ptr2379 = &(t2377)[c2378];
          *t2376 = ptr2379;
        } else {
          long t2380 = __n2356;
          int** t2381 = __i2355;
          int* t2382 = *t2381;
          int* ptr2383 = &(t2382)[t2380];
          *t2381 = ptr2383;
        }
    }
  return;
}

// function: _ZSt7advanceIPimEvRT_T0_
void void_std__advance_int___unsigned_long_(int** v2384, unsigned long v2385) {
bb2386: ;
  int** __i2387;
  unsigned long __n2388;
  long __d2389;
  struct std__random_access_iterator_tag agg_tmp02390;
  __i2387 = v2384;
  __n2388 = v2385;
  unsigned long t2391 = __n2388;
  long cast2392 = (long)t2391;
  __d2389 = cast2392;
  int** t2393 = __i2387;
  long t2394 = __d2389;
  int** t2395 = __i2387;
  struct std__random_access_iterator_tag r2396 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t2395);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp02390 = r2396;
  struct std__random_access_iterator_tag t2397 = agg_tmp02390;
  void_std____advance_int___long_(t2393, t2394, t2397);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v2398, int* v2399, int* v2400) {
bb2401: ;
  int* __first2402;
  int* __last2403;
  int* __result2404;
  int* __retval2405;
  struct std___UninitDestroyGuard_int____void_ __guard2406;
  __first2402 = v2398;
  __last2403 = v2399;
  __result2404 = v2400;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard2406, &__result2404);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        int* t2408 = __first2402;
        int* t2409 = __last2403;
        _Bool c2410 = ((t2408 != t2409)) ? 1 : 0;
        if (!c2410) break;
        int* t2411 = __result2404;
        int* t2412 = __first2402;
        void_std___Construct_int__int__(t2411, t2412);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2406);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step2407: ;
        int* t2413 = __first2402;
        int c2414 = 1;
        int* ptr2415 = &(t2413)[c2414];
        __first2402 = ptr2415;
        int* t2416 = __result2404;
        int c2417 = 1;
        int* ptr2418 = &(t2416)[c2417];
        __result2404 = ptr2418;
      }
    std___UninitDestroyGuard_int___void___release(&__guard2406);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2406);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t2419 = __result2404;
    __retval2405 = t2419;
    int* t2420 = __retval2405;
    int* ret_val2421 = t2420;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2406);
    }
    return ret_val2421;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v2422) {
bb2423: ;
  int* __it2424;
  int* __retval2425;
  __it2424 = v2422;
  int* t2426 = __it2424;
  __retval2425 = t2426;
  int* t2427 = __retval2425;
  return t2427;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v2428, int* v2429, int* v2430) {
bb2431: ;
  int* __first2432;
  int* __last2433;
  int* __result2434;
  int* __retval2435;
  __first2432 = v2428;
  __last2433 = v2429;
  __result2434 = v2430;
      long __n2436;
      int* t2437 = __last2433;
      int* t2438 = __first2432;
      long diff2439 = t2437 - t2438;
      __n2436 = diff2439;
        long t2440 = __n2436;
        long c2441 = 0;
        _Bool c2442 = ((t2440 > c2441)) ? 1 : 0;
        if (c2442) {
          int* t2443 = __result2434;
          int* r2444 = int__std____niter_base_int__(t2443);
          void* cast2445 = (void*)r2444;
          int* t2446 = __first2432;
          int* r2447 = int__std____niter_base_int__(t2446);
          void* cast2448 = (void*)r2447;
          long t2449 = __n2436;
          unsigned long cast2450 = (unsigned long)t2449;
          unsigned long c2451 = 4;
          unsigned long b2452 = cast2450 * c2451;
          void* r2453 = memcpy(cast2445, cast2448, b2452);
          long t2454 = __n2436;
          int* t2455 = __result2434;
          int* ptr2456 = &(t2455)[t2454];
          __result2434 = ptr2456;
        }
      int* t2457 = __result2434;
      __retval2435 = t2457;
      int* t2458 = __retval2435;
      return t2458;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v2459, int* v2460, int* v2461, struct std__allocator_int_* v2462) {
bb2463: ;
  int* __first2464;
  int* __last2465;
  int* __result2466;
  struct std__allocator_int_* unnamed2467;
  int* __retval2468;
  __first2464 = v2459;
  __last2465 = v2460;
  __result2466 = v2461;
  unnamed2467 = v2462;
    _Bool r2469 = std__is_constant_evaluated();
    if (r2469) {
      int* t2470 = __first2464;
      int* t2471 = __last2465;
      int* t2472 = __result2466;
      int* r2473 = int__std____do_uninit_copy_int___int___int__(t2470, t2471, t2472);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval2468 = r2473;
      int* t2474 = __retval2468;
      return t2474;
    }
    int* t2475 = __first2464;
    int* t2476 = __last2465;
    int* t2477 = __result2466;
    int* r2478 = int__std__uninitialized_copy_int___int__(t2475, t2476, t2477);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval2468 = r2478;
    int* t2479 = __retval2468;
    return t2479;
  abort();
}

// function: _ZNSt5dequeIiSaIiEE19_M_range_initializeIPiEEvT_S4_St20forward_iterator_tag
void void_std__deque_int__std__allocator_int______M_range_initialize_int__(struct std__deque_int__std__allocator_int__* v2480, int* v2481, int* v2482, struct std__forward_iterator_tag v2483) {
bb2484: ;
  struct std__deque_int__std__allocator_int__* this2485;
  int* __first2486;
  int* __last2487;
  struct std__forward_iterator_tag unnamed2488;
  unsigned long __n2489;
  int** __cur_node2490;
  this2485 = v2480;
  __first2486 = v2481;
  __last2487 = v2482;
  unnamed2488 = v2483;
  struct std__deque_int__std__allocator_int__* t2491 = this2485;
  int* t2492 = __first2486;
  int* t2493 = __last2487;
  long r2494 = std__iterator_traits_int____difference_type_std__distance_int__(t2492, t2493);
  if (__cir_exc_active) {
    return;
  }
  unsigned long cast2495 = (unsigned long)r2494;
  __n2489 = cast2495;
  struct std___Deque_base_int__std__allocator_int__* base2496 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2491 + 0);
  unsigned long t2497 = __n2489;
  struct std___Deque_base_int__std__allocator_int__* base2498 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2491 + 0);
  struct std__allocator_int_* r2499 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2498);
  unsigned long r2500 = std__deque_int__std__allocator_int______S_check_init_len(t2497, r2499);
  if (__cir_exc_active) {
    return;
  }
  std___Deque_base_int__std__allocator_int______M_initialize_map(base2496, r2500);
  if (__cir_exc_active) {
    return;
  }
    struct std___Deque_iterator_int__int____int___ agg_tmp02501;
    struct std___Deque_iterator_int__int____int___ agg_tmp12502;
        struct std___Deque_base_int__std__allocator_int__* base2504 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2491 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2505 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2504->_M_impl) + 0);
        int** t2506 = base2505->_M_start._M_node;
        __cur_node2490 = t2506;
        while (1) {
          int** t2508 = __cur_node2490;
          struct std___Deque_base_int__std__allocator_int__* base2509 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2491 + 0);
          struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2510 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2509->_M_impl) + 0);
          int** t2511 = base2510->_M_finish._M_node;
          _Bool c2512 = ((t2508 < t2511)) ? 1 : 0;
          if (!c2512) break;
            int* __mid2513;
              unsigned long t2514 = __n2489;
              unsigned long r2515 = std__deque_int__std__allocator_int______S_buffer_size();
              _Bool c2516 = ((t2514 < r2515)) ? 1 : 0;
              if (c2516) {
                __builtin_unreachable();
              }
            int* t2517 = __first2486;
            __mid2513 = t2517;
            unsigned long r2518 = std__deque_int__std__allocator_int______S_buffer_size();
            void_std__advance_int___unsigned_long_(&__mid2513, r2518);
            if (__cir_exc_active) {
              goto cir_try_dispatch2503;
            }
            int* t2519 = __first2486;
            int* t2520 = __mid2513;
            int** t2521 = __cur_node2490;
            int* t2522 = *t2521;
            struct std___Deque_base_int__std__allocator_int__* base2523 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2491 + 0);
            struct std__allocator_int_* r2524 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2523);
            int* r2525 = int__std____uninitialized_copy_a_int___int___int___int_(t2519, t2520, t2522, r2524);
            if (__cir_exc_active) {
              goto cir_try_dispatch2503;
            }
            int* t2526 = __mid2513;
            __first2486 = t2526;
        for_step2507: ;
          int** t2527 = __cur_node2490;
          int c2528 = 1;
          int** ptr2529 = &(t2527)[c2528];
          __cur_node2490 = ptr2529;
        }
      int* t2530 = __first2486;
      int* t2531 = __last2487;
      struct std___Deque_base_int__std__allocator_int__* base2532 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2491 + 0);
      struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2533 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2532->_M_impl) + 0);
      int* t2534 = base2533->_M_finish._M_first;
      struct std___Deque_base_int__std__allocator_int__* base2535 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2491 + 0);
      struct std__allocator_int_* r2536 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2535);
      int* r2537 = int__std____uninitialized_copy_a_int___int___int___int_(t2530, t2531, t2534, r2536);
      if (__cir_exc_active) {
        goto cir_try_dispatch2503;
      }
    cir_try_dispatch2503: ;
    if (__cir_exc_active) {
    {
      int ca_tok2538 = 0;
      void* ca_exn2539 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Deque_base_int__std__allocator_int__* base2540 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2491 + 0);
        struct std___Deque_base_int__std__allocator_int_____Deque_impl_data* base2541 = (struct std___Deque_base_int__std__allocator_int_____Deque_impl_data*)((char *)&(base2540->_M_impl) + 0);
        std___Deque_iterator_int__int___int_____Deque_iterator(&agg_tmp02501, &base2541->_M_start);
        int** t2542 = __cur_node2490;
        int* t2543 = *t2542;
        int** t2544 = __cur_node2490;
        std___Deque_iterator_int__int___int_____Deque_iterator_2(&agg_tmp12502, t2543, t2544);
        struct std___Deque_base_int__std__allocator_int__* base2545 = (struct std___Deque_base_int__std__allocator_int__*)((char *)t2491 + 0);
        struct std__allocator_int_* r2546 = std___Deque_base_int__std__allocator_int______M_get_Tp_allocator(base2545);
        struct std___Deque_iterator_int__int____int___ t2547 = agg_tmp02501;
        struct std___Deque_iterator_int__int____int___ t2548 = agg_tmp12502;
        void_std___Destroy_std___Deque_iterator_int__int___int____int_(t2547, t2548, r2546);
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

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v2549) {
bb2550: ;
  int** unnamed2551;
  struct std__random_access_iterator_tag __retval2552;
  unnamed2551 = v2549;
  struct std__random_access_iterator_tag t2553 = __retval2552;
  return t2553;
}

