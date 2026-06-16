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
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
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
char _str[17] = "!content.empty()";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector51/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[9] = "test.bin";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "vector::reserve";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__vector_int__std__allocator_int__ content2;
  unsigned long filesize3;
  struct std__basic_ifstream_char__std__char_traits_char__ file4;
  int c5 = 0;
  __retval1 = c5;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&content2, sizeof(content2));
    _Bool std6;
    __VERIFIER_nondet_memory(&std6, sizeof(std6));
    _Bool u7 = !std6;
    if (u7) {
    } else {
      char* cast8 = (char*)&(_str);
      char* c9 = (char*)_str_1;
      unsigned int c10 = 19;
      char* cast11 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast8, c9, c10, cast11);
    }
    char* cast12 = (char*)&(_str_2);
    int t13 = _ZNSt8ios_base2inE_const;
    int t14 = _ZNSt8ios_base3ateE_const;
    int std15 = __VERIFIER_nondet_int();
    int t16 = _ZNSt8ios_base6binaryE_const;
    int std17 = __VERIFIER_nondet_int();
    // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
    __VERIFIER_nondet_memory(&file4, sizeof(file4));
    __VERIFIER_nondet_memory(cast12, sizeof(*cast12));
        _Bool std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
        if (std18) {
          struct std__fpos___mbstate_t_ ref_tmp019;
          struct std__fpos___mbstate_t_ agg_tmp020;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it21;
          struct std__basic_istream_char__std__char_traits_char__* base22 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file4) + 0);
          struct std__fpos___mbstate_t_ std23;
          __VERIFIER_nondet_memory(&std23, sizeof(std23));
          ref_tmp019 = std23;
          long std24 = __VERIFIER_nondet_long();
          unsigned long cast25 = (unsigned long)std24;
          filesize3 = cast25;
          unsigned long t26 = filesize3;
          // externalized std:: op: std::vector<int, std::allocator<int> >::reserve(unsigned long)
          __VERIFIER_nondet_memory(&content2, sizeof(content2));
          struct std__basic_istream_char__std__char_traits_char__* base27 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file4) + 0);
          long c28 = 0;
          // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
          __VERIFIER_nondet_memory(&agg_tmp020, sizeof(agg_tmp020));
          struct std__fpos___mbstate_t_ t29 = agg_tmp020;
          struct std__basic_istream_char__std__char_traits_char__* std30;
          __VERIFIER_nondet_memory(&std30, sizeof(std30));
            while (1) {
              void** v31 = (void**)&(file4);
              void* v32 = *((void**)v31);
              unsigned char* cast33 = (unsigned char*)v32;
              long c34 = -24;
              unsigned char* ptr35 = &(cast33)[c34];
              long* cast36 = (long*)ptr35;
              long t37 = *cast36;
              unsigned char* cast38 = (unsigned char*)&(file4);
              unsigned char* ptr39 = &(cast38)[t37];
              struct std__basic_ifstream_char__std__char_traits_char__* cast40 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr39;
              struct std__basic_ios_char__std__char_traits_char__* cast41 = (struct std__basic_ios_char__std__char_traits_char__*)cast40;
              _Bool std42;
              __VERIFIER_nondet_memory(&std42, sizeof(std42));
              _Bool u43 = !std42;
              if (!u43) break;
                int ref_tmp144;
                struct std__basic_istream_char__std__char_traits_char__* base45 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(file4) + 0);
                int std46 = __VERIFIER_nondet_int();
                ref_tmp144 = std46;
                // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
                __VERIFIER_nondet_memory(&content2, sizeof(content2));
                __VERIFIER_nondet_memory(&ref_tmp144, sizeof(ref_tmp144));
            }
          // externalized std:: op: __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >::__normal_iterator()
          __VERIFIER_nondet_memory(&it21, sizeof(it21));
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp247;
            struct std__strong_ordering agg_tmp148;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp349;
            struct std____cmp_cat____unspec agg_tmp250;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp351;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std52;
            __VERIFIER_nondet_memory(&std52, sizeof(std52));
            ref_tmp247 = std52;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* std53;
            __VERIFIER_nondet_memory(&std53, sizeof(std53));
            while (1) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std55;
              __VERIFIER_nondet_memory(&std55, sizeof(std55));
              ref_tmp349 = std55;
              struct std__strong_ordering std56;
              __VERIFIER_nondet_memory(&std56, sizeof(std56));
              agg_tmp148 = std56;
              agg_tmp250 = *&__const_main_agg_tmp2; // copy
              struct std__strong_ordering t57 = agg_tmp148;
              struct std____cmp_cat____unspec t58 = agg_tmp250;
              _Bool std59;
              __VERIFIER_nondet_memory(&std59, sizeof(std59));
              if (!std59) break;
              struct std__basic_ostream_char__std__char_traits_char__* std60;
              __VERIFIER_nondet_memory(&std60, sizeof(std60));
              int* std61;
              __VERIFIER_nondet_memory(&std61, sizeof(std61));
              int t62 = *std61;
              struct std__basic_ostream_char__std__char_traits_char__* std63;
              __VERIFIER_nondet_memory(&std63, sizeof(std63));
            for_step54: ;
              int c64 = 0;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std65;
              __VERIFIER_nondet_memory(&std65, sizeof(std65));
              agg_tmp351 = std65;
            }
        }
      int c66 = 0;
      __retval1 = c66;
      int t67 = __retval1;
      int ret_val68 = t67;
      {
        // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
        __VERIFIER_nondet_memory(&file4, sizeof(file4));
      }
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&content2, sizeof(content2));
      }
      return ret_val68;
  int t69 = __retval1;
  return t69;
}

