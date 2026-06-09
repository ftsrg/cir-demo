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
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long _M_gcount; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__;
struct std__basic_ifstream_char__std__char_traits_char__ { struct std__basic_istream_char__std__char_traits_char__ __field0; struct std__basic_filebuf_char__std__char_traits_char__ _M_filebuf; struct std__basic_ios_char__std__char_traits_char__ __field2; };

extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
char __const_main_price[50];
char __const_main_isbn[50];
char __const_main_year[50];
char __const_main_book[50];
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base7goodbitE_const __attribute__((aligned(4))) = 0;
int _ZNSt8ios_base7failbitE_const __attribute__((aligned(4))) = 4;
int _ZNSt8ios_base2inE_const __attribute__((aligned(4))) = 8;
char _str[1];
char _str_1[12] = "catalog.txt";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cerr __attribute__((aligned(8)));
char _str_2[25] = "Could not open database.";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[43] = "<center><br/>Books available for sale<br/>";
char _str_4[39] = "<a href=\"/cgi-bin/logout.cgi\">Sign Out";
char _str_5[15] = "</a><br/><br/>";
char _str_6[40] = "<table border = \"1\" cellpadding = \"7\" >";
char _str_7[5] = "<tr>";
char _str_8[5] = "<td>";
char _str_9[6] = "</td>";
char _str_10[25] = "<td><form method=\"post\" ";
char _str_11[32] = "action=\"/cgi-bin/viewcart.cgi\">";
char _str_12[32] = "<input type=\"hidden\" name=\"add\"";
char _str_13[15] = "value=\"true\"/>";
char _str_14[33] = "<input type=\"hidden\" name=\"isbn\"";
char _str_15[8] = "value=\"";
char _str_16[4] = "\"/>";
char _str_17[21] = "<input type=\"submit\"";
char _str_18[15] = "value=\"Buy\"/>\n";
char _str_19[14] = "</form></td>\n";
char _str_20[7] = "</tr>\n";
char _str_21[32] = "</table></center></body></html>";
char _str_22[26] = "Content-type: text/html\n\n";
char _str_23[24] = "<?xml version = \"1.0\"?>";
char _str_24[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_25[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_26[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_27[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_28[39] = "<head><title>Login Page</title></head>";
char _str_29[7] = "<body>";
char _str_30[50] = "basic_string: construction from null is not valid";
char _str_31[24] = "basic_string::_M_create";
char _str_32[25] = "basic_string::_M_replace";
extern void *_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE[];
extern void *_ZTVSt9basic_iosIcSt11char_traitsIcEE[];
extern void exit(int p0);
void header();
int main();

extern unsigned char* _ZTTSt14basic_ifstreamIcSt11char_traitsIcEE[4] __attribute__((aligned(8)));

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z6headerv
void header() {
bb0:
  char* cast1 = (char*)&(_str_22);
  struct std__basic_ostream_char__std__char_traits_char__* std2;
  __VERIFIER_nondet_memory(&std2, sizeof(std2));
  char* cast3 = (char*)&(_str_23);
  struct std__basic_ostream_char__std__char_traits_char__* std4;
  __VERIFIER_nondet_memory(&std4, sizeof(std4));
  char* cast5 = (char*)&(_str_24);
  struct std__basic_ostream_char__std__char_traits_char__* std6;
  __VERIFIER_nondet_memory(&std6, sizeof(std6));
  char* cast7 = (char*)&(_str_25);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  char* cast9 = (char*)&(_str_26);
  struct std__basic_ostream_char__std__char_traits_char__* std10;
  __VERIFIER_nondet_memory(&std10, sizeof(std10));
  char* cast11 = (char*)&(_str_27);
  struct std__basic_ostream_char__std__char_traits_char__* std12;
  __VERIFIER_nondet_memory(&std12, sizeof(std12));
  char* cast13 = (char*)&(_str_28);
  struct std__basic_ostream_char__std__char_traits_char__* std14;
  __VERIFIER_nondet_memory(&std14, sizeof(std14));
  char* cast15 = (char*)&(_str_29);
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  return;
}

// function: main
int main() {
bb17:
  int __retval18;
  char book19[50];
  char year20[50];
  char isbn21[50];
  char price22[50];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ bookString23;
  struct std__allocator_char_ ref_tmp024;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ yearString25;
  struct std__allocator_char_ ref_tmp126;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ isbnString27;
  struct std__allocator_char_ ref_tmp228;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ priceString29;
  struct std__allocator_char_ ref_tmp330;
  _Bool nameTaken31;
  struct std__basic_ifstream_char__std__char_traits_char__ userData32;
  int c33 = 0;
  __retval18 = c33;
  // array copy
  __builtin_memcpy(book19, __const_main_book, (unsigned long)50 * sizeof(__const_main_book[0]));
  // array copy
  __builtin_memcpy(year20, __const_main_year, (unsigned long)50 * sizeof(__const_main_year[0]));
  // array copy
  __builtin_memcpy(isbn21, __const_main_isbn, (unsigned long)50 * sizeof(__const_main_isbn[0]));
  // array copy
  __builtin_memcpy(price22, __const_main_price, (unsigned long)50 * sizeof(__const_main_price[0]));
  char* cast34 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp024, sizeof(ref_tmp024));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&bookString23, sizeof(bookString23));
    __VERIFIER_nondet_memory(cast34, sizeof(*cast34));
    __VERIFIER_nondet_memory(&ref_tmp024, sizeof(ref_tmp024));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp024, sizeof(ref_tmp024));
  }
    char* cast35 = (char*)&(_str);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp126, sizeof(ref_tmp126));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&yearString25, sizeof(yearString25));
      __VERIFIER_nondet_memory(cast35, sizeof(*cast35));
      __VERIFIER_nondet_memory(&ref_tmp126, sizeof(ref_tmp126));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp126, sizeof(ref_tmp126));
    }
      char* cast36 = (char*)&(_str);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp228, sizeof(ref_tmp228));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&isbnString27, sizeof(isbnString27));
        __VERIFIER_nondet_memory(cast36, sizeof(*cast36));
        __VERIFIER_nondet_memory(&ref_tmp228, sizeof(ref_tmp228));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp228, sizeof(ref_tmp228));
      }
        char* cast37 = (char*)&(_str);
        // externalized std:: op: std::allocator<char>::allocator()
        __VERIFIER_nondet_memory(&ref_tmp330, sizeof(ref_tmp330));
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
          __VERIFIER_nondet_memory(&priceString29, sizeof(priceString29));
          __VERIFIER_nondet_memory(cast37, sizeof(*cast37));
          __VERIFIER_nondet_memory(&ref_tmp330, sizeof(ref_tmp330));
        {
          // externalized std:: op: std::allocator<char>::~allocator()
          __VERIFIER_nondet_memory(&ref_tmp330, sizeof(ref_tmp330));
        }
          _Bool c38 = 0;
          nameTaken31 = c38;
          char* cast39 = (char*)&(_str_1);
          int t40 = _ZNSt8ios_base2inE_const;
          // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::basic_ifstream(char const*, std::_Ios_Openmode)
          __VERIFIER_nondet_memory(&userData32, sizeof(userData32));
          __VERIFIER_nondet_memory(cast39, sizeof(*cast39));
              void** v41 = (void**)&(userData32);
              void* v42 = *((void**)v41);
              unsigned char* cast43 = (unsigned char*)v42;
              long c44 = -24;
              unsigned char* ptr45 = &(cast43)[c44];
              long* cast46 = (long*)ptr45;
              long t47 = *cast46;
              unsigned char* cast48 = (unsigned char*)&(userData32);
              unsigned char* ptr49 = &(cast48)[t47];
              struct std__basic_ifstream_char__std__char_traits_char__* cast50 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr49;
              struct std__basic_ios_char__std__char_traits_char__* cast51 = (struct std__basic_ios_char__std__char_traits_char__*)cast50;
              _Bool std52;
              __VERIFIER_nondet_memory(&std52, sizeof(std52));
              if (std52) {
                char* cast53 = (char*)&(_str_2);
                struct std__basic_ostream_char__std__char_traits_char__* std54;
                __VERIFIER_nondet_memory(&std54, sizeof(std54));
                int c55 = 1;
                exit(c55);
              }
            header();
            if (__cir_exc_active) {
              {
                // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
                __VERIFIER_nondet_memory(&userData32, sizeof(userData32));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&priceString29, sizeof(priceString29));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&isbnString27, sizeof(isbnString27));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&yearString25, sizeof(yearString25));
              }
              {
                // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
                __VERIFIER_nondet_memory(&bookString23, sizeof(bookString23));
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            char* cast56 = (char*)&(_str_3);
            struct std__basic_ostream_char__std__char_traits_char__* std57;
            __VERIFIER_nondet_memory(&std57, sizeof(std57));
            char* cast58 = (char*)&(_str_4);
            struct std__basic_ostream_char__std__char_traits_char__* std59;
            __VERIFIER_nondet_memory(&std59, sizeof(std59));
            char* cast60 = (char*)&(_str_5);
            struct std__basic_ostream_char__std__char_traits_char__* std61;
            __VERIFIER_nondet_memory(&std61, sizeof(std61));
            char* cast62 = (char*)&(_str_6);
            struct std__basic_ostream_char__std__char_traits_char__* std63;
            __VERIFIER_nondet_memory(&std63, sizeof(std63));
              while (1) {
                void** v64 = (void**)&(userData32);
                void* v65 = *((void**)v64);
                unsigned char* cast66 = (unsigned char*)v65;
                long c67 = -24;
                unsigned char* ptr68 = &(cast66)[c67];
                long* cast69 = (long*)ptr68;
                long t70 = *cast69;
                unsigned char* cast71 = (unsigned char*)&(userData32);
                unsigned char* ptr72 = &(cast71)[t70];
                struct std__basic_ifstream_char__std__char_traits_char__* cast73 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr72;
                struct std__basic_ios_char__std__char_traits_char__* cast74 = (struct std__basic_ios_char__std__char_traits_char__*)cast73;
                _Bool std75;
                __VERIFIER_nondet_memory(&std75, sizeof(std75));
                if (!std75) break;
                  struct std__basic_istream_char__std__char_traits_char__* base76 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData32) + 0);
                  char* cast77 = (char*)&(book19);
                  long c78 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* std79;
                  __VERIFIER_nondet_memory(&std79, sizeof(std79));
                  char* cast80 = (char*)&(book19);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std81;
                  __VERIFIER_nondet_memory(&std81, sizeof(std81));
                  struct std__basic_istream_char__std__char_traits_char__* base82 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData32) + 0);
                  char* cast83 = (char*)&(year20);
                  long c84 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* std85;
                  __VERIFIER_nondet_memory(&std85, sizeof(std85));
                  char* cast86 = (char*)&(year20);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std87;
                  __VERIFIER_nondet_memory(&std87, sizeof(std87));
                  struct std__basic_istream_char__std__char_traits_char__* base88 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData32) + 0);
                  char* cast89 = (char*)&(isbn21);
                  long c90 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* std91;
                  __VERIFIER_nondet_memory(&std91, sizeof(std91));
                  char* cast92 = (char*)&(isbn21);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std93;
                  __VERIFIER_nondet_memory(&std93, sizeof(std93));
                  struct std__basic_istream_char__std__char_traits_char__* base94 = (struct std__basic_istream_char__std__char_traits_char__*)((char *)&(userData32) + 0);
                  char* cast95 = (char*)&(price22);
                  long c96 = 50;
                  struct std__basic_istream_char__std__char_traits_char__* std97;
                  __VERIFIER_nondet_memory(&std97, sizeof(std97));
                  char* cast98 = (char*)&(price22);
                  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std99;
                  __VERIFIER_nondet_memory(&std99, sizeof(std99));
                  char* cast100 = (char*)&(_str_7);
                  struct std__basic_ostream_char__std__char_traits_char__* std101;
                  __VERIFIER_nondet_memory(&std101, sizeof(std101));
                  char* cast102 = (char*)&(_str_8);
                  struct std__basic_ostream_char__std__char_traits_char__* std103;
                  __VERIFIER_nondet_memory(&std103, sizeof(std103));
                  struct std__basic_ostream_char__std__char_traits_char__* std104;
                  __VERIFIER_nondet_memory(&std104, sizeof(std104));
                  char* cast105 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* std106;
                  __VERIFIER_nondet_memory(&std106, sizeof(std106));
                  char* cast107 = (char*)&(_str_8);
                  struct std__basic_ostream_char__std__char_traits_char__* std108;
                  __VERIFIER_nondet_memory(&std108, sizeof(std108));
                  struct std__basic_ostream_char__std__char_traits_char__* std109;
                  __VERIFIER_nondet_memory(&std109, sizeof(std109));
                  char* cast110 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* std111;
                  __VERIFIER_nondet_memory(&std111, sizeof(std111));
                  char* cast112 = (char*)&(_str_8);
                  struct std__basic_ostream_char__std__char_traits_char__* std113;
                  __VERIFIER_nondet_memory(&std113, sizeof(std113));
                  struct std__basic_ostream_char__std__char_traits_char__* std114;
                  __VERIFIER_nondet_memory(&std114, sizeof(std114));
                  char* cast115 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* std116;
                  __VERIFIER_nondet_memory(&std116, sizeof(std116));
                  char* cast117 = (char*)&(_str_8);
                  struct std__basic_ostream_char__std__char_traits_char__* std118;
                  __VERIFIER_nondet_memory(&std118, sizeof(std118));
                  struct std__basic_ostream_char__std__char_traits_char__* std119;
                  __VERIFIER_nondet_memory(&std119, sizeof(std119));
                  char* cast120 = (char*)&(_str_9);
                  struct std__basic_ostream_char__std__char_traits_char__* std121;
                  __VERIFIER_nondet_memory(&std121, sizeof(std121));
                    void** v122 = (void**)&(userData32);
                    void* v123 = *((void**)v122);
                    unsigned char* cast124 = (unsigned char*)v123;
                    long c125 = -24;
                    unsigned char* ptr126 = &(cast124)[c125];
                    long* cast127 = (long*)ptr126;
                    long t128 = *cast127;
                    unsigned char* cast129 = (unsigned char*)&(userData32);
                    unsigned char* ptr130 = &(cast129)[t128];
                    struct std__basic_ifstream_char__std__char_traits_char__* cast131 = (struct std__basic_ifstream_char__std__char_traits_char__*)ptr130;
                    struct std__basic_ios_char__std__char_traits_char__* cast132 = (struct std__basic_ios_char__std__char_traits_char__*)cast131;
                    _Bool std133;
                    __VERIFIER_nondet_memory(&std133, sizeof(std133));
                    if (std133) {
                      char* cast134 = (char*)&(_str_10);
                      struct std__basic_ostream_char__std__char_traits_char__* std135;
                      __VERIFIER_nondet_memory(&std135, sizeof(std135));
                      char* cast136 = (char*)&(_str_11);
                      struct std__basic_ostream_char__std__char_traits_char__* std137;
                      __VERIFIER_nondet_memory(&std137, sizeof(std137));
                      char* cast138 = (char*)&(_str_12);
                      struct std__basic_ostream_char__std__char_traits_char__* std139;
                      __VERIFIER_nondet_memory(&std139, sizeof(std139));
                      char* cast140 = (char*)&(_str_13);
                      struct std__basic_ostream_char__std__char_traits_char__* std141;
                      __VERIFIER_nondet_memory(&std141, sizeof(std141));
                      char* cast142 = (char*)&(_str_14);
                      struct std__basic_ostream_char__std__char_traits_char__* std143;
                      __VERIFIER_nondet_memory(&std143, sizeof(std143));
                      char* cast144 = (char*)&(_str_15);
                      struct std__basic_ostream_char__std__char_traits_char__* std145;
                      __VERIFIER_nondet_memory(&std145, sizeof(std145));
                      struct std__basic_ostream_char__std__char_traits_char__* std146;
                      __VERIFIER_nondet_memory(&std146, sizeof(std146));
                      char* cast147 = (char*)&(_str_16);
                      struct std__basic_ostream_char__std__char_traits_char__* std148;
                      __VERIFIER_nondet_memory(&std148, sizeof(std148));
                      char* cast149 = (char*)&(_str_17);
                      struct std__basic_ostream_char__std__char_traits_char__* std150;
                      __VERIFIER_nondet_memory(&std150, sizeof(std150));
                      char* cast151 = (char*)&(_str_18);
                      struct std__basic_ostream_char__std__char_traits_char__* std152;
                      __VERIFIER_nondet_memory(&std152, sizeof(std152));
                      char* cast153 = (char*)&(_str_19);
                      struct std__basic_ostream_char__std__char_traits_char__* std154;
                      __VERIFIER_nondet_memory(&std154, sizeof(std154));
                    }
                  char* cast155 = (char*)&(_str_20);
                  struct std__basic_ostream_char__std__char_traits_char__* std156;
                  __VERIFIER_nondet_memory(&std156, sizeof(std156));
              }
            char* cast157 = (char*)&(_str_21);
            struct std__basic_ostream_char__std__char_traits_char__* std158;
            __VERIFIER_nondet_memory(&std158, sizeof(std158));
            int c159 = 0;
            __retval18 = c159;
            int t160 = __retval18;
            int ret_val161 = t160;
            {
              // externalized std:: op: std::basic_ifstream<char, std::char_traits<char> >::~basic_ifstream()
              __VERIFIER_nondet_memory(&userData32, sizeof(userData32));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&priceString29, sizeof(priceString29));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&isbnString27, sizeof(isbnString27));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&yearString25, sizeof(yearString25));
            }
            {
              // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
              __VERIFIER_nondet_memory(&bookString23, sizeof(bookString23));
            }
            return ret_val161;
  int t162 = __retval18;
  return t162;
}

