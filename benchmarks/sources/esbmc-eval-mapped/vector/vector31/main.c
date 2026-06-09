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

// Struct definitions (auto-parsed)
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
union anon_0 { unsigned int __field0; char __field1[4]; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t _M_state; };
struct std__ios_base { void* __field0; long __field1; long __field2; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
struct std____cmp_cat____unspec __const_main_agg_tmp2;
int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base9basefieldE_const __attribute__((aligned(4))) = 74;
int _ZNSt8ios_base3hexE_const __attribute__((aligned(4))) = 8;
int _ZNSt8ios_base6binaryE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3ateE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[9] = "test.bin";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[16] = "vector::reserve";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[15] = "!this->empty()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__vector_int__std__allocator_int__ content2;
  unsigned long filesize3;
  struct std__basic_ifstream_char__std__char_traits_char__ file4;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&content2, sizeof(content2));
    char* cast6 = (char*)&(_str);
    int t7 = _ZNSt8ios_base2inE_const;
    int t8 = _ZNSt8ios_base3ateE_const;
    int std9 = __VERIFIER_nondet_int();
    int t10 = _ZNSt8ios_base6binaryE_const;
    int std11 = __VERIFIER_nondet_int();
    // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
    __VERIFIER_nondet_memory(&file4, sizeof(file4));
    __VERIFIER_nondet_memory(cast6, sizeof(*cast6));
        _Bool std12;
        __VERIFIER_nondet_memory(&std12, sizeof(std12));
        if (std12) {
          struct std__fpos___mbstate_t_ ref_tmp013;
          struct std__fpos___mbstate_t_ agg_tmp014;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it15;
          struct std__basic_istream_char__std__char_traits_char__* base16 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file4) + 0);
          struct std__fpos___mbstate_t_ std17;
          __VERIFIER_nondet_memory(&std17, sizeof(std17));
          ref_tmp013 = std17;
          long std18 = __VERIFIER_nondet_long();
          unsigned long cast19 = (unsigned long)std18;
          filesize3 = cast19;
          unsigned long t20 = filesize3;
          // externalized std:: op: std::vector<int, std::allocator<int> >::reserve(unsigned long)
          __VERIFIER_nondet_memory(&content2, sizeof(content2));
          struct std__basic_istream_char__std__char_traits_char__* base21 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file4) + 0);
          long c22 = 0;
          // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
          __VERIFIER_nondet_memory(&agg_tmp014, sizeof(agg_tmp014));
          struct std__fpos___mbstate_t_ t23 = agg_tmp014;
          struct std__basic_istream_char__std__char_traits_char__* std24;
          __VERIFIER_nondet_memory(&std24, sizeof(std24));
            while (1) {
              void** v25 = (void**)&(file4);
              void* v26 = *((void**)v25);
              unsigned char* cast27 = (unsigned char*)v26;
              long c28 = -24;
              unsigned char* ptr29 = &(cast27)[c28];
              long* cast30 = (long*)ptr29;
              long t31 = *cast30;
              unsigned char* cast32 = (unsigned char*)&(file4);
              unsigned char* ptr33 = &(cast32)[t31];
              struct std__basic_ifstream_char__std__char_traits_char__* cast34 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr33;
              struct std__basic_ios_char__std__char_traits_char__* cast35 = (struct std__basic_ios_char__std__char_traits_char__*)cast34;
              _Bool std36;
              __VERIFIER_nondet_memory(&std36, sizeof(std36));
              _Bool u37 = !std36;
              if (!u37) break;
                int ref_tmp138;
                struct std__basic_istream_char__std__char_traits_char__* base39 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file4) + 0);
                int std40 = __VERIFIER_nondet_int();
                ref_tmp138 = std40;
                // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
                __VERIFIER_nondet_memory(&content2, sizeof(content2));
                __VERIFIER_nondet_memory(&ref_tmp138, sizeof(ref_tmp138));
            }
          // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
          __VERIFIER_nondet_memory(&it15, sizeof(it15));
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp241;
            struct std__strong_ordering agg_tmp142;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp343;
            struct std____cmp_cat____unspec agg_tmp244;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp345;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
            __VERIFIER_nondet_memory(&std46, sizeof(std46));
            ref_tmp241 = std46;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std47;
            __VERIFIER_nondet_memory(&std47, sizeof(std47));
            while (1) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std49;
              __VERIFIER_nondet_memory(&std49, sizeof(std49));
              ref_tmp343 = std49;
              struct std__strong_ordering std50;
              __VERIFIER_nondet_memory(&std50, sizeof(std50));
              agg_tmp142 = std50;
              agg_tmp244 = *&__const_main_agg_tmp2; // copy
              struct std__strong_ordering t51 = agg_tmp142;
              struct std____cmp_cat____unspec t52 = agg_tmp244;
              _Bool std53;
              __VERIFIER_nondet_memory(&std53, sizeof(std53));
              if (!std53) break;
              struct std__basic_ostream_char__std__char_traits_char__* std54;
              __VERIFIER_nondet_memory(&std54, sizeof(std54));
              int* std55;
              __VERIFIER_nondet_memory(&std55, sizeof(std55));
              int t56 = *std55;
              struct std__basic_ostream_char__std__char_traits_char__* std57;
              __VERIFIER_nondet_memory(&std57, sizeof(std57));
            for_step48: ;
              int c58 = 0;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std59;
              __VERIFIER_nondet_memory(&std59, sizeof(std59));
              agg_tmp345 = std59;
            }
        }
      int c60 = 0;
      __retval1 = c60;
      int t61 = __retval1;
      int ret_val62 = t61;
      {
        // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
        __VERIFIER_nondet_memory(&file4, sizeof(file4));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&content2, sizeof(content2));
      }
      return ret_val62;
  int t63 = __retval1;
  return t63;
}

