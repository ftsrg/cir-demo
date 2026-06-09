extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[5] = "Test";
char _str_1[8] = " String";
char _str_2[5] = " Str";
char _str_3[35] = "(str3 == str1) && (str4 == \" Str\")";
char _str_4[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_brackets_5/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_7[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_8[16] = "__pos <= size()";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
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
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this2;
  struct std__allocator_char_ ref_tmp03;
  this2 = v0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t4 = this2;
  char* r5 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t4);
  std__allocator_char___allocator_2(&ref_tmp03);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t4->_M_dataplus, r5, &ref_tmp03);
  {
    std__allocator_char____allocator(&ref_tmp03);
  }
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t4);
    unsigned long c6 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t4, c6);
  return;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v7) {
bb8:
  struct std__allocator_char_* this9;
  this9 = v7;
  struct std__allocator_char_* t10 = this9;
  struct std____new_allocator_char_* base11 = (struct std____new_allocator_char_*)((char *)t10 + 0);
  std____new_allocator_char_____new_allocator_2(base11);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v12, char* v13, struct std__allocator_char_* v14) {
bb15:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this16;
  char* __s17;
  struct std__allocator_char_* __a18;
  char* __end19;
  struct std__forward_iterator_tag agg_tmp020;
  this16 = v12;
  __s17 = v13;
  __a18 = v14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t21 = this16;
  char* r22 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t21);
  struct std__allocator_char_* t23 = __a18;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t21->_M_dataplus, r22, t23);
      char* t24 = __s17;
      char* c25 = ((void*)0);
      _Bool c26 = ((t24 == c25)) ? 1 : 0;
      if (c26) {
        char* cast27 = (char*)&(_str_5);
        std____throw_logic_error(cast27);
      }
    char* t28 = __s17;
    char* t29 = __s17;
    unsigned long r30 = std__char_traits_char___length(t29);
    char* ptr31 = &(t28)[r30];
    __end19 = ptr31;
    char* t32 = __s17;
    char* t33 = __end19;
    struct std__forward_iterator_tag t34 = agg_tmp020;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t21, t32, t33, t34);
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb35:
  _Bool __retval36;
  _Bool t37 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval36 = t37;
  _Bool t38 = __retval36;
  return t38;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v39, struct std____new_allocator_char_* v40) {
bb41:
  struct std____new_allocator_char_* this42;
  struct std____new_allocator_char_* unnamed43;
  struct std____new_allocator_char_* __retval44;
  this42 = v39;
  unnamed43 = v40;
  struct std____new_allocator_char_* t45 = this42;
  __retval44 = t45;
  struct std____new_allocator_char_* t46 = __retval44;
  return t46;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v47, struct std__allocator_char_* v48) {
bb49:
  struct std__allocator_char_* this50;
  struct std__allocator_char_* unnamed51;
  struct std__allocator_char_* __retval52;
  this50 = v47;
  unnamed51 = v48;
  struct std__allocator_char_* t53 = this50;
  struct std____new_allocator_char_* base54 = (struct std____new_allocator_char_*)((char *)t53 + 0);
  struct std__allocator_char_* t55 = unnamed51;
  struct std____new_allocator_char_* base56 = (struct std____new_allocator_char_*)((char *)t55 + 0);
  struct std____new_allocator_char_* r57 = std____new_allocator_char___operator_(base54, base56);
  __retval52 = t53;
  struct std__allocator_char_* t58 = __retval52;
  return t58;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v59, struct std__allocator_char_* v60) {
bb61:
  struct std__allocator_char_* __one62;
  struct std__allocator_char_* __two63;
  __one62 = v59;
  __two63 = v60;
    struct std__allocator_char_* t64 = __two63;
    struct std__allocator_char_* t65 = __one62;
    struct std__allocator_char_* r66 = std__allocator_char___operator_(t65, t64);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  unsigned long __retval70;
  unsigned long __sz71;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t72 = this69;
  unsigned long t73 = t72->_M_string_length;
  __sz71 = t73;
    unsigned long t74 = __sz71;
    unsigned long r75 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t72);
    _Bool c76 = ((t74 > r75)) ? 1 : 0;
    if (c76) {
      __builtin_unreachable();
    }
  unsigned long t77 = __sz71;
  __retval70 = t77;
  unsigned long t78 = __retval70;
  return t78;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v79) {
bb80:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this81;
  unsigned long __retval82;
  this81 = v79;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t83 = this81;
  unsigned long r84 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t83);
  __retval82 = r84;
  unsigned long t85 = __retval82;
  return t85;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v86) {
bb87:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this88;
  char* __retval89;
  this88 = v86;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t90 = this88;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t90);
  char* r91 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t90);
  __retval89 = r91;
  char* t92 = __retval89;
  return t92;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v93) {
bb94:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this95;
  unsigned long __retval96;
  unsigned long __sz97;
  this95 = v93;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t98 = this95;
  _Bool r99 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t98);
  unsigned long ternary100;
  if (r99) {
    unsigned long c101 = 15;
    ternary100 = (unsigned long)c101;
  } else {
    unsigned long t102 = t98->field2._M_allocated_capacity;
    ternary100 = (unsigned long)t102;
  }
  __sz97 = ternary100;
    unsigned long t103 = __sz97;
    unsigned long c104 = 15;
    _Bool c105 = ((t103 < c104)) ? 1 : 0;
    _Bool ternary106;
    if (c105) {
      _Bool c107 = 1;
      ternary106 = (_Bool)c107;
    } else {
      unsigned long t108 = __sz97;
      unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t98);
      _Bool c110 = ((t108 > r109)) ? 1 : 0;
      ternary106 = (_Bool)c110;
    }
    if (ternary106) {
      __builtin_unreachable();
    }
  unsigned long t111 = __sz97;
  __retval96 = t111;
  unsigned long t112 = __retval96;
  return t112;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v113, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v114) {
bb115:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str117;
  this116 = v113;
  __str117 = v114;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t118 = this116;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t119 = __str117;
    _Bool c120 = ((t118 != t119)) ? 1 : 0;
    if (c120) {
      unsigned long __rsize121;
      unsigned long __capacity122;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t123 = __str117;
      unsigned long r124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t123);
      __rsize121 = r124;
      unsigned long r125 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t118);
      __capacity122 = r125;
        unsigned long t126 = __rsize121;
        unsigned long t127 = __capacity122;
        _Bool c128 = ((t126 > t127)) ? 1 : 0;
        if (c128) {
          unsigned long __new_capacity129;
          char* __tmp130;
          unsigned long t131 = __rsize121;
          __new_capacity129 = t131;
          unsigned long t132 = __capacity122;
          char* r133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t118, &__new_capacity129, t132);
          __tmp130 = r133;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t118);
          char* t134 = __tmp130;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t118, t134);
          unsigned long t135 = __new_capacity129;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t118, t135);
        }
        unsigned long t136 = __rsize121;
        _Bool cast137 = (_Bool)t136;
        if (cast137) {
          char* r138 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t118);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t139 = __str117;
          char* r140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t139);
          unsigned long t141 = __rsize121;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r138, r140, t141);
        }
      unsigned long t142 = __rsize121;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t118, t142);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v143) {
bb144:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this145;
  this145 = v143;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t146 = this145;
  unsigned long c147 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t146, c147);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v148, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v149) {
bb150:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str152;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval153;
  _Bool __equal_allocs154;
  this151 = v148;
  __str152 = v149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = this151;
  _Bool c156 = 1;
  __equal_allocs154 = c156;
    _Bool r157 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t155);
    _Bool u158 = !r157;
    _Bool ternary159;
    if (u158) {
      _Bool r160 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary159 = (_Bool)r160;
    } else {
      _Bool c161 = 0;
      ternary159 = (_Bool)c161;
    }
    _Bool ternary162;
    if (ternary159) {
      _Bool t163 = __equal_allocs154;
      _Bool u164 = !t163;
      ternary162 = (_Bool)u164;
    } else {
      _Bool c165 = 0;
      ternary162 = (_Bool)c165;
    }
    if (ternary162) {
      unsigned long t166 = t155->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t155, t166);
      char* r167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t155);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t155, r167);
      unsigned long c168 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t155, c168);
    }
  struct std__allocator_char_* r169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t155);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t170 = __str152;
  struct std__allocator_char_* r171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t170);
  void_std____alloc_on_move_std__allocator_char___(r169, r171);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t172 = __str152;
    _Bool r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t172);
    if (r173) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t174 = __str152;
        _Bool c175 = ((t174 != t155)) ? 1 : 0;
        if (c175) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t176 = __str152;
            unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t176);
            _Bool cast178 = (_Bool)r177;
            if (cast178) {
              char* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t155);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t180 = __str152;
              char* r181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t180);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t182 = __str152;
              unsigned long r183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t182);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r179, r181, r183);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t184 = __str152;
          unsigned long r185 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t184);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t155, r185);
        }
    } else {
        _Bool r186 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary187;
        if (r186) {
          _Bool c188 = 1;
          ternary187 = (_Bool)c188;
        } else {
          _Bool t189 = __equal_allocs154;
          ternary187 = (_Bool)t189;
        }
        if (ternary187) {
          char* __data190;
          unsigned long __capacity191;
          char* c192 = ((void*)0);
          __data190 = c192;
            _Bool r193 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t155);
            _Bool u194 = !r193;
            if (u194) {
                _Bool t195 = __equal_allocs154;
                if (t195) {
                  char* r196 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t155);
                  __data190 = r196;
                  unsigned long t197 = t155->field2._M_allocated_capacity;
                  __capacity191 = t197;
                } else {
                  unsigned long t198 = t155->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t155, t198);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t199 = __str152;
          char* r200 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t199);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t155, r200);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t201 = __str152;
          unsigned long r202 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t201);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t155, r202);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t203 = __str152;
          unsigned long t204 = t203->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t155, t204);
            char* t205 = __data190;
            _Bool cast206 = (_Bool)t205;
            if (cast206) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t207 = __str152;
              char* t208 = __data190;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t207, t208);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t209 = __str152;
              unsigned long t210 = __capacity191;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t209, t210);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t211 = __str152;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t212 = __str152;
              char* r213 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t212);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t211, r213);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t214 = __str152;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t155, t214);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t215 = __str152;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t215);
  __retval153 = t155;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t216 = __retval153;
  return t216;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v217) {
bb218:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this219;
  this219 = v217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t220 = this219;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t220);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t220->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v221) {
bb222:
  struct std__allocator_char_* this223;
  this223 = v221;
  struct std__allocator_char_* t224 = this223;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v225, unsigned long v226) {
bb227:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this228;
  unsigned long __pos229;
  char* __retval230;
  this228 = v225;
  __pos229 = v226;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t231 = this228;
    do {
          unsigned long t232 = __pos229;
          unsigned long r233 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t231);
          _Bool c234 = ((t232 <= r233)) ? 1 : 0;
          _Bool u235 = !c234;
          if (u235) {
            char* cast236 = (char*)&(_str_7);
            int c237 = 1369;
            char* cast238 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm);
            char* cast239 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast236, c237, cast238, cast239);
          }
      _Bool c240 = 0;
      if (!c240) break;
    } while (1);
  unsigned long t241 = __pos229;
  char* r242 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t231);
  char* ptr243 = &(r242)[t241];
  __retval230 = ptr243;
  char* t244 = __retval230;
  return t244;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v245, char* v246) {
bb247:
  char* __c1248;
  char* __c2249;
  _Bool __retval250;
  __c1248 = v245;
  __c2249 = v246;
  char* t251 = __c1248;
  char t252 = *t251;
  unsigned char cast253 = (unsigned char)t252;
  int cast254 = (int)cast253;
  char* t255 = __c2249;
  char t256 = *t255;
  unsigned char cast257 = (unsigned char)t256;
  int cast258 = (int)cast257;
  _Bool c259 = ((cast254 < cast258)) ? 1 : 0;
  __retval250 = c259;
  _Bool t260 = __retval250;
  return t260;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v261, char* v262, unsigned long v263) {
bb264:
  char* __s1265;
  char* __s2266;
  unsigned long __n267;
  int __retval268;
  __s1265 = v261;
  __s2266 = v262;
  __n267 = v263;
    unsigned long t269 = __n267;
    unsigned long c270 = 0;
    _Bool c271 = ((t269 == c270)) ? 1 : 0;
    if (c271) {
      int c272 = 0;
      __retval268 = c272;
      int t273 = __retval268;
      return t273;
    }
    _Bool r274 = std____is_constant_evaluated();
    if (r274) {
        unsigned long __i275;
        unsigned long c276 = 0;
        __i275 = c276;
        while (1) {
          unsigned long t278 = __i275;
          unsigned long t279 = __n267;
          _Bool c280 = ((t278 < t279)) ? 1 : 0;
          if (!c280) break;
            unsigned long t281 = __i275;
            char* t282 = __s1265;
            char* ptr283 = &(t282)[t281];
            unsigned long t284 = __i275;
            char* t285 = __s2266;
            char* ptr286 = &(t285)[t284];
            _Bool r287 = std__char_traits_char___lt(ptr283, ptr286);
            if (r287) {
              int c288 = -1;
              __retval268 = c288;
              int t289 = __retval268;
              int ret_val290 = t289;
              return ret_val290;
            } else {
                unsigned long t291 = __i275;
                char* t292 = __s2266;
                char* ptr293 = &(t292)[t291];
                unsigned long t294 = __i275;
                char* t295 = __s1265;
                char* ptr296 = &(t295)[t294];
                _Bool r297 = std__char_traits_char___lt(ptr293, ptr296);
                if (r297) {
                  int c298 = 1;
                  __retval268 = c298;
                  int t299 = __retval268;
                  int ret_val300 = t299;
                  return ret_val300;
                }
            }
        for_step277: ;
          unsigned long t301 = __i275;
          unsigned long u302 = t301 + 1;
          __i275 = u302;
        }
      int c303 = 0;
      __retval268 = c303;
      int t304 = __retval268;
      return t304;
    }
  char* t305 = __s1265;
  void* cast306 = (void*)t305;
  char* t307 = __s2266;
  void* cast308 = (void*)t307;
  unsigned long t309 = __n267;
  int r310 = memcmp(cast306, cast308, t309);
  __retval268 = r310;
  int t311 = __retval268;
  return t311;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v312) {
bb313:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this314;
  char* __retval315;
  this314 = v312;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t316 = this314;
  char* r317 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t316);
  __retval315 = r317;
  char* t318 = __retval315;
  return t318;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char____2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v319, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v320) {
bb321:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs323;
  _Bool __retval324;
  __lhs322 = v319;
  __rhs323 = v320;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t325 = __lhs322;
  unsigned long r326 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t325);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t327 = __rhs323;
  unsigned long r328 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t327);
  _Bool c329 = ((r326 == r328)) ? 1 : 0;
  _Bool ternary330;
  if (c329) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t331 = __lhs322;
    char* r332 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t331);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t333 = __rhs323;
    char* r334 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t333);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t335 = __lhs322;
    unsigned long r336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t335);
    int r337 = std__char_traits_char___compare(r332, r334, r336);
    _Bool cast338 = (_Bool)r337;
    _Bool u339 = !cast338;
    ternary330 = (_Bool)u339;
  } else {
    _Bool c340 = 0;
    ternary330 = (_Bool)c340;
  }
  __retval324 = ternary330;
  _Bool t341 = __retval324;
  return t341;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v342, char* v343) {
bb344:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs345;
  char* __rhs346;
  _Bool __retval347;
  __lhs345 = v342;
  __rhs346 = v343;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t348 = __lhs345;
  unsigned long r349 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t348);
  char* t350 = __rhs346;
  unsigned long r351 = std__char_traits_char___length(t350);
  _Bool c352 = ((r349 == r351)) ? 1 : 0;
  _Bool ternary353;
  if (c352) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t354 = __lhs345;
    char* r355 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t354);
    char* t356 = __rhs346;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t357 = __lhs345;
    unsigned long r358 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t357);
    int r359 = std__char_traits_char___compare(r355, t356, r358);
    _Bool cast360 = (_Bool)r359;
    _Bool u361 = !cast360;
    ternary353 = (_Bool)u361;
  } else {
    _Bool c362 = 0;
    ternary353 = (_Bool)c362;
  }
  __retval347 = ternary353;
  _Bool t363 = __retval347;
  return t363;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v364, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v365) {
bb366:
  struct std__basic_ostream_char__std__char_traits_char__* __os367;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str368;
  struct std__basic_ostream_char__std__char_traits_char__* __retval369;
  __os367 = v364;
  __str368 = v365;
  struct std__basic_ostream_char__std__char_traits_char__* t370 = __os367;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t371 = __str368;
  char* r372 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t371);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t373 = __str368;
  unsigned long r374 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t373);
  long cast375 = (long)r374;
  struct std__basic_ostream_char__std__char_traits_char__* r376 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t370, r372, cast375);
  __retval369 = r376;
  struct std__basic_ostream_char__std__char_traits_char__* t377 = __retval369;
  return t377;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v378, void* v379) {
bb380:
  struct std__basic_ostream_char__std__char_traits_char__* this381;
  void* __pf382;
  struct std__basic_ostream_char__std__char_traits_char__* __retval383;
  this381 = v378;
  __pf382 = v379;
  struct std__basic_ostream_char__std__char_traits_char__* t384 = this381;
  void* t385 = __pf382;
  struct std__basic_ostream_char__std__char_traits_char__* r386 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t385)(t384);
  __retval383 = r386;
  struct std__basic_ostream_char__std__char_traits_char__* t387 = __retval383;
  return t387;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v388) {
bb389:
  struct std__basic_ostream_char__std__char_traits_char__* __os390;
  struct std__basic_ostream_char__std__char_traits_char__* __retval391;
  __os390 = v388;
  struct std__basic_ostream_char__std__char_traits_char__* t392 = __os390;
  struct std__basic_ostream_char__std__char_traits_char__* r393 = std__ostream__flush(t392);
  __retval391 = r393;
  struct std__basic_ostream_char__std__char_traits_char__* t394 = __retval391;
  return t394;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v395) {
bb396:
  struct std__ctype_char_* __f397;
  struct std__ctype_char_* __retval398;
  __f397 = v395;
    struct std__ctype_char_* t399 = __f397;
    _Bool cast400 = (_Bool)t399;
    _Bool u401 = !cast400;
    if (u401) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t402 = __f397;
  __retval398 = t402;
  struct std__ctype_char_* t403 = __retval398;
  return t403;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v404, char v405) {
bb406:
  struct std__ctype_char_* this407;
  char __c408;
  char __retval409;
  this407 = v404;
  __c408 = v405;
  struct std__ctype_char_* t410 = this407;
    char t411 = t410->_M_widen_ok;
    _Bool cast412 = (_Bool)t411;
    if (cast412) {
      char t413 = __c408;
      unsigned char cast414 = (unsigned char)t413;
      unsigned long cast415 = (unsigned long)cast414;
      char t416 = t410->_M_widen[cast415];
      __retval409 = t416;
      char t417 = __retval409;
      return t417;
    }
  std__ctype_char____M_widen_init___const(t410);
  char t418 = __c408;
  void** v419 = (void**)t410;
  void* v420 = *((void**)v419);
  char vcall423 = (char)__VERIFIER_virtual_call_char_char(t410, 6, t418);
  __retval409 = vcall423;
  char t424 = __retval409;
  return t424;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v425, char v426) {
bb427:
  struct std__basic_ios_char__std__char_traits_char__* this428;
  char __c429;
  char __retval430;
  this428 = v425;
  __c429 = v426;
  struct std__basic_ios_char__std__char_traits_char__* t431 = this428;
  struct std__ctype_char_* t432 = t431->_M_ctype;
  struct std__ctype_char_* r433 = std__ctype_char__const__std____check_facet_std__ctype_char___(t432);
  char t434 = __c429;
  char r435 = std__ctype_char___widen_char__const(r433, t434);
  __retval430 = r435;
  char t436 = __retval430;
  return t436;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v437) {
bb438:
  struct std__basic_ostream_char__std__char_traits_char__* __os439;
  struct std__basic_ostream_char__std__char_traits_char__* __retval440;
  __os439 = v437;
  struct std__basic_ostream_char__std__char_traits_char__* t441 = __os439;
  struct std__basic_ostream_char__std__char_traits_char__* t442 = __os439;
  void** v443 = (void**)t442;
  void* v444 = *((void**)v443);
  unsigned char* cast445 = (unsigned char*)v444;
  long c446 = -24;
  unsigned char* ptr447 = &(cast445)[c446];
  long* cast448 = (long*)ptr447;
  long t449 = *cast448;
  unsigned char* cast450 = (unsigned char*)t442;
  unsigned char* ptr451 = &(cast450)[t449];
  struct std__basic_ostream_char__std__char_traits_char__* cast452 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr451;
  struct std__basic_ios_char__std__char_traits_char__* cast453 = (struct std__basic_ios_char__std__char_traits_char__*)cast452;
  char c454 = 10;
  char r455 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast453, c454);
  struct std__basic_ostream_char__std__char_traits_char__* r456 = std__ostream__put(t441, r455);
  struct std__basic_ostream_char__std__char_traits_char__* r457 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r456);
  __retval440 = r457;
  struct std__basic_ostream_char__std__char_traits_char__* t458 = __retval440;
  return t458;
}

// function: main
int main() {
bb459:
  int __retval460;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1461;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2462;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str3463;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str4464;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str5465;
  int i466;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0467;
  struct std__allocator_char_ ref_tmp1468;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup469;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2470;
  struct std__allocator_char_ ref_tmp3471;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup472;
  int c473 = 0;
  __retval460 = c473;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str1461);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str2462);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str3463);
        _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str4464);
          _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str5465);
            char* cast474 = (char*)&(_str);
            std__allocator_char___allocator_2(&ref_tmp1468);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp0467, cast474, &ref_tmp1468);
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r475 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str1461, &ref_tmp0467);
                tmp_exprcleanup469 = r475;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0467);
              }
            {
              std__allocator_char____allocator(&ref_tmp1468);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t476 = tmp_exprcleanup469;
            char* cast477 = (char*)&(_str_1);
            std__allocator_char___allocator_2(&ref_tmp3471);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp2470, cast477, &ref_tmp3471);
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r478 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str2462, &ref_tmp2470);
                tmp_exprcleanup472 = r478;
              {
                std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2470);
              }
            {
              std__allocator_char____allocator(&ref_tmp3471);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t479 = tmp_exprcleanup472;
              int c480 = 0;
              i466 = c480;
              while (1) {
                int t482 = i466;
                int c483 = 4;
                _Bool c484 = ((t482 < c483)) ? 1 : 0;
                if (!c484) break;
                  int t485 = i466;
                  unsigned long cast486 = (unsigned long)t485;
                  char* r487 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str1461, cast486);
                  char t488 = *r487;
                  int t489 = i466;
                  unsigned long cast490 = (unsigned long)t489;
                  char* r491 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str3463, cast490);
                  *r491 = t488;
                  int t492 = i466;
                  unsigned long cast493 = (unsigned long)t492;
                  char* r494 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str2462, cast493);
                  char t495 = *r494;
                  int t496 = i466;
                  unsigned long cast497 = (unsigned long)t496;
                  char* r498 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str4464, cast497);
                  *r498 = t495;
              for_step481: ;
                int t499 = i466;
                int u500 = t499 + 1;
                i466 = u500;
              }
            _Bool r501 = bool_std__operator___char__std__char_traits_char___std__allocator_char____2(&str3463, &str1461);
            _Bool ternary502;
            if (r501) {
              char* cast503 = (char*)&(_str_2);
              _Bool r504 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str4464, cast503);
              ternary502 = (_Bool)r504;
            } else {
              _Bool c505 = 0;
              ternary502 = (_Bool)c505;
            }
            if (ternary502) {
            } else {
              char* cast506 = (char*)&(_str_3);
              char* c507 = _str_4;
              unsigned int c508 = 25;
              char* cast509 = (char*)&(__PRETTY_FUNCTION___main);
              __assert_fail(cast506, c507, c508, cast509);
            }
            struct std__basic_ostream_char__std__char_traits_char__* r510 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str3463);
            struct std__basic_ostream_char__std__char_traits_char__* r511 = std__ostream__operator___std__ostream_____(r510, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            int c512 = 0;
            __retval460 = c512;
            int t513 = __retval460;
            int ret_val514 = t513;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str5465);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str4464);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str3463);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2462);
            }
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1461);
            }
            return ret_val514;
  int t515 = __retval460;
  return t515;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v516) {
bb517:
  char* __r518;
  char* __retval519;
  __r518 = v516;
  char* t520 = __r518;
  __retval519 = t520;
  char* t521 = __retval519;
  return t521;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v522) {
bb523:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this524;
  char* __retval525;
  this524 = v522;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t526 = this524;
  char* cast527 = (char*)&(t526->field2._M_local_buf);
  char* r528 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast527);
  __retval525 = r528;
  char* t529 = __retval525;
  return t529;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v530, char* v531, struct std__allocator_char_* v532) {
bb533:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this534;
  char* __dat535;
  struct std__allocator_char_* __a536;
  this534 = v530;
  __dat535 = v531;
  __a536 = v532;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t537 = this534;
  struct std__allocator_char_* base538 = (struct std__allocator_char_*)((char *)t537 + 0);
  struct std__allocator_char_* t539 = __a536;
  std__allocator_char___allocator(base538, t539);
    char* t540 = __dat535;
    t537->_M_p = t540;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb541:
  _Bool __retval542;
    _Bool c543 = 0;
    __retval542 = c543;
    _Bool t544 = __retval542;
    return t544;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v545) {
bb546:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this547;
  this547 = v545;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t548 = this547;
    _Bool r549 = std__is_constant_evaluated();
    if (r549) {
        unsigned long __i550;
        unsigned long c551 = 0;
        __i550 = c551;
        while (1) {
          unsigned long t553 = __i550;
          unsigned long c554 = 15;
          _Bool c555 = ((t553 <= c554)) ? 1 : 0;
          if (!c555) break;
          char c556 = 0;
          unsigned long t557 = __i550;
          t548->field2._M_local_buf[t557] = c556;
        for_step552: ;
          unsigned long t558 = __i550;
          unsigned long u559 = t558 + 1;
          __i550 = u559;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v560, unsigned long v561) {
bb562:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this563;
  unsigned long __length564;
  this563 = v560;
  __length564 = v561;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t565 = this563;
  unsigned long t566 = __length564;
  t565->_M_string_length = t566;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb567:
  _Bool __retval568;
    _Bool c569 = 0;
    __retval568 = c569;
    _Bool t570 = __retval568;
    return t570;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v571, char* v572) {
bb573:
  char* __location574;
  char* __args575;
  char* __retval576;
  void* __loc577;
  __location574 = v571;
  __args575 = v572;
  char* t578 = __location574;
  void* cast579 = (void*)t578;
  __loc577 = cast579;
    void* t580 = __loc577;
    char* cast581 = (char*)t580;
    char* t582 = __args575;
    char t583 = *t582;
    *cast581 = t583;
    __retval576 = cast581;
    char* t584 = __retval576;
    return t584;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v585, char* v586) {
bb587:
  char* __c1588;
  char* __c2589;
  __c1588 = v585;
  __c2589 = v586;
    _Bool r590 = std____is_constant_evaluated();
    if (r590) {
      char* t591 = __c1588;
      char* t592 = __c2589;
      char* r593 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t591, t592);
    } else {
      char* t594 = __c2589;
      char t595 = *t594;
      char* t596 = __c1588;
      *t596 = t595;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v597) {
bb598:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this599;
  char* __retval600;
  this599 = v597;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t601 = this599;
  char* t602 = t601->_M_dataplus._M_p;
  __retval600 = t602;
  char* t603 = __retval600;
  return t603;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v604, unsigned long v605) {
bb606:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this607;
  unsigned long __n608;
  char ref_tmp0609;
  this607 = v604;
  __n608 = v605;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t610 = this607;
  unsigned long t611 = __n608;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t610, t611);
  unsigned long t612 = __n608;
  char* r613 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t610);
  char* ptr614 = &(r613)[t612];
  char c615 = 0;
  ref_tmp0609 = c615;
  std__char_traits_char___assign(ptr614, &ref_tmp0609);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v616) {
bb617:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this618;
  this618 = v616;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t619 = this618;
  {
    struct std__allocator_char_* base620 = (struct std__allocator_char_*)((char *)t619 + 0);
    std__allocator_char____allocator(base620);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v621, struct std____new_allocator_char_* v622) {
bb623:
  struct std____new_allocator_char_* this624;
  struct std____new_allocator_char_* unnamed625;
  this624 = v621;
  unnamed625 = v622;
  struct std____new_allocator_char_* t626 = this624;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v627, struct std__allocator_char_* v628) {
bb629:
  struct std__allocator_char_* this630;
  struct std__allocator_char_* __a631;
  this630 = v627;
  __a631 = v628;
  struct std__allocator_char_* t632 = this630;
  struct std____new_allocator_char_* base633 = (struct std____new_allocator_char_*)((char *)t632 + 0);
  struct std__allocator_char_* t634 = __a631;
  struct std____new_allocator_char_* base635 = (struct std____new_allocator_char_*)((char *)t634 + 0);
  std____new_allocator_char_____new_allocator(base633, base635);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v636) {
bb637:
  struct std____new_allocator_char_* this638;
  this638 = v636;
  struct std____new_allocator_char_* t639 = this638;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v640, char* v641, struct std__allocator_char_* v642) {
bb643:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this644;
  char* __dat645;
  struct std__allocator_char_* __a646;
  this644 = v640;
  __dat645 = v641;
  __a646 = v642;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t647 = this644;
  struct std__allocator_char_* base648 = (struct std__allocator_char_*)((char *)t647 + 0);
  struct std__allocator_char_* t649 = __a646;
  std__allocator_char___allocator(base648, t649);
    char* t650 = __dat645;
    t647->_M_p = t650;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v651, char* v652) {
bb653:
  char* __c1654;
  char* __c2655;
  _Bool __retval656;
  __c1654 = v651;
  __c2655 = v652;
  char* t657 = __c1654;
  char t658 = *t657;
  int cast659 = (int)t658;
  char* t660 = __c2655;
  char t661 = *t660;
  int cast662 = (int)t661;
  _Bool c663 = ((cast659 == cast662)) ? 1 : 0;
  __retval656 = c663;
  _Bool t664 = __retval656;
  return t664;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v665) {
bb666:
  char* __p667;
  unsigned long __retval668;
  unsigned long __i669;
  __p667 = v665;
  unsigned long c670 = 0;
  __i669 = c670;
    char ref_tmp0671;
    while (1) {
      unsigned long t672 = __i669;
      char* t673 = __p667;
      char* ptr674 = &(t673)[t672];
      char c675 = 0;
      ref_tmp0671 = c675;
      _Bool r676 = __gnu_cxx__char_traits_char___eq(ptr674, &ref_tmp0671);
      _Bool u677 = !r676;
      if (!u677) break;
      unsigned long t678 = __i669;
      unsigned long u679 = t678 + 1;
      __i669 = u679;
    }
  unsigned long t680 = __i669;
  __retval668 = t680;
  unsigned long t681 = __retval668;
  return t681;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v682) {
bb683:
  char* __s684;
  unsigned long __retval685;
  __s684 = v682;
    _Bool r686 = std____is_constant_evaluated();
    if (r686) {
      char* t687 = __s684;
      unsigned long r688 = __gnu_cxx__char_traits_char___length(t687);
      __retval685 = r688;
      unsigned long t689 = __retval685;
      return t689;
    }
  char* t690 = __s684;
  unsigned long r691 = strlen(t690);
  __retval685 = r691;
  unsigned long t692 = __retval685;
  return t692;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v693, char* v694, struct std__random_access_iterator_tag v695) {
bb696:
  char* __first697;
  char* __last698;
  struct std__random_access_iterator_tag unnamed699;
  long __retval700;
  __first697 = v693;
  __last698 = v694;
  unnamed699 = v695;
  char* t701 = __last698;
  char* t702 = __first697;
  long diff703 = t701 - t702;
  __retval700 = diff703;
  long t704 = __retval700;
  return t704;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v705) {
bb706:
  char** unnamed707;
  struct std__random_access_iterator_tag __retval708;
  unnamed707 = v705;
  struct std__random_access_iterator_tag t709 = __retval708;
  return t709;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v710, char* v711) {
bb712:
  char* __first713;
  char* __last714;
  long __retval715;
  struct std__random_access_iterator_tag agg_tmp0716;
  __first713 = v710;
  __last714 = v711;
  char* t717 = __first713;
  char* t718 = __last714;
  struct std__random_access_iterator_tag r719 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first713);
  agg_tmp0716 = r719;
  struct std__random_access_iterator_tag t720 = agg_tmp0716;
  long r721 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t717, t718, t720);
  __retval715 = r721;
  long t722 = __retval715;
  return t722;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v723, char* v724) {
bb725:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this726;
  char* __p727;
  this726 = v723;
  __p727 = v724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t728 = this726;
  char* t729 = __p727;
  t728->_M_dataplus._M_p = t729;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v730) {
bb731:
  struct std__allocator_char_* __a732;
  unsigned long __retval733;
  __a732 = v730;
  unsigned long c734 = -1;
  unsigned long c735 = 1;
  unsigned long b736 = c734 / c735;
  __retval733 = b736;
  unsigned long t737 = __retval733;
  return t737;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v738) {
bb739:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this740;
  struct std__allocator_char_* __retval741;
  this740 = v738;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t742 = this740;
  struct std__allocator_char_* base743 = (struct std__allocator_char_*)((char *)&(t742->_M_dataplus) + 0);
  __retval741 = base743;
  struct std__allocator_char_* t744 = __retval741;
  return t744;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v745, unsigned long* v746) {
bb747:
  unsigned long* __a748;
  unsigned long* __b749;
  unsigned long* __retval750;
  __a748 = v745;
  __b749 = v746;
    unsigned long* t751 = __b749;
    unsigned long t752 = *t751;
    unsigned long* t753 = __a748;
    unsigned long t754 = *t753;
    _Bool c755 = ((t752 < t754)) ? 1 : 0;
    if (c755) {
      unsigned long* t756 = __b749;
      __retval750 = t756;
      unsigned long* t757 = __retval750;
      return t757;
    }
  unsigned long* t758 = __a748;
  __retval750 = t758;
  unsigned long* t759 = __retval750;
  return t759;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v760) {
bb761:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this762;
  unsigned long __retval763;
  unsigned long __diffmax764;
  unsigned long __allocmax765;
  this762 = v760;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t766 = this762;
  unsigned long c767 = 9223372036854775807;
  __diffmax764 = c767;
  struct std__allocator_char_* r768 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t766);
  unsigned long r769 = std__allocator_traits_std__allocator_char_____max_size(r768);
  __allocmax765 = r769;
  unsigned long* r770 = unsigned_long_const__std__min_unsigned_long_(&__diffmax764, &__allocmax765);
  unsigned long t771 = *r770;
  unsigned long c772 = 1;
  unsigned long b773 = t771 - c772;
  __retval763 = b773;
  unsigned long t774 = __retval763;
  return t774;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v775) {
bb776:
  struct std____new_allocator_char_* this777;
  unsigned long __retval778;
  this777 = v775;
  struct std____new_allocator_char_* t779 = this777;
  unsigned long c780 = 9223372036854775807;
  unsigned long c781 = 1;
  unsigned long b782 = c780 / c781;
  __retval778 = b782;
  unsigned long t783 = __retval778;
  return t783;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v784, unsigned long v785, void* v786) {
bb787:
  struct std____new_allocator_char_* this788;
  unsigned long __n789;
  void* unnamed790;
  char* __retval791;
  this788 = v784;
  __n789 = v785;
  unnamed790 = v786;
  struct std____new_allocator_char_* t792 = this788;
    unsigned long t793 = __n789;
    unsigned long r794 = std____new_allocator_char____M_max_size___const(t792);
    _Bool c795 = ((t793 > r794)) ? 1 : 0;
    if (c795) {
        unsigned long t796 = __n789;
        unsigned long c797 = -1;
        unsigned long c798 = 1;
        unsigned long b799 = c797 / c798;
        _Bool c800 = ((t796 > b799)) ? 1 : 0;
        if (c800) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c801 = 1;
    unsigned long c802 = 16;
    _Bool c803 = ((c801 > c802)) ? 1 : 0;
    if (c803) {
      unsigned long __al804;
      unsigned long c805 = 1;
      __al804 = c805;
      unsigned long t806 = __n789;
      unsigned long c807 = 1;
      unsigned long b808 = t806 * c807;
      unsigned long t809 = __al804;
      void* r810 = operator_new_2(b808, t809);
      char* cast811 = (char*)r810;
      __retval791 = cast811;
      char* t812 = __retval791;
      return t812;
    }
  unsigned long t813 = __n789;
  unsigned long c814 = 1;
  unsigned long b815 = t813 * c814;
  void* r816 = operator_new(b815);
  char* cast817 = (char*)r816;
  __retval791 = cast817;
  char* t818 = __retval791;
  return t818;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v819, unsigned long v820) {
bb821:
  struct std__allocator_char_* this822;
  unsigned long __n823;
  char* __retval824;
  this822 = v819;
  __n823 = v820;
  struct std__allocator_char_* t825 = this822;
    _Bool r826 = std____is_constant_evaluated();
    if (r826) {
        unsigned long t827 = __n823;
        unsigned long c828 = 1;
        unsigned long ovr829;
        _Bool ovf830 = __builtin_mul_overflow(t827, c828, &ovr829);
        __n823 = ovr829;
        if (ovf830) {
          std____throw_bad_array_new_length();
        }
      unsigned long t831 = __n823;
      void* r832 = operator_new(t831);
      char* cast833 = (char*)r832;
      __retval824 = cast833;
      char* t834 = __retval824;
      return t834;
    }
  struct std____new_allocator_char_* base835 = (struct std____new_allocator_char_*)((char *)t825 + 0);
  unsigned long t836 = __n823;
  void* c837 = ((void*)0);
  char* r838 = std____new_allocator_char___allocate(base835, t836, c837);
  __retval824 = r838;
  char* t839 = __retval824;
  return t839;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v840, unsigned long v841) {
bb842:
  struct std__allocator_char_* __a843;
  unsigned long __n844;
  char* __retval845;
  __a843 = v840;
  __n844 = v841;
  struct std__allocator_char_* t846 = __a843;
  unsigned long t847 = __n844;
  char* r848 = std__allocator_char___allocate(t846, t847);
  __retval845 = r848;
  char* t849 = __retval845;
  return t849;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v850, unsigned long v851) {
bb852:
  struct std__allocator_char_* __a853;
  unsigned long __n854;
  char* __retval855;
  char* __p856;
  __a853 = v850;
  __n854 = v851;
  struct std__allocator_char_* t857 = __a853;
  unsigned long t858 = __n854;
  char* r859 = std__allocator_traits_std__allocator_char_____allocate(t857, t858);
  __p856 = r859;
  char* t860 = __p856;
  __retval855 = t860;
  char* t861 = __retval855;
  return t861;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v862) {
bb863:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this864;
  struct std__allocator_char_* __retval865;
  this864 = v862;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t866 = this864;
  struct std__allocator_char_* base867 = (struct std__allocator_char_*)((char *)&(t866->_M_dataplus) + 0);
  __retval865 = base867;
  struct std__allocator_char_* t868 = __retval865;
  return t868;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v869, unsigned long* v870, unsigned long v871) {
bb872:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this873;
  unsigned long* __capacity874;
  unsigned long __old_capacity875;
  char* __retval876;
  this873 = v869;
  __capacity874 = v870;
  __old_capacity875 = v871;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t877 = this873;
    unsigned long* t878 = __capacity874;
    unsigned long t879 = *t878;
    unsigned long r880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t877);
    _Bool c881 = ((t879 > r880)) ? 1 : 0;
    if (c881) {
      char* cast882 = (char*)&(_str_6);
      std____throw_length_error(cast882);
    }
    unsigned long* t883 = __capacity874;
    unsigned long t884 = *t883;
    unsigned long t885 = __old_capacity875;
    _Bool c886 = ((t884 > t885)) ? 1 : 0;
    _Bool ternary887;
    if (c886) {
      unsigned long* t888 = __capacity874;
      unsigned long t889 = *t888;
      unsigned long c890 = 2;
      unsigned long t891 = __old_capacity875;
      unsigned long b892 = c890 * t891;
      _Bool c893 = ((t889 < b892)) ? 1 : 0;
      ternary887 = (_Bool)c893;
    } else {
      _Bool c894 = 0;
      ternary887 = (_Bool)c894;
    }
    if (ternary887) {
      unsigned long c895 = 2;
      unsigned long t896 = __old_capacity875;
      unsigned long b897 = c895 * t896;
      unsigned long* t898 = __capacity874;
      *t898 = b897;
        unsigned long* t899 = __capacity874;
        unsigned long t900 = *t899;
        unsigned long r901 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t877);
        _Bool c902 = ((t900 > r901)) ? 1 : 0;
        if (c902) {
          unsigned long r903 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t877);
          unsigned long* t904 = __capacity874;
          *t904 = r903;
        }
    }
  struct std__allocator_char_* r905 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t877);
  unsigned long* t906 = __capacity874;
  unsigned long t907 = *t906;
  unsigned long c908 = 1;
  unsigned long b909 = t907 + c908;
  char* r910 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r905, b909);
  __retval876 = r910;
  char* t911 = __retval876;
  return t911;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v912, unsigned long v913) {
bb914:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this915;
  unsigned long __capacity916;
  this915 = v912;
  __capacity916 = v913;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t917 = this915;
  unsigned long t918 = __capacity916;
  t917->field2._M_allocated_capacity = t918;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v919, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v920) {
bb921:
  struct _Guard* this922;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s923;
  this922 = v919;
  __s923 = v920;
  struct _Guard* t924 = this922;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t925 = __s923;
  t924->_M_guarded = t925;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v926, char* v927, unsigned long v928) {
bb929:
  char* __s1930;
  char* __s2931;
  unsigned long __n932;
  char* __retval933;
  __s1930 = v926;
  __s2931 = v927;
  __n932 = v928;
    unsigned long t934 = __n932;
    unsigned long c935 = 0;
    _Bool c936 = ((t934 == c935)) ? 1 : 0;
    if (c936) {
      char* t937 = __s1930;
      __retval933 = t937;
      char* t938 = __retval933;
      return t938;
    }
    _Bool r939 = std____is_constant_evaluated();
    if (r939) {
        unsigned long __i940;
        unsigned long c941 = 0;
        __i940 = c941;
        while (1) {
          unsigned long t943 = __i940;
          unsigned long t944 = __n932;
          _Bool c945 = ((t943 < t944)) ? 1 : 0;
          if (!c945) break;
          char* t946 = __s1930;
          unsigned long t947 = __i940;
          char* ptr948 = &(t946)[t947];
          unsigned long t949 = __i940;
          char* t950 = __s2931;
          char* ptr951 = &(t950)[t949];
          char* r952 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr948, ptr951);
        for_step942: ;
          unsigned long t953 = __i940;
          unsigned long u954 = t953 + 1;
          __i940 = u954;
        }
      char* t955 = __s1930;
      __retval933 = t955;
      char* t956 = __retval933;
      return t956;
    }
  char* t957 = __s1930;
  void* cast958 = (void*)t957;
  char* t959 = __s2931;
  void* cast960 = (void*)t959;
  unsigned long t961 = __n932;
  unsigned long c962 = 1;
  unsigned long b963 = t961 * c962;
  void* r964 = memcpy(cast958, cast960, b963);
  char* t965 = __s1930;
  __retval933 = t965;
  char* t966 = __retval933;
  return t966;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v967, char* v968, unsigned long v969) {
bb970:
  char* __s1971;
  char* __s2972;
  unsigned long __n973;
  char* __retval974;
  __s1971 = v967;
  __s2972 = v968;
  __n973 = v969;
    unsigned long t975 = __n973;
    unsigned long c976 = 0;
    _Bool c977 = ((t975 == c976)) ? 1 : 0;
    if (c977) {
      char* t978 = __s1971;
      __retval974 = t978;
      char* t979 = __retval974;
      return t979;
    }
    _Bool r980 = std____is_constant_evaluated();
    if (r980) {
      char* t981 = __s1971;
      char* t982 = __s2972;
      unsigned long t983 = __n973;
      char* r984 = __gnu_cxx__char_traits_char___copy(t981, t982, t983);
      __retval974 = r984;
      char* t985 = __retval974;
      return t985;
    }
  char* t986 = __s1971;
  void* cast987 = (void*)t986;
  char* t988 = __s2972;
  void* cast989 = (void*)t988;
  unsigned long t990 = __n973;
  void* r991 = memcpy(cast987, cast989, t990);
  char* cast992 = (char*)r991;
  __retval974 = cast992;
  char* t993 = __retval974;
  return t993;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v994, char* v995, unsigned long v996) {
bb997:
  char* __d998;
  char* __s999;
  unsigned long __n1000;
  __d998 = v994;
  __s999 = v995;
  __n1000 = v996;
    unsigned long t1001 = __n1000;
    unsigned long c1002 = 1;
    _Bool c1003 = ((t1001 == c1002)) ? 1 : 0;
    if (c1003) {
      char* t1004 = __d998;
      char* t1005 = __s999;
      std__char_traits_char___assign(t1004, t1005);
    } else {
      char* t1006 = __d998;
      char* t1007 = __s999;
      unsigned long t1008 = __n1000;
      char* r1009 = std__char_traits_char___copy(t1006, t1007, t1008);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1010) {
bb1011:
  char* __it1012;
  char* __retval1013;
  __it1012 = v1010;
  char* t1014 = __it1012;
  __retval1013 = t1014;
  char* t1015 = __retval1013;
  return t1015;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1016, char* v1017, char* v1018) {
bb1019:
  char* __p1020;
  char* __k11021;
  char* __k21022;
  __p1020 = v1016;
  __k11021 = v1017;
  __k21022 = v1018;
    char* t1023 = __p1020;
    char* t1024 = __k11021;
    char* r1025 = char_const__std____niter_base_char_const__(t1024);
    char* t1026 = __k21022;
    char* t1027 = __k11021;
    long diff1028 = t1026 - t1027;
    unsigned long cast1029 = (unsigned long)diff1028;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1023, r1025, cast1029);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1030) {
bb1031:
  struct _Guard* this1032;
  this1032 = v1030;
  struct _Guard* t1033 = this1032;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1034 = t1033->_M_guarded;
    _Bool cast1035 = (_Bool)t1034;
    if (cast1035) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1036 = t1033->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1036);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1037, char* v1038, char* v1039, struct std__forward_iterator_tag v1040) {
bb1041:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1042;
  char* __beg1043;
  char* __end1044;
  struct std__forward_iterator_tag unnamed1045;
  unsigned long __dnew1046;
  struct _Guard __guard1047;
  this1042 = v1037;
  __beg1043 = v1038;
  __end1044 = v1039;
  unnamed1045 = v1040;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1048 = this1042;
  char* t1049 = __beg1043;
  char* t1050 = __end1044;
  long r1051 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1049, t1050);
  unsigned long cast1052 = (unsigned long)r1051;
  __dnew1046 = cast1052;
    unsigned long t1053 = __dnew1046;
    unsigned long c1054 = 15;
    _Bool c1055 = ((t1053 > c1054)) ? 1 : 0;
    if (c1055) {
      unsigned long c1056 = 0;
      char* r1057 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1048, &__dnew1046, c1056);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1048, r1057);
      unsigned long t1058 = __dnew1046;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1048, t1058);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1048);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1047, t1048);
    char* r1059 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1048);
    char* t1060 = __beg1043;
    char* t1061 = __end1044;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1059, t1060, t1061);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1062 = ((void*)0);
    __guard1047._M_guarded = c1062;
    unsigned long t1063 = __dnew1046;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1048, t1063);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1047);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1064) {
bb1065:
  char* __r1066;
  char* __retval1067;
  __r1066 = v1064;
  char* t1068 = __r1066;
  __retval1067 = t1068;
  char* t1069 = __retval1067;
  return t1069;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1070) {
bb1071:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1072;
  char* __retval1073;
  this1072 = v1070;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1074 = this1072;
  char* cast1075 = (char*)&(t1074->field2._M_local_buf);
  char* r1076 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1075);
  __retval1073 = r1076;
  char* t1077 = __retval1073;
  return t1077;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1078) {
bb1079:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1080;
  _Bool __retval1081;
  this1080 = v1078;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1082 = this1080;
    char* r1083 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1082);
    char* r1084 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1082);
    _Bool c1085 = ((r1083 == r1084)) ? 1 : 0;
    if (c1085) {
        unsigned long t1086 = t1082->_M_string_length;
        unsigned long c1087 = 15;
        _Bool c1088 = ((t1086 > c1087)) ? 1 : 0;
        if (c1088) {
          __builtin_unreachable();
        }
      _Bool c1089 = 1;
      __retval1081 = c1089;
      _Bool t1090 = __retval1081;
      return t1090;
    }
  _Bool c1091 = 0;
  __retval1081 = c1091;
  _Bool t1092 = __retval1081;
  return t1092;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1093, char* v1094, unsigned long v1095) {
bb1096:
  struct std____new_allocator_char_* this1097;
  char* __p1098;
  unsigned long __n1099;
  this1097 = v1093;
  __p1098 = v1094;
  __n1099 = v1095;
  struct std____new_allocator_char_* t1100 = this1097;
    unsigned long c1101 = 1;
    unsigned long c1102 = 16;
    _Bool c1103 = ((c1101 > c1102)) ? 1 : 0;
    if (c1103) {
      char* t1104 = __p1098;
      void* cast1105 = (void*)t1104;
      unsigned long t1106 = __n1099;
      unsigned long c1107 = 1;
      unsigned long b1108 = t1106 * c1107;
      unsigned long c1109 = 1;
      operator_delete_3(cast1105, b1108, c1109);
      return;
    }
  char* t1110 = __p1098;
  void* cast1111 = (void*)t1110;
  unsigned long t1112 = __n1099;
  unsigned long c1113 = 1;
  unsigned long b1114 = t1112 * c1113;
  operator_delete_2(cast1111, b1114);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1115, char* v1116, unsigned long v1117) {
bb1118:
  struct std__allocator_char_* this1119;
  char* __p1120;
  unsigned long __n1121;
  this1119 = v1115;
  __p1120 = v1116;
  __n1121 = v1117;
  struct std__allocator_char_* t1122 = this1119;
    _Bool r1123 = std____is_constant_evaluated();
    if (r1123) {
      char* t1124 = __p1120;
      void* cast1125 = (void*)t1124;
      operator_delete(cast1125);
      return;
    }
  struct std____new_allocator_char_* base1126 = (struct std____new_allocator_char_*)((char *)t1122 + 0);
  char* t1127 = __p1120;
  unsigned long t1128 = __n1121;
  std____new_allocator_char___deallocate(base1126, t1127, t1128);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1129, char* v1130, unsigned long v1131) {
bb1132:
  struct std__allocator_char_* __a1133;
  char* __p1134;
  unsigned long __n1135;
  __a1133 = v1129;
  __p1134 = v1130;
  __n1135 = v1131;
  struct std__allocator_char_* t1136 = __a1133;
  char* t1137 = __p1134;
  unsigned long t1138 = __n1135;
  std__allocator_char___deallocate(t1136, t1137, t1138);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1139, unsigned long v1140) {
bb1141:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1142;
  unsigned long __size1143;
  this1142 = v1139;
  __size1143 = v1140;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1144 = this1142;
  struct std__allocator_char_* r1145 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1144);
  char* r1146 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1144);
  unsigned long t1147 = __size1143;
  unsigned long c1148 = 1;
  unsigned long b1149 = t1147 + c1148;
  std__allocator_traits_std__allocator_char_____deallocate(r1145, r1146, b1149);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1150) {
bb1151:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1152;
  this1152 = v1150;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1153 = this1152;
    _Bool r1154 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1153);
    _Bool u1155 = !r1154;
    if (u1155) {
      unsigned long t1156 = t1153->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1153, t1156);
    }
  return;
}

