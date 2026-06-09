/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct mycomparison { _Bool reverse; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_ { struct mycomparison _M_comp; };
struct __gnu_cxx____ops___Iter_comp_val_mycomparison_ { struct mycomparison _M_comp; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ { struct std__vector_int__std__allocator_int__ c; struct mycomparison comp; unsigned char __field2[7]; } __attribute__((packed));

struct std__vector_int__std__allocator_int__ __const_main_ref_tmp2;
void mycomparison__mycomparison(struct mycomparison* p0, _Bool* p1);
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison___priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* p0, struct mycomparison* p1, struct std__vector_int__std__allocator_int__* p2);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison____priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* p0);
int main();
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data_2(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
void __gnu_cxx____ops___Iter_comp_iter_mycomparison____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* p0, struct mycomparison p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool mycomparison__operator___int_const___int_const___const(struct mycomparison* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_mycomparison___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____ops___Iter_comp_val_mycomparison____Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* p0, struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* p1);
_Bool bool___gnu_cxx____ops___Iter_comp_val_mycomparison___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_mycomparison___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_mycomparison___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_ p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_mycomparison___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* p2);
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______mycomparison_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct mycomparison p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl* p1);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, struct std___Vector_base_int__std__allocator_int__* p1);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);

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

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* v8) {
bb9:
  struct std__vector_int__std__allocator_int__* this10;
  this10 = v8;
  struct std__vector_int__std__allocator_int__* t11 = this10;
  struct std___Vector_base_int__std__allocator_int__* base12 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t11 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base_2(base12);
  return;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEE12mycomparisonEC2ERKS3_OS2_
void std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison___priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* v13, struct mycomparison* v14, struct std__vector_int__std__allocator_int__* v15) {
bb16:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* this17;
  struct mycomparison* __x18;
  struct std__vector_int__std__allocator_int__* __s19;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp020;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp121;
  struct mycomparison agg_tmp222;
  this17 = v13;
  __x18 = v14;
  __s19 = v15;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* t23 = this17;
  struct std__vector_int__std__allocator_int__* t24 = __s19;
  std__vector_int__std__allocator_int_____vector(&t23->c, t24);
    struct mycomparison* t25 = __x18;
    t23->comp = *t25; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r26 = std__vector_int__std__allocator_int_____begin(&t23->c);
    agg_tmp020 = r26;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r27 = std__vector_int__std__allocator_int_____end(&t23->c);
    agg_tmp121 = r27;
    agg_tmp222 = t23->comp; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t28 = agg_tmp020;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t29 = agg_tmp121;
    struct mycomparison t30 = agg_tmp222;
    void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______mycomparison_(t28, t29, t30);
  return;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v31) {
bb32:
  struct std__vector_int__std__allocator_int__* this33;
  this33 = v31;
  struct std__vector_int__std__allocator_int__* t34 = this33;
    struct std___Vector_base_int__std__allocator_int__* base35 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t34 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base36 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base35->_M_impl) + 0);
    int* t37 = base36->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base38 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t34 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base39 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base38->_M_impl) + 0);
    int* t40 = base39->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base41 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t34 + 0);
    struct std__allocator_int_* r42 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base41);
    void_std___Destroy_int___int_(t37, t40, r42);
  {
    struct std___Vector_base_int__std__allocator_int__* base43 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t34 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base43);
  }
  return;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEE12mycomparisonED2Ev
void std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison____priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* v44) {
bb45:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* this46;
  this46 = v44;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_* t47 = this46;
  {
    std__vector_int__std__allocator_int______vector(&t47->c);
  }
  return;
}

// function: main
int main() {
bb48:
  int __retval49;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____mycomparison_ sixth50;
  struct mycomparison ref_tmp051;
  _Bool ref_tmp152;
  struct std__vector_int__std__allocator_int__ ref_tmp253;
  int c54 = 0;
  __retval49 = c54;
  _Bool c55 = 1;
  ref_tmp152 = c55;
  mycomparison__mycomparison(&ref_tmp051, &ref_tmp152);
  ref_tmp253 = *&__const_main_ref_tmp2; // copy
  std__vector_int__std__allocator_int_____vector_2(&ref_tmp253);
    std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison___priority_queue(&sixth50, &ref_tmp051, &ref_tmp253);
  {
    std__vector_int__std__allocator_int______vector(&ref_tmp253);
  }
    int c56 = 0;
    __retval49 = c56;
    int t57 = __retval49;
    int ret_val58 = t57;
    {
      std__priority_queue_int__std__vector_int__std__allocator_int_____mycomparison____priority_queue(&sixth50);
    }
    return ret_val58;
  int t59 = __retval49;
  return t59;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v60) {
bb61:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this62;
  this62 = v60;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t63 = this62;
  struct std__allocator_int_* base64 = (struct std__allocator_int_*)((char *)t63 + 0);
  std__allocator_int___allocator_2(base64);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base65 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t63 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data_2(base65);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v66) {
bb67:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this68;
  this68 = v66;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t69 = this68;
  {
    struct std__allocator_int_* base70 = (struct std__allocator_int_*)((char *)t69 + 0);
    std__allocator_int____allocator(base70);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v71) {
bb72:
  struct std___Vector_base_int__std__allocator_int__* this73;
  this73 = v71;
  struct std___Vector_base_int__std__allocator_int__* t74 = this73;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t74->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb75:
  _Bool __retval76;
    _Bool c77 = 0;
    __retval76 = c77;
    _Bool t78 = __retval76;
    return t78;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v79, int* v80, unsigned long v81) {
bb82:
  struct std____new_allocator_int_* this83;
  int* __p84;
  unsigned long __n85;
  this83 = v79;
  __p84 = v80;
  __n85 = v81;
  struct std____new_allocator_int_* t86 = this83;
    unsigned long c87 = 4;
    unsigned long c88 = 16;
    _Bool c89 = ((c87 > c88)) ? 1 : 0;
    if (c89) {
      int* t90 = __p84;
      void* cast91 = (void*)t90;
      unsigned long t92 = __n85;
      unsigned long c93 = 4;
      unsigned long b94 = t92 * c93;
      unsigned long c95 = 4;
      operator_delete_3(cast91, b94, c95);
      return;
    }
  int* t96 = __p84;
  void* cast97 = (void*)t96;
  unsigned long t98 = __n85;
  unsigned long c99 = 4;
  unsigned long b100 = t98 * c99;
  operator_delete_2(cast97, b100);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v101, int* v102, unsigned long v103) {
bb104:
  struct std__allocator_int_* this105;
  int* __p106;
  unsigned long __n107;
  this105 = v101;
  __p106 = v102;
  __n107 = v103;
  struct std__allocator_int_* t108 = this105;
    _Bool r109 = std____is_constant_evaluated();
    if (r109) {
      int* t110 = __p106;
      void* cast111 = (void*)t110;
      operator_delete(cast111);
      return;
    }
  struct std____new_allocator_int_* base112 = (struct std____new_allocator_int_*)((char *)t108 + 0);
  int* t113 = __p106;
  unsigned long t114 = __n107;
  std____new_allocator_int___deallocate(base112, t113, t114);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v115, int* v116, unsigned long v117) {
bb118:
  struct std__allocator_int_* __a119;
  int* __p120;
  unsigned long __n121;
  __a119 = v115;
  __p120 = v116;
  __n121 = v117;
  struct std__allocator_int_* t122 = __a119;
  int* t123 = __p120;
  unsigned long t124 = __n121;
  std__allocator_int___deallocate(t122, t123, t124);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v125, int* v126, unsigned long v127) {
bb128:
  struct std___Vector_base_int__std__allocator_int__* this129;
  int* __p130;
  unsigned long __n131;
  this129 = v125;
  __p130 = v126;
  __n131 = v127;
  struct std___Vector_base_int__std__allocator_int__* t132 = this129;
    int* t133 = __p130;
    _Bool cast134 = (_Bool)t133;
    if (cast134) {
      struct std__allocator_int_* base135 = (struct std__allocator_int_*)((char *)&(t132->_M_impl) + 0);
      int* t136 = __p130;
      unsigned long t137 = __n131;
      std__allocator_traits_std__allocator_int_____deallocate(base135, t136, t137);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v138) {
bb139:
  struct std___Vector_base_int__std__allocator_int__* this140;
  this140 = v138;
  struct std___Vector_base_int__std__allocator_int__* t141 = this140;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base142 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t141->_M_impl) + 0);
    int* t143 = base142->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base144 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t141->_M_impl) + 0);
    int* t145 = base144->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base146 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t141->_M_impl) + 0);
    int* t147 = base146->_M_start;
    long diff148 = t145 - t147;
    unsigned long cast149 = (unsigned long)diff148;
    std___Vector_base_int__std__allocator_int______M_deallocate(t141, t143, cast149);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t141->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v150) {
bb151:
  struct std____new_allocator_int_* this152;
  this152 = v150;
  struct std____new_allocator_int_* t153 = this152;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v154) {
bb155:
  struct std__allocator_int_* this156;
  this156 = v154;
  struct std__allocator_int_* t157 = this156;
  struct std____new_allocator_int_* base158 = (struct std____new_allocator_int_*)((char *)t157 + 0);
  std____new_allocator_int_____new_allocator_2(base158);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data_2(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v159) {
bb160:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this161;
  this161 = v159;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t162 = this161;
  int* c163 = ((void*)0);
  t162->_M_start = c163;
  int* c164 = ((void*)0);
  t162->_M_finish = c164;
  int* c165 = ((void*)0);
  t162->_M_end_of_storage = c165;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v166) {
bb167:
  struct std__allocator_int_* this168;
  this168 = v166;
  struct std__allocator_int_* t169 = this168;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v170) {
bb171:
  int* __location172;
  __location172 = v170;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v173, int* v174) {
bb175:
  int* __first176;
  int* __last177;
  __first176 = v173;
  __last177 = v174;
      _Bool r178 = std____is_constant_evaluated();
      if (r178) {
          while (1) {
            int* t180 = __first176;
            int* t181 = __last177;
            _Bool c182 = ((t180 != t181)) ? 1 : 0;
            if (!c182) break;
            int* t183 = __first176;
            void_std__destroy_at_int_(t183);
          for_step179: ;
            int* t184 = __first176;
            int c185 = 1;
            int* ptr186 = &(t184)[c185];
            __first176 = ptr186;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v187, int* v188, struct std__allocator_int_* v189) {
bb190:
  int* __first191;
  int* __last192;
  struct std__allocator_int_* unnamed193;
  __first191 = v187;
  __last192 = v188;
  unnamed193 = v189;
  int* t194 = __first191;
  int* t195 = __last192;
  void_std___Destroy_int__(t194, t195);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v196) {
bb197:
  struct std___Vector_base_int__std__allocator_int__* this198;
  struct std__allocator_int_* __retval199;
  this198 = v196;
  struct std___Vector_base_int__std__allocator_int__* t200 = this198;
  struct std__allocator_int_* base201 = (struct std__allocator_int_*)((char *)&(t200->_M_impl) + 0);
  __retval199 = base201;
  struct std__allocator_int_* t202 = __retval199;
  return t202;
}

// function: _ZNSt6vectorIiSaIiEEC2EOS1_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v203, struct std__vector_int__std__allocator_int__* v204) {
bb205:
  struct std__vector_int__std__allocator_int__* this206;
  struct std__vector_int__std__allocator_int__* unnamed207;
  this206 = v203;
  unnamed207 = v204;
  struct std__vector_int__std__allocator_int__* t208 = this206;
  struct std___Vector_base_int__std__allocator_int__* base209 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t208 + 0);
  struct std__vector_int__std__allocator_int__* t210 = unnamed207;
  struct std___Vector_base_int__std__allocator_int__* base211 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t210 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base209, base211);
  return;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI12mycomparisonEC2ES2_
void __gnu_cxx____ops___Iter_comp_iter_mycomparison____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* v212, struct mycomparison v213) {
bb214:
  struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* this215;
  struct mycomparison __comp216;
  this215 = v212;
  __comp216 = v213;
  struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* t217 = this215;
  t217->_M_comp = __comp216; // copy
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v218) {
bb219:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this220;
  int** __retval221;
  this220 = v218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t222 = this220;
  __retval221 = &t222->_M_current;
  int** t223 = __retval221;
  return t223;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v224, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v225) {
bb226:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs227;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs228;
  long __retval229;
  __lhs227 = v224;
  __rhs228 = v225;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t230 = __lhs227;
  int** r231 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t230);
  int* t232 = *r231;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t233 = __rhs228;
  int** r234 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t233);
  int* t235 = *r234;
  long diff236 = t232 - t235;
  __retval229 = diff236;
  long t237 = __retval229;
  return t237;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v238, int** v239) {
bb240:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this241;
  int** __i242;
  this241 = v238;
  __i242 = v239;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t243 = this241;
  int** t244 = __i242;
  int* t245 = *t244;
  t243->_M_current = t245;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v246, long v247) {
bb248:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this249;
  long __n250;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval251;
  int* ref_tmp0252;
  this249 = v246;
  __n250 = v247;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t253 = this249;
  int* t254 = t253->_M_current;
  long t255 = __n250;
  int* ptr256 = &(t254)[t255];
  ref_tmp0252 = ptr256;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval251, &ref_tmp0252);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t257 = __retval251;
  return t257;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v258) {
bb259:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this260;
  int* __retval261;
  this260 = v258;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t262 = this260;
  int* t263 = t262->_M_current;
  __retval261 = t263;
  int* t264 = __retval261;
  return t264;
}

// function: _ZNK12mycomparisonclERKiS1_
_Bool mycomparison__operator___int_const___int_const___const(struct mycomparison* v265, int* v266, int* v267) {
bb268:
  struct mycomparison* this269;
  int* lhs270;
  int* rhs271;
  _Bool __retval272;
  this269 = v265;
  lhs270 = v266;
  rhs271 = v267;
  struct mycomparison* t273 = this269;
    _Bool t274 = t273->reverse;
    if (t274) {
      int* t275 = lhs270;
      int t276 = *t275;
      int* t277 = rhs271;
      int t278 = *t277;
      _Bool c279 = ((t276 > t278)) ? 1 : 0;
      __retval272 = c279;
      _Bool t280 = __retval272;
      return t280;
    } else {
      int* t281 = lhs270;
      int t282 = *t281;
      int* t283 = rhs271;
      int t284 = *t283;
      _Bool c285 = ((t282 < t284)) ? 1 : 0;
      __retval272 = c285;
      _Bool t286 = __retval272;
      return t286;
    }
  abort();
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI12mycomparisonEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESA_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_mycomparison___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* v287, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v288, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v289) {
bb290:
  struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* this291;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1292;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2293;
  _Bool __retval294;
  this291 = v287;
  __it1292 = v288;
  __it2293 = v289;
  struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* t295 = this291;
  int* r296 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1292);
  int* r297 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2293);
  _Bool r298 = mycomparison__operator___int_const___int_const___const(&t295->_M_comp, r296, r297);
  __retval294 = r298;
  _Bool t299 = __retval294;
  return t299;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valI12mycomparisonEC2EONS0_15_Iter_comp_iterIS2_EE
void __gnu_cxx____ops___Iter_comp_val_mycomparison____Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* v300, struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* v301) {
bb302:
  struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* this303;
  struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* __comp304;
  this303 = v300;
  __comp304 = v301;
  struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* t305 = this303;
  struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* t306 = __comp304;
  t305->_M_comp = t306->_M_comp; // copy
  return;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valI12mycomparisonEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_comp_val_mycomparison___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* v307, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v308, int* v309) {
bb310:
  struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* this311;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it312;
  int* __val313;
  _Bool __retval314;
  this311 = v307;
  __it312 = v308;
  __val313 = v309;
  struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* t315 = this311;
  int* r316 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it312);
  int* t317 = __val313;
  _Bool r318 = mycomparison__operator___int_const___int_const___const(&t315->_M_comp, r316, t317);
  __retval314 = r318;
  _Bool t319 = __retval314;
  return t319;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_comp_valI12mycomparisonEEEvT_T0_SC_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_mycomparison___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v320, long v321, long v322, int v323, struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* v324) {
bb325:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first326;
  long __holeIndex327;
  long __topIndex328;
  int __value329;
  struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* __comp330;
  long __parent331;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2332;
  __first326 = v320;
  __holeIndex327 = v321;
  __topIndex328 = v322;
  __value329 = v323;
  __comp330 = v324;
  long t333 = __holeIndex327;
  long c334 = 1;
  long b335 = t333 - c334;
  long c336 = 2;
  long b337 = b335 / c336;
  __parent331 = b337;
    while (1) {
      long t338 = __holeIndex327;
      long t339 = __topIndex328;
      _Bool c340 = ((t338 > t339)) ? 1 : 0;
      _Bool ternary341;
      if (c340) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0342;
        struct __gnu_cxx____ops___Iter_comp_val_mycomparison_* t343 = __comp330;
        long t344 = __parent331;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r345 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first326, t344);
        agg_tmp0342 = r345;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t346 = agg_tmp0342;
        _Bool r347 = bool___gnu_cxx____ops___Iter_comp_val_mycomparison___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t343, t346, &__value329);
        ternary341 = (_Bool)r347;
      } else {
        _Bool c348 = 0;
        ternary341 = (_Bool)c348;
      }
      if (!ternary341) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0349;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1350;
        long t351 = __parent331;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r352 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first326, t351);
        ref_tmp0349 = r352;
        int* r353 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0349);
        int t354 = *r353;
        long t355 = __holeIndex327;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r356 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first326, t355);
        ref_tmp1350 = r356;
        int* r357 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1350);
        *r357 = t354;
        long t358 = __parent331;
        __holeIndex327 = t358;
        long t359 = __holeIndex327;
        long c360 = 1;
        long b361 = t359 - c360;
        long c362 = 2;
        long b363 = b361 / c362;
        __parent331 = b363;
    }
  int t364 = __value329;
  long t365 = __holeIndex327;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r366 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first326, t365);
  ref_tmp2332 = r366;
  int* r367 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2332);
  *r367 = t364;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_comp_iterI12mycomparisonEEEvT_T0_SC_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_mycomparison___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v368, long v369, long v370, int v371, struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_ v372) {
bb373:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first374;
  long __holeIndex375;
  long __len376;
  int __value377;
  struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_ __comp378;
  long __topIndex379;
  long __secondChild380;
  struct __gnu_cxx____ops___Iter_comp_val_mycomparison_ __cmp381;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2382;
  __first374 = v368;
  __holeIndex375 = v369;
  __len376 = v370;
  __value377 = v371;
  __comp378 = v372;
  long t383 = __holeIndex375;
  __topIndex379 = t383;
  long t384 = __holeIndex375;
  __secondChild380 = t384;
    while (1) {
      long t385 = __secondChild380;
      long t386 = __len376;
      long c387 = 1;
      long b388 = t386 - c387;
      long c389 = 2;
      long b390 = b388 / c389;
      _Bool c391 = ((t385 < b390)) ? 1 : 0;
      if (!c391) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0392;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1393;
        long c394 = 2;
        long t395 = __secondChild380;
        long c396 = 1;
        long b397 = t395 + c396;
        long b398 = c394 * b397;
        __secondChild380 = b398;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0399;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1400;
          long t401 = __secondChild380;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r402 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first374, t401);
          agg_tmp0399 = r402;
          long t403 = __secondChild380;
          long c404 = 1;
          long b405 = t403 - c404;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r406 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first374, b405);
          agg_tmp1400 = r406;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t407 = agg_tmp0399;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t408 = agg_tmp1400;
          _Bool r409 = bool___gnu_cxx____ops___Iter_comp_iter_mycomparison___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp378, t407, t408);
          if (r409) {
            long t410 = __secondChild380;
            long u411 = t410 - 1;
            __secondChild380 = u411;
          }
        long t412 = __secondChild380;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r413 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first374, t412);
        ref_tmp0392 = r413;
        int* r414 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0392);
        int t415 = *r414;
        long t416 = __holeIndex375;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r417 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first374, t416);
        ref_tmp1393 = r417;
        int* r418 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1393);
        *r418 = t415;
        long t419 = __secondChild380;
        __holeIndex375 = t419;
    }
    long t420 = __len376;
    long c421 = 1;
    long b422 = t420 & c421;
    long c423 = 0;
    _Bool c424 = ((b422 == c423)) ? 1 : 0;
    _Bool ternary425;
    if (c424) {
      long t426 = __secondChild380;
      long t427 = __len376;
      long c428 = 2;
      long b429 = t427 - c428;
      long c430 = 2;
      long b431 = b429 / c430;
      _Bool c432 = ((t426 == b431)) ? 1 : 0;
      ternary425 = (_Bool)c432;
    } else {
      _Bool c433 = 0;
      ternary425 = (_Bool)c433;
    }
    if (ternary425) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2434;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3435;
      long c436 = 2;
      long t437 = __secondChild380;
      long c438 = 1;
      long b439 = t437 + c438;
      long b440 = c436 * b439;
      __secondChild380 = b440;
      long t441 = __secondChild380;
      long c442 = 1;
      long b443 = t441 - c442;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r444 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first374, b443);
      ref_tmp2434 = r444;
      int* r445 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2434);
      int t446 = *r445;
      long t447 = __holeIndex375;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r448 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first374, t447);
      ref_tmp3435 = r448;
      int* r449 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3435);
      *r449 = t446;
      long t450 = __secondChild380;
      long c451 = 1;
      long b452 = t450 - c451;
      __holeIndex375 = b452;
    }
  __gnu_cxx____ops___Iter_comp_val_mycomparison____Iter_comp_val(&__cmp381, &__comp378);
  agg_tmp2382 = __first374; // copy
  long t453 = __holeIndex375;
  long t454 = __topIndex379;
  int t455 = __value377;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t456 = agg_tmp2382;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_mycomparison___(t456, t453, t454, t455, &__cmp381);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI12mycomparisonEEEvT_SB_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_mycomparison___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v457, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v458, struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* v459) {
bb460:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first461;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last462;
  struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* __comp463;
  long __len464;
  long __parent465;
  __first461 = v457;
  __last462 = v458;
  __comp463 = v459;
    long r466 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last462, &__first461);
    long c467 = 2;
    _Bool c468 = ((r466 < c467)) ? 1 : 0;
    if (c468) {
      return;
    }
  long r469 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last462, &__first461);
  __len464 = r469;
  long t470 = __len464;
  long c471 = 2;
  long b472 = t470 - c471;
  long c473 = 2;
  long b474 = b472 / c473;
  __parent465 = b474;
    while (1) {
      _Bool c475 = 1;
      if (!c475) break;
        int __value476;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0477;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0478;
        struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_ agg_tmp1479;
        long t480 = __parent465;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r481 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first461, t480);
        ref_tmp0477 = r481;
        int* r482 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0477);
        int t483 = *r482;
        __value476 = t483;
        agg_tmp0478 = __first461; // copy
        long t484 = __parent465;
        long t485 = __len464;
        int t486 = __value476;
        struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_* t487 = __comp463;
        agg_tmp1479 = *t487; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t488 = agg_tmp0478;
        struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_ t489 = agg_tmp1479;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_mycomparison___(t488, t484, t485, t486, t489);
          long t490 = __parent465;
          long c491 = 0;
          _Bool c492 = ((t490 == c491)) ? 1 : 0;
          if (c492) {
            return;
          }
        long t493 = __parent465;
        long u494 = t493 - 1;
        __parent465 = u494;
    }
  return;
}

// function: _ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE12mycomparisonEvT_S8_T0_
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______mycomparison_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v495, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v496, struct mycomparison v497) {
bb498:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first499;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last500;
  struct mycomparison __comp501;
  struct __gnu_cxx____ops___Iter_comp_iter_mycomparison_ __cmp502;
  struct mycomparison agg_tmp0503;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1504;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2505;
  __first499 = v495;
  __last500 = v496;
  __comp501 = v497;
  agg_tmp0503 = __comp501; // copy
  struct mycomparison t506 = agg_tmp0503;
  __gnu_cxx____ops___Iter_comp_iter_mycomparison____Iter_comp_iter(&__cmp502, t506);
  agg_tmp1504 = __first499; // copy
  agg_tmp2505 = __last500; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t507 = agg_tmp1504;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t508 = agg_tmp2505;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_mycomparison___(t507, t508, &__cmp502);
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v509) {
bb510:
  struct std__vector_int__std__allocator_int__* this511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval512;
  this511 = v509;
  struct std__vector_int__std__allocator_int__* t513 = this511;
  struct std___Vector_base_int__std__allocator_int__* base514 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t513 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base515 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base514->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval512, &base515->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t516 = __retval512;
  return t516;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v517) {
bb518:
  struct std__vector_int__std__allocator_int__* this519;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval520;
  this519 = v517;
  struct std__vector_int__std__allocator_int__* t521 = this519;
  struct std___Vector_base_int__std__allocator_int__* base522 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t521 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base523 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base522->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval520, &base523->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t524 = __retval520;
  return t524;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EOS2_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v525, struct std___Vector_base_int__std__allocator_int_____Vector_impl* v526) {
bb527:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this528;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* __x529;
  this528 = v525;
  __x529 = v526;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t530 = this528;
  struct std__allocator_int_* base531 = (struct std__allocator_int_*)((char *)t530 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t532 = __x529;
  struct std__allocator_int_* base533 = (struct std__allocator_int_*)((char *)t532 + 0);
  std__allocator_int___allocator(base531, base533);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base534 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t530 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl* t535 = __x529;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base536 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t535 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base534, base536);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EOS1_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v537, struct std___Vector_base_int__std__allocator_int__* v538) {
bb539:
  struct std___Vector_base_int__std__allocator_int__* this540;
  struct std___Vector_base_int__std__allocator_int__* unnamed541;
  this540 = v537;
  unnamed541 = v538;
  struct std___Vector_base_int__std__allocator_int__* t542 = this540;
  struct std___Vector_base_int__std__allocator_int__* t543 = unnamed541;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t542->_M_impl, &t543->_M_impl);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v544, struct std____new_allocator_int_* v545) {
bb546:
  struct std____new_allocator_int_* this547;
  struct std____new_allocator_int_* unnamed548;
  this547 = v544;
  unnamed548 = v545;
  struct std____new_allocator_int_* t549 = this547;
  return;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v550, struct std__allocator_int_* v551) {
bb552:
  struct std__allocator_int_* this553;
  struct std__allocator_int_* __a554;
  this553 = v550;
  __a554 = v551;
  struct std__allocator_int_* t555 = this553;
  struct std____new_allocator_int_* base556 = (struct std____new_allocator_int_*)((char *)t555 + 0);
  struct std__allocator_int_* t557 = __a554;
  struct std____new_allocator_int_* base558 = (struct std____new_allocator_int_*)((char *)t557 + 0);
  std____new_allocator_int_____new_allocator(base556, base558);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2EOS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v559, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v560) {
bb561:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this562;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x563;
  this562 = v559;
  __x563 = v560;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t564 = this562;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t565 = __x563;
  int* t566 = t565->_M_start;
  t564->_M_start = t566;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t567 = __x563;
  int* t568 = t567->_M_finish;
  t564->_M_finish = t568;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t569 = __x563;
  int* t570 = t569->_M_end_of_storage;
  t564->_M_end_of_storage = t570;
  int* c571 = ((void*)0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t572 = __x563;
  t572->_M_end_of_storage = c571;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t573 = __x563;
  t573->_M_finish = c571;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t574 = __x563;
  t574->_M_start = c571;
  return;
}

