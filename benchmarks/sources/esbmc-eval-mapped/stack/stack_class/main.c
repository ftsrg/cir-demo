extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct A_bool_ { _Bool a; };
struct std___Deque_iterator_A_bool___A_bool_____A_bool____ { struct A_bool_* _M_cur; struct A_bool_* _M_first; struct A_bool_* _M_last; struct A_bool_** _M_node; };
struct std____new_allocator_A_bool__;
struct std____new_allocator_A_bool____;
struct std__allocator_A_bool__;
struct std__allocator_A_bool____ { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data { struct A_bool_** _M_map; unsigned long _M_map_size; struct std___Deque_iterator_A_bool___A_bool_____A_bool____ _M_start; struct std___Deque_iterator_A_bool___A_bool_____A_bool____ _M_finish; };
struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl { struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl_data __field0; };
struct std___Deque_base_A_bool___std__allocator_A_bool___ { struct std___Deque_base_A_bool___std__allocator_A_bool______Deque_impl _M_impl; };
struct std__deque_A_bool___std__allocator_A_bool___ { struct std___Deque_base_A_bool___std__allocator_A_bool___ __field0; };
struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____ { struct std__deque_A_bool___std__allocator_A_bool___ c; };

char _str[17] = "!(first.empty())";
char _str_1[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/stack/stack_class/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[20] = "(first.top()).get()";
char _str_3[18] = "first.size() == 2";
char _str_4[48] = "cannot create std::deque larger than max_size()";
char _str_5[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_stack.h";
char __PRETTY_FUNCTION____ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEE3popEv[81] = "void std::stack<A<bool>>::pop() [_Tp = A<bool>, _Sequence = std::deque<A<bool>>]";
char _str_6[15] = "!this->empty()";
char _str_7[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_deque.h";
char __PRETTY_FUNCTION____ZNSt5dequeI1AIbESaIS1_EE8pop_backEv[87] = "void std::deque<A<bool>>::pop_back() [_Tp = A<bool>, _Alloc = std::allocator<A<bool>>]";
char __PRETTY_FUNCTION____ZNSt5stackI1AIbESt5dequeIS1_SaIS1_EEE3topEv[86] = "reference std::stack<A<bool>>::top() [_Tp = A<bool>, _Sequence = std::deque<A<bool>>]";
char __PRETTY_FUNCTION____ZNSt5dequeI1AIbESaIS1_EE4backEv[88] = "reference std::deque<A<bool>>::back() [_Tp = A<bool>, _Alloc = std::allocator<A<bool>>]";
_Bool A_bool___get(struct A_bool_* p0);
_Bool operator___2(struct A_bool_ p0, struct A_bool_ p1);
_Bool operator__(struct A_bool_ p0, struct A_bool_ p1);
_Bool operator_(struct A_bool_ p0, struct A_bool_ p1);
void A_bool___A(struct A_bool_* p0);
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _ZN1AIbE3getEv
_Bool A_bool___get(struct A_bool_* v0) {
bb1: ;
  struct A_bool_* this2;
  _Bool __retval3;
  this2 = v0;
  struct A_bool_* t4 = this2;
  _Bool t5 = t4->a;
  __retval3 = t5;
  _Bool t6 = __retval3;
  return t6;
}

// function: _Zne1AIbES0_
_Bool operator___2(struct A_bool_ v7, struct A_bool_ v8) {
bb9: ;
  struct A_bool_ x10;
  struct A_bool_ y11;
  _Bool __retval12;
  x10 = v7;
  y11 = v8;
    _Bool r13 = A_bool___get(&x10);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    int cast14 = (int)r13;
    _Bool r15 = A_bool___get(&y11);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    int cast16 = (int)r15;
    _Bool c17 = ((cast14 != cast16)) ? 1 : 0;
    if (c17) {
      _Bool c18 = 1;
      __retval12 = c18;
      _Bool t19 = __retval12;
      return t19;
    }
  _Bool c20 = 0;
  __retval12 = c20;
  _Bool t21 = __retval12;
  return t21;
}

// function: _Zeq1AIbES0_
_Bool operator__(struct A_bool_ v22, struct A_bool_ v23) {
bb24: ;
  struct A_bool_ x25;
  struct A_bool_ y26;
  _Bool __retval27;
  x25 = v22;
  y26 = v23;
    _Bool r28 = A_bool___get(&x25);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    int cast29 = (int)r28;
    _Bool r30 = A_bool___get(&y26);
    if (__cir_exc_active) {
      _Bool __cir_eh_ret = (_Bool)0;
      return __cir_eh_ret;
    }
    int cast31 = (int)r30;
    _Bool c32 = ((cast29 == cast31)) ? 1 : 0;
    if (c32) {
      _Bool c33 = 1;
      __retval27 = c33;
      _Bool t34 = __retval27;
      return t34;
    }
  _Bool c35 = 0;
  __retval27 = c35;
  _Bool t36 = __retval27;
  return t36;
}

// function: _Zlt1AIbES0_
_Bool operator_(struct A_bool_ v37, struct A_bool_ v38) {
bb39: ;
  struct A_bool_ x40;
  struct A_bool_ y41;
  _Bool __retval42;
  x40 = v37;
  y41 = v38;
  _Bool c43 = 0;
  __retval42 = c43;
  _Bool t44 = __retval42;
  return t44;
}

// function: _ZN1AIbEC2Ev
void A_bool___A(struct A_bool_* v45) {
bb46: ;
  struct A_bool_* this47;
  this47 = v45;
  struct A_bool_* t48 = this47;
  _Bool c49 = 1;
  t48->a = c49;
  return;
}

// function: main
int main() {
bb50: ;
  int __retval51;
  struct std__stack_A_bool___std__deque_A_bool___std__allocator_A_bool____ first52;
  struct A_bool_ x53;
  struct A_bool_ y54;
  struct A_bool_ z55;
  int c56 = 0;
  __retval51 = c56;
  // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::stack<std::deque<A<bool>, std::allocator<A<bool> > >, void>()
  __VERIFIER_nondet_memory(&first52, sizeof(first52));
    A_bool___A(&x53);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::~stack()
        __VERIFIER_nondet_memory(&first52, sizeof(first52));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    A_bool___A(&y54);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::~stack()
        __VERIFIER_nondet_memory(&first52, sizeof(first52));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    A_bool___A(&z55);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::~stack()
        __VERIFIER_nondet_memory(&first52, sizeof(first52));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::push(A<bool> const&)
    __VERIFIER_nondet_memory(&first52, sizeof(first52));
    __VERIFIER_nondet_memory(&x53, sizeof(x53));
    // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::push(A<bool> const&)
    __VERIFIER_nondet_memory(&first52, sizeof(first52));
    __VERIFIER_nondet_memory(&y54, sizeof(y54));
    // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::push(A<bool> const&)
    __VERIFIER_nondet_memory(&first52, sizeof(first52));
    __VERIFIER_nondet_memory(&z55, sizeof(z55));
    // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::pop()
    __VERIFIER_nondet_memory(&first52, sizeof(first52));
    _Bool std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    _Bool u58 = !std57;
    if (u58) {
    } else {
      char* cast59 = (char*)&(_str);
      char* c60 = (char*)_str_1;
      unsigned int c61 = 56;
      char* cast62 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast59, c60, c61, cast62);
    }
    struct A_bool_* std63;
    __VERIFIER_nondet_memory(&std63, sizeof(std63));
    _Bool r64 = A_bool___get(std63);
    if (__cir_exc_active) {
      {
        // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::~stack()
        __VERIFIER_nondet_memory(&first52, sizeof(first52));
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    if (r64) {
    } else {
      char* cast65 = (char*)&(_str_2);
      char* c66 = (char*)_str_1;
      unsigned int c67 = 57;
      char* cast68 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast65, c66, c67, cast68);
    }
    unsigned long std69 = __VERIFIER_nondet_unsigned_long();
    unsigned long c70 = 2;
    _Bool c71 = ((std69 == c70)) ? 1 : 0;
    if (c71) {
    } else {
      char* cast72 = (char*)&(_str_3);
      char* c73 = (char*)_str_1;
      unsigned int c74 = 58;
      char* cast75 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast72, c73, c74, cast75);
    }
    int c76 = 0;
    __retval51 = c76;
    int t77 = __retval51;
    int ret_val78 = t77;
    {
      // externalized std:: op: std::stack<A<bool>, std::deque<A<bool>, std::allocator<A<bool> > > >::~stack()
      __VERIFIER_nondet_memory(&first52, sizeof(first52));
    }
    return ret_val78;
  int t79 = __retval51;
  return t79;
}

