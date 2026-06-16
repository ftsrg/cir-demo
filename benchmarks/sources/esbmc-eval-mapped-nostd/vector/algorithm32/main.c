extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int __const_main_myints1[9] = {10, 10, 20, 20, 30, 0, 0, 0, 0};
int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
char _str[9] = "*it == 0";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm32/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[26] = "vector::_M_default_append";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, int* p3);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
int* int__std____niter_wrap_int__(int** p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int__(int* p0);
int* int__std____copy_move_a_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__copy_int___int__(int* p0, int* p1, int* p2);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___unsigned_long_(int** p0, unsigned long p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__forward_iterator_tag p3);
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
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
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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

// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2: ;
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v10) {
bb11: ;
  struct std__allocator_int_* this12;
  this12 = v10;
  struct std__allocator_int_* t13 = this12;
  struct std____new_allocator_int_* base14 = (struct std____new_allocator_int_*)((char *)t13 + 0);
  std____new_allocator_int_____new_allocator_2(base14);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v15, unsigned long v16, struct std__allocator_int_* v17) {
bb18: ;
  struct std__vector_int__std__allocator_int__* this19;
  unsigned long __n20;
  struct std__allocator_int_* __a21;
  this19 = v15;
  __n20 = v16;
  __a21 = v17;
  struct std__vector_int__std__allocator_int__* t22 = this19;
  struct std___Vector_base_int__std__allocator_int__* base23 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t22 + 0);
  unsigned long t24 = __n20;
  struct std__allocator_int_* t25 = __a21;
  unsigned long r26 = std__vector_int__std__allocator_int______S_check_init_len(t24, t25);
  struct std__allocator_int_* t27 = __a21;
  std___Vector_base_int__std__allocator_int______Vector_base(base23, r26, t27);
    unsigned long t28 = __n20;
    std__vector_int__std__allocator_int______M_default_initialize(t22, t28);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v29) {
bb30: ;
  struct std__allocator_int_* this31;
  this31 = v29;
  struct std__allocator_int_* t32 = this31;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v33) {
bb34: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this35;
  this35 = v33;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t36 = this35;
  int* c37 = ((void*)0);
  t36->_M_current = c37;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v38) {
bb39: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this40;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval41;
  this40 = v38;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t42 = this40;
  int* t43 = t42->_M_current;
  int c44 = 1;
  int* ptr45 = &(t43)[c44];
  t42->_M_current = ptr45;
  __retval41 = t42;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t46 = __retval41;
  return t46;
}

// function: _Z17unique_copy_esbmcIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET0_PT_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v47, int* v48, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v49) {
bb50: ;
  int* first51;
  int* last52;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest53;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval54;
  int value55;
  first51 = v47;
  last52 = v48;
  dest53 = v49;
  int* t56 = first51;
  int t57 = *t56;
  value55 = t57;
  int* t58 = first51;
  int t59 = *t58;
  int* r60 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&dest53);
  *r60 = t59;
    while (1) {
      int* t61 = first51;
      int c62 = 1;
      int* ptr63 = &(t61)[c62];
      first51 = ptr63;
      int* t64 = last52;
      _Bool c65 = ((ptr63 != t64)) ? 1 : 0;
      if (!c65) break;
          int t66 = value55;
          int* t67 = first51;
          int t68 = *t67;
          _Bool c69 = ((t66 == t68)) ? 1 : 0;
          _Bool u70 = !c69;
          if (u70) {
            int* t71 = first51;
            int t72 = *t71;
            value55 = t72;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r73 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&dest53);
            int* r74 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r73);
            *r74 = t72;
          }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r75 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&dest53);
  __retval54 = *r75; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t76 = __retval54;
  return t76;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v77, int** v78) {
bb79: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this80;
  int** __i81;
  this80 = v77;
  __i81 = v78;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t82 = this80;
  int** t83 = __i81;
  int* t84 = *t83;
  t82->_M_current = t84;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v85) {
bb86: ;
  struct std__vector_int__std__allocator_int__* this87;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval88;
  this87 = v85;
  struct std__vector_int__std__allocator_int__* t89 = this87;
  struct std___Vector_base_int__std__allocator_int__* base90 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t89 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base91 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base90->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval88, &base91->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t92 = __retval88;
  return t92;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v93, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v94) {
bb95: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this96;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed97;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval98;
  this96 = v93;
  unnamed97 = v94;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t99 = this96;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t100 = unnamed97;
  int* t101 = t100->_M_current;
  t99->_M_current = t101;
  __retval98 = t99;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t102 = __retval98;
  return t102;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v103) {
bb104: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this105;
  int* __retval106;
  this105 = v103;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t107 = this105;
  int* t108 = t107->_M_current;
  __retval106 = t108;
  int* t109 = __retval106;
  return t109;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v110) {
bb111: ;
  struct std__vector_int__std__allocator_int__* this112;
  unsigned long __retval113;
  long __dif114;
  this112 = v110;
  struct std__vector_int__std__allocator_int__* t115 = this112;
  struct std___Vector_base_int__std__allocator_int__* base116 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t115 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base117 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base116->_M_impl) + 0);
  int* t118 = base117->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base119 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t115 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base120 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base119->_M_impl) + 0);
  int* t121 = base120->_M_start;
  long diff122 = t118 - t121;
  __dif114 = diff122;
    long t123 = __dif114;
    long c124 = 0;
    _Bool c125 = ((t123 < c124)) ? 1 : 0;
    if (c125) {
      __builtin_unreachable();
    }
  long t126 = __dif114;
  unsigned long cast127 = (unsigned long)t126;
  __retval113 = cast127;
  unsigned long t128 = __retval113;
  return t128;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v129, int* v130, struct std__random_access_iterator_tag v131) {
bb132: ;
  int* __first133;
  int* __last134;
  struct std__random_access_iterator_tag unnamed135;
  long __retval136;
  __first133 = v129;
  __last134 = v130;
  unnamed135 = v131;
  int* t137 = __last134;
  int* t138 = __first133;
  long diff139 = t137 - t138;
  __retval136 = diff139;
  long t140 = __retval136;
  return t140;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v141, int* v142) {
bb143: ;
  int* __first144;
  int* __last145;
  long __retval146;
  struct std__random_access_iterator_tag agg_tmp0147;
  __first144 = v141;
  __last145 = v142;
  int* t148 = __first144;
  int* t149 = __last145;
  struct std__random_access_iterator_tag r150 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first144);
  agg_tmp0147 = r150;
  struct std__random_access_iterator_tag t151 = agg_tmp0147;
  long r152 = std__iterator_traits_int____difference_type_std____distance_int__(t148, t149, t151);
  __retval146 = r152;
  long t153 = __retval146;
  return t153;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v154) {
bb155: ;
  struct std__vector_int__std__allocator_int__* this156;
  unsigned long __retval157;
  long __dif158;
  this156 = v154;
  struct std__vector_int__std__allocator_int__* t159 = this156;
  struct std___Vector_base_int__std__allocator_int__* base160 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t159 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base161 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base160->_M_impl) + 0);
  int* t162 = base161->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base163 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t159 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base164 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base163->_M_impl) + 0);
  int* t165 = base164->_M_start;
  long diff166 = t162 - t165;
  __dif158 = diff166;
    long t167 = __dif158;
    long c168 = 0;
    _Bool c169 = ((t167 < c168)) ? 1 : 0;
    if (c169) {
      __builtin_unreachable();
    }
  long t170 = __dif158;
  unsigned long cast171 = (unsigned long)t170;
  __retval157 = cast171;
  unsigned long t172 = __retval157;
  return t172;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v173, int* v174, unsigned long v175, struct std___Vector_base_int__std__allocator_int__* v176) {
bb177: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this178;
  int* __s179;
  unsigned long __l180;
  struct std___Vector_base_int__std__allocator_int__* __vect181;
  this178 = v173;
  __s179 = v174;
  __l180 = v175;
  __vect181 = v176;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t182 = this178;
  int* t183 = __s179;
  t182->_M_storage = t183;
  unsigned long t184 = __l180;
  t182->_M_len = t184;
  struct std___Vector_base_int__std__allocator_int__* t185 = __vect181;
  t182->_M_vect = t185;
  return;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v186) {
bb187: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this188;
  int* __retval189;
  int* __res190;
  this188 = v186;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t191 = this188;
  int* t192 = t191->_M_storage;
  __res190 = t192;
  int* c193 = ((void*)0);
  t191->_M_storage = c193;
  int* t194 = __res190;
  __retval189 = t194;
  int* t195 = __retval189;
  return t195;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v196) {
bb197: ;
  struct std__vector_int__std__allocator_int_____Guard_alloc* this198;
  this198 = v196;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t199 = this198;
    int* t200 = t199->_M_storage;
    _Bool cast201 = (_Bool)t200;
    if (cast201) {
      struct std___Vector_base_int__std__allocator_int__* t202 = t199->_M_vect;
      int* t203 = t199->_M_storage;
      unsigned long t204 = t199->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t202, t203, t204);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIPiEES3_mT_S4_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(struct std__vector_int__std__allocator_int__* v205, unsigned long v206, int* v207, int* v208) {
bb209: ;
  struct std__vector_int__std__allocator_int__* this210;
  unsigned long __n211;
  int* __first212;
  int* __last213;
  int* __retval214;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard215;
  this210 = v205;
  __n211 = v206;
  __first212 = v207;
  __last213 = v208;
  struct std__vector_int__std__allocator_int__* t216 = this210;
  struct std___Vector_base_int__std__allocator_int__* base217 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t216 + 0);
  unsigned long t218 = __n211;
  int* r219 = std___Vector_base_int__std__allocator_int______M_allocate(base217, t218);
  unsigned long t220 = __n211;
  struct std___Vector_base_int__std__allocator_int__* base221 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t216 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard215, r219, t220, base221);
    int* t222 = __first212;
    int* t223 = __last213;
    int* t224 = __guard215._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base225 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t216 + 0);
    struct std__allocator_int_* r226 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base225);
    int* r227 = int__std____uninitialized_copy_a_int___int___int___int_(t222, t223, t224, r226);
    int* r228 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard215);
    __retval214 = r228;
    int* t229 = __retval214;
    int* ret_val230 = t229;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard215);
    }
    return ret_val230;
  abort();
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v231, int* v232, struct std__allocator_int_* v233) {
bb234: ;
  int* __first235;
  int* __last236;
  struct std__allocator_int_* unnamed237;
  __first235 = v231;
  __last236 = v232;
  unnamed237 = v233;
  int* t238 = __first235;
  int* t239 = __last236;
  void_std___Destroy_int__(t238, t239);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v240, int* v241) {
bb242: ;
  struct std__vector_int__std__allocator_int__* this243;
  int* __pos244;
  this243 = v240;
  __pos244 = v241;
  struct std__vector_int__std__allocator_int__* t245 = this243;
    unsigned long __n246;
    struct std___Vector_base_int__std__allocator_int__* base247 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t245 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base248 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base247->_M_impl) + 0);
    int* t249 = base248->_M_finish;
    int* t250 = __pos244;
    long diff251 = t249 - t250;
    unsigned long cast252 = (unsigned long)diff251;
    __n246 = cast252;
    unsigned long t253 = __n246;
    _Bool cast254 = (_Bool)t253;
    if (cast254) {
      int* t255 = __pos244;
      struct std___Vector_base_int__std__allocator_int__* base256 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t245 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base257 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base256->_M_impl) + 0);
      int* t258 = base257->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base259 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t245 + 0);
      struct std__allocator_int_* r260 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base259);
      void_std___Destroy_int___int_(t255, t258, r260);
      int* t261 = __pos244;
      struct std___Vector_base_int__std__allocator_int__* base262 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t245 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base263 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base262->_M_impl) + 0);
      base263->_M_finish = t261;
    }
  return;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v264, int* v265) {
bb266: ;
  int** unnamed267;
  int* __res268;
  int* __retval269;
  unnamed267 = v264;
  __res268 = v265;
  int* t270 = __res268;
  __retval269 = t270;
  int* t271 = __retval269;
  return t271;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v272, int** v273) {
bb274: ;
  int** __out275;
  int** __in276;
  __out275 = v272;
  __in276 = v273;
    int** t277 = __in276;
    int* t278 = *t277;
    int t279 = *t278;
    int** t280 = __out275;
    int* t281 = *t280;
    *t281 = t279;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v282, int* v283, int* v284) {
bb285: ;
  int* __first286;
  int* __last287;
  int* __result288;
  int* __retval289;
  __first286 = v282;
  __last287 = v283;
  __result288 = v284;
      _Bool r290 = std____is_constant_evaluated();
      if (r290) {
      } else {
          long __n291;
          int* t292 = __first286;
          int* t293 = __last287;
          long r294 = std__iterator_traits_int____difference_type_std__distance_int__(t292, t293);
          __n291 = r294;
            long t295 = __n291;
            long c296 = 1;
            _Bool c297 = ((t295 > c296)) ? 1 : 0;
            if (c297) {
              int* t298 = __result288;
              void* cast299 = (void*)t298;
              int* t300 = __first286;
              void* cast301 = (void*)t300;
              long t302 = __n291;
              unsigned long cast303 = (unsigned long)t302;
              unsigned long c304 = 4;
              unsigned long b305 = cast303 * c304;
              void* r306 = memmove(cast299, cast301, b305);
              long t307 = __n291;
              int* t308 = __result288;
              int* ptr309 = &(t308)[t307];
              __result288 = ptr309;
            } else {
                long t310 = __n291;
                long c311 = 1;
                _Bool c312 = ((t310 == c311)) ? 1 : 0;
                if (c312) {
                  void_std____assign_one_false__int___int__(&__result288, &__first286);
                  int* t313 = __result288;
                  int c314 = 1;
                  int* ptr315 = &(t313)[c314];
                  __result288 = ptr315;
                }
            }
          int* t316 = __result288;
          __retval289 = t316;
          int* t317 = __retval289;
          return t317;
      }
    while (1) {
      int* t319 = __first286;
      int* t320 = __last287;
      _Bool c321 = ((t319 != t320)) ? 1 : 0;
      if (!c321) break;
      void_std____assign_one_false__int___int__(&__result288, &__first286);
    for_step318: ;
      int* t322 = __result288;
      int c323 = 1;
      int* ptr324 = &(t322)[c323];
      __result288 = ptr324;
      int* t325 = __first286;
      int c326 = 1;
      int* ptr327 = &(t325)[c326];
      __first286 = ptr327;
    }
  int* t328 = __result288;
  __retval289 = t328;
  int* t329 = __retval289;
  return t329;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v330, int* v331, int* v332) {
bb333: ;
  int* __first334;
  int* __last335;
  int* __result336;
  int* __retval337;
  __first334 = v330;
  __last335 = v331;
  __result336 = v332;
  int* t338 = __first334;
  int* t339 = __last335;
  int* t340 = __result336;
  int* r341 = int__std____copy_move_a2_false__int___int___int__(t338, t339, t340);
  __retval337 = r341;
  int* t342 = __retval337;
  return t342;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v343) {
bb344: ;
  int* __it345;
  int* __retval346;
  __it345 = v343;
  int* t347 = __it345;
  __retval346 = t347;
  int* t348 = __retval346;
  return t348;
}

// function: _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a_false__int___int__(int* v349, int* v350, int* v351) {
bb352: ;
  int* __first353;
  int* __last354;
  int* __result355;
  int* __retval356;
  __first353 = v349;
  __last354 = v350;
  __result355 = v351;
  int* t357 = __first353;
  int* r358 = int__std____niter_base_int__(t357);
  int* t359 = __last354;
  int* r360 = int__std____niter_base_int__(t359);
  int* t361 = __result355;
  int* r362 = int__std____niter_base_int__(t361);
  int* r363 = int__std____copy_move_a1_false__int___int__(r358, r360, r362);
  int* r364 = int__std____niter_wrap_int__(&__result355, r363);
  __retval356 = r364;
  int* t365 = __retval356;
  return t365;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v366) {
bb367: ;
  int* __it368;
  int* __retval369;
  __it368 = v366;
  int* t370 = __it368;
  __retval369 = t370;
  int* t371 = __retval369;
  return t371;
}

// function: _ZSt4copyIPiS0_ET0_T_S2_S1_
int* int__std__copy_int___int__(int* v372, int* v373, int* v374) {
bb375: ;
  int* __first376;
  int* __last377;
  int* __result378;
  int* __retval379;
  __first376 = v372;
  __last377 = v373;
  __result378 = v374;
  int* t380 = __first376;
  int* r381 = int__std____miter_base_int__(t380);
  int* t382 = __last377;
  int* r383 = int__std____miter_base_int__(t382);
  int* t384 = __result378;
  int* r385 = int__std____copy_move_a_false__int___int__(r381, r383, t384);
  __retval379 = r385;
  int* t386 = __retval379;
  return t386;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v387, long v388, struct std__random_access_iterator_tag v389) {
bb390: ;
  int** __i391;
  long __n392;
  struct std__random_access_iterator_tag unnamed393;
  __i391 = v387;
  __n392 = v388;
  unnamed393 = v389;
    long t394 = __n392;
    _Bool isconst395 = 0;
    _Bool ternary396;
    if (isconst395) {
      long t397 = __n392;
      long c398 = 1;
      _Bool c399 = ((t397 == c398)) ? 1 : 0;
      ternary396 = (_Bool)c399;
    } else {
      _Bool c400 = 0;
      ternary396 = (_Bool)c400;
    }
    if (ternary396) {
      int** t401 = __i391;
      int* t402 = *t401;
      int c403 = 1;
      int* ptr404 = &(t402)[c403];
      *t401 = ptr404;
    } else {
        long t405 = __n392;
        _Bool isconst406 = 0;
        _Bool ternary407;
        if (isconst406) {
          long t408 = __n392;
          long c409 = -1;
          _Bool c410 = ((t408 == c409)) ? 1 : 0;
          ternary407 = (_Bool)c410;
        } else {
          _Bool c411 = 0;
          ternary407 = (_Bool)c411;
        }
        if (ternary407) {
          int** t412 = __i391;
          int* t413 = *t412;
          int c414 = -1;
          int* ptr415 = &(t413)[c414];
          *t412 = ptr415;
        } else {
          long t416 = __n392;
          int** t417 = __i391;
          int* t418 = *t417;
          int* ptr419 = &(t418)[t416];
          *t417 = ptr419;
        }
    }
  return;
}

// function: _ZSt7advanceIPimEvRT_T0_
void void_std__advance_int___unsigned_long_(int** v420, unsigned long v421) {
bb422: ;
  int** __i423;
  unsigned long __n424;
  long __d425;
  struct std__random_access_iterator_tag agg_tmp0426;
  __i423 = v420;
  __n424 = v421;
  unsigned long t427 = __n424;
  long cast428 = (long)t427;
  __d425 = cast428;
  int** t429 = __i423;
  long t430 = __d425;
  int** t431 = __i423;
  struct std__random_access_iterator_tag r432 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t431);
  agg_tmp0426 = r432;
  struct std__random_access_iterator_tag t433 = agg_tmp0426;
  void_std____advance_int___long_(t429, t430, t433);
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v434, int* v435) {
bb436: ;
  int* __location437;
  int* __args438;
  int* __retval439;
  void* __loc440;
  __location437 = v434;
  __args438 = v435;
  int* t441 = __location437;
  void* cast442 = (void*)t441;
  __loc440 = cast442;
    void* t443 = __loc440;
    int* cast444 = (int*)t443;
    int* t445 = __args438;
    int t446 = *t445;
    *cast444 = t446;
    __retval439 = cast444;
    int* t447 = __retval439;
    return t447;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v448, int* v449) {
bb450: ;
  int* __p451;
  int* __args452;
  __p451 = v448;
  __args452 = v449;
    _Bool r453 = std____is_constant_evaluated();
    if (r453) {
      int* t454 = __p451;
      int* t455 = __args452;
      int* r456 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t454, t455);
      return;
    }
  int* t457 = __p451;
  void* cast458 = (void*)t457;
  int* cast459 = (int*)cast458;
  int* t460 = __args452;
  int t461 = *t460;
  *cast459 = t461;
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v462, int* v463, int* v464) {
bb465: ;
  int* __first466;
  int* __last467;
  int* __result468;
  int* __retval469;
  struct std___UninitDestroyGuard_int____void_ __guard470;
  __first466 = v462;
  __last467 = v463;
  __result468 = v464;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard470, &__result468);
      while (1) {
        int* t472 = __first466;
        int* t473 = __last467;
        _Bool c474 = ((t472 != t473)) ? 1 : 0;
        if (!c474) break;
        int* t475 = __result468;
        int* t476 = __first466;
        void_std___Construct_int__int__(t475, t476);
      for_step471: ;
        int* t477 = __first466;
        int c478 = 1;
        int* ptr479 = &(t477)[c478];
        __first466 = ptr479;
        int* t480 = __result468;
        int c481 = 1;
        int* ptr482 = &(t480)[c481];
        __result468 = ptr482;
      }
    std___UninitDestroyGuard_int___void___release(&__guard470);
    int* t483 = __result468;
    __retval469 = t483;
    int* t484 = __retval469;
    int* ret_val485 = t484;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard470);
    }
    return ret_val485;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v486, int* v487, int* v488) {
bb489: ;
  int* __first490;
  int* __last491;
  int* __result492;
  int* __retval493;
  __first490 = v486;
  __last491 = v487;
  __result492 = v488;
      long __n494;
      int* t495 = __last491;
      int* t496 = __first490;
      long diff497 = t495 - t496;
      __n494 = diff497;
        long t498 = __n494;
        long c499 = 0;
        _Bool c500 = ((t498 > c499)) ? 1 : 0;
        if (c500) {
          int* t501 = __result492;
          int* r502 = int__std____niter_base_int__(t501);
          void* cast503 = (void*)r502;
          int* t504 = __first490;
          int* r505 = int__std____niter_base_int__(t504);
          void* cast506 = (void*)r505;
          long t507 = __n494;
          unsigned long cast508 = (unsigned long)t507;
          unsigned long c509 = 4;
          unsigned long b510 = cast508 * c509;
          void* r511 = memcpy(cast503, cast506, b510);
          long t512 = __n494;
          int* t513 = __result492;
          int* ptr514 = &(t513)[t512];
          __result492 = ptr514;
        }
      int* t515 = __result492;
      __retval493 = t515;
      int* t516 = __retval493;
      return t516;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v517, int* v518, int* v519, struct std__allocator_int_* v520) {
bb521: ;
  int* __first522;
  int* __last523;
  int* __result524;
  struct std__allocator_int_* unnamed525;
  int* __retval526;
  __first522 = v517;
  __last523 = v518;
  __result524 = v519;
  unnamed525 = v520;
    _Bool r527 = std__is_constant_evaluated();
    if (r527) {
      int* t528 = __first522;
      int* t529 = __last523;
      int* t530 = __result524;
      int* r531 = int__std____do_uninit_copy_int___int___int__(t528, t529, t530);
      __retval526 = r531;
      int* t532 = __retval526;
      return t532;
    }
    int* t533 = __first522;
    int* t534 = __last523;
    int* t535 = __result524;
    int* r536 = int__std__uninitialized_copy_int___int__(t533, t534, t535);
    __retval526 = r536;
    int* t537 = __retval526;
    return t537;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE13_M_assign_auxIPiEEvT_S4_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* v538, int* v539, int* v540, struct std__forward_iterator_tag v541) {
bb542: ;
  struct std__vector_int__std__allocator_int__* this543;
  int* __first544;
  int* __last545;
  struct std__forward_iterator_tag unnamed546;
  unsigned long __sz547;
  unsigned long __len548;
  this543 = v538;
  __first544 = v539;
  __last545 = v540;
  unnamed546 = v541;
  struct std__vector_int__std__allocator_int__* t549 = this543;
  unsigned long r550 = std__vector_int__std__allocator_int_____size___const(t549);
  __sz547 = r550;
  int* t551 = __first544;
  int* t552 = __last545;
  long r553 = std__iterator_traits_int____difference_type_std__distance_int__(t551, t552);
  unsigned long cast554 = (unsigned long)r553;
  __len548 = cast554;
    unsigned long t555 = __len548;
    unsigned long r556 = std__vector_int__std__allocator_int_____capacity___const(t549);
    _Bool c557 = ((t555 > r556)) ? 1 : 0;
    if (c557) {
      int* __tmp558;
        unsigned long t559 = __len548;
        unsigned long t560 = __sz547;
        _Bool c561 = ((t559 <= t560)) ? 1 : 0;
        if (c561) {
          __builtin_unreachable();
        }
      unsigned long t562 = __len548;
      struct std___Vector_base_int__std__allocator_int__* base563 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std__allocator_int_* r564 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base563);
      unsigned long r565 = std__vector_int__std__allocator_int______S_check_init_len(t562, r564);
      unsigned long t566 = __len548;
      int* t567 = __first544;
      int* t568 = __last545;
      int* r569 = int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(t549, t566, t567, t568);
      __tmp558 = r569;
      struct std___Vector_base_int__std__allocator_int__* base570 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base571 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base570->_M_impl) + 0);
      int* t572 = base571->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base573 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base574 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base573->_M_impl) + 0);
      int* t575 = base574->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base576 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std__allocator_int_* r577 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base576);
      void_std___Destroy_int___int_(t572, t575, r577);
      struct std___Vector_base_int__std__allocator_int__* base578 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int__* base579 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base580 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base579->_M_impl) + 0);
      int* t581 = base580->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base582 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base583 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base582->_M_impl) + 0);
      int* t584 = base583->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base585 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base586 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base585->_M_impl) + 0);
      int* t587 = base586->_M_start;
      long diff588 = t584 - t587;
      unsigned long cast589 = (unsigned long)diff588;
      std___Vector_base_int__std__allocator_int______M_deallocate(base578, t581, cast589);
      int* t590 = __tmp558;
      struct std___Vector_base_int__std__allocator_int__* base591 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base592 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base591->_M_impl) + 0);
      base592->_M_start = t590;
      struct std___Vector_base_int__std__allocator_int__* base593 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base594 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base593->_M_impl) + 0);
      int* t595 = base594->_M_start;
      unsigned long t596 = __len548;
      int* ptr597 = &(t595)[t596];
      struct std___Vector_base_int__std__allocator_int__* base598 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base599 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base598->_M_impl) + 0);
      base599->_M_finish = ptr597;
      struct std___Vector_base_int__std__allocator_int__* base600 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base601 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base600->_M_impl) + 0);
      int* t602 = base601->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base603 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base604 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base603->_M_impl) + 0);
      base604->_M_end_of_storage = t602;
    } else {
        unsigned long t605 = __sz547;
        unsigned long t606 = __len548;
        _Bool c607 = ((t605 >= t606)) ? 1 : 0;
        if (c607) {
          int* t608 = __first544;
          int* t609 = __last545;
          struct std___Vector_base_int__std__allocator_int__* base610 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base611 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base610->_M_impl) + 0);
          int* t612 = base611->_M_start;
          int* r613 = int__std__copy_int___int__(t608, t609, t612);
          std__vector_int__std__allocator_int______M_erase_at_end(t549, r613);
        } else {
          int* __mid614;
          unsigned long __n615;
          int* t616 = __first544;
          __mid614 = t616;
          unsigned long t617 = __sz547;
          void_std__advance_int___unsigned_long_(&__mid614, t617);
          int* t618 = __first544;
          int* t619 = __mid614;
          struct std___Vector_base_int__std__allocator_int__* base620 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base621 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base620->_M_impl) + 0);
          int* t622 = base621->_M_start;
          int* r623 = int__std__copy_int___int__(t618, t619, t622);
          unsigned long t624 = __len548;
          unsigned long t625 = __sz547;
          unsigned long b626 = t624 - t625;
          __n615 = b626;
          int* t627 = __mid614;
          int* t628 = __last545;
          struct std___Vector_base_int__std__allocator_int__* base629 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base630 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base629->_M_impl) + 0);
          int* t631 = base630->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base632 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
          struct std__allocator_int_* r633 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base632);
          int* r634 = int__std____uninitialized_copy_a_int___int___int___int_(t627, t628, t631, r633);
          struct std___Vector_base_int__std__allocator_int__* base635 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t549 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base636 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base635->_M_impl) + 0);
          base636->_M_finish = r634;
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6assignIPivEEvT_S4_
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* v637, int* v638, int* v639) {
bb640: ;
  struct std__vector_int__std__allocator_int__* this641;
  int* __first642;
  int* __last643;
  struct std__forward_iterator_tag agg_tmp0644;
  struct std__random_access_iterator_tag ref_tmp0645;
  this641 = v637;
  __first642 = v638;
  __last643 = v639;
  struct std__vector_int__std__allocator_int__* t646 = this641;
  int* t647 = __first642;
  int* t648 = __last643;
  struct std__random_access_iterator_tag r649 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first642);
  ref_tmp0645 = r649;
  struct std__forward_iterator_tag* base650 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp0645) + 0);
  struct std__forward_iterator_tag t651 = agg_tmp0644;
  void_std__vector_int__std__allocator_int______M_assign_aux_int__(t646, t647, t648, t651);
  return;
}

// function: _Z17unique_copy_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_PFbiiEET0_T_SA_S9_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v652, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v653, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v654, void* v655) {
bb656: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first657;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last658;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest659;
  void* pred660;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval661;
  first657 = v652;
  last658 = v653;
  dest659 = v654;
  pred660 = v655;
  abort();
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v662) {
bb663: ;
  struct std___Vector_base_int__std__allocator_int__* this664;
  struct std__allocator_int_* __retval665;
  this664 = v662;
  struct std___Vector_base_int__std__allocator_int__* t666 = this664;
  struct std__allocator_int_* base667 = (struct std__allocator_int_*)((char *)&(t666->_M_impl) + 0);
  __retval665 = base667;
  struct std__allocator_int_* t668 = __retval665;
  return t668;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v669) {
bb670: ;
  struct std__vector_int__std__allocator_int__* this671;
  unsigned long __retval672;
  this671 = v669;
  struct std__vector_int__std__allocator_int__* t673 = this671;
  struct std___Vector_base_int__std__allocator_int__* base674 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t673 + 0);
  struct std__allocator_int_* r675 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base674);
  unsigned long r676 = std__vector_int__std__allocator_int______S_max_size(r675);
  __retval672 = r676;
  unsigned long t677 = __retval672;
  return t677;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v678, unsigned long* v679) {
bb680: ;
  unsigned long* __a681;
  unsigned long* __b682;
  unsigned long* __retval683;
  __a681 = v678;
  __b682 = v679;
    unsigned long* t684 = __a681;
    unsigned long t685 = *t684;
    unsigned long* t686 = __b682;
    unsigned long t687 = *t686;
    _Bool c688 = ((t685 < t687)) ? 1 : 0;
    if (c688) {
      unsigned long* t689 = __b682;
      __retval683 = t689;
      unsigned long* t690 = __retval683;
      return t690;
    }
  unsigned long* t691 = __a681;
  __retval683 = t691;
  unsigned long* t692 = __retval683;
  return t692;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v693, unsigned long v694, char* v695) {
bb696: ;
  struct std__vector_int__std__allocator_int__* this697;
  unsigned long __n698;
  char* __s699;
  unsigned long __retval700;
  unsigned long __len701;
  unsigned long ref_tmp0702;
  this697 = v693;
  __n698 = v694;
  __s699 = v695;
  struct std__vector_int__std__allocator_int__* t703 = this697;
    unsigned long r704 = std__vector_int__std__allocator_int_____max_size___const(t703);
    unsigned long r705 = std__vector_int__std__allocator_int_____size___const(t703);
    unsigned long b706 = r704 - r705;
    unsigned long t707 = __n698;
    _Bool c708 = ((b706 < t707)) ? 1 : 0;
    if (c708) {
      char* t709 = __s699;
      std____throw_length_error(t709);
    }
  unsigned long r710 = std__vector_int__std__allocator_int_____size___const(t703);
  unsigned long r711 = std__vector_int__std__allocator_int_____size___const(t703);
  ref_tmp0702 = r711;
  unsigned long* r712 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0702, &__n698);
  unsigned long t713 = *r712;
  unsigned long b714 = r710 + t713;
  __len701 = b714;
  unsigned long t715 = __len701;
  unsigned long r716 = std__vector_int__std__allocator_int_____size___const(t703);
  _Bool c717 = ((t715 < r716)) ? 1 : 0;
  _Bool ternary718;
  if (c717) {
    _Bool c719 = 1;
    ternary718 = (_Bool)c719;
  } else {
    unsigned long t720 = __len701;
    unsigned long r721 = std__vector_int__std__allocator_int_____max_size___const(t703);
    _Bool c722 = ((t720 > r721)) ? 1 : 0;
    ternary718 = (_Bool)c722;
  }
  unsigned long ternary723;
  if (ternary718) {
    unsigned long r724 = std__vector_int__std__allocator_int_____max_size___const(t703);
    ternary723 = (unsigned long)r724;
  } else {
    unsigned long t725 = __len701;
    ternary723 = (unsigned long)t725;
  }
  __retval700 = ternary723;
  unsigned long t726 = __retval700;
  return t726;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v727, int** v728) {
bb729: ;
  struct __gnu_cxx____normal_iterator_int____void_* this730;
  int** __i731;
  this730 = v727;
  __i731 = v728;
  struct __gnu_cxx____normal_iterator_int____void_* t732 = this730;
  int** t733 = __i731;
  int* t734 = *t733;
  t732->_M_current = t734;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v735, int* v736) {
bb737: ;
  int* __location738;
  int* __args739;
  int* __retval740;
  void* __loc741;
  __location738 = v735;
  __args739 = v736;
  int* t742 = __location738;
  void* cast743 = (void*)t742;
  __loc741 = cast743;
    void* t744 = __loc741;
    int* cast745 = (int*)t744;
    int* t746 = __args739;
    int t747 = *t746;
    *cast745 = t747;
    __retval740 = cast745;
    int* t748 = __retval740;
    return t748;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v749, int* v750, int* v751) {
bb752: ;
  struct std__allocator_int_* __a753;
  int* __p754;
  int* __args755;
  __a753 = v749;
  __p754 = v750;
  __args755 = v751;
  int* t756 = __p754;
  int* t757 = __args755;
  int* r758 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t756, t757);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v759, int* v760) {
bb761: ;
  struct std__allocator_int_* __a762;
  int* __p763;
  __a762 = v759;
  __p763 = v760;
  int* t764 = __p763;
  void_std__destroy_at_int_(t764);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v765, int* v766, struct std__allocator_int_* v767) {
bb768: ;
  int* __dest769;
  int* __orig770;
  struct std__allocator_int_* __alloc771;
  __dest769 = v765;
  __orig770 = v766;
  __alloc771 = v767;
  struct std__allocator_int_* t772 = __alloc771;
  int* t773 = __dest769;
  int* t774 = __orig770;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t772, t773, t774);
  struct std__allocator_int_* t775 = __alloc771;
  int* t776 = __orig770;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t775, t776);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v777) {
bb778: ;
  struct __gnu_cxx____normal_iterator_int____void_* this779;
  int* __retval780;
  this779 = v777;
  struct __gnu_cxx____normal_iterator_int____void_* t781 = this779;
  int* t782 = t781->_M_current;
  __retval780 = t782;
  int* t783 = __retval780;
  return t783;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v784) {
bb785: ;
  struct __gnu_cxx____normal_iterator_int____void_* this786;
  struct __gnu_cxx____normal_iterator_int____void_* __retval787;
  this786 = v784;
  struct __gnu_cxx____normal_iterator_int____void_* t788 = this786;
  int* t789 = t788->_M_current;
  int c790 = 1;
  int* ptr791 = &(t789)[c790];
  t788->_M_current = ptr791;
  __retval787 = t788;
  struct __gnu_cxx____normal_iterator_int____void_* t792 = __retval787;
  return t792;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v793, int* v794, struct __gnu_cxx____normal_iterator_int____void_ v795, struct std__allocator_int_* v796) {
bb797: ;
  int* __first798;
  int* __last799;
  struct __gnu_cxx____normal_iterator_int____void_ __result800;
  struct std__allocator_int_* __alloc801;
  struct __gnu_cxx____normal_iterator_int____void_ __retval802;
  __first798 = v793;
  __last799 = v794;
  __result800 = v795;
  __alloc801 = v796;
  __retval802 = __result800; // copy
    while (1) {
      int* t804 = __first798;
      int* t805 = __last799;
      _Bool c806 = ((t804 != t805)) ? 1 : 0;
      if (!c806) break;
      int* r807 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval802);
      int* t808 = __first798;
      struct std__allocator_int_* t809 = __alloc801;
      void_std____relocate_object_a_int__int__std__allocator_int___(r807, t808, t809);
    for_step803: ;
      int* t810 = __first798;
      int c811 = 1;
      int* ptr812 = &(t810)[c811];
      __first798 = ptr812;
      struct __gnu_cxx____normal_iterator_int____void_* r813 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval802);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t814 = __retval802;
  return t814;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v815, struct __gnu_cxx____normal_iterator_int____void_* v816) {
bb817: ;
  struct __gnu_cxx____normal_iterator_int____void_* this818;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed819;
  struct __gnu_cxx____normal_iterator_int____void_* __retval820;
  this818 = v815;
  unnamed819 = v816;
  struct __gnu_cxx____normal_iterator_int____void_* t821 = this818;
  struct __gnu_cxx____normal_iterator_int____void_* t822 = unnamed819;
  int* t823 = t822->_M_current;
  t821->_M_current = t823;
  __retval820 = t821;
  struct __gnu_cxx____normal_iterator_int____void_* t824 = __retval820;
  return t824;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v825) {
bb826: ;
  struct __gnu_cxx____normal_iterator_int____void_* this827;
  int** __retval828;
  this827 = v825;
  struct __gnu_cxx____normal_iterator_int____void_* t829 = this827;
  __retval828 = &t829->_M_current;
  int** t830 = __retval828;
  return t830;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v831, int* v832, int* v833, struct std__allocator_int_* v834) {
bb835: ;
  int* __first836;
  int* __last837;
  int* __result838;
  struct std__allocator_int_* __alloc839;
  int* __retval840;
  long __count841;
  __first836 = v831;
  __last837 = v832;
  __result838 = v833;
  __alloc839 = v834;
  int* t842 = __last837;
  int* t843 = __first836;
  long diff844 = t842 - t843;
  __count841 = diff844;
    long t845 = __count841;
    long c846 = 0;
    _Bool c847 = ((t845 > c846)) ? 1 : 0;
    if (c847) {
        _Bool r848 = std__is_constant_evaluated();
        if (r848) {
          struct __gnu_cxx____normal_iterator_int____void_ __out849;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0850;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0851;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out849, &__result838);
          int* t852 = __first836;
          int* t853 = __last837;
          agg_tmp0851 = __out849; // copy
          struct std__allocator_int_* t854 = __alloc839;
          struct __gnu_cxx____normal_iterator_int____void_ t855 = agg_tmp0851;
          struct __gnu_cxx____normal_iterator_int____void_ r856 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t852, t853, t855, t854);
          ref_tmp0850 = r856;
          struct __gnu_cxx____normal_iterator_int____void_* r857 = __gnu_cxx____normal_iterator_int___void___operator_(&__out849, &ref_tmp0850);
          int** r858 = __gnu_cxx____normal_iterator_int___void___base___const(&__out849);
          int* t859 = *r858;
          __retval840 = t859;
          int* t860 = __retval840;
          return t860;
        }
      int* t861 = __result838;
      void* cast862 = (void*)t861;
      int* t863 = __first836;
      void* cast864 = (void*)t863;
      long t865 = __count841;
      unsigned long cast866 = (unsigned long)t865;
      unsigned long c867 = 4;
      unsigned long b868 = cast866 * c867;
      void* r869 = memcpy(cast862, cast864, b868);
    }
  int* t870 = __result838;
  long t871 = __count841;
  int* ptr872 = &(t870)[t871];
  __retval840 = ptr872;
  int* t873 = __retval840;
  return t873;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v874, int* v875, int* v876, struct std__allocator_int_* v877) {
bb878: ;
  int* __first879;
  int* __last880;
  int* __result881;
  struct std__allocator_int_* __alloc882;
  int* __retval883;
  __first879 = v874;
  __last880 = v875;
  __result881 = v876;
  __alloc882 = v877;
  int* t884 = __first879;
  int* r885 = int__std____niter_base_int__(t884);
  int* t886 = __last880;
  int* r887 = int__std____niter_base_int__(t886);
  int* t888 = __result881;
  int* r889 = int__std____niter_base_int__(t888);
  struct std__allocator_int_* t890 = __alloc882;
  int* r891 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r885, r887, r889, t890);
  __retval883 = r891;
  int* t892 = __retval883;
  return t892;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v893, int* v894, int* v895, struct std__allocator_int_* v896) {
bb897: ;
  int* __first898;
  int* __last899;
  int* __result900;
  struct std__allocator_int_* __alloc901;
  int* __retval902;
  __first898 = v893;
  __last899 = v894;
  __result900 = v895;
  __alloc901 = v896;
  int* t903 = __first898;
  int* t904 = __last899;
  int* t905 = __result900;
  struct std__allocator_int_* t906 = __alloc901;
  int* r907 = int__std____relocate_a_int___int___std__allocator_int___(t903, t904, t905, t906);
  __retval902 = r907;
  int* t908 = __retval902;
  return t908;
}

// function: _ZNSt6vectorIiSaIiEE17_M_default_appendEm
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* v909, unsigned long v910) {
bb911: ;
  struct std__vector_int__std__allocator_int__* this912;
  unsigned long __n913;
  this912 = v909;
  __n913 = v910;
  struct std__vector_int__std__allocator_int__* t914 = this912;
    unsigned long t915 = __n913;
    unsigned long c916 = 0;
    _Bool c917 = ((t915 != c916)) ? 1 : 0;
    if (c917) {
      unsigned long __size918;
      unsigned long __navail919;
      unsigned long r920 = std__vector_int__std__allocator_int_____size___const(t914);
      __size918 = r920;
      struct std___Vector_base_int__std__allocator_int__* base921 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base922 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base921->_M_impl) + 0);
      int* t923 = base922->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base924 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base925 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base924->_M_impl) + 0);
      int* t926 = base925->_M_finish;
      long diff927 = t923 - t926;
      unsigned long cast928 = (unsigned long)diff927;
      __navail919 = cast928;
        unsigned long t929 = __size918;
        unsigned long r930 = std__vector_int__std__allocator_int_____max_size___const(t914);
        _Bool c931 = ((t929 > r930)) ? 1 : 0;
        _Bool ternary932;
        if (c931) {
          _Bool c933 = 1;
          ternary932 = (_Bool)c933;
        } else {
          unsigned long t934 = __navail919;
          unsigned long r935 = std__vector_int__std__allocator_int_____max_size___const(t914);
          unsigned long t936 = __size918;
          unsigned long b937 = r935 - t936;
          _Bool c938 = ((t934 > b937)) ? 1 : 0;
          ternary932 = (_Bool)c938;
        }
        if (ternary932) {
          __builtin_unreachable();
        }
        unsigned long t939 = __navail919;
        unsigned long t940 = __n913;
        _Bool c941 = ((t939 >= t940)) ? 1 : 0;
        if (c941) {
            struct std___Vector_base_int__std__allocator_int__* base942 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base943 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base942->_M_impl) + 0);
            int* t944 = base943->_M_finish;
            _Bool cast945 = (_Bool)t944;
            _Bool u946 = !cast945;
            if (u946) {
              __builtin_unreachable();
            }
          struct std___Vector_base_int__std__allocator_int__* base947 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base948 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base947->_M_impl) + 0);
          int* t949 = base948->_M_finish;
          unsigned long t950 = __n913;
          struct std___Vector_base_int__std__allocator_int__* base951 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
          struct std__allocator_int_* r952 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base951);
          int* r953 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t949, t950, r952);
          struct std___Vector_base_int__std__allocator_int__* base954 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base955 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base954->_M_impl) + 0);
          base955->_M_finish = r953;
        } else {
          int* __old_start956;
          int* __old_finish957;
          unsigned long __len958;
          int* __new_start959;
          struct std___Vector_base_int__std__allocator_int__* base960 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base961 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base960->_M_impl) + 0);
          int* t962 = base961->_M_start;
          __old_start956 = t962;
          struct std___Vector_base_int__std__allocator_int__* base963 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base964 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base963->_M_impl) + 0);
          int* t965 = base964->_M_finish;
          __old_finish957 = t965;
          unsigned long t966 = __n913;
          char* cast967 = (char*)&(_str_3);
          unsigned long r968 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t914, t966, cast967);
          __len958 = r968;
          struct std___Vector_base_int__std__allocator_int__* base969 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
          unsigned long t970 = __len958;
          int* r971 = std___Vector_base_int__std__allocator_int______M_allocate(base969, t970);
          __new_start959 = r971;
            struct std__vector_int__std__allocator_int_____Guard_alloc __guard972;
            int* t973 = __new_start959;
            unsigned long t974 = __len958;
            struct std___Vector_base_int__std__allocator_int__* base975 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
            std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard972, t973, t974, base975);
              int* t976 = __new_start959;
              unsigned long t977 = __size918;
              int* ptr978 = &(t976)[t977];
              unsigned long t979 = __n913;
              struct std___Vector_base_int__std__allocator_int__* base980 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
              struct std__allocator_int_* r981 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base980);
              int* r982 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(ptr978, t979, r981);
                int* t983 = __old_start956;
                int* t984 = __old_finish957;
                int* t985 = __new_start959;
                struct std___Vector_base_int__std__allocator_int__* base986 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
                struct std__allocator_int_* r987 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base986);
                int* r988 = std__vector_int__std__allocator_int______S_relocate(t983, t984, t985, r987);
              int* t989 = __old_start956;
              __guard972._M_storage = t989;
              struct std___Vector_base_int__std__allocator_int__* base990 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base991 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base990->_M_impl) + 0);
              int* t992 = base991->_M_end_of_storage;
              int* t993 = __old_start956;
              long diff994 = t992 - t993;
              unsigned long cast995 = (unsigned long)diff994;
              __guard972._M_len = cast995;
            {
              std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard972);
            }
          int* t996 = __new_start959;
          struct std___Vector_base_int__std__allocator_int__* base997 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base998 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base997->_M_impl) + 0);
          base998->_M_start = t996;
          int* t999 = __new_start959;
          unsigned long t1000 = __size918;
          int* ptr1001 = &(t999)[t1000];
          unsigned long t1002 = __n913;
          int* ptr1003 = &(ptr1001)[t1002];
          struct std___Vector_base_int__std__allocator_int__* base1004 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1005 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1004->_M_impl) + 0);
          base1005->_M_finish = ptr1003;
          int* t1006 = __new_start959;
          unsigned long t1007 = __len958;
          int* ptr1008 = &(t1006)[t1007];
          struct std___Vector_base_int__std__allocator_int__* base1009 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t914 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1010 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1009->_M_impl) + 0);
          base1010->_M_end_of_storage = ptr1008;
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEm
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* v1011, unsigned long v1012) {
bb1013: ;
  struct std__vector_int__std__allocator_int__* this1014;
  unsigned long __new_size1015;
  this1014 = v1011;
  __new_size1015 = v1012;
  struct std__vector_int__std__allocator_int__* t1016 = this1014;
    unsigned long t1017 = __new_size1015;
    unsigned long r1018 = std__vector_int__std__allocator_int_____size___const(t1016);
    _Bool c1019 = ((t1017 > r1018)) ? 1 : 0;
    if (c1019) {
      unsigned long t1020 = __new_size1015;
      unsigned long r1021 = std__vector_int__std__allocator_int_____size___const(t1016);
      unsigned long b1022 = t1020 - r1021;
      std__vector_int__std__allocator_int______M_default_append(t1016, b1022);
    } else {
        unsigned long t1023 = __new_size1015;
        unsigned long r1024 = std__vector_int__std__allocator_int_____size___const(t1016);
        _Bool c1025 = ((t1023 < r1024)) ? 1 : 0;
        if (c1025) {
          struct std___Vector_base_int__std__allocator_int__* base1026 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1016 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1027 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1026->_M_impl) + 0);
          int* t1028 = base1027->_M_start;
          unsigned long t1029 = __new_size1015;
          int* ptr1030 = &(t1028)[t1029];
          std__vector_int__std__allocator_int______M_erase_at_end(t1016, ptr1030);
        }
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1031) {
bb1032: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1033;
  int** __retval1034;
  this1033 = v1031;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1035 = this1033;
  __retval1034 = &t1035->_M_current;
  int** t1036 = __retval1034;
  return t1036;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1037, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1038) {
bb1039: ;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1040;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1041;
  long __retval1042;
  __lhs1040 = v1037;
  __rhs1041 = v1038;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1043 = __lhs1040;
  int** r1044 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1043);
  int* t1045 = *r1044;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1046 = __rhs1041;
  int** r1047 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1046);
  int* t1048 = *r1047;
  long diff1049 = t1045 - t1048;
  __retval1042 = diff1049;
  long t1050 = __retval1042;
  return t1050;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1051, void* v1052) {
bb1053: ;
  struct std__basic_ostream_char__std__char_traits_char__* this1054;
  void* __pf1055;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1056;
  this1054 = v1051;
  __pf1055 = v1052;
  struct std__basic_ostream_char__std__char_traits_char__* t1057 = this1054;
  void* t1058 = __pf1055;
  struct std__basic_ostream_char__std__char_traits_char__* r1059 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1058)(t1057);
  __retval1056 = r1059;
  struct std__basic_ostream_char__std__char_traits_char__* t1060 = __retval1056;
  return t1060;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1061) {
bb1062: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1063;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1064;
  __os1063 = v1061;
  struct std__basic_ostream_char__std__char_traits_char__* t1065 = __os1063;
  struct std__basic_ostream_char__std__char_traits_char__* r1066 = std__ostream__flush(t1065);
  __retval1064 = r1066;
  struct std__basic_ostream_char__std__char_traits_char__* t1067 = __retval1064;
  return t1067;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1068) {
bb1069: ;
  struct std__ctype_char_* __f1070;
  struct std__ctype_char_* __retval1071;
  __f1070 = v1068;
    struct std__ctype_char_* t1072 = __f1070;
    _Bool cast1073 = (_Bool)t1072;
    _Bool u1074 = !cast1073;
    if (u1074) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1075 = __f1070;
  __retval1071 = t1075;
  struct std__ctype_char_* t1076 = __retval1071;
  return t1076;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1077, char v1078) {
bb1079: ;
  struct std__ctype_char_* this1080;
  char __c1081;
  char __retval1082;
  this1080 = v1077;
  __c1081 = v1078;
  struct std__ctype_char_* t1083 = this1080;
    char t1084 = t1083->_M_widen_ok;
    _Bool cast1085 = (_Bool)t1084;
    if (cast1085) {
      char t1086 = __c1081;
      unsigned char cast1087 = (unsigned char)t1086;
      unsigned long cast1088 = (unsigned long)cast1087;
      char t1089 = t1083->_M_widen[cast1088];
      __retval1082 = t1089;
      char t1090 = __retval1082;
      return t1090;
    }
  std__ctype_char____M_widen_init___const(t1083);
  char t1091 = __c1081;
  void** v1092 = (void**)t1083;
  void* v1093 = *((void**)v1092);
  char vcall1096 = (char)__VERIFIER_virtual_call_char_char(t1083, 6, t1091);
  __retval1082 = vcall1096;
  char t1097 = __retval1082;
  return t1097;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1098, char v1099) {
bb1100: ;
  struct std__basic_ios_char__std__char_traits_char__* this1101;
  char __c1102;
  char __retval1103;
  this1101 = v1098;
  __c1102 = v1099;
  struct std__basic_ios_char__std__char_traits_char__* t1104 = this1101;
  struct std__ctype_char_* t1105 = t1104->_M_ctype;
  struct std__ctype_char_* r1106 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1105);
  char t1107 = __c1102;
  char r1108 = std__ctype_char___widen_char__const(r1106, t1107);
  __retval1103 = r1108;
  char t1109 = __retval1103;
  return t1109;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1110) {
bb1111: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os1112;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1113;
  __os1112 = v1110;
  struct std__basic_ostream_char__std__char_traits_char__* t1114 = __os1112;
  struct std__basic_ostream_char__std__char_traits_char__* t1115 = __os1112;
  void** v1116 = (void**)t1115;
  void* v1117 = *((void**)v1116);
  unsigned char* cast1118 = (unsigned char*)v1117;
  long c1119 = -24;
  unsigned char* ptr1120 = &(cast1118)[c1119];
  long* cast1121 = (long*)ptr1120;
  long t1122 = *cast1121;
  unsigned char* cast1123 = (unsigned char*)t1115;
  unsigned char* ptr1124 = &(cast1123)[t1122];
  struct std__basic_ostream_char__std__char_traits_char__* cast1125 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1124;
  struct std__basic_ios_char__std__char_traits_char__* cast1126 = (struct std__basic_ios_char__std__char_traits_char__*)cast1125;
  char c1127 = 10;
  char r1128 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1126, c1127);
  struct std__basic_ostream_char__std__char_traits_char__* r1129 = std__ostream__put(t1114, r1128);
  struct std__basic_ostream_char__std__char_traits_char__* r1130 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1129);
  __retval1113 = r1130;
  struct std__basic_ostream_char__std__char_traits_char__* t1131 = __retval1113;
  return t1131;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1132) {
bb1133: ;
  struct std__vector_int__std__allocator_int__* this1134;
  this1134 = v1132;
  struct std__vector_int__std__allocator_int__* t1135 = this1134;
    struct std___Vector_base_int__std__allocator_int__* base1136 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1135 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1137 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1136->_M_impl) + 0);
    int* t1138 = base1137->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1139 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1135 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1140 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1139->_M_impl) + 0);
    int* t1141 = base1140->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1142 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1135 + 0);
    struct std__allocator_int_* r1143 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1142);
    void_std___Destroy_int___int_(t1138, t1141, r1143);
  {
    struct std___Vector_base_int__std__allocator_int__* base1144 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1135 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1144);
  }
  return;
}

// function: main
int main() {
bb1145: ;
  int __retval1146;
  int myints1147[9];
  int myints11148[9];
  struct std__vector_int__std__allocator_int__ myvector1149;
  struct std__allocator_int_ ref_tmp01150;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11152;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21154;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11155;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21156;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31157;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31158;
  int c1159 = 0;
  __retval1146 = c1159;
  // array copy
  __builtin_memcpy(myints1147, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints11148, __const_main_myints1, (unsigned long)9 * sizeof(__const_main_myints1[0]));
  unsigned long c1160 = 9;
  std__allocator_int___allocator_2(&ref_tmp01150);
    std__vector_int__std__allocator_int_____vector(&myvector1149, c1160, &ref_tmp01150);
  {
    std__allocator_int____allocator(&ref_tmp01150);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1151);
    int* cast1161 = (int*)&(myints1147);
    int* cast1162 = (int*)&(myints1147);
    int c1163 = 9;
    int* ptr1164 = &(cast1162)[c1163];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1165 = std__vector_int__std__allocator_int_____begin(&myvector1149);
    agg_tmp01153 = r1165;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1166 = agg_tmp01153;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1167 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast1161, ptr1164, t1166);
    ref_tmp11152 = r1167;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1168 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1151, &ref_tmp11152);
    int* r1169 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1151);
    int t1170 = *r1169;
    int c1171 = 0;
    _Bool c1172 = ((t1170 == c1171)) ? 1 : 0;
    if (c1172) {
    } else {
      char* cast1173 = (char*)&(_str);
      char* c1174 = (char*)_str_1;
      unsigned int c1175 = 63;
      char* cast1176 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1173, c1174, c1175, cast1176);
    }
    int* cast1177 = (int*)&(myints11148);
    int* cast1178 = (int*)&(myints11148);
    int c1179 = 9;
    int* ptr1180 = &(cast1178)[c1179];
    void_std__vector_int__std__allocator_int_____assign_int___void_(&myvector1149, cast1177, ptr1180);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1181 = std__vector_int__std__allocator_int_____begin(&myvector1149);
    agg_tmp11155 = r1181;
    agg_tmp21156 = it1151; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1182 = std__vector_int__std__allocator_int_____begin(&myvector1149);
    agg_tmp31157 = r1182;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1183 = agg_tmp11155;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1184 = agg_tmp21156;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1185 = agg_tmp31157;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1186 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______unique_copy_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t1183, t1184, t1185, &myfunction);
    ref_tmp21154 = r1186;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1187 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1151, &ref_tmp21154);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1188 = std__vector_int__std__allocator_int_____begin(&myvector1149);
    ref_tmp31158 = r1188;
    long r1189 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&it1151, &ref_tmp31158);
    unsigned long cast1190 = (unsigned long)r1189;
    std__vector_int__std__allocator_int_____resize(&myvector1149, cast1190);
    struct std__basic_ostream_char__std__char_traits_char__* r1191 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1192 = 0;
    __retval1146 = c1192;
    int t1193 = __retval1146;
    int ret_val1194 = t1193;
    {
      std__vector_int__std__allocator_int______vector(&myvector1149);
    }
    return ret_val1194;
  int t1195 = __retval1146;
  return t1195;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1196) {
bb1197: ;
  struct std____new_allocator_int_* this1198;
  this1198 = v1196;
  struct std____new_allocator_int_* t1199 = this1198;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1200, unsigned long* v1201) {
bb1202: ;
  unsigned long* __a1203;
  unsigned long* __b1204;
  unsigned long* __retval1205;
  __a1203 = v1200;
  __b1204 = v1201;
    unsigned long* t1206 = __b1204;
    unsigned long t1207 = *t1206;
    unsigned long* t1208 = __a1203;
    unsigned long t1209 = *t1208;
    _Bool c1210 = ((t1207 < t1209)) ? 1 : 0;
    if (c1210) {
      unsigned long* t1211 = __b1204;
      __retval1205 = t1211;
      unsigned long* t1212 = __retval1205;
      return t1212;
    }
  unsigned long* t1213 = __a1203;
  __retval1205 = t1213;
  unsigned long* t1214 = __retval1205;
  return t1214;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1215) {
bb1216: ;
  struct std__allocator_int_* __a1217;
  unsigned long __retval1218;
  unsigned long __diffmax1219;
  unsigned long __allocmax1220;
  __a1217 = v1215;
  unsigned long c1221 = 2305843009213693951;
  __diffmax1219 = c1221;
  unsigned long c1222 = 4611686018427387903;
  __allocmax1220 = c1222;
  unsigned long* r1223 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1219, &__allocmax1220);
  unsigned long t1224 = *r1223;
  __retval1218 = t1224;
  unsigned long t1225 = __retval1218;
  return t1225;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1226, struct std__allocator_int_* v1227) {
bb1228: ;
  struct std__allocator_int_* this1229;
  struct std__allocator_int_* __a1230;
  this1229 = v1226;
  __a1230 = v1227;
  struct std__allocator_int_* t1231 = this1229;
  struct std____new_allocator_int_* base1232 = (struct std____new_allocator_int_*)((char *)t1231 + 0);
  struct std__allocator_int_* t1233 = __a1230;
  struct std____new_allocator_int_* base1234 = (struct std____new_allocator_int_*)((char *)t1233 + 0);
  std____new_allocator_int_____new_allocator(base1232, base1234);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1235, struct std__allocator_int_* v1236) {
bb1237: ;
  unsigned long __n1238;
  struct std__allocator_int_* __a1239;
  unsigned long __retval1240;
  __n1238 = v1235;
  __a1239 = v1236;
    struct std__allocator_int_ ref_tmp01241;
    _Bool tmp_exprcleanup1242;
    unsigned long t1243 = __n1238;
    struct std__allocator_int_* t1244 = __a1239;
    std__allocator_int___allocator(&ref_tmp01241, t1244);
      unsigned long r1245 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01241);
      _Bool c1246 = ((t1243 > r1245)) ? 1 : 0;
      tmp_exprcleanup1242 = c1246;
    {
      std__allocator_int____allocator(&ref_tmp01241);
    }
    _Bool t1247 = tmp_exprcleanup1242;
    if (t1247) {
      char* cast1248 = (char*)&(_str_2);
      std____throw_length_error(cast1248);
    }
  unsigned long t1249 = __n1238;
  __retval1240 = t1249;
  unsigned long t1250 = __retval1240;
  return t1250;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1251, struct std__allocator_int_* v1252) {
bb1253: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1254;
  struct std__allocator_int_* __a1255;
  this1254 = v1251;
  __a1255 = v1252;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1256 = this1254;
  struct std__allocator_int_* base1257 = (struct std__allocator_int_*)((char *)t1256 + 0);
  struct std__allocator_int_* t1258 = __a1255;
  std__allocator_int___allocator(base1257, t1258);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1259 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1256 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1259);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1260: ;
  _Bool __retval1261;
    _Bool c1262 = 0;
    __retval1261 = c1262;
    _Bool t1263 = __retval1261;
    return t1263;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1264) {
bb1265: ;
  struct std____new_allocator_int_* this1266;
  unsigned long __retval1267;
  this1266 = v1264;
  struct std____new_allocator_int_* t1268 = this1266;
  unsigned long c1269 = 9223372036854775807;
  unsigned long c1270 = 4;
  unsigned long b1271 = c1269 / c1270;
  __retval1267 = b1271;
  unsigned long t1272 = __retval1267;
  return t1272;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1273, unsigned long v1274, void* v1275) {
bb1276: ;
  struct std____new_allocator_int_* this1277;
  unsigned long __n1278;
  void* unnamed1279;
  int* __retval1280;
  this1277 = v1273;
  __n1278 = v1274;
  unnamed1279 = v1275;
  struct std____new_allocator_int_* t1281 = this1277;
    unsigned long t1282 = __n1278;
    unsigned long r1283 = std____new_allocator_int____M_max_size___const(t1281);
    _Bool c1284 = ((t1282 > r1283)) ? 1 : 0;
    if (c1284) {
        unsigned long t1285 = __n1278;
        unsigned long c1286 = -1;
        unsigned long c1287 = 4;
        unsigned long b1288 = c1286 / c1287;
        _Bool c1289 = ((t1285 > b1288)) ? 1 : 0;
        if (c1289) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1290 = 4;
    unsigned long c1291 = 16;
    _Bool c1292 = ((c1290 > c1291)) ? 1 : 0;
    if (c1292) {
      unsigned long __al1293;
      unsigned long c1294 = 4;
      __al1293 = c1294;
      unsigned long t1295 = __n1278;
      unsigned long c1296 = 4;
      unsigned long b1297 = t1295 * c1296;
      unsigned long t1298 = __al1293;
      void* r1299 = operator_new_2(b1297, t1298);
      int* cast1300 = (int*)r1299;
      __retval1280 = cast1300;
      int* t1301 = __retval1280;
      return t1301;
    }
  unsigned long t1302 = __n1278;
  unsigned long c1303 = 4;
  unsigned long b1304 = t1302 * c1303;
  void* r1305 = operator_new(b1304);
  int* cast1306 = (int*)r1305;
  __retval1280 = cast1306;
  int* t1307 = __retval1280;
  return t1307;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1308, unsigned long v1309) {
bb1310: ;
  struct std__allocator_int_* this1311;
  unsigned long __n1312;
  int* __retval1313;
  this1311 = v1308;
  __n1312 = v1309;
  struct std__allocator_int_* t1314 = this1311;
    _Bool r1315 = std____is_constant_evaluated();
    if (r1315) {
        unsigned long t1316 = __n1312;
        unsigned long c1317 = 4;
        unsigned long ovr1318;
        _Bool ovf1319 = __builtin_mul_overflow(t1316, c1317, &ovr1318);
        __n1312 = ovr1318;
        if (ovf1319) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1320 = __n1312;
      void* r1321 = operator_new(t1320);
      int* cast1322 = (int*)r1321;
      __retval1313 = cast1322;
      int* t1323 = __retval1313;
      return t1323;
    }
  struct std____new_allocator_int_* base1324 = (struct std____new_allocator_int_*)((char *)t1314 + 0);
  unsigned long t1325 = __n1312;
  void* c1326 = ((void*)0);
  int* r1327 = std____new_allocator_int___allocate(base1324, t1325, c1326);
  __retval1313 = r1327;
  int* t1328 = __retval1313;
  return t1328;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1329, unsigned long v1330) {
bb1331: ;
  struct std__allocator_int_* __a1332;
  unsigned long __n1333;
  int* __retval1334;
  __a1332 = v1329;
  __n1333 = v1330;
  struct std__allocator_int_* t1335 = __a1332;
  unsigned long t1336 = __n1333;
  int* r1337 = std__allocator_int___allocate(t1335, t1336);
  __retval1334 = r1337;
  int* t1338 = __retval1334;
  return t1338;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1339, unsigned long v1340) {
bb1341: ;
  struct std___Vector_base_int__std__allocator_int__* this1342;
  unsigned long __n1343;
  int* __retval1344;
  this1342 = v1339;
  __n1343 = v1340;
  struct std___Vector_base_int__std__allocator_int__* t1345 = this1342;
  unsigned long t1346 = __n1343;
  unsigned long c1347 = 0;
  _Bool c1348 = ((t1346 != c1347)) ? 1 : 0;
  int* ternary1349;
  if (c1348) {
    struct std__allocator_int_* base1350 = (struct std__allocator_int_*)((char *)&(t1345->_M_impl) + 0);
    unsigned long t1351 = __n1343;
    int* r1352 = std__allocator_traits_std__allocator_int_____allocate(base1350, t1351);
    ternary1349 = (int*)r1352;
  } else {
    int* c1353 = ((void*)0);
    ternary1349 = (int*)c1353;
  }
  __retval1344 = ternary1349;
  int* t1354 = __retval1344;
  return t1354;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1355, unsigned long v1356) {
bb1357: ;
  struct std___Vector_base_int__std__allocator_int__* this1358;
  unsigned long __n1359;
  this1358 = v1355;
  __n1359 = v1356;
  struct std___Vector_base_int__std__allocator_int__* t1360 = this1358;
  unsigned long t1361 = __n1359;
  int* r1362 = std___Vector_base_int__std__allocator_int______M_allocate(t1360, t1361);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1363 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1360->_M_impl) + 0);
  base1363->_M_start = r1362;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1364 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1360->_M_impl) + 0);
  int* t1365 = base1364->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1366 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1360->_M_impl) + 0);
  base1366->_M_finish = t1365;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1367 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1360->_M_impl) + 0);
  int* t1368 = base1367->_M_start;
  unsigned long t1369 = __n1359;
  int* ptr1370 = &(t1368)[t1369];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1371 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1360->_M_impl) + 0);
  base1371->_M_end_of_storage = ptr1370;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1372) {
bb1373: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1374;
  this1374 = v1372;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1375 = this1374;
  {
    struct std__allocator_int_* base1376 = (struct std__allocator_int_*)((char *)t1375 + 0);
    std__allocator_int____allocator(base1376);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1377, unsigned long v1378, struct std__allocator_int_* v1379) {
bb1380: ;
  struct std___Vector_base_int__std__allocator_int__* this1381;
  unsigned long __n1382;
  struct std__allocator_int_* __a1383;
  this1381 = v1377;
  __n1382 = v1378;
  __a1383 = v1379;
  struct std___Vector_base_int__std__allocator_int__* t1384 = this1381;
  struct std__allocator_int_* t1385 = __a1383;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1384->_M_impl, t1385);
    unsigned long t1386 = __n1382;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1384, t1386);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1387: ;
  _Bool __retval1388;
    _Bool c1389 = 0;
    __retval1388 = c1389;
    _Bool t1390 = __retval1388;
    return t1390;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1391, int** v1392) {
bb1393: ;
  struct std___UninitDestroyGuard_int____void_* this1394;
  int** __first1395;
  this1394 = v1391;
  __first1395 = v1392;
  struct std___UninitDestroyGuard_int____void_* t1396 = this1394;
  int** t1397 = __first1395;
  int* t1398 = *t1397;
  t1396->_M_first = t1398;
  int** t1399 = __first1395;
  t1396->_M_cur = t1399;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1400) {
bb1401: ;
  int* __location1402;
  int* __retval1403;
  void* __loc1404;
  __location1402 = v1400;
  int* t1405 = __location1402;
  void* cast1406 = (void*)t1405;
  __loc1404 = cast1406;
    void* t1407 = __loc1404;
    int* cast1408 = (int*)t1407;
    int c1409 = 0;
    *cast1408 = c1409;
    __retval1403 = cast1408;
    int* t1410 = __retval1403;
    return t1410;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1411) {
bb1412: ;
  int* __p1413;
  __p1413 = v1411;
    _Bool r1414 = std____is_constant_evaluated();
    if (r1414) {
      int* t1415 = __p1413;
      int* r1416 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1415);
      return;
    }
  int* t1417 = __p1413;
  void* cast1418 = (void*)t1417;
  int* cast1419 = (int*)cast1418;
  int c1420 = 0;
  *cast1419 = c1420;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1421) {
bb1422: ;
  struct std___UninitDestroyGuard_int____void_* this1423;
  this1423 = v1421;
  struct std___UninitDestroyGuard_int____void_* t1424 = this1423;
  int** c1425 = ((void*)0);
  t1424->_M_cur = c1425;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1426) {
bb1427: ;
  struct std___UninitDestroyGuard_int____void_* this1428;
  this1428 = v1426;
  struct std___UninitDestroyGuard_int____void_* t1429 = this1428;
    int** t1430 = t1429->_M_cur;
    int** c1431 = ((void*)0);
    _Bool c1432 = ((t1430 != c1431)) ? 1 : 0;
    if (c1432) {
      int* t1433 = t1429->_M_first;
      int** t1434 = t1429->_M_cur;
      int* t1435 = *t1434;
      void_std___Destroy_int__(t1433, t1435);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v1436, unsigned long v1437) {
bb1438: ;
  int* __first1439;
  unsigned long __n1440;
  int* __retval1441;
  struct std___UninitDestroyGuard_int____void_ __guard1442;
  __first1439 = v1436;
  __n1440 = v1437;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1442, &__first1439);
      while (1) {
        unsigned long t1444 = __n1440;
        unsigned long c1445 = 0;
        _Bool c1446 = ((t1444 > c1445)) ? 1 : 0;
        if (!c1446) break;
        int* t1447 = __first1439;
        void_std___Construct_int_(t1447);
      for_step1443: ;
        unsigned long t1448 = __n1440;
        unsigned long u1449 = t1448 - 1;
        __n1440 = u1449;
        int* t1450 = __first1439;
        int c1451 = 1;
        int* ptr1452 = &(t1450)[c1451];
        __first1439 = ptr1452;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1442);
    int* t1453 = __first1439;
    __retval1441 = t1453;
    int* t1454 = __retval1441;
    int* ret_val1455 = t1454;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1442);
    }
    return ret_val1455;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1456, int* v1457, int* v1458) {
bb1459: ;
  int* __first1460;
  int* __last1461;
  int* __value1462;
  _Bool __load_outside_loop1463;
  int __val1464;
  __first1460 = v1456;
  __last1461 = v1457;
  __value1462 = v1458;
  _Bool c1465 = 1;
  __load_outside_loop1463 = c1465;
  int* t1466 = __value1462;
  int t1467 = *t1466;
  __val1464 = t1467;
    while (1) {
      int* t1469 = __first1460;
      int* t1470 = __last1461;
      _Bool c1471 = ((t1469 != t1470)) ? 1 : 0;
      if (!c1471) break;
      int t1472 = __val1464;
      int* t1473 = __first1460;
      *t1473 = t1472;
    for_step1468: ;
      int* t1474 = __first1460;
      int c1475 = 1;
      int* ptr1476 = &(t1474)[c1475];
      __first1460 = ptr1476;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1477, int* v1478, int* v1479) {
bb1480: ;
  int* __first1481;
  int* __last1482;
  int* __value1483;
  __first1481 = v1477;
  __last1482 = v1478;
  __value1483 = v1479;
  int* t1484 = __first1481;
  int* t1485 = __last1482;
  int* t1486 = __value1483;
  void_std____fill_a1_int___int_(t1484, t1485, t1486);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1487, unsigned long v1488, int* v1489, struct std__random_access_iterator_tag v1490) {
bb1491: ;
  int* __first1492;
  unsigned long __n1493;
  int* __value1494;
  struct std__random_access_iterator_tag unnamed1495;
  int* __retval1496;
  __first1492 = v1487;
  __n1493 = v1488;
  __value1494 = v1489;
  unnamed1495 = v1490;
    unsigned long t1497 = __n1493;
    unsigned long c1498 = 0;
    _Bool c1499 = ((t1497 <= c1498)) ? 1 : 0;
    if (c1499) {
      int* t1500 = __first1492;
      __retval1496 = t1500;
      int* t1501 = __retval1496;
      return t1501;
    }
  int* t1502 = __first1492;
  int* t1503 = __first1492;
  unsigned long t1504 = __n1493;
  int* ptr1505 = &(t1503)[t1504];
  int* t1506 = __value1494;
  void_std____fill_a_int___int_(t1502, ptr1505, t1506);
  int* t1507 = __first1492;
  unsigned long t1508 = __n1493;
  int* ptr1509 = &(t1507)[t1508];
  __retval1496 = ptr1509;
  int* t1510 = __retval1496;
  return t1510;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1511) {
bb1512: ;
  unsigned long __n1513;
  unsigned long __retval1514;
  __n1513 = v1511;
  unsigned long t1515 = __n1513;
  __retval1514 = t1515;
  unsigned long t1516 = __retval1514;
  return t1516;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1517) {
bb1518: ;
  int** unnamed1519;
  struct std__random_access_iterator_tag __retval1520;
  unnamed1519 = v1517;
  struct std__random_access_iterator_tag t1521 = __retval1520;
  return t1521;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1522, unsigned long v1523, int* v1524) {
bb1525: ;
  int* __first1526;
  unsigned long __n1527;
  int* __value1528;
  int* __retval1529;
  struct std__random_access_iterator_tag agg_tmp01530;
  __first1526 = v1522;
  __n1527 = v1523;
  __value1528 = v1524;
  int* t1531 = __first1526;
  unsigned long t1532 = __n1527;
  unsigned long r1533 = std____size_to_integer(t1532);
  int* t1534 = __value1528;
  struct std__random_access_iterator_tag r1535 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1526);
  agg_tmp01530 = r1535;
  struct std__random_access_iterator_tag t1536 = agg_tmp01530;
  int* r1537 = int__std____fill_n_a_int___unsigned_long__int_(t1531, r1533, t1534, t1536);
  __retval1529 = r1537;
  int* t1538 = __retval1529;
  return t1538;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1539, unsigned long v1540) {
bb1541: ;
  int* __first1542;
  unsigned long __n1543;
  int* __retval1544;
  __first1542 = v1539;
  __n1543 = v1540;
    unsigned long t1545 = __n1543;
    unsigned long c1546 = 0;
    _Bool c1547 = ((t1545 > c1546)) ? 1 : 0;
    if (c1547) {
      int* __val1548;
      int* t1549 = __first1542;
      __val1548 = t1549;
      int* t1550 = __val1548;
      void_std___Construct_int_(t1550);
      int* t1551 = __first1542;
      int c1552 = 1;
      int* ptr1553 = &(t1551)[c1552];
      __first1542 = ptr1553;
      int* t1554 = __first1542;
      unsigned long t1555 = __n1543;
      unsigned long c1556 = 1;
      unsigned long b1557 = t1555 - c1556;
      int* t1558 = __val1548;
      int* r1559 = int__std__fill_n_int___unsigned_long__int_(t1554, b1557, t1558);
      __first1542 = r1559;
    }
  int* t1560 = __first1542;
  __retval1544 = t1560;
  int* t1561 = __retval1544;
  return t1561;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1562, unsigned long v1563) {
bb1564: ;
  int* __first1565;
  unsigned long __n1566;
  int* __retval1567;
  _Bool __can_fill1568;
  __first1565 = v1562;
  __n1566 = v1563;
    _Bool r1569 = std__is_constant_evaluated();
    if (r1569) {
      int* t1570 = __first1565;
      unsigned long t1571 = __n1566;
      int* r1572 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1570, t1571);
      __retval1567 = r1572;
      int* t1573 = __retval1567;
      return t1573;
    }
  _Bool c1574 = 1;
  __can_fill1568 = c1574;
  int* t1575 = __first1565;
  unsigned long t1576 = __n1566;
  int* r1577 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1575, t1576);
  __retval1567 = r1577;
  int* t1578 = __retval1567;
  return t1578;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1579, unsigned long v1580, struct std__allocator_int_* v1581) {
bb1582: ;
  int* __first1583;
  unsigned long __n1584;
  struct std__allocator_int_* unnamed1585;
  int* __retval1586;
  __first1583 = v1579;
  __n1584 = v1580;
  unnamed1585 = v1581;
  int* t1587 = __first1583;
  unsigned long t1588 = __n1584;
  int* r1589 = int__std____uninitialized_default_n_int___unsigned_long_(t1587, t1588);
  __retval1586 = r1589;
  int* t1590 = __retval1586;
  return t1590;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1591) {
bb1592: ;
  struct std___Vector_base_int__std__allocator_int__* this1593;
  struct std__allocator_int_* __retval1594;
  this1593 = v1591;
  struct std___Vector_base_int__std__allocator_int__* t1595 = this1593;
  struct std__allocator_int_* base1596 = (struct std__allocator_int_*)((char *)&(t1595->_M_impl) + 0);
  __retval1594 = base1596;
  struct std__allocator_int_* t1597 = __retval1594;
  return t1597;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1598, unsigned long v1599) {
bb1600: ;
  struct std__vector_int__std__allocator_int__* this1601;
  unsigned long __n1602;
  this1601 = v1598;
  __n1602 = v1599;
  struct std__vector_int__std__allocator_int__* t1603 = this1601;
  struct std___Vector_base_int__std__allocator_int__* base1604 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1603 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1605 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1604->_M_impl) + 0);
  int* t1606 = base1605->_M_start;
  unsigned long t1607 = __n1602;
  struct std___Vector_base_int__std__allocator_int__* base1608 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1603 + 0);
  struct std__allocator_int_* r1609 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1608);
  int* r1610 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1606, t1607, r1609);
  struct std___Vector_base_int__std__allocator_int__* base1611 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1603 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1612 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1611->_M_impl) + 0);
  base1612->_M_finish = r1610;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1613, int* v1614, unsigned long v1615) {
bb1616: ;
  struct std____new_allocator_int_* this1617;
  int* __p1618;
  unsigned long __n1619;
  this1617 = v1613;
  __p1618 = v1614;
  __n1619 = v1615;
  struct std____new_allocator_int_* t1620 = this1617;
    unsigned long c1621 = 4;
    unsigned long c1622 = 16;
    _Bool c1623 = ((c1621 > c1622)) ? 1 : 0;
    if (c1623) {
      int* t1624 = __p1618;
      void* cast1625 = (void*)t1624;
      unsigned long t1626 = __n1619;
      unsigned long c1627 = 4;
      unsigned long b1628 = t1626 * c1627;
      unsigned long c1629 = 4;
      operator_delete_3(cast1625, b1628, c1629);
      return;
    }
  int* t1630 = __p1618;
  void* cast1631 = (void*)t1630;
  unsigned long t1632 = __n1619;
  unsigned long c1633 = 4;
  unsigned long b1634 = t1632 * c1633;
  operator_delete_2(cast1631, b1634);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1635, int* v1636, unsigned long v1637) {
bb1638: ;
  struct std__allocator_int_* this1639;
  int* __p1640;
  unsigned long __n1641;
  this1639 = v1635;
  __p1640 = v1636;
  __n1641 = v1637;
  struct std__allocator_int_* t1642 = this1639;
    _Bool r1643 = std____is_constant_evaluated();
    if (r1643) {
      int* t1644 = __p1640;
      void* cast1645 = (void*)t1644;
      operator_delete(cast1645);
      return;
    }
  struct std____new_allocator_int_* base1646 = (struct std____new_allocator_int_*)((char *)t1642 + 0);
  int* t1647 = __p1640;
  unsigned long t1648 = __n1641;
  std____new_allocator_int___deallocate(base1646, t1647, t1648);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1649, int* v1650, unsigned long v1651) {
bb1652: ;
  struct std__allocator_int_* __a1653;
  int* __p1654;
  unsigned long __n1655;
  __a1653 = v1649;
  __p1654 = v1650;
  __n1655 = v1651;
  struct std__allocator_int_* t1656 = __a1653;
  int* t1657 = __p1654;
  unsigned long t1658 = __n1655;
  std__allocator_int___deallocate(t1656, t1657, t1658);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1659, int* v1660, unsigned long v1661) {
bb1662: ;
  struct std___Vector_base_int__std__allocator_int__* this1663;
  int* __p1664;
  unsigned long __n1665;
  this1663 = v1659;
  __p1664 = v1660;
  __n1665 = v1661;
  struct std___Vector_base_int__std__allocator_int__* t1666 = this1663;
    int* t1667 = __p1664;
    _Bool cast1668 = (_Bool)t1667;
    if (cast1668) {
      struct std__allocator_int_* base1669 = (struct std__allocator_int_*)((char *)&(t1666->_M_impl) + 0);
      int* t1670 = __p1664;
      unsigned long t1671 = __n1665;
      std__allocator_traits_std__allocator_int_____deallocate(base1669, t1670, t1671);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1672) {
bb1673: ;
  struct std___Vector_base_int__std__allocator_int__* this1674;
  this1674 = v1672;
  struct std___Vector_base_int__std__allocator_int__* t1675 = this1674;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1676 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1675->_M_impl) + 0);
    int* t1677 = base1676->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1678 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1675->_M_impl) + 0);
    int* t1679 = base1678->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1680 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1675->_M_impl) + 0);
    int* t1681 = base1680->_M_start;
    long diff1682 = t1679 - t1681;
    unsigned long cast1683 = (unsigned long)diff1682;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1675, t1677, cast1683);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1675->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1684, struct std____new_allocator_int_* v1685) {
bb1686: ;
  struct std____new_allocator_int_* this1687;
  struct std____new_allocator_int_* unnamed1688;
  this1687 = v1684;
  unnamed1688 = v1685;
  struct std____new_allocator_int_* t1689 = this1687;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1690) {
bb1691: ;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1692;
  this1692 = v1690;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1693 = this1692;
  int* c1694 = ((void*)0);
  t1693->_M_start = c1694;
  int* c1695 = ((void*)0);
  t1693->_M_finish = c1695;
  int* c1696 = ((void*)0);
  t1693->_M_end_of_storage = c1696;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1697) {
bb1698: ;
  int* __location1699;
  __location1699 = v1697;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1700, int* v1701) {
bb1702: ;
  int* __first1703;
  int* __last1704;
  __first1703 = v1700;
  __last1704 = v1701;
      _Bool r1705 = std____is_constant_evaluated();
      if (r1705) {
          while (1) {
            int* t1707 = __first1703;
            int* t1708 = __last1704;
            _Bool c1709 = ((t1707 != t1708)) ? 1 : 0;
            if (!c1709) break;
            int* t1710 = __first1703;
            void_std__destroy_at_int_(t1710);
          for_step1706: ;
            int* t1711 = __first1703;
            int c1712 = 1;
            int* ptr1713 = &(t1711)[c1712];
            __first1703 = ptr1713;
          }
      }
  return;
}

