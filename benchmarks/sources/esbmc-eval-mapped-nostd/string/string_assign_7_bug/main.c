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

char _str[20] = "The quick brown fox";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[29] = "str != \"The quick brown fox\"";
char _str_2[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_assign_7_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
_Bool std__operator__(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
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
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
        char* cast27 = (char*)&(_str_3);
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

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v35) {
bb36:
  struct std__allocator_char_* this37;
  this37 = v35;
  struct std__allocator_char_* t38 = this37;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign() {
bb39:
  _Bool __retval40;
  _Bool t41 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval40 = t41;
  _Bool t42 = __retval40;
  return t42;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal() {
bb43:
  _Bool __retval44;
  _Bool t45 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval44 = t45;
  _Bool t46 = __retval44;
  return t46;
}

// function: _ZSteqRKSaIcES1_
_Bool std__operator__(struct std__allocator_char_* v47, struct std__allocator_char_* v48) {
bb49:
  struct std__allocator_char_* unnamed50;
  struct std__allocator_char_* unnamed51;
  _Bool __retval52;
  unnamed50 = v47;
  unnamed51 = v48;
  _Bool c53 = 1;
  __retval52 = c53;
  _Bool t54 = __retval52;
  return t54;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v55) {
bb56:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __retval58;
  unsigned long __sz59;
  this57 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t60 = this57;
  unsigned long t61 = t60->_M_string_length;
  __sz59 = t61;
    unsigned long t62 = __sz59;
    unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t60);
    _Bool c64 = ((t62 > r63)) ? 1 : 0;
    if (c64) {
      __builtin_unreachable();
    }
  unsigned long t65 = __sz59;
  __retval58 = t65;
  unsigned long t66 = __retval58;
  return t66;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v67) {
bb68:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this69;
  char* __retval70;
  this69 = v67;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t71 = this69;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t71);
  char* r72 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t71);
  __retval70 = r72;
  char* t73 = __retval70;
  return t73;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v74, struct std__allocator_char_* v75) {
bb76:
  struct std__allocator_char_* this77;
  struct std__allocator_char_* __a78;
  this77 = v74;
  __a78 = v75;
  struct std__allocator_char_* t79 = this77;
  struct std____new_allocator_char_* base80 = (struct std____new_allocator_char_*)((char *)t79 + 0);
  struct std__allocator_char_* t81 = __a78;
  struct std____new_allocator_char_* base82 = (struct std____new_allocator_char_*)((char *)t81 + 0);
  std____new_allocator_char_____new_allocator(base80, base82);
  return;
}

// function: _ZSt15__alloc_on_copyISaIcEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_char___(struct std__allocator_char_* v83, struct std__allocator_char_* v84) {
bb85:
  struct std__allocator_char_* __one86;
  struct std__allocator_char_* __two87;
  __one86 = v83;
  __two87 = v84;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v88) {
bb89:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this90;
  unsigned long __retval91;
  this90 = v88;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t92 = this90;
  unsigned long r93 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t92);
  __retval91 = r93;
  unsigned long t94 = __retval91;
  return t94;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v95) {
bb96:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this97;
  unsigned long __retval98;
  unsigned long __sz99;
  this97 = v95;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t100 = this97;
  _Bool r101 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t100);
  unsigned long ternary102;
  if (r101) {
    unsigned long c103 = 15;
    ternary102 = (unsigned long)c103;
  } else {
    unsigned long t104 = t100->field2._M_allocated_capacity;
    ternary102 = (unsigned long)t104;
  }
  __sz99 = ternary102;
    unsigned long t105 = __sz99;
    unsigned long c106 = 15;
    _Bool c107 = ((t105 < c106)) ? 1 : 0;
    _Bool ternary108;
    if (c107) {
      _Bool c109 = 1;
      ternary108 = (_Bool)c109;
    } else {
      unsigned long t110 = __sz99;
      unsigned long r111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t100);
      _Bool c112 = ((t110 > r111)) ? 1 : 0;
      ternary108 = (_Bool)c112;
    }
    if (ternary108) {
      __builtin_unreachable();
    }
  unsigned long t113 = __sz99;
  __retval98 = t113;
  unsigned long t114 = __retval98;
  return t114;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v115, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v116) {
bb117:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str119;
  this118 = v115;
  __str119 = v116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t120 = this118;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t121 = __str119;
    _Bool c122 = ((t120 != t121)) ? 1 : 0;
    if (c122) {
      unsigned long __rsize123;
      unsigned long __capacity124;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t125 = __str119;
      unsigned long r126 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t125);
      __rsize123 = r126;
      unsigned long r127 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t120);
      __capacity124 = r127;
        unsigned long t128 = __rsize123;
        unsigned long t129 = __capacity124;
        _Bool c130 = ((t128 > t129)) ? 1 : 0;
        if (c130) {
          unsigned long __new_capacity131;
          char* __tmp132;
          unsigned long t133 = __rsize123;
          __new_capacity131 = t133;
          unsigned long t134 = __capacity124;
          char* r135 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t120, &__new_capacity131, t134);
          __tmp132 = r135;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t120);
          char* t136 = __tmp132;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t120, t136);
          unsigned long t137 = __new_capacity131;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t120, t137);
        }
        unsigned long t138 = __rsize123;
        _Bool cast139 = (_Bool)t138;
        if (cast139) {
          char* r140 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t120);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t141 = __str119;
          char* r142 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t141);
          unsigned long t143 = __rsize123;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r140, r142, t143);
        }
      unsigned long t144 = __rsize123;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t120, t144);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignERKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v145, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v146) {
bb147:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this148;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str149;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval150;
  this148 = v145;
  __str149 = v146;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t151 = this148;
    _Bool r152 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_copy_assign();
    if (r152) {
        _Bool r153 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_always_equal();
        _Bool u154 = !r153;
        _Bool ternary155;
        if (u154) {
          _Bool r156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t151);
          _Bool u157 = !r156;
          ternary155 = (_Bool)u157;
        } else {
          _Bool c158 = 0;
          ternary155 = (_Bool)c158;
        }
        _Bool ternary159;
        if (ternary155) {
          struct std__allocator_char_* r160 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t151);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t161 = __str149;
          struct std__allocator_char_* r162 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t161);
          _Bool r163 = std__operator__(r160, r162);
          _Bool u164 = !r163;
          ternary159 = (_Bool)u164;
        } else {
          _Bool c165 = 0;
          ternary159 = (_Bool)c165;
        }
        if (ternary159) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t166 = __str149;
            unsigned long r167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t166);
            unsigned long c168 = 15;
            _Bool c169 = ((r167 <= c168)) ? 1 : 0;
            if (c169) {
              unsigned long t170 = t151->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t151, t170);
              char* r171 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t151);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t151, r171);
              unsigned long c172 = 0;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t151, c172);
            } else {
              unsigned long __len173;
              struct std__allocator_char_ __alloc174;
              char* __ptr175;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t176 = __str149;
              unsigned long r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t176);
              __len173 = r177;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t178 = __str149;
              struct std__allocator_char_* r179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t178);
              std__allocator_char___allocator(&__alloc174, r179);
              unsigned long t180 = __len173;
              unsigned long c181 = 1;
              unsigned long b182 = t180 + c181;
              char* r183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(&__alloc174, b182);
              __ptr175 = r183;
              unsigned long t184 = t151->field2._M_allocated_capacity;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t151, t184);
              char* t185 = __ptr175;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t151, t185);
              unsigned long t186 = __len173;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t151, t186);
              unsigned long t187 = __len173;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t151, t187);
            }
        }
      struct std__allocator_char_* r188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t151);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = __str149;
      struct std__allocator_char_* r190 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t189);
      void_std____alloc_on_copy_std__allocator_char___(r188, r190);
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t191 = __str149;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t151, t191);
  __retval150 = t151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t192 = __retval150;
  return t192;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v193, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v194) {
bb195:
  struct std__basic_ostream_char__std__char_traits_char__* __os196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str197;
  struct std__basic_ostream_char__std__char_traits_char__* __retval198;
  __os196 = v193;
  __str197 = v194;
  struct std__basic_ostream_char__std__char_traits_char__* t199 = __os196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t200 = __str197;
  char* r201 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t200);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t202 = __str197;
  unsigned long r203 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t202);
  long cast204 = (long)r203;
  struct std__basic_ostream_char__std__char_traits_char__* r205 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t199, r201, cast204);
  __retval198 = r205;
  struct std__basic_ostream_char__std__char_traits_char__* t206 = __retval198;
  return t206;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v207, void* v208) {
bb209:
  struct std__basic_ostream_char__std__char_traits_char__* this210;
  void* __pf211;
  struct std__basic_ostream_char__std__char_traits_char__* __retval212;
  this210 = v207;
  __pf211 = v208;
  struct std__basic_ostream_char__std__char_traits_char__* t213 = this210;
  void* t214 = __pf211;
  struct std__basic_ostream_char__std__char_traits_char__* r215 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t214)(t213);
  __retval212 = r215;
  struct std__basic_ostream_char__std__char_traits_char__* t216 = __retval212;
  return t216;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v217) {
bb218:
  struct std__basic_ostream_char__std__char_traits_char__* __os219;
  struct std__basic_ostream_char__std__char_traits_char__* __retval220;
  __os219 = v217;
  struct std__basic_ostream_char__std__char_traits_char__* t221 = __os219;
  struct std__basic_ostream_char__std__char_traits_char__* r222 = std__ostream__flush(t221);
  __retval220 = r222;
  struct std__basic_ostream_char__std__char_traits_char__* t223 = __retval220;
  return t223;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v224) {
bb225:
  struct std__ctype_char_* __f226;
  struct std__ctype_char_* __retval227;
  __f226 = v224;
    struct std__ctype_char_* t228 = __f226;
    _Bool cast229 = (_Bool)t228;
    _Bool u230 = !cast229;
    if (u230) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t231 = __f226;
  __retval227 = t231;
  struct std__ctype_char_* t232 = __retval227;
  return t232;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v233, char v234) {
bb235:
  struct std__ctype_char_* this236;
  char __c237;
  char __retval238;
  this236 = v233;
  __c237 = v234;
  struct std__ctype_char_* t239 = this236;
    char t240 = t239->_M_widen_ok;
    _Bool cast241 = (_Bool)t240;
    if (cast241) {
      char t242 = __c237;
      unsigned char cast243 = (unsigned char)t242;
      unsigned long cast244 = (unsigned long)cast243;
      char t245 = t239->_M_widen[cast244];
      __retval238 = t245;
      char t246 = __retval238;
      return t246;
    }
  std__ctype_char____M_widen_init___const(t239);
  char t247 = __c237;
  void** v248 = (void**)t239;
  void* v249 = *((void**)v248);
  char vcall252 = (char)__VERIFIER_virtual_call_char_char(t239, 6, t247);
  __retval238 = vcall252;
  char t253 = __retval238;
  return t253;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v254, char v255) {
bb256:
  struct std__basic_ios_char__std__char_traits_char__* this257;
  char __c258;
  char __retval259;
  this257 = v254;
  __c258 = v255;
  struct std__basic_ios_char__std__char_traits_char__* t260 = this257;
  struct std__ctype_char_* t261 = t260->_M_ctype;
  struct std__ctype_char_* r262 = std__ctype_char__const__std____check_facet_std__ctype_char___(t261);
  char t263 = __c258;
  char r264 = std__ctype_char___widen_char__const(r262, t263);
  __retval259 = r264;
  char t265 = __retval259;
  return t265;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v266) {
bb267:
  struct std__basic_ostream_char__std__char_traits_char__* __os268;
  struct std__basic_ostream_char__std__char_traits_char__* __retval269;
  __os268 = v266;
  struct std__basic_ostream_char__std__char_traits_char__* t270 = __os268;
  struct std__basic_ostream_char__std__char_traits_char__* t271 = __os268;
  void** v272 = (void**)t271;
  void* v273 = *((void**)v272);
  unsigned char* cast274 = (unsigned char*)v273;
  long c275 = -24;
  unsigned char* ptr276 = &(cast274)[c275];
  long* cast277 = (long*)ptr276;
  long t278 = *cast277;
  unsigned char* cast279 = (unsigned char*)t271;
  unsigned char* ptr280 = &(cast279)[t278];
  struct std__basic_ostream_char__std__char_traits_char__* cast281 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr280;
  struct std__basic_ios_char__std__char_traits_char__* cast282 = (struct std__basic_ios_char__std__char_traits_char__*)cast281;
  char c283 = 10;
  char r284 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast282, c283);
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__ostream__put(t270, r284);
  struct std__basic_ostream_char__std__char_traits_char__* r286 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r285);
  __retval269 = r286;
  struct std__basic_ostream_char__std__char_traits_char__* t287 = __retval269;
  return t287;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v288, char* v289) {
bb290:
  char* __c1291;
  char* __c2292;
  _Bool __retval293;
  __c1291 = v288;
  __c2292 = v289;
  char* t294 = __c1291;
  char t295 = *t294;
  unsigned char cast296 = (unsigned char)t295;
  int cast297 = (int)cast296;
  char* t298 = __c2292;
  char t299 = *t298;
  unsigned char cast300 = (unsigned char)t299;
  int cast301 = (int)cast300;
  _Bool c302 = ((cast297 < cast301)) ? 1 : 0;
  __retval293 = c302;
  _Bool t303 = __retval293;
  return t303;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v304, char* v305, unsigned long v306) {
bb307:
  char* __s1308;
  char* __s2309;
  unsigned long __n310;
  int __retval311;
  __s1308 = v304;
  __s2309 = v305;
  __n310 = v306;
    unsigned long t312 = __n310;
    unsigned long c313 = 0;
    _Bool c314 = ((t312 == c313)) ? 1 : 0;
    if (c314) {
      int c315 = 0;
      __retval311 = c315;
      int t316 = __retval311;
      return t316;
    }
    _Bool r317 = std____is_constant_evaluated();
    if (r317) {
        unsigned long __i318;
        unsigned long c319 = 0;
        __i318 = c319;
        while (1) {
          unsigned long t321 = __i318;
          unsigned long t322 = __n310;
          _Bool c323 = ((t321 < t322)) ? 1 : 0;
          if (!c323) break;
            unsigned long t324 = __i318;
            char* t325 = __s1308;
            char* ptr326 = &(t325)[t324];
            unsigned long t327 = __i318;
            char* t328 = __s2309;
            char* ptr329 = &(t328)[t327];
            _Bool r330 = std__char_traits_char___lt(ptr326, ptr329);
            if (r330) {
              int c331 = -1;
              __retval311 = c331;
              int t332 = __retval311;
              int ret_val333 = t332;
              return ret_val333;
            } else {
                unsigned long t334 = __i318;
                char* t335 = __s2309;
                char* ptr336 = &(t335)[t334];
                unsigned long t337 = __i318;
                char* t338 = __s1308;
                char* ptr339 = &(t338)[t337];
                _Bool r340 = std__char_traits_char___lt(ptr336, ptr339);
                if (r340) {
                  int c341 = 1;
                  __retval311 = c341;
                  int t342 = __retval311;
                  int ret_val343 = t342;
                  return ret_val343;
                }
            }
        for_step320: ;
          unsigned long t344 = __i318;
          unsigned long u345 = t344 + 1;
          __i318 = u345;
        }
      int c346 = 0;
      __retval311 = c346;
      int t347 = __retval311;
      return t347;
    }
  char* t348 = __s1308;
  void* cast349 = (void*)t348;
  char* t350 = __s2309;
  void* cast351 = (void*)t350;
  unsigned long t352 = __n310;
  int r353 = memcmp(cast349, cast351, t352);
  __retval311 = r353;
  int t354 = __retval311;
  return t354;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v355) {
bb356:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this357;
  char* __retval358;
  this357 = v355;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t359 = this357;
  char* r360 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t359);
  __retval358 = r360;
  char* t361 = __retval358;
  return t361;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v362, char* v363) {
bb364:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs365;
  char* __rhs366;
  _Bool __retval367;
  __lhs365 = v362;
  __rhs366 = v363;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t368 = __lhs365;
  unsigned long r369 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t368);
  char* t370 = __rhs366;
  unsigned long r371 = std__char_traits_char___length(t370);
  _Bool c372 = ((r369 == r371)) ? 1 : 0;
  _Bool ternary373;
  if (c372) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t374 = __lhs365;
    char* r375 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t374);
    char* t376 = __rhs366;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t377 = __lhs365;
    unsigned long r378 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t377);
    int r379 = std__char_traits_char___compare(r375, t376, r378);
    _Bool cast380 = (_Bool)r379;
    _Bool u381 = !cast380;
    ternary373 = (_Bool)u381;
  } else {
    _Bool c382 = 0;
    ternary373 = (_Bool)c382;
  }
  __retval367 = ternary373;
  _Bool t383 = __retval367;
  return t383;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v384) {
bb385:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this386;
  this386 = v384;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t387 = this386;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t387);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t387->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb388:
  int __retval389;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str390;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ base391;
  struct std__allocator_char_ ref_tmp0392;
  int c393 = 0;
  __retval389 = c393;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str390);
    char* cast394 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp0392);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&base391, cast394, &ref_tmp0392);
    {
      std__allocator_char____allocator(&ref_tmp0392);
    }
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r395 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(&str390, &base391);
      struct std__basic_ostream_char__std__char_traits_char__* r396 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &str390);
      struct std__basic_ostream_char__std__char_traits_char__* r397 = std__ostream__operator___std__ostream_____(r396, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast398 = (char*)&(_str);
      _Bool r399 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&str390, cast398);
      _Bool u400 = !r399;
      if (u400) {
      } else {
        char* cast401 = (char*)&(_str_1);
        char* c402 = _str_2;
        unsigned int c403 = 25;
        char* cast404 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast401, c402, c403, cast404);
      }
      int c405 = 0;
      __retval389 = c405;
      int t406 = __retval389;
      int ret_val407 = t406;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&base391);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str390);
      }
      return ret_val407;
  int t408 = __retval389;
  return t408;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v409) {
bb410:
  char* __r411;
  char* __retval412;
  __r411 = v409;
  char* t413 = __r411;
  __retval412 = t413;
  char* t414 = __retval412;
  return t414;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v415) {
bb416:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this417;
  char* __retval418;
  this417 = v415;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t419 = this417;
  char* cast420 = (char*)&(t419->field2._M_local_buf);
  char* r421 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast420);
  __retval418 = r421;
  char* t422 = __retval418;
  return t422;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v423, char* v424, struct std__allocator_char_* v425) {
bb426:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this427;
  char* __dat428;
  struct std__allocator_char_* __a429;
  this427 = v423;
  __dat428 = v424;
  __a429 = v425;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t430 = this427;
  struct std__allocator_char_* base431 = (struct std__allocator_char_*)((char *)t430 + 0);
  struct std__allocator_char_* t432 = __a429;
  std__allocator_char___allocator(base431, t432);
    char* t433 = __dat428;
    t430->_M_p = t433;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb434:
  _Bool __retval435;
    _Bool c436 = 0;
    __retval435 = c436;
    _Bool t437 = __retval435;
    return t437;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v438) {
bb439:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this440;
  this440 = v438;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t441 = this440;
    _Bool r442 = std__is_constant_evaluated();
    if (r442) {
        unsigned long __i443;
        unsigned long c444 = 0;
        __i443 = c444;
        while (1) {
          unsigned long t446 = __i443;
          unsigned long c447 = 15;
          _Bool c448 = ((t446 <= c447)) ? 1 : 0;
          if (!c448) break;
          char c449 = 0;
          unsigned long t450 = __i443;
          t441->field2._M_local_buf[t450] = c449;
        for_step445: ;
          unsigned long t451 = __i443;
          unsigned long u452 = t451 + 1;
          __i443 = u452;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v453, unsigned long v454) {
bb455:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this456;
  unsigned long __length457;
  this456 = v453;
  __length457 = v454;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t458 = this456;
  unsigned long t459 = __length457;
  t458->_M_string_length = t459;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb460:
  _Bool __retval461;
    _Bool c462 = 0;
    __retval461 = c462;
    _Bool t463 = __retval461;
    return t463;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v464, char* v465) {
bb466:
  char* __location467;
  char* __args468;
  char* __retval469;
  void* __loc470;
  __location467 = v464;
  __args468 = v465;
  char* t471 = __location467;
  void* cast472 = (void*)t471;
  __loc470 = cast472;
    void* t473 = __loc470;
    char* cast474 = (char*)t473;
    char* t475 = __args468;
    char t476 = *t475;
    *cast474 = t476;
    __retval469 = cast474;
    char* t477 = __retval469;
    return t477;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v478, char* v479) {
bb480:
  char* __c1481;
  char* __c2482;
  __c1481 = v478;
  __c2482 = v479;
    _Bool r483 = std____is_constant_evaluated();
    if (r483) {
      char* t484 = __c1481;
      char* t485 = __c2482;
      char* r486 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t484, t485);
    } else {
      char* t487 = __c2482;
      char t488 = *t487;
      char* t489 = __c1481;
      *t489 = t488;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v490) {
bb491:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this492;
  char* __retval493;
  this492 = v490;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t494 = this492;
  char* t495 = t494->_M_dataplus._M_p;
  __retval493 = t495;
  char* t496 = __retval493;
  return t496;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v497, unsigned long v498) {
bb499:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this500;
  unsigned long __n501;
  char ref_tmp0502;
  this500 = v497;
  __n501 = v498;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t503 = this500;
  unsigned long t504 = __n501;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t503, t504);
  unsigned long t505 = __n501;
  char* r506 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t503);
  char* ptr507 = &(r506)[t505];
  char c508 = 0;
  ref_tmp0502 = c508;
  std__char_traits_char___assign(ptr507, &ref_tmp0502);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v509) {
bb510:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this511;
  this511 = v509;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t512 = this511;
  {
    struct std__allocator_char_* base513 = (struct std__allocator_char_*)((char *)t512 + 0);
    std__allocator_char____allocator(base513);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v514, struct std____new_allocator_char_* v515) {
bb516:
  struct std____new_allocator_char_* this517;
  struct std____new_allocator_char_* unnamed518;
  this517 = v514;
  unnamed518 = v515;
  struct std____new_allocator_char_* t519 = this517;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v520) {
bb521:
  struct std____new_allocator_char_* this522;
  this522 = v520;
  struct std____new_allocator_char_* t523 = this522;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v524, char* v525, struct std__allocator_char_* v526) {
bb527:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this528;
  char* __dat529;
  struct std__allocator_char_* __a530;
  this528 = v524;
  __dat529 = v525;
  __a530 = v526;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t531 = this528;
  struct std__allocator_char_* base532 = (struct std__allocator_char_*)((char *)t531 + 0);
  struct std__allocator_char_* t533 = __a530;
  std__allocator_char___allocator(base532, t533);
    char* t534 = __dat529;
    t531->_M_p = t534;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v535, char* v536) {
bb537:
  char* __c1538;
  char* __c2539;
  _Bool __retval540;
  __c1538 = v535;
  __c2539 = v536;
  char* t541 = __c1538;
  char t542 = *t541;
  int cast543 = (int)t542;
  char* t544 = __c2539;
  char t545 = *t544;
  int cast546 = (int)t545;
  _Bool c547 = ((cast543 == cast546)) ? 1 : 0;
  __retval540 = c547;
  _Bool t548 = __retval540;
  return t548;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v549) {
bb550:
  char* __p551;
  unsigned long __retval552;
  unsigned long __i553;
  __p551 = v549;
  unsigned long c554 = 0;
  __i553 = c554;
    char ref_tmp0555;
    while (1) {
      unsigned long t556 = __i553;
      char* t557 = __p551;
      char* ptr558 = &(t557)[t556];
      char c559 = 0;
      ref_tmp0555 = c559;
      _Bool r560 = __gnu_cxx__char_traits_char___eq(ptr558, &ref_tmp0555);
      _Bool u561 = !r560;
      if (!u561) break;
      unsigned long t562 = __i553;
      unsigned long u563 = t562 + 1;
      __i553 = u563;
    }
  unsigned long t564 = __i553;
  __retval552 = t564;
  unsigned long t565 = __retval552;
  return t565;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v566) {
bb567:
  char* __s568;
  unsigned long __retval569;
  __s568 = v566;
    _Bool r570 = std____is_constant_evaluated();
    if (r570) {
      char* t571 = __s568;
      unsigned long r572 = __gnu_cxx__char_traits_char___length(t571);
      __retval569 = r572;
      unsigned long t573 = __retval569;
      return t573;
    }
  char* t574 = __s568;
  unsigned long r575 = strlen(t574);
  __retval569 = r575;
  unsigned long t576 = __retval569;
  return t576;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v577, char* v578, struct std__random_access_iterator_tag v579) {
bb580:
  char* __first581;
  char* __last582;
  struct std__random_access_iterator_tag unnamed583;
  long __retval584;
  __first581 = v577;
  __last582 = v578;
  unnamed583 = v579;
  char* t585 = __last582;
  char* t586 = __first581;
  long diff587 = t585 - t586;
  __retval584 = diff587;
  long t588 = __retval584;
  return t588;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v589) {
bb590:
  char** unnamed591;
  struct std__random_access_iterator_tag __retval592;
  unnamed591 = v589;
  struct std__random_access_iterator_tag t593 = __retval592;
  return t593;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v594, char* v595) {
bb596:
  char* __first597;
  char* __last598;
  long __retval599;
  struct std__random_access_iterator_tag agg_tmp0600;
  __first597 = v594;
  __last598 = v595;
  char* t601 = __first597;
  char* t602 = __last598;
  struct std__random_access_iterator_tag r603 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first597);
  agg_tmp0600 = r603;
  struct std__random_access_iterator_tag t604 = agg_tmp0600;
  long r605 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t601, t602, t604);
  __retval599 = r605;
  long t606 = __retval599;
  return t606;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v607, char* v608) {
bb609:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this610;
  char* __p611;
  this610 = v607;
  __p611 = v608;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t612 = this610;
  char* t613 = __p611;
  t612->_M_dataplus._M_p = t613;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v614) {
bb615:
  struct std__allocator_char_* __a616;
  unsigned long __retval617;
  __a616 = v614;
  unsigned long c618 = -1;
  unsigned long c619 = 1;
  unsigned long b620 = c618 / c619;
  __retval617 = b620;
  unsigned long t621 = __retval617;
  return t621;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v622) {
bb623:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this624;
  struct std__allocator_char_* __retval625;
  this624 = v622;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t626 = this624;
  struct std__allocator_char_* base627 = (struct std__allocator_char_*)((char *)&(t626->_M_dataplus) + 0);
  __retval625 = base627;
  struct std__allocator_char_* t628 = __retval625;
  return t628;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v629, unsigned long* v630) {
bb631:
  unsigned long* __a632;
  unsigned long* __b633;
  unsigned long* __retval634;
  __a632 = v629;
  __b633 = v630;
    unsigned long* t635 = __b633;
    unsigned long t636 = *t635;
    unsigned long* t637 = __a632;
    unsigned long t638 = *t637;
    _Bool c639 = ((t636 < t638)) ? 1 : 0;
    if (c639) {
      unsigned long* t640 = __b633;
      __retval634 = t640;
      unsigned long* t641 = __retval634;
      return t641;
    }
  unsigned long* t642 = __a632;
  __retval634 = t642;
  unsigned long* t643 = __retval634;
  return t643;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v644) {
bb645:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this646;
  unsigned long __retval647;
  unsigned long __diffmax648;
  unsigned long __allocmax649;
  this646 = v644;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = this646;
  unsigned long c651 = 9223372036854775807;
  __diffmax648 = c651;
  struct std__allocator_char_* r652 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t650);
  unsigned long r653 = std__allocator_traits_std__allocator_char_____max_size(r652);
  __allocmax649 = r653;
  unsigned long* r654 = unsigned_long_const__std__min_unsigned_long_(&__diffmax648, &__allocmax649);
  unsigned long t655 = *r654;
  unsigned long c656 = 1;
  unsigned long b657 = t655 - c656;
  __retval647 = b657;
  unsigned long t658 = __retval647;
  return t658;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v659) {
bb660:
  struct std____new_allocator_char_* this661;
  unsigned long __retval662;
  this661 = v659;
  struct std____new_allocator_char_* t663 = this661;
  unsigned long c664 = 9223372036854775807;
  unsigned long c665 = 1;
  unsigned long b666 = c664 / c665;
  __retval662 = b666;
  unsigned long t667 = __retval662;
  return t667;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v668, unsigned long v669, void* v670) {
bb671:
  struct std____new_allocator_char_* this672;
  unsigned long __n673;
  void* unnamed674;
  char* __retval675;
  this672 = v668;
  __n673 = v669;
  unnamed674 = v670;
  struct std____new_allocator_char_* t676 = this672;
    unsigned long t677 = __n673;
    unsigned long r678 = std____new_allocator_char____M_max_size___const(t676);
    _Bool c679 = ((t677 > r678)) ? 1 : 0;
    if (c679) {
        unsigned long t680 = __n673;
        unsigned long c681 = -1;
        unsigned long c682 = 1;
        unsigned long b683 = c681 / c682;
        _Bool c684 = ((t680 > b683)) ? 1 : 0;
        if (c684) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c685 = 1;
    unsigned long c686 = 16;
    _Bool c687 = ((c685 > c686)) ? 1 : 0;
    if (c687) {
      unsigned long __al688;
      unsigned long c689 = 1;
      __al688 = c689;
      unsigned long t690 = __n673;
      unsigned long c691 = 1;
      unsigned long b692 = t690 * c691;
      unsigned long t693 = __al688;
      void* r694 = operator_new_2(b692, t693);
      char* cast695 = (char*)r694;
      __retval675 = cast695;
      char* t696 = __retval675;
      return t696;
    }
  unsigned long t697 = __n673;
  unsigned long c698 = 1;
  unsigned long b699 = t697 * c698;
  void* r700 = operator_new(b699);
  char* cast701 = (char*)r700;
  __retval675 = cast701;
  char* t702 = __retval675;
  return t702;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v703, unsigned long v704) {
bb705:
  struct std__allocator_char_* this706;
  unsigned long __n707;
  char* __retval708;
  this706 = v703;
  __n707 = v704;
  struct std__allocator_char_* t709 = this706;
    _Bool r710 = std____is_constant_evaluated();
    if (r710) {
        unsigned long t711 = __n707;
        unsigned long c712 = 1;
        unsigned long ovr713;
        _Bool ovf714 = __builtin_mul_overflow(t711, c712, &ovr713);
        __n707 = ovr713;
        if (ovf714) {
          std____throw_bad_array_new_length();
        }
      unsigned long t715 = __n707;
      void* r716 = operator_new(t715);
      char* cast717 = (char*)r716;
      __retval708 = cast717;
      char* t718 = __retval708;
      return t718;
    }
  struct std____new_allocator_char_* base719 = (struct std____new_allocator_char_*)((char *)t709 + 0);
  unsigned long t720 = __n707;
  void* c721 = ((void*)0);
  char* r722 = std____new_allocator_char___allocate(base719, t720, c721);
  __retval708 = r722;
  char* t723 = __retval708;
  return t723;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v724, unsigned long v725) {
bb726:
  struct std__allocator_char_* __a727;
  unsigned long __n728;
  char* __retval729;
  __a727 = v724;
  __n728 = v725;
  struct std__allocator_char_* t730 = __a727;
  unsigned long t731 = __n728;
  char* r732 = std__allocator_char___allocate(t730, t731);
  __retval729 = r732;
  char* t733 = __retval729;
  return t733;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v734, unsigned long v735) {
bb736:
  struct std__allocator_char_* __a737;
  unsigned long __n738;
  char* __retval739;
  char* __p740;
  __a737 = v734;
  __n738 = v735;
  struct std__allocator_char_* t741 = __a737;
  unsigned long t742 = __n738;
  char* r743 = std__allocator_traits_std__allocator_char_____allocate(t741, t742);
  __p740 = r743;
  char* t744 = __p740;
  __retval739 = t744;
  char* t745 = __retval739;
  return t745;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v746) {
bb747:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this748;
  struct std__allocator_char_* __retval749;
  this748 = v746;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t750 = this748;
  struct std__allocator_char_* base751 = (struct std__allocator_char_*)((char *)&(t750->_M_dataplus) + 0);
  __retval749 = base751;
  struct std__allocator_char_* t752 = __retval749;
  return t752;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v753, unsigned long* v754, unsigned long v755) {
bb756:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this757;
  unsigned long* __capacity758;
  unsigned long __old_capacity759;
  char* __retval760;
  this757 = v753;
  __capacity758 = v754;
  __old_capacity759 = v755;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t761 = this757;
    unsigned long* t762 = __capacity758;
    unsigned long t763 = *t762;
    unsigned long r764 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t761);
    _Bool c765 = ((t763 > r764)) ? 1 : 0;
    if (c765) {
      char* cast766 = (char*)&(_str_4);
      std____throw_length_error(cast766);
    }
    unsigned long* t767 = __capacity758;
    unsigned long t768 = *t767;
    unsigned long t769 = __old_capacity759;
    _Bool c770 = ((t768 > t769)) ? 1 : 0;
    _Bool ternary771;
    if (c770) {
      unsigned long* t772 = __capacity758;
      unsigned long t773 = *t772;
      unsigned long c774 = 2;
      unsigned long t775 = __old_capacity759;
      unsigned long b776 = c774 * t775;
      _Bool c777 = ((t773 < b776)) ? 1 : 0;
      ternary771 = (_Bool)c777;
    } else {
      _Bool c778 = 0;
      ternary771 = (_Bool)c778;
    }
    if (ternary771) {
      unsigned long c779 = 2;
      unsigned long t780 = __old_capacity759;
      unsigned long b781 = c779 * t780;
      unsigned long* t782 = __capacity758;
      *t782 = b781;
        unsigned long* t783 = __capacity758;
        unsigned long t784 = *t783;
        unsigned long r785 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t761);
        _Bool c786 = ((t784 > r785)) ? 1 : 0;
        if (c786) {
          unsigned long r787 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t761);
          unsigned long* t788 = __capacity758;
          *t788 = r787;
        }
    }
  struct std__allocator_char_* r789 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t761);
  unsigned long* t790 = __capacity758;
  unsigned long t791 = *t790;
  unsigned long c792 = 1;
  unsigned long b793 = t791 + c792;
  char* r794 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r789, b793);
  __retval760 = r794;
  char* t795 = __retval760;
  return t795;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v796, unsigned long v797) {
bb798:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this799;
  unsigned long __capacity800;
  this799 = v796;
  __capacity800 = v797;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t801 = this799;
  unsigned long t802 = __capacity800;
  t801->field2._M_allocated_capacity = t802;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v803, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v804) {
bb805:
  struct _Guard* this806;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s807;
  this806 = v803;
  __s807 = v804;
  struct _Guard* t808 = this806;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t809 = __s807;
  t808->_M_guarded = t809;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v810, char* v811, unsigned long v812) {
bb813:
  char* __s1814;
  char* __s2815;
  unsigned long __n816;
  char* __retval817;
  __s1814 = v810;
  __s2815 = v811;
  __n816 = v812;
    unsigned long t818 = __n816;
    unsigned long c819 = 0;
    _Bool c820 = ((t818 == c819)) ? 1 : 0;
    if (c820) {
      char* t821 = __s1814;
      __retval817 = t821;
      char* t822 = __retval817;
      return t822;
    }
    _Bool r823 = std____is_constant_evaluated();
    if (r823) {
        unsigned long __i824;
        unsigned long c825 = 0;
        __i824 = c825;
        while (1) {
          unsigned long t827 = __i824;
          unsigned long t828 = __n816;
          _Bool c829 = ((t827 < t828)) ? 1 : 0;
          if (!c829) break;
          char* t830 = __s1814;
          unsigned long t831 = __i824;
          char* ptr832 = &(t830)[t831];
          unsigned long t833 = __i824;
          char* t834 = __s2815;
          char* ptr835 = &(t834)[t833];
          char* r836 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr832, ptr835);
        for_step826: ;
          unsigned long t837 = __i824;
          unsigned long u838 = t837 + 1;
          __i824 = u838;
        }
      char* t839 = __s1814;
      __retval817 = t839;
      char* t840 = __retval817;
      return t840;
    }
  char* t841 = __s1814;
  void* cast842 = (void*)t841;
  char* t843 = __s2815;
  void* cast844 = (void*)t843;
  unsigned long t845 = __n816;
  unsigned long c846 = 1;
  unsigned long b847 = t845 * c846;
  void* r848 = memcpy(cast842, cast844, b847);
  char* t849 = __s1814;
  __retval817 = t849;
  char* t850 = __retval817;
  return t850;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v851, char* v852, unsigned long v853) {
bb854:
  char* __s1855;
  char* __s2856;
  unsigned long __n857;
  char* __retval858;
  __s1855 = v851;
  __s2856 = v852;
  __n857 = v853;
    unsigned long t859 = __n857;
    unsigned long c860 = 0;
    _Bool c861 = ((t859 == c860)) ? 1 : 0;
    if (c861) {
      char* t862 = __s1855;
      __retval858 = t862;
      char* t863 = __retval858;
      return t863;
    }
    _Bool r864 = std____is_constant_evaluated();
    if (r864) {
      char* t865 = __s1855;
      char* t866 = __s2856;
      unsigned long t867 = __n857;
      char* r868 = __gnu_cxx__char_traits_char___copy(t865, t866, t867);
      __retval858 = r868;
      char* t869 = __retval858;
      return t869;
    }
  char* t870 = __s1855;
  void* cast871 = (void*)t870;
  char* t872 = __s2856;
  void* cast873 = (void*)t872;
  unsigned long t874 = __n857;
  void* r875 = memcpy(cast871, cast873, t874);
  char* cast876 = (char*)r875;
  __retval858 = cast876;
  char* t877 = __retval858;
  return t877;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v878, char* v879, unsigned long v880) {
bb881:
  char* __d882;
  char* __s883;
  unsigned long __n884;
  __d882 = v878;
  __s883 = v879;
  __n884 = v880;
    unsigned long t885 = __n884;
    unsigned long c886 = 1;
    _Bool c887 = ((t885 == c886)) ? 1 : 0;
    if (c887) {
      char* t888 = __d882;
      char* t889 = __s883;
      std__char_traits_char___assign(t888, t889);
    } else {
      char* t890 = __d882;
      char* t891 = __s883;
      unsigned long t892 = __n884;
      char* r893 = std__char_traits_char___copy(t890, t891, t892);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v894) {
bb895:
  char* __it896;
  char* __retval897;
  __it896 = v894;
  char* t898 = __it896;
  __retval897 = t898;
  char* t899 = __retval897;
  return t899;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v900, char* v901, char* v902) {
bb903:
  char* __p904;
  char* __k1905;
  char* __k2906;
  __p904 = v900;
  __k1905 = v901;
  __k2906 = v902;
    char* t907 = __p904;
    char* t908 = __k1905;
    char* r909 = char_const__std____niter_base_char_const__(t908);
    char* t910 = __k2906;
    char* t911 = __k1905;
    long diff912 = t910 - t911;
    unsigned long cast913 = (unsigned long)diff912;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t907, r909, cast913);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v914) {
bb915:
  struct _Guard* this916;
  this916 = v914;
  struct _Guard* t917 = this916;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t918 = t917->_M_guarded;
    _Bool cast919 = (_Bool)t918;
    if (cast919) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t920 = t917->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t920);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v921, char* v922, char* v923, struct std__forward_iterator_tag v924) {
bb925:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this926;
  char* __beg927;
  char* __end928;
  struct std__forward_iterator_tag unnamed929;
  unsigned long __dnew930;
  struct _Guard __guard931;
  this926 = v921;
  __beg927 = v922;
  __end928 = v923;
  unnamed929 = v924;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t932 = this926;
  char* t933 = __beg927;
  char* t934 = __end928;
  long r935 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t933, t934);
  unsigned long cast936 = (unsigned long)r935;
  __dnew930 = cast936;
    unsigned long t937 = __dnew930;
    unsigned long c938 = 15;
    _Bool c939 = ((t937 > c938)) ? 1 : 0;
    if (c939) {
      unsigned long c940 = 0;
      char* r941 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t932, &__dnew930, c940);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t932, r941);
      unsigned long t942 = __dnew930;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t932, t942);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t932);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard931, t932);
    char* r943 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t932);
    char* t944 = __beg927;
    char* t945 = __end928;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r943, t944, t945);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c946 = ((void*)0);
    __guard931._M_guarded = c946;
    unsigned long t947 = __dnew930;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t932, t947);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard931);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v948) {
bb949:
  char* __r950;
  char* __retval951;
  __r950 = v948;
  char* t952 = __r950;
  __retval951 = t952;
  char* t953 = __retval951;
  return t953;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v954) {
bb955:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this956;
  char* __retval957;
  this956 = v954;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t958 = this956;
  char* cast959 = (char*)&(t958->field2._M_local_buf);
  char* r960 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast959);
  __retval957 = r960;
  char* t961 = __retval957;
  return t961;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v962) {
bb963:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this964;
  _Bool __retval965;
  this964 = v962;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t966 = this964;
    char* r967 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t966);
    char* r968 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t966);
    _Bool c969 = ((r967 == r968)) ? 1 : 0;
    if (c969) {
        unsigned long t970 = t966->_M_string_length;
        unsigned long c971 = 15;
        _Bool c972 = ((t970 > c971)) ? 1 : 0;
        if (c972) {
          __builtin_unreachable();
        }
      _Bool c973 = 1;
      __retval965 = c973;
      _Bool t974 = __retval965;
      return t974;
    }
  _Bool c975 = 0;
  __retval965 = c975;
  _Bool t976 = __retval965;
  return t976;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v977, char* v978, unsigned long v979) {
bb980:
  struct std____new_allocator_char_* this981;
  char* __p982;
  unsigned long __n983;
  this981 = v977;
  __p982 = v978;
  __n983 = v979;
  struct std____new_allocator_char_* t984 = this981;
    unsigned long c985 = 1;
    unsigned long c986 = 16;
    _Bool c987 = ((c985 > c986)) ? 1 : 0;
    if (c987) {
      char* t988 = __p982;
      void* cast989 = (void*)t988;
      unsigned long t990 = __n983;
      unsigned long c991 = 1;
      unsigned long b992 = t990 * c991;
      unsigned long c993 = 1;
      operator_delete_3(cast989, b992, c993);
      return;
    }
  char* t994 = __p982;
  void* cast995 = (void*)t994;
  unsigned long t996 = __n983;
  unsigned long c997 = 1;
  unsigned long b998 = t996 * c997;
  operator_delete_2(cast995, b998);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v999, char* v1000, unsigned long v1001) {
bb1002:
  struct std__allocator_char_* this1003;
  char* __p1004;
  unsigned long __n1005;
  this1003 = v999;
  __p1004 = v1000;
  __n1005 = v1001;
  struct std__allocator_char_* t1006 = this1003;
    _Bool r1007 = std____is_constant_evaluated();
    if (r1007) {
      char* t1008 = __p1004;
      void* cast1009 = (void*)t1008;
      operator_delete(cast1009);
      return;
    }
  struct std____new_allocator_char_* base1010 = (struct std____new_allocator_char_*)((char *)t1006 + 0);
  char* t1011 = __p1004;
  unsigned long t1012 = __n1005;
  std____new_allocator_char___deallocate(base1010, t1011, t1012);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1013, char* v1014, unsigned long v1015) {
bb1016:
  struct std__allocator_char_* __a1017;
  char* __p1018;
  unsigned long __n1019;
  __a1017 = v1013;
  __p1018 = v1014;
  __n1019 = v1015;
  struct std__allocator_char_* t1020 = __a1017;
  char* t1021 = __p1018;
  unsigned long t1022 = __n1019;
  std__allocator_char___deallocate(t1020, t1021, t1022);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1023, unsigned long v1024) {
bb1025:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1026;
  unsigned long __size1027;
  this1026 = v1023;
  __size1027 = v1024;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1028 = this1026;
  struct std__allocator_char_* r1029 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1028);
  char* r1030 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1028);
  unsigned long t1031 = __size1027;
  unsigned long c1032 = 1;
  unsigned long b1033 = t1031 + c1032;
  std__allocator_traits_std__allocator_char_____deallocate(r1029, r1030, b1033);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1034) {
bb1035:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1036;
  this1036 = v1034;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1037 = this1036;
    _Bool r1038 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1037);
    _Bool u1039 = !r1038;
    if (u1039) {
      unsigned long t1040 = t1037->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1037, t1040);
    }
  return;
}

