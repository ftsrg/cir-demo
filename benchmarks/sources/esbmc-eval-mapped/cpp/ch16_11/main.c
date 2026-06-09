extern void abort(void);
// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "Content-type: text/html\n\n";
char _str_1[24] = "<?xml version = \"1.0\"?>";
char _str_2[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_3[18] = "Transitional//EN\"";
char _str_4[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_5[39] = "<head><title>Logged Out</title></head>";
char _str_6[7] = "<body>";
char _str_7[38] = "<center><p>You are now logged out<br>";
char _str_8[35] = "You will be billed accordingly<br>";
char _str_9[17] = "To login again, ";
char _str_10[44] = "<a href=\"/cgi-bin/login.cgi\">click here</a>";
char _str_11[16] = "</body></html>\n";
char _str_12[31] = "Friday, 14-MAY-10 16:00:00 GMT";
char _str_13[28] = "set-cookie: CART=; expires=";
char _str_14[9] = "; path=\n";
char _str_15[50] = "basic_string: construction from null is not valid";
char _str_16[24] = "basic_string::_M_create";
void writeCookie();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: _Z11writeCookiev
void writeCookie() {
bb0:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ expires1;
  struct std__allocator_char_ ref_tmp02;
  char* cast3 = (char*)&(_str_12);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp02, sizeof(ref_tmp02));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&expires1, sizeof(expires1));
    __VERIFIER_nondet_memory(cast3, sizeof(*cast3));
    __VERIFIER_nondet_memory(&ref_tmp02, sizeof(ref_tmp02));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp02, sizeof(ref_tmp02));
  }
    char* cast4 = (char*)&(_str_13);
    struct std__basic_ostream_char__std__char_traits_char__* std5;
    __VERIFIER_nondet_memory(&std5, sizeof(std5));
    struct std__basic_ostream_char__std__char_traits_char__* std6;
    __VERIFIER_nondet_memory(&std6, sizeof(std6));
    char* cast7 = (char*)&(_str_14);
    struct std__basic_ostream_char__std__char_traits_char__* std8;
    __VERIFIER_nondet_memory(&std8, sizeof(std8));
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&expires1, sizeof(expires1));
  }
  return;
}

// function: main
int main() {
bb9:
  int __retval10;
  int c11 = 0;
  __retval10 = c11;
  writeCookie();
  char* cast12 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  char* cast14 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std15;
  __VERIFIER_nondet_memory(&std15, sizeof(std15));
  char* cast16 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std17;
  __VERIFIER_nondet_memory(&std17, sizeof(std17));
  char* cast18 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std19;
  __VERIFIER_nondet_memory(&std19, sizeof(std19));
  char* cast20 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char* cast22 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  char* cast24 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std25;
  __VERIFIER_nondet_memory(&std25, sizeof(std25));
  char* cast26 = (char*)&(_str_7);
  struct std__basic_ostream_char__std__char_traits_char__* std27;
  __VERIFIER_nondet_memory(&std27, sizeof(std27));
  char* cast28 = (char*)&(_str_8);
  struct std__basic_ostream_char__std__char_traits_char__* std29;
  __VERIFIER_nondet_memory(&std29, sizeof(std29));
  char* cast30 = (char*)&(_str_9);
  struct std__basic_ostream_char__std__char_traits_char__* std31;
  __VERIFIER_nondet_memory(&std31, sizeof(std31));
  char* cast32 = (char*)&(_str_10);
  struct std__basic_ostream_char__std__char_traits_char__* std33;
  __VERIFIER_nondet_memory(&std33, sizeof(std33));
  char* cast34 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* std35;
  __VERIFIER_nondet_memory(&std35, sizeof(std35));
  int c36 = 0;
  __retval10 = c36;
  int t37 = __retval10;
  return t37;
}

