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
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
union anon_0 { unsigned int __field0; char __field1[4]; };
union anon_1 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
struct anon_struct_2 { unsigned char* __field0[5]; unsigned char* __field1[5]; unsigned char* __field2[5]; };
struct anon_struct_3 { unsigned char* __field0[16]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_1 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* _M_in_beg; char* _M_in_cur; char* _M_in_end; char* _M_out_beg; char* _M_out_cur; char* _M_out_end; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; int _M_mode; struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ _M_string; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_iostream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_ostream_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ { struct std__basic_iostream_char__std__char_traits_char__ __field0; struct std____cxx11__basic_stringbuf_char__std__char_traits_char___std__allocator_char__ _M_stringbuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[6] = "input";
int _ZL4ROWS __attribute__((aligned(4))) = 6;
int _ZL8BUFFSIZE __attribute__((aligned(4))) = 80;
int _ZL4COLS __attribute__((aligned(4))) = 5;
char _str_1[1];
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[2] = " ";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVNSt7__cxx1115basic_stringbufIcSt11char_traitsIcESaIcEEE[];
extern void *_ZTVSt15basic_streambufIcSt11char_traitsIcEE[];
extern int atoi(char* p0);
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));
extern unsigned char* _ZTTNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEE[10] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int array2[6][5];
  char buff3[80];
  struct std__basic_ifstream_char__std__char_traits_char__ infile4;
  struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__ ss5;
  int c6 = 0;
  __retval1 = c6;
  char* cast7 = (char*)&(_str);
  int t8 = _ZNSt8ios_base2inE_const;
  // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&infile4, sizeof(infile4));
  __VERIFIER_nondet_memory(cast7, sizeof(*cast7));
    // externalized std:: op: std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::basic_stringstream()
    __VERIFIER_nondet_memory(&ss5, sizeof(ss5));
        int row9;
        int c10 = 0;
        row9 = c10;
        while (1) {
          int t12 = row9;
          int t13 = _ZL4ROWS;
          _Bool c14 = ((t12 < t13)) ? 1 : 0;
          if (!c14) break;
            struct std__basic_istream_char__std__char_traits_char__* base15 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(infile4) + 0);
            char* cast16 = (char*)&(buff3);
            int t17 = _ZL8BUFFSIZE;
            long cast18 = (long)t17;
            struct std__basic_istream_char__std__char_traits_char__* std19;
            __VERIFIER_nondet_memory(&std19, sizeof(std19));
            struct std__basic_ostream_char__std__char_traits_char__* base20 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(ss5) + 16);
            char* cast21 = (char*)&(buff3);
            struct std__basic_ostream_char__std__char_traits_char__* std22;
            __VERIFIER_nondet_memory(&std22, sizeof(std22));
              int col23;
              int c24 = 0;
              col23 = c24;
              while (1) {
                int t26 = col23;
                int t27 = _ZL4COLS;
                _Bool c28 = ((t26 < t27)) ? 1 : 0;
                if (!c28) break;
                  struct std__basic_istream_char__std__char_traits_char__* base29 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(ss5) + 0);
                  char* cast30 = (char*)&(buff3);
                  long c31 = 6;
                  char c32 = 44;
                  struct std__basic_istream_char__std__char_traits_char__* std33;
                  __VERIFIER_nondet_memory(&std33, sizeof(std33));
                  char* cast34 = (char*)&(buff3);
                  int r35 = atoi(cast34);
                  int t36 = col23;
                  long cast37 = (long)t36;
                  int t38 = row9;
                  long cast39 = (long)t38;
                  array2[cast39][cast37] = r35;
              for_step25: ;
                int t40 = col23;
                int u41 = t40 + 1;
                col23 = u41;
              }
            struct std__basic_ostream_char__std__char_traits_char__* base42 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(ss5) + 16);
            char* cast43 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std44;
            __VERIFIER_nondet_memory(&std44, sizeof(std44));
            void** v45 = (void**)&(ss5);
            void* v46 = *((void**)v45);
            unsigned char* cast47 = (unsigned char*)v46;
            long c48 = -24;
            unsigned char* ptr49 = &(cast47)[c48];
            long* cast50 = (long*)ptr49;
            long t51 = *cast50;
            unsigned char* cast52 = (unsigned char*)&(ss5);
            unsigned char* ptr53 = &(cast52)[t51];
            struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__* cast54 = (struct std____cxx11__basic_stringstream_char__std__char_traits_char___std__allocator_char__*)ptr53;
            struct std__basic_ios_char__std__char_traits_char__* cast55 = (struct std__basic_ios_char__std__char_traits_char__*)cast54;
            int t56 = _ZNSt8ios_base7goodbitE_const;
            // externalized std:: op: std::basic_ios<char, std::char_traits<char> >::clear(std::_Ios_Iostate)
            __VERIFIER_nondet_memory(cast55, sizeof(*cast55));
        for_step11: ;
          int t57 = row9;
          int u58 = t57 + 1;
          row9 = u58;
        }
        int row59;
        int c60 = 0;
        row59 = c60;
        while (1) {
          int t62 = row59;
          int t63 = _ZL4ROWS;
          _Bool c64 = ((t62 < t63)) ? 1 : 0;
          if (!c64) break;
              int col65;
              int c66 = 0;
              col65 = c66;
              while (1) {
                int t68 = col65;
                int t69 = _ZL4COLS;
                _Bool c70 = ((t68 < t69)) ? 1 : 0;
                if (!c70) break;
                  int t71 = col65;
                  long cast72 = (long)t71;
                  int t73 = row59;
                  long cast74 = (long)t73;
                  int t75 = array2[cast74][cast72];
                  struct std__basic_ostream_char__std__char_traits_char__* std76;
                  __VERIFIER_nondet_memory(&std76, sizeof(std76));
                  char* cast77 = (char*)&(_str_2);
                  struct std__basic_ostream_char__std__char_traits_char__* std78;
                  __VERIFIER_nondet_memory(&std78, sizeof(std78));
              for_step67: ;
                int t79 = col65;
                int u80 = t79 + 1;
                col65 = u80;
              }
            struct std__basic_ostream_char__std__char_traits_char__* std81;
            __VERIFIER_nondet_memory(&std81, sizeof(std81));
        for_step61: ;
          int t82 = row59;
          int u83 = t82 + 1;
          row59 = u83;
        }
      // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::close()
      __VERIFIER_nondet_memory(&infile4, sizeof(infile4));
    {
      // externalized std:: op: std::__cxx11::basic_stringstream<char, std::char_traits<char>, std::allocator<char> >::~basic_stringstream()
      __VERIFIER_nondet_memory(&ss5, sizeof(ss5));
    }
  {
    // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
    __VERIFIER_nondet_memory(&infile4, sizeof(infile4));
  }
  int t84 = __retval1;
  return t84;
}

