extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_std__pair_const_int__int__ { unsigned char _M_storage[8]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Head_base_0UL_int____false_ { int* _M_head_impl; };
struct std___Index_tuple_0UL_ { unsigned char __field0; };
struct std___Index_tuple__ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_std__pair_const_int__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int______Auto_node { struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int___* _M_t; struct std___Rb_tree_node_std__pair_const_int__int__* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_int__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_int__int__;
struct std___Select1st_std__pair_const_int__int__ { unsigned char __field0; };
struct std___Tuple_impl_0UL_int___ { struct std___Head_base_0UL_int____false_ __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_int__int___;
struct std____pair_base_const_int__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_int__int___;
struct std__less_int_ { unsigned char __field0; };
struct std__pair_const_int__int_;
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__piecewise_construct_t { unsigned char __field0; };
struct std__tuple__ { unsigned char __field0; };
struct std__tuple_const_int___ { struct std___Tuple_impl_0UL_int___ __field0; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int______Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ios_base;
struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int___ { struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int______Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__map_int__int__std__less_int___std__allocator_std__pair_const_int__int___ { struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[33] = "The map contains 1000 elements.\n";
char _str_1[39] = "The map could not hold 1000 elements.\n";
struct std__piecewise_construct_t _ZSt19piecewise_construct;
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  int i2;
  struct std__map_int__int__std__less_int___std__allocator_std__pair_const_int__int___ mymap3;
  int c4 = 0;
  __retval1 = c4;
  // externalized std:: op: std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::map()
  __VERIFIER_nondet_memory(&mymap3, sizeof(mymap3));
      unsigned long std5 = __VERIFIER_nondet_unsigned_long();
      unsigned long c6 = 1000;
      _Bool c7 = ((std5 > c6)) ? 1 : 0;
      if (c7) {
          int c8 = 0;
          i2 = c8;
          while (1) {
            int t10 = i2;
            int c11 = 1000;
            _Bool c12 = ((t10 < c11)) ? 1 : 0;
            if (!c12) break;
            int c13 = 0;
            int* std14;
            __VERIFIER_nondet_memory(&std14, sizeof(std14));
            *std14 = c13;
          for_step9: ;
            int t15 = i2;
            int u16 = t15 + 1;
            i2 = u16;
          }
        char* cast17 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std18;
        __VERIFIER_nondet_memory(&std18, sizeof(std18));
      } else {
        char* cast19 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std20;
        __VERIFIER_nondet_memory(&std20, sizeof(std20));
      }
    int c21 = 0;
    __retval1 = c21;
    int t22 = __retval1;
    int ret_val23 = t22;
    {
      // externalized std:: op: std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::~map()
      __VERIFIER_nondet_memory(&mymap3, sizeof(mymap3));
    }
    return ret_val23;
  int t24 = __retval1;
  return t24;
}

