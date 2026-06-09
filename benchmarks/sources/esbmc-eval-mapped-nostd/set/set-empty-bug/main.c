extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

char _str[15] = "!myset.empty()";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-empty-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
_Bool std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____empty___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
_Bool std__set_int__std__less_int___std__allocator_int_____empty___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* p0);
int main();
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1);
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2Ev
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* v0) {
bb1:
  struct std__set_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__set_int__std__less_int___std__allocator_int__* t3 = this2;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t3->_M_t);
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5emptyEv
_Bool std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____empty___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v4) {
bb5:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this6;
  _Bool __retval7;
  this6 = v4;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t8 = this6;
  struct std___Rb_tree_header* base9 = (struct std___Rb_tree_header*)((char *)&(t8->_M_impl) + 8);
  unsigned long t10 = base9->_M_node_count;
  unsigned long c11 = 0;
  _Bool c12 = ((t10 == c11)) ? 1 : 0;
  __retval7 = c12;
  _Bool t13 = __retval7;
  return t13;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5emptyEv
_Bool std__set_int__std__less_int___std__allocator_int_____empty___const(struct std__set_int__std__less_int___std__allocator_int__* v14) {
bb15:
  struct std__set_int__std__less_int___std__allocator_int__* this16;
  _Bool __retval17;
  this16 = v14;
  struct std__set_int__std__less_int___std__allocator_int__* t18 = this16;
  _Bool r19 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____empty___const(&t18->_M_t);
  __retval17 = r19;
  _Bool t20 = __retval17;
  return t20;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v21, void* v22) {
bb23:
  struct std__basic_ostream_char__std__char_traits_char__* this24;
  void* __pf25;
  struct std__basic_ostream_char__std__char_traits_char__* __retval26;
  this24 = v21;
  __pf25 = v22;
  struct std__basic_ostream_char__std__char_traits_char__* t27 = this24;
  void* t28 = __pf25;
  struct std__basic_ostream_char__std__char_traits_char__* r29 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t28)(t27);
  __retval26 = r29;
  struct std__basic_ostream_char__std__char_traits_char__* t30 = __retval26;
  return t30;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v31) {
bb32:
  struct std__basic_ostream_char__std__char_traits_char__* __os33;
  struct std__basic_ostream_char__std__char_traits_char__* __retval34;
  __os33 = v31;
  struct std__basic_ostream_char__std__char_traits_char__* t35 = __os33;
  struct std__basic_ostream_char__std__char_traits_char__* r36 = std__ostream__flush(t35);
  __retval34 = r36;
  struct std__basic_ostream_char__std__char_traits_char__* t37 = __retval34;
  return t37;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v38) {
bb39:
  struct std__ctype_char_* __f40;
  struct std__ctype_char_* __retval41;
  __f40 = v38;
    struct std__ctype_char_* t42 = __f40;
    _Bool cast43 = (_Bool)t42;
    _Bool u44 = !cast43;
    if (u44) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t45 = __f40;
  __retval41 = t45;
  struct std__ctype_char_* t46 = __retval41;
  return t46;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v47, char v48) {
bb49:
  struct std__ctype_char_* this50;
  char __c51;
  char __retval52;
  this50 = v47;
  __c51 = v48;
  struct std__ctype_char_* t53 = this50;
    char t54 = t53->_M_widen_ok;
    _Bool cast55 = (_Bool)t54;
    if (cast55) {
      char t56 = __c51;
      unsigned char cast57 = (unsigned char)t56;
      unsigned long cast58 = (unsigned long)cast57;
      char t59 = t53->_M_widen[cast58];
      __retval52 = t59;
      char t60 = __retval52;
      return t60;
    }
  std__ctype_char____M_widen_init___const(t53);
  char t61 = __c51;
  void** v62 = (void**)t53;
  void* v63 = *((void**)v62);
  char vcall66 = (char)__VERIFIER_virtual_call_char_char(t53, 6, t61);
  __retval52 = vcall66;
  char t67 = __retval52;
  return t67;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v68, char v69) {
bb70:
  struct std__basic_ios_char__std__char_traits_char__* this71;
  char __c72;
  char __retval73;
  this71 = v68;
  __c72 = v69;
  struct std__basic_ios_char__std__char_traits_char__* t74 = this71;
  struct std__ctype_char_* t75 = t74->_M_ctype;
  struct std__ctype_char_* r76 = std__ctype_char__const__std____check_facet_std__ctype_char___(t75);
  char t77 = __c72;
  char r78 = std__ctype_char___widen_char__const(r76, t77);
  __retval73 = r78;
  char t79 = __retval73;
  return t79;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v80) {
bb81:
  struct std__basic_ostream_char__std__char_traits_char__* __os82;
  struct std__basic_ostream_char__std__char_traits_char__* __retval83;
  __os82 = v80;
  struct std__basic_ostream_char__std__char_traits_char__* t84 = __os82;
  struct std__basic_ostream_char__std__char_traits_char__* t85 = __os82;
  void** v86 = (void**)t85;
  void* v87 = *((void**)v86);
  unsigned char* cast88 = (unsigned char*)v87;
  long c89 = -24;
  unsigned char* ptr90 = &(cast88)[c89];
  long* cast91 = (long*)ptr90;
  long t92 = *cast91;
  unsigned char* cast93 = (unsigned char*)t85;
  unsigned char* ptr94 = &(cast93)[t92];
  struct std__basic_ostream_char__std__char_traits_char__* cast95 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr94;
  struct std__basic_ios_char__std__char_traits_char__* cast96 = (struct std__basic_ios_char__std__char_traits_char__*)cast95;
  char c97 = 10;
  char r98 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast96, c97);
  struct std__basic_ostream_char__std__char_traits_char__* r99 = std__ostream__put(t84, r98);
  struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r99);
  __retval83 = r100;
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __retval83;
  return t101;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v102) {
bb103:
  struct std__set_int__std__less_int___std__allocator_int__* this104;
  this104 = v102;
  struct std__set_int__std__less_int___std__allocator_int__* t105 = this104;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t105->_M_t);
  }
  return;
}

// function: main
int main() {
bb106:
  int __retval107;
  struct std__set_int__std__less_int___std__allocator_int__ myset108;
  int c109 = 0;
  __retval107 = c109;
  std__set_int__std__less_int___std__allocator_int_____set(&myset108);
    _Bool r110 = std__set_int__std__less_int___std__allocator_int_____empty___const(&myset108);
    _Bool u111 = !r110;
    if (u111) {
    } else {
      char* cast112 = (char*)&(_str);
      char* c113 = _str_1;
      unsigned int c114 = 30;
      char* cast115 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast112, c113, c114, cast115);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r116 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c117 = 0;
    __retval107 = c117;
    int t118 = __retval107;
    int ret_val119 = t118;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset108);
    }
    return ret_val119;
  int t120 = __retval107;
  return t120;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v121) {
bb122:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this123;
  this123 = v121;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t124 = this123;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t124->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v125) {
bb126:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this127;
  this127 = v125;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t128 = this127;
    struct std___Rb_tree_node_int_* r129 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t128);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t128, r129);
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t128->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v130) {
bb131:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this132;
  this132 = v130;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t133 = this132;
  struct std__allocator_std___Rb_tree_node_int__* base134 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t133 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base134);
    struct std___Rb_tree_key_compare_std__less_int__* base135 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t133 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base135);
    struct std___Rb_tree_header* base136 = (struct std___Rb_tree_header*)((char *)t133 + 8);
    std___Rb_tree_header___Rb_tree_header(base136);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v137) {
bb138:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this139;
  this139 = v137;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t140 = this139;
  {
    struct std__allocator_std___Rb_tree_node_int__* base141 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t140 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base141);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v142) {
bb143:
  struct std____new_allocator_std___Rb_tree_node_int__* this144;
  this144 = v142;
  struct std____new_allocator_std___Rb_tree_node_int__* t145 = this144;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v146) {
bb147:
  struct std__allocator_std___Rb_tree_node_int__* this148;
  this148 = v146;
  struct std__allocator_std___Rb_tree_node_int__* t149 = this148;
  struct std____new_allocator_std___Rb_tree_node_int__* base150 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t149 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base150);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v151) {
bb152:
  struct std___Rb_tree_key_compare_std__less_int__* this153;
  this153 = v151;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v154) {
bb155:
  struct std___Rb_tree_header* this156;
  this156 = v154;
  struct std___Rb_tree_header* t157 = this156;
  struct std___Rb_tree_node_base* c158 = ((void*)0);
  t157->_M_header._M_parent = c158;
  t157->_M_header._M_left = &t157->_M_header;
  t157->_M_header._M_right = &t157->_M_header;
  unsigned long c159 = 0;
  t157->_M_node_count = c159;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v160) {
bb161:
  struct std___Rb_tree_header* this162;
  this162 = v160;
  struct std___Rb_tree_header* t163 = this162;
  unsigned int c164 = 0;
  t163->_M_header._M_color = c164;
  std___Rb_tree_header___M_reset(t163);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v165) {
bb166:
  struct std__allocator_std___Rb_tree_node_int__* this167;
  this167 = v165;
  struct std__allocator_std___Rb_tree_node_int__* t168 = this167;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v169) {
bb170:
  struct std___Rb_tree_node_int_* this171;
  struct std___Rb_tree_node_int_* __retval172;
  this171 = v169;
  struct std___Rb_tree_node_int_* t173 = this171;
  __retval172 = t173;
  struct std___Rb_tree_node_int_* t174 = __retval172;
  return t174;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v175) {
bb176:
  struct std___Rb_tree_node_int_* __x177;
  struct std___Rb_tree_node_int_* __retval178;
  __x177 = v175;
  struct std___Rb_tree_node_int_* t179 = __x177;
  struct std___Rb_tree_node_base* base180 = (struct std___Rb_tree_node_base*)((char *)t179 + 0);
  struct std___Rb_tree_node_base* t181 = base180->_M_right;
  _Bool cast182 = (_Bool)t181;
  struct std___Rb_tree_node_int_* ternary183;
  if (cast182) {
    struct std___Rb_tree_node_int_* t184 = __x177;
    struct std___Rb_tree_node_base* base185 = (struct std___Rb_tree_node_base*)((char *)t184 + 0);
    struct std___Rb_tree_node_base* t186 = base185->_M_right;
    struct std___Rb_tree_node_int_* derived187 = (struct std___Rb_tree_node_int_*)((char *)t186 - 0);
    struct std___Rb_tree_node_int_* r188 = std___Rb_tree_node_int____M_node_ptr(derived187);
    ternary183 = (struct std___Rb_tree_node_int_*)r188;
  } else {
    struct std___Rb_tree_node_int_* c189 = ((void*)0);
    ternary183 = (struct std___Rb_tree_node_int_*)c189;
  }
  __retval178 = ternary183;
  struct std___Rb_tree_node_int_* t190 = __retval178;
  return t190;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v191) {
bb192:
  struct std___Rb_tree_node_int_* __x193;
  struct std___Rb_tree_node_int_* __retval194;
  __x193 = v191;
  struct std___Rb_tree_node_int_* t195 = __x193;
  struct std___Rb_tree_node_base* base196 = (struct std___Rb_tree_node_base*)((char *)t195 + 0);
  struct std___Rb_tree_node_base* t197 = base196->_M_left;
  _Bool cast198 = (_Bool)t197;
  struct std___Rb_tree_node_int_* ternary199;
  if (cast198) {
    struct std___Rb_tree_node_int_* t200 = __x193;
    struct std___Rb_tree_node_base* base201 = (struct std___Rb_tree_node_base*)((char *)t200 + 0);
    struct std___Rb_tree_node_base* t202 = base201->_M_left;
    struct std___Rb_tree_node_int_* derived203 = (struct std___Rb_tree_node_int_*)((char *)t202 - 0);
    struct std___Rb_tree_node_int_* r204 = std___Rb_tree_node_int____M_node_ptr(derived203);
    ternary199 = (struct std___Rb_tree_node_int_*)r204;
  } else {
    struct std___Rb_tree_node_int_* c205 = ((void*)0);
    ternary199 = (struct std___Rb_tree_node_int_*)c205;
  }
  __retval194 = ternary199;
  struct std___Rb_tree_node_int_* t206 = __retval194;
  return t206;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v207) {
bb208:
  int* __location209;
  __location209 = v207;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v210, int* v211) {
bb212:
  struct std__allocator_std___Rb_tree_node_int__* __a213;
  int* __p214;
  __a213 = v210;
  __p214 = v211;
  int* t215 = __p214;
  void_std__destroy_at_int_(t215);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v216) {
bb217:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this218;
  struct std__allocator_std___Rb_tree_node_int__* __retval219;
  this218 = v216;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t220 = this218;
  struct std__allocator_std___Rb_tree_node_int__* base221 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t220->_M_impl) + 0);
  __retval219 = base221;
  struct std__allocator_std___Rb_tree_node_int__* t222 = __retval219;
  return t222;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v223) {
bb224:
  struct __gnu_cxx____aligned_membuf_int_* this225;
  void* __retval226;
  this225 = v223;
  struct __gnu_cxx____aligned_membuf_int_* t227 = this225;
  void* cast228 = (void*)&(t227->_M_storage);
  __retval226 = cast228;
  void* t229 = __retval226;
  return t229;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v230) {
bb231:
  struct __gnu_cxx____aligned_membuf_int_* this232;
  int* __retval233;
  this232 = v230;
  struct __gnu_cxx____aligned_membuf_int_* t234 = this232;
  void* r235 = __gnu_cxx____aligned_membuf_int____M_addr(t234);
  int* cast236 = (int*)r235;
  __retval233 = cast236;
  int* t237 = __retval233;
  return t237;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v238) {
bb239:
  struct std___Rb_tree_node_int_* this240;
  int* __retval241;
  this240 = v238;
  struct std___Rb_tree_node_int_* t242 = this240;
  int* r243 = __gnu_cxx____aligned_membuf_int____M_ptr(&t242->_M_storage);
  __retval241 = r243;
  int* t244 = __retval241;
  return t244;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v245, struct std___Rb_tree_node_int_* v246) {
bb247:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this248;
  struct std___Rb_tree_node_int_* __p249;
  this248 = v245;
  __p249 = v246;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t250 = this248;
  struct std__allocator_std___Rb_tree_node_int__* r251 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t250);
  struct std___Rb_tree_node_int_* t252 = __p249;
  int* r253 = std___Rb_tree_node_int____M_valptr(t252);
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r251, r253);
  struct std___Rb_tree_node_int_* t254 = __p249;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb255:
  _Bool __retval256;
    _Bool c257 = 0;
    __retval256 = c257;
    _Bool t258 = __retval256;
    return t258;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v259, struct std___Rb_tree_node_int_* v260, unsigned long v261) {
bb262:
  struct std____new_allocator_std___Rb_tree_node_int__* this263;
  struct std___Rb_tree_node_int_* __p264;
  unsigned long __n265;
  this263 = v259;
  __p264 = v260;
  __n265 = v261;
  struct std____new_allocator_std___Rb_tree_node_int__* t266 = this263;
    unsigned long c267 = 8;
    unsigned long c268 = 16;
    _Bool c269 = ((c267 > c268)) ? 1 : 0;
    if (c269) {
      struct std___Rb_tree_node_int_* t270 = __p264;
      void* cast271 = (void*)t270;
      unsigned long t272 = __n265;
      unsigned long c273 = 40;
      unsigned long b274 = t272 * c273;
      unsigned long c275 = 8;
      operator_delete_3(cast271, b274, c275);
      return;
    }
  struct std___Rb_tree_node_int_* t276 = __p264;
  void* cast277 = (void*)t276;
  unsigned long t278 = __n265;
  unsigned long c279 = 40;
  unsigned long b280 = t278 * c279;
  operator_delete_2(cast277, b280);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v281, struct std___Rb_tree_node_int_* v282, unsigned long v283) {
bb284:
  struct std__allocator_std___Rb_tree_node_int__* this285;
  struct std___Rb_tree_node_int_* __p286;
  unsigned long __n287;
  this285 = v281;
  __p286 = v282;
  __n287 = v283;
  struct std__allocator_std___Rb_tree_node_int__* t288 = this285;
    _Bool r289 = std____is_constant_evaluated();
    if (r289) {
      struct std___Rb_tree_node_int_* t290 = __p286;
      void* cast291 = (void*)t290;
      operator_delete(cast291);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base292 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t288 + 0);
  struct std___Rb_tree_node_int_* t293 = __p286;
  unsigned long t294 = __n287;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base292, t293, t294);
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v295, struct std___Rb_tree_node_int_* v296, unsigned long v297) {
bb298:
  struct std__allocator_std___Rb_tree_node_int__* __a299;
  struct std___Rb_tree_node_int_* __p300;
  unsigned long __n301;
  __a299 = v295;
  __p300 = v296;
  __n301 = v297;
  struct std__allocator_std___Rb_tree_node_int__* t302 = __a299;
  struct std___Rb_tree_node_int_* t303 = __p300;
  unsigned long t304 = __n301;
  std__allocator_std___Rb_tree_node_int_____deallocate(t302, t303, t304);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v305, struct std___Rb_tree_node_int_* v306) {
bb307:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this308;
  struct std___Rb_tree_node_int_* __p309;
  this308 = v305;
  __p309 = v306;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t310 = this308;
  struct std__allocator_std___Rb_tree_node_int__* r311 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t310);
  struct std___Rb_tree_node_int_* t312 = __p309;
  unsigned long c313 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r311, t312, c313);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v314, struct std___Rb_tree_node_int_* v315) {
bb316:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this317;
  struct std___Rb_tree_node_int_* __p318;
  this317 = v314;
  __p318 = v315;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t319 = this317;
  struct std___Rb_tree_node_int_* t320 = __p318;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t319, t320);
  struct std___Rb_tree_node_int_* t321 = __p318;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t319, t321);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v322, struct std___Rb_tree_node_int_* v323) {
bb324:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this325;
  struct std___Rb_tree_node_int_* __x326;
  this325 = v322;
  __x326 = v323;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t327 = this325;
    while (1) {
      struct std___Rb_tree_node_int_* t328 = __x326;
      _Bool cast329 = (_Bool)t328;
      if (!cast329) break;
        struct std___Rb_tree_node_int_* __y330;
        struct std___Rb_tree_node_int_* t331 = __x326;
        struct std___Rb_tree_node_int_* r332 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t331);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t327, r332);
        struct std___Rb_tree_node_int_* t333 = __x326;
        struct std___Rb_tree_node_int_* r334 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t333);
        __y330 = r334;
        struct std___Rb_tree_node_int_* t335 = __x326;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t327, t335);
        struct std___Rb_tree_node_int_* t336 = __y330;
        __x326 = t336;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v337) {
bb338:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this339;
  struct std___Rb_tree_node_int_* __retval340;
  struct std___Rb_tree_node_base* __begin341;
  this339 = v337;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t342 = this339;
  struct std___Rb_tree_header* base343 = (struct std___Rb_tree_header*)((char *)&(t342->_M_impl) + 8);
  struct std___Rb_tree_node_base* t344 = base343->_M_header._M_parent;
  __begin341 = t344;
  struct std___Rb_tree_node_base* t345 = __begin341;
  _Bool cast346 = (_Bool)t345;
  struct std___Rb_tree_node_int_* ternary347;
  if (cast346) {
    struct std___Rb_tree_node_base* t348 = __begin341;
    struct std___Rb_tree_node_int_* derived349 = (struct std___Rb_tree_node_int_*)((char *)t348 - 0);
    struct std___Rb_tree_node_int_* r350 = std___Rb_tree_node_int____M_node_ptr(derived349);
    ternary347 = (struct std___Rb_tree_node_int_*)r350;
  } else {
    struct std___Rb_tree_node_int_* c351 = ((void*)0);
    ternary347 = (struct std___Rb_tree_node_int_*)c351;
  }
  __retval340 = ternary347;
  struct std___Rb_tree_node_int_* t352 = __retval340;
  return t352;
}

