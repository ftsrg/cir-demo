extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_second[5] = {10, 20, 30, 40, 50};
int __const_main_first[5] = {5, 10, 15, 20, 25};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[10] = "v[0] == 5";
char _str_2[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm52/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[11] = "v[1] == 10";
char _str_4[11] = "v[2] == 15";
char _str_5[11] = "v[3] == 20";
char _str_6[11] = "v[4] == 25";
char _str_7[11] = "v[5] == 30";
char _str_8[11] = "v[6] == 40";
char _str_9[11] = "v[7] == 50";
char _str_10[49] = "cannot create std::vector larger than max_size()";
char _str_11[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* p0, int* p1, int* p2);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int__(int* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
int* int__std____miter_base_int__(int* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____set_union_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p4, struct __gnu_cxx____ops___Iter_less_iter p5);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__set_union_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, int* p2, int* p3, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p4);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8:
  struct std__vector_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__vector_int__std__allocator_int__* t12 = this9;
  struct std___Vector_base_int__std__allocator_int__* base13 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
  unsigned long t14 = __n10;
  struct std__allocator_int_* t15 = __a11;
  unsigned long r16 = std__vector_int__std__allocator_int______S_check_init_len(t14, t15);
  struct std__allocator_int_* t17 = __a11;
  std___Vector_base_int__std__allocator_int______Vector_base(base13, r16, t17);
    unsigned long t18 = __n10;
    std__vector_int__std__allocator_int______M_default_initialize(t12, t18);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v19) {
bb20:
  struct std__allocator_int_* this21;
  this21 = v19;
  struct std__allocator_int_* t22 = this21;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v23) {
bb24:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this25;
  this25 = v23;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t26 = this25;
  int* c27 = ((void*)0);
  t26->_M_current = c27;
  return;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPiS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(struct __gnu_cxx____ops___Iter_less_iter* v28, int* v29, int* v30) {
bb31:
  struct __gnu_cxx____ops___Iter_less_iter* this32;
  int* __it133;
  int* __it234;
  _Bool __retval35;
  this32 = v28;
  __it133 = v29;
  __it234 = v30;
  struct __gnu_cxx____ops___Iter_less_iter* t36 = this32;
  int* t37 = __it133;
  int t38 = *t37;
  int* t39 = __it234;
  int t40 = *t39;
  _Bool c41 = ((t38 < t40)) ? 1 : 0;
  __retval35 = c41;
  _Bool t42 = __retval35;
  return t42;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v43) {
bb44:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this45;
  int* __retval46;
  this45 = v43;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t47 = this45;
  int* t48 = t47->_M_current;
  __retval46 = t48;
  int* t49 = __retval46;
  return t49;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v50) {
bb51:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this52;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval53;
  this52 = v50;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t54 = this52;
  int* t55 = t54->_M_current;
  int c56 = 1;
  int* ptr57 = &(t55)[c56];
  t54->_M_current = ptr57;
  __retval53 = t54;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t58 = __retval53;
  return t58;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v59, int** v60) {
bb61:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this62;
  int** __i63;
  this62 = v59;
  __i63 = v60;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t64 = this62;
  int** t65 = __i63;
  int* t66 = *t65;
  t64->_M_current = t66;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v67, long v68) {
bb69:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this70;
  long __n71;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval72;
  int* ref_tmp073;
  this70 = v67;
  __n71 = v68;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t74 = this70;
  int* t75 = t74->_M_current;
  long t76 = __n71;
  int* ptr77 = &(t75)[t76];
  ref_tmp073 = ptr77;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval72, &ref_tmp073);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t78 = __retval72;
  return t78;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v79, int* v80) {
bb81:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from82;
  int* __res83;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval84;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp085;
  __from82 = v79;
  __res83 = v80;
  int* t86 = __res83;
  int* r87 = int__std____niter_base_int__(t86);
  agg_tmp085 = __from82; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t88 = agg_tmp085;
  int* r89 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t88);
  long diff90 = r87 - r89;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r91 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__from82, diff90);
  __retval84 = r91;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t92 = __retval84;
  return t92;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v93, int* v94, struct std__random_access_iterator_tag v95) {
bb96:
  int* __first97;
  int* __last98;
  struct std__random_access_iterator_tag unnamed99;
  long __retval100;
  __first97 = v93;
  __last98 = v94;
  unnamed99 = v95;
  int* t101 = __last98;
  int* t102 = __first97;
  long diff103 = t101 - t102;
  __retval100 = diff103;
  long t104 = __retval100;
  return t104;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v105, int* v106) {
bb107:
  int* __first108;
  int* __last109;
  long __retval110;
  struct std__random_access_iterator_tag agg_tmp0111;
  __first108 = v105;
  __last109 = v106;
  int* t112 = __first108;
  int* t113 = __last109;
  struct std__random_access_iterator_tag r114 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first108);
  agg_tmp0111 = r114;
  struct std__random_access_iterator_tag t115 = agg_tmp0111;
  long r116 = std__iterator_traits_int____difference_type_std____distance_int__(t112, t113, t115);
  __retval110 = r116;
  long t117 = __retval110;
  return t117;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v118, int** v119) {
bb120:
  int** __out121;
  int** __in122;
  __out121 = v118;
  __in122 = v119;
    int** t123 = __in122;
    int* t124 = *t123;
    int t125 = *t124;
    int** t126 = __out121;
    int* t127 = *t126;
    *t127 = t125;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v128, int* v129, int* v130) {
bb131:
  int* __first132;
  int* __last133;
  int* __result134;
  int* __retval135;
  __first132 = v128;
  __last133 = v129;
  __result134 = v130;
      _Bool r136 = std____is_constant_evaluated();
      if (r136) {
      } else {
          long __n137;
          int* t138 = __first132;
          int* t139 = __last133;
          long r140 = std__iterator_traits_int____difference_type_std__distance_int__(t138, t139);
          __n137 = r140;
            long t141 = __n137;
            long c142 = 1;
            _Bool c143 = ((t141 > c142)) ? 1 : 0;
            if (c143) {
              int* t144 = __result134;
              void* cast145 = (void*)t144;
              int* t146 = __first132;
              void* cast147 = (void*)t146;
              long t148 = __n137;
              unsigned long cast149 = (unsigned long)t148;
              unsigned long c150 = 4;
              unsigned long b151 = cast149 * c150;
              void* r152 = memmove(cast145, cast147, b151);
              long t153 = __n137;
              int* t154 = __result134;
              int* ptr155 = &(t154)[t153];
              __result134 = ptr155;
            } else {
                long t156 = __n137;
                long c157 = 1;
                _Bool c158 = ((t156 == c157)) ? 1 : 0;
                if (c158) {
                  void_std____assign_one_false__int___int__(&__result134, &__first132);
                  int* t159 = __result134;
                  int c160 = 1;
                  int* ptr161 = &(t159)[c160];
                  __result134 = ptr161;
                }
            }
          int* t162 = __result134;
          __retval135 = t162;
          int* t163 = __retval135;
          return t163;
      }
    while (1) {
      int* t165 = __first132;
      int* t166 = __last133;
      _Bool c167 = ((t165 != t166)) ? 1 : 0;
      if (!c167) break;
      void_std____assign_one_false__int___int__(&__result134, &__first132);
    for_step164: ;
      int* t168 = __result134;
      int c169 = 1;
      int* ptr170 = &(t168)[c169];
      __result134 = ptr170;
      int* t171 = __first132;
      int c172 = 1;
      int* ptr173 = &(t171)[c172];
      __first132 = ptr173;
    }
  int* t174 = __result134;
  __retval135 = t174;
  int* t175 = __retval135;
  return t175;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v176, int* v177, int* v178) {
bb179:
  int* __first180;
  int* __last181;
  int* __result182;
  int* __retval183;
  __first180 = v176;
  __last181 = v177;
  __result182 = v178;
  int* t184 = __first180;
  int* t185 = __last181;
  int* t186 = __result182;
  int* r187 = int__std____copy_move_a2_false__int___int___int__(t184, t185, t186);
  __retval183 = r187;
  int* t188 = __retval183;
  return t188;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v189) {
bb190:
  int* __it191;
  int* __retval192;
  __it191 = v189;
  int* t193 = __it191;
  __retval192 = t193;
  int* t194 = __retval192;
  return t194;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v195) {
bb196:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this197;
  int** __retval198;
  this197 = v195;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t199 = this197;
  __retval198 = &t199->_M_current;
  int** t200 = __retval198;
  return t200;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v201) {
bb202:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it203;
  int* __retval204;
  __it203 = v201;
  int** r205 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it203);
  int* t206 = *r205;
  __retval204 = t206;
  int* t207 = __retval204;
  return t207;
}

// function: _ZSt13__copy_move_aILb0EPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v208, int* v209, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v210) {
bb211:
  int* __first212;
  int* __last213;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result214;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval215;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0216;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1217;
  __first212 = v208;
  __last213 = v209;
  __result214 = v210;
  agg_tmp0216 = __result214; // copy
  int* t218 = __first212;
  int* r219 = int__std____niter_base_int__(t218);
  int* t220 = __last213;
  int* r221 = int__std____niter_base_int__(t220);
  agg_tmp1217 = __result214; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t222 = agg_tmp1217;
  int* r223 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t222);
  int* r224 = int__std____copy_move_a1_false__int___int__(r219, r221, r223);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t225 = agg_tmp0216;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r226 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t225, r224);
  __retval215 = r226;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t227 = __retval215;
  return t227;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v228) {
bb229:
  int* __it230;
  int* __retval231;
  __it230 = v228;
  int* t232 = __it230;
  __retval231 = t232;
  int* t233 = __retval231;
  return t233;
}

// function: _ZSt4copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v234, int* v235, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v236) {
bb237:
  int* __first238;
  int* __last239;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result240;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval241;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0242;
  __first238 = v234;
  __last239 = v235;
  __result240 = v236;
  int* t243 = __first238;
  int* r244 = int__std____miter_base_int__(t243);
  int* t245 = __last239;
  int* r246 = int__std____miter_base_int__(t245);
  agg_tmp0242 = __result240; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t247 = agg_tmp0242;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r248 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(r244, r246, t247);
  __retval241 = r248;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t249 = __retval241;
  return t249;
}

// function: _ZSt11__set_unionIPiS0_N9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEENS1_5__ops15_Iter_less_iterEET1_T_SA_T0_SB_S9_T2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____set_union_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(int* v250, int* v251, int* v252, int* v253, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v254, struct __gnu_cxx____ops___Iter_less_iter v255) {
bb256:
  int* __first1257;
  int* __last1258;
  int* __first2259;
  int* __last2260;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result261;
  struct __gnu_cxx____ops___Iter_less_iter __comp262;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval263;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0264;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1265;
  __first1257 = v250;
  __last1258 = v251;
  __first2259 = v252;
  __last2260 = v253;
  __result261 = v254;
  __comp262 = v255;
    while (1) {
      int* t266 = __first1257;
      int* t267 = __last1258;
      _Bool c268 = ((t266 != t267)) ? 1 : 0;
      _Bool ternary269;
      if (c268) {
        int* t270 = __first2259;
        int* t271 = __last2260;
        _Bool c272 = ((t270 != t271)) ? 1 : 0;
        ternary269 = (_Bool)c272;
      } else {
        _Bool c273 = 0;
        ternary269 = (_Bool)c273;
      }
      if (!ternary269) break;
          int* t274 = __first1257;
          int* t275 = __first2259;
          _Bool r276 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp262, t274, t275);
          if (r276) {
            int* t277 = __first1257;
            int t278 = *t277;
            int* r279 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result261);
            *r279 = t278;
            int* t280 = __first1257;
            int c281 = 1;
            int* ptr282 = &(t280)[c281];
            __first1257 = ptr282;
          } else {
              int* t283 = __first2259;
              int* t284 = __first1257;
              _Bool r285 = bool___gnu_cxx____ops___Iter_less_iter__operator___int___int___int___int___const(&__comp262, t283, t284);
              if (r285) {
                int* t286 = __first2259;
                int t287 = *t286;
                int* r288 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result261);
                *r288 = t287;
                int* t289 = __first2259;
                int c290 = 1;
                int* ptr291 = &(t289)[c290];
                __first2259 = ptr291;
              } else {
                int* t292 = __first1257;
                int t293 = *t292;
                int* r294 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result261);
                *r294 = t293;
                int* t295 = __first1257;
                int c296 = 1;
                int* ptr297 = &(t295)[c296];
                __first1257 = ptr297;
                int* t298 = __first2259;
                int c299 = 1;
                int* ptr300 = &(t298)[c299];
                __first2259 = ptr300;
              }
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r301 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result261);
    }
  int* t302 = __first2259;
  int* t303 = __last2260;
  int* t304 = __first1257;
  int* t305 = __last1258;
  agg_tmp1265 = __result261; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t306 = agg_tmp1265;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r307 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t304, t305, t306);
  agg_tmp0264 = r307;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t308 = agg_tmp0264;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r309 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t302, t303, t308);
  __retval263 = r309;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t310 = __retval263;
  return t310;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb311:
  struct __gnu_cxx____ops___Iter_less_iter __retval312;
  struct __gnu_cxx____ops___Iter_less_iter t313 = __retval312;
  return t313;
}

// function: _ZSt9set_unionIPiS0_N9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET1_T_S8_T0_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__set_union_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v314, int* v315, int* v316, int* v317, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v318) {
bb319:
  int* __first1320;
  int* __last1321;
  int* __first2322;
  int* __last2323;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result324;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval325;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0326;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1327;
  __first1320 = v314;
  __last1321 = v315;
  __first2322 = v316;
  __last2323 = v317;
  __result324 = v318;
  int* t328 = __first1320;
  int* t329 = __last1321;
  int* t330 = __first2322;
  int* t331 = __last2323;
  agg_tmp0326 = __result324; // copy
  struct __gnu_cxx____ops___Iter_less_iter r332 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp1327 = r332;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t333 = agg_tmp0326;
  struct __gnu_cxx____ops___Iter_less_iter t334 = agg_tmp1327;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r335 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____set_union_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t328, t329, t330, t331, t333, t334);
  __retval325 = r335;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t336 = __retval325;
  return t336;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v337) {
bb338:
  struct std__vector_int__std__allocator_int__* this339;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval340;
  this339 = v337;
  struct std__vector_int__std__allocator_int__* t341 = this339;
  struct std___Vector_base_int__std__allocator_int__* base342 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t341 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base343 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base342->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval340, &base343->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t344 = __retval340;
  return t344;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v345, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v346) {
bb347:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this348;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed349;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval350;
  this348 = v345;
  unnamed349 = v346;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t351 = this348;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t352 = unnamed349;
  int* t353 = t352->_M_current;
  t351->_M_current = t353;
  __retval350 = t351;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t354 = __retval350;
  return t354;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v355, int v356) {
bb357:
  int __a358;
  int __b359;
  int __retval360;
  __a358 = v355;
  __b359 = v356;
  int t361 = __a358;
  int t362 = __b359;
  int b363 = t361 | t362;
  __retval360 = b363;
  int t364 = __retval360;
  return t364;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v365) {
bb366:
  struct std__basic_ios_char__std__char_traits_char__* this367;
  int __retval368;
  this367 = v365;
  struct std__basic_ios_char__std__char_traits_char__* t369 = this367;
  struct std__ios_base* base370 = (struct std__ios_base*)((char *)t369 + 0);
  int t371 = base370->_M_streambuf_state;
  __retval368 = t371;
  int t372 = __retval368;
  return t372;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v373, int v374) {
bb375:
  struct std__basic_ios_char__std__char_traits_char__* this376;
  int __state377;
  this376 = v373;
  __state377 = v374;
  struct std__basic_ios_char__std__char_traits_char__* t378 = this376;
  int r379 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t378);
  int t380 = __state377;
  int r381 = std__operator_(r379, t380);
  std__basic_ios_char__std__char_traits_char_____clear(t378, r381);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v382, char* v383) {
bb384:
  char* __c1385;
  char* __c2386;
  _Bool __retval387;
  __c1385 = v382;
  __c2386 = v383;
  char* t388 = __c1385;
  char t389 = *t388;
  int cast390 = (int)t389;
  char* t391 = __c2386;
  char t392 = *t391;
  int cast393 = (int)t392;
  _Bool c394 = ((cast390 == cast393)) ? 1 : 0;
  __retval387 = c394;
  _Bool t395 = __retval387;
  return t395;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v396) {
bb397:
  char* __p398;
  unsigned long __retval399;
  unsigned long __i400;
  __p398 = v396;
  unsigned long c401 = 0;
  __i400 = c401;
    char ref_tmp0402;
    while (1) {
      unsigned long t403 = __i400;
      char* t404 = __p398;
      char* ptr405 = &(t404)[t403];
      char c406 = 0;
      ref_tmp0402 = c406;
      _Bool r407 = __gnu_cxx__char_traits_char___eq(ptr405, &ref_tmp0402);
      _Bool u408 = !r407;
      if (!u408) break;
      unsigned long t409 = __i400;
      unsigned long u410 = t409 + 1;
      __i400 = u410;
    }
  unsigned long t411 = __i400;
  __retval399 = t411;
  unsigned long t412 = __retval399;
  return t412;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v413) {
bb414:
  char* __s415;
  unsigned long __retval416;
  __s415 = v413;
    _Bool r417 = std____is_constant_evaluated();
    if (r417) {
      char* t418 = __s415;
      unsigned long r419 = __gnu_cxx__char_traits_char___length(t418);
      __retval416 = r419;
      unsigned long t420 = __retval416;
      return t420;
    }
  char* t421 = __s415;
  unsigned long r422 = strlen(t421);
  __retval416 = r422;
  unsigned long t423 = __retval416;
  return t423;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v424, char* v425) {
bb426:
  struct std__basic_ostream_char__std__char_traits_char__* __out427;
  char* __s428;
  struct std__basic_ostream_char__std__char_traits_char__* __retval429;
  __out427 = v424;
  __s428 = v425;
    char* t430 = __s428;
    _Bool cast431 = (_Bool)t430;
    _Bool u432 = !cast431;
    if (u432) {
      struct std__basic_ostream_char__std__char_traits_char__* t433 = __out427;
      void** v434 = (void**)t433;
      void* v435 = *((void**)v434);
      unsigned char* cast436 = (unsigned char*)v435;
      long c437 = -24;
      unsigned char* ptr438 = &(cast436)[c437];
      long* cast439 = (long*)ptr438;
      long t440 = *cast439;
      unsigned char* cast441 = (unsigned char*)t433;
      unsigned char* ptr442 = &(cast441)[t440];
      struct std__basic_ostream_char__std__char_traits_char__* cast443 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr442;
      struct std__basic_ios_char__std__char_traits_char__* cast444 = (struct std__basic_ios_char__std__char_traits_char__*)cast443;
      int t445 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast444, t445);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t446 = __out427;
      char* t447 = __s428;
      char* t448 = __s428;
      unsigned long r449 = std__char_traits_char___length(t448);
      long cast450 = (long)r449;
      struct std__basic_ostream_char__std__char_traits_char__* r451 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t446, t447, cast450);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t452 = __out427;
  __retval429 = t452;
  struct std__basic_ostream_char__std__char_traits_char__* t453 = __retval429;
  return t453;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v454) {
bb455:
  struct std__vector_int__std__allocator_int__* this456;
  unsigned long __retval457;
  long __dif458;
  this456 = v454;
  struct std__vector_int__std__allocator_int__* t459 = this456;
  struct std___Vector_base_int__std__allocator_int__* base460 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t459 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base461 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base460->_M_impl) + 0);
  int* t462 = base461->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base463 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t459 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base464 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base463->_M_impl) + 0);
  int* t465 = base464->_M_start;
  long diff466 = t462 - t465;
  __dif458 = diff466;
    long t467 = __dif458;
    long c468 = 0;
    _Bool c469 = ((t467 < c468)) ? 1 : 0;
    if (c469) {
      __builtin_unreachable();
    }
  long t470 = __dif458;
  unsigned long cast471 = (unsigned long)t470;
  __retval457 = cast471;
  unsigned long t472 = __retval457;
  return t472;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v473, unsigned long v474) {
bb475:
  struct std__vector_int__std__allocator_int__* this476;
  unsigned long __n477;
  int* __retval478;
  this476 = v473;
  __n477 = v474;
  struct std__vector_int__std__allocator_int__* t479 = this476;
    do {
          unsigned long t480 = __n477;
          unsigned long r481 = std__vector_int__std__allocator_int_____size___const(t479);
          _Bool c482 = ((t480 < r481)) ? 1 : 0;
          _Bool u483 = !c482;
          if (u483) {
            char* cast484 = (char*)&(_str_11);
            int c485 = 1263;
            char* cast486 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast487 = (char*)&(_str_12);
            std____glibcxx_assert_fail(cast484, c485, cast486, cast487);
          }
      _Bool c488 = 0;
      if (!c488) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base489 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t479 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base490 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base489->_M_impl) + 0);
  int* t491 = base490->_M_start;
  unsigned long t492 = __n477;
  int* ptr493 = &(t491)[t492];
  __retval478 = ptr493;
  int* t494 = __retval478;
  return t494;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v495, void* v496) {
bb497:
  struct std__basic_ostream_char__std__char_traits_char__* this498;
  void* __pf499;
  struct std__basic_ostream_char__std__char_traits_char__* __retval500;
  this498 = v495;
  __pf499 = v496;
  struct std__basic_ostream_char__std__char_traits_char__* t501 = this498;
  void* t502 = __pf499;
  struct std__basic_ostream_char__std__char_traits_char__* r503 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t502)(t501);
  __retval500 = r503;
  struct std__basic_ostream_char__std__char_traits_char__* t504 = __retval500;
  return t504;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v505) {
bb506:
  struct std__basic_ostream_char__std__char_traits_char__* __os507;
  struct std__basic_ostream_char__std__char_traits_char__* __retval508;
  __os507 = v505;
  struct std__basic_ostream_char__std__char_traits_char__* t509 = __os507;
  struct std__basic_ostream_char__std__char_traits_char__* r510 = std__ostream__flush(t509);
  __retval508 = r510;
  struct std__basic_ostream_char__std__char_traits_char__* t511 = __retval508;
  return t511;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v512) {
bb513:
  struct std__ctype_char_* __f514;
  struct std__ctype_char_* __retval515;
  __f514 = v512;
    struct std__ctype_char_* t516 = __f514;
    _Bool cast517 = (_Bool)t516;
    _Bool u518 = !cast517;
    if (u518) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t519 = __f514;
  __retval515 = t519;
  struct std__ctype_char_* t520 = __retval515;
  return t520;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v521, char v522) {
bb523:
  struct std__ctype_char_* this524;
  char __c525;
  char __retval526;
  this524 = v521;
  __c525 = v522;
  struct std__ctype_char_* t527 = this524;
    char t528 = t527->_M_widen_ok;
    _Bool cast529 = (_Bool)t528;
    if (cast529) {
      char t530 = __c525;
      unsigned char cast531 = (unsigned char)t530;
      unsigned long cast532 = (unsigned long)cast531;
      char t533 = t527->_M_widen[cast532];
      __retval526 = t533;
      char t534 = __retval526;
      return t534;
    }
  std__ctype_char____M_widen_init___const(t527);
  char t535 = __c525;
  void** v536 = (void**)t527;
  void* v537 = *((void**)v536);
  char vcall540 = (char)__VERIFIER_virtual_call_char_char(t527, 6, t535);
  __retval526 = vcall540;
  char t541 = __retval526;
  return t541;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v542, char v543) {
bb544:
  struct std__basic_ios_char__std__char_traits_char__* this545;
  char __c546;
  char __retval547;
  this545 = v542;
  __c546 = v543;
  struct std__basic_ios_char__std__char_traits_char__* t548 = this545;
  struct std__ctype_char_* t549 = t548->_M_ctype;
  struct std__ctype_char_* r550 = std__ctype_char__const__std____check_facet_std__ctype_char___(t549);
  char t551 = __c546;
  char r552 = std__ctype_char___widen_char__const(r550, t551);
  __retval547 = r552;
  char t553 = __retval547;
  return t553;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v554) {
bb555:
  struct std__basic_ostream_char__std__char_traits_char__* __os556;
  struct std__basic_ostream_char__std__char_traits_char__* __retval557;
  __os556 = v554;
  struct std__basic_ostream_char__std__char_traits_char__* t558 = __os556;
  struct std__basic_ostream_char__std__char_traits_char__* t559 = __os556;
  void** v560 = (void**)t559;
  void* v561 = *((void**)v560);
  unsigned char* cast562 = (unsigned char*)v561;
  long c563 = -24;
  unsigned char* ptr564 = &(cast562)[c563];
  long* cast565 = (long*)ptr564;
  long t566 = *cast565;
  unsigned char* cast567 = (unsigned char*)t559;
  unsigned char* ptr568 = &(cast567)[t566];
  struct std__basic_ostream_char__std__char_traits_char__* cast569 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr568;
  struct std__basic_ios_char__std__char_traits_char__* cast570 = (struct std__basic_ios_char__std__char_traits_char__*)cast569;
  char c571 = 10;
  char r572 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast570, c571);
  struct std__basic_ostream_char__std__char_traits_char__* r573 = std__ostream__put(t558, r572);
  struct std__basic_ostream_char__std__char_traits_char__* r574 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r573);
  __retval557 = r574;
  struct std__basic_ostream_char__std__char_traits_char__* t575 = __retval557;
  return t575;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v576) {
bb577:
  struct std__vector_int__std__allocator_int__* this578;
  this578 = v576;
  struct std__vector_int__std__allocator_int__* t579 = this578;
    struct std___Vector_base_int__std__allocator_int__* base580 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t579 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base581 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base580->_M_impl) + 0);
    int* t582 = base581->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base583 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t579 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base584 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base583->_M_impl) + 0);
    int* t585 = base584->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base586 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t579 + 0);
    struct std__allocator_int_* r587 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base586);
    void_std___Destroy_int___int_(t582, t585, r587);
  {
    struct std___Vector_base_int__std__allocator_int__* base588 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t579 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base588);
  }
  return;
}

// function: main
int main() {
bb589:
  int __retval590;
  int first591[5];
  int second592[5];
  struct std__vector_int__std__allocator_int__ v593;
  struct std__allocator_int_ ref_tmp0594;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it595;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1596;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0597;
  int c598 = 0;
  __retval590 = c598;
  // array copy
  __builtin_memcpy(first591, __const_main_first, (unsigned long)5 * sizeof(__const_main_first[0]));
  // array copy
  __builtin_memcpy(second592, __const_main_second, (unsigned long)5 * sizeof(__const_main_second[0]));
  unsigned long c599 = 10;
  std__allocator_int___allocator_2(&ref_tmp0594);
    std__vector_int__std__allocator_int_____vector(&v593, c599, &ref_tmp0594);
  {
    std__allocator_int____allocator(&ref_tmp0594);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it595);
    int* cast600 = (int*)&(first591);
    int* cast601 = (int*)&(first591);
    int c602 = 5;
    int* ptr603 = &(cast601)[c602];
    int* cast604 = (int*)&(second592);
    int* cast605 = (int*)&(second592);
    int c606 = 5;
    int* ptr607 = &(cast605)[c606];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r608 = std__vector_int__std__allocator_int_____begin(&v593);
    agg_tmp0597 = r608;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t609 = agg_tmp0597;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r610 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__set_union_int___int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast600, ptr603, cast604, ptr607, t609);
    ref_tmp1596 = r610;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r611 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it595, &ref_tmp1596);
      int i612;
      int c613 = 0;
      i612 = c613;
      while (1) {
        int t615 = i612;
        int c616 = 10;
        _Bool c617 = ((t615 < c616)) ? 1 : 0;
        if (!c617) break;
        int t618 = i612;
        unsigned long cast619 = (unsigned long)t618;
        int* r620 = std__vector_int__std__allocator_int_____operator__(&v593, cast619);
        int t621 = *r620;
        struct std__basic_ostream_char__std__char_traits_char__* r622 = std__ostream__operator__(&_ZSt4cout, t621);
        char* cast623 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r624 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r622, cast623);
      for_step614: ;
        int t625 = i612;
        int u626 = t625 + 1;
        i612 = u626;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r627 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long c628 = 0;
    int* r629 = std__vector_int__std__allocator_int_____operator__(&v593, c628);
    int t630 = *r629;
    int c631 = 5;
    _Bool c632 = ((t630 == c631)) ? 1 : 0;
    if (c632) {
    } else {
      char* cast633 = (char*)&(_str_1);
      char* c634 = _str_2;
      unsigned int c635 = 26;
      char* cast636 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast633, c634, c635, cast636);
    }
    unsigned long c637 = 1;
    int* r638 = std__vector_int__std__allocator_int_____operator__(&v593, c637);
    int t639 = *r638;
    int c640 = 10;
    _Bool c641 = ((t639 == c640)) ? 1 : 0;
    if (c641) {
    } else {
      char* cast642 = (char*)&(_str_3);
      char* c643 = _str_2;
      unsigned int c644 = 27;
      char* cast645 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast642, c643, c644, cast645);
    }
    unsigned long c646 = 2;
    int* r647 = std__vector_int__std__allocator_int_____operator__(&v593, c646);
    int t648 = *r647;
    int c649 = 15;
    _Bool c650 = ((t648 == c649)) ? 1 : 0;
    if (c650) {
    } else {
      char* cast651 = (char*)&(_str_4);
      char* c652 = _str_2;
      unsigned int c653 = 28;
      char* cast654 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast651, c652, c653, cast654);
    }
    unsigned long c655 = 3;
    int* r656 = std__vector_int__std__allocator_int_____operator__(&v593, c655);
    int t657 = *r656;
    int c658 = 20;
    _Bool c659 = ((t657 == c658)) ? 1 : 0;
    if (c659) {
    } else {
      char* cast660 = (char*)&(_str_5);
      char* c661 = _str_2;
      unsigned int c662 = 29;
      char* cast663 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast660, c661, c662, cast663);
    }
    unsigned long c664 = 4;
    int* r665 = std__vector_int__std__allocator_int_____operator__(&v593, c664);
    int t666 = *r665;
    int c667 = 25;
    _Bool c668 = ((t666 == c667)) ? 1 : 0;
    if (c668) {
    } else {
      char* cast669 = (char*)&(_str_6);
      char* c670 = _str_2;
      unsigned int c671 = 30;
      char* cast672 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast669, c670, c671, cast672);
    }
    unsigned long c673 = 5;
    int* r674 = std__vector_int__std__allocator_int_____operator__(&v593, c673);
    int t675 = *r674;
    int c676 = 30;
    _Bool c677 = ((t675 == c676)) ? 1 : 0;
    if (c677) {
    } else {
      char* cast678 = (char*)&(_str_7);
      char* c679 = _str_2;
      unsigned int c680 = 31;
      char* cast681 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast678, c679, c680, cast681);
    }
    unsigned long c682 = 6;
    int* r683 = std__vector_int__std__allocator_int_____operator__(&v593, c682);
    int t684 = *r683;
    int c685 = 40;
    _Bool c686 = ((t684 == c685)) ? 1 : 0;
    if (c686) {
    } else {
      char* cast687 = (char*)&(_str_8);
      char* c688 = _str_2;
      unsigned int c689 = 32;
      char* cast690 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast687, c688, c689, cast690);
    }
    unsigned long c691 = 7;
    int* r692 = std__vector_int__std__allocator_int_____operator__(&v593, c691);
    int t693 = *r692;
    int c694 = 50;
    _Bool c695 = ((t693 == c694)) ? 1 : 0;
    if (c695) {
    } else {
      char* cast696 = (char*)&(_str_9);
      char* c697 = _str_2;
      unsigned int c698 = 33;
      char* cast699 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast696, c697, c698, cast699);
    }
    int c700 = 0;
    __retval590 = c700;
    int t701 = __retval590;
    int ret_val702 = t701;
    {
      std__vector_int__std__allocator_int______vector(&v593);
    }
    return ret_val702;
  int t703 = __retval590;
  return t703;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v704) {
bb705:
  struct std____new_allocator_int_* this706;
  this706 = v704;
  struct std____new_allocator_int_* t707 = this706;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v708, unsigned long* v709) {
bb710:
  unsigned long* __a711;
  unsigned long* __b712;
  unsigned long* __retval713;
  __a711 = v708;
  __b712 = v709;
    unsigned long* t714 = __b712;
    unsigned long t715 = *t714;
    unsigned long* t716 = __a711;
    unsigned long t717 = *t716;
    _Bool c718 = ((t715 < t717)) ? 1 : 0;
    if (c718) {
      unsigned long* t719 = __b712;
      __retval713 = t719;
      unsigned long* t720 = __retval713;
      return t720;
    }
  unsigned long* t721 = __a711;
  __retval713 = t721;
  unsigned long* t722 = __retval713;
  return t722;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v723) {
bb724:
  struct std__allocator_int_* __a725;
  unsigned long __retval726;
  unsigned long __diffmax727;
  unsigned long __allocmax728;
  __a725 = v723;
  unsigned long c729 = 2305843009213693951;
  __diffmax727 = c729;
  unsigned long c730 = 4611686018427387903;
  __allocmax728 = c730;
  unsigned long* r731 = unsigned_long_const__std__min_unsigned_long_(&__diffmax727, &__allocmax728);
  unsigned long t732 = *r731;
  __retval726 = t732;
  unsigned long t733 = __retval726;
  return t733;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v734, struct std__allocator_int_* v735) {
bb736:
  struct std__allocator_int_* this737;
  struct std__allocator_int_* __a738;
  this737 = v734;
  __a738 = v735;
  struct std__allocator_int_* t739 = this737;
  struct std____new_allocator_int_* base740 = (struct std____new_allocator_int_*)((char *)t739 + 0);
  struct std__allocator_int_* t741 = __a738;
  struct std____new_allocator_int_* base742 = (struct std____new_allocator_int_*)((char *)t741 + 0);
  std____new_allocator_int_____new_allocator(base740, base742);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v743, struct std__allocator_int_* v744) {
bb745:
  unsigned long __n746;
  struct std__allocator_int_* __a747;
  unsigned long __retval748;
  __n746 = v743;
  __a747 = v744;
    struct std__allocator_int_ ref_tmp0749;
    _Bool tmp_exprcleanup750;
    unsigned long t751 = __n746;
    struct std__allocator_int_* t752 = __a747;
    std__allocator_int___allocator(&ref_tmp0749, t752);
      unsigned long r753 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0749);
      _Bool c754 = ((t751 > r753)) ? 1 : 0;
      tmp_exprcleanup750 = c754;
    {
      std__allocator_int____allocator(&ref_tmp0749);
    }
    _Bool t755 = tmp_exprcleanup750;
    if (t755) {
      char* cast756 = (char*)&(_str_10);
      std____throw_length_error(cast756);
    }
  unsigned long t757 = __n746;
  __retval748 = t757;
  unsigned long t758 = __retval748;
  return t758;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v759, struct std__allocator_int_* v760) {
bb761:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this762;
  struct std__allocator_int_* __a763;
  this762 = v759;
  __a763 = v760;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t764 = this762;
  struct std__allocator_int_* base765 = (struct std__allocator_int_*)((char *)t764 + 0);
  struct std__allocator_int_* t766 = __a763;
  std__allocator_int___allocator(base765, t766);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base767 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t764 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base767);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb768:
  _Bool __retval769;
    _Bool c770 = 0;
    __retval769 = c770;
    _Bool t771 = __retval769;
    return t771;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v772) {
bb773:
  struct std____new_allocator_int_* this774;
  unsigned long __retval775;
  this774 = v772;
  struct std____new_allocator_int_* t776 = this774;
  unsigned long c777 = 9223372036854775807;
  unsigned long c778 = 4;
  unsigned long b779 = c777 / c778;
  __retval775 = b779;
  unsigned long t780 = __retval775;
  return t780;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v781, unsigned long v782, void* v783) {
bb784:
  struct std____new_allocator_int_* this785;
  unsigned long __n786;
  void* unnamed787;
  int* __retval788;
  this785 = v781;
  __n786 = v782;
  unnamed787 = v783;
  struct std____new_allocator_int_* t789 = this785;
    unsigned long t790 = __n786;
    unsigned long r791 = std____new_allocator_int____M_max_size___const(t789);
    _Bool c792 = ((t790 > r791)) ? 1 : 0;
    if (c792) {
        unsigned long t793 = __n786;
        unsigned long c794 = -1;
        unsigned long c795 = 4;
        unsigned long b796 = c794 / c795;
        _Bool c797 = ((t793 > b796)) ? 1 : 0;
        if (c797) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c798 = 4;
    unsigned long c799 = 16;
    _Bool c800 = ((c798 > c799)) ? 1 : 0;
    if (c800) {
      unsigned long __al801;
      unsigned long c802 = 4;
      __al801 = c802;
      unsigned long t803 = __n786;
      unsigned long c804 = 4;
      unsigned long b805 = t803 * c804;
      unsigned long t806 = __al801;
      void* r807 = operator_new_2(b805, t806);
      int* cast808 = (int*)r807;
      __retval788 = cast808;
      int* t809 = __retval788;
      return t809;
    }
  unsigned long t810 = __n786;
  unsigned long c811 = 4;
  unsigned long b812 = t810 * c811;
  void* r813 = operator_new(b812);
  int* cast814 = (int*)r813;
  __retval788 = cast814;
  int* t815 = __retval788;
  return t815;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v816, unsigned long v817) {
bb818:
  struct std__allocator_int_* this819;
  unsigned long __n820;
  int* __retval821;
  this819 = v816;
  __n820 = v817;
  struct std__allocator_int_* t822 = this819;
    _Bool r823 = std____is_constant_evaluated();
    if (r823) {
        unsigned long t824 = __n820;
        unsigned long c825 = 4;
        unsigned long ovr826;
        _Bool ovf827 = __builtin_mul_overflow(t824, c825, &ovr826);
        __n820 = ovr826;
        if (ovf827) {
          std____throw_bad_array_new_length();
        }
      unsigned long t828 = __n820;
      void* r829 = operator_new(t828);
      int* cast830 = (int*)r829;
      __retval821 = cast830;
      int* t831 = __retval821;
      return t831;
    }
  struct std____new_allocator_int_* base832 = (struct std____new_allocator_int_*)((char *)t822 + 0);
  unsigned long t833 = __n820;
  void* c834 = ((void*)0);
  int* r835 = std____new_allocator_int___allocate(base832, t833, c834);
  __retval821 = r835;
  int* t836 = __retval821;
  return t836;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v837, unsigned long v838) {
bb839:
  struct std__allocator_int_* __a840;
  unsigned long __n841;
  int* __retval842;
  __a840 = v837;
  __n841 = v838;
  struct std__allocator_int_* t843 = __a840;
  unsigned long t844 = __n841;
  int* r845 = std__allocator_int___allocate(t843, t844);
  __retval842 = r845;
  int* t846 = __retval842;
  return t846;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v847, unsigned long v848) {
bb849:
  struct std___Vector_base_int__std__allocator_int__* this850;
  unsigned long __n851;
  int* __retval852;
  this850 = v847;
  __n851 = v848;
  struct std___Vector_base_int__std__allocator_int__* t853 = this850;
  unsigned long t854 = __n851;
  unsigned long c855 = 0;
  _Bool c856 = ((t854 != c855)) ? 1 : 0;
  int* ternary857;
  if (c856) {
    struct std__allocator_int_* base858 = (struct std__allocator_int_*)((char *)&(t853->_M_impl) + 0);
    unsigned long t859 = __n851;
    int* r860 = std__allocator_traits_std__allocator_int_____allocate(base858, t859);
    ternary857 = (int*)r860;
  } else {
    int* c861 = ((void*)0);
    ternary857 = (int*)c861;
  }
  __retval852 = ternary857;
  int* t862 = __retval852;
  return t862;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v863, unsigned long v864) {
bb865:
  struct std___Vector_base_int__std__allocator_int__* this866;
  unsigned long __n867;
  this866 = v863;
  __n867 = v864;
  struct std___Vector_base_int__std__allocator_int__* t868 = this866;
  unsigned long t869 = __n867;
  int* r870 = std___Vector_base_int__std__allocator_int______M_allocate(t868, t869);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base871 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t868->_M_impl) + 0);
  base871->_M_start = r870;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base872 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t868->_M_impl) + 0);
  int* t873 = base872->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base874 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t868->_M_impl) + 0);
  base874->_M_finish = t873;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base875 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t868->_M_impl) + 0);
  int* t876 = base875->_M_start;
  unsigned long t877 = __n867;
  int* ptr878 = &(t876)[t877];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base879 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t868->_M_impl) + 0);
  base879->_M_end_of_storage = ptr878;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v880) {
bb881:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this882;
  this882 = v880;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t883 = this882;
  {
    struct std__allocator_int_* base884 = (struct std__allocator_int_*)((char *)t883 + 0);
    std__allocator_int____allocator(base884);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v885, unsigned long v886, struct std__allocator_int_* v887) {
bb888:
  struct std___Vector_base_int__std__allocator_int__* this889;
  unsigned long __n890;
  struct std__allocator_int_* __a891;
  this889 = v885;
  __n890 = v886;
  __a891 = v887;
  struct std___Vector_base_int__std__allocator_int__* t892 = this889;
  struct std__allocator_int_* t893 = __a891;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t892->_M_impl, t893);
    unsigned long t894 = __n890;
    std___Vector_base_int__std__allocator_int______M_create_storage(t892, t894);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb895:
  _Bool __retval896;
    _Bool c897 = 0;
    __retval896 = c897;
    _Bool t898 = __retval896;
    return t898;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v899, int** v900) {
bb901:
  struct std___UninitDestroyGuard_int____void_* this902;
  int** __first903;
  this902 = v899;
  __first903 = v900;
  struct std___UninitDestroyGuard_int____void_* t904 = this902;
  int** t905 = __first903;
  int* t906 = *t905;
  t904->_M_first = t906;
  int** t907 = __first903;
  t904->_M_cur = t907;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v908) {
bb909:
  int* __location910;
  int* __retval911;
  void* __loc912;
  __location910 = v908;
  int* t913 = __location910;
  void* cast914 = (void*)t913;
  __loc912 = cast914;
    void* t915 = __loc912;
    int* cast916 = (int*)t915;
    int c917 = 0;
    *cast916 = c917;
    __retval911 = cast916;
    int* t918 = __retval911;
    return t918;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v919) {
bb920:
  int* __p921;
  __p921 = v919;
    _Bool r922 = std____is_constant_evaluated();
    if (r922) {
      int* t923 = __p921;
      int* r924 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t923);
      return;
    }
  int* t925 = __p921;
  void* cast926 = (void*)t925;
  int* cast927 = (int*)cast926;
  int c928 = 0;
  *cast927 = c928;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v929) {
bb930:
  struct std___UninitDestroyGuard_int____void_* this931;
  this931 = v929;
  struct std___UninitDestroyGuard_int____void_* t932 = this931;
  int** c933 = ((void*)0);
  t932->_M_cur = c933;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v934) {
bb935:
  struct std___UninitDestroyGuard_int____void_* this936;
  this936 = v934;
  struct std___UninitDestroyGuard_int____void_* t937 = this936;
    int** t938 = t937->_M_cur;
    int** c939 = ((void*)0);
    _Bool c940 = ((t938 != c939)) ? 1 : 0;
    if (c940) {
      int* t941 = t937->_M_first;
      int** t942 = t937->_M_cur;
      int* t943 = *t942;
      void_std___Destroy_int__(t941, t943);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v944, unsigned long v945) {
bb946:
  int* __first947;
  unsigned long __n948;
  int* __retval949;
  struct std___UninitDestroyGuard_int____void_ __guard950;
  __first947 = v944;
  __n948 = v945;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard950, &__first947);
      while (1) {
        unsigned long t952 = __n948;
        unsigned long c953 = 0;
        _Bool c954 = ((t952 > c953)) ? 1 : 0;
        if (!c954) break;
        int* t955 = __first947;
        void_std___Construct_int_(t955);
      for_step951: ;
        unsigned long t956 = __n948;
        unsigned long u957 = t956 - 1;
        __n948 = u957;
        int* t958 = __first947;
        int c959 = 1;
        int* ptr960 = &(t958)[c959];
        __first947 = ptr960;
      }
    std___UninitDestroyGuard_int___void___release(&__guard950);
    int* t961 = __first947;
    __retval949 = t961;
    int* t962 = __retval949;
    int* ret_val963 = t962;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard950);
    }
    return ret_val963;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v964, int* v965, int* v966) {
bb967:
  int* __first968;
  int* __last969;
  int* __value970;
  _Bool __load_outside_loop971;
  int __val972;
  __first968 = v964;
  __last969 = v965;
  __value970 = v966;
  _Bool c973 = 1;
  __load_outside_loop971 = c973;
  int* t974 = __value970;
  int t975 = *t974;
  __val972 = t975;
    while (1) {
      int* t977 = __first968;
      int* t978 = __last969;
      _Bool c979 = ((t977 != t978)) ? 1 : 0;
      if (!c979) break;
      int t980 = __val972;
      int* t981 = __first968;
      *t981 = t980;
    for_step976: ;
      int* t982 = __first968;
      int c983 = 1;
      int* ptr984 = &(t982)[c983];
      __first968 = ptr984;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v985, int* v986, int* v987) {
bb988:
  int* __first989;
  int* __last990;
  int* __value991;
  __first989 = v985;
  __last990 = v986;
  __value991 = v987;
  int* t992 = __first989;
  int* t993 = __last990;
  int* t994 = __value991;
  void_std____fill_a1_int___int_(t992, t993, t994);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v995, unsigned long v996, int* v997, struct std__random_access_iterator_tag v998) {
bb999:
  int* __first1000;
  unsigned long __n1001;
  int* __value1002;
  struct std__random_access_iterator_tag unnamed1003;
  int* __retval1004;
  __first1000 = v995;
  __n1001 = v996;
  __value1002 = v997;
  unnamed1003 = v998;
    unsigned long t1005 = __n1001;
    unsigned long c1006 = 0;
    _Bool c1007 = ((t1005 <= c1006)) ? 1 : 0;
    if (c1007) {
      int* t1008 = __first1000;
      __retval1004 = t1008;
      int* t1009 = __retval1004;
      return t1009;
    }
  int* t1010 = __first1000;
  int* t1011 = __first1000;
  unsigned long t1012 = __n1001;
  int* ptr1013 = &(t1011)[t1012];
  int* t1014 = __value1002;
  void_std____fill_a_int___int_(t1010, ptr1013, t1014);
  int* t1015 = __first1000;
  unsigned long t1016 = __n1001;
  int* ptr1017 = &(t1015)[t1016];
  __retval1004 = ptr1017;
  int* t1018 = __retval1004;
  return t1018;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1019) {
bb1020:
  unsigned long __n1021;
  unsigned long __retval1022;
  __n1021 = v1019;
  unsigned long t1023 = __n1021;
  __retval1022 = t1023;
  unsigned long t1024 = __retval1022;
  return t1024;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1025) {
bb1026:
  int** unnamed1027;
  struct std__random_access_iterator_tag __retval1028;
  unnamed1027 = v1025;
  struct std__random_access_iterator_tag t1029 = __retval1028;
  return t1029;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1030, unsigned long v1031, int* v1032) {
bb1033:
  int* __first1034;
  unsigned long __n1035;
  int* __value1036;
  int* __retval1037;
  struct std__random_access_iterator_tag agg_tmp01038;
  __first1034 = v1030;
  __n1035 = v1031;
  __value1036 = v1032;
  int* t1039 = __first1034;
  unsigned long t1040 = __n1035;
  unsigned long r1041 = std____size_to_integer(t1040);
  int* t1042 = __value1036;
  struct std__random_access_iterator_tag r1043 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1034);
  agg_tmp01038 = r1043;
  struct std__random_access_iterator_tag t1044 = agg_tmp01038;
  int* r1045 = int__std____fill_n_a_int___unsigned_long__int_(t1039, r1041, t1042, t1044);
  __retval1037 = r1045;
  int* t1046 = __retval1037;
  return t1046;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1047, unsigned long v1048) {
bb1049:
  int* __first1050;
  unsigned long __n1051;
  int* __retval1052;
  __first1050 = v1047;
  __n1051 = v1048;
    unsigned long t1053 = __n1051;
    unsigned long c1054 = 0;
    _Bool c1055 = ((t1053 > c1054)) ? 1 : 0;
    if (c1055) {
      int* __val1056;
      int* t1057 = __first1050;
      __val1056 = t1057;
      int* t1058 = __val1056;
      void_std___Construct_int_(t1058);
      int* t1059 = __first1050;
      int c1060 = 1;
      int* ptr1061 = &(t1059)[c1060];
      __first1050 = ptr1061;
      int* t1062 = __first1050;
      unsigned long t1063 = __n1051;
      unsigned long c1064 = 1;
      unsigned long b1065 = t1063 - c1064;
      int* t1066 = __val1056;
      int* r1067 = int__std__fill_n_int___unsigned_long__int_(t1062, b1065, t1066);
      __first1050 = r1067;
    }
  int* t1068 = __first1050;
  __retval1052 = t1068;
  int* t1069 = __retval1052;
  return t1069;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1070, unsigned long v1071) {
bb1072:
  int* __first1073;
  unsigned long __n1074;
  int* __retval1075;
  _Bool __can_fill1076;
  __first1073 = v1070;
  __n1074 = v1071;
    _Bool r1077 = std__is_constant_evaluated();
    if (r1077) {
      int* t1078 = __first1073;
      unsigned long t1079 = __n1074;
      int* r1080 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1078, t1079);
      __retval1075 = r1080;
      int* t1081 = __retval1075;
      return t1081;
    }
  _Bool c1082 = 1;
  __can_fill1076 = c1082;
  int* t1083 = __first1073;
  unsigned long t1084 = __n1074;
  int* r1085 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1083, t1084);
  __retval1075 = r1085;
  int* t1086 = __retval1075;
  return t1086;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1087, unsigned long v1088, struct std__allocator_int_* v1089) {
bb1090:
  int* __first1091;
  unsigned long __n1092;
  struct std__allocator_int_* unnamed1093;
  int* __retval1094;
  __first1091 = v1087;
  __n1092 = v1088;
  unnamed1093 = v1089;
  int* t1095 = __first1091;
  unsigned long t1096 = __n1092;
  int* r1097 = int__std____uninitialized_default_n_int___unsigned_long_(t1095, t1096);
  __retval1094 = r1097;
  int* t1098 = __retval1094;
  return t1098;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1099) {
bb1100:
  struct std___Vector_base_int__std__allocator_int__* this1101;
  struct std__allocator_int_* __retval1102;
  this1101 = v1099;
  struct std___Vector_base_int__std__allocator_int__* t1103 = this1101;
  struct std__allocator_int_* base1104 = (struct std__allocator_int_*)((char *)&(t1103->_M_impl) + 0);
  __retval1102 = base1104;
  struct std__allocator_int_* t1105 = __retval1102;
  return t1105;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1106, unsigned long v1107) {
bb1108:
  struct std__vector_int__std__allocator_int__* this1109;
  unsigned long __n1110;
  this1109 = v1106;
  __n1110 = v1107;
  struct std__vector_int__std__allocator_int__* t1111 = this1109;
  struct std___Vector_base_int__std__allocator_int__* base1112 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1111 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1113 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1112->_M_impl) + 0);
  int* t1114 = base1113->_M_start;
  unsigned long t1115 = __n1110;
  struct std___Vector_base_int__std__allocator_int__* base1116 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1111 + 0);
  struct std__allocator_int_* r1117 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1116);
  int* r1118 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1114, t1115, r1117);
  struct std___Vector_base_int__std__allocator_int__* base1119 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1111 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1120 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1119->_M_impl) + 0);
  base1120->_M_finish = r1118;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1121, int* v1122, unsigned long v1123) {
bb1124:
  struct std____new_allocator_int_* this1125;
  int* __p1126;
  unsigned long __n1127;
  this1125 = v1121;
  __p1126 = v1122;
  __n1127 = v1123;
  struct std____new_allocator_int_* t1128 = this1125;
    unsigned long c1129 = 4;
    unsigned long c1130 = 16;
    _Bool c1131 = ((c1129 > c1130)) ? 1 : 0;
    if (c1131) {
      int* t1132 = __p1126;
      void* cast1133 = (void*)t1132;
      unsigned long t1134 = __n1127;
      unsigned long c1135 = 4;
      unsigned long b1136 = t1134 * c1135;
      unsigned long c1137 = 4;
      operator_delete_3(cast1133, b1136, c1137);
      return;
    }
  int* t1138 = __p1126;
  void* cast1139 = (void*)t1138;
  unsigned long t1140 = __n1127;
  unsigned long c1141 = 4;
  unsigned long b1142 = t1140 * c1141;
  operator_delete_2(cast1139, b1142);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1143, int* v1144, unsigned long v1145) {
bb1146:
  struct std__allocator_int_* this1147;
  int* __p1148;
  unsigned long __n1149;
  this1147 = v1143;
  __p1148 = v1144;
  __n1149 = v1145;
  struct std__allocator_int_* t1150 = this1147;
    _Bool r1151 = std____is_constant_evaluated();
    if (r1151) {
      int* t1152 = __p1148;
      void* cast1153 = (void*)t1152;
      operator_delete(cast1153);
      return;
    }
  struct std____new_allocator_int_* base1154 = (struct std____new_allocator_int_*)((char *)t1150 + 0);
  int* t1155 = __p1148;
  unsigned long t1156 = __n1149;
  std____new_allocator_int___deallocate(base1154, t1155, t1156);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1157, int* v1158, unsigned long v1159) {
bb1160:
  struct std__allocator_int_* __a1161;
  int* __p1162;
  unsigned long __n1163;
  __a1161 = v1157;
  __p1162 = v1158;
  __n1163 = v1159;
  struct std__allocator_int_* t1164 = __a1161;
  int* t1165 = __p1162;
  unsigned long t1166 = __n1163;
  std__allocator_int___deallocate(t1164, t1165, t1166);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1167, int* v1168, unsigned long v1169) {
bb1170:
  struct std___Vector_base_int__std__allocator_int__* this1171;
  int* __p1172;
  unsigned long __n1173;
  this1171 = v1167;
  __p1172 = v1168;
  __n1173 = v1169;
  struct std___Vector_base_int__std__allocator_int__* t1174 = this1171;
    int* t1175 = __p1172;
    _Bool cast1176 = (_Bool)t1175;
    if (cast1176) {
      struct std__allocator_int_* base1177 = (struct std__allocator_int_*)((char *)&(t1174->_M_impl) + 0);
      int* t1178 = __p1172;
      unsigned long t1179 = __n1173;
      std__allocator_traits_std__allocator_int_____deallocate(base1177, t1178, t1179);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1180) {
bb1181:
  struct std___Vector_base_int__std__allocator_int__* this1182;
  this1182 = v1180;
  struct std___Vector_base_int__std__allocator_int__* t1183 = this1182;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1184 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1183->_M_impl) + 0);
    int* t1185 = base1184->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1186 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1183->_M_impl) + 0);
    int* t1187 = base1186->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1188 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1183->_M_impl) + 0);
    int* t1189 = base1188->_M_start;
    long diff1190 = t1187 - t1189;
    unsigned long cast1191 = (unsigned long)diff1190;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1183, t1185, cast1191);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1183->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1192, struct std____new_allocator_int_* v1193) {
bb1194:
  struct std____new_allocator_int_* this1195;
  struct std____new_allocator_int_* unnamed1196;
  this1195 = v1192;
  unnamed1196 = v1193;
  struct std____new_allocator_int_* t1197 = this1195;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1198) {
bb1199:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1200;
  this1200 = v1198;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1201 = this1200;
  int* c1202 = ((void*)0);
  t1201->_M_start = c1202;
  int* c1203 = ((void*)0);
  t1201->_M_finish = c1203;
  int* c1204 = ((void*)0);
  t1201->_M_end_of_storage = c1204;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1205) {
bb1206:
  int* __location1207;
  __location1207 = v1205;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1208, int* v1209) {
bb1210:
  int* __first1211;
  int* __last1212;
  __first1211 = v1208;
  __last1212 = v1209;
      _Bool r1213 = std____is_constant_evaluated();
      if (r1213) {
          while (1) {
            int* t1215 = __first1211;
            int* t1216 = __last1212;
            _Bool c1217 = ((t1215 != t1216)) ? 1 : 0;
            if (!c1217) break;
            int* t1218 = __first1211;
            void_std__destroy_at_int_(t1218);
          for_step1214: ;
            int* t1219 = __first1211;
            int c1220 = 1;
            int* ptr1221 = &(t1219)[c1220];
            __first1211 = ptr1221;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1222, int* v1223, struct std__allocator_int_* v1224) {
bb1225:
  int* __first1226;
  int* __last1227;
  struct std__allocator_int_* unnamed1228;
  __first1226 = v1222;
  __last1227 = v1223;
  unnamed1228 = v1224;
  int* t1229 = __first1226;
  int* t1230 = __last1227;
  void_std___Destroy_int__(t1229, t1230);
  return;
}

