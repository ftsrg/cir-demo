extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}
__attribute__((weak)) long __VERIFIER_virtual_call_long_char_ptr_long(void* __obj, int __slot, char* __a0, long __a1) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((long(*)(void*, char*, long))__fn)(__obj, __a0, __a1);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_char____void_ { char* _M_first; char** _M_cur; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostreambuf_iterator_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__* _M_sbuf; _Bool _M_failed; unsigned char __field2[7]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl { struct std___Vector_base_char__std__allocator_char_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _ZZ10nextLettervE6letter = 65;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[37] = "Vector chars after filling with 5s:\n";
char _str_1[43] = "\n\nVector chars after filling five elements";
char _str_2[11] = " with As:\n";
char _str_3[46] = "\n\nVector chars after generating letters A-J:\n";
char _str_4[44] = "\n\nVector chars after generating K-O for the";
char _str_5[23] = " first five elements:\n";
char _str_6[49] = "cannot create std::vector larger than max_size()";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std__vector_char__std__allocator_char_____vector(struct std__vector_char__std__allocator_char__* p0, unsigned long p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void std__ostreambuf_iterator_char__std__char_traits_char_____ostreambuf_iterator(struct std__ostreambuf_iterator_char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1);
char** __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
void void_std____fill_a1_char___std__vector_char__std__allocator_char_____char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, char* p2);
void void_std____fill_a___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, char* p2);
void void_std__fill___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, char* p2);
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end(struct std__vector_char__std__allocator_char__* p0);
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
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std____niter_wrap_std__ostreambuf_iterator_char__std__char_traits_char_____(struct std__ostreambuf_iterator_char__std__char_traits_char__* p0, struct std__ostreambuf_iterator_char__std__char_traits_char__ p1);
long std__basic_streambuf_char__std__char_traits_char_____sputn(struct std__basic_streambuf_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__ostreambuf_iterator_char__std__char_traits_char__* std__ostreambuf_iterator_char__std__char_traits_char______M_put(struct std__ostreambuf_iterator_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__ostreambuf_iterator_char__std__char_traits_char__ __gnu_cxx____enable_if___is_char_char_____value__std__ostreambuf_iterator_char__std__char_traits_char_________type_std____copy_move_a2_false__char_(char* p0, char* p1, struct std__ostreambuf_iterator_char__std__char_traits_char__ p2);
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std____copy_move_a1_false__char___std__ostreambuf_iterator_char__std__char_traits_char_____(char* p0, char* p1, struct std__ostreambuf_iterator_char__std__char_traits_char__ p2);
char* char__std____niter_base_char___std__vector_char__std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0);
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std____niter_base_std__ostreambuf_iterator_char__std__char_traits_char_____(struct std__ostreambuf_iterator_char__std__char_traits_char__ p0);
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______std__ostreambuf_iterator_char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, struct std__ostreambuf_iterator_char__std__char_traits_char__ p2);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std____miter_base___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0);
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______std__ostreambuf_iterator_char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, struct std__ostreambuf_iterator_char__std__char_traits_char__ p2);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, long p1);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std____fill_n_a___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, int p1, char* p2, struct std__random_access_iterator_tag p3);
int std____size_to_integer(int p0);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__fill_n___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, int p1, char* p2);
_Bool _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p1);
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
void void_std__generate___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char__________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, void* p2);
char nextLetter();
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__generate_n___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char__________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, int p1, void* p2);
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
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_char__std__allocator_char______S_check_init_len(unsigned long p0, struct std__allocator_char_* p1);
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0, struct std__allocator_char_* p1);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* p0, unsigned long p1);
void std___Vector_base_char__std__allocator_char______M_create_storage(struct std___Vector_base_char__std__allocator_char__* p0, unsigned long p1);
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0);
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0, unsigned long p1, struct std__allocator_char_* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_char___void____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* p0, char** p1);
char* _ZSt12construct_atIcJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(char* p0);
void void_std___Construct_char_(char* p0);
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* p0);
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* p0);
char* char__std____uninitialized_default_n_1_false_____uninit_default_n_char___unsigned_long_(char* p0, unsigned long p1);
extern void* memset(void* p0, int p1, unsigned long p2);
void __gnu_cxx____enable_if___is_byte_char_____value_____are_same_char__char_____value____memcpyable_integer_char_____width___void_____type_std____fill_a1_char__char_(char* p0, char* p1, char* p2);
void void_std____fill_a_char___char_(char* p0, char* p1, char* p2);
char* char__std____fill_n_a_char___unsigned_long__char_(char* p0, unsigned long p1, char* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer_2(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_char____iterator_category_std____iterator_category_char__(char** p0);
char* char__std__fill_n_char___unsigned_long__char_(char* p0, unsigned long p1, char* p2);
char* char__std____uninitialized_default_n_1_true_____uninit_default_n_char___unsigned_long_(char* p0, unsigned long p1);
char* char__std____uninitialized_default_n_char___unsigned_long_(char* p0, unsigned long p1);
char* char__std____uninitialized_default_n_a_char___unsigned_long__char_(char* p0, unsigned long p1, struct std__allocator_char_* p2);
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* p0);
void std__vector_char__std__allocator_char______M_default_initialize(struct std__vector_char__std__allocator_char__* p0, unsigned long p1);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* p0);
void void_std__destroy_at_char_(char* p0);
void void_std___Destroy_char__(char* p0, char* p1);
void void_std___Destroy_char___char_(char* p0, char* p1, struct std__allocator_char_* p2);
struct std__basic_streambuf_char__std__char_traits_char__* std__basic_ios_char__std__char_traits_char_____rdbuf___const(struct std__basic_ios_char__std__char_traits_char__* p0);

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIcSaIcEEC2EmRKS0_
void std__vector_char__std__allocator_char_____vector(struct std__vector_char__std__allocator_char__* v5, unsigned long v6, struct std__allocator_char_* v7) {
bb8:
  struct std__vector_char__std__allocator_char__* this9;
  unsigned long __n10;
  struct std__allocator_char_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__vector_char__std__allocator_char__* t12 = this9;
  struct std___Vector_base_char__std__allocator_char__* base13 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t12 + 0);
  unsigned long t14 = __n10;
  struct std__allocator_char_* t15 = __a11;
  unsigned long r16 = std__vector_char__std__allocator_char______S_check_init_len(t14, t15);
  struct std__allocator_char_* t17 = __a11;
  std___Vector_base_char__std__allocator_char______Vector_base(base13, r16, t17);
    unsigned long t18 = __n10;
    std__vector_char__std__allocator_char______M_default_initialize(t12, t18);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v19) {
bb20:
  struct std__allocator_char_* this21;
  this21 = v19;
  struct std__allocator_char_* t22 = this21;
  return;
}

// function: _ZNSt19ostreambuf_iteratorIcSt11char_traitsIcEEC2ERSo
void std__ostreambuf_iterator_char__std__char_traits_char_____ostreambuf_iterator(struct std__ostreambuf_iterator_char__std__char_traits_char__* v23, struct std__basic_ostream_char__std__char_traits_char__* v24) {
bb25:
  struct std__ostreambuf_iterator_char__std__char_traits_char__* this26;
  struct std__basic_ostream_char__std__char_traits_char__* __s27;
  this26 = v23;
  __s27 = v24;
  struct std__ostreambuf_iterator_char__std__char_traits_char__* t28 = this26;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base29 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t28 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t30 = __s27;
  void** v31 = (void**)t30;
  void* v32 = *((void**)v31);
  unsigned char* cast33 = (unsigned char*)v32;
  long c34 = -24;
  unsigned char* ptr35 = &(cast33)[c34];
  long* cast36 = (long*)ptr35;
  long t37 = *cast36;
  unsigned char* cast38 = (unsigned char*)t30;
  unsigned char* ptr39 = &(cast38)[t37];
  struct std__basic_ostream_char__std__char_traits_char__* cast40 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr39;
  struct std__basic_ios_char__std__char_traits_char__* cast41 = (struct std__basic_ios_char__std__char_traits_char__*)cast40;
  struct std__basic_streambuf_char__std__char_traits_char__* r42 = std__basic_ios_char__std__char_traits_char_____rdbuf___const(cast41);
  t28->_M_sbuf = r42;
  struct std__basic_streambuf_char__std__char_traits_char__* t43 = t28->_M_sbuf;
  _Bool cast44 = (_Bool)t43;
  _Bool u45 = !cast44;
  t28->_M_failed = u45;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v46) {
bb47:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this48;
  char** __retval49;
  this48 = v46;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t50 = this48;
  __retval49 = &t50->_M_current;
  char** t51 = __retval49;
  return t51;
}

// function: _ZSt9__fill_a1IPcSt6vectorIcSaIcEEcEvN9__gnu_cxx17__normal_iteratorIT_T0_EES8_RKT1_
void void_std____fill_a1_char___std__vector_char__std__allocator_char_____char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v52, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v53, char* v54) {
bb55:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first56;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last57;
  char* __value58;
  __first56 = v52;
  __last57 = v53;
  __value58 = v54;
  char** r59 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(&__first56);
  char* t60 = *r59;
  char** r61 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(&__last57);
  char* t62 = *r61;
  char* t63 = __value58;
  __gnu_cxx____enable_if___is_byte_char_____value_____are_same_char__char_____value____memcpyable_integer_char_____width___void_____type_std____fill_a1_char__char_(t60, t62, t63);
  return;
}

// function: _ZSt8__fill_aIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEcEvT_S7_RKT0_
void void_std____fill_a___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v64, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v65, char* v66) {
bb67:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first68;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last69;
  char* __value70;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp071;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp172;
  __first68 = v64;
  __last69 = v65;
  __value70 = v66;
  agg_tmp071 = __first68; // copy
  agg_tmp172 = __last69; // copy
  char* t73 = __value70;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t74 = agg_tmp071;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t75 = agg_tmp172;
  void_std____fill_a1_char___std__vector_char__std__allocator_char_____char_(t74, t75, t73);
  return;
}

// function: _ZSt4fillIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEcEvT_S7_RKT0_
void void_std__fill___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v76, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v77, char* v78) {
bb79:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first80;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last81;
  char* __value82;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp083;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp184;
  __first80 = v76;
  __last81 = v77;
  __value82 = v78;
  agg_tmp083 = __first80; // copy
  agg_tmp184 = __last81; // copy
  char* t85 = __value82;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t86 = agg_tmp083;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t87 = agg_tmp184;
  void_std____fill_a___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char_(t86, t87, t85);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v88, char** v89) {
bb90:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this91;
  char** __i92;
  this91 = v88;
  __i92 = v89;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t93 = this91;
  char** t94 = __i92;
  char* t95 = *t94;
  t93->_M_current = t95;
  return;
}

// function: _ZNSt6vectorIcSaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* v96) {
bb97:
  struct std__vector_char__std__allocator_char__* this98;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval99;
  this98 = v96;
  struct std__vector_char__std__allocator_char__* t100 = this98;
  struct std___Vector_base_char__std__allocator_char__* base101 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t100 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base102 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base101->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval99, &base102->_M_start);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t103 = __retval99;
  return t103;
}

// function: _ZNSt6vectorIcSaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end(struct std__vector_char__std__allocator_char__* v104) {
bb105:
  struct std__vector_char__std__allocator_char__* this106;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval107;
  this106 = v104;
  struct std__vector_char__std__allocator_char__* t108 = this106;
  struct std___Vector_base_char__std__allocator_char__* base109 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t108 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base110 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base109->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval107, &base110->_M_finish);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t111 = __retval107;
  return t111;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v112, int v113) {
bb114:
  int __a115;
  int __b116;
  int __retval117;
  __a115 = v112;
  __b116 = v113;
  int t118 = __a115;
  int t119 = __b116;
  int b120 = t118 | t119;
  __retval117 = b120;
  int t121 = __retval117;
  return t121;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v122) {
bb123:
  struct std__basic_ios_char__std__char_traits_char__* this124;
  int __retval125;
  this124 = v122;
  struct std__basic_ios_char__std__char_traits_char__* t126 = this124;
  struct std__ios_base* base127 = (struct std__ios_base*)((char *)t126 + 0);
  int t128 = base127->_M_streambuf_state;
  __retval125 = t128;
  int t129 = __retval125;
  return t129;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v130, int v131) {
bb132:
  struct std__basic_ios_char__std__char_traits_char__* this133;
  int __state134;
  this133 = v130;
  __state134 = v131;
  struct std__basic_ios_char__std__char_traits_char__* t135 = this133;
  int r136 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t135);
  int t137 = __state134;
  int r138 = std__operator_(r136, t137);
  std__basic_ios_char__std__char_traits_char_____clear(t135, r138);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v139, char* v140) {
bb141:
  char* __c1142;
  char* __c2143;
  _Bool __retval144;
  __c1142 = v139;
  __c2143 = v140;
  char* t145 = __c1142;
  char t146 = *t145;
  int cast147 = (int)t146;
  char* t148 = __c2143;
  char t149 = *t148;
  int cast150 = (int)t149;
  _Bool c151 = ((cast147 == cast150)) ? 1 : 0;
  __retval144 = c151;
  _Bool t152 = __retval144;
  return t152;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v153) {
bb154:
  char* __p155;
  unsigned long __retval156;
  unsigned long __i157;
  __p155 = v153;
  unsigned long c158 = 0;
  __i157 = c158;
    char ref_tmp0159;
    while (1) {
      unsigned long t160 = __i157;
      char* t161 = __p155;
      char* ptr162 = &(t161)[t160];
      char c163 = 0;
      ref_tmp0159 = c163;
      _Bool r164 = __gnu_cxx__char_traits_char___eq(ptr162, &ref_tmp0159);
      _Bool u165 = !r164;
      if (!u165) break;
      unsigned long t166 = __i157;
      unsigned long u167 = t166 + 1;
      __i157 = u167;
    }
  unsigned long t168 = __i157;
  __retval156 = t168;
  unsigned long t169 = __retval156;
  return t169;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v170) {
bb171:
  char* __s172;
  unsigned long __retval173;
  __s172 = v170;
    _Bool r174 = std____is_constant_evaluated();
    if (r174) {
      char* t175 = __s172;
      unsigned long r176 = __gnu_cxx__char_traits_char___length(t175);
      __retval173 = r176;
      unsigned long t177 = __retval173;
      return t177;
    }
  char* t178 = __s172;
  unsigned long r179 = strlen(t178);
  __retval173 = r179;
  unsigned long t180 = __retval173;
  return t180;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v181, char* v182) {
bb183:
  struct std__basic_ostream_char__std__char_traits_char__* __out184;
  char* __s185;
  struct std__basic_ostream_char__std__char_traits_char__* __retval186;
  __out184 = v181;
  __s185 = v182;
    char* t187 = __s185;
    _Bool cast188 = (_Bool)t187;
    _Bool u189 = !cast188;
    if (u189) {
      struct std__basic_ostream_char__std__char_traits_char__* t190 = __out184;
      void** v191 = (void**)t190;
      void* v192 = *((void**)v191);
      unsigned char* cast193 = (unsigned char*)v192;
      long c194 = -24;
      unsigned char* ptr195 = &(cast193)[c194];
      long* cast196 = (long*)ptr195;
      long t197 = *cast196;
      unsigned char* cast198 = (unsigned char*)t190;
      unsigned char* ptr199 = &(cast198)[t197];
      struct std__basic_ostream_char__std__char_traits_char__* cast200 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr199;
      struct std__basic_ios_char__std__char_traits_char__* cast201 = (struct std__basic_ios_char__std__char_traits_char__*)cast200;
      int t202 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast201, t202);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t203 = __out184;
      char* t204 = __s185;
      char* t205 = __s185;
      unsigned long r206 = std__char_traits_char___length(t205);
      long cast207 = (long)r206;
      struct std__basic_ostream_char__std__char_traits_char__* r208 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t203, t204, cast207);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t209 = __out184;
  __retval186 = t209;
  struct std__basic_ostream_char__std__char_traits_char__* t210 = __retval186;
  return t210;
}

// function: _ZSt12__niter_wrapISt19ostreambuf_iteratorIcSt11char_traitsIcEEET_RKS4_S4_
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std____niter_wrap_std__ostreambuf_iterator_char__std__char_traits_char_____(struct std__ostreambuf_iterator_char__std__char_traits_char__* v211, struct std__ostreambuf_iterator_char__std__char_traits_char__ v212) {
bb213:
  struct std__ostreambuf_iterator_char__std__char_traits_char__* unnamed214;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __res215;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __retval216;
  unnamed214 = v211;
  __res215 = v212;
  __retval216 = __res215; // copy
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t217 = __retval216;
  return t217;
}

// function: _ZNSt15basic_streambufIcSt11char_traitsIcEE5sputnEPKcl
long std__basic_streambuf_char__std__char_traits_char_____sputn(struct std__basic_streambuf_char__std__char_traits_char__* v218, char* v219, long v220) {
bb221:
  struct std__basic_streambuf_char__std__char_traits_char__* this222;
  char* __s223;
  long __n224;
  long __retval225;
  this222 = v218;
  __s223 = v219;
  __n224 = v220;
  struct std__basic_streambuf_char__std__char_traits_char__* t226 = this222;
  char* t227 = __s223;
  long t228 = __n224;
  void** v229 = (void**)t226;
  void* v230 = *((void**)v229);
  long vcall233 = (long)__VERIFIER_virtual_call_long_char_ptr_long(t226, 12, t227, t228);
  __retval225 = vcall233;
  long t234 = __retval225;
  return t234;
}

// function: _ZNSt19ostreambuf_iteratorIcSt11char_traitsIcEE6_M_putEPKcl
struct std__ostreambuf_iterator_char__std__char_traits_char__* std__ostreambuf_iterator_char__std__char_traits_char______M_put(struct std__ostreambuf_iterator_char__std__char_traits_char__* v235, char* v236, long v237) {
bb238:
  struct std__ostreambuf_iterator_char__std__char_traits_char__* this239;
  char* __ws240;
  long __len241;
  struct std__ostreambuf_iterator_char__std__char_traits_char__* __retval242;
  this239 = v235;
  __ws240 = v236;
  __len241 = v237;
  struct std__ostreambuf_iterator_char__std__char_traits_char__* t243 = this239;
    _Bool t244 = t243->_M_failed;
    _Bool u245 = !t244;
    _Bool ternary246;
    if (u245) {
      struct std__basic_streambuf_char__std__char_traits_char__* t247 = t243->_M_sbuf;
      char* t248 = __ws240;
      long t249 = __len241;
      long r250 = std__basic_streambuf_char__std__char_traits_char_____sputn(t247, t248, t249);
      long t251 = __len241;
      _Bool c252 = ((r250 != t251)) ? 1 : 0;
      ternary246 = (_Bool)c252;
    } else {
      _Bool c253 = 0;
      ternary246 = (_Bool)c253;
    }
    if (ternary246) {
      _Bool c254 = 1;
      t243->_M_failed = c254;
    }
  __retval242 = t243;
  struct std__ostreambuf_iterator_char__std__char_traits_char__* t255 = __retval242;
  return t255;
}

// function: _ZSt14__copy_move_a2ILb0EcEN9__gnu_cxx11__enable_ifIXsr9__is_charIT0_EE7__valueESt19ostreambuf_iteratorIS2_St11char_traitsIS2_EEE6__typeEPS2_S9_S6_
struct std__ostreambuf_iterator_char__std__char_traits_char__ __gnu_cxx____enable_if___is_char_char_____value__std__ostreambuf_iterator_char__std__char_traits_char_________type_std____copy_move_a2_false__char_(char* v256, char* v257, struct std__ostreambuf_iterator_char__std__char_traits_char__ v258) {
bb259:
  char* __first260;
  char* __last261;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __result262;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __retval263;
  long __num264;
  __first260 = v256;
  __last261 = v257;
  __result262 = v258;
  char* t265 = __last261;
  char* t266 = __first260;
  long diff267 = t265 - t266;
  __num264 = diff267;
    long t268 = __num264;
    long c269 = 0;
    _Bool c270 = ((t268 > c269)) ? 1 : 0;
    if (c270) {
      char* t271 = __first260;
      long t272 = __num264;
      struct std__ostreambuf_iterator_char__std__char_traits_char__* r273 = std__ostreambuf_iterator_char__std__char_traits_char______M_put(&__result262, t271, t272);
    }
  __retval263 = __result262; // copy
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t274 = __retval263;
  return t274;
}

// function: _ZSt14__copy_move_a1ILb0EPcSt19ostreambuf_iteratorIcSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std____copy_move_a1_false__char___std__ostreambuf_iterator_char__std__char_traits_char_____(char* v275, char* v276, struct std__ostreambuf_iterator_char__std__char_traits_char__ v277) {
bb278:
  char* __first279;
  char* __last280;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __result281;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __retval282;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp0283;
  __first279 = v275;
  __last280 = v276;
  __result281 = v277;
  char* t284 = __first279;
  char* t285 = __last280;
  agg_tmp0283 = __result281; // copy
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t286 = agg_tmp0283;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ r287 = __gnu_cxx____enable_if___is_char_char_____value__std__ostreambuf_iterator_char__std__char_traits_char_________type_std____copy_move_a2_false__char_(t284, t285, t286);
  __retval282 = r287;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t288 = __retval282;
  return t288;
}

// function: _ZSt12__niter_baseIPcSt6vectorIcSaIcEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
char* char__std____niter_base_char___std__vector_char__std__allocator_char_____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v289) {
bb290:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __it291;
  char* __retval292;
  __it291 = v289;
  char** r293 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(&__it291);
  char* t294 = *r293;
  __retval292 = t294;
  char* t295 = __retval292;
  return t295;
}

// function: _ZSt12__niter_baseISt19ostreambuf_iteratorIcSt11char_traitsIcEEET_S4_
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std____niter_base_std__ostreambuf_iterator_char__std__char_traits_char_____(struct std__ostreambuf_iterator_char__std__char_traits_char__ v296) {
bb297:
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __it298;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __retval299;
  __it298 = v296;
  __retval299 = __it298; // copy
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t300 = __retval299;
  return t300;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEESt19ostreambuf_iteratorIcSt11char_traitsIcEEET1_T0_SC_SB_
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______std__ostreambuf_iterator_char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v301, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v302, struct std__ostreambuf_iterator_char__std__char_traits_char__ v303) {
bb304:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first305;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last306;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __result307;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __retval308;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp0309;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1310;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp2311;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp3312;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp4313;
  __first305 = v301;
  __last306 = v302;
  __result307 = v303;
  agg_tmp1310 = __first305; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t314 = agg_tmp1310;
  char* r315 = char__std____niter_base_char___std__vector_char__std__allocator_char_____(t314);
  agg_tmp2311 = __last306; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t316 = agg_tmp2311;
  char* r317 = char__std____niter_base_char___std__vector_char__std__allocator_char_____(t316);
  agg_tmp4313 = __result307; // copy
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t318 = agg_tmp4313;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ r319 = std__ostreambuf_iterator_char__std__char_traits_char____std____niter_base_std__ostreambuf_iterator_char__std__char_traits_char_____(t318);
  agg_tmp3312 = r319;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t320 = agg_tmp3312;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ r321 = std__ostreambuf_iterator_char__std__char_traits_char____std____copy_move_a1_false__char___std__ostreambuf_iterator_char__std__char_traits_char_____(r315, r317, t320);
  agg_tmp0309 = r321;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t322 = agg_tmp0309;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ r323 = std__ostreambuf_iterator_char__std__char_traits_char____std____niter_wrap_std__ostreambuf_iterator_char__std__char_traits_char_____(&__result307, t322);
  __retval308 = r323;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t324 = __retval308;
  return t324;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEET_S7_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std____miter_base___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v325) {
bb326:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __it327;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval328;
  __it327 = v325;
  __retval328 = __it327; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t329 = __retval328;
  return t329;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEESt19ostreambuf_iteratorIcSt11char_traitsIcEEET0_T_SC_SB_
struct std__ostreambuf_iterator_char__std__char_traits_char__ std__ostreambuf_iterator_char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______std__ostreambuf_iterator_char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v330, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v331, struct std__ostreambuf_iterator_char__std__char_traits_char__ v332) {
bb333:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first334;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last335;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __result336;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ __retval337;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp0338;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1339;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp2340;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp3341;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp4342;
  __first334 = v330;
  __last335 = v331;
  __result336 = v332;
  agg_tmp1339 = __first334; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t343 = agg_tmp1339;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r344 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std____miter_base___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______(t343);
  agg_tmp0338 = r344;
  agg_tmp3341 = __last335; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t345 = agg_tmp3341;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r346 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std____miter_base___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______(t345);
  agg_tmp2340 = r346;
  agg_tmp4342 = __result336; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t347 = agg_tmp0338;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t348 = agg_tmp2340;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t349 = agg_tmp4342;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ r350 = std__ostreambuf_iterator_char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______std__ostreambuf_iterator_char__std__char_traits_char_____(t347, t348, t349);
  __retval337 = r350;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ t351 = __retval337;
  return t351;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEplEl
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__long__const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v352, long v353) {
bb354:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this355;
  long __n356;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval357;
  char* ref_tmp0358;
  this355 = v352;
  __n356 = v353;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t359 = this355;
  char* t360 = t359->_M_current;
  long t361 = __n356;
  char* ptr362 = &(t360)[t361];
  ref_tmp0358 = ptr362;
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval357, &ref_tmp0358);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t363 = __retval357;
  return t363;
}

// function: _ZSt10__fill_n_aIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEicET_S7_T0_RKT1_St26random_access_iterator_tag
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std____fill_n_a___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v364, int v365, char* v366, struct std__random_access_iterator_tag v367) {
bb368:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first369;
  int __n370;
  char* __value371;
  struct std__random_access_iterator_tag unnamed372;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval373;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp0374;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1375;
  __first369 = v364;
  __n370 = v365;
  __value371 = v366;
  unnamed372 = v367;
    int t376 = __n370;
    int c377 = 0;
    _Bool c378 = ((t376 <= c377)) ? 1 : 0;
    if (c378) {
      __retval373 = __first369; // copy
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t379 = __retval373;
      return t379;
    }
  agg_tmp0374 = __first369; // copy
  int t380 = __n370;
  long cast381 = (long)t380;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r382 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__long__const(&__first369, cast381);
  agg_tmp1375 = r382;
  char* t383 = __value371;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t384 = agg_tmp0374;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t385 = agg_tmp1375;
  void_std____fill_a___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char_(t384, t385, t383);
  int t386 = __n370;
  long cast387 = (long)t386;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r388 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__long__const(&__first369, cast387);
  __retval373 = r388;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t389 = __retval373;
  return t389;
}

// function: _ZSt17__size_to_integeri
int std____size_to_integer(int v390) {
bb391:
  int __n392;
  int __retval393;
  __n392 = v390;
  int t394 = __n392;
  __retval393 = t394;
  int t395 = __retval393;
  return t395;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v396) {
bb397:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* unnamed398;
  struct std__random_access_iterator_tag __retval399;
  unnamed398 = v396;
  struct std__random_access_iterator_tag t400 = __retval399;
  return t400;
}

// function: _ZSt6fill_nIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEicET_S7_T0_RKT1_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__fill_n___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v401, int v402, char* v403) {
bb404:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first405;
  int __n406;
  char* __value407;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval408;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp0409;
  struct std__random_access_iterator_tag agg_tmp1410;
  __first405 = v401;
  __n406 = v402;
  __value407 = v403;
  agg_tmp0409 = __first405; // copy
  int t411 = __n406;
  int r412 = std____size_to_integer(t411);
  char* t413 = __value407;
  struct std__random_access_iterator_tag r414 = std__iterator_traits___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______(&__first405);
  agg_tmp1410 = r414;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t415 = agg_tmp0409;
  struct std__random_access_iterator_tag t416 = agg_tmp1410;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r417 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std____fill_n_a___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char_(t415, r412, t413, t416);
  __retval408 = r417;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t418 = __retval408;
  return t418;
}

// function: _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v419, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v420) {
bb421:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __lhs422;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __rhs423;
  _Bool __retval424;
  __lhs422 = v419;
  __rhs423 = v420;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t425 = __lhs422;
  char** r426 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t425);
  char* t427 = *r426;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t428 = __rhs423;
  char** r429 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t428);
  char* t430 = *r429;
  _Bool c431 = ((t427 == t430)) ? 1 : 0;
  __retval424 = c431;
  _Bool t432 = __retval424;
  return t432;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEdeEv
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v433) {
bb434:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this435;
  char* __retval436;
  this435 = v433;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t437 = this435;
  char* t438 = t437->_M_current;
  __retval436 = t438;
  char* t439 = __retval436;
  return t439;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEppEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v440) {
bb441:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this442;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __retval443;
  this442 = v440;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t444 = this442;
  char* t445 = t444->_M_current;
  int c446 = 1;
  char* ptr447 = &(t445)[c446];
  t444->_M_current = ptr447;
  __retval443 = t444;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t448 = __retval443;
  return t448;
}

// function: _ZSt8generateIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEPFcvEEvT_S9_T0_
void void_std__generate___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char__________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v449, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v450, void* v451) {
bb452:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first453;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last454;
  void* __gen455;
  __first453 = v449;
  __last454 = v450;
  __gen455 = v451;
    while (1) {
      _Bool r457 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first453, &__last454);
      _Bool u458 = !r457;
      if (!u458) break;
      void* t459 = __gen455;
      char r460 = ((char (*)())t459)();
      char* r461 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&__first453);
      *r461 = r460;
    for_step456: ;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r462 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(&__first453);
    }
  return;
}

// function: _Z10nextLetterv
char nextLetter() {
bb463:
  char __retval464;
  char t465 = _ZZ10nextLettervE6letter;
  char u466 = t465 + 1;
  *&_ZZ10nextLettervE6letter = u466;
  __retval464 = t465;
  char t467 = __retval464;
  return t467;
}

// function: _ZSt10generate_nIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEiPFcvEET_S9_T0_T1_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__generate_n___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char__________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v468, int v469, void* v470) {
bb471:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first472;
  int __n473;
  void* __gen474;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval475;
  __first472 = v468;
  __n473 = v469;
  __gen474 = v470;
    int __niter476;
    int t477 = __n473;
    int r478 = std____size_to_integer(t477);
    __niter476 = r478;
    while (1) {
      int t480 = __niter476;
      int c481 = 0;
      _Bool c482 = ((t480 > c481)) ? 1 : 0;
      if (!c482) break;
      void* t483 = __gen474;
      char r484 = ((char (*)())t483)();
      char* r485 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&__first472);
      *r485 = r484;
    for_step479: ;
      int t486 = __niter476;
      int u487 = t486 - 1;
      __niter476 = u487;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r488 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(&__first472);
    }
  __retval475 = __first472; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t489 = __retval475;
  return t489;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v490, void* v491) {
bb492:
  struct std__basic_ostream_char__std__char_traits_char__* this493;
  void* __pf494;
  struct std__basic_ostream_char__std__char_traits_char__* __retval495;
  this493 = v490;
  __pf494 = v491;
  struct std__basic_ostream_char__std__char_traits_char__* t496 = this493;
  void* t497 = __pf494;
  struct std__basic_ostream_char__std__char_traits_char__* r498 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t497)(t496);
  __retval495 = r498;
  struct std__basic_ostream_char__std__char_traits_char__* t499 = __retval495;
  return t499;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v500) {
bb501:
  struct std__basic_ostream_char__std__char_traits_char__* __os502;
  struct std__basic_ostream_char__std__char_traits_char__* __retval503;
  __os502 = v500;
  struct std__basic_ostream_char__std__char_traits_char__* t504 = __os502;
  struct std__basic_ostream_char__std__char_traits_char__* r505 = std__ostream__flush(t504);
  __retval503 = r505;
  struct std__basic_ostream_char__std__char_traits_char__* t506 = __retval503;
  return t506;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v507) {
bb508:
  struct std__ctype_char_* __f509;
  struct std__ctype_char_* __retval510;
  __f509 = v507;
    struct std__ctype_char_* t511 = __f509;
    _Bool cast512 = (_Bool)t511;
    _Bool u513 = !cast512;
    if (u513) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t514 = __f509;
  __retval510 = t514;
  struct std__ctype_char_* t515 = __retval510;
  return t515;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v516, char v517) {
bb518:
  struct std__ctype_char_* this519;
  char __c520;
  char __retval521;
  this519 = v516;
  __c520 = v517;
  struct std__ctype_char_* t522 = this519;
    char t523 = t522->_M_widen_ok;
    _Bool cast524 = (_Bool)t523;
    if (cast524) {
      char t525 = __c520;
      unsigned char cast526 = (unsigned char)t525;
      unsigned long cast527 = (unsigned long)cast526;
      char t528 = t522->_M_widen[cast527];
      __retval521 = t528;
      char t529 = __retval521;
      return t529;
    }
  std__ctype_char____M_widen_init___const(t522);
  char t530 = __c520;
  void** v531 = (void**)t522;
  void* v532 = *((void**)v531);
  char vcall535 = (char)__VERIFIER_virtual_call_char_char(t522, 6, t530);
  __retval521 = vcall535;
  char t536 = __retval521;
  return t536;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v537, char v538) {
bb539:
  struct std__basic_ios_char__std__char_traits_char__* this540;
  char __c541;
  char __retval542;
  this540 = v537;
  __c541 = v538;
  struct std__basic_ios_char__std__char_traits_char__* t543 = this540;
  struct std__ctype_char_* t544 = t543->_M_ctype;
  struct std__ctype_char_* r545 = std__ctype_char__const__std____check_facet_std__ctype_char___(t544);
  char t546 = __c541;
  char r547 = std__ctype_char___widen_char__const(r545, t546);
  __retval542 = r547;
  char t548 = __retval542;
  return t548;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v549) {
bb550:
  struct std__basic_ostream_char__std__char_traits_char__* __os551;
  struct std__basic_ostream_char__std__char_traits_char__* __retval552;
  __os551 = v549;
  struct std__basic_ostream_char__std__char_traits_char__* t553 = __os551;
  struct std__basic_ostream_char__std__char_traits_char__* t554 = __os551;
  void** v555 = (void**)t554;
  void* v556 = *((void**)v555);
  unsigned char* cast557 = (unsigned char*)v556;
  long c558 = -24;
  unsigned char* ptr559 = &(cast557)[c558];
  long* cast560 = (long*)ptr559;
  long t561 = *cast560;
  unsigned char* cast562 = (unsigned char*)t554;
  unsigned char* ptr563 = &(cast562)[t561];
  struct std__basic_ostream_char__std__char_traits_char__* cast564 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr563;
  struct std__basic_ios_char__std__char_traits_char__* cast565 = (struct std__basic_ios_char__std__char_traits_char__*)cast564;
  char c566 = 10;
  char r567 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast565, c566);
  struct std__basic_ostream_char__std__char_traits_char__* r568 = std__ostream__put(t553, r567);
  struct std__basic_ostream_char__std__char_traits_char__* r569 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r568);
  __retval552 = r569;
  struct std__basic_ostream_char__std__char_traits_char__* t570 = __retval552;
  return t570;
}

// function: _ZNSt6vectorIcSaIcEED2Ev
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* v571) {
bb572:
  struct std__vector_char__std__allocator_char__* this573;
  this573 = v571;
  struct std__vector_char__std__allocator_char__* t574 = this573;
    struct std___Vector_base_char__std__allocator_char__* base575 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t574 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base576 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base575->_M_impl) + 0);
    char* t577 = base576->_M_start;
    struct std___Vector_base_char__std__allocator_char__* base578 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t574 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base579 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base578->_M_impl) + 0);
    char* t580 = base579->_M_finish;
    struct std___Vector_base_char__std__allocator_char__* base581 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t574 + 0);
    struct std__allocator_char_* r582 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base581);
    void_std___Destroy_char___char_(t577, t580, r582);
  {
    struct std___Vector_base_char__std__allocator_char__* base583 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t574 + 0);
    std___Vector_base_char__std__allocator_char_______Vector_base(base583);
  }
  return;
}

// function: main
int main() {
bb584:
  int __retval585;
  struct std__vector_char__std__allocator_char__ chars586;
  struct std__allocator_char_ ref_tmp0587;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ output588;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp0589;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1590;
  char ref_tmp1591;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp2592;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp3593;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp4594;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp5595;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp6596;
  char ref_tmp2597;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp7598;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp8599;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp9600;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp10601;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp11602;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp12603;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp13604;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp14605;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp15606;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp16607;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp17608;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp18609;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp19610;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp20611;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp21612;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp22613;
  struct std__ostreambuf_iterator_char__std__char_traits_char__ agg_tmp23614;
  int c615 = 0;
  __retval585 = c615;
  unsigned long c616 = 10;
  std__allocator_char___allocator_2(&ref_tmp0587);
    std__vector_char__std__allocator_char_____vector(&chars586, c616, &ref_tmp0587);
  {
    std__allocator_char____allocator(&ref_tmp0587);
  }
    std__ostreambuf_iterator_char__std__char_traits_char_____ostreambuf_iterator(&output588, &_ZSt4cout);
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r617 = std__vector_char__std__allocator_char_____begin(&chars586);
    agg_tmp0589 = r617;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r618 = std__vector_char__std__allocator_char_____end(&chars586);
    agg_tmp1590 = r618;
    char c619 = 53;
    ref_tmp1591 = c619;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t620 = agg_tmp0589;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t621 = agg_tmp1590;
    void_std__fill___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char_(t620, t621, &ref_tmp1591);
    char* cast622 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r623 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast622);
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r624 = std__vector_char__std__allocator_char_____begin(&chars586);
    agg_tmp2592 = r624;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r625 = std__vector_char__std__allocator_char_____end(&chars586);
    agg_tmp3593 = r625;
    agg_tmp4594 = output588; // copy
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t626 = agg_tmp2592;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t627 = agg_tmp3593;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ t628 = agg_tmp4594;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ r629 = std__ostreambuf_iterator_char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______std__ostreambuf_iterator_char__std__char_traits_char_____(t626, t627, t628);
    agg_tmp5595 = r629;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r630 = std__vector_char__std__allocator_char_____begin(&chars586);
    agg_tmp6596 = r630;
    int c631 = 5;
    char c632 = 65;
    ref_tmp2597 = c632;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t633 = agg_tmp6596;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r634 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__fill_n___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char_(t633, c631, &ref_tmp2597);
    agg_tmp7598 = r634;
    char* cast635 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r636 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast635);
    char* cast637 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r638 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r636, cast637);
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r639 = std__vector_char__std__allocator_char_____begin(&chars586);
    agg_tmp8599 = r639;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r640 = std__vector_char__std__allocator_char_____end(&chars586);
    agg_tmp9600 = r640;
    agg_tmp10601 = output588; // copy
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t641 = agg_tmp8599;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t642 = agg_tmp9600;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ t643 = agg_tmp10601;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ r644 = std__ostreambuf_iterator_char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______std__ostreambuf_iterator_char__std__char_traits_char_____(t641, t642, t643);
    agg_tmp11602 = r644;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r645 = std__vector_char__std__allocator_char_____begin(&chars586);
    agg_tmp12603 = r645;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r646 = std__vector_char__std__allocator_char_____end(&chars586);
    agg_tmp13604 = r646;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t647 = agg_tmp12603;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t648 = agg_tmp13604;
    void_std__generate___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char__________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______char____(t647, t648, &nextLetter);
    char* cast649 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r650 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast649);
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r651 = std__vector_char__std__allocator_char_____begin(&chars586);
    agg_tmp14605 = r651;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r652 = std__vector_char__std__allocator_char_____end(&chars586);
    agg_tmp15606 = r652;
    agg_tmp16607 = output588; // copy
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t653 = agg_tmp14605;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t654 = agg_tmp15606;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ t655 = agg_tmp16607;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ r656 = std__ostreambuf_iterator_char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______std__ostreambuf_iterator_char__std__char_traits_char_____(t653, t654, t655);
    agg_tmp17608 = r656;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r657 = std__vector_char__std__allocator_char_____begin(&chars586);
    agg_tmp18609 = r657;
    int c658 = 5;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t659 = agg_tmp18609;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r660 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__generate_n___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char__________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__char____(t659, c658, &nextLetter);
    agg_tmp19610 = r660;
    char* cast661 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r662 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast661);
    char* cast663 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r664 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r662, cast663);
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r665 = std__vector_char__std__allocator_char_____begin(&chars586);
    agg_tmp20611 = r665;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r666 = std__vector_char__std__allocator_char_____end(&chars586);
    agg_tmp21612 = r666;
    agg_tmp22613 = output588; // copy
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t667 = agg_tmp20611;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t668 = agg_tmp21612;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ t669 = agg_tmp22613;
    struct std__ostreambuf_iterator_char__std__char_traits_char__ r670 = std__ostreambuf_iterator_char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______std__ostreambuf_iterator_char__std__char_traits_char_____(t667, t668, t669);
    agg_tmp23614 = r670;
    struct std__basic_ostream_char__std__char_traits_char__* r671 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c672 = 0;
    __retval585 = c672;
    int t673 = __retval585;
    int ret_val674 = t673;
    {
      std__vector_char__std__allocator_char______vector(&chars586);
    }
    return ret_val674;
  int t675 = __retval585;
  return t675;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v676) {
bb677:
  struct std____new_allocator_char_* this678;
  this678 = v676;
  struct std____new_allocator_char_* t679 = this678;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v680, unsigned long* v681) {
bb682:
  unsigned long* __a683;
  unsigned long* __b684;
  unsigned long* __retval685;
  __a683 = v680;
  __b684 = v681;
    unsigned long* t686 = __b684;
    unsigned long t687 = *t686;
    unsigned long* t688 = __a683;
    unsigned long t689 = *t688;
    _Bool c690 = ((t687 < t689)) ? 1 : 0;
    if (c690) {
      unsigned long* t691 = __b684;
      __retval685 = t691;
      unsigned long* t692 = __retval685;
      return t692;
    }
  unsigned long* t693 = __a683;
  __retval685 = t693;
  unsigned long* t694 = __retval685;
  return t694;
}

// function: _ZNSt6vectorIcSaIcEE11_S_max_sizeERKS0_
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* v695) {
bb696:
  struct std__allocator_char_* __a697;
  unsigned long __retval698;
  unsigned long __diffmax699;
  unsigned long __allocmax700;
  __a697 = v695;
  unsigned long c701 = 9223372036854775807;
  __diffmax699 = c701;
  unsigned long c702 = -1;
  __allocmax700 = c702;
  unsigned long* r703 = unsigned_long_const__std__min_unsigned_long_(&__diffmax699, &__allocmax700);
  unsigned long t704 = *r703;
  __retval698 = t704;
  unsigned long t705 = __retval698;
  return t705;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v706, struct std__allocator_char_* v707) {
bb708:
  struct std__allocator_char_* this709;
  struct std__allocator_char_* __a710;
  this709 = v706;
  __a710 = v707;
  struct std__allocator_char_* t711 = this709;
  struct std____new_allocator_char_* base712 = (struct std____new_allocator_char_*)((char *)t711 + 0);
  struct std__allocator_char_* t713 = __a710;
  struct std____new_allocator_char_* base714 = (struct std____new_allocator_char_*)((char *)t713 + 0);
  std____new_allocator_char_____new_allocator(base712, base714);
  return;
}

// function: _ZNSt6vectorIcSaIcEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_char__std__allocator_char______S_check_init_len(unsigned long v715, struct std__allocator_char_* v716) {
bb717:
  unsigned long __n718;
  struct std__allocator_char_* __a719;
  unsigned long __retval720;
  __n718 = v715;
  __a719 = v716;
    struct std__allocator_char_ ref_tmp0721;
    _Bool tmp_exprcleanup722;
    unsigned long t723 = __n718;
    struct std__allocator_char_* t724 = __a719;
    std__allocator_char___allocator(&ref_tmp0721, t724);
      unsigned long r725 = std__vector_char__std__allocator_char______S_max_size(&ref_tmp0721);
      _Bool c726 = ((t723 > r725)) ? 1 : 0;
      tmp_exprcleanup722 = c726;
    {
      std__allocator_char____allocator(&ref_tmp0721);
    }
    _Bool t727 = tmp_exprcleanup722;
    if (t727) {
      char* cast728 = (char*)&(_str_6);
      std____throw_length_error(cast728);
    }
  unsigned long t729 = __n718;
  __retval720 = t729;
  unsigned long t730 = __retval720;
  return t730;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implC2ERKS0_
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v731, struct std__allocator_char_* v732) {
bb733:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this734;
  struct std__allocator_char_* __a735;
  this734 = v731;
  __a735 = v732;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t736 = this734;
  struct std__allocator_char_* base737 = (struct std__allocator_char_*)((char *)t736 + 0);
  struct std__allocator_char_* t738 = __a735;
  std__allocator_char___allocator(base737, t738);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base739 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)t736 + 0);
    std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(base739);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb740:
  _Bool __retval741;
    _Bool c742 = 0;
    __retval741 = c742;
    _Bool t743 = __retval741;
    return t743;
  abort();
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v744) {
bb745:
  struct std____new_allocator_char_* this746;
  unsigned long __retval747;
  this746 = v744;
  struct std____new_allocator_char_* t748 = this746;
  unsigned long c749 = 9223372036854775807;
  unsigned long c750 = 1;
  unsigned long b751 = c749 / c750;
  __retval747 = b751;
  unsigned long t752 = __retval747;
  return t752;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v753, unsigned long v754, void* v755) {
bb756:
  struct std____new_allocator_char_* this757;
  unsigned long __n758;
  void* unnamed759;
  char* __retval760;
  this757 = v753;
  __n758 = v754;
  unnamed759 = v755;
  struct std____new_allocator_char_* t761 = this757;
    unsigned long t762 = __n758;
    unsigned long r763 = std____new_allocator_char____M_max_size___const(t761);
    _Bool c764 = ((t762 > r763)) ? 1 : 0;
    if (c764) {
        unsigned long t765 = __n758;
        unsigned long c766 = -1;
        unsigned long c767 = 1;
        unsigned long b768 = c766 / c767;
        _Bool c769 = ((t765 > b768)) ? 1 : 0;
        if (c769) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c770 = 1;
    unsigned long c771 = 16;
    _Bool c772 = ((c770 > c771)) ? 1 : 0;
    if (c772) {
      unsigned long __al773;
      unsigned long c774 = 1;
      __al773 = c774;
      unsigned long t775 = __n758;
      unsigned long c776 = 1;
      unsigned long b777 = t775 * c776;
      unsigned long t778 = __al773;
      void* r779 = operator_new_2(b777, t778);
      char* cast780 = (char*)r779;
      __retval760 = cast780;
      char* t781 = __retval760;
      return t781;
    }
  unsigned long t782 = __n758;
  unsigned long c783 = 1;
  unsigned long b784 = t782 * c783;
  void* r785 = operator_new(b784);
  char* cast786 = (char*)r785;
  __retval760 = cast786;
  char* t787 = __retval760;
  return t787;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v788, unsigned long v789) {
bb790:
  struct std__allocator_char_* this791;
  unsigned long __n792;
  char* __retval793;
  this791 = v788;
  __n792 = v789;
  struct std__allocator_char_* t794 = this791;
    _Bool r795 = std____is_constant_evaluated();
    if (r795) {
        unsigned long t796 = __n792;
        unsigned long c797 = 1;
        unsigned long ovr798;
        _Bool ovf799 = __builtin_mul_overflow(t796, c797, &ovr798);
        __n792 = ovr798;
        if (ovf799) {
          std____throw_bad_array_new_length();
        }
      unsigned long t800 = __n792;
      void* r801 = operator_new(t800);
      char* cast802 = (char*)r801;
      __retval793 = cast802;
      char* t803 = __retval793;
      return t803;
    }
  struct std____new_allocator_char_* base804 = (struct std____new_allocator_char_*)((char *)t794 + 0);
  unsigned long t805 = __n792;
  void* c806 = ((void*)0);
  char* r807 = std____new_allocator_char___allocate(base804, t805, c806);
  __retval793 = r807;
  char* t808 = __retval793;
  return t808;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v809, unsigned long v810) {
bb811:
  struct std__allocator_char_* __a812;
  unsigned long __n813;
  char* __retval814;
  __a812 = v809;
  __n813 = v810;
  struct std__allocator_char_* t815 = __a812;
  unsigned long t816 = __n813;
  char* r817 = std__allocator_char___allocate(t815, t816);
  __retval814 = r817;
  char* t818 = __retval814;
  return t818;
}

// function: _ZNSt12_Vector_baseIcSaIcEE11_M_allocateEm
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* v819, unsigned long v820) {
bb821:
  struct std___Vector_base_char__std__allocator_char__* this822;
  unsigned long __n823;
  char* __retval824;
  this822 = v819;
  __n823 = v820;
  struct std___Vector_base_char__std__allocator_char__* t825 = this822;
  unsigned long t826 = __n823;
  unsigned long c827 = 0;
  _Bool c828 = ((t826 != c827)) ? 1 : 0;
  char* ternary829;
  if (c828) {
    struct std__allocator_char_* base830 = (struct std__allocator_char_*)((char *)&(t825->_M_impl) + 0);
    unsigned long t831 = __n823;
    char* r832 = std__allocator_traits_std__allocator_char_____allocate(base830, t831);
    ternary829 = (char*)r832;
  } else {
    char* c833 = ((void*)0);
    ternary829 = (char*)c833;
  }
  __retval824 = ternary829;
  char* t834 = __retval824;
  return t834;
}

// function: _ZNSt12_Vector_baseIcSaIcEE17_M_create_storageEm
void std___Vector_base_char__std__allocator_char______M_create_storage(struct std___Vector_base_char__std__allocator_char__* v835, unsigned long v836) {
bb837:
  struct std___Vector_base_char__std__allocator_char__* this838;
  unsigned long __n839;
  this838 = v835;
  __n839 = v836;
  struct std___Vector_base_char__std__allocator_char__* t840 = this838;
  unsigned long t841 = __n839;
  char* r842 = std___Vector_base_char__std__allocator_char______M_allocate(t840, t841);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base843 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t840->_M_impl) + 0);
  base843->_M_start = r842;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base844 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t840->_M_impl) + 0);
  char* t845 = base844->_M_start;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base846 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t840->_M_impl) + 0);
  base846->_M_finish = t845;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base847 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t840->_M_impl) + 0);
  char* t848 = base847->_M_start;
  unsigned long t849 = __n839;
  char* ptr850 = &(t848)[t849];
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base851 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t840->_M_impl) + 0);
  base851->_M_end_of_storage = ptr850;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implD2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v852) {
bb853:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this854;
  this854 = v852;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t855 = this854;
  {
    struct std__allocator_char_* base856 = (struct std__allocator_char_*)((char *)t855 + 0);
    std__allocator_char____allocator(base856);
  }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEEC2EmRKS0_
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* v857, unsigned long v858, struct std__allocator_char_* v859) {
bb860:
  struct std___Vector_base_char__std__allocator_char__* this861;
  unsigned long __n862;
  struct std__allocator_char_* __a863;
  this861 = v857;
  __n862 = v858;
  __a863 = v859;
  struct std___Vector_base_char__std__allocator_char__* t864 = this861;
  struct std__allocator_char_* t865 = __a863;
  std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(&t864->_M_impl, t865);
    unsigned long t866 = __n862;
    std___Vector_base_char__std__allocator_char______M_create_storage(t864, t866);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb867:
  _Bool __retval868;
    _Bool c869 = 0;
    __retval868 = c869;
    _Bool t870 = __retval868;
    return t870;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPcvEC2ERS0_
void std___UninitDestroyGuard_char___void____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v871, char** v872) {
bb873:
  struct std___UninitDestroyGuard_char____void_* this874;
  char** __first875;
  this874 = v871;
  __first875 = v872;
  struct std___UninitDestroyGuard_char____void_* t876 = this874;
  char** t877 = __first875;
  char* t878 = *t877;
  t876->_M_first = t878;
  char** t879 = __first875;
  t876->_M_cur = t879;
  return;
}

// function: _ZSt12construct_atIcJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
char* _ZSt12construct_atIcJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(char* v880) {
bb881:
  char* __location882;
  char* __retval883;
  void* __loc884;
  __location882 = v880;
  char* t885 = __location882;
  void* cast886 = (void*)t885;
  __loc884 = cast886;
    void* t887 = __loc884;
    char* cast888 = (char*)t887;
    char c889 = 0;
    *cast888 = c889;
    __retval883 = cast888;
    char* t890 = __retval883;
    return t890;
  abort();
}

// function: _ZSt10_ConstructIcJEEvPT_DpOT0_
void void_std___Construct_char_(char* v891) {
bb892:
  char* __p893;
  __p893 = v891;
    _Bool r894 = std____is_constant_evaluated();
    if (r894) {
      char* t895 = __p893;
      char* r896 = _ZSt12construct_atIcJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t895);
      return;
    }
  char* t897 = __p893;
  void* cast898 = (void*)t897;
  char* cast899 = (char*)cast898;
  char c900 = 0;
  *cast899 = c900;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvE7releaseEv
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* v901) {
bb902:
  struct std___UninitDestroyGuard_char____void_* this903;
  this903 = v901;
  struct std___UninitDestroyGuard_char____void_* t904 = this903;
  char** c905 = ((void*)0);
  t904->_M_cur = c905;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvED2Ev
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v906) {
bb907:
  struct std___UninitDestroyGuard_char____void_* this908;
  this908 = v906;
  struct std___UninitDestroyGuard_char____void_* t909 = this908;
    char** t910 = t909->_M_cur;
    char** c911 = ((void*)0);
    _Bool c912 = ((t910 != c911)) ? 1 : 0;
    if (c912) {
      char* t913 = t909->_M_first;
      char** t914 = t909->_M_cur;
      char* t915 = *t914;
      void_std___Destroy_char__(t913, t915);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPcmEET_S3_T0_
char* char__std____uninitialized_default_n_1_false_____uninit_default_n_char___unsigned_long_(char* v916, unsigned long v917) {
bb918:
  char* __first919;
  unsigned long __n920;
  char* __retval921;
  struct std___UninitDestroyGuard_char____void_ __guard922;
  __first919 = v916;
  __n920 = v917;
  std___UninitDestroyGuard_char___void____UninitDestroyGuard(&__guard922, &__first919);
      while (1) {
        unsigned long t924 = __n920;
        unsigned long c925 = 0;
        _Bool c926 = ((t924 > c925)) ? 1 : 0;
        if (!c926) break;
        char* t927 = __first919;
        void_std___Construct_char_(t927);
      for_step923: ;
        unsigned long t928 = __n920;
        unsigned long u929 = t928 - 1;
        __n920 = u929;
        char* t930 = __first919;
        int c931 = 1;
        char* ptr932 = &(t930)[c931];
        __first919 = ptr932;
      }
    std___UninitDestroyGuard_char___void___release(&__guard922);
    char* t933 = __first919;
    __retval921 = t933;
    char* t934 = __retval921;
    char* ret_val935 = t934;
    {
      std___UninitDestroyGuard_char___void_____UninitDestroyGuard(&__guard922);
    }
    return ret_val935;
  abort();
}

// function: _ZSt9__fill_a1IccEN9__gnu_cxx11__enable_ifIXaasr9__is_byteIT_EE7__valueoosr10__are_sameIS2_T0_EE7__valuesr20__memcpyable_integerIS3_EE7__widthEvE6__typeEPS2_S6_RKS3_
void __gnu_cxx____enable_if___is_byte_char_____value_____are_same_char__char_____value____memcpyable_integer_char_____width___void_____type_std____fill_a1_char__char_(char* v936, char* v937, char* v938) {
bb939:
  char* __first940;
  char* __last941;
  char* __x942;
  char __val943;
  __first940 = v936;
  __last941 = v937;
  __x942 = v938;
  char* t944 = __x942;
  char t945 = *t944;
  __val943 = t945;
    _Bool r946 = std__is_constant_evaluated();
    if (r946) {
        while (1) {
          char* t948 = __first940;
          char* t949 = __last941;
          _Bool c950 = ((t948 != t949)) ? 1 : 0;
          if (!c950) break;
          char t951 = __val943;
          char* t952 = __first940;
          *t952 = t951;
        for_step947: ;
          char* t953 = __first940;
          int c954 = 1;
          char* ptr955 = &(t953)[c954];
          __first940 = ptr955;
        }
      return;
    }
    unsigned long __len956;
    char* t957 = __last941;
    char* t958 = __first940;
    long diff959 = t957 - t958;
    unsigned long cast960 = (unsigned long)diff959;
    __len956 = cast960;
    unsigned long t961 = __len956;
    _Bool cast962 = (_Bool)t961;
    if (cast962) {
      char* t963 = __first940;
      void* cast964 = (void*)t963;
      char t965 = __val943;
      unsigned char cast966 = (unsigned char)t965;
      int cast967 = (int)cast966;
      unsigned long t968 = __len956;
      void* r969 = memset(cast964, cast967, t968);
    }
  return;
}

// function: _ZSt8__fill_aIPccEvT_S1_RKT0_
void void_std____fill_a_char___char_(char* v970, char* v971, char* v972) {
bb973:
  char* __first974;
  char* __last975;
  char* __value976;
  __first974 = v970;
  __last975 = v971;
  __value976 = v972;
  char* t977 = __first974;
  char* t978 = __last975;
  char* t979 = __value976;
  __gnu_cxx____enable_if___is_byte_char_____value_____are_same_char__char_____value____memcpyable_integer_char_____width___void_____type_std____fill_a1_char__char_(t977, t978, t979);
  return;
}

// function: _ZSt10__fill_n_aIPcmcET_S1_T0_RKT1_St26random_access_iterator_tag
char* char__std____fill_n_a_char___unsigned_long__char_(char* v980, unsigned long v981, char* v982, struct std__random_access_iterator_tag v983) {
bb984:
  char* __first985;
  unsigned long __n986;
  char* __value987;
  struct std__random_access_iterator_tag unnamed988;
  char* __retval989;
  __first985 = v980;
  __n986 = v981;
  __value987 = v982;
  unnamed988 = v983;
    unsigned long t990 = __n986;
    unsigned long c991 = 0;
    _Bool c992 = ((t990 <= c991)) ? 1 : 0;
    if (c992) {
      char* t993 = __first985;
      __retval989 = t993;
      char* t994 = __retval989;
      return t994;
    }
  char* t995 = __first985;
  char* t996 = __first985;
  unsigned long t997 = __n986;
  char* ptr998 = &(t996)[t997];
  char* t999 = __value987;
  void_std____fill_a_char___char_(t995, ptr998, t999);
  char* t1000 = __first985;
  unsigned long t1001 = __n986;
  char* ptr1002 = &(t1000)[t1001];
  __retval989 = ptr1002;
  char* t1003 = __retval989;
  return t1003;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer_2(unsigned long v1004) {
bb1005:
  unsigned long __n1006;
  unsigned long __retval1007;
  __n1006 = v1004;
  unsigned long t1008 = __n1006;
  __retval1007 = t1008;
  unsigned long t1009 = __retval1007;
  return t1009;
}

// function: _ZSt19__iterator_categoryIPcENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_char____iterator_category_std____iterator_category_char__(char** v1010) {
bb1011:
  char** unnamed1012;
  struct std__random_access_iterator_tag __retval1013;
  unnamed1012 = v1010;
  struct std__random_access_iterator_tag t1014 = __retval1013;
  return t1014;
}

// function: _ZSt6fill_nIPcmcET_S1_T0_RKT1_
char* char__std__fill_n_char___unsigned_long__char_(char* v1015, unsigned long v1016, char* v1017) {
bb1018:
  char* __first1019;
  unsigned long __n1020;
  char* __value1021;
  char* __retval1022;
  struct std__random_access_iterator_tag agg_tmp01023;
  __first1019 = v1015;
  __n1020 = v1016;
  __value1021 = v1017;
  char* t1024 = __first1019;
  unsigned long t1025 = __n1020;
  unsigned long r1026 = std____size_to_integer_2(t1025);
  char* t1027 = __value1021;
  struct std__random_access_iterator_tag r1028 = std__iterator_traits_char____iterator_category_std____iterator_category_char__(&__first1019);
  agg_tmp01023 = r1028;
  struct std__random_access_iterator_tag t1029 = agg_tmp01023;
  char* r1030 = char__std____fill_n_a_char___unsigned_long__char_(t1024, r1026, t1027, t1029);
  __retval1022 = r1030;
  char* t1031 = __retval1022;
  return t1031;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPcmEET_S3_T0_
char* char__std____uninitialized_default_n_1_true_____uninit_default_n_char___unsigned_long_(char* v1032, unsigned long v1033) {
bb1034:
  char* __first1035;
  unsigned long __n1036;
  char* __retval1037;
  __first1035 = v1032;
  __n1036 = v1033;
    unsigned long t1038 = __n1036;
    unsigned long c1039 = 0;
    _Bool c1040 = ((t1038 > c1039)) ? 1 : 0;
    if (c1040) {
      char* __val1041;
      char* t1042 = __first1035;
      __val1041 = t1042;
      char* t1043 = __val1041;
      void_std___Construct_char_(t1043);
      char* t1044 = __first1035;
      int c1045 = 1;
      char* ptr1046 = &(t1044)[c1045];
      __first1035 = ptr1046;
      char* t1047 = __first1035;
      unsigned long t1048 = __n1036;
      unsigned long c1049 = 1;
      unsigned long b1050 = t1048 - c1049;
      char* t1051 = __val1041;
      char* r1052 = char__std__fill_n_char___unsigned_long__char_(t1047, b1050, t1051);
      __first1035 = r1052;
    }
  char* t1053 = __first1035;
  __retval1037 = t1053;
  char* t1054 = __retval1037;
  return t1054;
}

// function: _ZSt25__uninitialized_default_nIPcmET_S1_T0_
char* char__std____uninitialized_default_n_char___unsigned_long_(char* v1055, unsigned long v1056) {
bb1057:
  char* __first1058;
  unsigned long __n1059;
  char* __retval1060;
  _Bool __can_fill1061;
  __first1058 = v1055;
  __n1059 = v1056;
    _Bool r1062 = std__is_constant_evaluated();
    if (r1062) {
      char* t1063 = __first1058;
      unsigned long t1064 = __n1059;
      char* r1065 = char__std____uninitialized_default_n_1_false_____uninit_default_n_char___unsigned_long_(t1063, t1064);
      __retval1060 = r1065;
      char* t1066 = __retval1060;
      return t1066;
    }
  _Bool c1067 = 1;
  __can_fill1061 = c1067;
  char* t1068 = __first1058;
  unsigned long t1069 = __n1059;
  char* r1070 = char__std____uninitialized_default_n_1_true_____uninit_default_n_char___unsigned_long_(t1068, t1069);
  __retval1060 = r1070;
  char* t1071 = __retval1060;
  return t1071;
}

// function: _ZSt27__uninitialized_default_n_aIPcmcET_S1_T0_RSaIT1_E
char* char__std____uninitialized_default_n_a_char___unsigned_long__char_(char* v1072, unsigned long v1073, struct std__allocator_char_* v1074) {
bb1075:
  char* __first1076;
  unsigned long __n1077;
  struct std__allocator_char_* unnamed1078;
  char* __retval1079;
  __first1076 = v1072;
  __n1077 = v1073;
  unnamed1078 = v1074;
  char* t1080 = __first1076;
  unsigned long t1081 = __n1077;
  char* r1082 = char__std____uninitialized_default_n_char___unsigned_long_(t1080, t1081);
  __retval1079 = r1082;
  char* t1083 = __retval1079;
  return t1083;
}

// function: _ZNSt12_Vector_baseIcSaIcEE19_M_get_Tp_allocatorEv
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* v1084) {
bb1085:
  struct std___Vector_base_char__std__allocator_char__* this1086;
  struct std__allocator_char_* __retval1087;
  this1086 = v1084;
  struct std___Vector_base_char__std__allocator_char__* t1088 = this1086;
  struct std__allocator_char_* base1089 = (struct std__allocator_char_*)((char *)&(t1088->_M_impl) + 0);
  __retval1087 = base1089;
  struct std__allocator_char_* t1090 = __retval1087;
  return t1090;
}

// function: _ZNSt6vectorIcSaIcEE21_M_default_initializeEm
void std__vector_char__std__allocator_char______M_default_initialize(struct std__vector_char__std__allocator_char__* v1091, unsigned long v1092) {
bb1093:
  struct std__vector_char__std__allocator_char__* this1094;
  unsigned long __n1095;
  this1094 = v1091;
  __n1095 = v1092;
  struct std__vector_char__std__allocator_char__* t1096 = this1094;
  struct std___Vector_base_char__std__allocator_char__* base1097 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t1096 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base1098 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base1097->_M_impl) + 0);
  char* t1099 = base1098->_M_start;
  unsigned long t1100 = __n1095;
  struct std___Vector_base_char__std__allocator_char__* base1101 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t1096 + 0);
  struct std__allocator_char_* r1102 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base1101);
  char* r1103 = char__std____uninitialized_default_n_a_char___unsigned_long__char_(t1099, t1100, r1102);
  struct std___Vector_base_char__std__allocator_char__* base1104 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t1096 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base1105 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base1104->_M_impl) + 0);
  base1105->_M_finish = r1103;
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1106, char* v1107, unsigned long v1108) {
bb1109:
  struct std____new_allocator_char_* this1110;
  char* __p1111;
  unsigned long __n1112;
  this1110 = v1106;
  __p1111 = v1107;
  __n1112 = v1108;
  struct std____new_allocator_char_* t1113 = this1110;
    unsigned long c1114 = 1;
    unsigned long c1115 = 16;
    _Bool c1116 = ((c1114 > c1115)) ? 1 : 0;
    if (c1116) {
      char* t1117 = __p1111;
      void* cast1118 = (void*)t1117;
      unsigned long t1119 = __n1112;
      unsigned long c1120 = 1;
      unsigned long b1121 = t1119 * c1120;
      unsigned long c1122 = 1;
      operator_delete_3(cast1118, b1121, c1122);
      return;
    }
  char* t1123 = __p1111;
  void* cast1124 = (void*)t1123;
  unsigned long t1125 = __n1112;
  unsigned long c1126 = 1;
  unsigned long b1127 = t1125 * c1126;
  operator_delete_2(cast1124, b1127);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1128, char* v1129, unsigned long v1130) {
bb1131:
  struct std__allocator_char_* this1132;
  char* __p1133;
  unsigned long __n1134;
  this1132 = v1128;
  __p1133 = v1129;
  __n1134 = v1130;
  struct std__allocator_char_* t1135 = this1132;
    _Bool r1136 = std____is_constant_evaluated();
    if (r1136) {
      char* t1137 = __p1133;
      void* cast1138 = (void*)t1137;
      operator_delete(cast1138);
      return;
    }
  struct std____new_allocator_char_* base1139 = (struct std____new_allocator_char_*)((char *)t1135 + 0);
  char* t1140 = __p1133;
  unsigned long t1141 = __n1134;
  std____new_allocator_char___deallocate(base1139, t1140, t1141);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1142, char* v1143, unsigned long v1144) {
bb1145:
  struct std__allocator_char_* __a1146;
  char* __p1147;
  unsigned long __n1148;
  __a1146 = v1142;
  __p1147 = v1143;
  __n1148 = v1144;
  struct std__allocator_char_* t1149 = __a1146;
  char* t1150 = __p1147;
  unsigned long t1151 = __n1148;
  std__allocator_char___deallocate(t1149, t1150, t1151);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE13_M_deallocateEPcm
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* v1152, char* v1153, unsigned long v1154) {
bb1155:
  struct std___Vector_base_char__std__allocator_char__* this1156;
  char* __p1157;
  unsigned long __n1158;
  this1156 = v1152;
  __p1157 = v1153;
  __n1158 = v1154;
  struct std___Vector_base_char__std__allocator_char__* t1159 = this1156;
    char* t1160 = __p1157;
    _Bool cast1161 = (_Bool)t1160;
    if (cast1161) {
      struct std__allocator_char_* base1162 = (struct std__allocator_char_*)((char *)&(t1159->_M_impl) + 0);
      char* t1163 = __p1157;
      unsigned long t1164 = __n1158;
      std__allocator_traits_std__allocator_char_____deallocate(base1162, t1163, t1164);
    }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEED2Ev
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* v1165) {
bb1166:
  struct std___Vector_base_char__std__allocator_char__* this1167;
  this1167 = v1165;
  struct std___Vector_base_char__std__allocator_char__* t1168 = this1167;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base1169 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t1168->_M_impl) + 0);
    char* t1170 = base1169->_M_start;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base1171 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t1168->_M_impl) + 0);
    char* t1172 = base1171->_M_end_of_storage;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base1173 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t1168->_M_impl) + 0);
    char* t1174 = base1173->_M_start;
    long diff1175 = t1172 - t1174;
    unsigned long cast1176 = (unsigned long)diff1175;
    std___Vector_base_char__std__allocator_char______M_deallocate(t1168, t1170, cast1176);
  {
    std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(&t1168->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1177, struct std____new_allocator_char_* v1178) {
bb1179:
  struct std____new_allocator_char_* this1180;
  struct std____new_allocator_char_* unnamed1181;
  this1180 = v1177;
  unnamed1181 = v1178;
  struct std____new_allocator_char_* t1182 = this1180;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE17_Vector_impl_dataC2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* v1183) {
bb1184:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* this1185;
  this1185 = v1183;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* t1186 = this1185;
  char* c1187 = ((void*)0);
  t1186->_M_start = c1187;
  char* c1188 = ((void*)0);
  t1186->_M_finish = c1188;
  char* c1189 = ((void*)0);
  t1186->_M_end_of_storage = c1189;
  return;
}

// function: _ZSt10destroy_atIcEvPT_
void void_std__destroy_at_char_(char* v1190) {
bb1191:
  char* __location1192;
  __location1192 = v1190;
  return;
}

// function: _ZSt8_DestroyIPcEvT_S1_
void void_std___Destroy_char__(char* v1193, char* v1194) {
bb1195:
  char* __first1196;
  char* __last1197;
  __first1196 = v1193;
  __last1197 = v1194;
      _Bool r1198 = std____is_constant_evaluated();
      if (r1198) {
          while (1) {
            char* t1200 = __first1196;
            char* t1201 = __last1197;
            _Bool c1202 = ((t1200 != t1201)) ? 1 : 0;
            if (!c1202) break;
            char* t1203 = __first1196;
            void_std__destroy_at_char_(t1203);
          for_step1199: ;
            char* t1204 = __first1196;
            int c1205 = 1;
            char* ptr1206 = &(t1204)[c1205];
            __first1196 = ptr1206;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPccEvT_S1_RSaIT0_E
void void_std___Destroy_char___char_(char* v1207, char* v1208, struct std__allocator_char_* v1209) {
bb1210:
  char* __first1211;
  char* __last1212;
  struct std__allocator_char_* unnamed1213;
  __first1211 = v1207;
  __last1212 = v1208;
  unnamed1213 = v1209;
  char* t1214 = __first1211;
  char* t1215 = __last1212;
  void_std___Destroy_char__(t1214, t1215);
  return;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5rdbufEv
struct std__basic_streambuf_char__std__char_traits_char__* std__basic_ios_char__std__char_traits_char_____rdbuf___const(struct std__basic_ios_char__std__char_traits_char__* v1216) {
bb1217:
  struct std__basic_ios_char__std__char_traits_char__* this1218;
  struct std__basic_streambuf_char__std__char_traits_char__* __retval1219;
  this1218 = v1216;
  struct std__basic_ios_char__std__char_traits_char__* t1220 = this1218;
  struct std__basic_streambuf_char__std__char_traits_char__* t1221 = t1220->_M_streambuf;
  __retval1219 = t1221;
  struct std__basic_streambuf_char__std__char_traits_char__* t1222 = __retval1219;
  return t1222;
}

