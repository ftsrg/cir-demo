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
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
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
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[6] = "23.13";
char _str_1[21] = "oss.str() == \"23.13\"";
char _str_2[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/sstream_str_double/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[12] = "23.1345.543";
char _str_4[27] = "oss.str() == \"23.1345.543\"";
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
char _str_5[25] = "basic_string::_M_replace";
char _str_6[24] = "basic_string::_M_create";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern unsigned char* _ZTTNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[10] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ oss2;
  double val13;
  long double val24;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp05;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp16;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream()
  __VERIFIER_nondet_memory(&oss2, sizeof(oss2));
    double c8 = 0x1.72147ae147ae1p4;
    val13 = c8;
    double c9 = 0x1.6c5810624dd2fp5;
    long double cast10 = (long double)c9;
    val24 = cast10;
    struct std__basic_ostream_char__std__char_traits_char__* base11 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss2) + 16);
    double t12 = val13;
    struct std__basic_ostream_char__std__char_traits_char__* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    ref_tmp05 = std14;
      char* cast15 = (char*)&(_str);
      _Bool std16;
      __VERIFIER_nondet_memory(&std16, sizeof(std16));
      if (std16) {
      } else {
        char* cast17 = (char*)&(_str_1);
        char* c18 = _str_2;
        unsigned int c19 = 22;
        char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast17, c18, c19, cast20);
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    }
    struct std__basic_ostream_char__std__char_traits_char__* base21 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(oss2) + 16);
    long double t22 = val24;
    struct std__basic_ostream_char__std__char_traits_char__* std23;
    __VERIFIER_nondet_memory(&std23, sizeof(std23));
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    ref_tmp16 = std24;
      char* cast25 = (char*)&(_str_3);
      _Bool std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      if (std26) {
      } else {
        char* cast27 = (char*)&(_str_4);
        char* c28 = _str_2;
        unsigned int c29 = 25;
        char* cast30 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast27, c28, c29, cast30);
      }
    {
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
      __VERIFIER_nondet_memory(&ref_tmp16, sizeof(ref_tmp16));
    }
    int c31 = 0;
    __retval1 = c31;
    int t32 = __retval1;
    int ret_val33 = t32;
    {
      // externalized std:: op: std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()
      __VERIFIER_nondet_memory(&oss2, sizeof(oss2));
    }
    return ret_val33;
  int t34 = __retval1;
  return t34;
}

