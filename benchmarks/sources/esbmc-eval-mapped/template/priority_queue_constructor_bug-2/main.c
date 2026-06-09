extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct mycomparison { _Bool reverse; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_ { struct mycomparison _M_comp; };
struct __gnu_cxx____ops___Iter_comp_val_mycomparison_ { struct mycomparison _M_comp; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ { struct std__vector_int__std__allocator_int__ c; struct mycomparison comp; unsigned char __field2[7]; } __attribute__((packed));

struct std__vector_int__std__allocator_int__ __const_main_ref_tmp2;
char _str[19] = "fourth.size() != 0";
char _str_1[129] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/template/priority_queue_constructor_bug-2/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void mycomparison__mycomparison(struct mycomparison* p0, _Bool* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _ZN12mycomparisonC2ERKb
void mycomparison__mycomparison(struct mycomparison* v0, _Bool* v1) {
bb2:
  struct mycomparison* this3;
  _Bool* revparam4;
  this3 = v0;
  revparam4 = v1;
  struct mycomparison* t5 = this3;
  _Bool* t6 = revparam4;
  _Bool t7 = *t6;
  t5->reverse = t7;
  return;
}

// function: main
int main() {
bb8:
  int __retval9;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ fourth10;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ sixth11;
  struct mycomparison ref_tmp012;
  _Bool ref_tmp113;
  struct std__vector_int__std__allocator_int__ ref_tmp214;
  int c15 = 0;
  __retval9 = c15;
  // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, mycomparison>::priority_queue<std::vector<int, std::allocator<int> >, void>()
  __VERIFIER_nondet_memory(&fourth10, sizeof(fourth10));
    unsigned long std16 = __VERIFIER_nondet_unsigned_long();
    unsigned long c17 = 0;
    _Bool c18 = ((std16 != c17)) ? 1 : 0;
    if (c18) {
    } else {
      char* cast19 = (char*)&(_str);
      char* c20 = _str_1;
      unsigned int c21 = 30;
      char* cast22 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast19, c20, c21, cast22);
    }
    _Bool c23 = 1;
    ref_tmp113 = c23;
    mycomparison__mycomparison(&ref_tmp012, &ref_tmp113);
    ref_tmp214 = *&__const_main_ref_tmp2; // copy
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&ref_tmp214, sizeof(ref_tmp214));
      // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, mycomparison>::priority_queue(mycomparison const&, std::vector<int, std::allocator<int> >&&)
      __VERIFIER_nondet_memory(&sixth11, sizeof(sixth11));
      __VERIFIER_nondet_memory(&ref_tmp012, sizeof(ref_tmp012));
      __VERIFIER_nondet_memory(&ref_tmp214, sizeof(ref_tmp214));
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&ref_tmp214, sizeof(ref_tmp214));
    }
      int c24 = 0;
      __retval9 = c24;
      int t25 = __retval9;
      int ret_val26 = t25;
      {
        // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, mycomparison>::~priority_queue()
        __VERIFIER_nondet_memory(&sixth11, sizeof(sixth11));
      }
      {
        // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, mycomparison>::~priority_queue()
        __VERIFIER_nondet_memory(&fourth10, sizeof(fourth10));
      }
      return ret_val26;
  int t27 = __retval9;
  return t27;
}

