extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[21] = "str.capacity() >= 12";
char _str_1[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_capacity_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2, struct std__allocator_char_* p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std__char_traits_char___assign_2(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
extern void std____throw_bad_array_new_length();
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
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, char* p1);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* __gnu_cxx__char_traits_char___assign(char* p0, unsigned long p1, char p2);
extern void* memset(void* p0, int p1, unsigned long p2);
char* std__char_traits_char___assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* p0, unsigned long p1, char p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char p2);

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

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v12, unsigned long v13, char v14, struct std__allocator_char_* v15) {
bb16:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this17;
  unsigned long __n18;
  char __c19;
  struct std__allocator_char_* __a20;
  this17 = v12;
  __n18 = v13;
  __c19 = v14;
  __a20 = v15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t21 = this17;
  char* r22 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t21);
  struct std__allocator_char_* t23 = __a20;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t21->_M_dataplus, r22, t23);
    unsigned long t24 = __n18;
    char t25 = __c19;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct(t21, t24, t25);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v26) {
bb27:
  char* __r28;
  char* __retval29;
  __r28 = v26;
  char* t30 = __r28;
  __retval29 = t30;
  char* t31 = __retval29;
  return t31;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32) {
bb33:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this34;
  char* __retval35;
  this34 = v32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t36 = this34;
  char* cast37 = (char*)&(t36->field2._M_local_buf);
  char* r38 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast37);
  __retval35 = r38;
  char* t39 = __retval35;
  return t39;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v40) {
bb41:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this42;
  _Bool __retval43;
  this42 = v40;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t44 = this42;
    char* r45 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t44);
    char* r46 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t44);
    _Bool c47 = ((r45 == r46)) ? 1 : 0;
    if (c47) {
        unsigned long t48 = t44->_M_string_length;
        unsigned long c49 = 15;
        _Bool c50 = ((t48 > c49)) ? 1 : 0;
        if (c50) {
          __builtin_unreachable();
        }
      _Bool c51 = 1;
      __retval43 = c51;
      _Bool t52 = __retval43;
      return t52;
    }
  _Bool c53 = 0;
  __retval43 = c53;
  _Bool t54 = __retval43;
  return t54;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb55:
  _Bool __retval56;
  _Bool t57 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval56 = t57;
  _Bool t58 = __retval56;
  return t58;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v59, char* v60, unsigned long v61) {
bb62:
  struct std____new_allocator_char_* this63;
  char* __p64;
  unsigned long __n65;
  this63 = v59;
  __p64 = v60;
  __n65 = v61;
  struct std____new_allocator_char_* t66 = this63;
    unsigned long c67 = 1;
    unsigned long c68 = 16;
    _Bool c69 = ((c67 > c68)) ? 1 : 0;
    if (c69) {
      char* t70 = __p64;
      void* cast71 = (void*)t70;
      unsigned long t72 = __n65;
      unsigned long c73 = 1;
      unsigned long b74 = t72 * c73;
      unsigned long c75 = 1;
      operator_delete_3(cast71, b74, c75);
      return;
    }
  char* t76 = __p64;
  void* cast77 = (void*)t76;
  unsigned long t78 = __n65;
  unsigned long c79 = 1;
  unsigned long b80 = t78 * c79;
  operator_delete_2(cast77, b80);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v81, char* v82, unsigned long v83) {
bb84:
  struct std__allocator_char_* this85;
  char* __p86;
  unsigned long __n87;
  this85 = v81;
  __p86 = v82;
  __n87 = v83;
  struct std__allocator_char_* t88 = this85;
    _Bool r89 = std____is_constant_evaluated();
    if (r89) {
      char* t90 = __p86;
      void* cast91 = (void*)t90;
      operator_delete(cast91);
      return;
    }
  struct std____new_allocator_char_* base92 = (struct std____new_allocator_char_*)((char *)t88 + 0);
  char* t93 = __p86;
  unsigned long t94 = __n87;
  std____new_allocator_char___deallocate(base92, t93, t94);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v95, char* v96, unsigned long v97) {
bb98:
  struct std__allocator_char_* __a99;
  char* __p100;
  unsigned long __n101;
  __a99 = v95;
  __p100 = v96;
  __n101 = v97;
  struct std__allocator_char_* t102 = __a99;
  char* t103 = __p100;
  unsigned long t104 = __n101;
  std__allocator_char___deallocate(t102, t103, t104);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v105, unsigned long v106) {
bb107:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this108;
  unsigned long __size109;
  this108 = v105;
  __size109 = v106;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t110 = this108;
  struct std__allocator_char_* r111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t110);
  char* r112 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t110);
  unsigned long t113 = __size109;
  unsigned long c114 = 1;
  unsigned long b115 = t113 + c114;
  std__allocator_traits_std__allocator_char_____deallocate(r111, r112, b115);
  return;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v116, struct std____new_allocator_char_* v117) {
bb118:
  struct std____new_allocator_char_* this119;
  struct std____new_allocator_char_* unnamed120;
  struct std____new_allocator_char_* __retval121;
  this119 = v116;
  unnamed120 = v117;
  struct std____new_allocator_char_* t122 = this119;
  __retval121 = t122;
  struct std____new_allocator_char_* t123 = __retval121;
  return t123;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v124, struct std__allocator_char_* v125) {
bb126:
  struct std__allocator_char_* this127;
  struct std__allocator_char_* unnamed128;
  struct std__allocator_char_* __retval129;
  this127 = v124;
  unnamed128 = v125;
  struct std__allocator_char_* t130 = this127;
  struct std____new_allocator_char_* base131 = (struct std____new_allocator_char_*)((char *)t130 + 0);
  struct std__allocator_char_* t132 = unnamed128;
  struct std____new_allocator_char_* base133 = (struct std____new_allocator_char_*)((char *)t132 + 0);
  struct std____new_allocator_char_* r134 = std____new_allocator_char___operator_(base131, base133);
  __retval129 = t130;
  struct std__allocator_char_* t135 = __retval129;
  return t135;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v136, struct std__allocator_char_* v137) {
bb138:
  struct std__allocator_char_* __one139;
  struct std__allocator_char_* __two140;
  __one139 = v136;
  __two140 = v137;
    struct std__allocator_char_* t141 = __two140;
    struct std__allocator_char_* t142 = __one139;
    struct std__allocator_char_* r143 = std__allocator_char___operator_(t142, t141);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v144) {
bb145:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this146;
  unsigned long __retval147;
  unsigned long __sz148;
  this146 = v144;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t149 = this146;
  unsigned long t150 = t149->_M_string_length;
  __sz148 = t150;
    unsigned long t151 = __sz148;
    unsigned long r152 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t149);
    _Bool c153 = ((t151 > r152)) ? 1 : 0;
    if (c153) {
      __builtin_unreachable();
    }
  unsigned long t154 = __sz148;
  __retval147 = t154;
  unsigned long t155 = __retval147;
  return t155;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v156, char* v157, unsigned long v158) {
bb159:
  char* __s1160;
  char* __s2161;
  unsigned long __n162;
  char* __retval163;
  __s1160 = v156;
  __s2161 = v157;
  __n162 = v158;
    unsigned long t164 = __n162;
    unsigned long c165 = 0;
    _Bool c166 = ((t164 == c165)) ? 1 : 0;
    if (c166) {
      char* t167 = __s1160;
      __retval163 = t167;
      char* t168 = __retval163;
      return t168;
    }
    _Bool r169 = std____is_constant_evaluated();
    if (r169) {
        unsigned long __i170;
        unsigned long c171 = 0;
        __i170 = c171;
        while (1) {
          unsigned long t173 = __i170;
          unsigned long t174 = __n162;
          _Bool c175 = ((t173 < t174)) ? 1 : 0;
          if (!c175) break;
          char* t176 = __s1160;
          unsigned long t177 = __i170;
          char* ptr178 = &(t176)[t177];
          unsigned long t179 = __i170;
          char* t180 = __s2161;
          char* ptr181 = &(t180)[t179];
          char* r182 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr178, ptr181);
        for_step172: ;
          unsigned long t183 = __i170;
          unsigned long u184 = t183 + 1;
          __i170 = u184;
        }
      char* t185 = __s1160;
      __retval163 = t185;
      char* t186 = __retval163;
      return t186;
    }
  char* t187 = __s1160;
  void* cast188 = (void*)t187;
  char* t189 = __s2161;
  void* cast190 = (void*)t189;
  unsigned long t191 = __n162;
  unsigned long c192 = 1;
  unsigned long b193 = t191 * c192;
  void* r194 = memcpy(cast188, cast190, b193);
  char* t195 = __s1160;
  __retval163 = t195;
  char* t196 = __retval163;
  return t196;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v197, char* v198, unsigned long v199) {
bb200:
  char* __s1201;
  char* __s2202;
  unsigned long __n203;
  char* __retval204;
  __s1201 = v197;
  __s2202 = v198;
  __n203 = v199;
    unsigned long t205 = __n203;
    unsigned long c206 = 0;
    _Bool c207 = ((t205 == c206)) ? 1 : 0;
    if (c207) {
      char* t208 = __s1201;
      __retval204 = t208;
      char* t209 = __retval204;
      return t209;
    }
    _Bool r210 = std____is_constant_evaluated();
    if (r210) {
      char* t211 = __s1201;
      char* t212 = __s2202;
      unsigned long t213 = __n203;
      char* r214 = __gnu_cxx__char_traits_char___copy(t211, t212, t213);
      __retval204 = r214;
      char* t215 = __retval204;
      return t215;
    }
  char* t216 = __s1201;
  void* cast217 = (void*)t216;
  char* t218 = __s2202;
  void* cast219 = (void*)t218;
  unsigned long t220 = __n203;
  void* r221 = memcpy(cast217, cast219, t220);
  char* cast222 = (char*)r221;
  __retval204 = cast222;
  char* t223 = __retval204;
  return t223;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v224, char* v225, unsigned long v226) {
bb227:
  char* __d228;
  char* __s229;
  unsigned long __n230;
  __d228 = v224;
  __s229 = v225;
  __n230 = v226;
    unsigned long t231 = __n230;
    unsigned long c232 = 1;
    _Bool c233 = ((t231 == c232)) ? 1 : 0;
    if (c233) {
      char* t234 = __d228;
      char* t235 = __s229;
      std__char_traits_char___assign_2(t234, t235);
    } else {
      char* t236 = __d228;
      char* t237 = __s229;
      unsigned long t238 = __n230;
      char* r239 = std__char_traits_char___copy(t236, t237, t238);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v240) {
bb241:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this242;
  unsigned long __retval243;
  this242 = v240;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t244 = this242;
  unsigned long r245 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t244);
  __retval243 = r245;
  unsigned long t246 = __retval243;
  return t246;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v247) {
bb248:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this249;
  char* __retval250;
  this249 = v247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t251 = this249;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t251);
  char* r252 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t251);
  __retval250 = r252;
  char* t253 = __retval250;
  return t253;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v254) {
bb255:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this256;
  this256 = v254;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t257 = this256;
    _Bool r258 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t257);
    _Bool u259 = !r258;
    if (u259) {
      unsigned long t260 = t257->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t257, t260);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v261, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v262) {
bb263:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this264;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str265;
  this264 = v261;
  __str265 = v262;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t266 = this264;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t267 = __str265;
    _Bool c268 = ((t266 != t267)) ? 1 : 0;
    if (c268) {
      unsigned long __rsize269;
      unsigned long __capacity270;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t271 = __str265;
      unsigned long r272 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t271);
      __rsize269 = r272;
      unsigned long r273 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t266);
      __capacity270 = r273;
        unsigned long t274 = __rsize269;
        unsigned long t275 = __capacity270;
        _Bool c276 = ((t274 > t275)) ? 1 : 0;
        if (c276) {
          unsigned long __new_capacity277;
          char* __tmp278;
          unsigned long t279 = __rsize269;
          __new_capacity277 = t279;
          unsigned long t280 = __capacity270;
          char* r281 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t266, &__new_capacity277, t280);
          __tmp278 = r281;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t266);
          char* t282 = __tmp278;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t266, t282);
          unsigned long t283 = __new_capacity277;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t266, t283);
        }
        unsigned long t284 = __rsize269;
        _Bool cast285 = (_Bool)t284;
        if (cast285) {
          char* r286 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t266);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t287 = __str265;
          char* r288 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t287);
          unsigned long t289 = __rsize269;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r286, r288, t289);
        }
      unsigned long t290 = __rsize269;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t266, t290);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v291) {
bb292:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this293;
  this293 = v291;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t294 = this293;
  unsigned long c295 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t294, c295);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v296, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v297) {
bb298:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this299;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str300;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval301;
  _Bool __equal_allocs302;
  this299 = v296;
  __str300 = v297;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t303 = this299;
  _Bool c304 = 1;
  __equal_allocs302 = c304;
    _Bool r305 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t303);
    _Bool u306 = !r305;
    _Bool ternary307;
    if (u306) {
      _Bool r308 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary307 = (_Bool)r308;
    } else {
      _Bool c309 = 0;
      ternary307 = (_Bool)c309;
    }
    _Bool ternary310;
    if (ternary307) {
      _Bool t311 = __equal_allocs302;
      _Bool u312 = !t311;
      ternary310 = (_Bool)u312;
    } else {
      _Bool c313 = 0;
      ternary310 = (_Bool)c313;
    }
    if (ternary310) {
      unsigned long t314 = t303->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t303, t314);
      char* r315 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t303);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t303, r315);
      unsigned long c316 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t303, c316);
    }
  struct std__allocator_char_* r317 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t303);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t318 = __str300;
  struct std__allocator_char_* r319 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t318);
  void_std____alloc_on_move_std__allocator_char___(r317, r319);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t320 = __str300;
    _Bool r321 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t320);
    if (r321) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t322 = __str300;
        _Bool c323 = ((t322 != t303)) ? 1 : 0;
        if (c323) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t324 = __str300;
            unsigned long r325 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t324);
            _Bool cast326 = (_Bool)r325;
            if (cast326) {
              char* r327 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t303);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t328 = __str300;
              char* r329 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t328);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t330 = __str300;
              unsigned long r331 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t330);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r327, r329, r331);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t332 = __str300;
          unsigned long r333 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t332);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t303, r333);
        }
    } else {
        _Bool r334 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary335;
        if (r334) {
          _Bool c336 = 1;
          ternary335 = (_Bool)c336;
        } else {
          _Bool t337 = __equal_allocs302;
          ternary335 = (_Bool)t337;
        }
        if (ternary335) {
          char* __data338;
          unsigned long __capacity339;
          char* c340 = ((void*)0);
          __data338 = c340;
            _Bool r341 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t303);
            _Bool u342 = !r341;
            if (u342) {
                _Bool t343 = __equal_allocs302;
                if (t343) {
                  char* r344 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t303);
                  __data338 = r344;
                  unsigned long t345 = t303->field2._M_allocated_capacity;
                  __capacity339 = t345;
                } else {
                  unsigned long t346 = t303->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t303, t346);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t347 = __str300;
          char* r348 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t347);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t303, r348);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t349 = __str300;
          unsigned long r350 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t349);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t303, r350);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t351 = __str300;
          unsigned long t352 = t351->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t303, t352);
            char* t353 = __data338;
            _Bool cast354 = (_Bool)t353;
            if (cast354) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t355 = __str300;
              char* t356 = __data338;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t355, t356);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t357 = __str300;
              unsigned long t358 = __capacity339;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t357, t358);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t359 = __str300;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t360 = __str300;
              char* r361 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t360);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t359, r361);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t362 = __str300;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t303, t362);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t363 = __str300;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t363);
  __retval301 = t303;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t364 = __retval301;
  return t364;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v365) {
bb366:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this367;
  this367 = v365;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t368 = this367;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t368);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t368->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v369) {
bb370:
  struct std__allocator_char_* this371;
  this371 = v369;
  struct std__allocator_char_* t372 = this371;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v373) {
bb374:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this375;
  unsigned long __retval376;
  unsigned long __sz377;
  this375 = v373;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t378 = this375;
  _Bool r379 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t378);
  unsigned long ternary380;
  if (r379) {
    unsigned long c381 = 15;
    ternary380 = (unsigned long)c381;
  } else {
    unsigned long t382 = t378->field2._M_allocated_capacity;
    ternary380 = (unsigned long)t382;
  }
  __sz377 = ternary380;
    unsigned long t383 = __sz377;
    unsigned long c384 = 15;
    _Bool c385 = ((t383 < c384)) ? 1 : 0;
    _Bool ternary386;
    if (c385) {
      _Bool c387 = 1;
      ternary386 = (_Bool)c387;
    } else {
      unsigned long t388 = __sz377;
      unsigned long r389 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t378);
      _Bool c390 = ((t388 > r389)) ? 1 : 0;
      ternary386 = (_Bool)c390;
    }
    if (ternary386) {
      __builtin_unreachable();
    }
  unsigned long t391 = __sz377;
  __retval376 = t391;
  unsigned long t392 = __retval376;
  return t392;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v393, unsigned long v394) {
bb395:
  struct std__basic_ostream_char__std__char_traits_char__* this396;
  unsigned long __n397;
  struct std__basic_ostream_char__std__char_traits_char__* __retval398;
  this396 = v393;
  __n397 = v394;
  struct std__basic_ostream_char__std__char_traits_char__* t399 = this396;
  unsigned long t400 = __n397;
  struct std__basic_ostream_char__std__char_traits_char__* r401 = std__ostream__std__ostream___M_insert_unsigned_long_(t399, t400);
  __retval398 = r401;
  struct std__basic_ostream_char__std__char_traits_char__* t402 = __retval398;
  return t402;
}

// function: main
int main() {
bb403:
  int __retval404;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str405;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0406;
  struct std__allocator_char_ ref_tmp1407;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup408;
  int c409 = 0;
  __retval404 = c409;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str405);
    unsigned long c410 = 65;
    char c411 = 12;
    std__allocator_char___allocator_2(&ref_tmp1407);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp0406, c410, c411, &ref_tmp1407);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r412 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str405, &ref_tmp0406);
        tmp_exprcleanup408 = r412;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0406);
      }
    {
      std__allocator_char____allocator(&ref_tmp1407);
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t413 = tmp_exprcleanup408;
    unsigned long r414 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(&str405);
    unsigned long c415 = 12;
    _Bool c416 = ((r414 >= c415)) ? 1 : 0;
    if (c416) {
    } else {
      char* cast417 = (char*)&(_str);
      char* c418 = _str_1;
      unsigned int c419 = 15;
      char* cast420 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast417, c418, c419, cast420);
    }
    unsigned long r421 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(&str405);
    struct std__basic_ostream_char__std__char_traits_char__* r422 = std__ostream__operator__(&_ZSt4cout, r421);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str405);
  }
  int t423 = __retval404;
  return t423;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v424) {
bb425:
  char* __r426;
  char* __retval427;
  __r426 = v424;
  char* t428 = __r426;
  __retval427 = t428;
  char* t429 = __retval427;
  return t429;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v430) {
bb431:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this432;
  char* __retval433;
  this432 = v430;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t434 = this432;
  char* cast435 = (char*)&(t434->field2._M_local_buf);
  char* r436 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast435);
  __retval433 = r436;
  char* t437 = __retval433;
  return t437;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v438, char* v439, struct std__allocator_char_* v440) {
bb441:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this442;
  char* __dat443;
  struct std__allocator_char_* __a444;
  this442 = v438;
  __dat443 = v439;
  __a444 = v440;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t445 = this442;
  struct std__allocator_char_* base446 = (struct std__allocator_char_*)((char *)t445 + 0);
  struct std__allocator_char_* t447 = __a444;
  std__allocator_char___allocator(base446, t447);
    char* t448 = __dat443;
    t445->_M_p = t448;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb449:
  _Bool __retval450;
    _Bool c451 = 0;
    __retval450 = c451;
    _Bool t452 = __retval450;
    return t452;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v453) {
bb454:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this455;
  this455 = v453;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t456 = this455;
    _Bool r457 = std__is_constant_evaluated();
    if (r457) {
        unsigned long __i458;
        unsigned long c459 = 0;
        __i458 = c459;
        while (1) {
          unsigned long t461 = __i458;
          unsigned long c462 = 15;
          _Bool c463 = ((t461 <= c462)) ? 1 : 0;
          if (!c463) break;
          char c464 = 0;
          unsigned long t465 = __i458;
          t456->field2._M_local_buf[t465] = c464;
        for_step460: ;
          unsigned long t466 = __i458;
          unsigned long u467 = t466 + 1;
          __i458 = u467;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v468, unsigned long v469) {
bb470:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this471;
  unsigned long __length472;
  this471 = v468;
  __length472 = v469;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t473 = this471;
  unsigned long t474 = __length472;
  t473->_M_string_length = t474;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb475:
  _Bool __retval476;
    _Bool c477 = 0;
    __retval476 = c477;
    _Bool t478 = __retval476;
    return t478;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v479, char* v480) {
bb481:
  char* __location482;
  char* __args483;
  char* __retval484;
  void* __loc485;
  __location482 = v479;
  __args483 = v480;
  char* t486 = __location482;
  void* cast487 = (void*)t486;
  __loc485 = cast487;
    void* t488 = __loc485;
    char* cast489 = (char*)t488;
    char* t490 = __args483;
    char t491 = *t490;
    *cast489 = t491;
    __retval484 = cast489;
    char* t492 = __retval484;
    return t492;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign_2(char* v493, char* v494) {
bb495:
  char* __c1496;
  char* __c2497;
  __c1496 = v493;
  __c2497 = v494;
    _Bool r498 = std____is_constant_evaluated();
    if (r498) {
      char* t499 = __c1496;
      char* t500 = __c2497;
      char* r501 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t499, t500);
    } else {
      char* t502 = __c2497;
      char t503 = *t502;
      char* t504 = __c1496;
      *t504 = t503;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v505) {
bb506:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this507;
  char* __retval508;
  this507 = v505;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t509 = this507;
  char* t510 = t509->_M_dataplus._M_p;
  __retval508 = t510;
  char* t511 = __retval508;
  return t511;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v512, unsigned long v513) {
bb514:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this515;
  unsigned long __n516;
  char ref_tmp0517;
  this515 = v512;
  __n516 = v513;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t518 = this515;
  unsigned long t519 = __n516;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t518, t519);
  unsigned long t520 = __n516;
  char* r521 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t518);
  char* ptr522 = &(r521)[t520];
  char c523 = 0;
  ref_tmp0517 = c523;
  std__char_traits_char___assign_2(ptr522, &ref_tmp0517);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v524) {
bb525:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this526;
  this526 = v524;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t527 = this526;
  {
    struct std__allocator_char_* base528 = (struct std__allocator_char_*)((char *)t527 + 0);
    std__allocator_char____allocator(base528);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v529, struct std____new_allocator_char_* v530) {
bb531:
  struct std____new_allocator_char_* this532;
  struct std____new_allocator_char_* unnamed533;
  this532 = v529;
  unnamed533 = v530;
  struct std____new_allocator_char_* t534 = this532;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v535, struct std__allocator_char_* v536) {
bb537:
  struct std__allocator_char_* this538;
  struct std__allocator_char_* __a539;
  this538 = v535;
  __a539 = v536;
  struct std__allocator_char_* t540 = this538;
  struct std____new_allocator_char_* base541 = (struct std____new_allocator_char_*)((char *)t540 + 0);
  struct std__allocator_char_* t542 = __a539;
  struct std____new_allocator_char_* base543 = (struct std____new_allocator_char_*)((char *)t542 + 0);
  std____new_allocator_char_____new_allocator(base541, base543);
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v544) {
bb545:
  struct std____new_allocator_char_* this546;
  this546 = v544;
  struct std____new_allocator_char_* t547 = this546;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v548, char* v549, struct std__allocator_char_* v550) {
bb551:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this552;
  char* __dat553;
  struct std__allocator_char_* __a554;
  this552 = v548;
  __dat553 = v549;
  __a554 = v550;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t555 = this552;
  struct std__allocator_char_* base556 = (struct std__allocator_char_*)((char *)t555 + 0);
  struct std__allocator_char_* t557 = __a554;
  std__allocator_char___allocator(base556, t557);
    char* t558 = __dat553;
    t555->_M_p = t558;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v559, char* v560) {
bb561:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this562;
  char* __p563;
  this562 = v559;
  __p563 = v560;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t564 = this562;
  char* t565 = __p563;
  t564->_M_dataplus._M_p = t565;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v566) {
bb567:
  struct std__allocator_char_* __a568;
  unsigned long __retval569;
  __a568 = v566;
  unsigned long c570 = -1;
  unsigned long c571 = 1;
  unsigned long b572 = c570 / c571;
  __retval569 = b572;
  unsigned long t573 = __retval569;
  return t573;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v574) {
bb575:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this576;
  struct std__allocator_char_* __retval577;
  this576 = v574;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t578 = this576;
  struct std__allocator_char_* base579 = (struct std__allocator_char_*)((char *)&(t578->_M_dataplus) + 0);
  __retval577 = base579;
  struct std__allocator_char_* t580 = __retval577;
  return t580;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v581, unsigned long* v582) {
bb583:
  unsigned long* __a584;
  unsigned long* __b585;
  unsigned long* __retval586;
  __a584 = v581;
  __b585 = v582;
    unsigned long* t587 = __b585;
    unsigned long t588 = *t587;
    unsigned long* t589 = __a584;
    unsigned long t590 = *t589;
    _Bool c591 = ((t588 < t590)) ? 1 : 0;
    if (c591) {
      unsigned long* t592 = __b585;
      __retval586 = t592;
      unsigned long* t593 = __retval586;
      return t593;
    }
  unsigned long* t594 = __a584;
  __retval586 = t594;
  unsigned long* t595 = __retval586;
  return t595;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v596) {
bb597:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this598;
  unsigned long __retval599;
  unsigned long __diffmax600;
  unsigned long __allocmax601;
  this598 = v596;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t602 = this598;
  unsigned long c603 = 9223372036854775807;
  __diffmax600 = c603;
  struct std__allocator_char_* r604 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t602);
  unsigned long r605 = std__allocator_traits_std__allocator_char_____max_size(r604);
  __allocmax601 = r605;
  unsigned long* r606 = unsigned_long_const__std__min_unsigned_long_(&__diffmax600, &__allocmax601);
  unsigned long t607 = *r606;
  unsigned long c608 = 1;
  unsigned long b609 = t607 - c608;
  __retval599 = b609;
  unsigned long t610 = __retval599;
  return t610;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v611) {
bb612:
  struct std____new_allocator_char_* this613;
  unsigned long __retval614;
  this613 = v611;
  struct std____new_allocator_char_* t615 = this613;
  unsigned long c616 = 9223372036854775807;
  unsigned long c617 = 1;
  unsigned long b618 = c616 / c617;
  __retval614 = b618;
  unsigned long t619 = __retval614;
  return t619;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v620, unsigned long v621, void* v622) {
bb623:
  struct std____new_allocator_char_* this624;
  unsigned long __n625;
  void* unnamed626;
  char* __retval627;
  this624 = v620;
  __n625 = v621;
  unnamed626 = v622;
  struct std____new_allocator_char_* t628 = this624;
    unsigned long t629 = __n625;
    unsigned long r630 = std____new_allocator_char____M_max_size___const(t628);
    _Bool c631 = ((t629 > r630)) ? 1 : 0;
    if (c631) {
        unsigned long t632 = __n625;
        unsigned long c633 = -1;
        unsigned long c634 = 1;
        unsigned long b635 = c633 / c634;
        _Bool c636 = ((t632 > b635)) ? 1 : 0;
        if (c636) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c637 = 1;
    unsigned long c638 = 16;
    _Bool c639 = ((c637 > c638)) ? 1 : 0;
    if (c639) {
      unsigned long __al640;
      unsigned long c641 = 1;
      __al640 = c641;
      unsigned long t642 = __n625;
      unsigned long c643 = 1;
      unsigned long b644 = t642 * c643;
      unsigned long t645 = __al640;
      void* r646 = operator_new_2(b644, t645);
      char* cast647 = (char*)r646;
      __retval627 = cast647;
      char* t648 = __retval627;
      return t648;
    }
  unsigned long t649 = __n625;
  unsigned long c650 = 1;
  unsigned long b651 = t649 * c650;
  void* r652 = operator_new(b651);
  char* cast653 = (char*)r652;
  __retval627 = cast653;
  char* t654 = __retval627;
  return t654;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v655, unsigned long v656) {
bb657:
  struct std__allocator_char_* this658;
  unsigned long __n659;
  char* __retval660;
  this658 = v655;
  __n659 = v656;
  struct std__allocator_char_* t661 = this658;
    _Bool r662 = std____is_constant_evaluated();
    if (r662) {
        unsigned long t663 = __n659;
        unsigned long c664 = 1;
        unsigned long ovr665;
        _Bool ovf666 = __builtin_mul_overflow(t663, c664, &ovr665);
        __n659 = ovr665;
        if (ovf666) {
          std____throw_bad_array_new_length();
        }
      unsigned long t667 = __n659;
      void* r668 = operator_new(t667);
      char* cast669 = (char*)r668;
      __retval660 = cast669;
      char* t670 = __retval660;
      return t670;
    }
  struct std____new_allocator_char_* base671 = (struct std____new_allocator_char_*)((char *)t661 + 0);
  unsigned long t672 = __n659;
  void* c673 = ((void*)0);
  char* r674 = std____new_allocator_char___allocate(base671, t672, c673);
  __retval660 = r674;
  char* t675 = __retval660;
  return t675;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v676, unsigned long v677) {
bb678:
  struct std__allocator_char_* __a679;
  unsigned long __n680;
  char* __retval681;
  __a679 = v676;
  __n680 = v677;
  struct std__allocator_char_* t682 = __a679;
  unsigned long t683 = __n680;
  char* r684 = std__allocator_char___allocate(t682, t683);
  __retval681 = r684;
  char* t685 = __retval681;
  return t685;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v686, unsigned long v687) {
bb688:
  struct std__allocator_char_* __a689;
  unsigned long __n690;
  char* __retval691;
  char* __p692;
  __a689 = v686;
  __n690 = v687;
  struct std__allocator_char_* t693 = __a689;
  unsigned long t694 = __n690;
  char* r695 = std__allocator_traits_std__allocator_char_____allocate(t693, t694);
  __p692 = r695;
  char* t696 = __p692;
  __retval691 = t696;
  char* t697 = __retval691;
  return t697;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v698) {
bb699:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this700;
  struct std__allocator_char_* __retval701;
  this700 = v698;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t702 = this700;
  struct std__allocator_char_* base703 = (struct std__allocator_char_*)((char *)&(t702->_M_dataplus) + 0);
  __retval701 = base703;
  struct std__allocator_char_* t704 = __retval701;
  return t704;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v705, unsigned long* v706, unsigned long v707) {
bb708:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this709;
  unsigned long* __capacity710;
  unsigned long __old_capacity711;
  char* __retval712;
  this709 = v705;
  __capacity710 = v706;
  __old_capacity711 = v707;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t713 = this709;
    unsigned long* t714 = __capacity710;
    unsigned long t715 = *t714;
    unsigned long r716 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t713);
    _Bool c717 = ((t715 > r716)) ? 1 : 0;
    if (c717) {
      char* cast718 = (char*)&(_str_2);
      std____throw_length_error(cast718);
    }
    unsigned long* t719 = __capacity710;
    unsigned long t720 = *t719;
    unsigned long t721 = __old_capacity711;
    _Bool c722 = ((t720 > t721)) ? 1 : 0;
    _Bool ternary723;
    if (c722) {
      unsigned long* t724 = __capacity710;
      unsigned long t725 = *t724;
      unsigned long c726 = 2;
      unsigned long t727 = __old_capacity711;
      unsigned long b728 = c726 * t727;
      _Bool c729 = ((t725 < b728)) ? 1 : 0;
      ternary723 = (_Bool)c729;
    } else {
      _Bool c730 = 0;
      ternary723 = (_Bool)c730;
    }
    if (ternary723) {
      unsigned long c731 = 2;
      unsigned long t732 = __old_capacity711;
      unsigned long b733 = c731 * t732;
      unsigned long* t734 = __capacity710;
      *t734 = b733;
        unsigned long* t735 = __capacity710;
        unsigned long t736 = *t735;
        unsigned long r737 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t713);
        _Bool c738 = ((t736 > r737)) ? 1 : 0;
        if (c738) {
          unsigned long r739 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t713);
          unsigned long* t740 = __capacity710;
          *t740 = r739;
        }
    }
  struct std__allocator_char_* r741 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t713);
  unsigned long* t742 = __capacity710;
  unsigned long t743 = *t742;
  unsigned long c744 = 1;
  unsigned long b745 = t743 + c744;
  char* r746 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r741, b745);
  __retval712 = r746;
  char* t747 = __retval712;
  return t747;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v748, unsigned long v749) {
bb750:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this751;
  unsigned long __capacity752;
  this751 = v748;
  __capacity752 = v749;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t753 = this751;
  unsigned long t754 = __capacity752;
  t753->field2._M_allocated_capacity = t754;
  return;
}

// function: _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v755, char* v756) {
bb757:
  char* __location758;
  char* __args759;
  char* __retval760;
  void* __loc761;
  __location758 = v755;
  __args759 = v756;
  char* t762 = __location758;
  void* cast763 = (void*)t762;
  __loc761 = cast763;
    void* t764 = __loc761;
    char* cast765 = (char*)t764;
    char* t766 = __args759;
    char t767 = *t766;
    *cast765 = t767;
    __retval760 = cast765;
    char* t768 = __retval760;
    return t768;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignEPcmc
char* __gnu_cxx__char_traits_char___assign(char* v769, unsigned long v770, char v771) {
bb772:
  char* __s773;
  unsigned long __n774;
  char __a775;
  char* __retval776;
  __s773 = v769;
  __n774 = v770;
  __a775 = v771;
    _Bool r777 = std____is_constant_evaluated();
    if (r777) {
        unsigned long __i778;
        unsigned long c779 = 0;
        __i778 = c779;
        while (1) {
          unsigned long t781 = __i778;
          unsigned long t782 = __n774;
          _Bool c783 = ((t781 < t782)) ? 1 : 0;
          if (!c783) break;
          char* t784 = __s773;
          unsigned long t785 = __i778;
          char* ptr786 = &(t784)[t785];
          char* r787 = _ZSt12construct_atIcJRcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(ptr786, &__a775);
        for_step780: ;
          unsigned long t788 = __i778;
          unsigned long u789 = t788 + 1;
          __i778 = u789;
        }
      char* t790 = __s773;
      __retval776 = t790;
      char* t791 = __retval776;
      return t791;
    }
      unsigned long t792 = __n774;
      _Bool cast793 = (_Bool)t792;
      if (cast793) {
        unsigned char __c794;
        void* cast795 = (void*)&(__c794);
        void* cast796 = (void*)&(__a775);
        unsigned long c797 = 1;
        void* r798 = memcpy(cast795, cast796, c797);
        char* t799 = __s773;
        void* cast800 = (void*)t799;
        unsigned char t801 = __c794;
        int cast802 = (int)t801;
        unsigned long t803 = __n774;
        void* r804 = memset(cast800, cast802, t803);
      }
  char* t805 = __s773;
  __retval776 = t805;
  char* t806 = __retval776;
  return t806;
}

// function: _ZNSt11char_traitsIcE6assignEPcmc
char* std__char_traits_char___assign(char* v807, unsigned long v808, char v809) {
bb810:
  char* __s811;
  unsigned long __n812;
  char __a813;
  char* __retval814;
  __s811 = v807;
  __n812 = v808;
  __a813 = v809;
    unsigned long t815 = __n812;
    unsigned long c816 = 0;
    _Bool c817 = ((t815 == c816)) ? 1 : 0;
    if (c817) {
      char* t818 = __s811;
      __retval814 = t818;
      char* t819 = __retval814;
      return t819;
    }
    _Bool r820 = std____is_constant_evaluated();
    if (r820) {
      char* t821 = __s811;
      unsigned long t822 = __n812;
      char t823 = __a813;
      char* r824 = __gnu_cxx__char_traits_char___assign(t821, t822, t823);
      __retval814 = r824;
      char* t825 = __retval814;
      return t825;
    }
  char* t826 = __s811;
  void* cast827 = (void*)t826;
  char t828 = __a813;
  int cast829 = (int)t828;
  unsigned long t830 = __n812;
  void* r831 = memset(cast827, cast829, t830);
  char* cast832 = (char*)r831;
  __retval814 = cast832;
  char* t833 = __retval814;
  return t833;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_S_assignEPcmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(char* v834, unsigned long v835, char v836) {
bb837:
  char* __d838;
  unsigned long __n839;
  char __c840;
  __d838 = v834;
  __n839 = v835;
  __c840 = v836;
    unsigned long t841 = __n839;
    unsigned long c842 = 1;
    _Bool c843 = ((t841 == c842)) ? 1 : 0;
    if (c843) {
      char* t844 = __d838;
      std__char_traits_char___assign_2(t844, &__c840);
    } else {
      char* t845 = __d838;
      unsigned long t846 = __n839;
      char t847 = __c840;
      char* r848 = std__char_traits_char___assign(t845, t846, t847);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructEmc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v849, unsigned long v850, char v851) {
bb852:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this853;
  unsigned long __n854;
  char __c855;
  this853 = v849;
  __n854 = v850;
  __c855 = v851;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t856 = this853;
    unsigned long t857 = __n854;
    unsigned long c858 = 15;
    _Bool c859 = ((t857 > c858)) ? 1 : 0;
    if (c859) {
      unsigned long c860 = 0;
      char* r861 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t856, &__n854, c860);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t856, r861);
      unsigned long t862 = __n854;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t856, t862);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t856);
    }
    unsigned long t863 = __n854;
    _Bool cast864 = (_Bool)t863;
    if (cast864) {
      char* r865 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t856);
      unsigned long t866 = __n854;
      char t867 = __c855;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_assign(r865, t866, t867);
    }
  unsigned long t868 = __n854;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t856, t868);
  return;
}

