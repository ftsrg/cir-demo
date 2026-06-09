extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; unsigned char* __field2[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
struct anon_struct_2 { unsigned char* __field0[16]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; int _M_mode; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ _M_string; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_iostream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_ostream_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ { struct std__basic_iostream_char__std__char_traits_char__ __field0; struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ _M_stringbuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[20] = "120 42 377 6 5 2000";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
int main();

extern unsigned char* _ZTTNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[10] __attribute__((aligned(8)));

extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int val2;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ ss3;
  int c4 = 0;
  __retval1 = c4;
  int t5 = _ZNSt8ios_base2inE_const;
  int t6 = _ZNSt8ios_base3outE_const;
  int std7 = __VERIFIER_nondet_int();
  // externalized std:: op: std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream(std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&ss3, sizeof(ss3));
    struct std__basic_ostream_char__std__char_traits_char__* base8 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(ss3) + 16);
    char* cast9 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std10;
    __VERIFIER_nondet_memory(&std10, sizeof(std10));
      int n11;
      int c12 = 0;
      n11 = c12;
      while (1) {
        int t14 = n11;
        int c15 = 6;
        _Bool c16 = ((t14 < c15)) ? 1 : 0;
        if (!c16) break;
          struct std__basic_istream_char__std__char_traits_char__* base17 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(ss3) + 0);
          struct std__basic_istream_char__std__char_traits_char__* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          int t19 = val2;
          int c20 = 2;
          int b21 = t19 * c20;
          struct std__basic_ostream_char__std__char_traits_char__* std22;
          __VERIFIER_nondet_memory(&std22, sizeof(std22));
          struct std__basic_ostream_char__std__char_traits_char__* std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
      for_step13: ;
        int t24 = n11;
        int u25 = t24 + 1;
        n11 = u25;
      }
    int c26 = 0;
    __retval1 = c26;
    int t27 = __retval1;
    int ret_val28 = t27;
    {
      // externalized std:: op: std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()
      __VERIFIER_nondet_memory(&ss3, sizeof(ss3));
    }
    return ret_val28;
  int t29 = __retval1;
  return t29;
}

