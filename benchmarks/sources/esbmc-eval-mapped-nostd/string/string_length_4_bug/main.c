extern void abort(void);
// Struct definitions (auto-parsed)
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };

char _str[19] = "str1.length() != 0";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_length_4_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_2[24] = "basic_string::_M_create";
void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);

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

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v7) {
bb8:
  char* __r9;
  char* __retval10;
  __r9 = v7;
  char* t11 = __r9;
  __retval10 = t11;
  char* t12 = __retval10;
  return t12;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v13) {
bb14:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this15;
  char* __retval16;
  this15 = v13;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t17 = this15;
  char* cast18 = (char*)&(t17->field2._M_local_buf);
  char* r19 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast18);
  __retval16 = r19;
  char* t20 = __retval16;
  return t20;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v21) {
bb22:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this23;
  _Bool __retval24;
  this23 = v21;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t25 = this23;
    char* r26 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t25);
    char* r27 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t25);
    _Bool c28 = ((r26 == r27)) ? 1 : 0;
    if (c28) {
        unsigned long t29 = t25->_M_string_length;
        unsigned long c30 = 15;
        _Bool c31 = ((t29 > c30)) ? 1 : 0;
        if (c31) {
          __builtin_unreachable();
        }
      _Bool c32 = 1;
      __retval24 = c32;
      _Bool t33 = __retval24;
      return t33;
    }
  _Bool c34 = 0;
  __retval24 = c34;
  _Bool t35 = __retval24;
  return t35;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb36:
  _Bool __retval37;
  _Bool t38 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval37 = t38;
  _Bool t39 = __retval37;
  return t39;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v40, char* v41, unsigned long v42) {
bb43:
  struct std____new_allocator_char_* this44;
  char* __p45;
  unsigned long __n46;
  this44 = v40;
  __p45 = v41;
  __n46 = v42;
  struct std____new_allocator_char_* t47 = this44;
    unsigned long c48 = 1;
    unsigned long c49 = 16;
    _Bool c50 = ((c48 > c49)) ? 1 : 0;
    if (c50) {
      char* t51 = __p45;
      void* cast52 = (void*)t51;
      unsigned long t53 = __n46;
      unsigned long c54 = 1;
      unsigned long b55 = t53 * c54;
      unsigned long c56 = 1;
      operator_delete_3(cast52, b55, c56);
      return;
    }
  char* t57 = __p45;
  void* cast58 = (void*)t57;
  unsigned long t59 = __n46;
  unsigned long c60 = 1;
  unsigned long b61 = t59 * c60;
  operator_delete_2(cast58, b61);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v62, char* v63, unsigned long v64) {
bb65:
  struct std__allocator_char_* this66;
  char* __p67;
  unsigned long __n68;
  this66 = v62;
  __p67 = v63;
  __n68 = v64;
  struct std__allocator_char_* t69 = this66;
    _Bool r70 = std____is_constant_evaluated();
    if (r70) {
      char* t71 = __p67;
      void* cast72 = (void*)t71;
      operator_delete(cast72);
      return;
    }
  struct std____new_allocator_char_* base73 = (struct std____new_allocator_char_*)((char *)t69 + 0);
  char* t74 = __p67;
  unsigned long t75 = __n68;
  std____new_allocator_char___deallocate(base73, t74, t75);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v76, char* v77, unsigned long v78) {
bb79:
  struct std__allocator_char_* __a80;
  char* __p81;
  unsigned long __n82;
  __a80 = v76;
  __p81 = v77;
  __n82 = v78;
  struct std__allocator_char_* t83 = __a80;
  char* t84 = __p81;
  unsigned long t85 = __n82;
  std__allocator_char___deallocate(t83, t84, t85);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v86, unsigned long v87) {
bb88:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this89;
  unsigned long __size90;
  this89 = v86;
  __size90 = v87;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t91 = this89;
  struct std__allocator_char_* r92 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t91);
  char* r93 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t91);
  unsigned long t94 = __size90;
  unsigned long c95 = 1;
  unsigned long b96 = t94 + c95;
  std__allocator_traits_std__allocator_char_____deallocate(r92, r93, b96);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v97, char* v98) {
bb99:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this100;
  char* __p101;
  this100 = v97;
  __p101 = v98;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t102 = this100;
  char* t103 = __p101;
  t102->_M_dataplus._M_p = t103;
  return;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v104, struct std____new_allocator_char_* v105) {
bb106:
  struct std____new_allocator_char_* this107;
  struct std____new_allocator_char_* unnamed108;
  struct std____new_allocator_char_* __retval109;
  this107 = v104;
  unnamed108 = v105;
  struct std____new_allocator_char_* t110 = this107;
  __retval109 = t110;
  struct std____new_allocator_char_* t111 = __retval109;
  return t111;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v112, struct std__allocator_char_* v113) {
bb114:
  struct std__allocator_char_* this115;
  struct std__allocator_char_* unnamed116;
  struct std__allocator_char_* __retval117;
  this115 = v112;
  unnamed116 = v113;
  struct std__allocator_char_* t118 = this115;
  struct std____new_allocator_char_* base119 = (struct std____new_allocator_char_*)((char *)t118 + 0);
  struct std__allocator_char_* t120 = unnamed116;
  struct std____new_allocator_char_* base121 = (struct std____new_allocator_char_*)((char *)t120 + 0);
  struct std____new_allocator_char_* r122 = std____new_allocator_char___operator_(base119, base121);
  __retval117 = t118;
  struct std__allocator_char_* t123 = __retval117;
  return t123;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v124, struct std__allocator_char_* v125) {
bb126:
  struct std__allocator_char_* __one127;
  struct std__allocator_char_* __two128;
  __one127 = v124;
  __two128 = v125;
    struct std__allocator_char_* t129 = __two128;
    struct std__allocator_char_* t130 = __one127;
    struct std__allocator_char_* r131 = std__allocator_char___operator_(t130, t129);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v132) {
bb133:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this134;
  struct std__allocator_char_* __retval135;
  this134 = v132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t136 = this134;
  struct std__allocator_char_* base137 = (struct std__allocator_char_*)((char *)&(t136->_M_dataplus) + 0);
  __retval135 = base137;
  struct std__allocator_char_* t138 = __retval135;
  return t138;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v139) {
bb140:
  struct std__allocator_char_* __a141;
  unsigned long __retval142;
  __a141 = v139;
  unsigned long c143 = -1;
  unsigned long c144 = 1;
  unsigned long b145 = c143 / c144;
  __retval142 = b145;
  unsigned long t146 = __retval142;
  return t146;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v147) {
bb148:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this149;
  struct std__allocator_char_* __retval150;
  this149 = v147;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t151 = this149;
  struct std__allocator_char_* base152 = (struct std__allocator_char_*)((char *)&(t151->_M_dataplus) + 0);
  __retval150 = base152;
  struct std__allocator_char_* t153 = __retval150;
  return t153;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v154, unsigned long* v155) {
bb156:
  unsigned long* __a157;
  unsigned long* __b158;
  unsigned long* __retval159;
  __a157 = v154;
  __b158 = v155;
    unsigned long* t160 = __b158;
    unsigned long t161 = *t160;
    unsigned long* t162 = __a157;
    unsigned long t163 = *t162;
    _Bool c164 = ((t161 < t163)) ? 1 : 0;
    if (c164) {
      unsigned long* t165 = __b158;
      __retval159 = t165;
      unsigned long* t166 = __retval159;
      return t166;
    }
  unsigned long* t167 = __a157;
  __retval159 = t167;
  unsigned long* t168 = __retval159;
  return t168;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v169) {
bb170:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this171;
  unsigned long __retval172;
  unsigned long __diffmax173;
  unsigned long __allocmax174;
  this171 = v169;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t175 = this171;
  unsigned long c176 = 9223372036854775807;
  __diffmax173 = c176;
  struct std__allocator_char_* r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t175);
  unsigned long r178 = std__allocator_traits_std__allocator_char_____max_size(r177);
  __allocmax174 = r178;
  unsigned long* r179 = unsigned_long_const__std__min_unsigned_long_(&__diffmax173, &__allocmax174);
  unsigned long t180 = *r179;
  unsigned long c181 = 1;
  unsigned long b182 = t180 - c181;
  __retval172 = b182;
  unsigned long t183 = __retval172;
  return t183;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v184) {
bb185:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this186;
  unsigned long __retval187;
  unsigned long __sz188;
  this186 = v184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = this186;
  unsigned long t190 = t189->_M_string_length;
  __sz188 = t190;
    unsigned long t191 = __sz188;
    unsigned long r192 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t189);
    _Bool c193 = ((t191 > r192)) ? 1 : 0;
    if (c193) {
      __builtin_unreachable();
    }
  unsigned long t194 = __sz188;
  __retval187 = t194;
  unsigned long t195 = __retval187;
  return t195;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v196, char* v197, unsigned long v198) {
bb199:
  char* __s1200;
  char* __s2201;
  unsigned long __n202;
  char* __retval203;
  __s1200 = v196;
  __s2201 = v197;
  __n202 = v198;
    unsigned long t204 = __n202;
    unsigned long c205 = 0;
    _Bool c206 = ((t204 == c205)) ? 1 : 0;
    if (c206) {
      char* t207 = __s1200;
      __retval203 = t207;
      char* t208 = __retval203;
      return t208;
    }
    _Bool r209 = std____is_constant_evaluated();
    if (r209) {
        unsigned long __i210;
        unsigned long c211 = 0;
        __i210 = c211;
        while (1) {
          unsigned long t213 = __i210;
          unsigned long t214 = __n202;
          _Bool c215 = ((t213 < t214)) ? 1 : 0;
          if (!c215) break;
          char* t216 = __s1200;
          unsigned long t217 = __i210;
          char* ptr218 = &(t216)[t217];
          unsigned long t219 = __i210;
          char* t220 = __s2201;
          char* ptr221 = &(t220)[t219];
          char* r222 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr218, ptr221);
        for_step212: ;
          unsigned long t223 = __i210;
          unsigned long u224 = t223 + 1;
          __i210 = u224;
        }
      char* t225 = __s1200;
      __retval203 = t225;
      char* t226 = __retval203;
      return t226;
    }
  char* t227 = __s1200;
  void* cast228 = (void*)t227;
  char* t229 = __s2201;
  void* cast230 = (void*)t229;
  unsigned long t231 = __n202;
  unsigned long c232 = 1;
  unsigned long b233 = t231 * c232;
  void* r234 = memcpy(cast228, cast230, b233);
  char* t235 = __s1200;
  __retval203 = t235;
  char* t236 = __retval203;
  return t236;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v237, char* v238, unsigned long v239) {
bb240:
  char* __s1241;
  char* __s2242;
  unsigned long __n243;
  char* __retval244;
  __s1241 = v237;
  __s2242 = v238;
  __n243 = v239;
    unsigned long t245 = __n243;
    unsigned long c246 = 0;
    _Bool c247 = ((t245 == c246)) ? 1 : 0;
    if (c247) {
      char* t248 = __s1241;
      __retval244 = t248;
      char* t249 = __retval244;
      return t249;
    }
    _Bool r250 = std____is_constant_evaluated();
    if (r250) {
      char* t251 = __s1241;
      char* t252 = __s2242;
      unsigned long t253 = __n243;
      char* r254 = __gnu_cxx__char_traits_char___copy(t251, t252, t253);
      __retval244 = r254;
      char* t255 = __retval244;
      return t255;
    }
  char* t256 = __s1241;
  void* cast257 = (void*)t256;
  char* t258 = __s2242;
  void* cast259 = (void*)t258;
  unsigned long t260 = __n243;
  void* r261 = memcpy(cast257, cast259, t260);
  char* cast262 = (char*)r261;
  __retval244 = cast262;
  char* t263 = __retval244;
  return t263;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v264, char* v265, unsigned long v266) {
bb267:
  char* __d268;
  char* __s269;
  unsigned long __n270;
  __d268 = v264;
  __s269 = v265;
  __n270 = v266;
    unsigned long t271 = __n270;
    unsigned long c272 = 1;
    _Bool c273 = ((t271 == c272)) ? 1 : 0;
    if (c273) {
      char* t274 = __d268;
      char* t275 = __s269;
      std__char_traits_char___assign(t274, t275);
    } else {
      char* t276 = __d268;
      char* t277 = __s269;
      unsigned long t278 = __n270;
      char* r279 = std__char_traits_char___copy(t276, t277, t278);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v280, unsigned long v281) {
bb282:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this283;
  unsigned long __capacity284;
  this283 = v280;
  __capacity284 = v281;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t285 = this283;
  unsigned long t286 = __capacity284;
  t285->field2._M_allocated_capacity = t286;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v287) {
bb288:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this289;
  char* __retval290;
  this289 = v287;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t291 = this289;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t291);
  char* r292 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t291);
  __retval290 = r292;
  char* t293 = __retval290;
  return t293;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v294) {
bb295:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this296;
  unsigned long __retval297;
  unsigned long __sz298;
  this296 = v294;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t299 = this296;
  _Bool r300 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t299);
  unsigned long ternary301;
  if (r300) {
    unsigned long c302 = 15;
    ternary301 = (unsigned long)c302;
  } else {
    unsigned long t303 = t299->field2._M_allocated_capacity;
    ternary301 = (unsigned long)t303;
  }
  __sz298 = ternary301;
    unsigned long t304 = __sz298;
    unsigned long c305 = 15;
    _Bool c306 = ((t304 < c305)) ? 1 : 0;
    _Bool ternary307;
    if (c306) {
      _Bool c308 = 1;
      ternary307 = (_Bool)c308;
    } else {
      unsigned long t309 = __sz298;
      unsigned long r310 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t299);
      _Bool c311 = ((t309 > r310)) ? 1 : 0;
      ternary307 = (_Bool)c311;
    }
    if (ternary307) {
      __builtin_unreachable();
    }
  unsigned long t312 = __sz298;
  __retval297 = t312;
  unsigned long t313 = __retval297;
  return t313;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v314) {
bb315:
  struct std____new_allocator_char_* this316;
  unsigned long __retval317;
  this316 = v314;
  struct std____new_allocator_char_* t318 = this316;
  unsigned long c319 = 9223372036854775807;
  unsigned long c320 = 1;
  unsigned long b321 = c319 / c320;
  __retval317 = b321;
  unsigned long t322 = __retval317;
  return t322;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v323, unsigned long v324, void* v325) {
bb326:
  struct std____new_allocator_char_* this327;
  unsigned long __n328;
  void* unnamed329;
  char* __retval330;
  this327 = v323;
  __n328 = v324;
  unnamed329 = v325;
  struct std____new_allocator_char_* t331 = this327;
    unsigned long t332 = __n328;
    unsigned long r333 = std____new_allocator_char____M_max_size___const(t331);
    _Bool c334 = ((t332 > r333)) ? 1 : 0;
    if (c334) {
        unsigned long t335 = __n328;
        unsigned long c336 = -1;
        unsigned long c337 = 1;
        unsigned long b338 = c336 / c337;
        _Bool c339 = ((t335 > b338)) ? 1 : 0;
        if (c339) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c340 = 1;
    unsigned long c341 = 16;
    _Bool c342 = ((c340 > c341)) ? 1 : 0;
    if (c342) {
      unsigned long __al343;
      unsigned long c344 = 1;
      __al343 = c344;
      unsigned long t345 = __n328;
      unsigned long c346 = 1;
      unsigned long b347 = t345 * c346;
      unsigned long t348 = __al343;
      void* r349 = operator_new_2(b347, t348);
      char* cast350 = (char*)r349;
      __retval330 = cast350;
      char* t351 = __retval330;
      return t351;
    }
  unsigned long t352 = __n328;
  unsigned long c353 = 1;
  unsigned long b354 = t352 * c353;
  void* r355 = operator_new(b354);
  char* cast356 = (char*)r355;
  __retval330 = cast356;
  char* t357 = __retval330;
  return t357;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v358, unsigned long v359) {
bb360:
  struct std__allocator_char_* this361;
  unsigned long __n362;
  char* __retval363;
  this361 = v358;
  __n362 = v359;
  struct std__allocator_char_* t364 = this361;
    _Bool r365 = std____is_constant_evaluated();
    if (r365) {
        unsigned long t366 = __n362;
        unsigned long c367 = 1;
        unsigned long ovr368;
        _Bool ovf369 = __builtin_mul_overflow(t366, c367, &ovr368);
        __n362 = ovr368;
        if (ovf369) {
          std____throw_bad_array_new_length();
        }
      unsigned long t370 = __n362;
      void* r371 = operator_new(t370);
      char* cast372 = (char*)r371;
      __retval363 = cast372;
      char* t373 = __retval363;
      return t373;
    }
  struct std____new_allocator_char_* base374 = (struct std____new_allocator_char_*)((char *)t364 + 0);
  unsigned long t375 = __n362;
  void* c376 = ((void*)0);
  char* r377 = std____new_allocator_char___allocate(base374, t375, c376);
  __retval363 = r377;
  char* t378 = __retval363;
  return t378;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v379, unsigned long v380) {
bb381:
  struct std__allocator_char_* __a382;
  unsigned long __n383;
  char* __retval384;
  __a382 = v379;
  __n383 = v380;
  struct std__allocator_char_* t385 = __a382;
  unsigned long t386 = __n383;
  char* r387 = std__allocator_char___allocate(t385, t386);
  __retval384 = r387;
  char* t388 = __retval384;
  return t388;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v389, unsigned long v390) {
bb391:
  struct std__allocator_char_* __a392;
  unsigned long __n393;
  char* __retval394;
  char* __p395;
  __a392 = v389;
  __n393 = v390;
  struct std__allocator_char_* t396 = __a392;
  unsigned long t397 = __n393;
  char* r398 = std__allocator_traits_std__allocator_char_____allocate(t396, t397);
  __p395 = r398;
  char* t399 = __p395;
  __retval394 = t399;
  char* t400 = __retval394;
  return t400;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v401, unsigned long* v402, unsigned long v403) {
bb404:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this405;
  unsigned long* __capacity406;
  unsigned long __old_capacity407;
  char* __retval408;
  this405 = v401;
  __capacity406 = v402;
  __old_capacity407 = v403;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t409 = this405;
    unsigned long* t410 = __capacity406;
    unsigned long t411 = *t410;
    unsigned long r412 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t409);
    _Bool c413 = ((t411 > r412)) ? 1 : 0;
    if (c413) {
      char* cast414 = (char*)&(_str_2);
      std____throw_length_error(cast414);
    }
    unsigned long* t415 = __capacity406;
    unsigned long t416 = *t415;
    unsigned long t417 = __old_capacity407;
    _Bool c418 = ((t416 > t417)) ? 1 : 0;
    _Bool ternary419;
    if (c418) {
      unsigned long* t420 = __capacity406;
      unsigned long t421 = *t420;
      unsigned long c422 = 2;
      unsigned long t423 = __old_capacity407;
      unsigned long b424 = c422 * t423;
      _Bool c425 = ((t421 < b424)) ? 1 : 0;
      ternary419 = (_Bool)c425;
    } else {
      _Bool c426 = 0;
      ternary419 = (_Bool)c426;
    }
    if (ternary419) {
      unsigned long c427 = 2;
      unsigned long t428 = __old_capacity407;
      unsigned long b429 = c427 * t428;
      unsigned long* t430 = __capacity406;
      *t430 = b429;
        unsigned long* t431 = __capacity406;
        unsigned long t432 = *t431;
        unsigned long r433 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t409);
        _Bool c434 = ((t432 > r433)) ? 1 : 0;
        if (c434) {
          unsigned long r435 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t409);
          unsigned long* t436 = __capacity406;
          *t436 = r435;
        }
    }
  struct std__allocator_char_* r437 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t409);
  unsigned long* t438 = __capacity406;
  unsigned long t439 = *t438;
  unsigned long c440 = 1;
  unsigned long b441 = t439 + c440;
  char* r442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r437, b441);
  __retval408 = r442;
  char* t443 = __retval408;
  return t443;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v444) {
bb445:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this446;
  this446 = v444;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t447 = this446;
    _Bool r448 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t447);
    _Bool u449 = !r448;
    if (u449) {
      unsigned long t450 = t447->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t447, t450);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v451, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v452) {
bb453:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this454;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str455;
  this454 = v451;
  __str455 = v452;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t456 = this454;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t457 = __str455;
    _Bool c458 = ((t456 != t457)) ? 1 : 0;
    if (c458) {
      unsigned long __rsize459;
      unsigned long __capacity460;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t461 = __str455;
      unsigned long r462 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t461);
      __rsize459 = r462;
      unsigned long r463 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t456);
      __capacity460 = r463;
        unsigned long t464 = __rsize459;
        unsigned long t465 = __capacity460;
        _Bool c466 = ((t464 > t465)) ? 1 : 0;
        if (c466) {
          unsigned long __new_capacity467;
          char* __tmp468;
          unsigned long t469 = __rsize459;
          __new_capacity467 = t469;
          unsigned long t470 = __capacity460;
          char* r471 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t456, &__new_capacity467, t470);
          __tmp468 = r471;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t456);
          char* t472 = __tmp468;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t456, t472);
          unsigned long t473 = __new_capacity467;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t456, t473);
        }
        unsigned long t474 = __rsize459;
        _Bool cast475 = (_Bool)t474;
        if (cast475) {
          char* r476 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t456);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t477 = __str455;
          char* r478 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t477);
          unsigned long t479 = __rsize459;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r476, r478, t479);
        }
      unsigned long t480 = __rsize459;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t456, t480);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v481) {
bb482:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this483;
  this483 = v481;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t484 = this483;
  unsigned long c485 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t484, c485);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v486, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v487) {
bb488:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this489;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str490;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval491;
  _Bool __equal_allocs492;
  this489 = v486;
  __str490 = v487;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t493 = this489;
  _Bool c494 = 1;
  __equal_allocs492 = c494;
    _Bool r495 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t493);
    _Bool u496 = !r495;
    _Bool ternary497;
    if (u496) {
      _Bool r498 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary497 = (_Bool)r498;
    } else {
      _Bool c499 = 0;
      ternary497 = (_Bool)c499;
    }
    _Bool ternary500;
    if (ternary497) {
      _Bool t501 = __equal_allocs492;
      _Bool u502 = !t501;
      ternary500 = (_Bool)u502;
    } else {
      _Bool c503 = 0;
      ternary500 = (_Bool)c503;
    }
    if (ternary500) {
      unsigned long t504 = t493->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t493, t504);
      char* r505 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t493);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t493, r505);
      unsigned long c506 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t493, c506);
    }
  struct std__allocator_char_* r507 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t493);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t508 = __str490;
  struct std__allocator_char_* r509 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t508);
  void_std____alloc_on_move_std__allocator_char___(r507, r509);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t510 = __str490;
    _Bool r511 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t510);
    if (r511) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t512 = __str490;
        _Bool c513 = ((t512 != t493)) ? 1 : 0;
        if (c513) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t514 = __str490;
            unsigned long r515 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t514);
            _Bool cast516 = (_Bool)r515;
            if (cast516) {
              char* r517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t493);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t518 = __str490;
              char* r519 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t518);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t520 = __str490;
              unsigned long r521 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t520);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r517, r519, r521);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t522 = __str490;
          unsigned long r523 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t522);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t493, r523);
        }
    } else {
        _Bool r524 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary525;
        if (r524) {
          _Bool c526 = 1;
          ternary525 = (_Bool)c526;
        } else {
          _Bool t527 = __equal_allocs492;
          ternary525 = (_Bool)t527;
        }
        if (ternary525) {
          char* __data528;
          unsigned long __capacity529;
          char* c530 = ((void*)0);
          __data528 = c530;
            _Bool r531 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t493);
            _Bool u532 = !r531;
            if (u532) {
                _Bool t533 = __equal_allocs492;
                if (t533) {
                  char* r534 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t493);
                  __data528 = r534;
                  unsigned long t535 = t493->field2._M_allocated_capacity;
                  __capacity529 = t535;
                } else {
                  unsigned long t536 = t493->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t493, t536);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t537 = __str490;
          char* r538 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t537);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t493, r538);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t539 = __str490;
          unsigned long r540 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t539);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t493, r540);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t541 = __str490;
          unsigned long t542 = t541->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t493, t542);
            char* t543 = __data528;
            _Bool cast544 = (_Bool)t543;
            if (cast544) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t545 = __str490;
              char* t546 = __data528;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t545, t546);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t547 = __str490;
              unsigned long t548 = __capacity529;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t547, t548);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t549 = __str490;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t550 = __str490;
              char* r551 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t550);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t549, r551);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t552 = __str490;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t493, t552);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t553 = __str490;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t553);
  __retval491 = t493;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t554 = __retval491;
  return t554;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v555) {
bb556:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this557;
  this557 = v555;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t558 = this557;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t558);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t558->_M_dataplus);
  }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v559) {
bb560:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this561;
  unsigned long __retval562;
  this561 = v559;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t563 = this561;
  unsigned long r564 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t563);
  __retval562 = r564;
  unsigned long t565 = __retval562;
  return t565;
}

// function: main
int main() {
bb566:
  int __retval567;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str1568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0569;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup570;
  int c571 = 0;
  __retval567 = c571;
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&str1568);
    _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E(&ref_tmp0569);
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r572 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&str1568, &ref_tmp0569);
      tmp_exprcleanup570 = r572;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0569);
    }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t573 = tmp_exprcleanup570;
    unsigned long r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&str1568);
    unsigned long c575 = 0;
    _Bool c576 = ((r574 != c575)) ? 1 : 0;
    if (c576) {
    } else {
      char* cast577 = (char*)&(_str);
      char* c578 = _str_1;
      unsigned int c579 = 17;
      char* cast580 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast577, c578, c579, cast580);
    }
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str1568);
  }
  int t581 = __retval567;
  return t581;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v582) {
bb583:
  char* __r584;
  char* __retval585;
  __r584 = v582;
  char* t586 = __r584;
  __retval585 = t586;
  char* t587 = __retval585;
  return t587;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v588) {
bb589:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this590;
  char* __retval591;
  this590 = v588;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t592 = this590;
  char* cast593 = (char*)&(t592->field2._M_local_buf);
  char* r594 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast593);
  __retval591 = r594;
  char* t595 = __retval591;
  return t595;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v596) {
bb597:
  struct std__allocator_char_* this598;
  this598 = v596;
  struct std__allocator_char_* t599 = this598;
  struct std____new_allocator_char_* base600 = (struct std____new_allocator_char_*)((char *)t599 + 0);
  std____new_allocator_char_____new_allocator_2(base600);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v601, char* v602, struct std__allocator_char_* v603) {
bb604:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this605;
  char* __dat606;
  struct std__allocator_char_* __a607;
  this605 = v601;
  __dat606 = v602;
  __a607 = v603;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t608 = this605;
  struct std__allocator_char_* base609 = (struct std__allocator_char_*)((char *)t608 + 0);
  struct std__allocator_char_* t610 = __a607;
  std__allocator_char___allocator(base609, t610);
    char* t611 = __dat606;
    t608->_M_p = t611;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v612) {
bb613:
  struct std__allocator_char_* this614;
  this614 = v612;
  struct std__allocator_char_* t615 = this614;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb616:
  _Bool __retval617;
    _Bool c618 = 0;
    __retval617 = c618;
    _Bool t619 = __retval617;
    return t619;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v620) {
bb621:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this622;
  this622 = v620;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t623 = this622;
    _Bool r624 = std__is_constant_evaluated();
    if (r624) {
        unsigned long __i625;
        unsigned long c626 = 0;
        __i625 = c626;
        while (1) {
          unsigned long t628 = __i625;
          unsigned long c629 = 15;
          _Bool c630 = ((t628 <= c629)) ? 1 : 0;
          if (!c630) break;
          char c631 = 0;
          unsigned long t632 = __i625;
          t623->field2._M_local_buf[t632] = c631;
        for_step627: ;
          unsigned long t633 = __i625;
          unsigned long u634 = t633 + 1;
          __i625 = u634;
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v635, unsigned long v636) {
bb637:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this638;
  unsigned long __length639;
  this638 = v635;
  __length639 = v636;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t640 = this638;
  unsigned long t641 = __length639;
  t640->_M_string_length = t641;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb642:
  _Bool __retval643;
    _Bool c644 = 0;
    __retval643 = c644;
    _Bool t645 = __retval643;
    return t645;
  abort();
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v646, char* v647) {
bb648:
  char* __location649;
  char* __args650;
  char* __retval651;
  void* __loc652;
  __location649 = v646;
  __args650 = v647;
  char* t653 = __location649;
  void* cast654 = (void*)t653;
  __loc652 = cast654;
    void* t655 = __loc652;
    char* cast656 = (char*)t655;
    char* t657 = __args650;
    char t658 = *t657;
    *cast656 = t658;
    __retval651 = cast656;
    char* t659 = __retval651;
    return t659;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v660, char* v661) {
bb662:
  char* __c1663;
  char* __c2664;
  __c1663 = v660;
  __c2664 = v661;
    _Bool r665 = std____is_constant_evaluated();
    if (r665) {
      char* t666 = __c1663;
      char* t667 = __c2664;
      char* r668 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t666, t667);
    } else {
      char* t669 = __c2664;
      char t670 = *t669;
      char* t671 = __c1663;
      *t671 = t670;
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v672) {
bb673:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this674;
  char* __retval675;
  this674 = v672;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t676 = this674;
  char* t677 = t676->_M_dataplus._M_p;
  __retval675 = t677;
  char* t678 = __retval675;
  return t678;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v679, unsigned long v680) {
bb681:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this682;
  unsigned long __n683;
  char ref_tmp0684;
  this682 = v679;
  __n683 = v680;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t685 = this682;
  unsigned long t686 = __n683;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t685, t686);
  unsigned long t687 = __n683;
  char* r688 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t685);
  char* ptr689 = &(r688)[t687];
  char c690 = 0;
  ref_tmp0684 = c690;
  std__char_traits_char___assign(ptr689, &ref_tmp0684);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v691) {
bb692:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this693;
  this693 = v691;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t694 = this693;
  {
    struct std__allocator_char_* base695 = (struct std__allocator_char_*)((char *)t694 + 0);
    std__allocator_char____allocator(base695);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v696) {
bb697:
  struct std____new_allocator_char_* this698;
  this698 = v696;
  struct std____new_allocator_char_* t699 = this698;
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v700, struct std____new_allocator_char_* v701) {
bb702:
  struct std____new_allocator_char_* this703;
  struct std____new_allocator_char_* unnamed704;
  this703 = v700;
  unnamed704 = v701;
  struct std____new_allocator_char_* t705 = this703;
  return;
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

