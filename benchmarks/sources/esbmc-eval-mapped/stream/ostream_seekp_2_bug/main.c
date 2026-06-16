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
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
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
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t _M_state; };
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
char _str[5] = "test";
char _str_1[17] = "This is an apple";
char _str_2[22] = "outfile.tellp() != 16";
char _str_3[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/ostream_seekp_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[21] = "outfile.tellp() != 9";
char _str_5[5] = " sam";
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  long pos2;
  struct std__basic_ofstream_char__std__char_traits_char__ outfile3;
  struct std__fpos___mbstate_t_ ref_tmp04;
  struct std__fpos___mbstate_t_ ref_tmp15;
  struct std__fpos___mbstate_t_ agg_tmp06;
  struct std__fpos___mbstate_t_ ref_tmp27;
  int c8 = 0;
  __retval1 = c8;
  // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::basic_ofstream()
  __VERIFIER_nondet_memory(&outfile3, sizeof(outfile3));
    char* cast9 = (char*)&(_str);
    int t10 = _ZNSt8ios_base3outE_const;
    // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::open(char const*, std::_Ios_Openmode)
    __VERIFIER_nondet_memory(&outfile3, sizeof(outfile3));
    __VERIFIER_nondet_memory(cast9, sizeof(*cast9));
    struct std__basic_ostream_char__std__char_traits_char__* base11 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outfile3) + 0);
    char* cast12 = (char*)&(_str_1);
    long c13 = 16;
    struct std__basic_ostream_char__std__char_traits_char__* std14;
    __VERIFIER_nondet_memory(&std14, sizeof(std14));
    struct std__basic_ostream_char__std__char_traits_char__* base15 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outfile3) + 0);
    struct std__fpos___mbstate_t_ std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    ref_tmp04 = std16;
    long std17 = __VERIFIER_nondet_long();
    long c18 = 16;
    _Bool c19 = ((std17 != c18)) ? 1 : 0;
    if (c19) {
    } else {
      char* cast20 = (char*)&(_str_2);
      char* c21 = (char*)_str_3;
      unsigned int c22 = 23;
      char* cast23 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast20, c21, c22, cast23);
    }
    struct std__basic_ostream_char__std__char_traits_char__* base24 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outfile3) + 0);
    struct std__fpos___mbstate_t_ std25;
    __VERIFIER_nondet_memory(&std25, sizeof(std25));
    ref_tmp15 = std25;
    long std26 = __VERIFIER_nondet_long();
    pos2 = std26;
    struct std__basic_ostream_char__std__char_traits_char__* base27 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outfile3) + 0);
    long t28 = pos2;
    long c29 = 7;
    long b30 = t28 - c29;
    // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
    __VERIFIER_nondet_memory(&agg_tmp06, sizeof(agg_tmp06));
    struct std__fpos___mbstate_t_ t31 = agg_tmp06;
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    struct std__basic_ostream_char__std__char_traits_char__* base33 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outfile3) + 0);
    struct std__fpos___mbstate_t_ std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    ref_tmp27 = std34;
    long std35 = __VERIFIER_nondet_long();
    long c36 = 9;
    _Bool c37 = ((std35 != c36)) ? 1 : 0;
    if (c37) {
    } else {
      char* cast38 = (char*)&(_str_4);
      char* c39 = (char*)_str_3;
      unsigned int c40 = 27;
      char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast38, c39, c40, cast41);
    }
    struct std__basic_ostream_char__std__char_traits_char__* base42 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outfile3) + 0);
    char* cast43 = (char*)&(_str_5);
    long c44 = 4;
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::close()
    __VERIFIER_nondet_memory(&outfile3, sizeof(outfile3));
    int c46 = 0;
    __retval1 = c46;
    int t47 = __retval1;
    int ret_val48 = t47;
    {
      // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
      __VERIFIER_nondet_memory(&outfile3, sizeof(outfile3));
    }
    return ret_val48;
  int t49 = __retval1;
  return t49;
}

