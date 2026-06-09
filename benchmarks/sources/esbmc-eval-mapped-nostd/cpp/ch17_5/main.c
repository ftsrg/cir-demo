extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct TreeNode_double_ { struct TreeNode_double_* leftPtr; double data; struct TreeNode_double_* rightPtr; };
struct TreeNode_int_ { struct TreeNode_int_* leftPtr; int data; struct TreeNode_int_* rightPtr; };
struct Tree_double_ { struct TreeNode_double_* rootPtr; };
struct Tree_int_ { struct TreeNode_int_* rootPtr; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Setprecision { int _M_n; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long _M_precision; long _M_width; int _M_flags; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "Enter 10 integer values:\n";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_1[21] = "\nPreorder traversal\n";
char _str_2[20] = "\nInorder traversal\n";
char _str_3[22] = "\nPostorder traversal\n";
char _str_4[28] = "\n\n\nEnter 10 double values:\n";
char _str_5[5] = " dup";
void Tree_int___Tree(struct Tree_int_* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__3(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void TreeNode_int___TreeNode(struct TreeNode_int_* p0, int* p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
void Tree_int___insertNodeHelper(struct Tree_int_* p0, struct TreeNode_int_** p1, int* p2);
void Tree_int___insertNode(struct Tree_int_* p0, int* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
void Tree_int___preOrderHelper_TreeNode_int____const(struct Tree_int_* p0, struct TreeNode_int_* p1);
void Tree_int___preOrderTraversal___const(struct Tree_int_* p0);
void Tree_int___inOrderHelper_TreeNode_int____const(struct Tree_int_* p0, struct TreeNode_int_* p1);
void Tree_int___inOrderTraversal___const(struct Tree_int_* p0);
void Tree_int___postOrderHelper_TreeNode_int____const(struct Tree_int_* p0, struct TreeNode_int_* p1);
void Tree_int___postOrderTraversal___const(struct Tree_int_* p0);
void Tree_double___Tree(struct Tree_double_* p0);
long std__ios_base__precision(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setprecision p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
int* std__operator__(int* p0, int p1);
int std__operator__2(int p0);
int std__operator__4(int p0, int p1);
int* std__operator___2(int* p0, int p1);
int std__operator_(int p0, int p1);
int std__ios_base__setf(struct std__ios_base* p0, int p1, int p2);
struct std__ios_base* std__fixed(struct std__ios_base* p0);
struct std___Setprecision std__setprecision(int p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
void TreeNode_double___TreeNode(struct TreeNode_double_* p0, double* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
void Tree_double___insertNodeHelper(struct Tree_double_* p0, struct TreeNode_double_** p1, double* p2);
void Tree_double___insertNode(struct Tree_double_* p0, double* p1);
void Tree_double___preOrderHelper_TreeNode_double____const(struct Tree_double_* p0, struct TreeNode_double_* p1);
void Tree_double___preOrderTraversal___const(struct Tree_double_* p0);
void Tree_double___inOrderHelper_TreeNode_double____const(struct Tree_double_* p0, struct TreeNode_double_* p1);
void Tree_double___inOrderTraversal___const(struct Tree_double_* p0);
void Tree_double___postOrderHelper_TreeNode_double____const(struct Tree_double_* p0, struct TreeNode_double_* p1);
void Tree_double___postOrderTraversal___const(struct Tree_double_* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
int main();

// function: _ZN4TreeIiEC2Ev
void Tree_int___Tree(struct Tree_int_* v0) {
bb1:
  struct Tree_int_* this2;
  this2 = v0;
  struct Tree_int_* t3 = this2;
  struct TreeNode_int_* c4 = ((void*)0);
  t3->rootPtr = c4;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__3(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  int t30 = __state27;
  int r31 = std__operator__3(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb32:
  _Bool __retval33;
    _Bool c34 = 0;
    __retval33 = c34;
    _Bool t35 = __retval33;
    return t35;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v36, char* v37) {
bb38:
  char* __c139;
  char* __c240;
  _Bool __retval41;
  __c139 = v36;
  __c240 = v37;
  char* t42 = __c139;
  char t43 = *t42;
  int cast44 = (int)t43;
  char* t45 = __c240;
  char t46 = *t45;
  int cast47 = (int)t46;
  _Bool c48 = ((cast44 == cast47)) ? 1 : 0;
  __retval41 = c48;
  _Bool t49 = __retval41;
  return t49;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v50) {
bb51:
  char* __p52;
  unsigned long __retval53;
  unsigned long __i54;
  __p52 = v50;
  unsigned long c55 = 0;
  __i54 = c55;
    char ref_tmp056;
    while (1) {
      unsigned long t57 = __i54;
      char* t58 = __p52;
      char* ptr59 = &(t58)[t57];
      char c60 = 0;
      ref_tmp056 = c60;
      _Bool r61 = __gnu_cxx__char_traits_char___eq(ptr59, &ref_tmp056);
      _Bool u62 = !r61;
      if (!u62) break;
      unsigned long t63 = __i54;
      unsigned long u64 = t63 + 1;
      __i54 = u64;
    }
  unsigned long t65 = __i54;
  __retval53 = t65;
  unsigned long t66 = __retval53;
  return t66;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v67) {
bb68:
  char* __s69;
  unsigned long __retval70;
  __s69 = v67;
    _Bool r71 = std____is_constant_evaluated();
    if (r71) {
      char* t72 = __s69;
      unsigned long r73 = __gnu_cxx__char_traits_char___length(t72);
      __retval70 = r73;
      unsigned long t74 = __retval70;
      return t74;
    }
  char* t75 = __s69;
  unsigned long r76 = strlen(t75);
  __retval70 = r76;
  unsigned long t77 = __retval70;
  return t77;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v78, char* v79) {
bb80:
  struct std__basic_ostream_char__std__char_traits_char__* __out81;
  char* __s82;
  struct std__basic_ostream_char__std__char_traits_char__* __retval83;
  __out81 = v78;
  __s82 = v79;
    char* t84 = __s82;
    _Bool cast85 = (_Bool)t84;
    _Bool u86 = !cast85;
    if (u86) {
      struct std__basic_ostream_char__std__char_traits_char__* t87 = __out81;
      void** v88 = (void**)t87;
      void* v89 = *((void**)v88);
      unsigned char* cast90 = (unsigned char*)v89;
      long c91 = -24;
      unsigned char* ptr92 = &(cast90)[c91];
      long* cast93 = (long*)ptr92;
      long t94 = *cast93;
      unsigned char* cast95 = (unsigned char*)t87;
      unsigned char* ptr96 = &(cast95)[t94];
      struct std__basic_ostream_char__std__char_traits_char__* cast97 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr96;
      struct std__basic_ios_char__std__char_traits_char__* cast98 = (struct std__basic_ios_char__std__char_traits_char__*)cast97;
      int t99 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast98, t99);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t100 = __out81;
      char* t101 = __s82;
      char* t102 = __s82;
      unsigned long r103 = std__char_traits_char___length(t102);
      long cast104 = (long)r103;
      struct std__basic_ostream_char__std__char_traits_char__* r105 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t100, t101, cast104);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t106 = __out81;
  __retval83 = t106;
  struct std__basic_ostream_char__std__char_traits_char__* t107 = __retval83;
  return t107;
}

// function: _ZN8TreeNodeIiEC2ERKi
void TreeNode_int___TreeNode(struct TreeNode_int_* v108, int* v109) {
bb110:
  struct TreeNode_int_* this111;
  int* d112;
  this111 = v108;
  d112 = v109;
  struct TreeNode_int_* t113 = this111;
  struct TreeNode_int_* c114 = ((void*)0);
  t113->leftPtr = c114;
  int* t115 = d112;
  int t116 = *t115;
  t113->data = t116;
  struct TreeNode_int_* c117 = ((void*)0);
  t113->rightPtr = c117;
  return;
}

// function: _ZN4TreeIiE16insertNodeHelperEPP8TreeNodeIiERKi
void Tree_int___insertNodeHelper(struct Tree_int_* v118, struct TreeNode_int_** v119, int* v120) {
bb121:
  struct Tree_int_* this122;
  struct TreeNode_int_** ptr123;
  int* value124;
  this122 = v118;
  ptr123 = v119;
  value124 = v120;
  struct Tree_int_* t125 = this122;
    struct TreeNode_int_** t126 = ptr123;
    struct TreeNode_int_* t127 = *t126;
    struct TreeNode_int_* c128 = ((void*)0);
    _Bool c129 = ((t127 == c128)) ? 1 : 0;
    if (c129) {
      struct TreeNode_int_* __new_result130;
      unsigned long c131 = 24;
      void* r132 = operator_new(c131);
        struct TreeNode_int_* cast133 = (struct TreeNode_int_*)r132;
        __new_result130 = cast133;
        int* t134 = value124;
        TreeNode_int___TreeNode(cast133, t134);
      struct TreeNode_int_* t135 = __new_result130;
      struct TreeNode_int_** t136 = ptr123;
      *t136 = t135;
    } else {
        int* t137 = value124;
        int t138 = *t137;
        struct TreeNode_int_** t139 = ptr123;
        struct TreeNode_int_* t140 = *t139;
        int t141 = t140->data;
        _Bool c142 = ((t138 < t141)) ? 1 : 0;
        if (c142) {
          struct TreeNode_int_** t143 = ptr123;
          struct TreeNode_int_* t144 = *t143;
          int* t145 = value124;
          Tree_int___insertNodeHelper(t125, &t144->leftPtr, t145);
        } else {
            int* t146 = value124;
            int t147 = *t146;
            struct TreeNode_int_** t148 = ptr123;
            struct TreeNode_int_* t149 = *t148;
            int t150 = t149->data;
            _Bool c151 = ((t147 > t150)) ? 1 : 0;
            if (c151) {
              struct TreeNode_int_** t152 = ptr123;
              struct TreeNode_int_* t153 = *t152;
              int* t154 = value124;
              Tree_int___insertNodeHelper(t125, &t153->rightPtr, t154);
            } else {
              int* t155 = value124;
              int t156 = *t155;
              struct std__basic_ostream_char__std__char_traits_char__* r157 = std__ostream__operator___2(&_ZSt4cout, t156);
              char* cast158 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* r159 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r157, cast158);
              struct std__basic_ostream_char__std__char_traits_char__* r160 = std__ostream__operator___std__ostream_____(r159, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            }
        }
    }
  return;
}

// function: _ZN4TreeIiE10insertNodeERKi
void Tree_int___insertNode(struct Tree_int_* v161, int* v162) {
bb163:
  struct Tree_int_* this164;
  int* value165;
  this164 = v161;
  value165 = v162;
  struct Tree_int_* t166 = this164;
  int* t167 = value165;
  Tree_int___insertNodeHelper(t166, &t166->rootPtr, t167);
  return;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v168) {
bb169:
  struct std__ios_base* this170;
  long __retval171;
  this170 = v168;
  struct std__ios_base* t172 = this170;
  long t173 = t172->_M_width;
  __retval171 = t173;
  long t174 = __retval171;
  return t174;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v175, char v176) {
bb177:
  struct std__basic_ostream_char__std__char_traits_char__* __out178;
  char __c179;
  struct std__basic_ostream_char__std__char_traits_char__* __retval180;
  __out178 = v175;
  __c179 = v176;
    struct std__basic_ostream_char__std__char_traits_char__* t181 = __out178;
    void** v182 = (void**)t181;
    void* v183 = *((void**)v182);
    unsigned char* cast184 = (unsigned char*)v183;
    long c185 = -24;
    unsigned char* ptr186 = &(cast184)[c185];
    long* cast187 = (long*)ptr186;
    long t188 = *cast187;
    unsigned char* cast189 = (unsigned char*)t181;
    unsigned char* ptr190 = &(cast189)[t188];
    struct std__basic_ostream_char__std__char_traits_char__* cast191 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr190;
    struct std__ios_base* cast192 = (struct std__ios_base*)cast191;
    long r193 = std__ios_base__width___const(cast192);
    long c194 = 0;
    _Bool c195 = ((r193 != c194)) ? 1 : 0;
    if (c195) {
      struct std__basic_ostream_char__std__char_traits_char__* t196 = __out178;
      long c197 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r198 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t196, &__c179, c197);
      __retval180 = r198;
      struct std__basic_ostream_char__std__char_traits_char__* t199 = __retval180;
      return t199;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t200 = __out178;
  char t201 = __c179;
  struct std__basic_ostream_char__std__char_traits_char__* r202 = std__ostream__put(t200, t201);
  struct std__basic_ostream_char__std__char_traits_char__* t203 = __out178;
  __retval180 = t203;
  struct std__basic_ostream_char__std__char_traits_char__* t204 = __retval180;
  return t204;
}

// function: _ZNK4TreeIiE14preOrderHelperEP8TreeNodeIiE
void Tree_int___preOrderHelper_TreeNode_int____const(struct Tree_int_* v205, struct TreeNode_int_* v206) {
bb207:
  struct Tree_int_* this208;
  struct TreeNode_int_* ptr209;
  this208 = v205;
  ptr209 = v206;
  struct Tree_int_* t210 = this208;
    struct TreeNode_int_* t211 = ptr209;
    struct TreeNode_int_* c212 = ((void*)0);
    _Bool c213 = ((t211 != c212)) ? 1 : 0;
    if (c213) {
      struct TreeNode_int_* t214 = ptr209;
      int t215 = t214->data;
      struct std__basic_ostream_char__std__char_traits_char__* r216 = std__ostream__operator___2(&_ZSt4cout, t215);
      char c217 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r218 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r216, c217);
      struct TreeNode_int_* t219 = ptr209;
      struct TreeNode_int_* t220 = t219->leftPtr;
      Tree_int___preOrderHelper_TreeNode_int____const(t210, t220);
      struct TreeNode_int_* t221 = ptr209;
      struct TreeNode_int_* t222 = t221->rightPtr;
      Tree_int___preOrderHelper_TreeNode_int____const(t210, t222);
    }
  return;
}

// function: _ZNK4TreeIiE17preOrderTraversalEv
void Tree_int___preOrderTraversal___const(struct Tree_int_* v223) {
bb224:
  struct Tree_int_* this225;
  this225 = v223;
  struct Tree_int_* t226 = this225;
  struct TreeNode_int_* t227 = t226->rootPtr;
  Tree_int___preOrderHelper_TreeNode_int____const(t226, t227);
  return;
}

// function: _ZNK4TreeIiE13inOrderHelperEP8TreeNodeIiE
void Tree_int___inOrderHelper_TreeNode_int____const(struct Tree_int_* v228, struct TreeNode_int_* v229) {
bb230:
  struct Tree_int_* this231;
  struct TreeNode_int_* ptr232;
  this231 = v228;
  ptr232 = v229;
  struct Tree_int_* t233 = this231;
    struct TreeNode_int_* t234 = ptr232;
    struct TreeNode_int_* c235 = ((void*)0);
    _Bool c236 = ((t234 != c235)) ? 1 : 0;
    if (c236) {
      struct TreeNode_int_* t237 = ptr232;
      struct TreeNode_int_* t238 = t237->leftPtr;
      Tree_int___inOrderHelper_TreeNode_int____const(t233, t238);
      struct TreeNode_int_* t239 = ptr232;
      int t240 = t239->data;
      struct std__basic_ostream_char__std__char_traits_char__* r241 = std__ostream__operator___2(&_ZSt4cout, t240);
      char c242 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r243 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r241, c242);
      struct TreeNode_int_* t244 = ptr232;
      struct TreeNode_int_* t245 = t244->rightPtr;
      Tree_int___inOrderHelper_TreeNode_int____const(t233, t245);
    }
  return;
}

// function: _ZNK4TreeIiE16inOrderTraversalEv
void Tree_int___inOrderTraversal___const(struct Tree_int_* v246) {
bb247:
  struct Tree_int_* this248;
  this248 = v246;
  struct Tree_int_* t249 = this248;
  struct TreeNode_int_* t250 = t249->rootPtr;
  Tree_int___inOrderHelper_TreeNode_int____const(t249, t250);
  return;
}

// function: _ZNK4TreeIiE15postOrderHelperEP8TreeNodeIiE
void Tree_int___postOrderHelper_TreeNode_int____const(struct Tree_int_* v251, struct TreeNode_int_* v252) {
bb253:
  struct Tree_int_* this254;
  struct TreeNode_int_* ptr255;
  this254 = v251;
  ptr255 = v252;
  struct Tree_int_* t256 = this254;
    struct TreeNode_int_* t257 = ptr255;
    struct TreeNode_int_* c258 = ((void*)0);
    _Bool c259 = ((t257 != c258)) ? 1 : 0;
    if (c259) {
      struct TreeNode_int_* t260 = ptr255;
      struct TreeNode_int_* t261 = t260->leftPtr;
      Tree_int___postOrderHelper_TreeNode_int____const(t256, t261);
      struct TreeNode_int_* t262 = ptr255;
      struct TreeNode_int_* t263 = t262->rightPtr;
      Tree_int___postOrderHelper_TreeNode_int____const(t256, t263);
      struct TreeNode_int_* t264 = ptr255;
      int t265 = t264->data;
      struct std__basic_ostream_char__std__char_traits_char__* r266 = std__ostream__operator___2(&_ZSt4cout, t265);
      char c267 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r268 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r266, c267);
    }
  return;
}

// function: _ZNK4TreeIiE18postOrderTraversalEv
void Tree_int___postOrderTraversal___const(struct Tree_int_* v269) {
bb270:
  struct Tree_int_* this271;
  this271 = v269;
  struct Tree_int_* t272 = this271;
  struct TreeNode_int_* t273 = t272->rootPtr;
  Tree_int___postOrderHelper_TreeNode_int____const(t272, t273);
  return;
}

// function: _ZN4TreeIdEC2Ev
void Tree_double___Tree(struct Tree_double_* v274) {
bb275:
  struct Tree_double_* this276;
  this276 = v274;
  struct Tree_double_* t277 = this276;
  struct TreeNode_double_* c278 = ((void*)0);
  t277->rootPtr = c278;
  return;
}

// function: _ZNSt8ios_base9precisionEl
long std__ios_base__precision(struct std__ios_base* v279, long v280) {
bb281:
  struct std__ios_base* this282;
  long __prec283;
  long __retval284;
  long __old285;
  this282 = v279;
  __prec283 = v280;
  struct std__ios_base* t286 = this282;
  long t287 = t286->_M_precision;
  __old285 = t287;
  long t288 = __prec283;
  t286->_M_precision = t288;
  long t289 = __old285;
  __retval284 = t289;
  long t290 = __retval284;
  return t290;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v291, struct std___Setprecision v292) {
bb293:
  struct std__basic_ostream_char__std__char_traits_char__* __os294;
  struct std___Setprecision __f295;
  struct std__basic_ostream_char__std__char_traits_char__* __retval296;
  __os294 = v291;
  __f295 = v292;
  struct std__basic_ostream_char__std__char_traits_char__* t297 = __os294;
  void** v298 = (void**)t297;
  void* v299 = *((void**)v298);
  unsigned char* cast300 = (unsigned char*)v299;
  long c301 = -24;
  unsigned char* ptr302 = &(cast300)[c301];
  long* cast303 = (long*)ptr302;
  long t304 = *cast303;
  unsigned char* cast305 = (unsigned char*)t297;
  unsigned char* ptr306 = &(cast305)[t304];
  struct std__basic_ostream_char__std__char_traits_char__* cast307 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr306;
  struct std__ios_base* cast308 = (struct std__ios_base*)cast307;
  int t309 = __f295._M_n;
  long cast310 = (long)t309;
  long r311 = std__ios_base__precision(cast308, cast310);
  struct std__basic_ostream_char__std__char_traits_char__* t312 = __os294;
  __retval296 = t312;
  struct std__basic_ostream_char__std__char_traits_char__* t313 = __retval296;
  return t313;
}

// function: _ZNSolsEPFRSt8ios_baseS0_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ios_base_____(struct std__basic_ostream_char__std__char_traits_char__* v314, void* v315) {
bb316:
  struct std__basic_ostream_char__std__char_traits_char__* this317;
  void* __pf318;
  struct std__basic_ostream_char__std__char_traits_char__* __retval319;
  this317 = v314;
  __pf318 = v315;
  struct std__basic_ostream_char__std__char_traits_char__* t320 = this317;
  void* t321 = __pf318;
  void** v322 = (void**)t320;
  void* v323 = *((void**)v322);
  unsigned char* cast324 = (unsigned char*)v323;
  long c325 = -24;
  unsigned char* ptr326 = &(cast324)[c325];
  long* cast327 = (long*)ptr326;
  long t328 = *cast327;
  unsigned char* cast329 = (unsigned char*)t320;
  unsigned char* ptr330 = &(cast329)[t328];
  struct std__basic_ostream_char__std__char_traits_char__* cast331 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr330;
  struct std__ios_base* cast332 = (struct std__ios_base*)cast331;
  struct std__ios_base* r333 = ((struct std__ios_base* (*)(struct std__ios_base*))t321)(cast332);
  __retval319 = t320;
  struct std__basic_ostream_char__std__char_traits_char__* t334 = __retval319;
  return t334;
}

// function: _ZStaNRSt13_Ios_FmtflagsS_
int* std__operator__(int* v335, int v336) {
bb337:
  int* __a338;
  int __b339;
  int* __retval340;
  __a338 = v335;
  __b339 = v336;
  int* t341 = __a338;
  int t342 = *t341;
  int t343 = __b339;
  int r344 = std__operator_(t342, t343);
  int* t345 = __a338;
  *t345 = r344;
  __retval340 = t345;
  int* t346 = __retval340;
  return t346;
}

// function: _ZStcoSt13_Ios_Fmtflags
int std__operator__2(int v347) {
bb348:
  int __a349;
  int __retval350;
  __a349 = v347;
  int t351 = __a349;
  int u352 = ~t351;
  __retval350 = u352;
  int t353 = __retval350;
  return t353;
}

// function: _ZStorSt13_Ios_FmtflagsS_
int std__operator__4(int v354, int v355) {
bb356:
  int __a357;
  int __b358;
  int __retval359;
  __a357 = v354;
  __b358 = v355;
  int t360 = __a357;
  int t361 = __b358;
  int b362 = t360 | t361;
  __retval359 = b362;
  int t363 = __retval359;
  return t363;
}

// function: _ZStoRRSt13_Ios_FmtflagsS_
int* std__operator___2(int* v364, int v365) {
bb366:
  int* __a367;
  int __b368;
  int* __retval369;
  __a367 = v364;
  __b368 = v365;
  int* t370 = __a367;
  int t371 = *t370;
  int t372 = __b368;
  int r373 = std__operator__4(t371, t372);
  int* t374 = __a367;
  *t374 = r373;
  __retval369 = t374;
  int* t375 = __retval369;
  return t375;
}

// function: _ZStanSt13_Ios_FmtflagsS_
int std__operator_(int v376, int v377) {
bb378:
  int __a379;
  int __b380;
  int __retval381;
  __a379 = v376;
  __b380 = v377;
  int t382 = __a379;
  int t383 = __b380;
  int b384 = t382 & t383;
  __retval381 = b384;
  int t385 = __retval381;
  return t385;
}

// function: _ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
int std__ios_base__setf(struct std__ios_base* v386, int v387, int v388) {
bb389:
  struct std__ios_base* this390;
  int __fmtfl391;
  int __mask392;
  int __retval393;
  int __old394;
  this390 = v386;
  __fmtfl391 = v387;
  __mask392 = v388;
  struct std__ios_base* t395 = this390;
  int t396 = t395->_M_flags;
  __old394 = t396;
  int t397 = __mask392;
  int r398 = std__operator__2(t397);
  int* r399 = std__operator__(&t395->_M_flags, r398);
  int t400 = __fmtfl391;
  int t401 = __mask392;
  int r402 = std__operator_(t400, t401);
  int* r403 = std__operator___2(&t395->_M_flags, r402);
  int t404 = __old394;
  __retval393 = t404;
  int t405 = __retval393;
  return t405;
}

// function: _ZSt5fixedRSt8ios_base
struct std__ios_base* std__fixed(struct std__ios_base* v406) {
bb407:
  struct std__ios_base* __base408;
  struct std__ios_base* __retval409;
  __base408 = v406;
  struct std__ios_base* t410 = __base408;
  int t411 = _ZNSt8ios_base5fixedE_const;
  int t412 = _ZNSt8ios_base10floatfieldE_const;
  int r413 = std__ios_base__setf(t410, t411, t412);
  struct std__ios_base* t414 = __base408;
  __retval409 = t414;
  struct std__ios_base* t415 = __retval409;
  return t415;
}

// function: _ZSt12setprecisioni
struct std___Setprecision std__setprecision(int v416) {
bb417:
  int __n418;
  struct std___Setprecision __retval419;
  __n418 = v416;
  int t420 = __n418;
  __retval419._M_n = t420;
  struct std___Setprecision t421 = __retval419;
  return t421;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v422, double* v423) {
bb424:
  struct std__basic_istream_char__std__char_traits_char__* this425;
  double* __f426;
  struct std__basic_istream_char__std__char_traits_char__* __retval427;
  this425 = v422;
  __f426 = v423;
  struct std__basic_istream_char__std__char_traits_char__* t428 = this425;
  double* t429 = __f426;
  struct std__basic_istream_char__std__char_traits_char__* r430 = std__istream__std__istream___M_extract_double_(t428, t429);
  __retval427 = r430;
  struct std__basic_istream_char__std__char_traits_char__* t431 = __retval427;
  return t431;
}

// function: _ZN8TreeNodeIdEC2ERKd
void TreeNode_double___TreeNode(struct TreeNode_double_* v432, double* v433) {
bb434:
  struct TreeNode_double_* this435;
  double* d436;
  this435 = v432;
  d436 = v433;
  struct TreeNode_double_* t437 = this435;
  struct TreeNode_double_* c438 = ((void*)0);
  t437->leftPtr = c438;
  double* t439 = d436;
  double t440 = *t439;
  t437->data = t440;
  struct TreeNode_double_* c441 = ((void*)0);
  t437->rightPtr = c441;
  return;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v442, double v443) {
bb444:
  struct std__basic_ostream_char__std__char_traits_char__* this445;
  double __f446;
  struct std__basic_ostream_char__std__char_traits_char__* __retval447;
  this445 = v442;
  __f446 = v443;
  struct std__basic_ostream_char__std__char_traits_char__* t448 = this445;
  double t449 = __f446;
  struct std__basic_ostream_char__std__char_traits_char__* r450 = std__ostream__std__ostream___M_insert_double_(t448, t449);
  __retval447 = r450;
  struct std__basic_ostream_char__std__char_traits_char__* t451 = __retval447;
  return t451;
}

// function: _ZN4TreeIdE16insertNodeHelperEPP8TreeNodeIdERKd
void Tree_double___insertNodeHelper(struct Tree_double_* v452, struct TreeNode_double_** v453, double* v454) {
bb455:
  struct Tree_double_* this456;
  struct TreeNode_double_** ptr457;
  double* value458;
  this456 = v452;
  ptr457 = v453;
  value458 = v454;
  struct Tree_double_* t459 = this456;
    struct TreeNode_double_** t460 = ptr457;
    struct TreeNode_double_* t461 = *t460;
    struct TreeNode_double_* c462 = ((void*)0);
    _Bool c463 = ((t461 == c462)) ? 1 : 0;
    if (c463) {
      struct TreeNode_double_* __new_result464;
      unsigned long c465 = 24;
      void* r466 = operator_new(c465);
        struct TreeNode_double_* cast467 = (struct TreeNode_double_*)r466;
        __new_result464 = cast467;
        double* t468 = value458;
        TreeNode_double___TreeNode(cast467, t468);
      struct TreeNode_double_* t469 = __new_result464;
      struct TreeNode_double_** t470 = ptr457;
      *t470 = t469;
    } else {
        double* t471 = value458;
        double t472 = *t471;
        struct TreeNode_double_** t473 = ptr457;
        struct TreeNode_double_* t474 = *t473;
        double t475 = t474->data;
        _Bool c476 = ((t472 < t475)) ? 1 : 0;
        if (c476) {
          struct TreeNode_double_** t477 = ptr457;
          struct TreeNode_double_* t478 = *t477;
          double* t479 = value458;
          Tree_double___insertNodeHelper(t459, &t478->leftPtr, t479);
        } else {
            double* t480 = value458;
            double t481 = *t480;
            struct TreeNode_double_** t482 = ptr457;
            struct TreeNode_double_* t483 = *t482;
            double t484 = t483->data;
            _Bool c485 = ((t481 > t484)) ? 1 : 0;
            if (c485) {
              struct TreeNode_double_** t486 = ptr457;
              struct TreeNode_double_* t487 = *t486;
              double* t488 = value458;
              Tree_double___insertNodeHelper(t459, &t487->rightPtr, t488);
            } else {
              double* t489 = value458;
              double t490 = *t489;
              struct std__basic_ostream_char__std__char_traits_char__* r491 = std__ostream__operator__(&_ZSt4cout, t490);
              char* cast492 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* r493 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r491, cast492);
              struct std__basic_ostream_char__std__char_traits_char__* r494 = std__ostream__operator___std__ostream_____(r493, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
            }
        }
    }
  return;
}

// function: _ZN4TreeIdE10insertNodeERKd
void Tree_double___insertNode(struct Tree_double_* v495, double* v496) {
bb497:
  struct Tree_double_* this498;
  double* value499;
  this498 = v495;
  value499 = v496;
  struct Tree_double_* t500 = this498;
  double* t501 = value499;
  Tree_double___insertNodeHelper(t500, &t500->rootPtr, t501);
  return;
}

// function: _ZNK4TreeIdE14preOrderHelperEP8TreeNodeIdE
void Tree_double___preOrderHelper_TreeNode_double____const(struct Tree_double_* v502, struct TreeNode_double_* v503) {
bb504:
  struct Tree_double_* this505;
  struct TreeNode_double_* ptr506;
  this505 = v502;
  ptr506 = v503;
  struct Tree_double_* t507 = this505;
    struct TreeNode_double_* t508 = ptr506;
    struct TreeNode_double_* c509 = ((void*)0);
    _Bool c510 = ((t508 != c509)) ? 1 : 0;
    if (c510) {
      struct TreeNode_double_* t511 = ptr506;
      double t512 = t511->data;
      struct std__basic_ostream_char__std__char_traits_char__* r513 = std__ostream__operator__(&_ZSt4cout, t512);
      char c514 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r515 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r513, c514);
      struct TreeNode_double_* t516 = ptr506;
      struct TreeNode_double_* t517 = t516->leftPtr;
      Tree_double___preOrderHelper_TreeNode_double____const(t507, t517);
      struct TreeNode_double_* t518 = ptr506;
      struct TreeNode_double_* t519 = t518->rightPtr;
      Tree_double___preOrderHelper_TreeNode_double____const(t507, t519);
    }
  return;
}

// function: _ZNK4TreeIdE17preOrderTraversalEv
void Tree_double___preOrderTraversal___const(struct Tree_double_* v520) {
bb521:
  struct Tree_double_* this522;
  this522 = v520;
  struct Tree_double_* t523 = this522;
  struct TreeNode_double_* t524 = t523->rootPtr;
  Tree_double___preOrderHelper_TreeNode_double____const(t523, t524);
  return;
}

// function: _ZNK4TreeIdE13inOrderHelperEP8TreeNodeIdE
void Tree_double___inOrderHelper_TreeNode_double____const(struct Tree_double_* v525, struct TreeNode_double_* v526) {
bb527:
  struct Tree_double_* this528;
  struct TreeNode_double_* ptr529;
  this528 = v525;
  ptr529 = v526;
  struct Tree_double_* t530 = this528;
    struct TreeNode_double_* t531 = ptr529;
    struct TreeNode_double_* c532 = ((void*)0);
    _Bool c533 = ((t531 != c532)) ? 1 : 0;
    if (c533) {
      struct TreeNode_double_* t534 = ptr529;
      struct TreeNode_double_* t535 = t534->leftPtr;
      Tree_double___inOrderHelper_TreeNode_double____const(t530, t535);
      struct TreeNode_double_* t536 = ptr529;
      double t537 = t536->data;
      struct std__basic_ostream_char__std__char_traits_char__* r538 = std__ostream__operator__(&_ZSt4cout, t537);
      char c539 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r540 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r538, c539);
      struct TreeNode_double_* t541 = ptr529;
      struct TreeNode_double_* t542 = t541->rightPtr;
      Tree_double___inOrderHelper_TreeNode_double____const(t530, t542);
    }
  return;
}

// function: _ZNK4TreeIdE16inOrderTraversalEv
void Tree_double___inOrderTraversal___const(struct Tree_double_* v543) {
bb544:
  struct Tree_double_* this545;
  this545 = v543;
  struct Tree_double_* t546 = this545;
  struct TreeNode_double_* t547 = t546->rootPtr;
  Tree_double___inOrderHelper_TreeNode_double____const(t546, t547);
  return;
}

// function: _ZNK4TreeIdE15postOrderHelperEP8TreeNodeIdE
void Tree_double___postOrderHelper_TreeNode_double____const(struct Tree_double_* v548, struct TreeNode_double_* v549) {
bb550:
  struct Tree_double_* this551;
  struct TreeNode_double_* ptr552;
  this551 = v548;
  ptr552 = v549;
  struct Tree_double_* t553 = this551;
    struct TreeNode_double_* t554 = ptr552;
    struct TreeNode_double_* c555 = ((void*)0);
    _Bool c556 = ((t554 != c555)) ? 1 : 0;
    if (c556) {
      struct TreeNode_double_* t557 = ptr552;
      struct TreeNode_double_* t558 = t557->leftPtr;
      Tree_double___postOrderHelper_TreeNode_double____const(t553, t558);
      struct TreeNode_double_* t559 = ptr552;
      struct TreeNode_double_* t560 = t559->rightPtr;
      Tree_double___postOrderHelper_TreeNode_double____const(t553, t560);
      struct TreeNode_double_* t561 = ptr552;
      double t562 = t561->data;
      struct std__basic_ostream_char__std__char_traits_char__* r563 = std__ostream__operator__(&_ZSt4cout, t562);
      char c564 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* r565 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r563, c564);
    }
  return;
}

// function: _ZNK4TreeIdE18postOrderTraversalEv
void Tree_double___postOrderTraversal___const(struct Tree_double_* v566) {
bb567:
  struct Tree_double_* this568;
  this568 = v566;
  struct Tree_double_* t569 = this568;
  struct TreeNode_double_* t570 = t569->rootPtr;
  Tree_double___postOrderHelper_TreeNode_double____const(t569, t570);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v571, void* v572) {
bb573:
  struct std__basic_ostream_char__std__char_traits_char__* this574;
  void* __pf575;
  struct std__basic_ostream_char__std__char_traits_char__* __retval576;
  this574 = v571;
  __pf575 = v572;
  struct std__basic_ostream_char__std__char_traits_char__* t577 = this574;
  void* t578 = __pf575;
  struct std__basic_ostream_char__std__char_traits_char__* r579 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t578)(t577);
  __retval576 = r579;
  struct std__basic_ostream_char__std__char_traits_char__* t580 = __retval576;
  return t580;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v581) {
bb582:
  struct std__basic_ostream_char__std__char_traits_char__* __os583;
  struct std__basic_ostream_char__std__char_traits_char__* __retval584;
  __os583 = v581;
  struct std__basic_ostream_char__std__char_traits_char__* t585 = __os583;
  struct std__basic_ostream_char__std__char_traits_char__* r586 = std__ostream__flush(t585);
  __retval584 = r586;
  struct std__basic_ostream_char__std__char_traits_char__* t587 = __retval584;
  return t587;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v588) {
bb589:
  struct std__ctype_char_* __f590;
  struct std__ctype_char_* __retval591;
  __f590 = v588;
    struct std__ctype_char_* t592 = __f590;
    _Bool cast593 = (_Bool)t592;
    _Bool u594 = !cast593;
    if (u594) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t595 = __f590;
  __retval591 = t595;
  struct std__ctype_char_* t596 = __retval591;
  return t596;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v597, char v598) {
bb599:
  struct std__ctype_char_* this600;
  char __c601;
  char __retval602;
  this600 = v597;
  __c601 = v598;
  struct std__ctype_char_* t603 = this600;
    char t604 = t603->_M_widen_ok;
    _Bool cast605 = (_Bool)t604;
    if (cast605) {
      char t606 = __c601;
      unsigned char cast607 = (unsigned char)t606;
      unsigned long cast608 = (unsigned long)cast607;
      char t609 = t603->_M_widen[cast608];
      __retval602 = t609;
      char t610 = __retval602;
      return t610;
    }
  std__ctype_char____M_widen_init___const(t603);
  char t611 = __c601;
  void** v612 = (void**)t603;
  void* v613 = *((void**)v612);
  char vcall616 = (char)__VERIFIER_virtual_call_char_char(t603, 6, t611);
  __retval602 = vcall616;
  char t617 = __retval602;
  return t617;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v618, char v619) {
bb620:
  struct std__basic_ios_char__std__char_traits_char__* this621;
  char __c622;
  char __retval623;
  this621 = v618;
  __c622 = v619;
  struct std__basic_ios_char__std__char_traits_char__* t624 = this621;
  struct std__ctype_char_* t625 = t624->_M_ctype;
  struct std__ctype_char_* r626 = std__ctype_char__const__std____check_facet_std__ctype_char___(t625);
  char t627 = __c622;
  char r628 = std__ctype_char___widen_char__const(r626, t627);
  __retval623 = r628;
  char t629 = __retval623;
  return t629;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v630) {
bb631:
  struct std__basic_ostream_char__std__char_traits_char__* __os632;
  struct std__basic_ostream_char__std__char_traits_char__* __retval633;
  __os632 = v630;
  struct std__basic_ostream_char__std__char_traits_char__* t634 = __os632;
  struct std__basic_ostream_char__std__char_traits_char__* t635 = __os632;
  void** v636 = (void**)t635;
  void* v637 = *((void**)v636);
  unsigned char* cast638 = (unsigned char*)v637;
  long c639 = -24;
  unsigned char* ptr640 = &(cast638)[c639];
  long* cast641 = (long*)ptr640;
  long t642 = *cast641;
  unsigned char* cast643 = (unsigned char*)t635;
  unsigned char* ptr644 = &(cast643)[t642];
  struct std__basic_ostream_char__std__char_traits_char__* cast645 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr644;
  struct std__basic_ios_char__std__char_traits_char__* cast646 = (struct std__basic_ios_char__std__char_traits_char__*)cast645;
  char c647 = 10;
  char r648 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast646, c647);
  struct std__basic_ostream_char__std__char_traits_char__* r649 = std__ostream__put(t634, r648);
  struct std__basic_ostream_char__std__char_traits_char__* r650 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r649);
  __retval633 = r650;
  struct std__basic_ostream_char__std__char_traits_char__* t651 = __retval633;
  return t651;
}

// function: main
int main() {
bb652:
  int __retval653;
  struct Tree_int_ intTree654;
  int intValue655;
  struct Tree_double_ doubleTree656;
  double doubleValue657;
  struct std___Setprecision agg_tmp0658;
  int c659 = 0;
  __retval653 = c659;
  Tree_int___Tree(&intTree654);
  char* cast660 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r661 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast660);
    int i662;
    int c663 = 0;
    i662 = c663;
    while (1) {
      int t665 = i662;
      int c666 = 10;
      _Bool c667 = ((t665 < c666)) ? 1 : 0;
      if (!c667) break;
        struct std__basic_istream_char__std__char_traits_char__* r668 = std__istream__operator___2(&_ZSt3cin, &intValue655);
        Tree_int___insertNode(&intTree654, &intValue655);
    for_step664: ;
      int t669 = i662;
      int u670 = t669 + 1;
      i662 = u670;
    }
  char* cast671 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r672 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast671);
  Tree_int___preOrderTraversal___const(&intTree654);
  char* cast673 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r674 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast673);
  Tree_int___inOrderTraversal___const(&intTree654);
  char* cast675 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r676 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast675);
  Tree_int___postOrderTraversal___const(&intTree654);
  Tree_double___Tree(&doubleTree656);
  struct std__basic_ostream_char__std__char_traits_char__* r677 = std__ostream__operator___std__ios_base_____(&_ZSt4cout, &std__fixed);
  int c678 = 1;
  struct std___Setprecision r679 = std__setprecision(c678);
  agg_tmp0658 = r679;
  struct std___Setprecision t680 = agg_tmp0658;
  struct std__basic_ostream_char__std__char_traits_char__* r681 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(r677, t680);
  char* cast682 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r683 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r681, cast682);
    int j684;
    int c685 = 0;
    j684 = c685;
    while (1) {
      int t687 = j684;
      int c688 = 10;
      _Bool c689 = ((t687 < c688)) ? 1 : 0;
      if (!c689) break;
        struct std__basic_istream_char__std__char_traits_char__* r690 = std__istream__operator__(&_ZSt3cin, &doubleValue657);
        Tree_double___insertNode(&doubleTree656, &doubleValue657);
    for_step686: ;
      int t691 = j684;
      int u692 = t691 + 1;
      j684 = u692;
    }
  char* cast693 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r694 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast693);
  Tree_double___preOrderTraversal___const(&doubleTree656);
  char* cast695 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r696 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast695);
  Tree_double___inOrderTraversal___const(&doubleTree656);
  char* cast697 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r698 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast697);
  Tree_double___postOrderTraversal___const(&doubleTree656);
  struct std__basic_ostream_char__std__char_traits_char__* r699 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
  int c700 = 0;
  __retval653 = c700;
  int t701 = __retval653;
  return t701;
}

