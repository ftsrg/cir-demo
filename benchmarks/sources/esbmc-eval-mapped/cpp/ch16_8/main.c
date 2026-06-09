extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct _IO_FILE { int __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; char* __field7; char* __field8; char* __field9; char* __field10; char* __field11; struct _IO_marker* __field12; struct _IO_FILE* __field13; int __field14; unsigned char __field15[3]; char __field16[1]; long __field17; unsigned short __field18; char __field19; char __field20[1]; void* __field21; long __field22; struct _IO_codecvt* __field23; struct _IO_wide_data* __field24; struct _IO_FILE* __field25; void* __field26; struct _IO_FILE** __field27; int __field28; int __field29; unsigned long __field30; char __field31[8]; };
struct _IO_codecvt { unsigned char __placeholder; };
struct _IO_marker { unsigned char __placeholder; };
struct _IO_wide_data { unsigned char __placeholder; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct __pthread_internal_list { struct __pthread_internal_list* __field0; struct __pthread_internal_list* __field1; };
struct __pthread_mutex_s { int __field0; unsigned int __field1; int __field2; unsigned int __field3; int __field4; short __field5; short __field6; struct __pthread_internal_list __field7; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
union anon_1 { unsigned int __field0; char __field1[4]; };
struct anon_struct_0 { unsigned char* __field0[5]; unsigned char* __field1[5]; };
struct anon_struct_1 { unsigned char* __field0[4]; };
union pthread_mutex_t { struct __pthread_mutex_s __field0; char __field1[40]; long __field2; };
struct std____basic_file_char_ { struct _IO_FILE* __field0; _Bool __field1; unsigned char __field2[7]; } __attribute__((packed));
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_const_char___ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___;
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct __mbstate_t { int __field0; union anon_1 __field1; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale _M_buf_locale; };
struct std__ctype_char_;
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_filebuf_char__std__char_traits_char__ { struct std__basic_streambuf_char__std__char_traits_char__ __field0; union pthread_mutex_t __field1; struct std____basic_file_char_ _M_file; int __field3; struct __mbstate_t __field4; struct __mbstate_t __field5; struct __mbstate_t __field6; char* __field7; unsigned long __field8; _Bool __field9; _Bool __field10; _Bool __field11; char __field12; char* __field13; char* __field14; _Bool __field15; struct std__codecvt_char__char____mbstate_t_* __field16; char* __field17; long __field18; char* __field19; char* __field20; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* _M_tie; char _M_fill; _Bool _M_fill_init; struct std__basic_streambuf_char__std__char_traits_char__* _M_streambuf; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* _M_num_put; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* _M_num_get; };
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__basic_ofstream_char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
char __const_main_postString[1024];
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base3outE_const __attribute__((aligned(4))) = 16;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base3appE_const __attribute__((aligned(4))) = 1;
char _str[1];
char _str_1[15] = "CONTENT_LENGTH";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_2[2] = "+";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_3[2] = " ";
char _str_4[11] = "firstname=";
char _str_5[10] = "&lastname";
char _str_6[10] = "lastname=";
char _str_7[9] = "&address";
char _str_8[9] = "address=";
char _str_9[6] = "&town";
char _str_10[6] = "town=";
char _str_11[7] = "&state";
char _str_12[7] = "state=";
char _str_13[9] = "&zipcode";
char _str_14[9] = "zipcode=";
char _str_15[9] = "&country";
char _str_16[9] = "country=";
char _str_17[7] = "&email";
char _str_18[7] = "email=";
char _str_19[8] = "&submit";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_20[26] = "Content-type: text/html\n\n";
char _str_21[24] = "<?xml version = \"1.0\"?>";
char _str_22[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_23[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_24[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_25[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_26[41] = "<head><title>Contact Information entered";
char _str_27[22] = "</title></head><body>";
char _str_28[12] = "clients.txt";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_29[36] = "Error: could not open contact file.";
char _str_30[2] = "\n";
char _str_31[3] = "\n\n";
char _str_32[15] = "<table><tbody>";
char _str_33[29] = "<tr><td>First Name:</td><td>";
char _str_34[11] = "</td></tr>";
char _str_35[28] = "<tr><td>Last Name:</td><td>";
char _str_36[26] = "<tr><td>Address:</td><td>";
char _str_37[23] = "<tr><td>Town:</td><td>";
char _str_38[24] = "<tr><td>State:</td><td>";
char _str_39[27] = "<tr><td>Zip Code:</td><td>";
char _str_40[26] = "<tr><td>Country:</td><td>";
char _str_41[24] = "<tr><td>Email:</td><td>";
char _str_42[17] = "</tbody></table>";
char _str_43[17] = "</body>\n</html>\n";
char _str_44[50] = "basic_string: construction from null is not valid";
char _str_45[24] = "basic_string::_M_create";
char _str_46[25] = "basic_string::_M_replace";
char _str_47[22] = "basic_string::replace";
char _str_48[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_49[21] = "basic_string::substr";
char _str_50[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
extern void *_ZTVSt14basic_ofstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern char* getenv(char* p0);
extern int atoi(char* p0);
extern void exit(int p0);
int main();

extern unsigned char* _ZTTSt14basic_ofstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  char postString2[1024];
  int contentLength3;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ dataString4;
  struct std__allocator_char_ ref_tmp05;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ firstname6;
  struct std__allocator_char_ ref_tmp17;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ lastname8;
  struct std__allocator_char_ ref_tmp29;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ address10;
  struct std__allocator_char_ ref_tmp311;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ town12;
  struct std__allocator_char_ ref_tmp413;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ state14;
  struct std__allocator_char_ ref_tmp515;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ zipcode16;
  struct std__allocator_char_ ref_tmp617;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ country18;
  struct std__allocator_char_ ref_tmp719;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ email20;
  struct std__allocator_char_ ref_tmp821;
  int charLocation22;
  int firstStart23;
  int endFirst24;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp925;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup26;
  int lastStart27;
  int endLast28;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1029;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup30;
  int addressStart31;
  int endAddress32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1133;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup34;
  int townStart35;
  int endTown36;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1237;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup38;
  int stateStart39;
  int endState40;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1341;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup42;
  int zipStart43;
  int endZip44;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1445;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup46;
  int countryStart47;
  int endCountry48;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1549;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup50;
  int emailStart51;
  int endEmail52;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp1653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup54;
  struct std__basic_ofstream_char__std__char_traits_char__ outFile55;
  int c56 = 0;
  __retval1 = c56;
  // array copy
  __builtin_memcpy(postString2, __const_main_postString, (unsigned long)1024 * sizeof(__const_main_postString[0]));
  int c57 = 0;
  contentLength3 = c57;
  char* cast58 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&dataString4, sizeof(dataString4));
    __VERIFIER_nondet_memory(cast58, sizeof(*cast58));
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp05, sizeof(ref_tmp05));
  }
    char* cast59 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&firstname6, sizeof(firstname6));
      __VERIFIER_nondet_memory(cast59, sizeof(*cast59));
      __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp17, sizeof(ref_tmp17));
    }
      char* cast60 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&lastname8, sizeof(lastname8));
        __VERIFIER_nondet_memory(cast60, sizeof(*cast60));
        __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp29, sizeof(ref_tmp29));
      }
        char* cast61 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp311, sizeof(ref_tmp311));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&address10, sizeof(address10));
          __VERIFIER_nondet_memory(cast61, sizeof(*cast61));
          __VERIFIER_nondet_memory(&ref_tmp311, sizeof(ref_tmp311));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp311, sizeof(ref_tmp311));
        }
          char* cast62 = (char*)&(_str);
          // externalized std:: op: std::allocator<char>::allocator()
          __VERIFIER_nondet_memory(&ref_tmp413, sizeof(ref_tmp413));
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
            __VERIFIER_nondet_memory(&town12, sizeof(town12));
            __VERIFIER_nondet_memory(cast62, sizeof(*cast62));
            __VERIFIER_nondet_memory(&ref_tmp413, sizeof(ref_tmp413));
          {
            // externalized std:: op: std::allocator<char>::~allocator()
            __VERIFIER_nondet_memory(&ref_tmp413, sizeof(ref_tmp413));
          }
            char* cast63 = (char*)&(_str);
            // externalized std:: op: std::allocator<char>::allocator()
            __VERIFIER_nondet_memory(&ref_tmp515, sizeof(ref_tmp515));
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
              __VERIFIER_nondet_memory(&state14, sizeof(state14));
              __VERIFIER_nondet_memory(cast63, sizeof(*cast63));
              __VERIFIER_nondet_memory(&ref_tmp515, sizeof(ref_tmp515));
            {
              // externalized std:: op: std::allocator<char>::~allocator()
              __VERIFIER_nondet_memory(&ref_tmp515, sizeof(ref_tmp515));
            }
              char* cast64 = (char*)&(_str);
              // externalized std:: op: std::allocator<char>::allocator()
              __VERIFIER_nondet_memory(&ref_tmp617, sizeof(ref_tmp617));
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                __VERIFIER_nondet_memory(&zipcode16, sizeof(zipcode16));
                __VERIFIER_nondet_memory(cast64, sizeof(*cast64));
                __VERIFIER_nondet_memory(&ref_tmp617, sizeof(ref_tmp617));
              {
                // externalized std:: op: std::allocator<char>::~allocator()
                __VERIFIER_nondet_memory(&ref_tmp617, sizeof(ref_tmp617));
              }
                char* cast65 = (char*)&(_str);
                // externalized std:: op: std::allocator<char>::allocator()
                __VERIFIER_nondet_memory(&ref_tmp719, sizeof(ref_tmp719));
                  // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                  __VERIFIER_nondet_memory(&country18, sizeof(country18));
                  __VERIFIER_nondet_memory(cast65, sizeof(*cast65));
                  __VERIFIER_nondet_memory(&ref_tmp719, sizeof(ref_tmp719));
                {
                  // externalized std:: op: std::allocator<char>::~allocator()
                  __VERIFIER_nondet_memory(&ref_tmp719, sizeof(ref_tmp719));
                }
                  char* cast66 = (char*)&(_str);
                  // externalized std:: op: std::allocator<char>::allocator()
                  __VERIFIER_nondet_memory(&ref_tmp821, sizeof(ref_tmp821));
                    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
                    __VERIFIER_nondet_memory(&email20, sizeof(email20));
                    __VERIFIER_nondet_memory(cast66, sizeof(*cast66));
                    __VERIFIER_nondet_memory(&ref_tmp821, sizeof(ref_tmp821));
                  {
                    // externalized std:: op: std::allocator<char>::~allocator()
                    __VERIFIER_nondet_memory(&ref_tmp821, sizeof(ref_tmp821));
                  }
                      char* cast67 = (char*)&(_str_1);
                      char* r68 = getenv(cast67);
                      _Bool cast69 = (_Bool)r68;
                      if (cast69) {
                        char* cast70 = (char*)&(_str_1);
                        char* r71 = getenv(cast70);
                        int r72 = atoi(r71);
                        contentLength3 = r72;
                      }
                    char* cast73 = (char*)&(postString2);
                    int t74 = contentLength3;
                    long cast75 = (long)t74;
                    struct std__basic_istream_char__std__char_traits_char__* std76;
                    __VERIFIER_nondet_memory(&std76, sizeof(std76));
                    char* cast77 = (char*)&(postString2);
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std78;
                    __VERIFIER_nondet_memory(&std78, sizeof(std78));
                    char* cast79 = (char*)&(_str_2);
                    unsigned long c80 = 0;
                    unsigned long std81 = __VERIFIER_nondet_unsigned_long();
                    int cast82 = (int)std81;
                    charLocation22 = cast82;
                      while (1) {
                        int t83 = charLocation22;
                        unsigned long cast84 = (unsigned long)t83;
                        unsigned long t85 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
                        _Bool c86 = ((cast84 < t85)) ? 1 : 0;
                        if (!c86) break;
                          int t87 = charLocation22;
                          unsigned long cast88 = (unsigned long)t87;
                          unsigned long c89 = 1;
                          char* cast90 = (char*)&(_str_3);
                          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std91;
                          __VERIFIER_nondet_memory(&std91, sizeof(std91));
                          char* cast92 = (char*)&(_str_2);
                          int t93 = charLocation22;
                          int c94 = 1;
                          int b95 = t93 + c94;
                          unsigned long cast96 = (unsigned long)b95;
                          unsigned long std97 = __VERIFIER_nondet_unsigned_long();
                          int cast98 = (int)std97;
                          charLocation22 = cast98;
                      }
                    char* cast99 = (char*)&(_str_4);
                    unsigned long c100 = 0;
                    unsigned long std101 = __VERIFIER_nondet_unsigned_long();
                    unsigned long c102 = 10;
                    unsigned long b103 = std101 + c102;
                    int cast104 = (int)b103;
                    firstStart23 = cast104;
                    char* cast105 = (char*)&(_str_5);
                    unsigned long c106 = 0;
                    unsigned long std107 = __VERIFIER_nondet_unsigned_long();
                    int cast108 = (int)std107;
                    endFirst24 = cast108;
                    int t109 = firstStart23;
                    unsigned long cast110 = (unsigned long)t109;
                    int t111 = endFirst24;
                    int t112 = firstStart23;
                    int b113 = t111 - t112;
                    unsigned long cast114 = (unsigned long)b113;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std115;
                    __VERIFIER_nondet_memory(&std115, sizeof(std115));
                    ref_tmp925 = std115;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std116;
                      __VERIFIER_nondet_memory(&std116, sizeof(std116));
                      tmp_exprcleanup26 = std116;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp925, sizeof(ref_tmp925));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t117 = tmp_exprcleanup26;
                    char* cast118 = (char*)&(_str_6);
                    unsigned long c119 = 0;
                    unsigned long std120 = __VERIFIER_nondet_unsigned_long();
                    unsigned long c121 = 9;
                    unsigned long b122 = std120 + c121;
                    int cast123 = (int)b122;
                    lastStart27 = cast123;
                    char* cast124 = (char*)&(_str_7);
                    unsigned long c125 = 0;
                    unsigned long std126 = __VERIFIER_nondet_unsigned_long();
                    int cast127 = (int)std126;
                    endLast28 = cast127;
                    int t128 = lastStart27;
                    unsigned long cast129 = (unsigned long)t128;
                    int t130 = endLast28;
                    int t131 = lastStart27;
                    int b132 = t130 - t131;
                    unsigned long cast133 = (unsigned long)b132;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std134;
                    __VERIFIER_nondet_memory(&std134, sizeof(std134));
                    ref_tmp1029 = std134;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std135;
                      __VERIFIER_nondet_memory(&std135, sizeof(std135));
                      tmp_exprcleanup30 = std135;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp1029, sizeof(ref_tmp1029));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t136 = tmp_exprcleanup30;
                    char* cast137 = (char*)&(_str_8);
                    unsigned long c138 = 0;
                    unsigned long std139 = __VERIFIER_nondet_unsigned_long();
                    unsigned long c140 = 8;
                    unsigned long b141 = std139 + c140;
                    int cast142 = (int)b141;
                    addressStart31 = cast142;
                    char* cast143 = (char*)&(_str_9);
                    unsigned long c144 = 0;
                    unsigned long std145 = __VERIFIER_nondet_unsigned_long();
                    int cast146 = (int)std145;
                    endAddress32 = cast146;
                    int t147 = addressStart31;
                    unsigned long cast148 = (unsigned long)t147;
                    int t149 = endAddress32;
                    int t150 = addressStart31;
                    int b151 = t149 - t150;
                    unsigned long cast152 = (unsigned long)b151;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std153;
                    __VERIFIER_nondet_memory(&std153, sizeof(std153));
                    ref_tmp1133 = std153;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std154;
                      __VERIFIER_nondet_memory(&std154, sizeof(std154));
                      tmp_exprcleanup34 = std154;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp1133, sizeof(ref_tmp1133));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = tmp_exprcleanup34;
                    char* cast156 = (char*)&(_str_10);
                    unsigned long c157 = 0;
                    unsigned long std158 = __VERIFIER_nondet_unsigned_long();
                    unsigned long c159 = 5;
                    unsigned long b160 = std158 + c159;
                    int cast161 = (int)b160;
                    townStart35 = cast161;
                    char* cast162 = (char*)&(_str_11);
                    unsigned long c163 = 0;
                    unsigned long std164 = __VERIFIER_nondet_unsigned_long();
                    int cast165 = (int)std164;
                    endTown36 = cast165;
                    int t166 = townStart35;
                    unsigned long cast167 = (unsigned long)t166;
                    int t168 = endTown36;
                    int t169 = townStart35;
                    int b170 = t168 - t169;
                    unsigned long cast171 = (unsigned long)b170;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std172;
                    __VERIFIER_nondet_memory(&std172, sizeof(std172));
                    ref_tmp1237 = std172;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std173;
                      __VERIFIER_nondet_memory(&std173, sizeof(std173));
                      tmp_exprcleanup38 = std173;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp1237, sizeof(ref_tmp1237));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t174 = tmp_exprcleanup38;
                    char* cast175 = (char*)&(_str_12);
                    unsigned long c176 = 0;
                    unsigned long std177 = __VERIFIER_nondet_unsigned_long();
                    unsigned long c178 = 6;
                    unsigned long b179 = std177 + c178;
                    int cast180 = (int)b179;
                    stateStart39 = cast180;
                    char* cast181 = (char*)&(_str_13);
                    unsigned long c182 = 0;
                    unsigned long std183 = __VERIFIER_nondet_unsigned_long();
                    int cast184 = (int)std183;
                    endState40 = cast184;
                    int t185 = stateStart39;
                    unsigned long cast186 = (unsigned long)t185;
                    int t187 = endState40;
                    int t188 = stateStart39;
                    int b189 = t187 - t188;
                    unsigned long cast190 = (unsigned long)b189;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std191;
                    __VERIFIER_nondet_memory(&std191, sizeof(std191));
                    ref_tmp1341 = std191;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std192;
                      __VERIFIER_nondet_memory(&std192, sizeof(std192));
                      tmp_exprcleanup42 = std192;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp1341, sizeof(ref_tmp1341));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t193 = tmp_exprcleanup42;
                    char* cast194 = (char*)&(_str_14);
                    unsigned long c195 = 0;
                    unsigned long std196 = __VERIFIER_nondet_unsigned_long();
                    unsigned long c197 = 8;
                    unsigned long b198 = std196 + c197;
                    int cast199 = (int)b198;
                    zipStart43 = cast199;
                    char* cast200 = (char*)&(_str_15);
                    unsigned long c201 = 0;
                    unsigned long std202 = __VERIFIER_nondet_unsigned_long();
                    int cast203 = (int)std202;
                    endZip44 = cast203;
                    int t204 = zipStart43;
                    unsigned long cast205 = (unsigned long)t204;
                    int t206 = endZip44;
                    int t207 = zipStart43;
                    int b208 = t206 - t207;
                    unsigned long cast209 = (unsigned long)b208;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std210;
                    __VERIFIER_nondet_memory(&std210, sizeof(std210));
                    ref_tmp1445 = std210;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std211;
                      __VERIFIER_nondet_memory(&std211, sizeof(std211));
                      tmp_exprcleanup46 = std211;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp1445, sizeof(ref_tmp1445));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t212 = tmp_exprcleanup46;
                    char* cast213 = (char*)&(_str_16);
                    unsigned long c214 = 0;
                    unsigned long std215 = __VERIFIER_nondet_unsigned_long();
                    unsigned long c216 = 8;
                    unsigned long b217 = std215 + c216;
                    int cast218 = (int)b217;
                    countryStart47 = cast218;
                    char* cast219 = (char*)&(_str_17);
                    unsigned long c220 = 0;
                    unsigned long std221 = __VERIFIER_nondet_unsigned_long();
                    int cast222 = (int)std221;
                    endCountry48 = cast222;
                    int t223 = countryStart47;
                    unsigned long cast224 = (unsigned long)t223;
                    int t225 = endCountry48;
                    int t226 = countryStart47;
                    int b227 = t225 - t226;
                    unsigned long cast228 = (unsigned long)b227;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std229;
                    __VERIFIER_nondet_memory(&std229, sizeof(std229));
                    ref_tmp1549 = std229;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std230;
                      __VERIFIER_nondet_memory(&std230, sizeof(std230));
                      tmp_exprcleanup50 = std230;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp1549, sizeof(ref_tmp1549));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t231 = tmp_exprcleanup50;
                    char* cast232 = (char*)&(_str_18);
                    unsigned long c233 = 0;
                    unsigned long std234 = __VERIFIER_nondet_unsigned_long();
                    unsigned long c235 = 6;
                    unsigned long b236 = std234 + c235;
                    int cast237 = (int)b236;
                    emailStart51 = cast237;
                    char* cast238 = (char*)&(_str_19);
                    unsigned long c239 = 0;
                    unsigned long std240 = __VERIFIER_nondet_unsigned_long();
                    int cast241 = (int)std240;
                    endEmail52 = cast241;
                    int t242 = emailStart51;
                    unsigned long cast243 = (unsigned long)t242;
                    int t244 = endEmail52;
                    int t245 = emailStart51;
                    int b246 = t244 - t245;
                    unsigned long cast247 = (unsigned long)b246;
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std248;
                    __VERIFIER_nondet_memory(&std248, sizeof(std248));
                    ref_tmp1653 = std248;
                      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std249;
                      __VERIFIER_nondet_memory(&std249, sizeof(std249));
                      tmp_exprcleanup54 = std249;
                    {
                      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                      __VERIFIER_nondet_memory(&ref_tmp1653, sizeof(ref_tmp1653));
                    }
                    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = tmp_exprcleanup54;
                    char* cast251 = (char*)&(_str_20);
                    struct std__basic_ostream_char__std__char_traits_char__* std252;
                    __VERIFIER_nondet_memory(&std252, sizeof(std252));
                    char* cast253 = (char*)&(_str_21);
                    struct std__basic_ostream_char__std__char_traits_char__* std254;
                    __VERIFIER_nondet_memory(&std254, sizeof(std254));
                    char* cast255 = (char*)&(_str_22);
                    struct std__basic_ostream_char__std__char_traits_char__* std256;
                    __VERIFIER_nondet_memory(&std256, sizeof(std256));
                    char* cast257 = (char*)&(_str_23);
                    struct std__basic_ostream_char__std__char_traits_char__* std258;
                    __VERIFIER_nondet_memory(&std258, sizeof(std258));
                    char* cast259 = (char*)&(_str_24);
                    struct std__basic_ostream_char__std__char_traits_char__* std260;
                    __VERIFIER_nondet_memory(&std260, sizeof(std260));
                    char* cast261 = (char*)&(_str_25);
                    struct std__basic_ostream_char__std__char_traits_char__* std262;
                    __VERIFIER_nondet_memory(&std262, sizeof(std262));
                    char* cast263 = (char*)&(_str_26);
                    struct std__basic_ostream_char__std__char_traits_char__* std264;
                    __VERIFIER_nondet_memory(&std264, sizeof(std264));
                    char* cast265 = (char*)&(_str_27);
                    struct std__basic_ostream_char__std__char_traits_char__* std266;
                    __VERIFIER_nondet_memory(&std266, sizeof(std266));
                    char* cast267 = (char*)&(_str_28);
                    int t268 = _ZNSt8ios_base3appE_const;
                    // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::basic_ofstream(char const*, std::_Ios_Openmode)
                    __VERIFIER_nondet_memory(&outFile55, sizeof(outFile55));
                    __VERIFIER_nondet_memory(cast267, sizeof(*cast267));
                        void** v269 = (void**)&(outFile55);
                        void* v270 = *((void**)v269);
                        unsigned char* cast271 = (unsigned char*)v270;
                        long c272 = -24;
                        unsigned char* ptr273 = &(cast271)[c272];
                        long* cast274 = (long*)ptr273;
                        long t275 = *cast274;
                        unsigned char* cast276 = (unsigned char*)&(outFile55);
                        unsigned char* ptr277 = &(cast276)[t275];
                        struct std__basic_ofstream_char__std__char_traits_char__* cast278 = (struct std__basic_ofstream_char__std__char_traits_char__*)ptr277;
                        struct std__basic_ios_char__std__char_traits_char__* cast279 = (struct std__basic_ios_char__std__char_traits_char__*)cast278;
                        _Bool std280;
                        __VERIFIER_nondet_memory(&std280, sizeof(std280));
                        if (std280) {
                          char* cast281 = (char*)&(_str_29);
                          struct std__basic_ostream_char__std__char_traits_char__* std282;
                          __VERIFIER_nondet_memory(&std282, sizeof(std282));
                          int c283 = 1;
                          exit(c283);
                        }
                      struct std__basic_ostream_char__std__char_traits_char__* base284 = (struct std__basic_ostream_char__std__char_traits_char__*)((char *)&(outFile55) + 0);
                      struct std__basic_ostream_char__std__char_traits_char__* std285;
                      __VERIFIER_nondet_memory(&std285, sizeof(std285));
                      char* cast286 = (char*)&(_str_3);
                      struct std__basic_ostream_char__std__char_traits_char__* std287;
                      __VERIFIER_nondet_memory(&std287, sizeof(std287));
                      struct std__basic_ostream_char__std__char_traits_char__* std288;
                      __VERIFIER_nondet_memory(&std288, sizeof(std288));
                      char* cast289 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* std290;
                      __VERIFIER_nondet_memory(&std290, sizeof(std290));
                      struct std__basic_ostream_char__std__char_traits_char__* std291;
                      __VERIFIER_nondet_memory(&std291, sizeof(std291));
                      char* cast292 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* std293;
                      __VERIFIER_nondet_memory(&std293, sizeof(std293));
                      struct std__basic_ostream_char__std__char_traits_char__* std294;
                      __VERIFIER_nondet_memory(&std294, sizeof(std294));
                      char* cast295 = (char*)&(_str_3);
                      struct std__basic_ostream_char__std__char_traits_char__* std296;
                      __VERIFIER_nondet_memory(&std296, sizeof(std296));
                      struct std__basic_ostream_char__std__char_traits_char__* std297;
                      __VERIFIER_nondet_memory(&std297, sizeof(std297));
                      char* cast298 = (char*)&(_str_3);
                      struct std__basic_ostream_char__std__char_traits_char__* std299;
                      __VERIFIER_nondet_memory(&std299, sizeof(std299));
                      struct std__basic_ostream_char__std__char_traits_char__* std300;
                      __VERIFIER_nondet_memory(&std300, sizeof(std300));
                      char* cast301 = (char*)&(_str_3);
                      struct std__basic_ostream_char__std__char_traits_char__* std302;
                      __VERIFIER_nondet_memory(&std302, sizeof(std302));
                      struct std__basic_ostream_char__std__char_traits_char__* std303;
                      __VERIFIER_nondet_memory(&std303, sizeof(std303));
                      char* cast304 = (char*)&(_str_30);
                      struct std__basic_ostream_char__std__char_traits_char__* std305;
                      __VERIFIER_nondet_memory(&std305, sizeof(std305));
                      struct std__basic_ostream_char__std__char_traits_char__* std306;
                      __VERIFIER_nondet_memory(&std306, sizeof(std306));
                      char* cast307 = (char*)&(_str_31);
                      struct std__basic_ostream_char__std__char_traits_char__* std308;
                      __VERIFIER_nondet_memory(&std308, sizeof(std308));
                      char* cast309 = (char*)&(_str_32);
                      struct std__basic_ostream_char__std__char_traits_char__* std310;
                      __VERIFIER_nondet_memory(&std310, sizeof(std310));
                      char* cast311 = (char*)&(_str_33);
                      struct std__basic_ostream_char__std__char_traits_char__* std312;
                      __VERIFIER_nondet_memory(&std312, sizeof(std312));
                      struct std__basic_ostream_char__std__char_traits_char__* std313;
                      __VERIFIER_nondet_memory(&std313, sizeof(std313));
                      char* cast314 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* std315;
                      __VERIFIER_nondet_memory(&std315, sizeof(std315));
                      char* cast316 = (char*)&(_str_35);
                      struct std__basic_ostream_char__std__char_traits_char__* std317;
                      __VERIFIER_nondet_memory(&std317, sizeof(std317));
                      struct std__basic_ostream_char__std__char_traits_char__* std318;
                      __VERIFIER_nondet_memory(&std318, sizeof(std318));
                      char* cast319 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* std320;
                      __VERIFIER_nondet_memory(&std320, sizeof(std320));
                      char* cast321 = (char*)&(_str_36);
                      struct std__basic_ostream_char__std__char_traits_char__* std322;
                      __VERIFIER_nondet_memory(&std322, sizeof(std322));
                      struct std__basic_ostream_char__std__char_traits_char__* std323;
                      __VERIFIER_nondet_memory(&std323, sizeof(std323));
                      char* cast324 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* std325;
                      __VERIFIER_nondet_memory(&std325, sizeof(std325));
                      char* cast326 = (char*)&(_str_37);
                      struct std__basic_ostream_char__std__char_traits_char__* std327;
                      __VERIFIER_nondet_memory(&std327, sizeof(std327));
                      struct std__basic_ostream_char__std__char_traits_char__* std328;
                      __VERIFIER_nondet_memory(&std328, sizeof(std328));
                      char* cast329 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* std330;
                      __VERIFIER_nondet_memory(&std330, sizeof(std330));
                      char* cast331 = (char*)&(_str_38);
                      struct std__basic_ostream_char__std__char_traits_char__* std332;
                      __VERIFIER_nondet_memory(&std332, sizeof(std332));
                      struct std__basic_ostream_char__std__char_traits_char__* std333;
                      __VERIFIER_nondet_memory(&std333, sizeof(std333));
                      char* cast334 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* std335;
                      __VERIFIER_nondet_memory(&std335, sizeof(std335));
                      char* cast336 = (char*)&(_str_39);
                      struct std__basic_ostream_char__std__char_traits_char__* std337;
                      __VERIFIER_nondet_memory(&std337, sizeof(std337));
                      struct std__basic_ostream_char__std__char_traits_char__* std338;
                      __VERIFIER_nondet_memory(&std338, sizeof(std338));
                      char* cast339 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* std340;
                      __VERIFIER_nondet_memory(&std340, sizeof(std340));
                      char* cast341 = (char*)&(_str_40);
                      struct std__basic_ostream_char__std__char_traits_char__* std342;
                      __VERIFIER_nondet_memory(&std342, sizeof(std342));
                      struct std__basic_ostream_char__std__char_traits_char__* std343;
                      __VERIFIER_nondet_memory(&std343, sizeof(std343));
                      char* cast344 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* std345;
                      __VERIFIER_nondet_memory(&std345, sizeof(std345));
                      char* cast346 = (char*)&(_str_41);
                      struct std__basic_ostream_char__std__char_traits_char__* std347;
                      __VERIFIER_nondet_memory(&std347, sizeof(std347));
                      struct std__basic_ostream_char__std__char_traits_char__* std348;
                      __VERIFIER_nondet_memory(&std348, sizeof(std348));
                      char* cast349 = (char*)&(_str_34);
                      struct std__basic_ostream_char__std__char_traits_char__* std350;
                      __VERIFIER_nondet_memory(&std350, sizeof(std350));
                      char* cast351 = (char*)&(_str_42);
                      struct std__basic_ostream_char__std__char_traits_char__* std352;
                      __VERIFIER_nondet_memory(&std352, sizeof(std352));
                      char* cast353 = (char*)&(_str_43);
                      struct std__basic_ostream_char__std__char_traits_char__* std354;
                      __VERIFIER_nondet_memory(&std354, sizeof(std354));
                      int c355 = 0;
                      __retval1 = c355;
                      int t356 = __retval1;
                      int ret_val357 = t356;
                      {
                        // externalized std:: op: std::basic_ofstream<char, std::char_traits<char> >::~basic_ofstream()
                        __VERIFIER_nondet_memory(&outFile55, sizeof(outFile55));
                      }
                      {
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                        __VERIFIER_nondet_memory(&email20, sizeof(email20));
                      }
                      {
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                        __VERIFIER_nondet_memory(&country18, sizeof(country18));
                      }
                      {
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                        __VERIFIER_nondet_memory(&zipcode16, sizeof(zipcode16));
                      }
                      {
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                        __VERIFIER_nondet_memory(&state14, sizeof(state14));
                      }
                      {
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                        __VERIFIER_nondet_memory(&town12, sizeof(town12));
                      }
                      {
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                        __VERIFIER_nondet_memory(&address10, sizeof(address10));
                      }
                      {
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                        __VERIFIER_nondet_memory(&lastname8, sizeof(lastname8));
                      }
                      {
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                        __VERIFIER_nondet_memory(&firstname6, sizeof(firstname6));
                      }
                      {
                        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                        __VERIFIER_nondet_memory(&dataString4, sizeof(dataString4));
                      }
                      return ret_val357;
  int t358 = __retval1;
  return t358;
}

