extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct StringClass { char str[20]; };
struct __gnu_cxx____aligned_membuf_std__pair_const_StringClass__opposite__ { unsigned char _M_storage[40]; };
struct opposite { char str[20]; };
struct std___Rb_tree_StringClass__std__pair_const_StringClass__opposite___std___Select1st_std__pair_const_StringClass__opposite____std__less_StringClass___std__allocator_std__pair_const_StringClass__opposite______Alloc_node { struct std___Rb_tree_StringClass__std__pair_const_StringClass__opposite___std___Select1st_std__pair_const_StringClass__opposite____std__less_StringClass___std__allocator_std__pair_const_StringClass__opposite___* _M_t; };
struct std___Rb_tree_iterator_std__pair_const_StringClass__opposite__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_StringClass__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_StringClass__opposite__ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_std__pair_const_StringClass__opposite__ _M_storage; };
struct std___Select1st_std__pair_const_StringClass__opposite__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_StringClass__opposite___;
struct std____pair_base_const_StringClass__opposite_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_StringClass__opposite___;
struct std__less_StringClass_;
struct std__pair_const_StringClass__opposite_ { struct StringClass first; struct opposite second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_StringClass__std__pair_const_StringClass__opposite___std___Select1st_std__pair_const_StringClass__opposite____std__less_StringClass___std__allocator_std__pair_const_StringClass__opposite______Rb_tree_impl_std__less_StringClass___true_ { struct std___Rb_tree_key_compare_std__less_StringClass__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_StringClass__std__pair_const_StringClass__opposite___std___Select1st_std__pair_const_StringClass__opposite____std__less_StringClass___std__allocator_std__pair_const_StringClass__opposite___ { struct std___Rb_tree_StringClass__std__pair_const_StringClass__opposite___std___Select1st_std__pair_const_StringClass__opposite____std__less_StringClass___std__allocator_std__pair_const_StringClass__opposite______Rb_tree_impl_std__less_StringClass___true_ _M_impl; };
struct std__multimap_StringClass__opposite__std__less_StringClass___std__allocator_std__pair_const_StringClass__opposite___ { struct std___Rb_tree_StringClass__std__pair_const_StringClass__opposite___std___Select1st_std__pair_const_StringClass__opposite____std__less_StringClass___std__allocator_std__pair_const_StringClass__opposite___ _M_t; };

char _str[2] = "a";
char _str_1[2] = "b";
char _str_2[30] = "it->first == StringClass(\"a\")";
char _str_3[124] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_string_class-2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[28] = "it->second == opposite(\"b\")";
char _str_5[22] = "mapObject.size() != 1";
extern int strcmp(char* p0, char* p1);
char* StringClass__get(struct StringClass* p0);
_Bool operator_(struct StringClass p0, struct StringClass p1);
_Bool operator__(struct StringClass p0, struct StringClass p1);
_Bool operator___3(struct StringClass p0, struct StringClass p1);
char* opposite__get(struct opposite* p0);
_Bool operator__2(struct opposite p0, struct opposite p1);
_Bool operator___2(struct opposite p0, struct opposite p1);
_Bool operator___4(struct opposite p0, struct opposite p1);
void StringClass__StringClass(struct StringClass* p0, char* p1);
void opposite__opposite(struct opposite* p0, char* p1);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();
extern char* strcpy(char* p0, char* p1);

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _ZN11StringClass3getEv
char* StringClass__get(struct StringClass* v0) {
bb1: ;
  struct StringClass* this2;
  char* __retval3;
  this2 = v0;
  struct StringClass* t4 = this2;
  char* cast5 = (char*)&(t4->str);
  __retval3 = cast5;
  char* t6 = __retval3;
  return t6;
}

// function: _Zlt11StringClassS_
_Bool operator_(struct StringClass v7, struct StringClass v8) {
bb9: ;
  struct StringClass a10;
  struct StringClass b11;
  _Bool __retval12;
  a10 = v7;
  b11 = v8;
  char* r13 = StringClass__get(&a10);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  char* r14 = StringClass__get(&b11);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int r15 = strcmp(r13, r14);
  int c16 = 0;
  _Bool c17 = ((r15 < c16)) ? 1 : 0;
  __retval12 = c17;
  _Bool t18 = __retval12;
  return t18;
}

// function: _Zeq11StringClassS_
_Bool operator__(struct StringClass v19, struct StringClass v20) {
bb21: ;
  struct StringClass a22;
  struct StringClass b23;
  _Bool __retval24;
  a22 = v19;
  b23 = v20;
  char* r25 = StringClass__get(&a22);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  char* r26 = StringClass__get(&b23);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int r27 = strcmp(r25, r26);
  int c28 = 0;
  _Bool c29 = ((r27 == c28)) ? 1 : 0;
  __retval24 = c29;
  _Bool t30 = __retval24;
  return t30;
}

// function: _Zne11StringClassS_
_Bool operator___3(struct StringClass v31, struct StringClass v32) {
bb33: ;
  struct StringClass a34;
  struct StringClass b35;
  _Bool __retval36;
  a34 = v31;
  b35 = v32;
  char* r37 = StringClass__get(&a34);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  char* r38 = StringClass__get(&b35);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int r39 = strcmp(r37, r38);
  int c40 = 0;
  _Bool c41 = ((r39 != c40)) ? 1 : 0;
  __retval36 = c41;
  _Bool t42 = __retval36;
  return t42;
}

// function: _ZN8opposite3getEv
char* opposite__get(struct opposite* v43) {
bb44: ;
  struct opposite* this45;
  char* __retval46;
  this45 = v43;
  struct opposite* t47 = this45;
  char* cast48 = (char*)&(t47->str);
  __retval46 = cast48;
  char* t49 = __retval46;
  return t49;
}

// function: _Zlt8oppositeS_
_Bool operator__2(struct opposite v50, struct opposite v51) {
bb52: ;
  struct opposite a53;
  struct opposite b54;
  _Bool __retval55;
  a53 = v50;
  b54 = v51;
  char* r56 = opposite__get(&a53);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  char* r57 = opposite__get(&b54);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int r58 = strcmp(r56, r57);
  int c59 = 0;
  _Bool c60 = ((r58 < c59)) ? 1 : 0;
  __retval55 = c60;
  _Bool t61 = __retval55;
  return t61;
}

// function: _Zeq8oppositeS_
_Bool operator___2(struct opposite v62, struct opposite v63) {
bb64: ;
  struct opposite a65;
  struct opposite b66;
  _Bool __retval67;
  a65 = v62;
  b66 = v63;
  char* r68 = opposite__get(&a65);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  char* r69 = opposite__get(&b66);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int r70 = strcmp(r68, r69);
  int c71 = 0;
  _Bool c72 = ((r70 == c71)) ? 1 : 0;
  __retval67 = c72;
  _Bool t73 = __retval67;
  return t73;
}

// function: _Zne8oppositeS_
_Bool operator___4(struct opposite v74, struct opposite v75) {
bb76: ;
  struct opposite a77;
  struct opposite b78;
  _Bool __retval79;
  a77 = v74;
  b78 = v75;
  char* r80 = opposite__get(&a77);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  char* r81 = opposite__get(&b78);
  if (__cir_exc_active) {
    _Bool __cir_eh_ret = (_Bool)0;
    return __cir_eh_ret;
  }
  int r82 = strcmp(r80, r81);
  int c83 = 0;
  _Bool c84 = ((r82 != c83)) ? 1 : 0;
  __retval79 = c84;
  _Bool t85 = __retval79;
  return t85;
}

// function: _ZN11StringClassC2EPc
void StringClass__StringClass(struct StringClass* v86, char* v87) {
bb88: ;
  struct StringClass* this89;
  char* s90;
  this89 = v86;
  s90 = v87;
  struct StringClass* t91 = this89;
  char* cast92 = (char*)&(t91->str);
  char* t93 = s90;
  char* r94 = strcpy(cast92, t93);
  return;
}

// function: _ZN8oppositeC2EPc
void opposite__opposite(struct opposite* v95, char* v96) {
bb97: ;
  struct opposite* this98;
  char* s99;
  this98 = v95;
  s99 = v96;
  struct opposite* t100 = this98;
  char* cast101 = (char*)&(t100->str);
  char* t102 = s99;
  char* r103 = strcpy(cast101, t102);
  return;
}

// function: main
int main() {
bb104: ;
  int __retval105;
  struct std__multimap_StringClass__opposite__std__less_StringClass___std__allocator_std__pair_const_StringClass__opposite___ mapObject106;
  struct std__pair_const_StringClass__opposite_ ref_tmp0107;
  struct StringClass ref_tmp1108;
  struct opposite ref_tmp2109;
  struct std___Rb_tree_iterator_std__pair_const_StringClass__opposite__ agg_tmp0110;
  struct std___Rb_tree_iterator_std__pair_const_StringClass__opposite__ it111;
  struct StringClass agg_tmp1112;
  struct StringClass agg_tmp2113;
  struct opposite agg_tmp3114;
  struct opposite agg_tmp4115;
  int c116 = 0;
  __retval105 = c116;
  // externalized std:: op: std::multimap<StringClass, opposite, std::less<StringClass>, std::allocator<std::pair<StringClass const, opposite> > >::multimap()
  __VERIFIER_nondet_memory(&mapObject106, sizeof(mapObject106));
    char* cast117 = (char*)&(_str);
    StringClass__StringClass(&ref_tmp1108, cast117);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::multimap<StringClass, opposite, std::less<StringClass>, std::allocator<std::pair<StringClass const, opposite> > >::~multimap()
        __VERIFIER_nondet_memory(&mapObject106, sizeof(mapObject106));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast118 = (char*)&(_str_1);
    opposite__opposite(&ref_tmp2109, cast118);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::multimap<StringClass, opposite, std::less<StringClass>, std::allocator<std::pair<StringClass const, opposite> > >::~multimap()
        __VERIFIER_nondet_memory(&mapObject106, sizeof(mapObject106));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    // externalized std:: op: _ZNSt4pairIK11StringClass8oppositeEC2IS0_S2_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
    __VERIFIER_nondet_memory(&ref_tmp0107, sizeof(ref_tmp0107));
    __VERIFIER_nondet_memory(&ref_tmp1108, sizeof(ref_tmp1108));
    __VERIFIER_nondet_memory(&ref_tmp2109, sizeof(ref_tmp2109));
    struct std___Rb_tree_iterator_std__pair_const_StringClass__opposite__ std119;
    __VERIFIER_nondet_memory(&std119, sizeof(std119));
    agg_tmp0110 = std119;
    struct std___Rb_tree_iterator_std__pair_const_StringClass__opposite__ std120;
    __VERIFIER_nondet_memory(&std120, sizeof(std120));
    it111 = std120;
    struct std__pair_const_StringClass__opposite_* std121;
    __VERIFIER_nondet_memory(&std121, sizeof(std121));
    agg_tmp1112 = std121->first; // copy
    char* cast122 = (char*)&(_str);
    StringClass__StringClass(&agg_tmp2113, cast122);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::multimap<StringClass, opposite, std::less<StringClass>, std::allocator<std::pair<StringClass const, opposite> > >::~multimap()
        __VERIFIER_nondet_memory(&mapObject106, sizeof(mapObject106));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct StringClass t123 = agg_tmp1112;
    struct StringClass t124 = agg_tmp2113;
    _Bool r125 = operator__(t123, t124);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::multimap<StringClass, opposite, std::less<StringClass>, std::allocator<std::pair<StringClass const, opposite> > >::~multimap()
        __VERIFIER_nondet_memory(&mapObject106, sizeof(mapObject106));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    if (r125) {
    } else {
      char* cast126 = (char*)&(_str_2);
      char* c127 = (char*)_str_3;
      unsigned int c128 = 74;
      char* cast129 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast126, c127, c128, cast129);
    }
    struct std__pair_const_StringClass__opposite_* std130;
    __VERIFIER_nondet_memory(&std130, sizeof(std130));
    agg_tmp3114 = std130->second; // copy
    char* cast131 = (char*)&(_str_1);
    opposite__opposite(&agg_tmp4115, cast131);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::multimap<StringClass, opposite, std::less<StringClass>, std::allocator<std::pair<StringClass const, opposite> > >::~multimap()
        __VERIFIER_nondet_memory(&mapObject106, sizeof(mapObject106));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct opposite t132 = agg_tmp3114;
    struct opposite t133 = agg_tmp4115;
    _Bool r134 = operator___2(t132, t133);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::multimap<StringClass, opposite, std::less<StringClass>, std::allocator<std::pair<StringClass const, opposite> > >::~multimap()
        __VERIFIER_nondet_memory(&mapObject106, sizeof(mapObject106));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    if (r134) {
    } else {
      char* cast135 = (char*)&(_str_4);
      char* c136 = (char*)_str_3;
      unsigned int c137 = 75;
      char* cast138 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast135, c136, c137, cast138);
    }
    unsigned long std139 = __VERIFIER_nondet_unsigned_long();
    unsigned long c140 = 1;
    _Bool c141 = ((std139 != c140)) ? 1 : 0;
    if (c141) {
    } else {
      char* cast142 = (char*)&(_str_5);
      char* c143 = (char*)_str_3;
      unsigned int c144 = 76;
      char* cast145 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast142, c143, c144, cast145);
    }
    int c146 = 0;
    __retval105 = c146;
    int t147 = __retval105;
    int ret_val148 = t147;
    {
      // externalized std:: op: std::multimap<StringClass, opposite, std::less<StringClass>, std::allocator<std::pair<StringClass const, opposite> > >::~multimap()
      __VERIFIER_nondet_memory(&mapObject106, sizeof(mapObject106));
    }
    return ret_val148;
  int t149 = __retval105;
  return t149;
}

