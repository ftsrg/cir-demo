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
struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int______Auto_node { struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int___* _M_t; struct std___Rb_tree_node_std__pair_const_int__int__* _M_node; };
struct std___Rb_tree_iterator_std__pair_const_int__int__ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_std__pair_const_int__int__;
struct std___Select1st_std__pair_const_int__int__ { unsigned char __field0; };
struct std____new_allocator_std___Rb_tree_node_std__pair_const_int__int___;
struct std____pair_base_const_int__int_;
struct std____pair_base_int__int_;
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___;
struct std__allocator_std___Rb_tree_node_std__pair_const_int__int___;
struct std__less_int_;
struct std__pair_const_int__int_;
struct std__pair_int__int_ { int first; int second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int______Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__ios_base;
struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int___ { struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int______Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__multimap_int__int__std__less_int___std__allocator_std__pair_const_int__int___ { struct std___Rb_tree_int__std__pair_const_int__int___std___Select1st_std__pair_const_int__int____std__less_int___std__allocator_std__pair_const_int__int___ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[38] = "The multimap contains 1000 elements.\n";
char _str_1[44] = "The multimap could not hold 1000 elements.\n";
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std__multimap_int__int__std__less_int___std__allocator_std__pair_const_int__int___ mymultimap2;
  int c3 = 0;
  __retval1 = c3;
  // externalized std:: op: std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::multimap()
  __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
      unsigned long std4 = __VERIFIER_nondet_unsigned_long();
      unsigned long c5 = 1000;
      _Bool c6 = ((std4 >= c5)) ? 1 : 0;
      if (c6) {
          int i7;
          struct std__pair_int__int_ ref_tmp08;
          int ref_tmp19;
          struct std___Rb_tree_iterator_std__pair_const_int__int__ agg_tmp010;
          int c11 = 0;
          i7 = c11;
          while (1) {
            int t13 = i7;
            int c14 = 1000;
            _Bool c15 = ((t13 < c14)) ? 1 : 0;
            if (!c15) break;
            int c16 = 0;
            ref_tmp19 = c16;
            struct std__pair_int__int_ std17;
            __VERIFIER_nondet_memory(&std17, sizeof(std17));
            ref_tmp08 = std17;
            struct std___Rb_tree_iterator_std__pair_const_int__int__ std18;
            __VERIFIER_nondet_memory(&std18, sizeof(std18));
            agg_tmp010 = std18;
          for_step12: ;
            int t19 = i7;
            int u20 = t19 + 1;
            i7 = u20;
          }
        char* cast21 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* std22;
        __VERIFIER_nondet_memory(&std22, sizeof(std22));
      } else {
        char* cast23 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* std24;
        __VERIFIER_nondet_memory(&std24, sizeof(std24));
      }
    int c25 = 0;
    __retval1 = c25;
    int t26 = __retval1;
    int ret_val27 = t26;
    {
      // externalized std:: op: std::multimap<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >::~multimap()
      __VERIFIER_nondet_memory(&mymultimap2, sizeof(mymultimap2));
    }
    return ret_val27;
  int t28 = __retval1;
  return t28;
}

