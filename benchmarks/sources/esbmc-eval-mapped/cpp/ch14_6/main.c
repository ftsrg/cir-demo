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
struct std___Setw { int _M_n; };
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
struct std__fpos___mbstate_t_ { long _M_off; struct __mbstate_t _M_state; };
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__;
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[22] = "Enter account number ";
char _str_3[30] = "(1 to 100, 0 to end input)\n? ";
char _str_4[1];
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_5[38] = "Enter lastname, firstname, balance\n? ";
char _str_6[24] = "Enter account number\n? ";
char _str_7[50] = "basic_string: construction from null is not valid";
char _str_8[24] = "basic_string::_M_create";
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void exit(int p0);
extern void ClientData__ClientData(struct ClientData* p0, int p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p3, double p4);
extern void ClientData__setAccountNumber(struct ClientData* p0, int p1);
extern int ClientData__getAccountNumber___const(struct ClientData* p0);
extern void ClientData__setLastName(struct ClientData* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p1);
extern void ClientData__setFirstName(struct ClientData* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ p1);
extern void ClientData__setBalance(struct ClientData* p0, double p1);
int main();

extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0:
  int __retval1;
  int accountNumber2;
  char lastName3[15];
  char firstName4[10];
  double balance5;
  struct std__basic_ofstream_char__std__char_traits_char__ outCredit6;
  struct ClientData client7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp08;
  struct std__allocator_char_ ref_tmp09;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp110;
  struct std__allocator_char_ ref_tmp111;
  int c12 = 0;
  __retval1 = c12;
  char* cast13 = (char*)&(_str);
  int t14 = _ZNSt8ios_base6binaryE_const;
  // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::basic_ofstream(char const*, std::_Ios_Openmode)
  __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
  __VERIFIER_nondet_memory(cast13, sizeof(*cast13));
      void** v15 = (void**)&(outCredit6);
      void* v16 = *((void**)v15);
      unsigned char* cast17 = (unsigned char*)v16;
      long c18 = -24;
      unsigned char* ptr19 = &(cast17)[c18];
      long* cast20 = (long*)ptr19;
      long t21 = *cast20;
      unsigned char* cast22 = (unsigned char*)&(outCredit6);
      unsigned char* ptr23 = &(cast22)[t21];
      struct std__basic_ofstream_char__std__char_traits_char__* cast24 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr23;
      struct std__basic_ios_char__std__char_traits_char__* cast25 = (struct std__basic_ios_char__std__char_traits_char__*)cast24;
      _Bool std26;
      __VERIFIER_nondet_memory(&std26, sizeof(std26));
      if (std26) {
        char* cast27 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std28;
        __VERIFIER_nondet_memory(&std28, sizeof(std28));
        struct std__basic_ostream_char__std__char_traits_char__* std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        int c30 = 1;
        exit(c30);
      }
    char* cast31 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std32;
    __VERIFIER_nondet_memory(&std32, sizeof(std32));
    char* cast33 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
    int c35 = 0;
    char* cast36 = (char*)&(_str_4);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp09, sizeof(ref_tmp09));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&agg_tmp08, sizeof(agg_tmp08));
      __VERIFIER_nondet_memory(cast36, sizeof(*cast36));
      __VERIFIER_nondet_memory(&ref_tmp09, sizeof(ref_tmp09));
        char* cast37 = (char*)&(_str_4);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp111, sizeof(ref_tmp111));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&agg_tmp110, sizeof(agg_tmp110));
          __VERIFIER_nondet_memory(cast37, sizeof(*cast37));
          __VERIFIER_nondet_memory(&ref_tmp111, sizeof(ref_tmp111));
            double c38 = 0x0p0;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t39 = agg_tmp08;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t40 = agg_tmp110;
            ClientData__ClientData(&client7, c35, t39, t40, c38);
            if (__cir_exc_active) {
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&agg_tmp110, sizeof(agg_tmp110));
              }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp111, sizeof(ref_tmp111));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&agg_tmp08, sizeof(agg_tmp08));
              }
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp09, sizeof(ref_tmp09));
              }
              {
                // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(&agg_tmp110, sizeof(agg_tmp110));
          }
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp111, sizeof(ref_tmp111));
        }
      {
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
        __VERIFIER_nondet_memory(&agg_tmp08, sizeof(agg_tmp08));
      }
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp09, sizeof(ref_tmp09));
    }
    struct std__basic_istream_char__std__char_traits_char__* std41;
    __VERIFIER_nondet_memory(&std41, sizeof(std41));
    int t42 = accountNumber2;
    ClientData__setAccountNumber(&client7, t42);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
        __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        int r43 = ClientData__getAccountNumber___const(&client7);
        if (__cir_exc_active) {
          {
            // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
            __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int c44 = 0;
        _Bool c45 = ((r43 > c44)) ? 1 : 0;
        _Bool ternary46;
        if (c45) {
          int r47 = ClientData__getAccountNumber___const(&client7);
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
              __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int c48 = 100;
          _Bool c49 = ((r47 <= c48)) ? 1 : 0;
          ternary46 = (_Bool)c49;
        } else {
          _Bool c50 = 0;
          ternary46 = (_Bool)c50;
        }
        if (!ternary46) break;
          struct std___Setw agg_tmp251;
          struct std___Setw agg_tmp352;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp453;
          struct std__allocator_char_ ref_tmp254;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ agg_tmp555;
          struct std__allocator_char_ ref_tmp356;
          struct std__fpos___mbstate_t_ agg_tmp657;
          char* cast58 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* std59;
          __VERIFIER_nondet_memory(&std59, sizeof(std59));
          int c60 = 15;
          struct std___Setw std61;
          __VERIFIER_nondet_memory(&std61, sizeof(std61));
          agg_tmp251 = std61;
          struct std___Setw t62 = agg_tmp251;
          struct std__basic_istream_char__std__char_traits_char__* std63;
          __VERIFIER_nondet_memory(&std63, sizeof(std63));
          struct std__basic_istream_char__std__char_traits_char__* std64;
          __VERIFIER_nondet_memory(&std64, sizeof(std64));
          int c65 = 10;
          struct std___Setw std66;
          __VERIFIER_nondet_memory(&std66, sizeof(std66));
          agg_tmp352 = std66;
          struct std___Setw t67 = agg_tmp352;
          struct std__basic_istream_char__std__char_traits_char__* std68;
          __VERIFIER_nondet_memory(&std68, sizeof(std68));
          struct std__basic_istream_char__std__char_traits_char__* std69;
          __VERIFIER_nondet_memory(&std69, sizeof(std69));
          struct std__basic_istream_char__std__char_traits_char__* std70;
          __VERIFIER_nondet_memory(&std70, sizeof(std70));
          char* cast71 = (char*)&(lastName3);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp254, sizeof(ref_tmp254));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&agg_tmp453, sizeof(agg_tmp453));
            __VERIFIER_nondet_memory(cast71, sizeof(*cast71));
            __VERIFIER_nondet_memory(&ref_tmp254, sizeof(ref_tmp254));
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t72 = agg_tmp453;
              ClientData__setLastName(&client7, t72);
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&agg_tmp453, sizeof(agg_tmp453));
                }
                {
                  // externalized std:: op: std::allocator<char>::~allocator()
                  __VERIFIER_nondet_memory(&ref_tmp254, sizeof(ref_tmp254));
                }
                {
                  // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                  __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp453, sizeof(agg_tmp453));
            }
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp254, sizeof(ref_tmp254));
          }
          char* cast73 = (char*)&(firstName4);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp356, sizeof(ref_tmp356));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&agg_tmp555, sizeof(agg_tmp555));
            __VERIFIER_nondet_memory(cast73, sizeof(*cast73));
            __VERIFIER_nondet_memory(&ref_tmp356, sizeof(ref_tmp356));
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t74 = agg_tmp555;
              ClientData__setFirstName(&client7, t74);
              if (__cir_exc_active) {
                {
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                  __VERIFIER_nondet_memory(&agg_tmp555, sizeof(agg_tmp555));
                }
                {
                  // externalized std:: op: std::allocator<char>::~allocator()
                  __VERIFIER_nondet_memory(&ref_tmp356, sizeof(ref_tmp356));
                }
                {
                  // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                  __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
                }
                int __cir_eh_ret = (int)0;
                return __cir_eh_ret;
              }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&agg_tmp555, sizeof(agg_tmp555));
            }
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp356, sizeof(ref_tmp356));
          }
          double t75 = balance5;
          ClientData__setBalance(&client7, t75);
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
              __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std__basic_ostream_char__std__char_traits_char__* base76 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outCredit6) + 0);
          int r77 = ClientData__getAccountNumber___const(&client7);
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
              __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int c78 = 1;
          int b79 = r77 - c78;
          unsigned long cast80 = (unsigned long)b79;
          unsigned long c81 = 40;
          unsigned long b82 = cast80 * c81;
          long cast83 = (long)b82;
          // externalized std:: op: std::fpos<__mbstate_t>::fpos(long)
          __VERIFIER_nondet_memory(&agg_tmp657, sizeof(agg_tmp657));
          struct std__fpos___mbstate_t_ t84 = agg_tmp657;
          struct std__basic_ostream_char__std__char_traits_char__* std85;
          __VERIFIER_nondet_memory(&std85, sizeof(std85));
          struct std__basic_ostream_char__std__char_traits_char__* base86 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outCredit6) + 0);
          char* cast87 = (char*)&(client7);
          long c88 = 40;
          struct std__basic_ostream_char__std__char_traits_char__* std89;
          __VERIFIER_nondet_memory(&std89, sizeof(std89));
          char* cast90 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* std91;
          __VERIFIER_nondet_memory(&std91, sizeof(std91));
          struct std__basic_istream_char__std__char_traits_char__* std92;
          __VERIFIER_nondet_memory(&std92, sizeof(std92));
          int t93 = accountNumber2;
          ClientData__setAccountNumber(&client7, t93);
          if (__cir_exc_active) {
            {
              // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
              __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      }
    int c94 = 0;
    __retval1 = c94;
    int t95 = __retval1;
    int ret_val96 = t95;
    {
      // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
      __VERIFIER_nondet_memory(&outCredit6, sizeof(outCredit6));
    }
    return ret_val96;
  int t97 = __retval1;
  return t97;
}

