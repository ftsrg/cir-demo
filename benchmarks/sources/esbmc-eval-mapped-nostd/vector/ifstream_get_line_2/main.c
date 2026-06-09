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
struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data { struct clause* _M_start; struct clause* _M_finish; struct clause* _M_end_of_storage; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_clause_ { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_clause_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std___Vector_base_clause__std__allocator_clause_____Vector_impl { struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std___Vector_base_clause__std__allocator_clause__ { struct std___Vector_base_clause__std__allocator_clause_____Vector_impl _M_impl; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__vector_clause__std__allocator_clause__ { struct std___Vector_base_clause__std__allocator_clause__ __field0; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct clause { struct std__vector_int__std__allocator_int__ variables; };

void std__vector_clause__std__allocator_clause_____vector(struct std__vector_clause__std__allocator_clause__* p0);
void std__vector_clause__std__allocator_clause______vector(struct std__vector_clause__std__allocator_clause__* p0);
int main();
void _ZNSt12_Vector_baseI6clauseSaIS0_EE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS6_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_clause__std__allocator_clause_____Vector_impl* p0);
void std___Vector_base_clause__std__allocator_clause______Vector_impl____Vector_impl(struct std___Vector_base_clause__std__allocator_clause_____Vector_impl* p0);
void std___Vector_base_clause__std__allocator_clause______Vector_base(struct std___Vector_base_clause__std__allocator_clause__* p0);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_clause___deallocate(struct std____new_allocator_clause_* p0, struct clause* p1, unsigned long p2);
void std__allocator_clause___deallocate(struct std__allocator_clause_* p0, struct clause* p1, unsigned long p2);
void std__allocator_traits_std__allocator_clause_____deallocate(struct std__allocator_clause_* p0, struct clause* p1, unsigned long p2);
void std___Vector_base_clause__std__allocator_clause______M_deallocate(struct std___Vector_base_clause__std__allocator_clause__* p0, struct clause* p1, unsigned long p2);
void std___Vector_base_clause__std__allocator_clause_______Vector_base(struct std___Vector_base_clause__std__allocator_clause__* p0);
void std____new_allocator_clause_____new_allocator(struct std____new_allocator_clause_* p0);
void std__allocator_clause___allocator(struct std__allocator_clause_* p0);
void std___Vector_base_clause__std__allocator_clause______Vector_impl_data___Vector_impl_data(struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* p0);
void std__allocator_clause____allocator(struct std__allocator_clause_* p0);
void clause___clause(struct clause* p0);
void void_std__destroy_at_clause_(struct clause* p0);
void void_std___Destroy_clause_(struct clause* p0);
void void_std___Destroy_clause__(struct clause* p0, struct clause* p1);
void void_std___Destroy_clause___clause_(struct clause* p0, struct clause* p1, struct std__allocator_clause_* p2);
struct std__allocator_clause_* std___Vector_base_clause__std__allocator_clause______M_get_Tp_allocator(struct std___Vector_base_clause__std__allocator_clause__* p0);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);

// function: _ZNSt6vectorI6clauseSaIS0_EEC2Ev
void std__vector_clause__std__allocator_clause_____vector(struct std__vector_clause__std__allocator_clause__* v0) {
bb1:
  struct std__vector_clause__std__allocator_clause__* this2;
  this2 = v0;
  struct std__vector_clause__std__allocator_clause__* t3 = this2;
  struct std___Vector_base_clause__std__allocator_clause__* base4 = (struct std___Vector_base_clause__std__allocator_clause__*)((char *)t3 + 0);
  std___Vector_base_clause__std__allocator_clause______Vector_base(base4);
  return;
}

// function: _ZNSt6vectorI6clauseSaIS0_EED2Ev
void std__vector_clause__std__allocator_clause______vector(struct std__vector_clause__std__allocator_clause__* v5) {
bb6:
  struct std__vector_clause__std__allocator_clause__* this7;
  this7 = v5;
  struct std__vector_clause__std__allocator_clause__* t8 = this7;
    struct std___Vector_base_clause__std__allocator_clause__* base9 = (struct std___Vector_base_clause__std__allocator_clause__*)((char *)t8 + 0);
    struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* base10 = (struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data*)((char *)&(base9->_M_impl) + 0);
    struct clause* t11 = base10->_M_start;
    struct std___Vector_base_clause__std__allocator_clause__* base12 = (struct std___Vector_base_clause__std__allocator_clause__*)((char *)t8 + 0);
    struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* base13 = (struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data*)((char *)&(base12->_M_impl) + 0);
    struct clause* t14 = base13->_M_finish;
    struct std___Vector_base_clause__std__allocator_clause__* base15 = (struct std___Vector_base_clause__std__allocator_clause__*)((char *)t8 + 0);
    struct std__allocator_clause_* r16 = std___Vector_base_clause__std__allocator_clause______M_get_Tp_allocator(base15);
    void_std___Destroy_clause___clause_(t11, t14, r16);
  {
    struct std___Vector_base_clause__std__allocator_clause__* base17 = (struct std___Vector_base_clause__std__allocator_clause__*)((char *)t8 + 0);
    std___Vector_base_clause__std__allocator_clause_______Vector_base(base17);
  }
  return;
}

// function: main
int main() {
bb18:
  int __retval19;
  struct std__vector_clause__std__allocator_clause__ clauses20;
  int c21 = 0;
  __retval19 = c21;
  std__vector_clause__std__allocator_clause_____vector(&clauses20);
    int c22 = 0;
    __retval19 = c22;
    int t23 = __retval19;
    int ret_val24 = t23;
    {
      std__vector_clause__std__allocator_clause______vector(&clauses20);
    }
    return ret_val24;
  int t25 = __retval19;
  return t25;
}

// function: _ZNSt12_Vector_baseI6clauseSaIS0_EE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS6_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseI6clauseSaIS0_EE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS6_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_clause__std__allocator_clause_____Vector_impl* v26) {
bb27:
  struct std___Vector_base_clause__std__allocator_clause_____Vector_impl* this28;
  this28 = v26;
  struct std___Vector_base_clause__std__allocator_clause_____Vector_impl* t29 = this28;
  struct std__allocator_clause_* base30 = (struct std__allocator_clause_*)((char *)t29 + 0);
  std__allocator_clause___allocator(base30);
    struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* base31 = (struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data*)((char *)t29 + 0);
    std___Vector_base_clause__std__allocator_clause______Vector_impl_data___Vector_impl_data(base31);
  return;
}

// function: _ZNSt12_Vector_baseI6clauseSaIS0_EE12_Vector_implD2Ev
void std___Vector_base_clause__std__allocator_clause______Vector_impl____Vector_impl(struct std___Vector_base_clause__std__allocator_clause_____Vector_impl* v32) {
bb33:
  struct std___Vector_base_clause__std__allocator_clause_____Vector_impl* this34;
  this34 = v32;
  struct std___Vector_base_clause__std__allocator_clause_____Vector_impl* t35 = this34;
  {
    struct std__allocator_clause_* base36 = (struct std__allocator_clause_*)((char *)t35 + 0);
    std__allocator_clause____allocator(base36);
  }
  return;
}

// function: _ZNSt12_Vector_baseI6clauseSaIS0_EEC2Ev
void std___Vector_base_clause__std__allocator_clause______Vector_base(struct std___Vector_base_clause__std__allocator_clause__* v37) {
bb38:
  struct std___Vector_base_clause__std__allocator_clause__* this39;
  this39 = v37;
  struct std___Vector_base_clause__std__allocator_clause__* t40 = this39;
  _ZNSt12_Vector_baseI6clauseSaIS0_EE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS6_10value_typeEE6rebindIT_E5otherEE(&t40->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb41:
  _Bool __retval42;
    _Bool c43 = 0;
    __retval42 = c43;
    _Bool t44 = __retval42;
    return t44;
  abort();
}

// function: _ZNSt15__new_allocatorI6clauseE10deallocateEPS0_m
void std____new_allocator_clause___deallocate(struct std____new_allocator_clause_* v45, struct clause* v46, unsigned long v47) {
bb48:
  struct std____new_allocator_clause_* this49;
  struct clause* __p50;
  unsigned long __n51;
  this49 = v45;
  __p50 = v46;
  __n51 = v47;
  struct std____new_allocator_clause_* t52 = this49;
    unsigned long c53 = 8;
    unsigned long c54 = 16;
    _Bool c55 = ((c53 > c54)) ? 1 : 0;
    if (c55) {
      struct clause* t56 = __p50;
      void* cast57 = (void*)t56;
      unsigned long t58 = __n51;
      unsigned long c59 = 24;
      unsigned long b60 = t58 * c59;
      unsigned long c61 = 8;
      operator_delete_3(cast57, b60, c61);
      return;
    }
  struct clause* t62 = __p50;
  void* cast63 = (void*)t62;
  unsigned long t64 = __n51;
  unsigned long c65 = 24;
  unsigned long b66 = t64 * c65;
  operator_delete_2(cast63, b66);
  return;
}

// function: _ZNSaI6clauseE10deallocateEPS_m
void std__allocator_clause___deallocate(struct std__allocator_clause_* v67, struct clause* v68, unsigned long v69) {
bb70:
  struct std__allocator_clause_* this71;
  struct clause* __p72;
  unsigned long __n73;
  this71 = v67;
  __p72 = v68;
  __n73 = v69;
  struct std__allocator_clause_* t74 = this71;
    _Bool r75 = std____is_constant_evaluated();
    if (r75) {
      struct clause* t76 = __p72;
      void* cast77 = (void*)t76;
      operator_delete(cast77);
      return;
    }
  struct std____new_allocator_clause_* base78 = (struct std____new_allocator_clause_*)((char *)t74 + 0);
  struct clause* t79 = __p72;
  unsigned long t80 = __n73;
  std____new_allocator_clause___deallocate(base78, t79, t80);
  return;
}

// function: _ZNSt16allocator_traitsISaI6clauseEE10deallocateERS1_PS0_m
void std__allocator_traits_std__allocator_clause_____deallocate(struct std__allocator_clause_* v81, struct clause* v82, unsigned long v83) {
bb84:
  struct std__allocator_clause_* __a85;
  struct clause* __p86;
  unsigned long __n87;
  __a85 = v81;
  __p86 = v82;
  __n87 = v83;
  struct std__allocator_clause_* t88 = __a85;
  struct clause* t89 = __p86;
  unsigned long t90 = __n87;
  std__allocator_clause___deallocate(t88, t89, t90);
  return;
}

// function: _ZNSt12_Vector_baseI6clauseSaIS0_EE13_M_deallocateEPS0_m
void std___Vector_base_clause__std__allocator_clause______M_deallocate(struct std___Vector_base_clause__std__allocator_clause__* v91, struct clause* v92, unsigned long v93) {
bb94:
  struct std___Vector_base_clause__std__allocator_clause__* this95;
  struct clause* __p96;
  unsigned long __n97;
  this95 = v91;
  __p96 = v92;
  __n97 = v93;
  struct std___Vector_base_clause__std__allocator_clause__* t98 = this95;
    struct clause* t99 = __p96;
    _Bool cast100 = (_Bool)t99;
    if (cast100) {
      struct std__allocator_clause_* base101 = (struct std__allocator_clause_*)((char *)&(t98->_M_impl) + 0);
      struct clause* t102 = __p96;
      unsigned long t103 = __n97;
      std__allocator_traits_std__allocator_clause_____deallocate(base101, t102, t103);
    }
  return;
}

// function: _ZNSt12_Vector_baseI6clauseSaIS0_EED2Ev
void std___Vector_base_clause__std__allocator_clause_______Vector_base(struct std___Vector_base_clause__std__allocator_clause__* v104) {
bb105:
  struct std___Vector_base_clause__std__allocator_clause__* this106;
  this106 = v104;
  struct std___Vector_base_clause__std__allocator_clause__* t107 = this106;
    struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* base108 = (struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data*)((char *)&(t107->_M_impl) + 0);
    struct clause* t109 = base108->_M_start;
    struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* base110 = (struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data*)((char *)&(t107->_M_impl) + 0);
    struct clause* t111 = base110->_M_end_of_storage;
    struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* base112 = (struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data*)((char *)&(t107->_M_impl) + 0);
    struct clause* t113 = base112->_M_start;
    long diff114 = t111 - t113;
    unsigned long cast115 = (unsigned long)diff114;
    std___Vector_base_clause__std__allocator_clause______M_deallocate(t107, t109, cast115);
  {
    std___Vector_base_clause__std__allocator_clause______Vector_impl____Vector_impl(&t107->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorI6clauseEC2Ev
void std____new_allocator_clause_____new_allocator(struct std____new_allocator_clause_* v116) {
bb117:
  struct std____new_allocator_clause_* this118;
  this118 = v116;
  struct std____new_allocator_clause_* t119 = this118;
  return;
}

// function: _ZNSaI6clauseEC2Ev
void std__allocator_clause___allocator(struct std__allocator_clause_* v120) {
bb121:
  struct std__allocator_clause_* this122;
  this122 = v120;
  struct std__allocator_clause_* t123 = this122;
  struct std____new_allocator_clause_* base124 = (struct std____new_allocator_clause_*)((char *)t123 + 0);
  std____new_allocator_clause_____new_allocator(base124);
  return;
}

// function: _ZNSt12_Vector_baseI6clauseSaIS0_EE17_Vector_impl_dataC2Ev
void std___Vector_base_clause__std__allocator_clause______Vector_impl_data___Vector_impl_data(struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* v125) {
bb126:
  struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* this127;
  this127 = v125;
  struct std___Vector_base_clause__std__allocator_clause_____Vector_impl_data* t128 = this127;
  struct clause* c129 = ((void*)0);
  t128->_M_start = c129;
  struct clause* c130 = ((void*)0);
  t128->_M_finish = c130;
  struct clause* c131 = ((void*)0);
  t128->_M_end_of_storage = c131;
  return;
}

// function: _ZNSaI6clauseED2Ev
void std__allocator_clause____allocator(struct std__allocator_clause_* v132) {
bb133:
  struct std__allocator_clause_* this134;
  this134 = v132;
  struct std__allocator_clause_* t135 = this134;
  return;
}

// function: _ZN6clauseD2Ev
void clause___clause(struct clause* v136) {
bb137:
  struct clause* this138;
  this138 = v136;
  struct clause* t139 = this138;
  {
    std__vector_int__std__allocator_int______vector(&t139->variables);
  }
  return;
}

// function: _ZSt10destroy_atI6clauseEvPT_
void void_std__destroy_at_clause_(struct clause* v140) {
bb141:
  struct clause* __location142;
  __location142 = v140;
    struct clause* t143 = __location142;
    clause___clause(t143);
  return;
}

// function: _ZSt8_DestroyI6clauseEvPT_
void void_std___Destroy_clause_(struct clause* v144) {
bb145:
  struct clause* __pointer146;
  __pointer146 = v144;
  struct clause* t147 = __pointer146;
  void_std__destroy_at_clause_(t147);
  return;
}

// function: _ZSt8_DestroyIP6clauseEvT_S2_
void void_std___Destroy_clause__(struct clause* v148, struct clause* v149) {
bb150:
  struct clause* __first151;
  struct clause* __last152;
  __first151 = v148;
  __last152 = v149;
      while (1) {
        struct clause* t154 = __first151;
        struct clause* t155 = __last152;
        _Bool c156 = ((t154 != t155)) ? 1 : 0;
        if (!c156) break;
        struct clause* t157 = __first151;
        void_std___Destroy_clause_(t157);
      for_step153: ;
        struct clause* t158 = __first151;
        int c159 = 1;
        struct clause* ptr160 = &(t158)[c159];
        __first151 = ptr160;
      }
  return;
}

// function: _ZSt8_DestroyIP6clauseS0_EvT_S2_RSaIT0_E
void void_std___Destroy_clause___clause_(struct clause* v161, struct clause* v162, struct std__allocator_clause_* v163) {
bb164:
  struct clause* __first165;
  struct clause* __last166;
  struct std__allocator_clause_* unnamed167;
  __first165 = v161;
  __last166 = v162;
  unnamed167 = v163;
  struct clause* t168 = __first165;
  struct clause* t169 = __last166;
  void_std___Destroy_clause__(t168, t169);
  return;
}

// function: _ZNSt12_Vector_baseI6clauseSaIS0_EE19_M_get_Tp_allocatorEv
struct std__allocator_clause_* std___Vector_base_clause__std__allocator_clause______M_get_Tp_allocator(struct std___Vector_base_clause__std__allocator_clause__* v170) {
bb171:
  struct std___Vector_base_clause__std__allocator_clause__* this172;
  struct std__allocator_clause_* __retval173;
  this172 = v170;
  struct std___Vector_base_clause__std__allocator_clause__* t174 = this172;
  struct std__allocator_clause_* base175 = (struct std__allocator_clause_*)((char *)&(t174->_M_impl) + 0);
  __retval173 = base175;
  struct std__allocator_clause_* t176 = __retval173;
  return t176;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v177) {
bb178:
  struct std__vector_int__std__allocator_int__* this179;
  this179 = v177;
  struct std__vector_int__std__allocator_int__* t180 = this179;
    struct std___Vector_base_int__std__allocator_int__* base181 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t180 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base182 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base181->_M_impl) + 0);
    int* t183 = base182->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base184 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t180 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base185 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base184->_M_impl) + 0);
    int* t186 = base185->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base187 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t180 + 0);
    struct std__allocator_int_* r188 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base187);
    void_std___Destroy_int___int_(t183, t186, r188);
  {
    struct std___Vector_base_int__std__allocator_int__* base189 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t180 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base189);
  }
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v190) {
bb191:
  int* __location192;
  __location192 = v190;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v193, int* v194) {
bb195:
  int* __first196;
  int* __last197;
  __first196 = v193;
  __last197 = v194;
      _Bool r198 = std____is_constant_evaluated();
      if (r198) {
          while (1) {
            int* t200 = __first196;
            int* t201 = __last197;
            _Bool c202 = ((t200 != t201)) ? 1 : 0;
            if (!c202) break;
            int* t203 = __first196;
            void_std__destroy_at_int_(t203);
          for_step199: ;
            int* t204 = __first196;
            int c205 = 1;
            int* ptr206 = &(t204)[c205];
            __first196 = ptr206;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v207, int* v208, struct std__allocator_int_* v209) {
bb210:
  int* __first211;
  int* __last212;
  struct std__allocator_int_* unnamed213;
  __first211 = v207;
  __last212 = v208;
  unnamed213 = v209;
  int* t214 = __first211;
  int* t215 = __last212;
  void_std___Destroy_int__(t214, t215);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v216) {
bb217:
  struct std___Vector_base_int__std__allocator_int__* this218;
  struct std__allocator_int_* __retval219;
  this218 = v216;
  struct std___Vector_base_int__std__allocator_int__* t220 = this218;
  struct std__allocator_int_* base221 = (struct std__allocator_int_*)((char *)&(t220->_M_impl) + 0);
  __retval219 = base221;
  struct std__allocator_int_* t222 = __retval219;
  return t222;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v223, int* v224, unsigned long v225) {
bb226:
  struct std____new_allocator_int_* this227;
  int* __p228;
  unsigned long __n229;
  this227 = v223;
  __p228 = v224;
  __n229 = v225;
  struct std____new_allocator_int_* t230 = this227;
    unsigned long c231 = 4;
    unsigned long c232 = 16;
    _Bool c233 = ((c231 > c232)) ? 1 : 0;
    if (c233) {
      int* t234 = __p228;
      void* cast235 = (void*)t234;
      unsigned long t236 = __n229;
      unsigned long c237 = 4;
      unsigned long b238 = t236 * c237;
      unsigned long c239 = 4;
      operator_delete_3(cast235, b238, c239);
      return;
    }
  int* t240 = __p228;
  void* cast241 = (void*)t240;
  unsigned long t242 = __n229;
  unsigned long c243 = 4;
  unsigned long b244 = t242 * c243;
  operator_delete_2(cast241, b244);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v245, int* v246, unsigned long v247) {
bb248:
  struct std__allocator_int_* this249;
  int* __p250;
  unsigned long __n251;
  this249 = v245;
  __p250 = v246;
  __n251 = v247;
  struct std__allocator_int_* t252 = this249;
    _Bool r253 = std____is_constant_evaluated();
    if (r253) {
      int* t254 = __p250;
      void* cast255 = (void*)t254;
      operator_delete(cast255);
      return;
    }
  struct std____new_allocator_int_* base256 = (struct std____new_allocator_int_*)((char *)t252 + 0);
  int* t257 = __p250;
  unsigned long t258 = __n251;
  std____new_allocator_int___deallocate(base256, t257, t258);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v259, int* v260, unsigned long v261) {
bb262:
  struct std__allocator_int_* __a263;
  int* __p264;
  unsigned long __n265;
  __a263 = v259;
  __p264 = v260;
  __n265 = v261;
  struct std__allocator_int_* t266 = __a263;
  int* t267 = __p264;
  unsigned long t268 = __n265;
  std__allocator_int___deallocate(t266, t267, t268);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v269, int* v270, unsigned long v271) {
bb272:
  struct std___Vector_base_int__std__allocator_int__* this273;
  int* __p274;
  unsigned long __n275;
  this273 = v269;
  __p274 = v270;
  __n275 = v271;
  struct std___Vector_base_int__std__allocator_int__* t276 = this273;
    int* t277 = __p274;
    _Bool cast278 = (_Bool)t277;
    if (cast278) {
      struct std__allocator_int_* base279 = (struct std__allocator_int_*)((char *)&(t276->_M_impl) + 0);
      int* t280 = __p274;
      unsigned long t281 = __n275;
      std__allocator_traits_std__allocator_int_____deallocate(base279, t280, t281);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v282) {
bb283:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this284;
  this284 = v282;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t285 = this284;
  {
    struct std__allocator_int_* base286 = (struct std__allocator_int_*)((char *)t285 + 0);
    std__allocator_int____allocator(base286);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v287) {
bb288:
  struct std___Vector_base_int__std__allocator_int__* this289;
  this289 = v287;
  struct std___Vector_base_int__std__allocator_int__* t290 = this289;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base291 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t290->_M_impl) + 0);
    int* t292 = base291->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base293 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t290->_M_impl) + 0);
    int* t294 = base293->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base295 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t290->_M_impl) + 0);
    int* t296 = base295->_M_start;
    long diff297 = t294 - t296;
    unsigned long cast298 = (unsigned long)diff297;
    std___Vector_base_int__std__allocator_int______M_deallocate(t290, t292, cast298);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t290->_M_impl);
  }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v299) {
bb300:
  struct std__allocator_int_* this301;
  this301 = v299;
  struct std__allocator_int_* t302 = this301;
  return;
}

