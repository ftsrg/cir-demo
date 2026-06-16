extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ _M_storage; };
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_char__int_;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__binary_function_char__char__bool_;
struct std__less_char_ { unsigned char __field0; };
struct std__pair_char__int_ { char first; int second; };
struct std__pair_const_char__int_ { char first; int second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char _str[17] = "it->first == 'x'";
char _str_1[114] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multimap/multimap_swap_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "it->second == 100";
char _str_3[17] = "it->first == 'y'";
char _str_4[18] = "it->second == 200";
char _str_5[17] = "it->first == 'a'";
char _str_6[17] = "it->second == 11";
char _str_7[17] = "it->second == 55";
char _str_8[17] = "it->first == 'b'";
char _str_9[17] = "it->second == 22";
char _str_10[17] = "it->second != 22";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ foo2;
  struct std__multimap_char__int__std__less_char___std__allocator_std__pair_const_char__int___ bar3;
  struct std__pair_char__int_ ref_tmp04;
  char ref_tmp15;
  int ref_tmp26;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp07;
  struct std__pair_char__int_ ref_tmp38;
  char ref_tmp49;
  int ref_tmp510;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp111;
  struct std__pair_char__int_ ref_tmp612;
  char ref_tmp713;
  int ref_tmp814;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp215;
  struct std__pair_char__int_ ref_tmp916;
  char ref_tmp1017;
  int ref_tmp1118;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp319;
  struct std__pair_char__int_ ref_tmp1220;
  char ref_tmp1321;
  int ref_tmp1422;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp423;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ it24;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp525;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1526;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp627;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp728;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1629;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp830;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ ref_tmp1731;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp932;
  struct std___Rb_tree_iterator_std__pair_const_char__int__ agg_tmp1033;
  int c34 = 0;
  __retval1 = c34;
  // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
  __VERIFIER_nondet_memory(&foo2, sizeof(foo2));
    // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::multimap()
    __VERIFIER_nondet_memory(&bar3, sizeof(bar3));
      char c35 = 120;
      ref_tmp15 = c35;
      int c36 = 100;
      ref_tmp26 = c36;
      struct std__pair_char__int_ std37;
      __VERIFIER_nondet_memory(&std37, sizeof(std37));
      ref_tmp04 = std37;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std38;
      __VERIFIER_nondet_memory(&std38, sizeof(std38));
      agg_tmp07 = std38;
      char c39 = 121;
      ref_tmp49 = c39;
      int c40 = 200;
      ref_tmp510 = c40;
      struct std__pair_char__int_ std41;
      __VERIFIER_nondet_memory(&std41, sizeof(std41));
      ref_tmp38 = std41;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std42;
      __VERIFIER_nondet_memory(&std42, sizeof(std42));
      agg_tmp111 = std42;
      char c43 = 97;
      ref_tmp713 = c43;
      int c44 = 11;
      ref_tmp814 = c44;
      struct std__pair_char__int_ std45;
      __VERIFIER_nondet_memory(&std45, sizeof(std45));
      ref_tmp612 = std45;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std46;
      __VERIFIER_nondet_memory(&std46, sizeof(std46));
      agg_tmp215 = std46;
      char c47 = 98;
      ref_tmp1017 = c47;
      int c48 = 22;
      ref_tmp1118 = c48;
      struct std__pair_char__int_ std49;
      __VERIFIER_nondet_memory(&std49, sizeof(std49));
      ref_tmp916 = std49;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std50;
      __VERIFIER_nondet_memory(&std50, sizeof(std50));
      agg_tmp319 = std50;
      char c51 = 97;
      ref_tmp1321 = c51;
      int c52 = 55;
      ref_tmp1422 = c52;
      struct std__pair_char__int_ std53;
      __VERIFIER_nondet_memory(&std53, sizeof(std53));
      ref_tmp1220 = std53;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std54;
      __VERIFIER_nondet_memory(&std54, sizeof(std54));
      agg_tmp423 = std54;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std55;
      __VERIFIER_nondet_memory(&std55, sizeof(std55));
      it24 = std55;
      struct std__pair_const_char__int_* std56;
      __VERIFIER_nondet_memory(&std56, sizeof(std56));
      char t57 = std56->first;
      int cast58 = (int)t57;
      int c59 = 120;
      _Bool c60 = ((cast58 == c59)) ? 1 : 0;
      if (c60) {
      } else {
        char* cast61 = (char*)&(_str);
        char* c62 = (char*)_str_1;
        unsigned int c63 = 26;
        char* cast64 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast61, c62, c63, cast64);
      }
      struct std__pair_const_char__int_* std65;
      __VERIFIER_nondet_memory(&std65, sizeof(std65));
      int t66 = std65->second;
      int c67 = 100;
      _Bool c68 = ((t66 == c67)) ? 1 : 0;
      if (c68) {
      } else {
        char* cast69 = (char*)&(_str_2);
        char* c70 = (char*)_str_1;
        unsigned int c71 = 27;
        char* cast72 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast69, c70, c71, cast72);
      }
      int c73 = 0;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std74;
      __VERIFIER_nondet_memory(&std74, sizeof(std74));
      agg_tmp525 = std74;
      struct std__pair_const_char__int_* std75;
      __VERIFIER_nondet_memory(&std75, sizeof(std75));
      char t76 = std75->first;
      int cast77 = (int)t76;
      int c78 = 121;
      _Bool c79 = ((cast77 == c78)) ? 1 : 0;
      if (c79) {
      } else {
        char* cast80 = (char*)&(_str_3);
        char* c81 = (char*)_str_1;
        unsigned int c82 = 29;
        char* cast83 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast80, c81, c82, cast83);
      }
      struct std__pair_const_char__int_* std84;
      __VERIFIER_nondet_memory(&std84, sizeof(std84));
      int t85 = std84->second;
      int c86 = 200;
      _Bool c87 = ((t85 == c86)) ? 1 : 0;
      if (c87) {
      } else {
        char* cast88 = (char*)&(_str_4);
        char* c89 = (char*)_str_1;
        unsigned int c90 = 30;
        char* cast91 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast88, c89, c90, cast91);
      }
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std92;
      __VERIFIER_nondet_memory(&std92, sizeof(std92));
      ref_tmp1526 = std92;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std93;
      __VERIFIER_nondet_memory(&std93, sizeof(std93));
      struct std__pair_const_char__int_* std94;
      __VERIFIER_nondet_memory(&std94, sizeof(std94));
      char t95 = std94->first;
      int cast96 = (int)t95;
      int c97 = 97;
      _Bool c98 = ((cast96 == c97)) ? 1 : 0;
      if (c98) {
      } else {
        char* cast99 = (char*)&(_str_5);
        char* c100 = (char*)_str_1;
        unsigned int c101 = 33;
        char* cast102 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast99, c100, c101, cast102);
      }
      struct std__pair_const_char__int_* std103;
      __VERIFIER_nondet_memory(&std103, sizeof(std103));
      int t104 = std103->second;
      int c105 = 11;
      _Bool c106 = ((t104 == c105)) ? 1 : 0;
      if (c106) {
      } else {
        char* cast107 = (char*)&(_str_6);
        char* c108 = (char*)_str_1;
        unsigned int c109 = 34;
        char* cast110 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast107, c108, c109, cast110);
      }
      int c111 = 0;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std112;
      __VERIFIER_nondet_memory(&std112, sizeof(std112));
      agg_tmp627 = std112;
      struct std__pair_const_char__int_* std113;
      __VERIFIER_nondet_memory(&std113, sizeof(std113));
      char t114 = std113->first;
      int cast115 = (int)t114;
      int c116 = 97;
      _Bool c117 = ((cast115 == c116)) ? 1 : 0;
      if (c117) {
      } else {
        char* cast118 = (char*)&(_str_5);
        char* c119 = (char*)_str_1;
        unsigned int c120 = 36;
        char* cast121 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast118, c119, c120, cast121);
      }
      struct std__pair_const_char__int_* std122;
      __VERIFIER_nondet_memory(&std122, sizeof(std122));
      int t123 = std122->second;
      int c124 = 55;
      _Bool c125 = ((t123 == c124)) ? 1 : 0;
      if (c125) {
      } else {
        char* cast126 = (char*)&(_str_7);
        char* c127 = (char*)_str_1;
        unsigned int c128 = 37;
        char* cast129 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast126, c127, c128, cast129);
      }
      int c130 = 0;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std131;
      __VERIFIER_nondet_memory(&std131, sizeof(std131));
      agg_tmp728 = std131;
      struct std__pair_const_char__int_* std132;
      __VERIFIER_nondet_memory(&std132, sizeof(std132));
      char t133 = std132->first;
      int cast134 = (int)t133;
      int c135 = 98;
      _Bool c136 = ((cast134 == c135)) ? 1 : 0;
      if (c136) {
      } else {
        char* cast137 = (char*)&(_str_8);
        char* c138 = (char*)_str_1;
        unsigned int c139 = 39;
        char* cast140 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast137, c138, c139, cast140);
      }
      struct std__pair_const_char__int_* std141;
      __VERIFIER_nondet_memory(&std141, sizeof(std141));
      int t142 = std141->second;
      int c143 = 22;
      _Bool c144 = ((t142 == c143)) ? 1 : 0;
      if (c144) {
      } else {
        char* cast145 = (char*)&(_str_9);
        char* c146 = (char*)_str_1;
        unsigned int c147 = 40;
        char* cast148 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast145, c146, c147, cast148);
      }
      // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::swap(std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >&)
      __VERIFIER_nondet_memory(&foo2, sizeof(foo2));
      __VERIFIER_nondet_memory(&bar3, sizeof(bar3));
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std149;
      __VERIFIER_nondet_memory(&std149, sizeof(std149));
      ref_tmp1629 = std149;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std150;
      __VERIFIER_nondet_memory(&std150, sizeof(std150));
      struct std__pair_const_char__int_* std151;
      __VERIFIER_nondet_memory(&std151, sizeof(std151));
      char t152 = std151->first;
      int cast153 = (int)t152;
      int c154 = 120;
      _Bool c155 = ((cast153 == c154)) ? 1 : 0;
      if (c155) {
      } else {
        char* cast156 = (char*)&(_str);
        char* c157 = (char*)_str_1;
        unsigned int c158 = 44;
        char* cast159 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast156, c157, c158, cast159);
      }
      struct std__pair_const_char__int_* std160;
      __VERIFIER_nondet_memory(&std160, sizeof(std160));
      int t161 = std160->second;
      int c162 = 100;
      _Bool c163 = ((t161 == c162)) ? 1 : 0;
      if (c163) {
      } else {
        char* cast164 = (char*)&(_str_2);
        char* c165 = (char*)_str_1;
        unsigned int c166 = 45;
        char* cast167 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast164, c165, c166, cast167);
      }
      int c168 = 0;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std169;
      __VERIFIER_nondet_memory(&std169, sizeof(std169));
      agg_tmp830 = std169;
      struct std__pair_const_char__int_* std170;
      __VERIFIER_nondet_memory(&std170, sizeof(std170));
      char t171 = std170->first;
      int cast172 = (int)t171;
      int c173 = 121;
      _Bool c174 = ((cast172 == c173)) ? 1 : 0;
      if (c174) {
      } else {
        char* cast175 = (char*)&(_str_3);
        char* c176 = (char*)_str_1;
        unsigned int c177 = 47;
        char* cast178 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast175, c176, c177, cast178);
      }
      struct std__pair_const_char__int_* std179;
      __VERIFIER_nondet_memory(&std179, sizeof(std179));
      int t180 = std179->second;
      int c181 = 200;
      _Bool c182 = ((t180 == c181)) ? 1 : 0;
      if (c182) {
      } else {
        char* cast183 = (char*)&(_str_4);
        char* c184 = (char*)_str_1;
        unsigned int c185 = 48;
        char* cast186 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast183, c184, c185, cast186);
      }
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std187;
      __VERIFIER_nondet_memory(&std187, sizeof(std187));
      ref_tmp1731 = std187;
      struct std___Rb_tree_iterator_std__pair_const_char__int__* std188;
      __VERIFIER_nondet_memory(&std188, sizeof(std188));
      struct std__pair_const_char__int_* std189;
      __VERIFIER_nondet_memory(&std189, sizeof(std189));
      char t190 = std189->first;
      int cast191 = (int)t190;
      int c192 = 97;
      _Bool c193 = ((cast191 == c192)) ? 1 : 0;
      if (c193) {
      } else {
        char* cast194 = (char*)&(_str_5);
        char* c195 = (char*)_str_1;
        unsigned int c196 = 51;
        char* cast197 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast194, c195, c196, cast197);
      }
      struct std__pair_const_char__int_* std198;
      __VERIFIER_nondet_memory(&std198, sizeof(std198));
      int t199 = std198->second;
      int c200 = 11;
      _Bool c201 = ((t199 == c200)) ? 1 : 0;
      if (c201) {
      } else {
        char* cast202 = (char*)&(_str_6);
        char* c203 = (char*)_str_1;
        unsigned int c204 = 52;
        char* cast205 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast202, c203, c204, cast205);
      }
      int c206 = 0;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std207;
      __VERIFIER_nondet_memory(&std207, sizeof(std207));
      agg_tmp932 = std207;
      struct std__pair_const_char__int_* std208;
      __VERIFIER_nondet_memory(&std208, sizeof(std208));
      char t209 = std208->first;
      int cast210 = (int)t209;
      int c211 = 97;
      _Bool c212 = ((cast210 == c211)) ? 1 : 0;
      if (c212) {
      } else {
        char* cast213 = (char*)&(_str_5);
        char* c214 = (char*)_str_1;
        unsigned int c215 = 54;
        char* cast216 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast213, c214, c215, cast216);
      }
      struct std__pair_const_char__int_* std217;
      __VERIFIER_nondet_memory(&std217, sizeof(std217));
      int t218 = std217->second;
      int c219 = 55;
      _Bool c220 = ((t218 == c219)) ? 1 : 0;
      if (c220) {
      } else {
        char* cast221 = (char*)&(_str_7);
        char* c222 = (char*)_str_1;
        unsigned int c223 = 55;
        char* cast224 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast221, c222, c223, cast224);
      }
      int c225 = 0;
      struct std___Rb_tree_iterator_std__pair_const_char__int__ std226;
      __VERIFIER_nondet_memory(&std226, sizeof(std226));
      agg_tmp1033 = std226;
      struct std__pair_const_char__int_* std227;
      __VERIFIER_nondet_memory(&std227, sizeof(std227));
      char t228 = std227->first;
      int cast229 = (int)t228;
      int c230 = 98;
      _Bool c231 = ((cast229 == c230)) ? 1 : 0;
      if (c231) {
      } else {
        char* cast232 = (char*)&(_str_8);
        char* c233 = (char*)_str_1;
        unsigned int c234 = 57;
        char* cast235 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast232, c233, c234, cast235);
      }
      struct std__pair_const_char__int_* std236;
      __VERIFIER_nondet_memory(&std236, sizeof(std236));
      int t237 = std236->second;
      int c238 = 22;
      _Bool c239 = ((t237 != c238)) ? 1 : 0;
      if (c239) {
      } else {
        char* cast240 = (char*)&(_str_10);
        char* c241 = (char*)_str_1;
        unsigned int c242 = 58;
        char* cast243 = (char*)&(__PRETTY_FUNCTION___main);
        reach_error();
        __assert_fail(cast240, c241, c242, cast243);
      }
      int c244 = 0;
      __retval1 = c244;
      int t245 = __retval1;
      int ret_val246 = t245;
      {
        // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
        __VERIFIER_nondet_memory(&bar3, sizeof(bar3));
      }
      {
        // externalized std:: op: std::multimap<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~multimap()
        __VERIFIER_nondet_memory(&foo2, sizeof(foo2));
      }
      return ret_val246;
  int t247 = __retval1;
  return t247;
}

