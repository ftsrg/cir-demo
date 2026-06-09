extern void abort(void);
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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[2] = "A";
char _str_1[20] = "str.capacity() < 12";
char _str_2[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_capacity_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, struct std__allocator_char_* p3);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EPKcmRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v12, char* v13, unsigned long v14, struct std__allocator_char_* v15) {
bb16:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this17;
  char* __s18;
  unsigned long __n19;
  struct std__allocator_char_* __a20;
  struct std__forward_iterator_tag agg_tmp021;
  this17 = v12;
  __s18 = v13;
  __n19 = v14;
  __a20 = v15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t22 = this17;
  char* r23 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t22);
  struct std__allocator_char_* t24 = __a20;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t22->_M_dataplus, r23, t24);
      char* t25 = __s18;
      char* c26 = ((void*)0);
      _Bool c27 = ((t25 == c26)) ? 1 : 0;
      _Bool ternary28;
      if (c27) {
        unsigned long t29 = __n19;
        unsigned long c30 = 0;
        _Bool c31 = ((t29 > c30)) ? 1 : 0;
        ternary28 = (_Bool)c31;
      } else {
        _Bool c32 = 0;
        ternary28 = (_Bool)c32;
      }
      if (ternary28) {
        char* cast33 = (char*)&(_str_3);
        std____throw_logic_error(cast33);
      }
    char* t34 = __s18;
    char* t35 = __s18;
    unsigned long t36 = __n19;
    char* ptr37 = &(t35)[t36];
    struct std__forward_iterator_tag t38 = agg_tmp021;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t22, t34, ptr37, t38);
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb39:
  _Bool __retval40;
  _Bool t41 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval40 = t41;
  _Bool t42 = __retval40;
  return t42;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v43, struct std____new_allocator_char_* v44) {
bb45:
  struct std____new_allocator_char_* this46;
  struct std____new_allocator_char_* unnamed47;
  struct std____new_allocator_char_* __retval48;
  this46 = v43;
  unnamed47 = v44;
  struct std____new_allocator_char_* t49 = this46;
  __retval48 = t49;
  struct std____new_allocator_char_* t50 = __retval48;
  return t50;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v51, struct std__allocator_char_* v52) {
bb53:
  struct std__allocator_char_* this54;
  struct std__allocator_char_* unnamed55;
  struct std__allocator_char_* __retval56;
  this54 = v51;
  unnamed55 = v52;
  struct std__allocator_char_* t57 = this54;
  struct std____new_allocator_char_* base58 = (struct std____new_allocator_char_*)((char *)t57 + 0);
  struct std__allocator_char_* t59 = unnamed55;
  struct std____new_allocator_char_* base60 = (struct std____new_allocator_char_*)((char *)t59 + 0);
  struct std____new_allocator_char_* r61 = std____new_allocator_char___operator_(base58, base60);
  __retval56 = t57;
  struct std__allocator_char_* t62 = __retval56;
  return t62;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v63, struct std__allocator_char_* v64) {
bb65:
  struct std__allocator_char_* __one66;
  struct std__allocator_char_* __two67;
  __one66 = v63;
  __two67 = v64;
    struct std__allocator_char_* t68 = __two67;
    struct std__allocator_char_* t69 = __one66;
    struct std__allocator_char_* r70 = std__allocator_char___operator_(t69, t68);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v71) {
bb72:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this73;
  unsigned long __retval74;
  unsigned long __sz75;
  this73 = v71;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t76 = this73;
  unsigned long t77 = t76->_M_string_length;
  __sz75 = t77;
    unsigned long t78 = __sz75;
    unsigned long r79 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t76);
    _Bool c80 = ((t78 > r79)) ? 1 : 0;
    if (c80) {
      __builtin_unreachable();
    }
  unsigned long t81 = __sz75;
  __retval74 = t81;
  unsigned long t82 = __retval74;
  return t82;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v83) {
bb84:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this85;
  unsigned long __retval86;
  this85 = v83;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t87 = this85;
  unsigned long r88 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t87);
  __retval86 = r88;
  unsigned long t89 = __retval86;
  return t89;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v90) {
bb91:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this92;
  char* __retval93;
  this92 = v90;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t94 = this92;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t94);
  char* r95 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t94);
  __retval93 = r95;
  char* t96 = __retval93;
  return t96;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v97, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v98) {
bb99:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this100;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str101;
  this100 = v97;
  __str101 = v98;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t102 = this100;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t103 = __str101;
    _Bool c104 = ((t102 != t103)) ? 1 : 0;
    if (c104) {
      unsigned long __rsize105;
      unsigned long __capacity106;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t107 = __str101;
      unsigned long r108 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t107);
      __rsize105 = r108;
      unsigned long r109 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t102);
      __capacity106 = r109;
        unsigned long t110 = __rsize105;
        unsigned long t111 = __capacity106;
        _Bool c112 = ((t110 > t111)) ? 1 : 0;
        if (c112) {
          unsigned long __new_capacity113;
          char* __tmp114;
          unsigned long t115 = __rsize105;
          __new_capacity113 = t115;
          unsigned long t116 = __capacity106;
          char* r117 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t102, &__new_capacity113, t116);
          __tmp114 = r117;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t102);
          char* t118 = __tmp114;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t102, t118);
          unsigned long t119 = __new_capacity113;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t102, t119);
        }
        unsigned long t120 = __rsize105;
        _Bool cast121 = (_Bool)t120;
        if (cast121) {
          char* r122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t102);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t123 = __str101;
          char* r124 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t123);
          unsigned long t125 = __rsize105;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r122, r124, t125);
        }
      unsigned long t126 = __rsize105;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t102, t126);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v127) {
bb128:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this129;
  this129 = v127;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t130 = this129;
  unsigned long c131 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t130, c131);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v132, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v133) {
bb134:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this135;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str136;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval137;
  _Bool __equal_allocs138;
  this135 = v132;
  __str136 = v133;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t139 = this135;
  _Bool c140 = 1;
  __equal_allocs138 = c140;
    _Bool r141 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t139);
    _Bool u142 = !r141;
    _Bool ternary143;
    if (u142) {
      _Bool r144 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary143 = (_Bool)r144;
    } else {
      _Bool c145 = 0;
      ternary143 = (_Bool)c145;
    }
    _Bool ternary146;
    if (ternary143) {
      _Bool t147 = __equal_allocs138;
      _Bool u148 = !t147;
      ternary146 = (_Bool)u148;
    } else {
      _Bool c149 = 0;
      ternary146 = (_Bool)c149;
    }
    if (ternary146) {
      unsigned long t150 = t139->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t139, t150);
      char* r151 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t139);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t139, r151);
      unsigned long c152 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t139, c152);
    }
  struct std__allocator_char_* r153 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t139);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t154 = __str136;
  struct std__allocator_char_* r155 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t154);
  void_std____alloc_on_move_std__allocator_char___(r153, r155);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t156 = __str136;
    _Bool r157 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t156);
    if (r157) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t158 = __str136;
        _Bool c159 = ((t158 != t139)) ? 1 : 0;
        if (c159) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t160 = __str136;
            unsigned long r161 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t160);
            _Bool cast162 = (_Bool)r161;
            if (cast162) {
              char* r163 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t139);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t164 = __str136;
              char* r165 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t164);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t166 = __str136;
              unsigned long r167 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t166);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r163, r165, r167);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t168 = __str136;
          unsigned long r169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t168);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t139, r169);
        }
    } else {
        _Bool r170 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary171;
        if (r170) {
          _Bool c172 = 1;
          ternary171 = (_Bool)c172;
        } else {
          _Bool t173 = __equal_allocs138;
          ternary171 = (_Bool)t173;
        }
        if (ternary171) {
          char* __data174;
          unsigned long __capacity175;
          char* c176 = ((void*)0);
          __data174 = c176;
            _Bool r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t139);
            _Bool u178 = !r177;
            if (u178) {
                _Bool t179 = __equal_allocs138;
                if (t179) {
                  char* r180 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t139);
                  __data174 = r180;
                  unsigned long t181 = t139->field2._M_allocated_capacity;
                  __capacity175 = t181;
                } else {
                  unsigned long t182 = t139->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t139, t182);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t183 = __str136;
          char* r184 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t183);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t139, r184);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t185 = __str136;
          unsigned long r186 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t185);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t139, r186);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t187 = __str136;
          unsigned long t188 = t187->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t139, t188);
            char* t189 = __data174;
            _Bool cast190 = (_Bool)t189;
            if (cast190) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t191 = __str136;
              char* t192 = __data174;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t191, t192);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t193 = __str136;
              unsigned long t194 = __capacity175;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t193, t194);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t195 = __str136;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t196 = __str136;
              char* r197 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t196);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t195, r197);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t198 = __str136;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t139, t198);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t199 = __str136;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t199);
  __retval137 = t139;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t200 = __retval137;
  return t200;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v201) {
bb202:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this203;
  this203 = v201;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t204 = this203;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t204);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t204->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v205) {
bb206:
  struct std__allocator_char_* this207;
  this207 = v205;
  struct std__allocator_char_* t208 = this207;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v209) {
bb210:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this211;
  unsigned long __retval212;
  unsigned long __sz213;
  this211 = v209;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t214 = this211;
  _Bool r215 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t214);
  unsigned long ternary216;
  if (r215) {
    unsigned long c217 = 15;
    ternary216 = (unsigned long)c217;
  } else {
    unsigned long t218 = t214->field2._M_allocated_capacity;
    ternary216 = (unsigned long)t218;
  }
  __sz213 = ternary216;
    unsigned long t219 = __sz213;
    unsigned long c220 = 15;
    _Bool c221 = ((t219 < c220)) ? 1 : 0;
    _Bool ternary222;
    if (c221) {
      _Bool c223 = 1;
      ternary222 = (_Bool)c223;
    } else {
      unsigned long t224 = __sz213;
      unsigned long r225 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t214);
      _Bool c226 = ((t224 > r225)) ? 1 : 0;
      ternary222 = (_Bool)c226;
    }
    if (ternary222) {
      __builtin_unreachable();
    }
  unsigned long t227 = __sz213;
  __retval212 = t227;
  unsigned long t228 = __retval212;
  return t228;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v229, unsigned long v230) {
bb231:
  struct std__basic_ostream_char__std__char_traits_char__* this232;
  unsigned long __n233;
  struct std__basic_ostream_char__std__char_traits_char__* __retval234;
  this232 = v229;
  __n233 = v230;
  struct std__basic_ostream_char__std__char_traits_char__* t235 = this232;
  unsigned long t236 = __n233;
  struct std__basic_ostream_char__std__char_traits_char__* r237 = std__ostream__std__ostream___M_insert_unsigned_long_(t235, t236);
  __retval234 = r237;
  struct std__basic_ostream_char__std__char_traits_char__* t238 = __retval234;
  return t238;
}

// function: main
int main() {
bb239:
  int __retval240;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str241;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0242;
  struct std__allocator_char_ ref_tmp1243;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup244;
  int c245 = 0;
  __retval240 = c245;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str241);
    char* cast246 = (char*)&(_str);
    unsigned long c247 = 12;
    std__allocator_char___allocator_2(&ref_tmp1243);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&ref_tmp0242, cast246, c247, &ref_tmp1243);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r248 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str241, &ref_tmp0242);
        tmp_exprcleanup244 = r248;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0242);
      }
    {
      std__allocator_char____allocator(&ref_tmp1243);
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t249 = tmp_exprcleanup244;
    unsigned long r250 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(&str241);
    unsigned long c251 = 12;
    _Bool c252 = ((r250 < c251)) ? 1 : 0;
    if (c252) {
    } else {
      char* cast253 = (char*)&(_str_1);
      char* c254 = _str_2;
      unsigned int c255 = 17;
      char* cast256 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast253, c254, c255, cast256);
    }
    unsigned long r257 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(&str241);
    struct std__basic_ostream_char__std__char_traits_char__* r258 = std__ostream__operator__(&_ZSt4cout, r257);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str241);
  }
  int t259 = __retval240;
  return t259;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v260) {
bb261:
  char* __r262;
  char* __retval263;
  __r262 = v260;
  char* t264 = __r262;
  __retval263 = t264;
  char* t265 = __retval263;
  return t265;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v266) {
bb267:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this268;
  char* __retval269;
  this268 = v266;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t270 = this268;
  char* cast271 = (char*)&(t270->field2._M_local_buf);
  char* r272 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast271);
  __retval269 = r272;
  char* t273 = __retval269;
  return t273;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v274, char* v275, struct std__allocator_char_* v276) {
bb277:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this278;
  char* __dat279;
  struct std__allocator_char_* __a280;
  this278 = v274;
  __dat279 = v275;
  __a280 = v276;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t281 = this278;
  struct std__allocator_char_* base282 = (struct std__allocator_char_*)((char *)t281 + 0);
  struct std__allocator_char_* t283 = __a280;
  std__allocator_char___allocator(base282, t283);
    char* t284 = __dat279;
    t281->_M_p = t284;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb285:
  _Bool __retval286;
    _Bool c287 = 0;
    __retval286 = c287;
    _Bool t288 = __retval286;
    return t288;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v289) {
bb290:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this291;
  this291 = v289;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t292 = this291;
    _Bool r293 = std__is_constant_evaluated();
    if (r293) {
        unsigned long __i294;
        unsigned long c295 = 0;
        __i294 = c295;
        while (1) {
          unsigned long t297 = __i294;
          unsigned long c298 = 15;
          _Bool c299 = ((t297 <= c298)) ? 1 : 0;
          if (!c299) break;
          char c300 = 0;
          unsigned long t301 = __i294;
          t292->field2._M_local_buf[t301] = c300;
        for_step296: ;
          unsigned long t302 = __i294;
          unsigned long u303 = t302 + 1;
          __i294 = u303;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v304, unsigned long v305) {
bb306:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this307;
  unsigned long __length308;
  this307 = v304;
  __length308 = v305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t309 = this307;
  unsigned long t310 = __length308;
  t309->_M_string_length = t310;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb311:
  _Bool __retval312;
    _Bool c313 = 0;
    __retval312 = c313;
    _Bool t314 = __retval312;
    return t314;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v315, char* v316) {
bb317:
  char* __location318;
  char* __args319;
  char* __retval320;
  void* __loc321;
  __location318 = v315;
  __args319 = v316;
  char* t322 = __location318;
  void* cast323 = (void*)t322;
  __loc321 = cast323;
    void* t324 = __loc321;
    char* cast325 = (char*)t324;
    char* t326 = __args319;
    char t327 = *t326;
    *cast325 = t327;
    __retval320 = cast325;
    char* t328 = __retval320;
    return t328;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v329, char* v330) {
bb331:
  char* __c1332;
  char* __c2333;
  __c1332 = v329;
  __c2333 = v330;
    _Bool r334 = std____is_constant_evaluated();
    if (r334) {
      char* t335 = __c1332;
      char* t336 = __c2333;
      char* r337 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t335, t336);
    } else {
      char* t338 = __c2333;
      char t339 = *t338;
      char* t340 = __c1332;
      *t340 = t339;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v341) {
bb342:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this343;
  char* __retval344;
  this343 = v341;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t345 = this343;
  char* t346 = t345->_M_dataplus._M_p;
  __retval344 = t346;
  char* t347 = __retval344;
  return t347;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v348, unsigned long v349) {
bb350:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this351;
  unsigned long __n352;
  char ref_tmp0353;
  this351 = v348;
  __n352 = v349;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t354 = this351;
  unsigned long t355 = __n352;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t354, t355);
  unsigned long t356 = __n352;
  char* r357 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t354);
  char* ptr358 = &(r357)[t356];
  char c359 = 0;
  ref_tmp0353 = c359;
  std__char_traits_char___assign(ptr358, &ref_tmp0353);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v360) {
bb361:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this362;
  this362 = v360;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t363 = this362;
  {
    struct std__allocator_char_* base364 = (struct std__allocator_char_*)((char *)t363 + 0);
    std__allocator_char____allocator(base364);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v365, struct std____new_allocator_char_* v366) {
bb367:
  struct std____new_allocator_char_* this368;
  struct std____new_allocator_char_* unnamed369;
  this368 = v365;
  unnamed369 = v366;
  struct std____new_allocator_char_* t370 = this368;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v371, struct std__allocator_char_* v372) {
bb373:
  struct std__allocator_char_* this374;
  struct std__allocator_char_* __a375;
  this374 = v371;
  __a375 = v372;
  struct std__allocator_char_* t376 = this374;
  struct std____new_allocator_char_* base377 = (struct std____new_allocator_char_*)((char *)t376 + 0);
  struct std__allocator_char_* t378 = __a375;
  struct std____new_allocator_char_* base379 = (struct std____new_allocator_char_*)((char *)t378 + 0);
  std____new_allocator_char_____new_allocator(base377, base379);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v380) {
bb381:
  struct std____new_allocator_char_* this382;
  this382 = v380;
  struct std____new_allocator_char_* t383 = this382;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v384, char* v385, struct std__allocator_char_* v386) {
bb387:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this388;
  char* __dat389;
  struct std__allocator_char_* __a390;
  this388 = v384;
  __dat389 = v385;
  __a390 = v386;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t391 = this388;
  struct std__allocator_char_* base392 = (struct std__allocator_char_*)((char *)t391 + 0);
  struct std__allocator_char_* t393 = __a390;
  std__allocator_char___allocator(base392, t393);
    char* t394 = __dat389;
    t391->_M_p = t394;
  return;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v395, char* v396, struct std__random_access_iterator_tag v397) {
bb398:
  char* __first399;
  char* __last400;
  struct std__random_access_iterator_tag unnamed401;
  long __retval402;
  __first399 = v395;
  __last400 = v396;
  unnamed401 = v397;
  char* t403 = __last400;
  char* t404 = __first399;
  long diff405 = t403 - t404;
  __retval402 = diff405;
  long t406 = __retval402;
  return t406;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v407) {
bb408:
  char** unnamed409;
  struct std__random_access_iterator_tag __retval410;
  unnamed409 = v407;
  struct std__random_access_iterator_tag t411 = __retval410;
  return t411;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v412, char* v413) {
bb414:
  char* __first415;
  char* __last416;
  long __retval417;
  struct std__random_access_iterator_tag agg_tmp0418;
  __first415 = v412;
  __last416 = v413;
  char* t419 = __first415;
  char* t420 = __last416;
  struct std__random_access_iterator_tag r421 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first415);
  agg_tmp0418 = r421;
  struct std__random_access_iterator_tag t422 = agg_tmp0418;
  long r423 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t419, t420, t422);
  __retval417 = r423;
  long t424 = __retval417;
  return t424;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v425, char* v426) {
bb427:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this428;
  char* __p429;
  this428 = v425;
  __p429 = v426;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t430 = this428;
  char* t431 = __p429;
  t430->_M_dataplus._M_p = t431;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v432) {
bb433:
  struct std__allocator_char_* __a434;
  unsigned long __retval435;
  __a434 = v432;
  unsigned long c436 = -1;
  unsigned long c437 = 1;
  unsigned long b438 = c436 / c437;
  __retval435 = b438;
  unsigned long t439 = __retval435;
  return t439;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v440) {
bb441:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this442;
  struct std__allocator_char_* __retval443;
  this442 = v440;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t444 = this442;
  struct std__allocator_char_* base445 = (struct std__allocator_char_*)((char *)&(t444->_M_dataplus) + 0);
  __retval443 = base445;
  struct std__allocator_char_* t446 = __retval443;
  return t446;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v447, unsigned long* v448) {
bb449:
  unsigned long* __a450;
  unsigned long* __b451;
  unsigned long* __retval452;
  __a450 = v447;
  __b451 = v448;
    unsigned long* t453 = __b451;
    unsigned long t454 = *t453;
    unsigned long* t455 = __a450;
    unsigned long t456 = *t455;
    _Bool c457 = ((t454 < t456)) ? 1 : 0;
    if (c457) {
      unsigned long* t458 = __b451;
      __retval452 = t458;
      unsigned long* t459 = __retval452;
      return t459;
    }
  unsigned long* t460 = __a450;
  __retval452 = t460;
  unsigned long* t461 = __retval452;
  return t461;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v462) {
bb463:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this464;
  unsigned long __retval465;
  unsigned long __diffmax466;
  unsigned long __allocmax467;
  this464 = v462;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t468 = this464;
  unsigned long c469 = 9223372036854775807;
  __diffmax466 = c469;
  struct std__allocator_char_* r470 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t468);
  unsigned long r471 = std__allocator_traits_std__allocator_char_____max_size(r470);
  __allocmax467 = r471;
  unsigned long* r472 = unsigned_long_const__std__min_unsigned_long_(&__diffmax466, &__allocmax467);
  unsigned long t473 = *r472;
  unsigned long c474 = 1;
  unsigned long b475 = t473 - c474;
  __retval465 = b475;
  unsigned long t476 = __retval465;
  return t476;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v477) {
bb478:
  struct std____new_allocator_char_* this479;
  unsigned long __retval480;
  this479 = v477;
  struct std____new_allocator_char_* t481 = this479;
  unsigned long c482 = 9223372036854775807;
  unsigned long c483 = 1;
  unsigned long b484 = c482 / c483;
  __retval480 = b484;
  unsigned long t485 = __retval480;
  return t485;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v486, unsigned long v487, void* v488) {
bb489:
  struct std____new_allocator_char_* this490;
  unsigned long __n491;
  void* unnamed492;
  char* __retval493;
  this490 = v486;
  __n491 = v487;
  unnamed492 = v488;
  struct std____new_allocator_char_* t494 = this490;
    unsigned long t495 = __n491;
    unsigned long r496 = std____new_allocator_char____M_max_size___const(t494);
    _Bool c497 = ((t495 > r496)) ? 1 : 0;
    if (c497) {
        unsigned long t498 = __n491;
        unsigned long c499 = -1;
        unsigned long c500 = 1;
        unsigned long b501 = c499 / c500;
        _Bool c502 = ((t498 > b501)) ? 1 : 0;
        if (c502) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c503 = 1;
    unsigned long c504 = 16;
    _Bool c505 = ((c503 > c504)) ? 1 : 0;
    if (c505) {
      unsigned long __al506;
      unsigned long c507 = 1;
      __al506 = c507;
      unsigned long t508 = __n491;
      unsigned long c509 = 1;
      unsigned long b510 = t508 * c509;
      unsigned long t511 = __al506;
      void* r512 = operator_new_2(b510, t511);
      char* cast513 = (char*)r512;
      __retval493 = cast513;
      char* t514 = __retval493;
      return t514;
    }
  unsigned long t515 = __n491;
  unsigned long c516 = 1;
  unsigned long b517 = t515 * c516;
  void* r518 = operator_new(b517);
  char* cast519 = (char*)r518;
  __retval493 = cast519;
  char* t520 = __retval493;
  return t520;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v521, unsigned long v522) {
bb523:
  struct std__allocator_char_* this524;
  unsigned long __n525;
  char* __retval526;
  this524 = v521;
  __n525 = v522;
  struct std__allocator_char_* t527 = this524;
    _Bool r528 = std____is_constant_evaluated();
    if (r528) {
        unsigned long t529 = __n525;
        unsigned long c530 = 1;
        unsigned long ovr531;
        _Bool ovf532 = __builtin_mul_overflow(t529, c530, &ovr531);
        __n525 = ovr531;
        if (ovf532) {
          std____throw_bad_array_new_length();
        }
      unsigned long t533 = __n525;
      void* r534 = operator_new(t533);
      char* cast535 = (char*)r534;
      __retval526 = cast535;
      char* t536 = __retval526;
      return t536;
    }
  struct std____new_allocator_char_* base537 = (struct std____new_allocator_char_*)((char *)t527 + 0);
  unsigned long t538 = __n525;
  void* c539 = ((void*)0);
  char* r540 = std____new_allocator_char___allocate(base537, t538, c539);
  __retval526 = r540;
  char* t541 = __retval526;
  return t541;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v542, unsigned long v543) {
bb544:
  struct std__allocator_char_* __a545;
  unsigned long __n546;
  char* __retval547;
  __a545 = v542;
  __n546 = v543;
  struct std__allocator_char_* t548 = __a545;
  unsigned long t549 = __n546;
  char* r550 = std__allocator_char___allocate(t548, t549);
  __retval547 = r550;
  char* t551 = __retval547;
  return t551;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v552, unsigned long v553) {
bb554:
  struct std__allocator_char_* __a555;
  unsigned long __n556;
  char* __retval557;
  char* __p558;
  __a555 = v552;
  __n556 = v553;
  struct std__allocator_char_* t559 = __a555;
  unsigned long t560 = __n556;
  char* r561 = std__allocator_traits_std__allocator_char_____allocate(t559, t560);
  __p558 = r561;
  char* t562 = __p558;
  __retval557 = t562;
  char* t563 = __retval557;
  return t563;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v564) {
bb565:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this566;
  struct std__allocator_char_* __retval567;
  this566 = v564;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t568 = this566;
  struct std__allocator_char_* base569 = (struct std__allocator_char_*)((char *)&(t568->_M_dataplus) + 0);
  __retval567 = base569;
  struct std__allocator_char_* t570 = __retval567;
  return t570;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v571, unsigned long* v572, unsigned long v573) {
bb574:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this575;
  unsigned long* __capacity576;
  unsigned long __old_capacity577;
  char* __retval578;
  this575 = v571;
  __capacity576 = v572;
  __old_capacity577 = v573;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t579 = this575;
    unsigned long* t580 = __capacity576;
    unsigned long t581 = *t580;
    unsigned long r582 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t579);
    _Bool c583 = ((t581 > r582)) ? 1 : 0;
    if (c583) {
      char* cast584 = (char*)&(_str_4);
      std____throw_length_error(cast584);
    }
    unsigned long* t585 = __capacity576;
    unsigned long t586 = *t585;
    unsigned long t587 = __old_capacity577;
    _Bool c588 = ((t586 > t587)) ? 1 : 0;
    _Bool ternary589;
    if (c588) {
      unsigned long* t590 = __capacity576;
      unsigned long t591 = *t590;
      unsigned long c592 = 2;
      unsigned long t593 = __old_capacity577;
      unsigned long b594 = c592 * t593;
      _Bool c595 = ((t591 < b594)) ? 1 : 0;
      ternary589 = (_Bool)c595;
    } else {
      _Bool c596 = 0;
      ternary589 = (_Bool)c596;
    }
    if (ternary589) {
      unsigned long c597 = 2;
      unsigned long t598 = __old_capacity577;
      unsigned long b599 = c597 * t598;
      unsigned long* t600 = __capacity576;
      *t600 = b599;
        unsigned long* t601 = __capacity576;
        unsigned long t602 = *t601;
        unsigned long r603 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t579);
        _Bool c604 = ((t602 > r603)) ? 1 : 0;
        if (c604) {
          unsigned long r605 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t579);
          unsigned long* t606 = __capacity576;
          *t606 = r605;
        }
    }
  struct std__allocator_char_* r607 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t579);
  unsigned long* t608 = __capacity576;
  unsigned long t609 = *t608;
  unsigned long c610 = 1;
  unsigned long b611 = t609 + c610;
  char* r612 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r607, b611);
  __retval578 = r612;
  char* t613 = __retval578;
  return t613;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v614, unsigned long v615) {
bb616:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this617;
  unsigned long __capacity618;
  this617 = v614;
  __capacity618 = v615;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t619 = this617;
  unsigned long t620 = __capacity618;
  t619->field2._M_allocated_capacity = t620;
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v621, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v622) {
bb623:
  struct _Guard* this624;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s625;
  this624 = v621;
  __s625 = v622;
  struct _Guard* t626 = this624;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t627 = __s625;
  t626->_M_guarded = t627;
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v628, char* v629, unsigned long v630) {
bb631:
  char* __s1632;
  char* __s2633;
  unsigned long __n634;
  char* __retval635;
  __s1632 = v628;
  __s2633 = v629;
  __n634 = v630;
    unsigned long t636 = __n634;
    unsigned long c637 = 0;
    _Bool c638 = ((t636 == c637)) ? 1 : 0;
    if (c638) {
      char* t639 = __s1632;
      __retval635 = t639;
      char* t640 = __retval635;
      return t640;
    }
    _Bool r641 = std____is_constant_evaluated();
    if (r641) {
        unsigned long __i642;
        unsigned long c643 = 0;
        __i642 = c643;
        while (1) {
          unsigned long t645 = __i642;
          unsigned long t646 = __n634;
          _Bool c647 = ((t645 < t646)) ? 1 : 0;
          if (!c647) break;
          char* t648 = __s1632;
          unsigned long t649 = __i642;
          char* ptr650 = &(t648)[t649];
          unsigned long t651 = __i642;
          char* t652 = __s2633;
          char* ptr653 = &(t652)[t651];
          char* r654 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr650, ptr653);
        for_step644: ;
          unsigned long t655 = __i642;
          unsigned long u656 = t655 + 1;
          __i642 = u656;
        }
      char* t657 = __s1632;
      __retval635 = t657;
      char* t658 = __retval635;
      return t658;
    }
  char* t659 = __s1632;
  void* cast660 = (void*)t659;
  char* t661 = __s2633;
  void* cast662 = (void*)t661;
  unsigned long t663 = __n634;
  unsigned long c664 = 1;
  unsigned long b665 = t663 * c664;
  void* r666 = memcpy(cast660, cast662, b665);
  char* t667 = __s1632;
  __retval635 = t667;
  char* t668 = __retval635;
  return t668;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v669, char* v670, unsigned long v671) {
bb672:
  char* __s1673;
  char* __s2674;
  unsigned long __n675;
  char* __retval676;
  __s1673 = v669;
  __s2674 = v670;
  __n675 = v671;
    unsigned long t677 = __n675;
    unsigned long c678 = 0;
    _Bool c679 = ((t677 == c678)) ? 1 : 0;
    if (c679) {
      char* t680 = __s1673;
      __retval676 = t680;
      char* t681 = __retval676;
      return t681;
    }
    _Bool r682 = std____is_constant_evaluated();
    if (r682) {
      char* t683 = __s1673;
      char* t684 = __s2674;
      unsigned long t685 = __n675;
      char* r686 = __gnu_cxx__char_traits_char___copy(t683, t684, t685);
      __retval676 = r686;
      char* t687 = __retval676;
      return t687;
    }
  char* t688 = __s1673;
  void* cast689 = (void*)t688;
  char* t690 = __s2674;
  void* cast691 = (void*)t690;
  unsigned long t692 = __n675;
  void* r693 = memcpy(cast689, cast691, t692);
  char* cast694 = (char*)r693;
  __retval676 = cast694;
  char* t695 = __retval676;
  return t695;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v696, char* v697, unsigned long v698) {
bb699:
  char* __d700;
  char* __s701;
  unsigned long __n702;
  __d700 = v696;
  __s701 = v697;
  __n702 = v698;
    unsigned long t703 = __n702;
    unsigned long c704 = 1;
    _Bool c705 = ((t703 == c704)) ? 1 : 0;
    if (c705) {
      char* t706 = __d700;
      char* t707 = __s701;
      std__char_traits_char___assign(t706, t707);
    } else {
      char* t708 = __d700;
      char* t709 = __s701;
      unsigned long t710 = __n702;
      char* r711 = std__char_traits_char___copy(t708, t709, t710);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v712) {
bb713:
  char* __it714;
  char* __retval715;
  __it714 = v712;
  char* t716 = __it714;
  __retval715 = t716;
  char* t717 = __retval715;
  return t717;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v718, char* v719, char* v720) {
bb721:
  char* __p722;
  char* __k1723;
  char* __k2724;
  __p722 = v718;
  __k1723 = v719;
  __k2724 = v720;
    char* t725 = __p722;
    char* t726 = __k1723;
    char* r727 = char_const__std____niter_base_char_const__(t726);
    char* t728 = __k2724;
    char* t729 = __k1723;
    long diff730 = t728 - t729;
    unsigned long cast731 = (unsigned long)diff730;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t725, r727, cast731);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v732) {
bb733:
  struct _Guard* this734;
  this734 = v732;
  struct _Guard* t735 = this734;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t736 = t735->_M_guarded;
    _Bool cast737 = (_Bool)t736;
    if (cast737) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t738 = t735->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t738);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v739, char* v740, char* v741, struct std__forward_iterator_tag v742) {
bb743:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this744;
  char* __beg745;
  char* __end746;
  struct std__forward_iterator_tag unnamed747;
  unsigned long __dnew748;
  struct _Guard __guard749;
  this744 = v739;
  __beg745 = v740;
  __end746 = v741;
  unnamed747 = v742;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t750 = this744;
  char* t751 = __beg745;
  char* t752 = __end746;
  long r753 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t751, t752);
  unsigned long cast754 = (unsigned long)r753;
  __dnew748 = cast754;
    unsigned long t755 = __dnew748;
    unsigned long c756 = 15;
    _Bool c757 = ((t755 > c756)) ? 1 : 0;
    if (c757) {
      unsigned long c758 = 0;
      char* r759 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t750, &__dnew748, c758);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t750, r759);
      unsigned long t760 = __dnew748;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t750, t760);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t750);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard749, t750);
    char* r761 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t750);
    char* t762 = __beg745;
    char* t763 = __end746;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r761, t762, t763);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c764 = ((void*)0);
    __guard749._M_guarded = c764;
    unsigned long t765 = __dnew748;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t750, t765);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard749);
  }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v766) {
bb767:
  char* __r768;
  char* __retval769;
  __r768 = v766;
  char* t770 = __r768;
  __retval769 = t770;
  char* t771 = __retval769;
  return t771;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v772) {
bb773:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this774;
  char* __retval775;
  this774 = v772;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t776 = this774;
  char* cast777 = (char*)&(t776->field2._M_local_buf);
  char* r778 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast777);
  __retval775 = r778;
  char* t779 = __retval775;
  return t779;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v780) {
bb781:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this782;
  _Bool __retval783;
  this782 = v780;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t784 = this782;
    char* r785 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t784);
    char* r786 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t784);
    _Bool c787 = ((r785 == r786)) ? 1 : 0;
    if (c787) {
        unsigned long t788 = t784->_M_string_length;
        unsigned long c789 = 15;
        _Bool c790 = ((t788 > c789)) ? 1 : 0;
        if (c790) {
          __builtin_unreachable();
        }
      _Bool c791 = 1;
      __retval783 = c791;
      _Bool t792 = __retval783;
      return t792;
    }
  _Bool c793 = 0;
  __retval783 = c793;
  _Bool t794 = __retval783;
  return t794;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v795, char* v796, unsigned long v797) {
bb798:
  struct std____new_allocator_char_* this799;
  char* __p800;
  unsigned long __n801;
  this799 = v795;
  __p800 = v796;
  __n801 = v797;
  struct std____new_allocator_char_* t802 = this799;
    unsigned long c803 = 1;
    unsigned long c804 = 16;
    _Bool c805 = ((c803 > c804)) ? 1 : 0;
    if (c805) {
      char* t806 = __p800;
      void* cast807 = (void*)t806;
      unsigned long t808 = __n801;
      unsigned long c809 = 1;
      unsigned long b810 = t808 * c809;
      unsigned long c811 = 1;
      operator_delete_3(cast807, b810, c811);
      return;
    }
  char* t812 = __p800;
  void* cast813 = (void*)t812;
  unsigned long t814 = __n801;
  unsigned long c815 = 1;
  unsigned long b816 = t814 * c815;
  operator_delete_2(cast813, b816);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v817, char* v818, unsigned long v819) {
bb820:
  struct std__allocator_char_* this821;
  char* __p822;
  unsigned long __n823;
  this821 = v817;
  __p822 = v818;
  __n823 = v819;
  struct std__allocator_char_* t824 = this821;
    _Bool r825 = std____is_constant_evaluated();
    if (r825) {
      char* t826 = __p822;
      void* cast827 = (void*)t826;
      operator_delete(cast827);
      return;
    }
  struct std____new_allocator_char_* base828 = (struct std____new_allocator_char_*)((char *)t824 + 0);
  char* t829 = __p822;
  unsigned long t830 = __n823;
  std____new_allocator_char___deallocate(base828, t829, t830);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v831, char* v832, unsigned long v833) {
bb834:
  struct std__allocator_char_* __a835;
  char* __p836;
  unsigned long __n837;
  __a835 = v831;
  __p836 = v832;
  __n837 = v833;
  struct std__allocator_char_* t838 = __a835;
  char* t839 = __p836;
  unsigned long t840 = __n837;
  std__allocator_char___deallocate(t838, t839, t840);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v841, unsigned long v842) {
bb843:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this844;
  unsigned long __size845;
  this844 = v841;
  __size845 = v842;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t846 = this844;
  struct std__allocator_char_* r847 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t846);
  char* r848 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t846);
  unsigned long t849 = __size845;
  unsigned long c850 = 1;
  unsigned long b851 = t849 + c850;
  std__allocator_traits_std__allocator_char_____deallocate(r847, r848, b851);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v852) {
bb853:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this854;
  this854 = v852;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t855 = this854;
    _Bool r856 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t855);
    _Bool u857 = !r856;
    if (u857) {
      unsigned long t858 = t855->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t855, t858);
    }
  return;
}

