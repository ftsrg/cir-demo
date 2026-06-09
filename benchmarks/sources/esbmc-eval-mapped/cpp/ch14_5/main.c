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
struct ClientData { int __field0; char __field1[15]; char __field2[10]; double __field3; };
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
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
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_1 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base6binaryE_const __attribute__((aligned(4))) = 4;
char _str[11] = "credit.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[26] = "File could not be opened.";
char _str_2[1];
char _str_3[50] = "basic_string: construction from null is not valid";
char _str_4[24] = "basic_string::_M_create";
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void exit(int p0);
extern void ClientData__ClientData(struct ClientData* p0, int p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p3, double p4);
int main();

extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__basic_ofstream_char__std__char_traits_char__ outCredit2;
  struct ClientData blankClient3;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp04;
  struct std__allocator_char_ ref_tmp05;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp16;
  struct std__allocator_char_ ref_tmp17;
  int c8 = 0;
  __retval1 = c8;
  char* cast9 = (char*)&(_str);
  int t10 = _ZNSt8ios_base6binaryE_const;
  // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::basic_ofstream(char const*, std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&outCredit2, sizeof(outCredit2));
  __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
      void** v11 = (void**)&(outCredit2);
      void* v12 = *((void**)v11);
      unsigned char* cast13 = (unsigned char*)v12;
      long c14 = -24;
      unsigned char* ptr15 = &(cast13)[c14];
      long* cast16 = (long*)ptr15;
      long t17 = *cast16;
      unsigned char* cast18 = (unsigned char*)&(outCredit2);
      unsigned char* ptr19 = &(cast18)[t17];
      struct std__basic_ofstream_char__std__char_traits_char__* cast20 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr19;
      struct std__basic_ios_char__std__char_traits_char__* cast21 = (struct std__basic_ios_char__std__char_traits_char__*)cast20;
      _Bool std22;
      __VERIFIER_nondet_memory(&std22, sizeof(std22));
      if (std22) {
        char* cast23 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
        struct std__basic_ostream_char__std__char_traits_char__* std25;
        __VERIFIER_nondet_memory(&std25, sizeof(std25));
        int c26 = 1;
        exit(c26);
      }
    int c27 = 0;
    char* cast28 = (char*)&(_str_2);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&agg_tmp04, sizeof(agg_tmp04));
      __VERIFIER_nondet_memory(cast28, sizeof(*cast28));
      __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
        char* cast29 = (char*)&(_str_2);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&agg_tmp16, sizeof(agg_tmp16));
          __VERIFIER_nondet_memory(cast29, sizeof(*cast29));
          __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
            double c30 = 0x0p0;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t31 = agg_tmp04;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t32 = agg_tmp16;
            ClientData__ClientData(&blankClient3, c27, t31, t32, c30);
            if (__cir_exc_active) {
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&agg_tmp16, sizeof(agg_tmp16));
              }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&agg_tmp04, sizeof(agg_tmp04));
              }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
              }
              {
                // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                __VERIFIER_nondet_memory(&outCredit2, sizeof(outCredit2));
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&agg_tmp16, sizeof(agg_tmp16));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&agg_tmp04, sizeof(agg_tmp04));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    }
      int i33;
      int c34 = 0;
      i33 = c34;
      while (1) {
        int t36 = i33;
        int c37 = 100;
        _Bool c38 = ((t36 < c37)) ? 1 : 0;
        if (!c38) break;
        struct std__basic_ostream_char__std__char_traits_char__* base39 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outCredit2) + 0);
        char* cast40 = (char*)&(blankClient3);
        long c41 = 40;
        struct std__basic_ostream_char__std__char_traits_char__* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
      for_step35: ;
        int t43 = i33;
        int u44 = t43 + 1;
        i33 = u44;
      }
    int c45 = 0;
    __retval1 = c45;
    int t46 = __retval1;
    int ret_val47 = t46;
    {
      // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
      __VERIFIER_nondet_memory(&outCredit2, sizeof(outCredit2));
    }
    return ret_val47;
  int t48 = __retval1;
  return t48;
}

