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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
union anon_0 { unsigned int __field0; char __field1[4]; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; unsigned char* __field2[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_iostream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_ostream_char__std__char_traits_char__ __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_fstream_char__std__char_traits_char__ { struct std__basic_iostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[5] = "test";
char _str_1[18] = "filestr.is_open()";
char _str_2[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/fstream_is_open_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[23] = "File successfully open";
char _str_4[21] = "!(filestr.is_open())";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[19] = "Error opening file";
extern void *_ZTVSt13basic_fstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern unsigned char* _ZTTSt13basic_fstreamIcSt11char_traitsIcEE[10] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__basic_fstream_char__std__char_traits_char__ filestr2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::basic_fstream()
  __VERIFIER_nondet_memory(&filestr2, sizeof(filestr2));
    char* cast4 = (char*)&(_str);
    int t5 = _ZNSt8ios_base2inE_const;
    int t6 = _ZNSt8ios_base3outE_const;
    int std7 = __VERIFIER_nondet_int();
    // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::open(char const*, std::_Ios_Openmode)
    __VERIFIER_nondet_memory(&filestr2, sizeof(filestr2));
    __VERIFIER_nondet_memory(cast4, sizeof(*cast4));
    _Bool std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
    if (std8) {
    } else {
      char* cast9 = (char*)&(_str_1);
      char* c10 = _str_2;
      unsigned int c11 = 18;
      char* cast12 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast9, c10, c11, cast12);
    }
      _Bool std13;
      __VERIFIER_nondet_memory(&std13, sizeof(std13));
      if (std13) {
        struct std__basic_ostream_char__std__char_traits_char__* base14 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(filestr2) + 16);
        char* cast15 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std16;
        __VERIFIER_nondet_memory(&std16, sizeof(std16));
        // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::close()
        __VERIFIER_nondet_memory(&filestr2, sizeof(filestr2));
        _Bool std17;
        __VERIFIER_nondet_memory(&std17, sizeof(std17));
        _Bool u18 = !std17;
        if (u18) {
        } else {
          char* cast19 = (char*)&(_str_4);
          char* c20 = _str_2;
          unsigned int c21 = 23;
          char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast19, c20, c21, cast22);
        }
      } else {
        char* cast23 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
      }
    int c25 = 0;
    __retval1 = c25;
    int t26 = __retval1;
    int ret_val27 = t26;
    {
      // externalized std:: op: std::basic_fstream<char, std::char_traits<char> >::~basic_fstream()
      __VERIFIER_nondet_memory(&filestr2, sizeof(filestr2));
    }
    return ret_val27;
  int t28 = __retval1;
  return t28;
}

