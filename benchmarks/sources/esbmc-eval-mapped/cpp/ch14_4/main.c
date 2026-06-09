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
struct std___Setprecision { int _M_n; };
struct std___Setw { int _M_n; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct __mbstate_t { int __field0; union anon_0 __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t _M_state; };
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__;
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
int _ZNSt8ios_base6eofbitE_const __attribute__((aligned(4))) = 2;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base5rightE_const __attribute__((aligned(4))) = 128;
int _ZNSt8ios_base11adjustfieldE_const __attribute__((aligned(4))) = 176;
int _ZNSt8ios_base4leftE_const __attribute__((aligned(4))) = 32;
int _ZNSt8ios_base9showpointE_const __attribute__((aligned(4))) = 1024;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[12] = "clients.dat";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_1[25] = "File could not be opened";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[31] = "\nAccounts with zero balances:\n";
char _str_3[33] = "\nAccounts with credit balances:\n";
char _str_4[32] = "\nAccounts with debit balances:\n";
char _str_5[12] = "End of run.";
char _str_6[15] = "\nEnter request";
char _str_7[38] = " 1 - List accounts with zero balances";
char _str_8[40] = " 2 - List accounts with credit balances";
char _str_9[39] = " 3 - List accounts with debit balances";
char _str_10[16] = " 4 - End of run";
char _str_11[4] = "\n? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void exit(int p0);
int getRequest();
_Bool shouldDisplay(int p0, double p1);
void outputLine(int p0, char* p1, double p2);
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z10getRequestv
int getRequest() {
bb0:
  int __retval1;
  int request2;
  char* cast3 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  struct std__basic_ostream_char__std__char_traits_char__* std5;
  __VERIFIER_nondet_memory(&std5, sizeof(std5));
  char* cast6 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std7;
  __VERIFIER_nondet_memory(&std7, sizeof(std7));
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  char* cast9 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* cast15 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
    do {
        char* cast19 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
        struct std__basic_istream_char__std__char_traits_char__* std21;
        __VERIFIER_nondet_memory(&std21, sizeof(std21));
      int t22 = request2;
      int c23 = 1;
      _Bool c24 = ((t22 < c23)) ? 1 : 0;
      _Bool ternary25;
      if (c24) {
        int t26 = request2;
        int c27 = 4;
        _Bool c28 = ((t26 > c27)) ? 1 : 0;
        ternary25 = (_Bool)c28;
      } else {
        _Bool c29 = 0;
        ternary25 = (_Bool)c29;
      }
      if (!ternary25) break;
    } while (1);
  int t30 = request2;
  __retval1 = t30;
  int t31 = __retval1;
  return t31;
}

// function: _Z13shouldDisplayid
_Bool shouldDisplay(int v32, double v33) {
bb34:
  int type35;
  double balance36;
  _Bool __retval37;
  type35 = v32;
  balance36 = v33;
    int t38 = type35;
    int c39 = 2;
    _Bool c40 = ((t38 == c39)) ? 1 : 0;
    _Bool ternary41;
    if (c40) {
      double t42 = balance36;
      int c43 = 0;
      double cast44 = (double)c43;
      _Bool c45 = ((t42 < cast44)) ? 1 : 0;
      ternary41 = (_Bool)c45;
    } else {
      _Bool c46 = 0;
      ternary41 = (_Bool)c46;
    }
    if (ternary41) {
      _Bool c47 = 1;
      __retval37 = c47;
      _Bool t48 = __retval37;
      return t48;
    }
    int t49 = type35;
    int c50 = 3;
    _Bool c51 = ((t49 == c50)) ? 1 : 0;
    _Bool ternary52;
    if (c51) {
      double t53 = balance36;
      int c54 = 0;
      double cast55 = (double)c54;
      _Bool c56 = ((t53 > cast55)) ? 1 : 0;
      ternary52 = (_Bool)c56;
    } else {
      _Bool c57 = 0;
      ternary52 = (_Bool)c57;
    }
    if (ternary52) {
      _Bool c58 = 1;
      __retval37 = c58;
      _Bool t59 = __retval37;
      return t59;
    }
    int t60 = type35;
    int c61 = 1;
    _Bool c62 = ((t60 == c61)) ? 1 : 0;
    _Bool ternary63;
    if (c62) {
      double t64 = balance36;
      int c65 = 0;
      double cast66 = (double)c65;
      _Bool c67 = ((t64 == cast66)) ? 1 : 0;
      ternary63 = (_Bool)c67;
    } else {
      _Bool c68 = 0;
      ternary63 = (_Bool)c68;
    }
    if (ternary63) {
      _Bool c69 = 1;
      __retval37 = c69;
      _Bool t70 = __retval37;
      return t70;
    }
  _Bool c71 = 0;
  __retval37 = c71;
  _Bool t72 = __retval37;
  return t72;
}

// function: _Z10outputLineiPKcd
void outputLine(int v73, char* v74, double v75) {
bb76:
  int account77;
  char* name78;
  double balance79;
  struct std___Setw agg_tmp080;
  struct std___Setw agg_tmp181;
  struct std___Setw agg_tmp282;
  struct std___Setprecision agg_tmp383;
  account77 = v73;
  name78 = v74;
  balance79 = v75;
  struct std__basic_ostream_char__std__char_traits_char__* std84;
  __VERIFIER_nondet_memory(&std84, sizeof(std84));
  int c85 = 10;
  struct std___Setw std86;
  __VERIFIER_nondet_memory(&std86, sizeof(std86));
  agg_tmp080 = std86;
  struct std___Setw t87 = agg_tmp080;
  struct std__basic_ostream_char__std__char_traits_char__* std88;
  __VERIFIER_nondet_memory(&std88, sizeof(std88));
  int t89 = account77;
  struct std__basic_ostream_char__std__char_traits_char__* std90;
  __VERIFIER_nondet_memory(&std90, sizeof(std90));
  int c91 = 13;
  struct std___Setw std92;
  __VERIFIER_nondet_memory(&std92, sizeof(std92));
  agg_tmp181 = std92;
  struct std___Setw t93 = agg_tmp181;
  struct std__basic_ostream_char__std__char_traits_char__* std94;
  __VERIFIER_nondet_memory(&std94, sizeof(std94));
  char* t95 = name78;
  struct std__basic_ostream_char__std__char_traits_char__* std96;
  __VERIFIER_nondet_memory(&std96, sizeof(std96));
  int c97 = 7;
  struct std___Setw std98;
  __VERIFIER_nondet_memory(&std98, sizeof(std98));
  agg_tmp282 = std98;
  struct std___Setw t99 = agg_tmp282;
  struct std__basic_ostream_char__std__char_traits_char__* std100;
  __VERIFIER_nondet_memory(&std100, sizeof(std100));
  int c101 = 2;
  struct std___Setprecision std102;
  __VERIFIER_nondet_memory(&std102, sizeof(std102));
  agg_tmp383 = std102;
  struct std___Setprecision t103 = agg_tmp383;
  struct std__basic_ostream_char__std__char_traits_char__* std104;
  __VERIFIER_nondet_memory(&std104, sizeof(std104));
  struct std__basic_ostream_char__std__char_traits_char__* std105;
  __VERIFIER_nondet_memory(&std105, sizeof(std105));
  double t106 = balance79;
  struct std__basic_ostream_char__std__char_traits_char__* std107;
  __VERIFIER_nondet_memory(&std107, sizeof(std107));
  struct std__basic_ostream_char__std__char_traits_char__* std108;
  __VERIFIER_nondet_memory(&std108, sizeof(std108));
  return;
}

// function: main
int main() {
bb109:
  int __retval110;
  struct std__basic_ifstream_char__std__char_traits_char__ inClientFile111;
  int request112;
  int account113;
  char name114[30];
  double balance115;
  int c116 = 0;
  __retval110 = c116;
  char* cast117 = (char*)&(_str);
  int t118 = _ZNSt8ios_base2inE_const;
  // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&inClientFile111, sizeof(inClientFile111));
  __VERIFIER_nondet_memory(cast117, sizeof(*cast117));
      void** v119 = (void**)&(inClientFile111);
      void* v120 = *((void**)v119);
      unsigned char* cast121 = (unsigned char*)v120;
      long c122 = -24;
      unsigned char* ptr123 = &(cast121)[c122];
      long* cast124 = (long*)ptr123;
      long t125 = *cast124;
      unsigned char* cast126 = (unsigned char*)&(inClientFile111);
      unsigned char* ptr127 = &(cast126)[t125];
      struct std__basic_ifstream_char__std__char_traits_char__* cast128 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr127;
      struct std__basic_ios_char__std__char_traits_char__* cast129 = (struct std__basic_ios_char__std__char_traits_char__*)cast128;
      _Bool std130;
      __VERIFIER_nondet_memory(&std130, sizeof(std130));
      if (std130) {
        char* cast131 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std132;
        __VERIFIER_nondet_memory(&std132, sizeof(std132));
        struct std__basic_ostream_char__std__char_traits_char__* std133;
        __VERIFIER_nondet_memory(&std133, sizeof(std133));
        int c134 = 1;
        exit(c134);
      }
    int r135 = getRequest();
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
        __VERIFIER_nondet_memory(&inClientFile111, sizeof(inClientFile111));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    request112 = r135;
      while (1) {
        int t136 = request112;
        int c137 = 4;
        _Bool c138 = ((t136 != c137)) ? 1 : 0;
        if (!c138) break;
          struct std__fpos___mbstate_t_ agg_tmp0139;
            int t140 = request112;
            switch (t140) {
            case 1:
              char* cast141 = (char*)&(_str_2);
              struct std__basic_ostream_char__std__char_traits_char__* std142;
              __VERIFIER_nondet_memory(&std142, sizeof(std142));
              break;
            case 2:
              char* cast143 = (char*)&(_str_3);
              struct std__basic_ostream_char__std__char_traits_char__* std144;
              __VERIFIER_nondet_memory(&std144, sizeof(std144));
              break;
            case 3:
              char* cast145 = (char*)&(_str_4);
              struct std__basic_ostream_char__std__char_traits_char__* std146;
              __VERIFIER_nondet_memory(&std146, sizeof(std146));
              break;
            }
          struct std__basic_istream_char__std__char_traits_char__* base147 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inClientFile111) + 0);
          struct std__basic_istream_char__std__char_traits_char__* std148;
          __VERIFIER_nondet_memory(&std148, sizeof(std148));
          struct std__basic_istream_char__std__char_traits_char__* std149;
          __VERIFIER_nondet_memory(&std149, sizeof(std149));
          struct std__basic_istream_char__std__char_traits_char__* std150;
          __VERIFIER_nondet_memory(&std150, sizeof(std150));
            while (1) {
              void** v151 = (void**)&(inClientFile111);
              void* v152 = *((void**)v151);
              unsigned char* cast153 = (unsigned char*)v152;
              long c154 = -24;
              unsigned char* ptr155 = &(cast153)[c154];
              long* cast156 = (long*)ptr155;
              long t157 = *cast156;
              unsigned char* cast158 = (unsigned char*)&(inClientFile111);
              unsigned char* ptr159 = &(cast158)[t157];
              struct std__basic_ifstream_char__std__char_traits_char__* cast160 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr159;
              struct std__basic_ios_char__std__char_traits_char__* cast161 = (struct std__basic_ios_char__std__char_traits_char__*)cast160;
              _Bool std162;
              __VERIFIER_nondet_memory(&std162, sizeof(std162));
              _Bool u163 = !std162;
              if (!u163) break;
                  int t164 = request112;
                  double t165 = balance115;
                  _Bool r166 = shouldDisplay(t164, t165);
                  if (__cir_exc_active) {
                    {
                      // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                      __VERIFIER_nondet_memory(&inClientFile111, sizeof(inClientFile111));
                    }
                    int __cir_eh_ret = (int)0;
                    return __cir_eh_ret;
                  }
                  if (r166) {
                    int t167 = account113;
                    char* cast168 = (char*)&(name114);
                    double t169 = balance115;
                    outputLine(t167, cast168, t169);
                    if (__cir_exc_active) {
                      {
                        // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                        __VERIFIER_nondet_memory(&inClientFile111, sizeof(inClientFile111));
                      }
                      int __cir_eh_ret = (int)0;
                      return __cir_eh_ret;
                    }
                  }
                struct std__basic_istream_char__std__char_traits_char__* base170 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inClientFile111) + 0);
                struct std__basic_istream_char__std__char_traits_char__* std171;
                __VERIFIER_nondet_memory(&std171, sizeof(std171));
                struct std__basic_istream_char__std__char_traits_char__* std172;
                __VERIFIER_nondet_memory(&std172, sizeof(std172));
                struct std__basic_istream_char__std__char_traits_char__* std173;
                __VERIFIER_nondet_memory(&std173, sizeof(std173));
            }
          void** v174 = (void**)&(inClientFile111);
          void* v175 = *((void**)v174);
          unsigned char* cast176 = (unsigned char*)v175;
          long c177 = -24;
          unsigned char* ptr178 = &(cast176)[c177];
          long* cast179 = (long*)ptr178;
          long t180 = *cast179;
          unsigned char* cast181 = (unsigned char*)&(inClientFile111);
          unsigned char* ptr182 = &(cast181)[t180];
          struct std__basic_ifstream_char__std__char_traits_char__* cast183 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr182;
          struct std__basic_ios_char__std__char_traits_char__* cast184 = (struct std__basic_ios_char__std__char_traits_char__*)cast183;
          int t185 = _ZNSt8ios_base7goodbitE_const;
          // externalized std:: op: std::basic_ios<char, std::char_traits<char> >::clear(std::_Ios_Iostate)
          __VERIFIER_nondet_memory(cast184, sizeof(*cast184));
          struct std__basic_istream_char__std__char_traits_char__* base186 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(inClientFile111) + 0);
          long c187 = 0;
          // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
          __VERIFIER_nondet_memory(&agg_tmp0139, sizeof(agg_tmp0139));
          struct std__fpos___mbstate_t_ t188 = agg_tmp0139;
          struct std__basic_istream_char__std__char_traits_char__* std189;
          __VERIFIER_nondet_memory(&std189, sizeof(std189));
          int r190 = getRequest();
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
              __VERIFIER_nondet_memory(&inClientFile111, sizeof(inClientFile111));
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          request112 = r190;
      }
    char* cast191 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std192;
    __VERIFIER_nondet_memory(&std192, sizeof(std192));
    struct std__basic_ostream_char__std__char_traits_char__* std193;
    __VERIFIER_nondet_memory(&std193, sizeof(std193));
    int c194 = 0;
    __retval110 = c194;
    int t195 = __retval110;
    int ret_val196 = t195;
    {
      // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
      __VERIFIER_nondet_memory(&inClientFile111, sizeof(inClientFile111));
    }
    return ret_val196;
  int t197 = __retval110;
  return t197;
}

