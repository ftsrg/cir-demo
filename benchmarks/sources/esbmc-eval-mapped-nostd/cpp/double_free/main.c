extern void abort(void);
// Struct definitions (auto-parsed)
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myclass destroyed\n";
char _str_1[21] = "myclass constructed\n";
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete__(void* p0, unsigned long p1) { free(p0); }
void myclass___myclass(struct myclass* p0);
void my_delete(struct myclass* p0);
void* operator_new__(unsigned long p0) { return malloc(p0); }
void myclass__myclass(struct myclass* p0);
int main();
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);

// function: _ZN7myclassD2Ev
void myclass___myclass(struct myclass* v0) {
bb1:
  struct myclass* this2;
  this2 = v0;
  struct myclass* t3 = this2;
  char* cast4 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r5 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast4);
  return;
}

// function: _Z9my_deleteP7myclass
void my_delete(struct myclass* v6) {
bb7:
  struct myclass* q8;
  q8 = v6;
  struct myclass* t9 = q8;
  struct myclass* c10 = ((void*)0);
  _Bool c11 = ((t9 != c10)) ? 1 : 0;
  if (c11) {
    unsigned char* cast12 = (unsigned char*)t9;
    long c13 = -8;
    unsigned char* ptr14 = &(cast12)[c13];
    void* cast15 = (void*)ptr14;
    unsigned long* cast16 = (unsigned long*)ptr14;
    unsigned long t17 = *cast16;
      struct myclass* ptr18 = &(t9)[t17];
      _Bool c19 = ((ptr18 != t9)) ? 1 : 0;
      if (c19) {
        struct myclass* __array_idx20;
        __array_idx20 = ptr18;
        do {
          struct myclass* t21 = __array_idx20;
          long c22 = -1;
          struct myclass* ptr23 = &(t21)[c22];
          __array_idx20 = ptr23;
          myclass___myclass(ptr23);
          struct myclass* t24 = __array_idx20;
          _Bool c25 = ((t24 != t9)) ? 1 : 0;
          if (!c25) break;
        } while (1);
      }
    {
      unsigned long c26 = 1;
      unsigned long b27 = c26 * t17;
      unsigned long c28 = 8;
      unsigned long b29 = b27 + c28;
      operator_delete__(cast15, b29);
    }
  }
  return;
}

// function: _ZN7myclassC2Ev
void myclass__myclass(struct myclass* v30) {
bb31:
  struct myclass* this32;
  this32 = v30;
  struct myclass* t33 = this32;
  char* cast34 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r35 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast34);
  return;
}

// function: main
int main() {
bb36:
  int __retval37;
  struct myclass* pt38;
  struct myclass* __new_result39;
  int c40 = 0;
  __retval37 = c40;
  unsigned long c41 = 3;
  unsigned long c42 = 11;
  void* r43 = operator_new__(c42);
    unsigned char* cast44 = (unsigned char*)r43;
    unsigned long* cast45 = (unsigned long*)cast44;
    *cast45 = c41;
    int c46 = 8;
    unsigned char* ptr47 = &(cast44)[c46];
    void* cast48 = (void*)ptr47;
    struct myclass* cast49 = (struct myclass*)cast48;
    __new_result39 = cast49;
    struct myclass* cast50 = (struct myclass*)cast49;
    unsigned long c51 = 3;
    struct myclass* cast52 = (struct myclass*)cast50;
    struct myclass* ptr53 = &(cast52)[c51];
    struct myclass* __array_idx54;
    __array_idx54 = cast52;
      do {
        struct myclass* t55 = __array_idx54;
        myclass__myclass(t55);
        unsigned long c56 = 1;
        struct myclass* ptr57 = &(t55)[c56];
        __array_idx54 = ptr57;
        struct myclass* t58 = __array_idx54;
        _Bool c59 = ((t58 != ptr53)) ? 1 : 0;
        if (!c59) break;
      } while (1);
  struct myclass* t60 = __new_result39;
  pt38 = t60;
  struct myclass* t61 = pt38;
  struct myclass* c62 = ((void*)0);
  _Bool c63 = ((t61 != c62)) ? 1 : 0;
  if (c63) {
    unsigned char* cast64 = (unsigned char*)t61;
    long c65 = -8;
    unsigned char* ptr66 = &(cast64)[c65];
    void* cast67 = (void*)ptr66;
    unsigned long* cast68 = (unsigned long*)ptr66;
    unsigned long t69 = *cast68;
      struct myclass* ptr70 = &(t61)[t69];
      _Bool c71 = ((ptr70 != t61)) ? 1 : 0;
      if (c71) {
        struct myclass* __array_idx72;
        __array_idx72 = ptr70;
        do {
          struct myclass* t73 = __array_idx72;
          long c74 = -1;
          struct myclass* ptr75 = &(t73)[c74];
          __array_idx72 = ptr75;
          myclass___myclass(ptr75);
          struct myclass* t76 = __array_idx72;
          _Bool c77 = ((t76 != t61)) ? 1 : 0;
          if (!c77) break;
        } while (1);
      }
    {
      unsigned long c78 = 1;
      unsigned long b79 = c78 * t69;
      unsigned long c80 = 8;
      unsigned long b81 = b79 + c80;
      operator_delete__(cast67, b81);
    }
  }
  struct myclass* t82 = pt38;
  my_delete(t82);
  int c83 = 0;
  __retval37 = c83;
  int t84 = __retval37;
  return t84;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v85, int v86) {
bb87:
  int __a88;
  int __b89;
  int __retval90;
  __a88 = v85;
  __b89 = v86;
  int t91 = __a88;
  int t92 = __b89;
  int b93 = t91 | t92;
  __retval90 = b93;
  int t94 = __retval90;
  return t94;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v95) {
bb96:
  struct std__basic_ios_char__std__char_traits_char__* this97;
  int __retval98;
  this97 = v95;
  struct std__basic_ios_char__std__char_traits_char__* t99 = this97;
  struct std__ios_base* base100 = (struct std__ios_base*)((char *)t99 + 0);
  int t101 = base100->_M_streambuf_state;
  __retval98 = t101;
  int t102 = __retval98;
  return t102;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v103, int v104) {
bb105:
  struct std__basic_ios_char__std__char_traits_char__* this106;
  int __state107;
  this106 = v103;
  __state107 = v104;
  struct std__basic_ios_char__std__char_traits_char__* t108 = this106;
  int r109 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t108);
  int t110 = __state107;
  int r111 = std__operator_(r109, t110);
  std__basic_ios_char__std__char_traits_char_____clear(t108, r111);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb112:
  _Bool __retval113;
    _Bool c114 = 0;
    __retval113 = c114;
    _Bool t115 = __retval113;
    return t115;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v116, char* v117) {
bb118:
  char* __c1119;
  char* __c2120;
  _Bool __retval121;
  __c1119 = v116;
  __c2120 = v117;
  char* t122 = __c1119;
  char t123 = *t122;
  int cast124 = (int)t123;
  char* t125 = __c2120;
  char t126 = *t125;
  int cast127 = (int)t126;
  _Bool c128 = ((cast124 == cast127)) ? 1 : 0;
  __retval121 = c128;
  _Bool t129 = __retval121;
  return t129;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v130) {
bb131:
  char* __p132;
  unsigned long __retval133;
  unsigned long __i134;
  __p132 = v130;
  unsigned long c135 = 0;
  __i134 = c135;
    char ref_tmp0136;
    while (1) {
      unsigned long t137 = __i134;
      char* t138 = __p132;
      char* ptr139 = &(t138)[t137];
      char c140 = 0;
      ref_tmp0136 = c140;
      _Bool r141 = __gnu_cxx__char_traits_char___eq(ptr139, &ref_tmp0136);
      _Bool u142 = !r141;
      if (!u142) break;
      unsigned long t143 = __i134;
      unsigned long u144 = t143 + 1;
      __i134 = u144;
    }
  unsigned long t145 = __i134;
  __retval133 = t145;
  unsigned long t146 = __retval133;
  return t146;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v147) {
bb148:
  char* __s149;
  unsigned long __retval150;
  __s149 = v147;
    _Bool r151 = std____is_constant_evaluated();
    if (r151) {
      char* t152 = __s149;
      unsigned long r153 = __gnu_cxx__char_traits_char___length(t152);
      __retval150 = r153;
      unsigned long t154 = __retval150;
      return t154;
    }
  char* t155 = __s149;
  unsigned long r156 = strlen(t155);
  __retval150 = r156;
  unsigned long t157 = __retval150;
  return t157;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v158, char* v159) {
bb160:
  struct std__basic_ostream_char__std__char_traits_char__* __out161;
  char* __s162;
  struct std__basic_ostream_char__std__char_traits_char__* __retval163;
  __out161 = v158;
  __s162 = v159;
    char* t164 = __s162;
    _Bool cast165 = (_Bool)t164;
    _Bool u166 = !cast165;
    if (u166) {
      struct std__basic_ostream_char__std__char_traits_char__* t167 = __out161;
      void** v168 = (void**)t167;
      void* v169 = *((void**)v168);
      unsigned char* cast170 = (unsigned char*)v169;
      long c171 = -24;
      unsigned char* ptr172 = &(cast170)[c171];
      long* cast173 = (long*)ptr172;
      long t174 = *cast173;
      unsigned char* cast175 = (unsigned char*)t167;
      unsigned char* ptr176 = &(cast175)[t174];
      struct std__basic_ostream_char__std__char_traits_char__* cast177 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr176;
      struct std__basic_ios_char__std__char_traits_char__* cast178 = (struct std__basic_ios_char__std__char_traits_char__*)cast177;
      int t179 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast178, t179);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t180 = __out161;
      char* t181 = __s162;
      char* t182 = __s162;
      unsigned long r183 = std__char_traits_char___length(t182);
      long cast184 = (long)r183;
      struct std__basic_ostream_char__std__char_traits_char__* r185 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t180, t181, cast184);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __out161;
  __retval163 = t186;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __retval163;
  return t187;
}

