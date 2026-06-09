extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
struct anon_struct_2 { unsigned char* __field0[16]; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; int _M_mode; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ _M_string; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__;
struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ _M_stringbuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3appE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3ateE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[21] = "Input test 123 4.7 A";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[36] = "The following items were extracted\n";
char _str_2[31] = "from the istringstream object:";
char _str_3[10] = "\nstring: ";
char _str_4[10] = "\n   int: ";
char _str_5[10] = "\ndouble: ";
char _str_6[10] = "\n  char: ";
char _str_7[18] = "\n\nlong value is: ";
char _str_8[23] = "\n\ninputString is empty";
char _str_9[50] = "basic_string: construction from null is not valid";
char _str_10[24] = "basic_string::_M_create";
extern void *_ZTVNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int main();

extern unsigned char* _ZTTNSt7__cxx1119basic_istringstreamIcSt11char_traitsIcESaIcEEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ input2;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__ inputString4;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string26;
  int integer7;
  double double18;
  char character9;
  long value10;
  int c11 = 0;
  __retval1 = c11;
  char* cast12 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&input2, sizeof(input2));
    __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    int t13 = _ZNSt8ios_base2inE_const;
    // externalized std:: op: std::__cxx11::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >::basic_istringstream(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::_Ios_Openmode)
    __VERIFIER_nondet_memory(&inputString4, sizeof(inputString4));
    __VERIFIER_nondet_memory(&input2, sizeof(input2));
      // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
      __VERIFIER_nondet_memory(&string15, sizeof(string15));
        // externalized std:: op: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2EvQ26is_default_constructible_vIT1_E
        __VERIFIER_nondet_memory(&string26, sizeof(string26));
          struct std__basic_istream_char__std__char_traits_char__* base14 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inputString4) + 0);
          struct std__basic_istream_char__std__char_traits_char__* std15;
          __VERIFIER_nondet_memory(&std15, sizeof(std15));
          struct std__basic_istream_char__std__char_traits_char__* std16;
          __VERIFIER_nondet_memory(&std16, sizeof(std16));
          struct std__basic_istream_char__std__char_traits_char__* std17;
          __VERIFIER_nondet_memory(&std17, sizeof(std17));
          struct std__basic_istream_char__std__char_traits_char__* std18;
          __VERIFIER_nondet_memory(&std18, sizeof(std18));
          struct std__basic_istream_char__std__char_traits_char__* std19;
          __VERIFIER_nondet_memory(&std19, sizeof(std19));
          char* cast20 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* std21;
          __VERIFIER_nondet_memory(&std21, sizeof(std21));
          char* cast22 = (char*)&(_str_2);
          struct std__basic_ostream_char__std__char_traits_char__* std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
          char* cast24 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std25;
          __VERIFIER_nondet_memory(&std25, sizeof(std25));
          struct std__basic_ostream_char__std__char_traits_char__* std26;
          __VERIFIER_nondet_memory(&std26, sizeof(std26));
          char* cast27 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* std28;
          __VERIFIER_nondet_memory(&std28, sizeof(std28));
          struct std__basic_ostream_char__std__char_traits_char__* std29;
          __VERIFIER_nondet_memory(&std29, sizeof(std29));
          char* cast30 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* std31;
          __VERIFIER_nondet_memory(&std31, sizeof(std31));
          int t32 = integer7;
          struct std__basic_ostream_char__std__char_traits_char__* std33;
          __VERIFIER_nondet_memory(&std33, sizeof(std33));
          char* cast34 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std35;
          __VERIFIER_nondet_memory(&std35, sizeof(std35));
          double t36 = double18;
          struct std__basic_ostream_char__std__char_traits_char__* std37;
          __VERIFIER_nondet_memory(&std37, sizeof(std37));
          char* cast38 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std39;
          __VERIFIER_nondet_memory(&std39, sizeof(std39));
          char t40 = character9;
          struct std__basic_ostream_char__std__char_traits_char__* std41;
          __VERIFIER_nondet_memory(&std41, sizeof(std41));
          struct std__basic_istream_char__std__char_traits_char__* base42 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inputString4) + 0);
          struct std__basic_istream_char__std__char_traits_char__* std43;
          __VERIFIER_nondet_memory(&std43, sizeof(std43));
            void** v44 = (void**)&(inputString4);
            void* v45 = *((void**)v44);
            unsigned char* cast46 = (unsigned char*)v45;
            long c47 = -24;
            unsigned char* ptr48 = &(cast46)[c47];
            long* cast49 = (long*)ptr48;
            long t50 = *cast49;
            unsigned char* cast51 = (unsigned char*)&(inputString4);
            unsigned char* ptr52 = &(cast51)[t50];
            struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__* cast53 = (struct std____cxx11__basic_istringstream_char__std__char_traits_char___std__allocator_char__*)ptr52;
            struct std__basic_ios_char__std__char_traits_char__* cast54 = (struct std__basic_ios_char__std__char_traits_char__*)cast53;
            _Bool std55;
            __VERIFIER_nondet_memory(&std55, sizeof(std55));
            if (std55) {
              char* cast56 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* std57;
              __VERIFIER_nondet_memory(&std57, sizeof(std57));
              long t58 = value10;
              struct std__basic_ostream_char__std__char_traits_char__* std59;
              __VERIFIER_nondet_memory(&std59, sizeof(std59));
              struct std__basic_ostream_char__std__char_traits_char__* std60;
              __VERIFIER_nondet_memory(&std60, sizeof(std60));
            } else {
              char* cast61 = (char*)&(_str_8);
              struct std__basic_ostream_char__std__char_traits_char__* std62;
              __VERIFIER_nondet_memory(&std62, sizeof(std62));
              struct std__basic_ostream_char__std__char_traits_char__* std63;
              __VERIFIER_nondet_memory(&std63, sizeof(std63));
            }
          int c64 = 0;
          __retval1 = c64;
          int t65 = __retval1;
          int ret_val66 = t65;
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string26, sizeof(string26));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&string15, sizeof(string15));
          }
          {
            // externalized std:: op: std::__cxx11::basic_istringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_istringstream()
            __VERIFIER_nondet_memory(&inputString4, sizeof(inputString4));
          }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&input2, sizeof(input2));
          }
          return ret_val66;
  int t67 = __retval1;
  return t67;
}

