extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_std__pair_const_char__int__ { unsigned char _M_storage[8]; };
struct std___Head_base_0UL__char_____false_ { char* _M_head_impl; };
struct std___Index_tuple_0UL_ { unsigned char __field0; };
struct std___Index_tuple__ { unsigned char __field0; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Auto_node { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___* _M_t; struct std___Rb_tree_node_std__pair_const_char__int__* _M_node; };
struct std___Rb_tree_const_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_char__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_char__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_char__int__;
struct std___Select1st_std__pair_const_char__int__ { unsigned char __field0; };
struct std___Tuple_impl_0UL__char____ { struct std___Head_base_0UL__char_____false_ __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std____pair_base_const_char__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_char__int___;
struct std__less_char_ { unsigned char __field0; };
struct std__pair_const_char__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__tuple__ { unsigned char __field0; };
struct std__tuple_char____ { struct std___Tuple_impl_0UL__char____ __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ { struct std___Rb_tree_key_compare_std__less_char__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int______Rb_tree_impl_std__less_char___true_ _M_impl; };
struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ { struct std___Rb_tree_char__std__pair_const_char__int___std___Select1st_std__pair_const_char__int____std__less_char___std__allocator_std__pair_const_char__int___ _M_t; };

char __const_main_chararray2[4] = {98, 100, 101, 103};
char __const_main_chararray1[3] = {97, 99, 102};
char _str[34] = "!(mymap.count(chararray1[i]) > 0)";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/map/map_count_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[32] = "mymap.count(chararray2[i]) != 0";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__map_char__int__std__less_char___std__allocator_std__pair_const_char__int___ mymap2;
  char c3;
  char ref_tmp04;
  char ref_tmp15;
  char ref_tmp26;
  char chararray17[3];
  char chararray28[4];
  int i9;
  int c10 = 0;
  __retval1 = c10;
  // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    int c11 = 101;
    char c12 = 97;
    ref_tmp04 = c12;
    int* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    *std13 = c11;
    int c14 = 202;
    char c15 = 99;
    ref_tmp15 = c15;
    int* std16;
    __VERIFIER_nondet_memory(&std16, sizeof(std16));
    *std16 = c14;
    int c17 = 303;
    char c18 = 102;
    ref_tmp26 = c18;
    int* std19;
    __VERIFIER_nondet_memory(&std19, sizeof(std19));
    *std19 = c17;
    // array copy
    __builtin_memcpy(chararray17, __const_main_chararray1, (unsigned long)3 * sizeof(__const_main_chararray1[0]));
    // array copy
    __builtin_memcpy(chararray28, __const_main_chararray2, (unsigned long)4 * sizeof(__const_main_chararray2[0]));
      int c20 = 0;
      i9 = c20;
      while (1) {
        int t22 = i9;
        int c23 = 3;
        _Bool c24 = ((t22 < c23)) ? 1 : 0;
        if (!c24) break;
        int t25 = i9;
        long cast26 = (long)t25;
        unsigned long std27 = __VERIFIER_nondet_unsigned_long();
        unsigned long c28 = 0;
        _Bool c29 = ((std27 > c28)) ? 1 : 0;
        _Bool u30 = !c29;
        if (u30) {
        } else {
          char* cast31 = (char*)&(_str);
          char* c32 = _str_1;
          unsigned int c33 = 35;
          char* cast34 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast31, c32, c33, cast34);
        }
      for_step21: ;
        int t35 = i9;
        int u36 = t35 + 1;
        i9 = u36;
      }
      int c37 = 0;
      i9 = c37;
      while (1) {
        int t39 = i9;
        int c40 = 4;
        _Bool c41 = ((t39 < c40)) ? 1 : 0;
        if (!c41) break;
        int t42 = i9;
        long cast43 = (long)t42;
        unsigned long std44 = __VERIFIER_nondet_unsigned_long();
        unsigned long c45 = 0;
        _Bool c46 = ((std44 != c45)) ? 1 : 0;
        if (c46) {
        } else {
          char* cast47 = (char*)&(_str_2);
          char* c48 = _str_1;
          unsigned int c49 = 38;
          char* cast50 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast47, c48, c49, cast50);
        }
      for_step38: ;
        int t51 = i9;
        int u52 = t51 + 1;
        i9 = u52;
      }
    int c53 = 0;
    __retval1 = c53;
    int t54 = __retval1;
    int ret_val55 = t54;
    {
      // externalized std:: op: std::map<char, int, std::less<char>, std::allocator<std::pair<char const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap2, sizeof(mymap2));
    }
    return ret_val55;
  int t56 = __retval1;
  return t56;
}

