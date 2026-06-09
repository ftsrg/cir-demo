// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
extern void std____istream_extract(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___256ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern int std__istream__get(struct std__basic_istream_char__std__char_traits_char__* p0);
int main();

// function: _ZStrsIcSt11char_traitsIcELm256EERSt13basic_istreamIT_T0_ES6_RAT1__S3_
struct std__basic_istream_char__std__char_traits_char__* std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___256ul__std__basic_istream_char__std__char_traits_char______char_(struct std__basic_istream_char__std__char_traits_char__* v0, char* v1) {
bb2:
  struct std__basic_istream_char__std__char_traits_char__* __in3;
  char* __s4;
  struct std__basic_istream_char__std__char_traits_char__* __retval5;
  __in3 = v0;
  __s4 = v1;
  struct std__basic_istream_char__std__char_traits_char__* t6 = __in3;
  char* t7 = __s4;
  char* cast8 = (char*)t7;
  long c9 = 256;
  std____istream_extract(t6, cast8, c9);
  struct std__basic_istream_char__std__char_traits_char__* t10 = __in3;
  __retval5 = t10;
  struct std__basic_istream_char__std__char_traits_char__* t11 = __retval5;
  return t11;
}

// function: main
int main() {
bb12:
  int __retval13;
  char c14;
  char str15[256];
  int c16 = 0;
  __retval13 = c16;
  struct std__basic_istream_char__std__char_traits_char__* r17 = std__basic_istream_char__std__char_traits_char_____std__operator___char__std__char_traits_char___256ul__std__basic_istream_char__std__char_traits_char______char_(&_ZSt3cin, str15);
  int r18 = std__istream__get(&_ZSt3cin);
  struct std__basic_ostream_char__std__char_traits_char__* r19 = std__ostream__operator__(&_ZSt4cout, r18);
  int c20 = 0;
  __retval13 = c20;
  int t21 = __retval13;
  return t21;
}

