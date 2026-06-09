extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __gnu_cxx____aligned_membuf_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { unsigned char _M_storage[32]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____ { struct std__allocator_std___List_node_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____* _M_alloc; struct std___List_node_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* _M_ptr; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____list___Scratch_list_std____detail___List_node_base_ { struct std____detail___List_node_base __field0; };
struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____bool_____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____ { void* _M_cmp; };
struct std____list___Scratch_list_std____detail___List_node_base____Ptr_cmp_std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____void_ { unsigned char __field0; };
struct std____new_allocator_char_;
struct std____new_allocator_std___List_node_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____;
struct std__allocator_char_ { unsigned char __field0; };
struct std__allocator_std___List_node_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____;
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___List_node_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___;
struct std____allocated_obj_std__allocator_std___List_node_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____ { struct std____allocated_ptr_std__allocator_std___List_node_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____ __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__ctype_char_;
struct std__ios_base;
struct std____cxx11___List_base_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__allocator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11___List_base_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__allocator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____ { struct std____cxx11___List_base_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__allocator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_______List_impl _M_impl; };
struct std____cxx11__list_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__allocator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____ { struct std____cxx11___List_base_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__allocator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
struct std____cmp_cat____unspec __const__ZNKSt6__list13_Scratch_listINSt8__detail15_List_node_baseEE8_Ptr_cmpISt14_List_iteratorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEvEclEPS2_SE__agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[4] = "one";
char _str_1[4] = "two";
char _str_2[6] = "Three";
char _str_3[15] = "*it == \"Three\"";
char _str_4[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/template/list_sort/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_5[13] = "*it == \"one\"";
char _str_6[13] = "*it == \"two\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_7[17] = "mylist contains:";
char _str_8[2] = " ";
char _str_9[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_10[16] = "__pos <= size()";
char _str_11[50] = "basic_string: construction from null is not valid";
char _str_12[24] = "basic_string::_M_create";
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
extern int tolower(int p0);
_Bool compare_nocase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern unsigned long __VERIFIER_nondet_unsigned_long(void);
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z14compare_nocaseNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_
_Bool compare_nocase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ v0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ v1) {
bb2:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ first3;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ second4;
  _Bool __retval5;
  unsigned int i6;
  first3 = v0;
  second4 = v1;
  unsigned int c7 = 0;
  i6 = c7;
    while (1) {
      unsigned int t8 = i6;
      unsigned long cast9 = (unsigned long)t8;
      unsigned long std10 = __VERIFIER_nondet_unsigned_long();
      _Bool c11 = ((cast9 < std10)) ? 1 : 0;
      _Bool ternary12;
      if (c11) {
        unsigned int t13 = i6;
        unsigned long cast14 = (unsigned long)t13;
        unsigned long std15 = __VERIFIER_nondet_unsigned_long();
        _Bool c16 = ((cast14 < std15)) ? 1 : 0;
        ternary12 = (_Bool)c16;
      } else {
        _Bool c17 = 0;
        ternary12 = (_Bool)c17;
      }
      if (!ternary12) break;
          unsigned int t18 = i6;
          unsigned long cast19 = (unsigned long)t18;
          char* std20;
          __VERIFIER_nondet_memory(&std20, sizeof(std20));
          char t21 = *std20;
          int cast22 = (int)t21;
          int r23 = tolower(cast22);
          unsigned int t24 = i6;
          unsigned long cast25 = (unsigned long)t24;
          char* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          char t27 = *std26;
          int cast28 = (int)t27;
          int r29 = tolower(cast28);
          _Bool c30 = ((r23 < r29)) ? 1 : 0;
          if (c30) {
            _Bool c31 = 1;
            __retval5 = c31;
            _Bool t32 = __retval5;
            _Bool ret_val33 = t32;
            return ret_val33;
          } else {
              unsigned int t34 = i6;
              unsigned long cast35 = (unsigned long)t34;
              char* std36;
              __VERIFIER_nondet_memory(&std36, sizeof(std36));
              char t37 = *std36;
              int cast38 = (int)t37;
              int r39 = tolower(cast38);
              unsigned int t40 = i6;
              unsigned long cast41 = (unsigned long)t40;
              char* std42;
              __VERIFIER_nondet_memory(&std42, sizeof(std42));
              char t43 = *std42;
              int cast44 = (int)t43;
              int r45 = tolower(cast44);
              _Bool c46 = ((r39 > r45)) ? 1 : 0;
              if (c46) {
                _Bool c47 = 0;
                __retval5 = c47;
                _Bool t48 = __retval5;
                _Bool ret_val49 = t48;
                return ret_val49;
              }
          }
        unsigned int t50 = i6;
        unsigned int u51 = t50 + 1;
        i6 = u51;
    }
    unsigned long std52 = __VERIFIER_nondet_unsigned_long();
    unsigned long std53 = __VERIFIER_nondet_unsigned_long();
    _Bool c54 = ((std52 < std53)) ? 1 : 0;
    if (c54) {
      _Bool c55 = 1;
      __retval5 = c55;
      _Bool t56 = __retval5;
      return t56;
    } else {
      _Bool c57 = 0;
      __retval5 = c57;
      _Bool t58 = __retval5;
      return t58;
    }
  abort();
}

// function: main
int main() {
bb59:
  int __retval60;
  struct std____cxx11__list_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____std__allocator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____ mylist61;
  struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ it62;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp063;
  struct std__allocator_char_ ref_tmp164;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp265;
  struct std__allocator_char_ ref_tmp366;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp467;
  struct std__allocator_char_ ref_tmp568;
  struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp669;
  struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp070;
  struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp171;
  struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp972;
  struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp273;
  struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ agg_tmp374;
  int c75 = 0;
  __retval60 = c75;
  // externalized std:: op: std::__cxx11::list<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::list()
  __VERIFIER_nondet_memory(&mylist61, sizeof(mylist61));
    // externalized std:: op: std::_List_iterator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >::_List_iterator()
    __VERIFIER_nondet_memory(&it62, sizeof(it62));
    char* cast76 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp164, sizeof(ref_tmp164));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&ref_tmp063, sizeof(ref_tmp063));
      __VERIFIER_nondet_memory(cast76, sizeof(*cast76));
      __VERIFIER_nondet_memory(&ref_tmp164, sizeof(ref_tmp164));
        // externalized std:: op: std::__cxx11::list<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::push_back(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)
        __VERIFIER_nondet_memory(&mylist61, sizeof(mylist61));
        __VERIFIER_nondet_memory(&ref_tmp063, sizeof(ref_tmp063));
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp063, sizeof(ref_tmp063));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp164, sizeof(ref_tmp164));
    }
    char* cast77 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp366, sizeof(ref_tmp366));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&ref_tmp265, sizeof(ref_tmp265));
      __VERIFIER_nondet_memory(cast77, sizeof(*cast77));
      __VERIFIER_nondet_memory(&ref_tmp366, sizeof(ref_tmp366));
        // externalized std:: op: std::__cxx11::list<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::push_back(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)
        __VERIFIER_nondet_memory(&mylist61, sizeof(mylist61));
        __VERIFIER_nondet_memory(&ref_tmp265, sizeof(ref_tmp265));
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp265, sizeof(ref_tmp265));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp366, sizeof(ref_tmp366));
    }
    char* cast78 = (char*)&(_str_2);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp568, sizeof(ref_tmp568));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&ref_tmp467, sizeof(ref_tmp467));
      __VERIFIER_nondet_memory(cast78, sizeof(*cast78));
      __VERIFIER_nondet_memory(&ref_tmp568, sizeof(ref_tmp568));
        // externalized std:: op: std::__cxx11::list<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::push_back(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)
        __VERIFIER_nondet_memory(&mylist61, sizeof(mylist61));
        __VERIFIER_nondet_memory(&ref_tmp467, sizeof(ref_tmp467));
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&ref_tmp467, sizeof(ref_tmp467));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp568, sizeof(ref_tmp568));
    }
    // externalized std:: op: std::__cxx11::list<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::sort()
    __VERIFIER_nondet_memory(&mylist61, sizeof(mylist61));
    struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std79;
    __VERIFIER_nondet_memory(&std79, sizeof(std79));
    ref_tmp669 = std79;
    struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std80;
    __VERIFIER_nondet_memory(&std80, sizeof(std80));
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std81;
    __VERIFIER_nondet_memory(&std81, sizeof(std81));
    char* cast82 = (char*)&(_str_2);
    _Bool std83;
    __VERIFIER_nondet_memory(&std83, sizeof(std83));
    if (std83) {
    } else {
      char* cast84 = (char*)&(_str_3);
      char* c85 = _str_4;
      unsigned int c86 = 40;
      char* cast87 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast84, c85, c86, cast87);
    }
    int c88 = 0;
    struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std89;
    __VERIFIER_nondet_memory(&std89, sizeof(std89));
    agg_tmp070 = std89;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
    char* cast91 = (char*)&(_str);
    _Bool std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    if (std92) {
    } else {
      char* cast93 = (char*)&(_str_5);
      char* c94 = _str_4;
      unsigned int c95 = 41;
      char* cast96 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast93, c94, c95, cast96);
    }
    int c97 = 0;
    struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std98;
    __VERIFIER_nondet_memory(&std98, sizeof(std98));
    agg_tmp171 = std98;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    char* cast100 = (char*)&(_str_1);
    _Bool std101;
    __VERIFIER_nondet_memory(&std101, sizeof(std101));
    if (std101) {
    } else {
      char* cast102 = (char*)&(_str_6);
      char* c103 = _str_4;
      unsigned int c104 = 42;
      char* cast105 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast102, c103, c104, cast105);
    }
    char* cast106 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std107;
    __VERIFIER_nondet_memory(&std107, sizeof(std107));
      struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp7108;
      struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp8109;
      struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std110;
      __VERIFIER_nondet_memory(&std110, sizeof(std110));
      ref_tmp7108 = std110;
      struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std111;
      __VERIFIER_nondet_memory(&std111, sizeof(std111));
      while (1) {
        struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        ref_tmp8109 = std113;
        _Bool std114;
        __VERIFIER_nondet_memory(&std114, sizeof(std114));
        _Bool u115 = !std114;
        if (!u115) break;
        char* cast116 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std117;
        __VERIFIER_nondet_memory(&std117, sizeof(std117));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std118;
        __VERIFIER_nondet_memory(&std118, sizeof(std118));
        struct std__basic_ostream_char__std__char_traits_char__* std119;
        __VERIFIER_nondet_memory(&std119, sizeof(std119));
      for_step112: ;
        struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std120;
        __VERIFIER_nondet_memory(&std120, sizeof(std120));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std121;
    __VERIFIER_nondet_memory(&std121, sizeof(std121));
    // externalized std:: op: void std::__cxx11::list<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::sort<bool (*)(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)>(bool (*)(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >))
    __VERIFIER_nondet_memory(&mylist61, sizeof(mylist61));
    struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std122;
    __VERIFIER_nondet_memory(&std122, sizeof(std122));
    ref_tmp972 = std122;
    struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std123;
    __VERIFIER_nondet_memory(&std123, sizeof(std123));
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std124;
    __VERIFIER_nondet_memory(&std124, sizeof(std124));
    char* cast125 = (char*)&(_str);
    _Bool std126;
    __VERIFIER_nondet_memory(&std126, sizeof(std126));
    if (std126) {
    } else {
      char* cast127 = (char*)&(_str_5);
      char* c128 = _str_4;
      unsigned int c129 = 51;
      char* cast130 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast127, c128, c129, cast130);
    }
    int c131 = 0;
    struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std132;
    __VERIFIER_nondet_memory(&std132, sizeof(std132));
    agg_tmp273 = std132;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std133;
    __VERIFIER_nondet_memory(&std133, sizeof(std133));
    char* cast134 = (char*)&(_str_2);
    _Bool std135;
    __VERIFIER_nondet_memory(&std135, sizeof(std135));
    if (std135) {
    } else {
      char* cast136 = (char*)&(_str_3);
      char* c137 = _str_4;
      unsigned int c138 = 52;
      char* cast139 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast136, c137, c138, cast139);
    }
    int c140 = 0;
    struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std141;
    __VERIFIER_nondet_memory(&std141, sizeof(std141));
    agg_tmp374 = std141;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std142;
    __VERIFIER_nondet_memory(&std142, sizeof(std142));
    char* cast143 = (char*)&(_str_1);
    _Bool std144;
    __VERIFIER_nondet_memory(&std144, sizeof(std144));
    if (std144) {
    } else {
      char* cast145 = (char*)&(_str_6);
      char* c146 = _str_4;
      unsigned int c147 = 53;
      char* cast148 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast145, c146, c147, cast148);
    }
    char* cast149 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* std150;
    __VERIFIER_nondet_memory(&std150, sizeof(std150));
      struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp10151;
      struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ ref_tmp11152;
      struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std153;
      __VERIFIER_nondet_memory(&std153, sizeof(std153));
      ref_tmp10151 = std153;
      struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std154;
      __VERIFIER_nondet_memory(&std154, sizeof(std154));
      while (1) {
        struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___ std156;
        __VERIFIER_nondet_memory(&std156, sizeof(std156));
        ref_tmp11152 = std156;
        _Bool std157;
        __VERIFIER_nondet_memory(&std157, sizeof(std157));
        _Bool u158 = !std157;
        if (!u158) break;
        char* cast159 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* std160;
        __VERIFIER_nondet_memory(&std160, sizeof(std160));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std161;
        __VERIFIER_nondet_memory(&std161, sizeof(std161));
        struct std__basic_ostream_char__std__char_traits_char__* std162;
        __VERIFIER_nondet_memory(&std162, sizeof(std162));
      for_step155: ;
        struct std___List_iterator_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char___* std163;
        __VERIFIER_nondet_memory(&std163, sizeof(std163));
      }
    struct std__basic_ostream_char__std__char_traits_char__* std164;
    __VERIFIER_nondet_memory(&std164, sizeof(std164));
    int c165 = 0;
    __retval60 = c165;
    int t166 = __retval60;
    int ret_val167 = t166;
    {
      // externalized std:: op: std::__cxx11::list<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >::~list()
      __VERIFIER_nondet_memory(&mylist61, sizeof(mylist61));
    }
    return ret_val167;
  int t168 = __retval60;
  return t168;
}

