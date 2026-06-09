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
void mycomparison__mycomparison(struct mycomparison* p0, _Bool* p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
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
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ sixth10;
  struct mycomparison ref_tmp011;
  _Bool ref_tmp112;
  struct std__vector_int__std__allocator_int__ ref_tmp213;
  int c14 = 0;
  __retval9 = c14;
  _Bool c15 = 1;
  ref_tmp112 = c15;
  mycomparison__mycomparison(&ref_tmp011, &ref_tmp112);
  ref_tmp213 = *&__const_main_ref_tmp2; // copy
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&ref_tmp213, sizeof(ref_tmp213));
    // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, mycomparison>::priority_queue(mycomparison const&, std::vector<int, std::allocator<int> >&&)
    __VERIFIER_nondet_memory(&sixth10, sizeof(sixth10));
    __VERIFIER_nondet_memory(&ref_tmp011, sizeof(ref_tmp011));
    __VERIFIER_nondet_memory(&ref_tmp213, sizeof(ref_tmp213));
  {
    // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
    __VERIFIER_nondet_memory(&ref_tmp213, sizeof(ref_tmp213));
  }
    int c16 = 0;
    __retval9 = c16;
    int t17 = __retval9;
    int ret_val18 = t17;
    {
      // externalized std:: op: std::priority_queue<int, std::vector<int, std::allocator<int> >, mycomparison>::~priority_queue()
      __VERIFIER_nondet_memory(&sixth10, sizeof(sixth10));
    }
    return ret_val18;
  int t19 = __retval9;
  return t19;
}

