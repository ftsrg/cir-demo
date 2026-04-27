// Struct definitions (auto-parsed)
union anon_0 { unsigned long long _M_allocated_capacity; char _M_local_buf[16]; };
struct std::__cxx11::basic_string<char>::_Alloc_hider { char* _M_p; };
struct std::__new_allocator<char> { unsigned char __placeholder; };
struct std::allocator<char> { unsigned char __placeholder; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };
struct std::ios_base { int _M_flags; };
struct std::__cxx11::basic_string<char> { struct std::__cxx11::basic_string<char>::_Alloc_hider _M_dataplus; union anon_0 field1; unsigned long long _M_string_length; union anon_0 field3; union anon_0 field4; union anon_0 field5; union anon_0 field6; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[26];
char _str_8[11];
char _str_9[12];
char _str_10[8];
char _str_11[10];
char _str_12[9];
char _str_1[19];
struct std::basic_istream<char> _ZSt3cin;
char _str_2[25];
char _str_3[26];
char _str_4[28];
char _str_5[47] = "1234567890abcdefghijklmnopqrstuvwxyz1234567890";
char _str_13[21];
char _str_14[24];
char _str_6[19];
char _str_15[29];
char _str_7[42];
// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std::__cxx11::basic_string<char>* v0) {
  void* v1;
  unsigned int v2;
bb3:
  struct std::allocator<char> ref.tmp011;
  int this12[16];
  this12 = v0;
  struct std::__cxx11::basic_string<char>* t13 = this12;
  goto bb4;
bb4:
  char* r14 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t13);
  _ZNSaIcEC2Ev(&ref.tmp011);
  goto bb5;
bb5:
