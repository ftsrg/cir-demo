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
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_istream_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

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
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void TreeNode_int___TreeNode(struct TreeNode_int_* p0, int* p1);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void Tree_int___insertNodeHelper(struct Tree_int_* p0, struct TreeNode_int_** p1, int* p2);
void Tree_int___insertNode(struct Tree_int_* p0, int* p1);
void Tree_int___preOrderHelper_TreeNode_int____const(struct Tree_int_* p0, struct TreeNode_int_* p1);
void Tree_int___preOrderTraversal___const(struct Tree_int_* p0);
void Tree_int___inOrderHelper_TreeNode_int____const(struct Tree_int_* p0, struct TreeNode_int_* p1);
void Tree_int___inOrderTraversal___const(struct Tree_int_* p0);
void Tree_int___postOrderHelper_TreeNode_int____const(struct Tree_int_* p0, struct TreeNode_int_* p1);
void Tree_int___postOrderTraversal___const(struct Tree_int_* p0);
void Tree_double___Tree(struct Tree_double_* p0);
void TreeNode_double___TreeNode(struct TreeNode_double_* p0, double* p1);
void Tree_double___insertNodeHelper(struct Tree_double_* p0, struct TreeNode_double_** p1, double* p2);
void Tree_double___insertNode(struct Tree_double_* p0, double* p1);
void Tree_double___preOrderHelper_TreeNode_double____const(struct Tree_double_* p0, struct TreeNode_double_* p1);
void Tree_double___preOrderTraversal___const(struct Tree_double_* p0);
void Tree_double___inOrderHelper_TreeNode_double____const(struct Tree_double_* p0, struct TreeNode_double_* p1);
void Tree_double___inOrderTraversal___const(struct Tree_double_* p0);
void Tree_double___postOrderHelper_TreeNode_double____const(struct Tree_double_* p0, struct TreeNode_double_* p1);
void Tree_double___postOrderTraversal___const(struct Tree_double_* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
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

// function: _ZN8TreeNodeIiEC2ERKi
void TreeNode_int___TreeNode(struct TreeNode_int_* v5, int* v6) {
bb7:
  struct TreeNode_int_* this8;
  int* d9;
  this8 = v5;
  d9 = v6;
  struct TreeNode_int_* t10 = this8;
  struct TreeNode_int_* c11 = ((void*)0);
  t10->leftPtr = c11;
  int* t12 = d9;
  int t13 = *t12;
  t10->data = t13;
  struct TreeNode_int_* c14 = ((void*)0);
  t10->rightPtr = c14;
  return;
}

// function: _ZN4TreeIiE16insertNodeHelperEPP8TreeNodeIiERKi
void Tree_int___insertNodeHelper(struct Tree_int_* v15, struct TreeNode_int_** v16, int* v17) {
bb18:
  struct Tree_int_* this19;
  struct TreeNode_int_** ptr20;
  int* value21;
  this19 = v15;
  ptr20 = v16;
  value21 = v17;
  struct Tree_int_* t22 = this19;
    struct TreeNode_int_** t23 = ptr20;
    struct TreeNode_int_* t24 = *t23;
    struct TreeNode_int_* c25 = ((void*)0);
    _Bool c26 = ((t24 == c25)) ? 1 : 0;
    if (c26) {
      struct TreeNode_int_* __new_result27;
      unsigned long c28 = 24;
      void* r29 = operator_new(c28);
        struct TreeNode_int_* cast30 = (struct TreeNode_int_*)r29;
        __new_result27 = cast30;
        int* t31 = value21;
        TreeNode_int___TreeNode(cast30, t31);
      struct TreeNode_int_* t32 = __new_result27;
      struct TreeNode_int_** t33 = ptr20;
      *t33 = t32;
    } else {
        int* t34 = value21;
        int t35 = *t34;
        struct TreeNode_int_** t36 = ptr20;
        struct TreeNode_int_* t37 = *t36;
        int t38 = t37->data;
        _Bool c39 = ((t35 < t38)) ? 1 : 0;
        if (c39) {
          struct TreeNode_int_** t40 = ptr20;
          struct TreeNode_int_* t41 = *t40;
          int* t42 = value21;
          Tree_int___insertNodeHelper(t22, &t41->leftPtr, t42);
        } else {
            int* t43 = value21;
            int t44 = *t43;
            struct TreeNode_int_** t45 = ptr20;
            struct TreeNode_int_* t46 = *t45;
            int t47 = t46->data;
            _Bool c48 = ((t44 > t47)) ? 1 : 0;
            if (c48) {
              struct TreeNode_int_** t49 = ptr20;
              struct TreeNode_int_* t50 = *t49;
              int* t51 = value21;
              Tree_int___insertNodeHelper(t22, &t50->rightPtr, t51);
            } else {
              int* t52 = value21;
              int t53 = *t52;
              struct std__basic_ostream_char__std__char_traits_char__* std54;
              __VERIFIER_nondet_memory(&std54, sizeof(std54));
              char* cast55 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* std56;
              __VERIFIER_nondet_memory(&std56, sizeof(std56));
              struct std__basic_ostream_char__std__char_traits_char__* std57;
              __VERIFIER_nondet_memory(&std57, sizeof(std57));
            }
        }
    }
  return;
}

// function: _ZN4TreeIiE10insertNodeERKi
void Tree_int___insertNode(struct Tree_int_* v58, int* v59) {
bb60:
  struct Tree_int_* this61;
  int* value62;
  this61 = v58;
  value62 = v59;
  struct Tree_int_* t63 = this61;
  int* t64 = value62;
  Tree_int___insertNodeHelper(t63, &t63->rootPtr, t64);
  return;
}

// function: _ZNK4TreeIiE14preOrderHelperEP8TreeNodeIiE
void Tree_int___preOrderHelper_TreeNode_int____const(struct Tree_int_* v65, struct TreeNode_int_* v66) {
bb67:
  struct Tree_int_* this68;
  struct TreeNode_int_* ptr69;
  this68 = v65;
  ptr69 = v66;
  struct Tree_int_* t70 = this68;
    struct TreeNode_int_* t71 = ptr69;
    struct TreeNode_int_* c72 = ((void*)0);
    _Bool c73 = ((t71 != c72)) ? 1 : 0;
    if (c73) {
      struct TreeNode_int_* t74 = ptr69;
      int t75 = t74->data;
      struct std__basic_ostream_char__std__char_traits_char__* std76;
      __VERIFIER_nondet_memory(&std76, sizeof(std76));
      char c77 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std78;
      __VERIFIER_nondet_memory(&std78, sizeof(std78));
      struct TreeNode_int_* t79 = ptr69;
      struct TreeNode_int_* t80 = t79->leftPtr;
      Tree_int___preOrderHelper_TreeNode_int____const(t70, t80);
      struct TreeNode_int_* t81 = ptr69;
      struct TreeNode_int_* t82 = t81->rightPtr;
      Tree_int___preOrderHelper_TreeNode_int____const(t70, t82);
    }
  return;
}

// function: _ZNK4TreeIiE17preOrderTraversalEv
void Tree_int___preOrderTraversal___const(struct Tree_int_* v83) {
bb84:
  struct Tree_int_* this85;
  this85 = v83;
  struct Tree_int_* t86 = this85;
  struct TreeNode_int_* t87 = t86->rootPtr;
  Tree_int___preOrderHelper_TreeNode_int____const(t86, t87);
  return;
}

// function: _ZNK4TreeIiE13inOrderHelperEP8TreeNodeIiE
void Tree_int___inOrderHelper_TreeNode_int____const(struct Tree_int_* v88, struct TreeNode_int_* v89) {
bb90:
  struct Tree_int_* this91;
  struct TreeNode_int_* ptr92;
  this91 = v88;
  ptr92 = v89;
  struct Tree_int_* t93 = this91;
    struct TreeNode_int_* t94 = ptr92;
    struct TreeNode_int_* c95 = ((void*)0);
    _Bool c96 = ((t94 != c95)) ? 1 : 0;
    if (c96) {
      struct TreeNode_int_* t97 = ptr92;
      struct TreeNode_int_* t98 = t97->leftPtr;
      Tree_int___inOrderHelper_TreeNode_int____const(t93, t98);
      struct TreeNode_int_* t99 = ptr92;
      int t100 = t99->data;
      struct std__basic_ostream_char__std__char_traits_char__* std101;
      __VERIFIER_nondet_memory(&std101, sizeof(std101));
      char c102 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std103;
      __VERIFIER_nondet_memory(&std103, sizeof(std103));
      struct TreeNode_int_* t104 = ptr92;
      struct TreeNode_int_* t105 = t104->rightPtr;
      Tree_int___inOrderHelper_TreeNode_int____const(t93, t105);
    }
  return;
}

// function: _ZNK4TreeIiE16inOrderTraversalEv
void Tree_int___inOrderTraversal___const(struct Tree_int_* v106) {
bb107:
  struct Tree_int_* this108;
  this108 = v106;
  struct Tree_int_* t109 = this108;
  struct TreeNode_int_* t110 = t109->rootPtr;
  Tree_int___inOrderHelper_TreeNode_int____const(t109, t110);
  return;
}

// function: _ZNK4TreeIiE15postOrderHelperEP8TreeNodeIiE
void Tree_int___postOrderHelper_TreeNode_int____const(struct Tree_int_* v111, struct TreeNode_int_* v112) {
bb113:
  struct Tree_int_* this114;
  struct TreeNode_int_* ptr115;
  this114 = v111;
  ptr115 = v112;
  struct Tree_int_* t116 = this114;
    struct TreeNode_int_* t117 = ptr115;
    struct TreeNode_int_* c118 = ((void*)0);
    _Bool c119 = ((t117 != c118)) ? 1 : 0;
    if (c119) {
      struct TreeNode_int_* t120 = ptr115;
      struct TreeNode_int_* t121 = t120->leftPtr;
      Tree_int___postOrderHelper_TreeNode_int____const(t116, t121);
      struct TreeNode_int_* t122 = ptr115;
      struct TreeNode_int_* t123 = t122->rightPtr;
      Tree_int___postOrderHelper_TreeNode_int____const(t116, t123);
      struct TreeNode_int_* t124 = ptr115;
      int t125 = t124->data;
      struct std__basic_ostream_char__std__char_traits_char__* std126;
      __VERIFIER_nondet_memory(&std126, sizeof(std126));
      char c127 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std128;
      __VERIFIER_nondet_memory(&std128, sizeof(std128));
    }
  return;
}

// function: _ZNK4TreeIiE18postOrderTraversalEv
void Tree_int___postOrderTraversal___const(struct Tree_int_* v129) {
bb130:
  struct Tree_int_* this131;
  this131 = v129;
  struct Tree_int_* t132 = this131;
  struct TreeNode_int_* t133 = t132->rootPtr;
  Tree_int___postOrderHelper_TreeNode_int____const(t132, t133);
  return;
}

// function: _ZN4TreeIdEC2Ev
void Tree_double___Tree(struct Tree_double_* v134) {
bb135:
  struct Tree_double_* this136;
  this136 = v134;
  struct Tree_double_* t137 = this136;
  struct TreeNode_double_* c138 = ((void*)0);
  t137->rootPtr = c138;
  return;
}

// function: _ZN8TreeNodeIdEC2ERKd
void TreeNode_double___TreeNode(struct TreeNode_double_* v139, double* v140) {
bb141:
  struct TreeNode_double_* this142;
  double* d143;
  this142 = v139;
  d143 = v140;
  struct TreeNode_double_* t144 = this142;
  struct TreeNode_double_* c145 = ((void*)0);
  t144->leftPtr = c145;
  double* t146 = d143;
  double t147 = *t146;
  t144->data = t147;
  struct TreeNode_double_* c148 = ((void*)0);
  t144->rightPtr = c148;
  return;
}

// function: _ZN4TreeIdE16insertNodeHelperEPP8TreeNodeIdERKd
void Tree_double___insertNodeHelper(struct Tree_double_* v149, struct TreeNode_double_** v150, double* v151) {
bb152:
  struct Tree_double_* this153;
  struct TreeNode_double_** ptr154;
  double* value155;
  this153 = v149;
  ptr154 = v150;
  value155 = v151;
  struct Tree_double_* t156 = this153;
    struct TreeNode_double_** t157 = ptr154;
    struct TreeNode_double_* t158 = *t157;
    struct TreeNode_double_* c159 = ((void*)0);
    _Bool c160 = ((t158 == c159)) ? 1 : 0;
    if (c160) {
      struct TreeNode_double_* __new_result161;
      unsigned long c162 = 24;
      void* r163 = operator_new(c162);
        struct TreeNode_double_* cast164 = (struct TreeNode_double_*)r163;
        __new_result161 = cast164;
        double* t165 = value155;
        TreeNode_double___TreeNode(cast164, t165);
      struct TreeNode_double_* t166 = __new_result161;
      struct TreeNode_double_** t167 = ptr154;
      *t167 = t166;
    } else {
        double* t168 = value155;
        double t169 = *t168;
        struct TreeNode_double_** t170 = ptr154;
        struct TreeNode_double_* t171 = *t170;
        double t172 = t171->data;
        _Bool c173 = ((t169 < t172)) ? 1 : 0;
        if (c173) {
          struct TreeNode_double_** t174 = ptr154;
          struct TreeNode_double_* t175 = *t174;
          double* t176 = value155;
          Tree_double___insertNodeHelper(t156, &t175->leftPtr, t176);
        } else {
            double* t177 = value155;
            double t178 = *t177;
            struct TreeNode_double_** t179 = ptr154;
            struct TreeNode_double_* t180 = *t179;
            double t181 = t180->data;
            _Bool c182 = ((t178 > t181)) ? 1 : 0;
            if (c182) {
              struct TreeNode_double_** t183 = ptr154;
              struct TreeNode_double_* t184 = *t183;
              double* t185 = value155;
              Tree_double___insertNodeHelper(t156, &t184->rightPtr, t185);
            } else {
              double* t186 = value155;
              double t187 = *t186;
              struct std__basic_ostream_char__std__char_traits_char__* std188;
              __VERIFIER_nondet_memory(&std188, sizeof(std188));
              char* cast189 = (char*)&(_str_5);
              struct std__basic_ostream_char__std__char_traits_char__* std190;
              __VERIFIER_nondet_memory(&std190, sizeof(std190));
              struct std__basic_ostream_char__std__char_traits_char__* std191;
              __VERIFIER_nondet_memory(&std191, sizeof(std191));
            }
        }
    }
  return;
}

// function: _ZN4TreeIdE10insertNodeERKd
void Tree_double___insertNode(struct Tree_double_* v192, double* v193) {
bb194:
  struct Tree_double_* this195;
  double* value196;
  this195 = v192;
  value196 = v193;
  struct Tree_double_* t197 = this195;
  double* t198 = value196;
  Tree_double___insertNodeHelper(t197, &t197->rootPtr, t198);
  return;
}

// function: _ZNK4TreeIdE14preOrderHelperEP8TreeNodeIdE
void Tree_double___preOrderHelper_TreeNode_double____const(struct Tree_double_* v199, struct TreeNode_double_* v200) {
bb201:
  struct Tree_double_* this202;
  struct TreeNode_double_* ptr203;
  this202 = v199;
  ptr203 = v200;
  struct Tree_double_* t204 = this202;
    struct TreeNode_double_* t205 = ptr203;
    struct TreeNode_double_* c206 = ((void*)0);
    _Bool c207 = ((t205 != c206)) ? 1 : 0;
    if (c207) {
      struct TreeNode_double_* t208 = ptr203;
      double t209 = t208->data;
      struct std__basic_ostream_char__std__char_traits_char__* std210;
      __VERIFIER_nondet_memory(&std210, sizeof(std210));
      char c211 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std212;
      __VERIFIER_nondet_memory(&std212, sizeof(std212));
      struct TreeNode_double_* t213 = ptr203;
      struct TreeNode_double_* t214 = t213->leftPtr;
      Tree_double___preOrderHelper_TreeNode_double____const(t204, t214);
      struct TreeNode_double_* t215 = ptr203;
      struct TreeNode_double_* t216 = t215->rightPtr;
      Tree_double___preOrderHelper_TreeNode_double____const(t204, t216);
    }
  return;
}

// function: _ZNK4TreeIdE17preOrderTraversalEv
void Tree_double___preOrderTraversal___const(struct Tree_double_* v217) {
bb218:
  struct Tree_double_* this219;
  this219 = v217;
  struct Tree_double_* t220 = this219;
  struct TreeNode_double_* t221 = t220->rootPtr;
  Tree_double___preOrderHelper_TreeNode_double____const(t220, t221);
  return;
}

// function: _ZNK4TreeIdE13inOrderHelperEP8TreeNodeIdE
void Tree_double___inOrderHelper_TreeNode_double____const(struct Tree_double_* v222, struct TreeNode_double_* v223) {
bb224:
  struct Tree_double_* this225;
  struct TreeNode_double_* ptr226;
  this225 = v222;
  ptr226 = v223;
  struct Tree_double_* t227 = this225;
    struct TreeNode_double_* t228 = ptr226;
    struct TreeNode_double_* c229 = ((void*)0);
    _Bool c230 = ((t228 != c229)) ? 1 : 0;
    if (c230) {
      struct TreeNode_double_* t231 = ptr226;
      struct TreeNode_double_* t232 = t231->leftPtr;
      Tree_double___inOrderHelper_TreeNode_double____const(t227, t232);
      struct TreeNode_double_* t233 = ptr226;
      double t234 = t233->data;
      struct std__basic_ostream_char__std__char_traits_char__* std235;
      __VERIFIER_nondet_memory(&std235, sizeof(std235));
      char c236 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std237;
      __VERIFIER_nondet_memory(&std237, sizeof(std237));
      struct TreeNode_double_* t238 = ptr226;
      struct TreeNode_double_* t239 = t238->rightPtr;
      Tree_double___inOrderHelper_TreeNode_double____const(t227, t239);
    }
  return;
}

// function: _ZNK4TreeIdE16inOrderTraversalEv
void Tree_double___inOrderTraversal___const(struct Tree_double_* v240) {
bb241:
  struct Tree_double_* this242;
  this242 = v240;
  struct Tree_double_* t243 = this242;
  struct TreeNode_double_* t244 = t243->rootPtr;
  Tree_double___inOrderHelper_TreeNode_double____const(t243, t244);
  return;
}

// function: _ZNK4TreeIdE15postOrderHelperEP8TreeNodeIdE
void Tree_double___postOrderHelper_TreeNode_double____const(struct Tree_double_* v245, struct TreeNode_double_* v246) {
bb247:
  struct Tree_double_* this248;
  struct TreeNode_double_* ptr249;
  this248 = v245;
  ptr249 = v246;
  struct Tree_double_* t250 = this248;
    struct TreeNode_double_* t251 = ptr249;
    struct TreeNode_double_* c252 = ((void*)0);
    _Bool c253 = ((t251 != c252)) ? 1 : 0;
    if (c253) {
      struct TreeNode_double_* t254 = ptr249;
      struct TreeNode_double_* t255 = t254->leftPtr;
      Tree_double___postOrderHelper_TreeNode_double____const(t250, t255);
      struct TreeNode_double_* t256 = ptr249;
      struct TreeNode_double_* t257 = t256->rightPtr;
      Tree_double___postOrderHelper_TreeNode_double____const(t250, t257);
      struct TreeNode_double_* t258 = ptr249;
      double t259 = t258->data;
      struct std__basic_ostream_char__std__char_traits_char__* std260;
      __VERIFIER_nondet_memory(&std260, sizeof(std260));
      char c261 = 32;
      struct std__basic_ostream_char__std__char_traits_char__* std262;
      __VERIFIER_nondet_memory(&std262, sizeof(std262));
    }
  return;
}

// function: _ZNK4TreeIdE18postOrderTraversalEv
void Tree_double___postOrderTraversal___const(struct Tree_double_* v263) {
bb264:
  struct Tree_double_* this265;
  this265 = v263;
  struct Tree_double_* t266 = this265;
  struct TreeNode_double_* t267 = t266->rootPtr;
  Tree_double___postOrderHelper_TreeNode_double____const(t266, t267);
  return;
}

// function: main
int main() {
bb268:
  int __retval269;
  struct Tree_int_ intTree270;
  int intValue271;
  struct Tree_double_ doubleTree272;
  double doubleValue273;
  struct std___Setprecision agg_tmp0274;
  int c275 = 0;
  __retval269 = c275;
  Tree_int___Tree(&intTree270);
  char* cast276 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std277;
  __VERIFIER_nondet_memory(&std277, sizeof(std277));
    int i278;
    int c279 = 0;
    i278 = c279;
    while (1) {
      int t281 = i278;
      int c282 = 10;
      _Bool c283 = ((t281 < c282)) ? 1 : 0;
      if (!c283) break;
        struct std__basic_istream_char__std__char_traits_char__* std284;
        __VERIFIER_nondet_memory(&std284, sizeof(std284));
        Tree_int___insertNode(&intTree270, &intValue271);
    for_step280: ;
      int t285 = i278;
      int u286 = t285 + 1;
      i278 = u286;
    }
  char* cast287 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std288;
  __VERIFIER_nondet_memory(&std288, sizeof(std288));
  Tree_int___preOrderTraversal___const(&intTree270);
  char* cast289 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std290;
  __VERIFIER_nondet_memory(&std290, sizeof(std290));
  Tree_int___inOrderTraversal___const(&intTree270);
  char* cast291 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std292;
  __VERIFIER_nondet_memory(&std292, sizeof(std292));
  Tree_int___postOrderTraversal___const(&intTree270);
  Tree_double___Tree(&doubleTree272);
  struct std__basic_ostream_char__std__char_traits_char__* std293;
  __VERIFIER_nondet_memory(&std293, sizeof(std293));
  int c294 = 1;
  struct std___Setprecision std295;
  __VERIFIER_nondet_memory(&std295, sizeof(std295));
  agg_tmp0274 = std295;
  struct std___Setprecision t296 = agg_tmp0274;
  struct std__basic_ostream_char__std__char_traits_char__* std297;
  __VERIFIER_nondet_memory(&std297, sizeof(std297));
  char* cast298 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* std299;
  __VERIFIER_nondet_memory(&std299, sizeof(std299));
    int j300;
    int c301 = 0;
    j300 = c301;
    while (1) {
      int t303 = j300;
      int c304 = 10;
      _Bool c305 = ((t303 < c304)) ? 1 : 0;
      if (!c305) break;
        struct std__basic_istream_char__std__char_traits_char__* std306;
        __VERIFIER_nondet_memory(&std306, sizeof(std306));
        Tree_double___insertNode(&doubleTree272, &doubleValue273);
    for_step302: ;
      int t307 = j300;
      int u308 = t307 + 1;
      j300 = u308;
    }
  char* cast309 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std310;
  __VERIFIER_nondet_memory(&std310, sizeof(std310));
  Tree_double___preOrderTraversal___const(&doubleTree272);
  char* cast311 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std312;
  __VERIFIER_nondet_memory(&std312, sizeof(std312));
  Tree_double___inOrderTraversal___const(&doubleTree272);
  char* cast313 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* std314;
  __VERIFIER_nondet_memory(&std314, sizeof(std314));
  Tree_double___postOrderTraversal___const(&doubleTree272);
  struct std__basic_ostream_char__std__char_traits_char__* std315;
  __VERIFIER_nondet_memory(&std315, sizeof(std315));
  int c316 = 0;
  __retval269 = c316;
  int t317 = __retval269;
  return t317;
}

