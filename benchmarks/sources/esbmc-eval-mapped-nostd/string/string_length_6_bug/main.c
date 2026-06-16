extern void abort(void);
// Struct definitions (auto-parsed)
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__less_const_char___ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[6] = "Test ";
char _str_1[7] = "string";
char _str_2[20] = "str3.length() != 11";
char _str_3[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_length_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[25] = "basic_string::_M_replace";
char _str_5[24] = "basic_string::_M_create";
char _str_6[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* p0);
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std__allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* p0, unsigned long p1, char* p2, unsigned long p3, struct std__allocator_char_* p4);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std____is_constant_evaluated();
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v0) {
bb1: ;
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

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v7) {
bb8: ;
  struct std__allocator_char_* __a9;
  unsigned long __retval10;
  __a9 = v7;
  unsigned long c11 = -1;
  unsigned long c12 = 1;
  unsigned long b13 = c11 / c12;
  __retval10 = b13;
  unsigned long t14 = __retval10;
  return t14;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v15) {
bb16: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this17;
  struct std__allocator_char_* __retval18;
  this17 = v15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t19 = this17;
  struct std__allocator_char_* base20 = (struct std__allocator_char_*)((char *)&(t19->_M_dataplus) + 0);
  __retval18 = base20;
  struct std__allocator_char_* t21 = __retval18;
  return t21;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v22, unsigned long* v23) {
bb24: ;
  unsigned long* __a25;
  unsigned long* __b26;
  unsigned long* __retval27;
  __a25 = v22;
  __b26 = v23;
    unsigned long* t28 = __b26;
    unsigned long t29 = *t28;
    unsigned long* t30 = __a25;
    unsigned long t31 = *t30;
    _Bool c32 = ((t29 < t31)) ? 1 : 0;
    if (c32) {
      unsigned long* t33 = __b26;
      __retval27 = t33;
      unsigned long* t34 = __retval27;
      return t34;
    }
  unsigned long* t35 = __a25;
  __retval27 = t35;
  unsigned long* t36 = __retval27;
  return t36;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v37) {
bb38: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this39;
  unsigned long __retval40;
  unsigned long __diffmax41;
  unsigned long __allocmax42;
  this39 = v37;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t43 = this39;
  unsigned long c44 = 9223372036854775807;
  __diffmax41 = c44;
  struct std__allocator_char_* r45 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t43);
  unsigned long r46 = std__allocator_traits_std__allocator_char_____max_size(r45);
  __allocmax42 = r46;
  unsigned long* r47 = unsigned_long_const__std__min_unsigned_long_(&__diffmax41, &__allocmax42);
  unsigned long t48 = *r47;
  unsigned long c49 = 1;
  unsigned long b50 = t48 - c49;
  __retval40 = b50;
  unsigned long t51 = __retval40;
  return t51;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v52, unsigned long v53, unsigned long v54, char* v55) {
bb56: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this57;
  unsigned long __n158;
  unsigned long __n259;
  char* __s60;
  this57 = v52;
  __n158 = v53;
  __n259 = v54;
  __s60 = v55;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t61 = this57;
    unsigned long r62 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t61);
    unsigned long r63 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t61);
    unsigned long t64 = __n158;
    unsigned long b65 = r63 - t64;
    unsigned long b66 = r62 - b65;
    unsigned long t67 = __n259;
    _Bool c68 = ((b66 < t67)) ? 1 : 0;
    if (c68) {
      char* t69 = __s60;
      std____throw_length_error(t69);
    }
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v70) {
bb71: ;
  char* __r72;
  char* __retval73;
  __r72 = v70;
  char* t74 = __r72;
  __retval73 = t74;
  char* t75 = __retval73;
  return t75;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v76) {
bb77: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this78;
  char* __retval79;
  this78 = v76;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t80 = this78;
  char* cast81 = (char*)&(t80->field2._M_local_buf);
  char* r82 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast81);
  __retval79 = r82;
  char* t83 = __retval79;
  return t83;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v84) {
bb85: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this86;
  _Bool __retval87;
  this86 = v84;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t88 = this86;
    char* r89 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t88);
    char* r90 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t88);
    _Bool c91 = ((r89 == r90)) ? 1 : 0;
    if (c91) {
        unsigned long t92 = t88->_M_string_length;
        unsigned long c93 = 15;
        _Bool c94 = ((t92 > c93)) ? 1 : 0;
        if (c94) {
          __builtin_unreachable();
        }
      _Bool c95 = 1;
      __retval87 = c95;
      _Bool t96 = __retval87;
      return t96;
    }
  _Bool c97 = 0;
  __retval87 = c97;
  _Bool t98 = __retval87;
  return t98;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v99) {
bb100: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this101;
  unsigned long __retval102;
  unsigned long __sz103;
  this101 = v99;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t104 = this101;
  _Bool r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t104);
  unsigned long ternary106;
  if (r105) {
    unsigned long c107 = 15;
    ternary106 = (unsigned long)c107;
  } else {
    unsigned long t108 = t104->field2._M_allocated_capacity;
    ternary106 = (unsigned long)t108;
  }
  __sz103 = ternary106;
    unsigned long t109 = __sz103;
    unsigned long c110 = 15;
    _Bool c111 = ((t109 < c110)) ? 1 : 0;
    _Bool ternary112;
    if (c111) {
      _Bool c113 = 1;
      ternary112 = (_Bool)c113;
    } else {
      unsigned long t114 = __sz103;
      unsigned long r115 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t104);
      _Bool c116 = ((t114 > r115)) ? 1 : 0;
      ternary112 = (_Bool)c116;
    }
    if (ternary112) {
      __builtin_unreachable();
    }
  unsigned long t117 = __sz103;
  __retval102 = t117;
  unsigned long t118 = __retval102;
  return t118;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v119) {
bb120: ;
  struct std____new_allocator_char_* this121;
  unsigned long __retval122;
  this121 = v119;
  struct std____new_allocator_char_* t123 = this121;
  unsigned long c124 = 9223372036854775807;
  unsigned long c125 = 1;
  unsigned long b126 = c124 / c125;
  __retval122 = b126;
  unsigned long t127 = __retval122;
  return t127;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v128, unsigned long v129, void* v130) {
bb131: ;
  struct std____new_allocator_char_* this132;
  unsigned long __n133;
  void* unnamed134;
  char* __retval135;
  this132 = v128;
  __n133 = v129;
  unnamed134 = v130;
  struct std____new_allocator_char_* t136 = this132;
    unsigned long t137 = __n133;
    unsigned long r138 = std____new_allocator_char____M_max_size___const(t136);
    _Bool c139 = ((t137 > r138)) ? 1 : 0;
    if (c139) {
        unsigned long t140 = __n133;
        unsigned long c141 = -1;
        unsigned long c142 = 1;
        unsigned long b143 = c141 / c142;
        _Bool c144 = ((t140 > b143)) ? 1 : 0;
        if (c144) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c145 = 1;
    unsigned long c146 = 16;
    _Bool c147 = ((c145 > c146)) ? 1 : 0;
    if (c147) {
      unsigned long __al148;
      unsigned long c149 = 1;
      __al148 = c149;
      unsigned long t150 = __n133;
      unsigned long c151 = 1;
      unsigned long b152 = t150 * c151;
      unsigned long t153 = __al148;
      void* r154 = operator_new_2(b152, t153);
      char* cast155 = (char*)r154;
      __retval135 = cast155;
      char* t156 = __retval135;
      return t156;
    }
  unsigned long t157 = __n133;
  unsigned long c158 = 1;
  unsigned long b159 = t157 * c158;
  void* r160 = operator_new(b159);
  char* cast161 = (char*)r160;
  __retval135 = cast161;
  char* t162 = __retval135;
  return t162;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v163, unsigned long v164) {
bb165: ;
  struct std__allocator_char_* this166;
  unsigned long __n167;
  char* __retval168;
  this166 = v163;
  __n167 = v164;
  struct std__allocator_char_* t169 = this166;
    _Bool r170 = std____is_constant_evaluated();
    if (r170) {
        unsigned long t171 = __n167;
        unsigned long c172 = 1;
        unsigned long ovr173;
        _Bool ovf174 = __builtin_mul_overflow(t171, c172, &ovr173);
        __n167 = ovr173;
        if (ovf174) {
          std____throw_bad_array_new_length();
        }
      unsigned long t175 = __n167;
      void* r176 = operator_new(t175);
      char* cast177 = (char*)r176;
      __retval168 = cast177;
      char* t178 = __retval168;
      return t178;
    }
  struct std____new_allocator_char_* base179 = (struct std____new_allocator_char_*)((char *)t169 + 0);
  unsigned long t180 = __n167;
  void* c181 = ((void*)0);
  char* r182 = std____new_allocator_char___allocate(base179, t180, c181);
  __retval168 = r182;
  char* t183 = __retval168;
  return t183;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v184, unsigned long v185) {
bb186: ;
  struct std__allocator_char_* __a187;
  unsigned long __n188;
  char* __retval189;
  __a187 = v184;
  __n188 = v185;
  struct std__allocator_char_* t190 = __a187;
  unsigned long t191 = __n188;
  char* r192 = std__allocator_char___allocate(t190, t191);
  __retval189 = r192;
  char* t193 = __retval189;
  return t193;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v194, unsigned long v195) {
bb196: ;
  struct std__allocator_char_* __a197;
  unsigned long __n198;
  char* __retval199;
  char* __p200;
  __a197 = v194;
  __n198 = v195;
  struct std__allocator_char_* t201 = __a197;
  unsigned long t202 = __n198;
  char* r203 = std__allocator_traits_std__allocator_char_____allocate(t201, t202);
  __p200 = r203;
  char* t204 = __p200;
  __retval199 = t204;
  char* t205 = __retval199;
  return t205;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v206) {
bb207: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this208;
  struct std__allocator_char_* __retval209;
  this208 = v206;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t210 = this208;
  struct std__allocator_char_* base211 = (struct std__allocator_char_*)((char *)&(t210->_M_dataplus) + 0);
  __retval209 = base211;
  struct std__allocator_char_* t212 = __retval209;
  return t212;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v213, char* v214, unsigned long v215) {
bb216: ;
  char* __s1217;
  char* __s2218;
  unsigned long __n219;
  char* __retval220;
  __s1217 = v213;
  __s2218 = v214;
  __n219 = v215;
    unsigned long t221 = __n219;
    unsigned long c222 = 0;
    _Bool c223 = ((t221 == c222)) ? 1 : 0;
    if (c223) {
      char* t224 = __s1217;
      __retval220 = t224;
      char* t225 = __retval220;
      return t225;
    }
    _Bool r226 = std____is_constant_evaluated();
    if (r226) {
        unsigned long __i227;
        unsigned long c228 = 0;
        __i227 = c228;
        while (1) {
          unsigned long t230 = __i227;
          unsigned long t231 = __n219;
          _Bool c232 = ((t230 < t231)) ? 1 : 0;
          if (!c232) break;
          char* t233 = __s1217;
          unsigned long t234 = __i227;
          char* ptr235 = &(t233)[t234];
          unsigned long t236 = __i227;
          char* t237 = __s2218;
          char* ptr238 = &(t237)[t236];
          char* r239 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr235, ptr238);
        for_step229: ;
          unsigned long t240 = __i227;
          unsigned long u241 = t240 + 1;
          __i227 = u241;
        }
      char* t242 = __s1217;
      __retval220 = t242;
      char* t243 = __retval220;
      return t243;
    }
  char* t244 = __s1217;
  void* cast245 = (void*)t244;
  char* t246 = __s2218;
  void* cast247 = (void*)t246;
  unsigned long t248 = __n219;
  unsigned long c249 = 1;
  unsigned long b250 = t248 * c249;
  void* r251 = memcpy(cast245, cast247, b250);
  char* t252 = __s1217;
  __retval220 = t252;
  char* t253 = __retval220;
  return t253;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v254, char* v255, unsigned long v256) {
bb257: ;
  char* __s1258;
  char* __s2259;
  unsigned long __n260;
  char* __retval261;
  __s1258 = v254;
  __s2259 = v255;
  __n260 = v256;
    unsigned long t262 = __n260;
    unsigned long c263 = 0;
    _Bool c264 = ((t262 == c263)) ? 1 : 0;
    if (c264) {
      char* t265 = __s1258;
      __retval261 = t265;
      char* t266 = __retval261;
      return t266;
    }
    _Bool r267 = std____is_constant_evaluated();
    if (r267) {
      char* t268 = __s1258;
      char* t269 = __s2259;
      unsigned long t270 = __n260;
      char* r271 = __gnu_cxx__char_traits_char___copy(t268, t269, t270);
      __retval261 = r271;
      char* t272 = __retval261;
      return t272;
    }
  char* t273 = __s1258;
  void* cast274 = (void*)t273;
  char* t275 = __s2259;
  void* cast276 = (void*)t275;
  unsigned long t277 = __n260;
  void* r278 = memcpy(cast274, cast276, t277);
  char* cast279 = (char*)r278;
  __retval261 = cast279;
  char* t280 = __retval261;
  return t280;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v281, char* v282, unsigned long v283) {
bb284: ;
  char* __d285;
  char* __s286;
  unsigned long __n287;
  __d285 = v281;
  __s286 = v282;
  __n287 = v283;
    unsigned long t288 = __n287;
    unsigned long c289 = 1;
    _Bool c290 = ((t288 == c289)) ? 1 : 0;
    if (c290) {
      char* t291 = __d285;
      char* t292 = __s286;
      std__char_traits_char___assign(t291, t292);
    } else {
      char* t293 = __d285;
      char* t294 = __s286;
      unsigned long t295 = __n287;
      char* r296 = std__char_traits_char___copy(t293, t294, t295);
    }
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v297, char* v298, unsigned long v299) {
bb300: ;
  struct std____new_allocator_char_* this301;
  char* __p302;
  unsigned long __n303;
  this301 = v297;
  __p302 = v298;
  __n303 = v299;
  struct std____new_allocator_char_* t304 = this301;
    unsigned long c305 = 1;
    unsigned long c306 = 16;
    _Bool c307 = ((c305 > c306)) ? 1 : 0;
    if (c307) {
      char* t308 = __p302;
      void* cast309 = (void*)t308;
      unsigned long t310 = __n303;
      unsigned long c311 = 1;
      unsigned long b312 = t310 * c311;
      unsigned long c313 = 1;
      operator_delete_3(cast309, b312, c313);
      return;
    }
  char* t314 = __p302;
  void* cast315 = (void*)t314;
  unsigned long t316 = __n303;
  unsigned long c317 = 1;
  unsigned long b318 = t316 * c317;
  operator_delete_2(cast315, b318);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v319, char* v320, unsigned long v321) {
bb322: ;
  struct std__allocator_char_* this323;
  char* __p324;
  unsigned long __n325;
  this323 = v319;
  __p324 = v320;
  __n325 = v321;
  struct std__allocator_char_* t326 = this323;
    _Bool r327 = std____is_constant_evaluated();
    if (r327) {
      char* t328 = __p324;
      void* cast329 = (void*)t328;
      operator_delete(cast329);
      return;
    }
  struct std____new_allocator_char_* base330 = (struct std____new_allocator_char_*)((char *)t326 + 0);
  char* t331 = __p324;
  unsigned long t332 = __n325;
  std____new_allocator_char___deallocate(base330, t331, t332);
  return;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v333, char* v334, char* v335) {
bb336: ;
  struct std__less_const_char___* this337;
  char* __x338;
  char* __y339;
  _Bool __retval340;
  this337 = v333;
  __x338 = v334;
  __y339 = v335;
  struct std__less_const_char___* t341 = this337;
    _Bool r342 = std____is_constant_evaluated();
    if (r342) {
      char* t343 = __x338;
      char* t344 = __y339;
      _Bool c345 = ((t343 < t344)) ? 1 : 0;
      __retval340 = c345;
      _Bool t346 = __retval340;
      return t346;
    }
  char* t347 = __x338;
  unsigned long cast348 = (unsigned long)t347;
  char* t349 = __y339;
  unsigned long cast350 = (unsigned long)t349;
  _Bool c351 = ((cast348 < cast350)) ? 1 : 0;
  __retval340 = c351;
  _Bool t352 = __retval340;
  return t352;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v353, char* v354) {
bb355: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this356;
  char* __s357;
  _Bool __retval358;
  struct std__less_const_char___ ref_tmp0359;
  this356 = v353;
  __s357 = v354;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t360 = this356;
  char* t361 = __s357;
  char* r362 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
  _Bool r363 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0359, t361, r362);
  _Bool ternary364;
  if (r363) {
    _Bool c365 = 1;
    ternary364 = (_Bool)c365;
  } else {
    struct std__less_const_char___ ref_tmp1366;
    char* r367 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t360);
    unsigned long r368 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t360);
    char* ptr369 = &(r367)[r368];
    char* t370 = __s357;
    _Bool r371 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1366, ptr369, t370);
    ternary364 = (_Bool)r371;
  }
  __retval358 = ternary364;
  _Bool t372 = __retval358;
  return t372;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v373, char* v374) {
bb375: ;
  char* __c1376;
  char* __c2377;
  __c1376 = v373;
  __c2377 = v374;
    _Bool r378 = std____is_constant_evaluated();
    if (r378) {
      char* t379 = __c1376;
      char* t380 = __c2377;
      char* r381 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t379, t380);
    } else {
      char* t382 = __c2377;
      char t383 = *t382;
      char* t384 = __c1376;
      *t384 = t383;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v385, char* v386, unsigned long v387) {
bb388: ;
  char* __s1389;
  char* __s2390;
  unsigned long __n391;
  char* __retval392;
  __s1389 = v385;
  __s2390 = v386;
  __n391 = v387;
    unsigned long t393 = __n391;
    unsigned long c394 = 0;
    _Bool c395 = ((t393 == c394)) ? 1 : 0;
    if (c395) {
      char* t396 = __s1389;
      __retval392 = t396;
      char* t397 = __retval392;
      return t397;
    }
    _Bool r398 = std____is_constant_evaluated();
    if (r398) {
        char* t399 = __s2390;
        char* t400 = __s1389;
        _Bool c401 = ((t399 < t400)) ? 1 : 0;
        _Bool isconst402 = 0;
        _Bool ternary403;
        if (isconst402) {
          char* t404 = __s1389;
          char* t405 = __s2390;
          _Bool c406 = ((t404 > t405)) ? 1 : 0;
          ternary403 = (_Bool)c406;
        } else {
          _Bool c407 = 0;
          ternary403 = (_Bool)c407;
        }
        _Bool ternary408;
        if (ternary403) {
          char* t409 = __s1389;
          char* t410 = __s2390;
          unsigned long t411 = __n391;
          char* ptr412 = &(t410)[t411];
          _Bool c413 = ((t409 < ptr412)) ? 1 : 0;
          ternary408 = (_Bool)c413;
        } else {
          _Bool c414 = 0;
          ternary408 = (_Bool)c414;
        }
        if (ternary408) {
            do {
                unsigned long t415 = __n391;
                unsigned long u416 = t415 - 1;
                __n391 = u416;
                unsigned long t417 = __n391;
                char* t418 = __s1389;
                char* ptr419 = &(t418)[t417];
                unsigned long t420 = __n391;
                char* t421 = __s2390;
                char* ptr422 = &(t421)[t420];
                __gnu_cxx__char_traits_char___assign(ptr419, ptr422);
              unsigned long t423 = __n391;
              unsigned long c424 = 0;
              _Bool c425 = ((t423 > c424)) ? 1 : 0;
              if (!c425) break;
            } while (1);
        } else {
          char* t426 = __s1389;
          char* t427 = __s2390;
          unsigned long t428 = __n391;
          char* r429 = __gnu_cxx__char_traits_char___copy(t426, t427, t428);
        }
      char* t430 = __s1389;
      __retval392 = t430;
      char* t431 = __retval392;
      return t431;
    }
  char* t432 = __s1389;
  void* cast433 = (void*)t432;
  char* t434 = __s2390;
  void* cast435 = (void*)t434;
  unsigned long t436 = __n391;
  unsigned long c437 = 1;
  unsigned long b438 = t436 * c437;
  void* r439 = memmove(cast433, cast435, b438);
  char* t440 = __s1389;
  __retval392 = t440;
  char* t441 = __retval392;
  return t441;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v442, char* v443, unsigned long v444) {
bb445: ;
  char* __s1446;
  char* __s2447;
  unsigned long __n448;
  char* __retval449;
  __s1446 = v442;
  __s2447 = v443;
  __n448 = v444;
    unsigned long t450 = __n448;
    unsigned long c451 = 0;
    _Bool c452 = ((t450 == c451)) ? 1 : 0;
    if (c452) {
      char* t453 = __s1446;
      __retval449 = t453;
      char* t454 = __retval449;
      return t454;
    }
    _Bool r455 = std____is_constant_evaluated();
    if (r455) {
      char* t456 = __s1446;
      char* t457 = __s2447;
      unsigned long t458 = __n448;
      char* r459 = __gnu_cxx__char_traits_char___move(t456, t457, t458);
      __retval449 = r459;
      char* t460 = __retval449;
      return t460;
    }
  char* t461 = __s1446;
  void* cast462 = (void*)t461;
  char* t463 = __s2447;
  void* cast464 = (void*)t463;
  unsigned long t465 = __n448;
  void* r466 = memmove(cast462, cast464, t465);
  char* cast467 = (char*)r466;
  __retval449 = cast467;
  char* t468 = __retval449;
  return t468;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v469, char* v470, unsigned long v471) {
bb472: ;
  char* __d473;
  char* __s474;
  unsigned long __n475;
  __d473 = v469;
  __s474 = v470;
  __n475 = v471;
    unsigned long t476 = __n475;
    unsigned long c477 = 1;
    _Bool c478 = ((t476 == c477)) ? 1 : 0;
    if (c478) {
      char* t479 = __d473;
      char* t480 = __s474;
      std__char_traits_char___assign(t479, t480);
    } else {
      char* t481 = __d473;
      char* t482 = __s474;
      unsigned long t483 = __n475;
      char* r484 = std__char_traits_char___move(t481, t482, t483);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v485, char* v486, unsigned long v487, char* v488, unsigned long v489, unsigned long v490) {
bb491: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this492;
  char* __p493;
  unsigned long __len1494;
  char* __s495;
  unsigned long __len2496;
  unsigned long __how_much497;
  this492 = v485;
  __p493 = v486;
  __len1494 = v487;
  __s495 = v488;
  __len2496 = v489;
  __how_much497 = v490;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = this492;
    unsigned long t499 = __len2496;
    _Bool cast500 = (_Bool)t499;
    _Bool ternary501;
    if (cast500) {
      unsigned long t502 = __len2496;
      unsigned long t503 = __len1494;
      _Bool c504 = ((t502 <= t503)) ? 1 : 0;
      ternary501 = (_Bool)c504;
    } else {
      _Bool c505 = 0;
      ternary501 = (_Bool)c505;
    }
    if (ternary501) {
      char* t506 = __p493;
      char* t507 = __s495;
      unsigned long t508 = __len2496;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t506, t507, t508);
    }
    unsigned long t509 = __how_much497;
    _Bool cast510 = (_Bool)t509;
    _Bool ternary511;
    if (cast510) {
      unsigned long t512 = __len1494;
      unsigned long t513 = __len2496;
      _Bool c514 = ((t512 != t513)) ? 1 : 0;
      ternary511 = (_Bool)c514;
    } else {
      _Bool c515 = 0;
      ternary511 = (_Bool)c515;
    }
    if (ternary511) {
      char* t516 = __p493;
      unsigned long t517 = __len2496;
      char* ptr518 = &(t516)[t517];
      char* t519 = __p493;
      unsigned long t520 = __len1494;
      char* ptr521 = &(t519)[t520];
      unsigned long t522 = __how_much497;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr518, ptr521, t522);
    }
    unsigned long t523 = __len2496;
    unsigned long t524 = __len1494;
    _Bool c525 = ((t523 > t524)) ? 1 : 0;
    if (c525) {
        char* t526 = __s495;
        unsigned long t527 = __len2496;
        char* ptr528 = &(t526)[t527];
        char* t529 = __p493;
        unsigned long t530 = __len1494;
        char* ptr531 = &(t529)[t530];
        _Bool c532 = ((ptr528 <= ptr531)) ? 1 : 0;
        if (c532) {
          char* t533 = __p493;
          char* t534 = __s495;
          unsigned long t535 = __len2496;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t533, t534, t535);
        } else {
            char* t536 = __s495;
            char* t537 = __p493;
            unsigned long t538 = __len1494;
            char* ptr539 = &(t537)[t538];
            _Bool c540 = ((t536 >= ptr539)) ? 1 : 0;
            if (c540) {
              unsigned long __poff541;
              char* t542 = __s495;
              char* t543 = __p493;
              long diff544 = t542 - t543;
              unsigned long cast545 = (unsigned long)diff544;
              unsigned long t546 = __len2496;
              unsigned long t547 = __len1494;
              unsigned long b548 = t546 - t547;
              unsigned long b549 = cast545 + b548;
              __poff541 = b549;
              char* t550 = __p493;
              char* t551 = __p493;
              unsigned long t552 = __poff541;
              char* ptr553 = &(t551)[t552];
              unsigned long t554 = __len2496;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t550, ptr553, t554);
            } else {
              unsigned long __nleft555;
              char* t556 = __p493;
              unsigned long t557 = __len1494;
              char* ptr558 = &(t556)[t557];
              char* t559 = __s495;
              long diff560 = ptr558 - t559;
              unsigned long cast561 = (unsigned long)diff560;
              __nleft555 = cast561;
              char* t562 = __p493;
              char* t563 = __s495;
              unsigned long t564 = __nleft555;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t562, t563, t564);
              char* t565 = __p493;
              unsigned long t566 = __nleft555;
              char* ptr567 = &(t565)[t566];
              char* t568 = __p493;
              unsigned long t569 = __len2496;
              char* ptr570 = &(t568)[t569];
              unsigned long t571 = __len2496;
              unsigned long t572 = __nleft555;
              unsigned long b573 = t571 - t572;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr567, ptr570, b573);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v574, unsigned long* v575, unsigned long v576) {
bb577: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this578;
  unsigned long* __capacity579;
  unsigned long __old_capacity580;
  char* __retval581;
  this578 = v574;
  __capacity579 = v575;
  __old_capacity580 = v576;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t582 = this578;
    unsigned long* t583 = __capacity579;
    unsigned long t584 = *t583;
    unsigned long r585 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t582);
    _Bool c586 = ((t584 > r585)) ? 1 : 0;
    if (c586) {
      char* cast587 = (char*)&(_str_5);
      std____throw_length_error(cast587);
    }
    unsigned long* t588 = __capacity579;
    unsigned long t589 = *t588;
    unsigned long t590 = __old_capacity580;
    _Bool c591 = ((t589 > t590)) ? 1 : 0;
    _Bool ternary592;
    if (c591) {
      unsigned long* t593 = __capacity579;
      unsigned long t594 = *t593;
      unsigned long c595 = 2;
      unsigned long t596 = __old_capacity580;
      unsigned long b597 = c595 * t596;
      _Bool c598 = ((t594 < b597)) ? 1 : 0;
      ternary592 = (_Bool)c598;
    } else {
      _Bool c599 = 0;
      ternary592 = (_Bool)c599;
    }
    if (ternary592) {
      unsigned long c600 = 2;
      unsigned long t601 = __old_capacity580;
      unsigned long b602 = c600 * t601;
      unsigned long* t603 = __capacity579;
      *t603 = b602;
        unsigned long* t604 = __capacity579;
        unsigned long t605 = *t604;
        unsigned long r606 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t582);
        _Bool c607 = ((t605 > r606)) ? 1 : 0;
        if (c607) {
          unsigned long r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t582);
          unsigned long* t609 = __capacity579;
          *t609 = r608;
        }
    }
  struct std__allocator_char_* r610 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t582);
  unsigned long* t611 = __capacity579;
  unsigned long t612 = *t611;
  unsigned long c613 = 1;
  unsigned long b614 = t612 + c613;
  char* r615 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r610, b614);
  __retval581 = r615;
  char* t616 = __retval581;
  return t616;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v617, char* v618, unsigned long v619) {
bb620: ;
  struct std__allocator_char_* __a621;
  char* __p622;
  unsigned long __n623;
  __a621 = v617;
  __p622 = v618;
  __n623 = v619;
  struct std__allocator_char_* t624 = __a621;
  char* t625 = __p622;
  unsigned long t626 = __n623;
  std__allocator_char___deallocate(t624, t625, t626);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v627, unsigned long v628) {
bb629: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this630;
  unsigned long __size631;
  this630 = v627;
  __size631 = v628;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t632 = this630;
  struct std__allocator_char_* r633 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t632);
  char* r634 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t632);
  unsigned long t635 = __size631;
  unsigned long c636 = 1;
  unsigned long b637 = t635 + c636;
  std__allocator_traits_std__allocator_char_____deallocate(r633, r634, b637);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v638) {
bb639: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this640;
  this640 = v638;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t641 = this640;
    _Bool r642 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t641);
    _Bool u643 = !r642;
    if (u643) {
      unsigned long t644 = t641->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t641, t644);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v645, char* v646) {
bb647: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this648;
  char* __p649;
  this648 = v645;
  __p649 = v646;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t650 = this648;
  char* t651 = __p649;
  t650->_M_dataplus._M_p = t651;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v652, unsigned long v653) {
bb654: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this655;
  unsigned long __capacity656;
  this655 = v652;
  __capacity656 = v653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t657 = this655;
  unsigned long t658 = __capacity656;
  t657->field2._M_allocated_capacity = t658;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v659, unsigned long v660, unsigned long v661, char* v662, unsigned long v663) {
bb664: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this665;
  unsigned long __pos666;
  unsigned long __len1667;
  char* __s668;
  unsigned long __len2669;
  unsigned long __how_much670;
  unsigned long __new_capacity671;
  char* __r672;
  this665 = v659;
  __pos666 = v660;
  __len1667 = v661;
  __s668 = v662;
  __len2669 = v663;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t673 = this665;
  unsigned long r674 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t673);
  unsigned long t675 = __pos666;
  unsigned long b676 = r674 - t675;
  unsigned long t677 = __len1667;
  unsigned long b678 = b676 - t677;
  __how_much670 = b678;
  unsigned long r679 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t673);
  unsigned long t680 = __len2669;
  unsigned long b681 = r679 + t680;
  unsigned long t682 = __len1667;
  unsigned long b683 = b681 - t682;
  __new_capacity671 = b683;
  unsigned long r684 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t673);
  char* r685 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t673, &__new_capacity671, r684);
  __r672 = r685;
    unsigned long t686 = __pos666;
    _Bool cast687 = (_Bool)t686;
    if (cast687) {
      char* t688 = __r672;
      char* r689 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t673);
      unsigned long t690 = __pos666;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t688, r689, t690);
    }
    char* t691 = __s668;
    _Bool cast692 = (_Bool)t691;
    _Bool ternary693;
    if (cast692) {
      unsigned long t694 = __len2669;
      _Bool cast695 = (_Bool)t694;
      ternary693 = (_Bool)cast695;
    } else {
      _Bool c696 = 0;
      ternary693 = (_Bool)c696;
    }
    if (ternary693) {
      char* t697 = __r672;
      unsigned long t698 = __pos666;
      char* ptr699 = &(t697)[t698];
      char* t700 = __s668;
      unsigned long t701 = __len2669;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr699, t700, t701);
    }
    unsigned long t702 = __how_much670;
    _Bool cast703 = (_Bool)t702;
    if (cast703) {
      char* t704 = __r672;
      unsigned long t705 = __pos666;
      char* ptr706 = &(t704)[t705];
      unsigned long t707 = __len2669;
      char* ptr708 = &(ptr706)[t707];
      char* r709 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t673);
      unsigned long t710 = __pos666;
      char* ptr711 = &(r709)[t710];
      unsigned long t712 = __len1667;
      char* ptr713 = &(ptr711)[t712];
      unsigned long t714 = __how_much670;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr708, ptr713, t714);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t673);
  char* t715 = __r672;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t673, t715);
  unsigned long t716 = __new_capacity671;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t673, t716);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v717, unsigned long v718, unsigned long v719, char* v720, unsigned long v721) {
bb722: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this723;
  unsigned long __pos724;
  unsigned long __len1725;
  char* __s726;
  unsigned long __len2727;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval728;
  unsigned long __old_size729;
  unsigned long __new_size730;
  this723 = v717;
  __pos724 = v718;
  __len1725 = v719;
  __s726 = v720;
  __len2727 = v721;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t731 = this723;
  unsigned long t732 = __len1725;
  unsigned long t733 = __len2727;
  char* cast734 = (char*)&(_str_4);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t731, t732, t733, cast734);
  unsigned long r735 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t731);
  __old_size729 = r735;
  unsigned long t736 = __old_size729;
  unsigned long t737 = __len2727;
  unsigned long b738 = t736 + t737;
  unsigned long t739 = __len1725;
  unsigned long b740 = b738 - t739;
  __new_size730 = b740;
    unsigned long t741 = __new_size730;
    unsigned long r742 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t731);
    _Bool c743 = ((t741 <= r742)) ? 1 : 0;
    if (c743) {
      char* __p744;
      unsigned long __how_much745;
      char* r746 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t731);
      unsigned long t747 = __pos724;
      char* ptr748 = &(r746)[t747];
      __p744 = ptr748;
      unsigned long t749 = __old_size729;
      unsigned long t750 = __pos724;
      unsigned long b751 = t749 - t750;
      unsigned long t752 = __len1725;
      unsigned long b753 = b751 - t752;
      __how_much745 = b753;
        _Bool r754 = std__is_constant_evaluated();
        if (r754) {
          char* __newp755;
          struct std__allocator_char_* r756 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t731);
          unsigned long t757 = __new_size730;
          char* r758 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r756, t757);
          __newp755 = r758;
          char* t759 = __newp755;
          char* r760 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t731);
          unsigned long t761 = __pos724;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t759, r760, t761);
          char* t762 = __newp755;
          unsigned long t763 = __pos724;
          char* ptr764 = &(t762)[t763];
          char* t765 = __s726;
          unsigned long t766 = __len2727;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr764, t765, t766);
          char* t767 = __newp755;
          unsigned long t768 = __pos724;
          char* ptr769 = &(t767)[t768];
          unsigned long t770 = __len2727;
          char* ptr771 = &(ptr769)[t770];
          char* t772 = __p744;
          unsigned long t773 = __len1725;
          char* ptr774 = &(t772)[t773];
          unsigned long t775 = __how_much745;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr771, ptr774, t775);
          char* r776 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t731);
          char* t777 = __newp755;
          unsigned long t778 = __new_size730;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r776, t777, t778);
          struct std__allocator_char_* r779 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t731);
          char* t780 = __newp755;
          unsigned long t781 = __new_size730;
          std__allocator_char___deallocate(r779, t780, t781);
        } else {
            char* t782 = __s726;
            _Bool r783 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t731, t782);
            if (r783) {
                unsigned long t784 = __how_much745;
                _Bool cast785 = (_Bool)t784;
                _Bool ternary786;
                if (cast785) {
                  unsigned long t787 = __len1725;
                  unsigned long t788 = __len2727;
                  _Bool c789 = ((t787 != t788)) ? 1 : 0;
                  ternary786 = (_Bool)c789;
                } else {
                  _Bool c790 = 0;
                  ternary786 = (_Bool)c790;
                }
                if (ternary786) {
                  char* t791 = __p744;
                  unsigned long t792 = __len2727;
                  char* ptr793 = &(t791)[t792];
                  char* t794 = __p744;
                  unsigned long t795 = __len1725;
                  char* ptr796 = &(t794)[t795];
                  unsigned long t797 = __how_much745;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr793, ptr796, t797);
                }
                unsigned long t798 = __len2727;
                _Bool cast799 = (_Bool)t798;
                if (cast799) {
                  char* t800 = __p744;
                  char* t801 = __s726;
                  unsigned long t802 = __len2727;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t800, t801, t802);
                }
            } else {
              char* t803 = __p744;
              unsigned long t804 = __len1725;
              char* t805 = __s726;
              unsigned long t806 = __len2727;
              unsigned long t807 = __how_much745;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t731, t803, t804, t805, t806, t807);
            }
        }
    } else {
      unsigned long t808 = __pos724;
      unsigned long t809 = __len1725;
      char* t810 = __s726;
      unsigned long t811 = __len2727;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t731, t808, t809, t810, t811);
    }
  unsigned long t812 = __new_size730;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t731, t812);
  __retval728 = t731;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t813 = __retval728;
  return t813;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v814) {
bb815: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this816;
  unsigned long __retval817;
  unsigned long __sz818;
  this816 = v814;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t819 = this816;
  unsigned long t820 = t819->_M_string_length;
  __sz818 = t820;
    unsigned long t821 = __sz818;
    unsigned long r822 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t819);
    _Bool c823 = ((t821 > r822)) ? 1 : 0;
    if (c823) {
      __builtin_unreachable();
    }
  unsigned long t824 = __sz818;
  __retval817 = t824;
  unsigned long t825 = __retval817;
  return t825;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v826, char* v827) {
bb828: ;
  char* __c1829;
  char* __c2830;
  _Bool __retval831;
  __c1829 = v826;
  __c2830 = v827;
  char* t832 = __c1829;
  char t833 = *t832;
  int cast834 = (int)t833;
  char* t835 = __c2830;
  char t836 = *t835;
  int cast837 = (int)t836;
  _Bool c838 = ((cast834 == cast837)) ? 1 : 0;
  __retval831 = c838;
  _Bool t839 = __retval831;
  return t839;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v840) {
bb841: ;
  char* __p842;
  unsigned long __retval843;
  unsigned long __i844;
  __p842 = v840;
  unsigned long c845 = 0;
  __i844 = c845;
    char ref_tmp0846;
    while (1) {
      unsigned long t847 = __i844;
      char* t848 = __p842;
      char* ptr849 = &(t848)[t847];
      char c850 = 0;
      ref_tmp0846 = c850;
      _Bool r851 = __gnu_cxx__char_traits_char___eq(ptr849, &ref_tmp0846);
      _Bool u852 = !r851;
      if (!u852) break;
      unsigned long t853 = __i844;
      unsigned long u854 = t853 + 1;
      __i844 = u854;
    }
  unsigned long t855 = __i844;
  __retval843 = t855;
  unsigned long t856 = __retval843;
  return t856;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v857) {
bb858: ;
  char* __s859;
  unsigned long __retval860;
  __s859 = v857;
    _Bool r861 = std____is_constant_evaluated();
    if (r861) {
      char* t862 = __s859;
      unsigned long r863 = __gnu_cxx__char_traits_char___length(t862);
      __retval860 = r863;
      unsigned long t864 = __retval860;
      return t864;
    }
  char* t865 = __s859;
  unsigned long r866 = strlen(t865);
  __retval860 = r866;
  unsigned long t867 = __retval860;
  return t867;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6assignEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v868, char* v869) {
bb870: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this871;
  char* __s872;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval873;
  this871 = v868;
  __s872 = v869;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t874 = this871;
  unsigned long c875 = 0;
  unsigned long r876 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t874);
  char* t877 = __s872;
  char* t878 = __s872;
  unsigned long r879 = std__char_traits_char___length(t878);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r880 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t874, c875, r876, t877, r879);
  __retval873 = r880;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t881 = __retval873;
  return t881;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v882, char* v883) {
bb884: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this885;
  char* __s886;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval887;
  this885 = v882;
  __s886 = v883;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t888 = this885;
  char* t889 = __s886;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r890 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____assign(t888, t889);
  __retval887 = r890;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t891 = __retval887;
  return t891;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v892, struct std__allocator_char_* v893) {
bb894: ;
  struct std__allocator_char_* this895;
  struct std__allocator_char_* __a896;
  this895 = v892;
  __a896 = v893;
  struct std__allocator_char_* t897 = this895;
  struct std____new_allocator_char_* base898 = (struct std____new_allocator_char_*)((char *)t897 + 0);
  struct std__allocator_char_* t899 = __a896;
  struct std____new_allocator_char_* base900 = (struct std____new_allocator_char_*)((char *)t899 + 0);
  std____new_allocator_char_____new_allocator(base898, base900);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE37select_on_container_copy_constructionERKS0_
struct std__allocator_char_ std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(struct std__allocator_char_* v901) {
bb902: ;
  struct std__allocator_char_* __rhs903;
  struct std__allocator_char_ __retval904;
  __rhs903 = v901;
  struct std__allocator_char_* t905 = __rhs903;
  std__allocator_char___allocator(&__retval904, t905);
  struct std__allocator_char_ t906 = __retval904;
  return t906;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE17_S_select_on_copyERKS1_
struct std__allocator_char_ __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(struct std__allocator_char_* v907) {
bb908: ;
  struct std__allocator_char_* __a909;
  struct std__allocator_char_ __retval910;
  __a909 = v907;
  struct std__allocator_char_* t911 = __a909;
  struct std__allocator_char_ r912 = std__allocator_traits_std__allocator_char_____select_on_container_copy_construction(t911);
  __retval910 = r912;
  struct std__allocator_char_ t913 = __retval910;
  return t913;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v914, struct std__allocator_char_* v915) {
bb916: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this917;
  struct std__allocator_char_* __a918;
  this917 = v914;
  __a918 = v915;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t919 = this917;
  char* r920 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t919);
  struct std__allocator_char_* t921 = __a918;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t919->_M_dataplus, r920, t921);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t919);
    unsigned long c922 = 0;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t919, c922);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v923, unsigned long v924) {
bb925: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this926;
  unsigned long __res927;
  unsigned long __capacity928;
  char* __tmp929;
  this926 = v923;
  __res927 = v924;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t930 = this926;
  unsigned long r931 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t930);
  __capacity928 = r931;
    unsigned long t932 = __res927;
    unsigned long t933 = __capacity928;
    _Bool c934 = ((t932 <= t933)) ? 1 : 0;
    if (c934) {
      return;
    }
  unsigned long t935 = __capacity928;
  char* r936 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t930, &__res927, t935);
  __tmp929 = r936;
  char* t937 = __tmp929;
  char* r938 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t930);
  unsigned long r939 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t930);
  unsigned long c940 = 1;
  unsigned long b941 = r939 + c940;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t937, r938, b941);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t930);
  char* t942 = __tmp929;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t930, t942);
  unsigned long t943 = __res927;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t930, t943);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v944, char* v945, unsigned long v946) {
bb947: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this948;
  char* __s949;
  unsigned long __n950;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval951;
  unsigned long __len952;
  this948 = v944;
  __s949 = v945;
  __n950 = v946;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t953 = this948;
  unsigned long t954 = __n950;
  unsigned long r955 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t953);
  unsigned long b956 = t954 + r955;
  __len952 = b956;
    unsigned long t957 = __len952;
    unsigned long r958 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t953);
    _Bool c959 = ((t957 <= r958)) ? 1 : 0;
    if (c959) {
        unsigned long t960 = __n950;
        _Bool cast961 = (_Bool)t960;
        if (cast961) {
          char* r962 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t953);
          unsigned long r963 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t953);
          char* ptr964 = &(r962)[r963];
          char* t965 = __s949;
          unsigned long t966 = __n950;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr964, t965, t966);
        }
    } else {
      unsigned long r967 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t953);
      unsigned long c968 = 0;
      char* t969 = __s949;
      unsigned long t970 = __n950;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t953, r967, c968, t969, t970);
    }
  unsigned long t971 = __len952;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t953, t971);
  __retval951 = t953;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t972 = __retval951;
  return t972;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v973, char* v974, unsigned long v975) {
bb976: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this977;
  char* __s978;
  unsigned long __n979;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval980;
  this977 = v973;
  __s978 = v974;
  __n979 = v975;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t981 = this977;
  unsigned long c982 = 0;
  unsigned long t983 = __n979;
  char* cast984 = (char*)&(_str_6);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t981, c982, t983, cast984);
  char* t985 = __s978;
  unsigned long t986 = __n979;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r987 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_append(t981, t985, t986);
  __retval980 = r987;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t988 = __retval980;
  return t988;
}

// function: _ZSt12__str_concatINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEET_PKNS6_10value_typeENS6_9size_typeES9_SA_RKNS6_14allocator_typeE
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(char* v989, unsigned long v990, char* v991, unsigned long v992, struct std__allocator_char_* v993) {
bb994: ;
  char* __lhs995;
  unsigned long __lhs_len996;
  char* __rhs997;
  unsigned long __rhs_len998;
  struct std__allocator_char_* __a999;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1000;
  _Bool nrvo1001;
  struct std__allocator_char_ ref_tmp01002;
  __lhs995 = v989;
  __lhs_len996 = v990;
  __rhs997 = v991;
  __rhs_len998 = v992;
  __a999 = v993;
  _Bool c1003 = 0;
  nrvo1001 = c1003;
  struct std__allocator_char_* t1004 = __a999;
  struct std__allocator_char_ r1005 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_select_on_copy(t1004);
  ref_tmp01002 = r1005;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval1000, &ref_tmp01002);
  {
    std__allocator_char____allocator(&ref_tmp01002);
  }
    unsigned long t1006 = __lhs_len996;
    unsigned long t1007 = __rhs_len998;
    unsigned long b1008 = t1006 + t1007;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____reserve(&__retval1000, b1008);
    char* t1009 = __lhs995;
    unsigned long t1010 = __lhs_len996;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1011 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval1000, t1009, t1010);
    char* t1012 = __rhs997;
    unsigned long t1013 = __rhs_len998;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1014 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____append(&__retval1000, t1012, t1013);
    _Bool c1015 = 1;
    nrvo1001 = c1015;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1016 = __retval1000;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ret_val1017 = t1016;
    {
      _Bool t1018 = nrvo1001;
      _Bool u1019 = !t1018;
      if (u1019) {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&__retval1000);
      }
    }
    return ret_val1017;
  abort();
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1020) {
bb1021: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1022;
  char* __retval1023;
  this1022 = v1020;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1024 = this1022;
  char* r1025 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1024);
  __retval1023 = r1025;
  char* t1026 = __retval1023;
  return t1026;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13get_allocatorEv
struct std__allocator_char_ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1027) {
bb1028: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1029;
  struct std__allocator_char_ __retval1030;
  this1029 = v1027;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1031 = this1029;
  struct std__allocator_char_* r1032 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1031);
  std__allocator_char___allocator(&__retval1030, r1032);
  struct std__allocator_char_ t1033 = __retval1030;
  return t1033;
}

// function: _ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1034, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1035) {
bb1036: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs1037;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __rhs1038;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval1039;
  struct std__allocator_char_ ref_tmp01040;
  __lhs1037 = v1034;
  __rhs1038 = v1035;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1041 = __lhs1037;
  char* r1042 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1041);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1043 = __lhs1037;
  unsigned long r1044 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1043);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1045 = __rhs1038;
  char* r1046 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____c_str___const(t1045);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1047 = __rhs1038;
  unsigned long r1048 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1047);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1049 = __lhs1037;
  struct std__allocator_char_ r1050 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____get_allocator___const(t1049);
  ref_tmp01040 = r1050;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1051 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____str_concat_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____(r1042, r1044, r1046, r1048, &ref_tmp01040);
    __retval1039 = r1051;
  {
    std__allocator_char____allocator(&ref_tmp01040);
  }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t1052 = __retval1039;
  return t1052;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb1053: ;
  _Bool __retval1054;
  _Bool t1055 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval1054 = t1055;
  _Bool t1056 = __retval1054;
  return t1056;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v1057, struct std____new_allocator_char_* v1058) {
bb1059: ;
  struct std____new_allocator_char_* this1060;
  struct std____new_allocator_char_* unnamed1061;
  struct std____new_allocator_char_* __retval1062;
  this1060 = v1057;
  unnamed1061 = v1058;
  struct std____new_allocator_char_* t1063 = this1060;
  __retval1062 = t1063;
  struct std____new_allocator_char_* t1064 = __retval1062;
  return t1064;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v1065, struct std__allocator_char_* v1066) {
bb1067: ;
  struct std__allocator_char_* this1068;
  struct std__allocator_char_* unnamed1069;
  struct std__allocator_char_* __retval1070;
  this1068 = v1065;
  unnamed1069 = v1066;
  struct std__allocator_char_* t1071 = this1068;
  struct std____new_allocator_char_* base1072 = (struct std____new_allocator_char_*)((char *)t1071 + 0);
  struct std__allocator_char_* t1073 = unnamed1069;
  struct std____new_allocator_char_* base1074 = (struct std____new_allocator_char_*)((char *)t1073 + 0);
  struct std____new_allocator_char_* r1075 = std____new_allocator_char___operator_(base1072, base1074);
  __retval1070 = t1071;
  struct std__allocator_char_* t1076 = __retval1070;
  return t1076;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v1077, struct std__allocator_char_* v1078) {
bb1079: ;
  struct std__allocator_char_* __one1080;
  struct std__allocator_char_* __two1081;
  __one1080 = v1077;
  __two1081 = v1078;
    struct std__allocator_char_* t1082 = __two1081;
    struct std__allocator_char_* t1083 = __one1080;
    struct std__allocator_char_* r1084 = std__allocator_char___operator_(t1083, t1082);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1085) {
bb1086: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1087;
  char* __retval1088;
  this1087 = v1085;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1089 = this1087;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1089);
  char* r1090 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1089);
  __retval1088 = r1090;
  char* t1091 = __retval1088;
  return t1091;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1092, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1093) {
bb1094: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1095;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1096;
  this1095 = v1092;
  __str1096 = v1093;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1097 = this1095;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1098 = __str1096;
    _Bool c1099 = ((t1097 != t1098)) ? 1 : 0;
    if (c1099) {
      unsigned long __rsize1100;
      unsigned long __capacity1101;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1102 = __str1096;
      unsigned long r1103 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1102);
      __rsize1100 = r1103;
      unsigned long r1104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t1097);
      __capacity1101 = r1104;
        unsigned long t1105 = __rsize1100;
        unsigned long t1106 = __capacity1101;
        _Bool c1107 = ((t1105 > t1106)) ? 1 : 0;
        if (c1107) {
          unsigned long __new_capacity1108;
          char* __tmp1109;
          unsigned long t1110 = __rsize1100;
          __new_capacity1108 = t1110;
          unsigned long t1111 = __capacity1101;
          char* r1112 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1097, &__new_capacity1108, t1111);
          __tmp1109 = r1112;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1097);
          char* t1113 = __tmp1109;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1097, t1113);
          unsigned long t1114 = __new_capacity1108;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1097, t1114);
        }
        unsigned long t1115 = __rsize1100;
        _Bool cast1116 = (_Bool)t1115;
        if (cast1116) {
          char* r1117 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1097);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1118 = __str1096;
          char* r1119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1118);
          unsigned long t1120 = __rsize1100;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1117, r1119, t1120);
        }
      unsigned long t1121 = __rsize1100;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1097, t1121);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1122) {
bb1123: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1124;
  this1124 = v1122;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1125 = this1124;
  unsigned long c1126 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1125, c1126);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1127, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1128) {
bb1129: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1130;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1131;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1132;
  _Bool __equal_allocs1133;
  this1130 = v1127;
  __str1131 = v1128;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1134 = this1130;
  _Bool c1135 = 1;
  __equal_allocs1133 = c1135;
    _Bool r1136 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1134);
    _Bool u1137 = !r1136;
    _Bool ternary1138;
    if (u1137) {
      _Bool r1139 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary1138 = (_Bool)r1139;
    } else {
      _Bool c1140 = 0;
      ternary1138 = (_Bool)c1140;
    }
    _Bool ternary1141;
    if (ternary1138) {
      _Bool t1142 = __equal_allocs1133;
      _Bool u1143 = !t1142;
      ternary1141 = (_Bool)u1143;
    } else {
      _Bool c1144 = 0;
      ternary1141 = (_Bool)c1144;
    }
    if (ternary1141) {
      unsigned long t1145 = t1134->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1134, t1145);
      char* r1146 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t1134);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1134, r1146);
      unsigned long c1147 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1134, c1147);
    }
  struct std__allocator_char_* r1148 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1134);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1149 = __str1131;
  struct std__allocator_char_* r1150 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1149);
  void_std____alloc_on_move_std__allocator_char___(r1148, r1150);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1151 = __str1131;
    _Bool r1152 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1151);
    if (r1152) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1153 = __str1131;
        _Bool c1154 = ((t1153 != t1134)) ? 1 : 0;
        if (c1154) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1155 = __str1131;
            unsigned long r1156 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1155);
            _Bool cast1157 = (_Bool)r1156;
            if (cast1157) {
              char* r1158 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1134);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1159 = __str1131;
              char* r1160 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1159);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1161 = __str1131;
              unsigned long r1162 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1161);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r1158, r1160, r1162);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1163 = __str1131;
          unsigned long r1164 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1163);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1134, r1164);
        }
    } else {
        _Bool r1165 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary1166;
        if (r1165) {
          _Bool c1167 = 1;
          ternary1166 = (_Bool)c1167;
        } else {
          _Bool t1168 = __equal_allocs1133;
          ternary1166 = (_Bool)t1168;
        }
        if (ternary1166) {
          char* __data1169;
          unsigned long __capacity1170;
          char* c1171 = ((void*)0);
          __data1169 = c1171;
            _Bool r1172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1134);
            _Bool u1173 = !r1172;
            if (u1173) {
                _Bool t1174 = __equal_allocs1133;
                if (t1174) {
                  char* r1175 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1134);
                  __data1169 = r1175;
                  unsigned long t1176 = t1134->field2._M_allocated_capacity;
                  __capacity1170 = t1176;
                } else {
                  unsigned long t1177 = t1134->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1134, t1177);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1178 = __str1131;
          char* r1179 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1178);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1134, r1179);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1180 = __str1131;
          unsigned long r1181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t1180);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1134, r1181);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1182 = __str1131;
          unsigned long t1183 = t1182->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1134, t1183);
            char* t1184 = __data1169;
            _Bool cast1185 = (_Bool)t1184;
            if (cast1185) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1186 = __str1131;
              char* t1187 = __data1169;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1186, t1187);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1188 = __str1131;
              unsigned long t1189 = __capacity1170;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1188, t1189);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1190 = __str1131;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1191 = __str1131;
              char* r1192 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t1191);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1190, r1192);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1193 = __str1131;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t1134, t1193);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1194 = __str1131;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t1194);
  __retval1132 = t1134;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1195 = __retval1132;
  return t1195;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1196) {
bb1197: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1198;
  this1198 = v1196;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1199 = this1198;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1199);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1199->_M_dataplus);
  }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1200) {
bb1201: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1202;
  unsigned long __retval1203;
  this1202 = v1200;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1204 = this1202;
  unsigned long r1205 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1204);
  __retval1203 = r1205;
  unsigned long t1206 = __retval1203;
  return t1206;
}

// function: main
int main() {
bb1207: ;
  int __retval1208;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str11209;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str21210;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str31211;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp01212;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1213;
  int c1214 = 0;
  __retval1208 = c1214;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str11209);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str21210);
      _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str31211);
        char* cast1215 = (char*)&(_str);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1216 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&str11209, cast1215);
        char* cast1217 = (char*)&(_str_1);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1218 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__2(&str21210, cast1217);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r1219 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__operator__char__std__char_traits_char___std__allocator_char___(&str11209, &str21210);
        ref_tmp01212 = r1219;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1220 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str31211, &ref_tmp01212);
          tmp_exprcleanup1213 = r1220;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp01212);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1221 = tmp_exprcleanup1213;
        unsigned long r1222 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&str31211);
        unsigned long c1223 = 11;
        _Bool c1224 = ((r1222 != c1223)) ? 1 : 0;
        if (c1224) {
        } else {
          char* cast1225 = (char*)&(_str_2);
          char* c1226 = (char*)_str_3;
          unsigned int c1227 = 19;
          char* cast1228 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1225, c1226, c1227, cast1228);
        }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str31211);
      }
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str21210);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str11209);
  }
  int t1229 = __retval1208;
  return t1229;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1230) {
bb1231: ;
  char* __r1232;
  char* __retval1233;
  __r1232 = v1230;
  char* t1234 = __r1232;
  __retval1233 = t1234;
  char* t1235 = __retval1233;
  return t1235;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1236) {
bb1237: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1238;
  char* __retval1239;
  this1238 = v1236;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1240 = this1238;
  char* cast1241 = (char*)&(t1240->field2._M_local_buf);
  char* r1242 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1241);
  __retval1239 = r1242;
  char* t1243 = __retval1239;
  return t1243;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v1244) {
bb1245: ;
  struct std__allocator_char_* this1246;
  this1246 = v1244;
  struct std__allocator_char_* t1247 = this1246;
  struct std____new_allocator_char_* base1248 = (struct std____new_allocator_char_*)((char *)t1247 + 0);
  std____new_allocator_char_____new_allocator_2(base1248);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1249, char* v1250, struct std__allocator_char_* v1251) {
bb1252: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1253;
  char* __dat1254;
  struct std__allocator_char_* __a1255;
  this1253 = v1249;
  __dat1254 = v1250;
  __a1255 = v1251;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1256 = this1253;
  struct std__allocator_char_* base1257 = (struct std__allocator_char_*)((char *)t1256 + 0);
  struct std__allocator_char_* t1258 = __a1255;
  std__allocator_char___allocator(base1257, t1258);
    char* t1259 = __dat1254;
    t1256->_M_p = t1259;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v1260) {
bb1261: ;
  struct std__allocator_char_* this1262;
  this1262 = v1260;
  struct std__allocator_char_* t1263 = this1262;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1264: ;
  _Bool __retval1265;
    _Bool c1266 = 0;
    __retval1265 = c1266;
    _Bool t1267 = __retval1265;
    return t1267;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1268) {
bb1269: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1270;
  this1270 = v1268;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1271 = this1270;
    _Bool r1272 = std__is_constant_evaluated();
    if (r1272) {
        unsigned long __i1273;
        unsigned long c1274 = 0;
        __i1273 = c1274;
        while (1) {
          unsigned long t1276 = __i1273;
          unsigned long c1277 = 15;
          _Bool c1278 = ((t1276 <= c1277)) ? 1 : 0;
          if (!c1278) break;
          char c1279 = 0;
          unsigned long t1280 = __i1273;
          t1271->field2._M_local_buf[t1280] = c1279;
        for_step1275: ;
          unsigned long t1281 = __i1273;
          unsigned long u1282 = t1281 + 1;
          __i1273 = u1282;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1283, unsigned long v1284) {
bb1285: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1286;
  unsigned long __length1287;
  this1286 = v1283;
  __length1287 = v1284;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1288 = this1286;
  unsigned long t1289 = __length1287;
  t1288->_M_string_length = t1289;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1290: ;
  _Bool __retval1291;
    _Bool c1292 = 0;
    __retval1291 = c1292;
    _Bool t1293 = __retval1291;
    return t1293;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1294, char* v1295) {
bb1296: ;
  char* __location1297;
  char* __args1298;
  char* __retval1299;
  void* __loc1300;
  __location1297 = v1294;
  __args1298 = v1295;
  char* t1301 = __location1297;
  void* cast1302 = (void*)t1301;
  __loc1300 = cast1302;
    void* t1303 = __loc1300;
    char* cast1304 = (char*)t1303;
    char* t1305 = __args1298;
    char t1306 = *t1305;
    *cast1304 = t1306;
    __retval1299 = cast1304;
    char* t1307 = __retval1299;
    return t1307;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1308, char* v1309) {
bb1310: ;
  char* __c11311;
  char* __c21312;
  __c11311 = v1308;
  __c21312 = v1309;
    _Bool r1313 = std____is_constant_evaluated();
    if (r1313) {
      char* t1314 = __c11311;
      char* t1315 = __c21312;
      char* r1316 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1314, t1315);
    } else {
      char* t1317 = __c21312;
      char t1318 = *t1317;
      char* t1319 = __c11311;
      *t1319 = t1318;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1320) {
bb1321: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1322;
  char* __retval1323;
  this1322 = v1320;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1324 = this1322;
  char* t1325 = t1324->_M_dataplus._M_p;
  __retval1323 = t1325;
  char* t1326 = __retval1323;
  return t1326;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1327, unsigned long v1328) {
bb1329: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1330;
  unsigned long __n1331;
  char ref_tmp01332;
  this1330 = v1327;
  __n1331 = v1328;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1333 = this1330;
  unsigned long t1334 = __n1331;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1333, t1334);
  unsigned long t1335 = __n1331;
  char* r1336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1333);
  char* ptr1337 = &(r1336)[t1335];
  char c1338 = 0;
  ref_tmp01332 = c1338;
  std__char_traits_char___assign(ptr1337, &ref_tmp01332);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1339) {
bb1340: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1341;
  this1341 = v1339;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1342 = this1341;
  {
    struct std__allocator_char_* base1343 = (struct std__allocator_char_*)((char *)t1342 + 0);
    std__allocator_char____allocator(base1343);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1344) {
bb1345: ;
  struct std____new_allocator_char_* this1346;
  this1346 = v1344;
  struct std____new_allocator_char_* t1347 = this1346;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1348, struct std____new_allocator_char_* v1349) {
bb1350: ;
  struct std____new_allocator_char_* this1351;
  struct std____new_allocator_char_* unnamed1352;
  this1351 = v1348;
  unnamed1352 = v1349;
  struct std____new_allocator_char_* t1353 = this1351;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1354, char* v1355, struct std__allocator_char_* v1356) {
bb1357: ;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1358;
  char* __dat1359;
  struct std__allocator_char_* __a1360;
  this1358 = v1354;
  __dat1359 = v1355;
  __a1360 = v1356;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1361 = this1358;
  struct std__allocator_char_* base1362 = (struct std__allocator_char_*)((char *)t1361 + 0);
  struct std__allocator_char_* t1363 = __a1360;
  std__allocator_char___allocator(base1362, t1363);
    char* t1364 = __dat1359;
    t1361->_M_p = t1364;
  return;
}

