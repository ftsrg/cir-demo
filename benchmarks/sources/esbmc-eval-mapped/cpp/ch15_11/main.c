/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; int _M_mode; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ _M_string; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ _M_stringbuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[30] = "Output of several data types ";
char _str_1[28] = "to an ostringstream object:";
char _str_2[18] = "\n        double: ";
char _str_3[18] = "\n           int: ";
char _str_4[18] = "\naddress of int: ";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[24] = "outputString contains:\n";
char _str_6[23] = "\nmore characters added";
char _str_7[39] = "\n\nafter additional stream insertions,\n";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
extern void *_ZTVNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
char _str_10[25] = "basic_string::_M_replace";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
int main();

extern unsigned char* _ZTTNSt7__cxx1119basic_ostringstreamIcSt11char_traitsIcESaIcEEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_ostringstream_char__std__char_traits_char___std__allocator_char__ outputString2;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string13;
  struct std__allocator_char_ ref_tmp04;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string25;
  struct std__allocator_char_ ref_tmp16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string37;
  struct std__allocator_char_ ref_tmp28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string49;
  struct std__allocator_char_ ref_tmp310;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string511;
  struct std__allocator_char_ ref_tmp412;
  double double113;
  int integer14;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp515;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup16;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp617;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup18;
  int c19 = 0;
  __retval1 = c19;
  // externalized std:: op: std::__cxx11::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >::basic_ostringstream()
  __VERIFIER_nondet_memory(&outputString2, sizeof(outputString2));
    char* cast20 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&string13, sizeof(string13));
      __VERIFIER_nondet_memory(cast20, sizeof(*cast20));
      __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp04, sizeof(ref_tmp04));
    }
      char* cast21 = (char*)&(_str_1);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&string25, sizeof(string25));
        __VERIFIER_nondet_memory(cast21, sizeof(*cast21));
        __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
      }
        char* cast22 = (char*)&(_str_2);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&string37, sizeof(string37));
          __VERIFIER_nondet_memory(cast22, sizeof(*cast22));
          __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp28, sizeof(ref_tmp28));
        }
          char* cast23 = (char*)&(_str_3);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp310, sizeof(ref_tmp310));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&string49, sizeof(string49));
            __VERIFIER_nondet_memory(cast23, sizeof(*cast23));
            __VERIFIER_nondet_memory(&ref_tmp310, sizeof(ref_tmp310));
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp310, sizeof(ref_tmp310));
          }
            char* cast24 = (char*)&(_str_4);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp412, sizeof(ref_tmp412));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&string511, sizeof(string511));
              __VERIFIER_nondet_memory(cast24, sizeof(*cast24));
              __VERIFIER_nondet_memory(&ref_tmp412, sizeof(ref_tmp412));
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp412, sizeof(ref_tmp412));
            }
              double c25 = 0x1.edd3a92a30553p6;
              double113 = c25;
              int c26 = 22;
              integer14 = c26;
              struct std__basic_ostream_char__std__char_traits_char__* base27 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outputString2) + 0);
              struct std__basic_ostream_char__std__char_traits_char__* std28;
              __VERIFIER_nondet_memory(&std28, sizeof(std28));
              struct std__basic_ostream_char__std__char_traits_char__* std29;
              __VERIFIER_nondet_memory(&std29, sizeof(std29));
              struct std__basic_ostream_char__std__char_traits_char__* std30;
              __VERIFIER_nondet_memory(&std30, sizeof(std30));
              double t31 = double113;
              struct std__basic_ostream_char__std__char_traits_char__* std32;
              __VERIFIER_nondet_memory(&std32, sizeof(std32));
              struct std__basic_ostream_char__std__char_traits_char__* std33;
              __VERIFIER_nondet_memory(&std33, sizeof(std33));
              int t34 = integer14;
              struct std__basic_ostream_char__std__char_traits_char__* std35;
              __VERIFIER_nondet_memory(&std35, sizeof(std35));
              struct std__basic_ostream_char__std__char_traits_char__* std36;
              __VERIFIER_nondet_memory(&std36, sizeof(std36));
              void* cast37 = (void*)&(integer14);
              struct std__basic_ostream_char__std__char_traits_char__* std38;
              __VERIFIER_nondet_memory(&std38, sizeof(std38));
              char* cast39 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* std40;
              __VERIFIER_nondet_memory(&std40, sizeof(std40));
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std41;
              __VERIFIER_nondet_memory(&std41, sizeof(std41));
              ref_tmp515 = std41;
                struct std__basic_ostream_char__std__char_traits_char__* std42;
                __VERIFIER_nondet_memory(&std42, sizeof(std42));
                tmp_exprcleanup16 = std42;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp515, sizeof(ref_tmp515));
              }
              struct std__basic_ostream_char__std__char_traits_char__* t43 = tmp_exprcleanup16;
              struct std__basic_ostream_char__std__char_traits_char__* base44 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outputString2) + 0);
              char* cast45 = (char*)&(_str_6);
              struct std__basic_ostream_char__std__char_traits_char__* std46;
              __VERIFIER_nondet_memory(&std46, sizeof(std46));
              char* cast47 = (char*)&(_str_7);
              struct std__basic_ostream_char__std__char_traits_char__* std48;
              __VERIFIER_nondet_memory(&std48, sizeof(std48));
              char* cast49 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* std50;
              __VERIFIER_nondet_memory(&std50, sizeof(std50));
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std51;
              __VERIFIER_nondet_memory(&std51, sizeof(std51));
              ref_tmp617 = std51;
                struct std__basic_ostream_char__std__char_traits_char__* std52;
                __VERIFIER_nondet_memory(&std52, sizeof(std52));
                struct std__basic_ostream_char__std__char_traits_char__* std53;
                __VERIFIER_nondet_memory(&std53, sizeof(std53));
                tmp_exprcleanup18 = std53;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&ref_tmp617, sizeof(ref_tmp617));
              }
              struct std__basic_ostream_char__std__char_traits_char__* t54 = tmp_exprcleanup18;
              int c55 = 0;
              __retval1 = c55;
              int t56 = __retval1;
              int ret_val57 = t56;
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&string511, sizeof(string511));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&string49, sizeof(string49));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&string37, sizeof(string37));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&string25, sizeof(string25));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&string13, sizeof(string13));
              }
              {
                // externalized std:: op: std::__cxx11::basic_ostringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_ostringstream()
                __VERIFIER_nondet_memory(&outputString2, sizeof(outputString2));
              }
              return ret_val57;
  int t58 = __retval1;
  return t58;
}

