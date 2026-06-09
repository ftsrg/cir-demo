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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[41] = "Usage: copyFile infile_name outfile_name";
char _str_1[21] = " could not be opened";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
int main(int p0, char** p1);

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));
extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: main
int main(int v0, char** v1) {
bb2:
  int argc3;
  char** argv4;
  int __retval5;
  argc3 = v0;
  argv4 = v1;
  int c6 = 0;
  __retval5 = c6;
    int t7 = argc3;
    int c8 = 3;
    _Bool c9 = ((t7 != c8)) ? 1 : 0;
    if (c9) {
      char* cast10 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* std11;
      __VERIFIER_nondet_memory(&std11, sizeof(std11));
      struct std__basic_ostream_char__std__char_traits_char__* std12;
      __VERIFIER_nondet_memory(&std12, sizeof(std12));
    } else {
      struct std__basic_ifstream_char__std__char_traits_char__ inFile13;
      struct std__basic_ofstream_char__std__char_traits_char__ outFile14;
      char c15;
      long c16 = 1;
      char** t17 = argv4;
      char** ptr18 = &(t17)[c16];
      char* t19 = *ptr18;
      int t20 = _ZNSt8ios_base2inE_const;
      // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
      __VERIFIER_nondet_memory(&inFile13, sizeof(inFile13));
      __VERIFIER_nondet_memory(t19, sizeof(*t19));
          void** v21 = (void**)&(inFile13);
          void* v22 = *((void**)v21);
          unsigned char* cast23 = (unsigned char*)v22;
          long c24 = -24;
          unsigned char* ptr25 = &(cast23)[c24];
          long* cast26 = (long*)ptr25;
          long t27 = *cast26;
          unsigned char* cast28 = (unsigned char*)&(inFile13);
          unsigned char* ptr29 = &(cast28)[t27];
          struct std__basic_ifstream_char__std__char_traits_char__* cast30 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr29;
          struct std__basic_ios_char__std__char_traits_char__* cast31 = (struct std__basic_ios_char__std__char_traits_char__*)cast30;
          _Bool std32;
          __VERIFIER_nondet_memory(&std32, sizeof(std32));
          if (std32) {
            long c33 = 1;
            char** t34 = argv4;
            char** ptr35 = &(t34)[c33];
            char* t36 = *ptr35;
            struct std__basic_ostream_char__std__char_traits_char__* std37;
            __VERIFIER_nondet_memory(&std37, sizeof(std37));
            char* cast38 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* std39;
            __VERIFIER_nondet_memory(&std39, sizeof(std39));
            struct std__basic_ostream_char__std__char_traits_char__* std40;
            __VERIFIER_nondet_memory(&std40, sizeof(std40));
            int c41 = -1;
            __retval5 = c41;
            int t42 = __retval5;
            int ret_val43 = t42;
            {
              // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
              __VERIFIER_nondet_memory(&inFile13, sizeof(inFile13));
            }
            return ret_val43;
          }
        long c44 = 2;
        char** t45 = argv4;
        char** ptr46 = &(t45)[c44];
        char* t47 = *ptr46;
        int t48 = _ZNSt8ios_base3outE_const;
        // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::basic_ofstream(char const*, std::_Ios_Openmode)
        __VERIFIER_nondet_memory(&outFile14, sizeof(outFile14));
        __VERIFIER_nondet_memory(t47, sizeof(*t47));
            void** v49 = (void**)&(outFile14);
            void* v50 = *((void**)v49);
            unsigned char* cast51 = (unsigned char*)v50;
            long c52 = -24;
            unsigned char* ptr53 = &(cast51)[c52];
            long* cast54 = (long*)ptr53;
            long t55 = *cast54;
            unsigned char* cast56 = (unsigned char*)&(outFile14);
            unsigned char* ptr57 = &(cast56)[t55];
            struct std__basic_ofstream_char__std__char_traits_char__* cast58 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr57;
            struct std__basic_ios_char__std__char_traits_char__* cast59 = (struct std__basic_ios_char__std__char_traits_char__*)cast58;
            _Bool std60;
            __VERIFIER_nondet_memory(&std60, sizeof(std60));
            if (std60) {
              long c61 = 2;
              char** t62 = argv4;
              char** ptr63 = &(t62)[c61];
              char* t64 = *ptr63;
              struct std__basic_ostream_char__std__char_traits_char__* std65;
              __VERIFIER_nondet_memory(&std65, sizeof(std65));
              char* cast66 = (char*)&(_str_1);
              struct std__basic_ostream_char__std__char_traits_char__* std67;
              __VERIFIER_nondet_memory(&std67, sizeof(std67));
              struct std__basic_ostream_char__std__char_traits_char__* std68;
              __VERIFIER_nondet_memory(&std68, sizeof(std68));
              // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::close()
              __VERIFIER_nondet_memory(&inFile13, sizeof(inFile13));
              int c69 = -2;
              __retval5 = c69;
              int t70 = __retval5;
              int ret_val71 = t70;
              {
                // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                __VERIFIER_nondet_memory(&outFile14, sizeof(outFile14));
              }
              return ret_val71;
            }
          struct std__basic_istream_char__std__char_traits_char__* base72 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inFile13) + 0);
          int std73 = __VERIFIER_nondet_int();
          char cast74 = (char)std73;
          c15 = cast74;
            while (1) {
              void** v75 = (void**)&(inFile13);
              void* v76 = *((void**)v75);
              unsigned char* cast77 = (unsigned char*)v76;
              long c78 = -24;
              unsigned char* ptr79 = &(cast77)[c78];
              long* cast80 = (long*)ptr79;
              long t81 = *cast80;
              unsigned char* cast82 = (unsigned char*)&(inFile13);
              unsigned char* ptr83 = &(cast82)[t81];
              struct std__basic_ifstream_char__std__char_traits_char__* cast84 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr83;
              struct std__basic_ios_char__std__char_traits_char__* cast85 = (struct std__basic_ios_char__std__char_traits_char__*)cast84;
              _Bool std86;
              __VERIFIER_nondet_memory(&std86, sizeof(std86));
              if (!std86) break;
                struct std__basic_ostream_char__std__char_traits_char__* base87 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outFile14) + 0);
                char t88 = c15;
                struct std__basic_ostream_char__std__char_traits_char__* std89;
                __VERIFIER_nondet_memory(&std89, sizeof(std89));
                struct std__basic_istream_char__std__char_traits_char__* base90 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inFile13) + 0);
                int std91 = __VERIFIER_nondet_int();
                char cast92 = (char)std91;
                c15 = cast92;
            }
    }
  int c93 = 0;
  __retval5 = c93;
  int t94 = __retval5;
  return t94;
}

