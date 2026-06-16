extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
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

char _str[14] = "Test string: ";
char _str_1[10] = "(n) in f(";
char _str_2[26] = "Test string: x(n) in f(n)";
char _str_3[36] = "str3 == \"Test string: x(n) in f(n)\"";
char _str_4[119] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_operator_assign_7/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[25] = "basic_string::_M_replace";
char _str_6[24] = "basic_string::_M_create";
char _str_7[29] = "basic_string::_M_replace_aux";
char _str_8[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
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
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str45;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str56;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp07;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup8;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp19;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp210;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup12;
  int c13 = 0;
  __retval1 = c13;
  // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
  __VERIFIER_nondet_memory(&str12, sizeof(str12));
    // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
    __VERIFIER_nondet_memory(&str23, sizeof(str23));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&str34, sizeof(str34));
        // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
        __VERIFIER_nondet_memory(&str45, sizeof(str45));
          // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
          __VERIFIER_nondet_memory(&str56, sizeof(str56));
            char* cast14 = (char*)&(_str);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std15;
            __VERIFIER_nondet_memory(&std15, sizeof(std15));
            char c16 = 120;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std17;
            __VERIFIER_nondet_memory(&std17, sizeof(std17));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std18;
            __VERIFIER_nondet_memory(&std18, sizeof(std18));
            ref_tmp07 = std18;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std19;
              __VERIFIER_nondet_memory(&std19, sizeof(std19));
              tmp_exprcleanup8 = std19;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp07, sizeof(ref_tmp07));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t20 = tmp_exprcleanup8;
            char* cast21 = (char*)&(_str_1);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std22;
            __VERIFIER_nondet_memory(&std22, sizeof(std22));
            ref_tmp311 = std22;
              char c23 = 110;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std24;
              __VERIFIER_nondet_memory(&std24, sizeof(std24));
              ref_tmp210 = std24;
                char c25 = 41;
                struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std26;
                __VERIFIER_nondet_memory(&std26, sizeof(std26));
                ref_tmp19 = std26;
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std27;
                  __VERIFIER_nondet_memory(&std27, sizeof(std27));
                  tmp_exprcleanup12 = std27;
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&ref_tmp19, sizeof(ref_tmp19));
                }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp210, sizeof(ref_tmp210));
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&ref_tmp311, sizeof(ref_tmp311));
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t28 = tmp_exprcleanup12;
            char* cast29 = (char*)&(_str_2);
            _Bool std30;
            __VERIFIER_nondet_memory(&std30, sizeof(std30));
            if (std30) {
            } else {
              char* cast31 = (char*)&(_str_3);
              char* c32 = (char*)_str_4;
              unsigned int c33 = 24;
              char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
              reach_error();
              __assert_fail(cast31, c32, c33, cast34);
            }
            struct std__basic_ostream_char__std__char_traits_char__* std35;
            __VERIFIER_nondet_memory(&std35, sizeof(std35));
            struct std__basic_ostream_char__std__char_traits_char__* std36;
            __VERIFIER_nondet_memory(&std36, sizeof(std36));
            int c37 = 0;
            __retval1 = c37;
            int t38 = __retval1;
            int ret_val39 = t38;
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str56, sizeof(str56));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&str45, sizeof(str45));
            }
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
            return ret_val39;
  int t40 = __retval1;
  return t40;
}

