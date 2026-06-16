extern void abort(void);
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

char _str[2] = "x";
char _str_1[3] = "f(";
char _str_2[3] = ") ";
char _str_3[2] = "=";
char _str_4[2] = " ";
char _str_5[4] = "= x";
char _str_6[14] = "str3 != \"= x\"";
char _str_7[124] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_plus_eq_6_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_8[9] = "f(x) = x";
char _str_9[19] = "str2 != \"f(x) = x\"";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_10[50] = "basic_string: construction from null is not valid";
char _str_11[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_12[21] = "basic_string::append";
char _str_13[22] = "basic_string::replace";
char _str_14[25] = "basic_string::_M_replace";
char _str_15[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str12;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str23;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str34;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp05;
  struct std__allocator_char_ ref_tmp16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp39;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup10;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp512;
  struct std__allocator_char_ ref_tmp613;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp714;
  struct std__allocator_char_ ref_tmp815;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup16;
  int c17 = 0;
  __retval1 = c17;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        char* cast18 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
          __VERIFIER_nondet_memory(cast18, sizeof(*cast18));
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std19;
            __VERIFIER_nondet_memory(&std19, sizeof(std19));
            tmp_exprcleanup7 = std19;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t20 = tmp_exprcleanup7;
        char* cast21 = (char*)&(_str_1);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
        ref_tmp39 = std22;
          char* cast23 = (char*)&(_str_2);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
          ref_tmp28 = std24;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std25;
            __VERIFIER_nondet_memory(&std25, sizeof(std25));
            tmp_exprcleanup10 = std25;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
          }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp39, sizeof(ref_tmp39));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t26 = tmp_exprcleanup10;
        char* cast27 = (char*)&(_str_3);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp613, sizeof(ref_tmp613));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&ref_tmp512, sizeof(ref_tmp512));
          __VERIFIER_nondet_memory(cast27, sizeof(*cast27));
          __VERIFIER_nondet_memory(&ref_tmp613, sizeof(ref_tmp613));
            char* cast28 = (char*)&(_str_4);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp815, sizeof(ref_tmp815));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&ref_tmp714, sizeof(ref_tmp714));
              __VERIFIER_nondet_memory(cast28, sizeof(*cast28));
              __VERIFIER_nondet_memory(&ref_tmp815, sizeof(ref_tmp815));
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std29;
                __VERIFIER_nondet_memory(&std29, sizeof(std29));
                ref_tmp411 = std29;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std30;
                  __VERIFIER_nondet_memory(&std30, sizeof(std30));
                  tmp_exprcleanup16 = std30;
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&ref_tmp411, sizeof(ref_tmp411));
                }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp714, sizeof(ref_tmp714));
              }
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp815, sizeof(ref_tmp815));
            }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&ref_tmp512, sizeof(ref_tmp512));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp613, sizeof(ref_tmp613));
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t31 = tmp_exprcleanup16;
        char* cast32 = (char*)&(_str_5);
        _Bool std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        _Bool u34 = !std33;
        if (u34) {
        } else {
          char* cast35 = (char*)&(_str_6);
          char* c36 = (char*)_str_7;
          unsigned int c37 = 21;
          char* cast38 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast35, c36, c37, cast38);
        }
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std39;
        __VERIFIER_nondet_memory(&std39, sizeof(std39));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        char* cast41 = (char*)&(_str_8);
        _Bool std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        _Bool u43 = !std42;
        if (u43) {
        } else {
          char* cast44 = (char*)&(_str_9);
          char* c45 = (char*)_str_7;
          unsigned int c46 = 24;
          char* cast47 = (char*)&(__PRETTY_FUNCTION___main);
          reach_error();
          __assert_fail(cast44, c45, c46, cast47);
        }
        struct std__basic_ostream_char__std__char_traits_char__* std48;
        __VERIFIER_nondet_memory(&std48, sizeof(std48));
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        int c50 = 0;
        __retval1 = c50;
        int t51 = __retval1;
        int ret_val52 = t51;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&str34, sizeof(str34));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&str23, sizeof(str23));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&str12, sizeof(str12));
        }
        return ret_val52;
  int t53 = __retval1;
  return t53;
}

