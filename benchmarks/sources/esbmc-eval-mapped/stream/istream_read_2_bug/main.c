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
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t __field1; };
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__;
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
unsigned int _ZNSt8ios_base3begE_const __attribute__((aligned(4))) = 0;
unsigned int _ZNSt8ios_base3endE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6binaryE_const __attribute__((aligned(4))) = 4;
char _str[5] = "test";
char _str_1[30] = "!(length == (int)is.gcount())";
char _str_2[113] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stream/istream_read_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete___2(void* p0, unsigned long p1) { free(p0); }
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void operator_delete__(void* p0) { free(p0); }
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern long __VERIFIER_nondet_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int length2;
  char* buffer3;
  struct std__basic_ifstream_char__std__char_traits_char__ is4;
  struct std__fpos___mbstate_t_ ref_tmp05;
  char* __new_result6;
  int c7 = 0;
  __retval1 = c7;
  // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream()
  __VERIFIER_nondet_memory(&is4, sizeof(is4));
    char* cast8 = (char*)&(_str);
    int t9 = _ZNSt8ios_base6binaryE_const;
    // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::open(char const*, std::_Ios_Openmode)
    __VERIFIER_nondet_memory(&is4, sizeof(is4));
    __VERIFIER_nondet_memory(cast8, sizeof(*cast8));
    struct std__basic_istream_char__std__char_traits_char__* base10 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is4) + 0);
    long c11 = 0;
    unsigned int t12 = _ZNSt8ios_base3endE_const;
    struct std__basic_istream_char__std__char_traits_char__* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    struct std__basic_istream_char__std__char_traits_char__* base14 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is4) + 0);
    struct std__fpos___mbstate_t_ std15;
    __VERIFIER_nondet_memory(&std15, sizeof(std15));
    ref_tmp05 = std15;
    long std16 = __VERIFIER_nondet_long();
    int cast17 = (int)std16;
    length2 = cast17;
    struct std__basic_istream_char__std__char_traits_char__* base18 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is4) + 0);
    long c19 = 0;
    unsigned int t20 = _ZNSt8ios_base3begE_const;
    struct std__basic_istream_char__std__char_traits_char__* std21;
    __VERIFIER_nondet_memory(&std21, sizeof(std21));
    int t22 = length2;
    unsigned long cast23 = (unsigned long)t22;
    void* r24 = operator_new__(cast23);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
        __VERIFIER_nondet_memory(&is4, sizeof(is4));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      char* cast25 = (char*)r24;
      __new_result6 = cast25;
    char* t26 = __new_result6;
    buffer3 = t26;
    struct std__basic_istream_char__std__char_traits_char__* base27 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is4) + 0);
    char* t28 = buffer3;
    int t29 = length2;
    long cast30 = (long)t29;
    struct std__basic_istream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    int t32 = length2;
    struct std__basic_istream_char__std__char_traits_char__* base33 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(is4) + 0);
    long std34 = __VERIFIER_nondet_long();
    int cast35 = (int)std34;
    _Bool c36 = ((t32 == cast35)) ? 1 : 0;
    _Bool u37 = !c36;
    if (u37) {
    } else {
      char* cast38 = (char*)&(_str_1);
      char* c39 = _str_2;
      unsigned int c40 = 32;
      char* cast41 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast38, c39, c40, cast41);
    }
    // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::close()
    __VERIFIER_nondet_memory(&is4, sizeof(is4));
    char* t42 = buffer3;
    int t43 = length2;
    long cast44 = (long)t43;
    struct std__basic_ostream_char__std__char_traits_char__* std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    char* t46 = buffer3;
    char* c47 = ((void*)0);
    _Bool c48 = ((t46 != c47)) ? 1 : 0;
    if (c48) {
      void* cast49 = (void*)t46;
      {
        operator_delete__(cast49);
      }
    }
    int c50 = 0;
    __retval1 = c50;
    int t51 = __retval1;
    int ret_val52 = t51;
    {
      // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
      __VERIFIER_nondet_memory(&is4, sizeof(is4));
    }
    return ret_val52;
  int t53 = __retval1;
  return t53;
}

