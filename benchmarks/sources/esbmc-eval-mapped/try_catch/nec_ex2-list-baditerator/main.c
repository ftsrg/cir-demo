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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTI11BadIterator[] = "_ZTI11BadIterator";

// Struct definitions (auto-parsed)
struct BadIterator { unsigned char __field0; };
struct List { struct ListNode* header; };
struct ListItr { struct ListNode* current; };
struct ListNode { struct VM* element; struct ListNode* next; };
struct Memory { int size; int* space; };
struct VM { int id; struct Memory* s; };
struct anon_struct_0 { unsigned char* __field0; unsigned char* __field1; };

extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
extern unsigned char _ZTI11BadIterator[];
char _str[30] = " VM Id:%d VM Memory Size:%d \n";
char _str_1[12] = "Empty list\n";
struct List vList __attribute__((aligned(8)));
int NUM_VMS __attribute__((aligned(4))) = 1;
char _str_2[10] = "Inserted:";
char _str_3[12] = "Reassigned:";
char _str_4[18] = "Exception caught\n";
extern void *_ZTVN10__cxxabiv117__class_type_infoE[];
char _ZTS11BadIterator[14] = "11BadIterator";
void __cxx_global_var_init();
extern int printf(char* p0, ...);
void printElement(struct VM* p0);
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void ListNode__ListNode_2(struct ListNode* p0);
void operator_delete(void* p0, unsigned long p1) { free(p0); }
void List__List_4(struct List* p0);
void List__List_2(struct List* p0) { List__List_4(p0); }
_Bool ListItr__isPastEnd(struct ListItr* p0);
void ListItr__advance(struct ListItr* p0);
struct List* List__operator_(struct List* p0, struct List* p1);
void List__List_3(struct List* p0, struct List* p1);
_Bool List__isEmpty(struct List* p0);
void List__remove(struct List* p0, struct VM** p1);
struct ListItr List__first(struct List* p0);
void BadIterator__BadIterator(struct BadIterator* p0);
struct VM** ListItr__retrieve(struct ListItr* p0);
void ListNode___ListNode(struct ListNode* p0);
void List__makeEmpty(struct List* p0);
void ListItr__ListItr(struct ListItr* p0, struct ListNode* p1);
struct ListItr List__zeroth(struct List* p0);
void ListNode__ListNode(struct ListNode* p0, struct VM* p1, struct ListNode* p2);
void List__insert(struct List* p0, struct VM** p1, struct ListItr* p2);
struct ListItr List__find(struct List* p0, struct VM** p1);
struct ListItr List__findPrevious(struct List* p0, struct VM** p1);
void printList(struct List* p0);
void Memory__Memory(struct Memory* p0, int p1);
void VM__VM(struct VM* p0, int p1);
void VM__initMemory(struct VM* p0, struct Memory* p1);
void createVMs();
void VM__reassignMemory(struct VM* p0, struct Memory* p1);
void resizeVMs();
extern int __gxx_personality_v0();
int main();
void VM___VM(struct VM* p0);
void Memory___Memory(struct Memory* p0);
void VM__destroy(struct VM* p0);
void operator_delete__(void* p0) { free(p0); }
void* operator_new__(unsigned long p0) { return malloc(p0); }
void operator_delete___2(void* p0, unsigned long p1) { free(p0); }
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp();

// function: __cxx_global_var_init
void __cxx_global_var_init() {
bb0:
  List__List_2(&vList);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _Z12printElementP2VM
void printElement(struct VM* v1) {
bb2:
  struct VM* v3;
  v3 = v1;
  char* cast4 = (char*)&(_str);
  struct VM* t5 = v3;
  int t6 = t5->id;
  struct VM* t7 = v3;
  struct Memory* t8 = t7->s;
  int t9 = t8->size;
  int r10 = printf(cast4, t6, t9);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN8ListNodeC2Ev
void ListNode__ListNode_2(struct ListNode* v11) {
bb12:
  struct ListNode* this13;
  this13 = v11;
  struct ListNode* t14 = this13;
  struct VM* c15 = ((void*)0);
  t14->element = c15;
  struct ListNode* c16 = ((void*)0);
  t14->next = c16;
  return;
}

// function: _ZN4ListC2Ev
void List__List_4(struct List* v17) {
bb18:
  struct List* this19;
  struct ListNode* __new_result20;
  this19 = v17;
  struct List* t21 = this19;
  unsigned long c22 = 16;
  void* r23 = operator_new(c22);
  if (__cir_exc_active) {
    return;
  }
    struct ListNode* cast24 = (struct ListNode*)r23;
    __new_result20 = cast24;
    ListNode__ListNode_2(cast24);
    if (__cir_exc_active) {
      {
        operator_delete(r23, c22);
      }
      return;
    }
  struct ListNode* t25 = __new_result20;
  t21->header = t25;
  return;
}

// function: _ZN7ListItr9isPastEndEv
_Bool ListItr__isPastEnd(struct ListItr* v26) {
bb27:
  struct ListItr* this28;
  _Bool __retval29;
  this28 = v26;
  struct ListItr* t30 = this28;
  struct ListNode* t31 = t30->current;
  struct ListNode* c32 = ((void*)0);
  _Bool c33 = ((t31 == c32)) ? 1 : 0;
  __retval29 = c33;
  _Bool t34 = __retval29;
  return t34;
}

// function: _ZN7ListItr7advanceEv
void ListItr__advance(struct ListItr* v35) {
bb36:
  struct ListItr* this37;
  this37 = v35;
  struct ListItr* t38 = this37;
    _Bool r39 = ListItr__isPastEnd(t38);
    if (__cir_exc_active) {
      return;
    }
    _Bool u40 = !r39;
    if (u40) {
      struct ListNode* t41 = t38->current;
      struct ListNode* t42 = t41->next;
      t38->current = t42;
    }
  return;
}

// function: _ZN4ListaSERS_
struct List* List__operator_(struct List* v43, struct List* v44) {
bb45:
  struct List* this46;
  struct List* rhs47;
  struct List* __retval48;
  struct ListItr ritr49;
  struct ListItr itr50;
  this46 = v43;
  rhs47 = v44;
  struct List* t51 = this46;
  struct List* t52 = rhs47;
  struct ListItr r53 = List__first(t52);
  if (__cir_exc_active) {
    struct List* __cir_eh_ret = (struct List*)0;
    return __cir_eh_ret;
  }
  ritr49 = r53;
  struct ListItr r54 = List__zeroth(t51);
  if (__cir_exc_active) {
    struct List* __cir_eh_ret = (struct List*)0;
    return __cir_eh_ret;
  }
  itr50 = r54;
    struct List* t55 = rhs47;
    _Bool c56 = ((t51 != t55)) ? 1 : 0;
    if (c56) {
      List__makeEmpty(t51);
      if (__cir_exc_active) {
        struct List* __cir_eh_ret = (struct List*)0;
        return __cir_eh_ret;
      }
        while (1) {
          _Bool r58 = ListItr__isPastEnd(&ritr49);
          if (__cir_exc_active) {
            struct List* __cir_eh_ret = (struct List*)0;
            return __cir_eh_ret;
          }
          _Bool u59 = !r58;
          if (!u59) break;
          struct VM** r60 = ListItr__retrieve(&ritr49);
          if (__cir_exc_active) {
            struct List* __cir_eh_ret = (struct List*)0;
            return __cir_eh_ret;
          }
          List__insert(t51, r60, &itr50);
          if (__cir_exc_active) {
            struct List* __cir_eh_ret = (struct List*)0;
            return __cir_eh_ret;
          }
        for_step57: ;
          ListItr__advance(&ritr49);
          if (__cir_exc_active) {
            struct List* __cir_eh_ret = (struct List*)0;
            return __cir_eh_ret;
          }
          ListItr__advance(&itr50);
          if (__cir_exc_active) {
            struct List* __cir_eh_ret = (struct List*)0;
            return __cir_eh_ret;
          }
        }
    }
  __retval48 = t51;
  struct List* t61 = __retval48;
  return t61;
}

// function: _ZN4ListC2ERS_
void List__List_3(struct List* v62, struct List* v63) {
bb64:
  struct List* this65;
  struct List* rhs66;
  struct ListNode* __new_result67;
  this65 = v62;
  rhs66 = v63;
  struct List* t68 = this65;
  unsigned long c69 = 16;
  void* r70 = operator_new(c69);
  if (__cir_exc_active) {
    return;
  }
    struct ListNode* cast71 = (struct ListNode*)r70;
    __new_result67 = cast71;
    ListNode__ListNode_2(cast71);
    if (__cir_exc_active) {
      {
        operator_delete(r70, c69);
      }
      return;
    }
  struct ListNode* t72 = __new_result67;
  t68->header = t72;
  struct List* t73 = rhs66;
  struct List* r74 = List__operator_(t68, t73);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN4List7isEmptyEv
_Bool List__isEmpty(struct List* v75) {
bb76:
  struct List* this77;
  _Bool __retval78;
  this77 = v75;
  struct List* t79 = this77;
  struct ListNode* t80 = t79->header;
  struct ListNode* t81 = t80->next;
  struct ListNode* c82 = ((void*)0);
  _Bool c83 = ((t81 == c82)) ? 1 : 0;
  __retval78 = c83;
  _Bool t84 = __retval78;
  return t84;
}

// function: _ZN4List6removeERP2VM
void List__remove(struct List* v85, struct VM** v86) {
bb87:
  struct List* this88;
  struct VM** x89;
  struct ListItr p90;
  this88 = v85;
  x89 = v86;
  struct List* t91 = this88;
  struct VM** t92 = x89;
  struct ListItr r93 = List__findPrevious(t91, t92);
  if (__cir_exc_active) {
    return;
  }
  p90 = r93;
    struct ListNode* t94 = p90.current;
    struct ListNode* t95 = t94->next;
    struct ListNode* c96 = ((void*)0);
    _Bool c97 = ((t95 != c96)) ? 1 : 0;
    if (c97) {
      struct ListNode* oldNode98;
      struct ListNode* t99 = p90.current;
      struct ListNode* t100 = t99->next;
      oldNode98 = t100;
      struct ListNode* t101 = p90.current;
      struct ListNode* t102 = t101->next;
      struct ListNode* t103 = t102->next;
      struct ListNode* t104 = p90.current;
      t104->next = t103;
      struct ListNode* t105 = oldNode98;
      struct ListNode* c106 = ((void*)0);
      _Bool c107 = ((t105 != c106)) ? 1 : 0;
      if (c107) {
          ListNode___ListNode(t105);
        {
          void* cast108 = (void*)t105;
          unsigned long c109 = 16;
          operator_delete(cast108, c109);
        }
      }
    }
  return;
}

// function: _ZN4List5firstEv
struct ListItr List__first(struct List* v110) {
bb111:
  struct List* this112;
  struct ListItr __retval113;
  this112 = v110;
  struct List* t114 = this112;
  struct ListNode* t115 = t114->header;
  struct ListNode* t116 = t115->next;
  ListItr__ListItr(&__retval113, t116);
  if (__cir_exc_active) {
    struct ListItr __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct ListItr t117 = __retval113;
  return t117;
}

// function: _ZN11BadIteratorC2Ev
void BadIterator__BadIterator(struct BadIterator* v118) {
bb119:
  struct BadIterator* this121;
  this121 = v118;
  struct BadIterator* t122 = this121;
  goto ERROR;
bb120:
ERROR: ;
  return;
}

// function: _ZN7ListItr8retrieveEv
struct VM** ListItr__retrieve(struct ListItr* v123) {
bb124:
  struct ListItr* this125;
  struct VM** __retval126;
  this125 = v123;
  struct ListItr* t127 = this125;
    _Bool r128 = ListItr__isPastEnd(t127);
    if (__cir_exc_active) {
      struct VM** __cir_eh_ret = (struct VM**)0;
      return __cir_eh_ret;
    }
    if (r128) {
      static char exc_buf129[1] = {0};
      struct BadIterator* exc130 = (struct BadIterator*)exc_buf129;
      BadIterator__BadIterator(exc130);
      if (__cir_exc_active) {
        struct VM** __cir_eh_ret = (struct VM**)0;
        return __cir_eh_ret;
      }
      __cir_exc_ptr = (void*)exc130;
      __cir_exc_dtor = (void*)0;
      __cir_exc_type = (const void*)__cir_eh_type__ZTI11BadIterator;
      __cir_exc_type_id = (unsigned long)__cir_eh_type__ZTI11BadIterator;
      __cir_exc_active = 1;
      { struct VM** __cir_eh_ret = (struct VM**)0; return __cir_eh_ret; }
      __builtin_unreachable();
    }
  struct ListNode* t131 = t127->current;
  __retval126 = &t131->element;
  struct VM** t132 = __retval126;
  return t132;
}

// function: _ZN8ListNodeD2Ev
void ListNode___ListNode(struct ListNode* v133) {
bb134:
  struct ListNode* this135;
  this135 = v133;
  struct ListNode* t136 = this135;
    struct VM* t137 = t136->element;
    _Bool cast138 = (_Bool)t137;
    if (cast138) {
      struct VM* t139 = t136->element;
      struct VM* c140 = ((void*)0);
      _Bool c141 = ((t139 != c140)) ? 1 : 0;
      if (c141) {
          VM___VM(t139);
        {
          void* cast142 = (void*)t139;
          unsigned long c143 = 16;
          operator_delete(cast142, c143);
        }
      }
    }
  return;
}

// function: _ZN4List9makeEmptyEv
void List__makeEmpty(struct List* v144) {
bb145:
  struct List* this146;
  this146 = v144;
  struct List* t147 = this146;
    struct ListItr ref_tmp0148;
    while (1) {
      _Bool r149 = List__isEmpty(t147);
      if (__cir_exc_active) {
        return;
      }
      _Bool u150 = !r149;
      if (!u150) break;
      struct ListItr r151 = List__first(t147);
      if (__cir_exc_active) {
        return;
      }
      ref_tmp0148 = r151;
      struct VM** r152 = ListItr__retrieve(&ref_tmp0148);
      if (__cir_exc_active) {
        return;
      }
      List__remove(t147, r152);
      if (__cir_exc_active) {
        return;
      }
    }
  struct ListNode* t153 = t147->header;
  struct ListNode* c154 = ((void*)0);
  _Bool c155 = ((t153 != c154)) ? 1 : 0;
  if (c155) {
      ListNode___ListNode(t153);
    {
      void* cast156 = (void*)t153;
      unsigned long c157 = 16;
      operator_delete(cast156, c157);
    }
  }
  return;
}

// function: _ZN7ListItrC2EP8ListNode
void ListItr__ListItr(struct ListItr* v158, struct ListNode* v159) {
bb160:
  struct ListItr* this161;
  struct ListNode* theNode162;
  this161 = v158;
  theNode162 = v159;
  struct ListItr* t163 = this161;
  struct ListNode* t164 = theNode162;
  t163->current = t164;
  return;
}

// function: _ZN4List6zerothEv
struct ListItr List__zeroth(struct List* v165) {
bb166:
  struct List* this167;
  struct ListItr __retval168;
  this167 = v165;
  struct List* t169 = this167;
  struct ListNode* t170 = t169->header;
  ListItr__ListItr(&__retval168, t170);
  if (__cir_exc_active) {
    struct ListItr __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct ListItr t171 = __retval168;
  return t171;
}

// function: _ZN8ListNodeC2EP2VMPS_
void ListNode__ListNode(struct ListNode* v172, struct VM* v173, struct ListNode* v174) {
bb175:
  struct ListNode* this176;
  struct VM* theElement177;
  struct ListNode* n178;
  this176 = v172;
  theElement177 = v173;
  n178 = v174;
  struct ListNode* t179 = this176;
  struct VM* t180 = theElement177;
  t179->element = t180;
  struct ListNode* t181 = n178;
  t179->next = t181;
  return;
}

// function: _ZN4List6insertERP2VMR7ListItr
void List__insert(struct List* v182, struct VM** v183, struct ListItr* v184) {
bb185:
  struct List* this186;
  struct VM** x187;
  struct ListItr* p188;
  this186 = v182;
  x187 = v183;
  p188 = v184;
  struct List* t189 = this186;
    struct ListItr* t190 = p188;
    struct ListNode* t191 = t190->current;
    struct ListNode* c192 = ((void*)0);
    _Bool c193 = ((t191 != c192)) ? 1 : 0;
    if (c193) {
      struct ListNode* tmp194;
      struct ListNode* __new_result195;
      struct ListItr* t196 = p188;
      struct ListNode* t197 = t196->current;
      struct ListNode* t198 = t197->next;
      tmp194 = t198;
      unsigned long c199 = 16;
      void* r200 = operator_new(c199);
      if (__cir_exc_active) {
        return;
      }
        struct ListNode* cast201 = (struct ListNode*)r200;
        __new_result195 = cast201;
        struct VM** t202 = x187;
        struct VM* t203 = *t202;
        struct ListNode* t204 = tmp194;
        ListNode__ListNode(cast201, t203, t204);
        if (__cir_exc_active) {
          {
            operator_delete(r200, c199);
          }
          return;
        }
      struct ListNode* t205 = __new_result195;
      struct ListItr* t206 = p188;
      struct ListNode* t207 = t206->current;
      t207->next = t205;
    }
  return;
}

// function: _ZN4List4findERP2VM
struct ListItr List__find(struct List* v208, struct VM** v209) {
bb210:
  struct List* this211;
  struct VM** x212;
  struct ListItr __retval213;
  struct ListNode* itr214;
  this211 = v208;
  x212 = v209;
  struct List* t215 = this211;
  struct ListNode* t216 = t215->header;
  struct ListNode* t217 = t216->next;
  itr214 = t217;
    while (1) {
      struct ListNode* t218 = itr214;
      struct ListNode* c219 = ((void*)0);
      _Bool c220 = ((t218 != c219)) ? 1 : 0;
      _Bool ternary221;
      if (c220) {
        struct ListNode* t222 = itr214;
        struct VM* t223 = t222->element;
        struct VM** t224 = x212;
        struct VM* t225 = *t224;
        _Bool c226 = ((t223 != t225)) ? 1 : 0;
        ternary221 = (_Bool)c226;
      } else {
        _Bool c227 = 0;
        ternary221 = (_Bool)c227;
      }
      if (!ternary221) break;
      struct ListNode* t228 = itr214;
      struct ListNode* t229 = t228->next;
      itr214 = t229;
    }
  struct ListNode* t230 = itr214;
  ListItr__ListItr(&__retval213, t230);
  if (__cir_exc_active) {
    struct ListItr __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct ListItr t231 = __retval213;
  return t231;
}

// function: _ZN4List12findPreviousERP2VM
struct ListItr List__findPrevious(struct List* v232, struct VM** v233) {
bb234:
  struct List* this235;
  struct VM** x236;
  struct ListItr __retval237;
  struct ListNode* itr238;
  this235 = v232;
  x236 = v233;
  struct List* t239 = this235;
  struct ListNode* t240 = t239->header;
  itr238 = t240;
    while (1) {
      struct ListNode* t241 = itr238;
      struct ListNode* t242 = t241->next;
      struct ListNode* c243 = ((void*)0);
      _Bool c244 = ((t242 != c243)) ? 1 : 0;
      _Bool ternary245;
      if (c244) {
        struct ListNode* t246 = itr238;
        struct ListNode* t247 = t246->next;
        struct VM* t248 = t247->element;
        struct VM** t249 = x236;
        struct VM* t250 = *t249;
        _Bool c251 = ((t248 != t250)) ? 1 : 0;
        ternary245 = (_Bool)c251;
      } else {
        _Bool c252 = 0;
        ternary245 = (_Bool)c252;
      }
      if (!ternary245) break;
      struct ListNode* t253 = itr238;
      struct ListNode* t254 = t253->next;
      itr238 = t254;
    }
  struct ListNode* t255 = itr238;
  ListItr__ListItr(&__retval237, t255);
  if (__cir_exc_active) {
    struct ListItr __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct ListItr t256 = __retval237;
  return t256;
}

// function: _Z9printListR4List
void printList(struct List* v257) {
bb258:
  struct List* theList259;
  theList259 = v257;
    struct List* t260 = theList259;
    _Bool r261 = List__isEmpty(t260);
    if (__cir_exc_active) {
      return;
    }
    if (r261) {
      char* cast262 = (char*)&(_str_1);
      int r263 = printf(cast262);
      if (__cir_exc_active) {
        return;
      }
    } else {
      struct ListItr itr264;
      struct List* t265 = theList259;
      struct ListItr r266 = List__first(t265);
      if (__cir_exc_active) {
        return;
      }
      itr264 = r266;
        while (1) {
          _Bool r268 = ListItr__isPastEnd(&itr264);
          if (__cir_exc_active) {
            return;
          }
          _Bool u269 = !r268;
          if (!u269) break;
          struct VM** r270 = ListItr__retrieve(&itr264);
          if (__cir_exc_active) {
            return;
          }
          struct VM* t271 = *r270;
          printElement(t271);
          if (__cir_exc_active) {
            return;
          }
        for_step267: ;
          ListItr__advance(&itr264);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZN6MemoryC2Ei
void Memory__Memory(struct Memory* v272, int v273) {
bb274:
  struct Memory* this275;
  int s276;
  int* __new_result277;
  this275 = v272;
  s276 = v273;
  struct Memory* t278 = this275;
  int t279 = s276;
  unsigned long cast280 = (unsigned long)t279;
  unsigned long c281 = 4;
  unsigned long ovr282;
  _Bool ovf283 = __builtin_mul_overflow(cast280, c281, &ovr282);
  unsigned long c284 = -1;
  unsigned long sel285 = ovf283 ? c284 : ovr282;
  void* r286 = operator_new__(sel285);
  if (__cir_exc_active) {
    return;
  }
    int* cast287 = (int*)r286;
    __new_result277 = cast287;
  int* t288 = __new_result277;
  t278->space = t288;
  int t289 = s276;
  t278->size = t289;
  return;
}

// function: _ZN2VMC2Ei
void VM__VM(struct VM* v290, int v291) {
bb292:
  struct VM* this293;
  int i294;
  this293 = v290;
  i294 = v291;
  struct VM* t295 = this293;
  int t296 = i294;
  t295->id = t296;
  struct Memory* c297 = ((void*)0);
  t295->s = c297;
  return;
}

// function: _ZN2VM10initMemoryEP6Memory
void VM__initMemory(struct VM* v298, struct Memory* v299) {
bb300:
  struct VM* this301;
  struct Memory* sp302;
  this301 = v298;
  sp302 = v299;
  struct VM* t303 = this301;
  struct Memory* t304 = sp302;
  t303->s = t304;
  return;
}

// function: _Z9createVMsv
void createVMs() {
bb305:
  struct ListItr vItr306;
  int i307;
  struct ListItr r308 = List__zeroth(&vList);
  if (__cir_exc_active) {
    return;
  }
  vItr306 = r308;
    int i309;
    int c310 = 0;
    i309 = c310;
    while (1) {
      int t312 = i309;
      int t313 = NUM_VMS;
      _Bool c314 = ((t312 < t313)) ? 1 : 0;
      if (!c314) break;
        struct Memory* s315;
        struct Memory* __new_result316;
        struct VM* v317;
        struct VM* __new_result318;
        unsigned long c319 = 16;
        void* r320 = operator_new(c319);
        if (__cir_exc_active) {
          return;
        }
          struct Memory* cast321 = (struct Memory*)r320;
          __new_result316 = cast321;
          int c322 = 1024;
          Memory__Memory(cast321, c322);
          if (__cir_exc_active) {
            {
              operator_delete(r320, c319);
            }
            return;
          }
        struct Memory* t323 = __new_result316;
        s315 = t323;
        unsigned long c324 = 16;
        void* r325 = operator_new(c324);
        if (__cir_exc_active) {
          return;
        }
          struct VM* cast326 = (struct VM*)r325;
          __new_result318 = cast326;
          int t327 = i309;
          VM__VM(cast326, t327);
          if (__cir_exc_active) {
            {
              operator_delete(r325, c324);
            }
            return;
          }
        struct VM* t328 = __new_result318;
        v317 = t328;
        struct VM* t329 = v317;
        struct Memory* t330 = s315;
        VM__initMemory(t329, t330);
        if (__cir_exc_active) {
          return;
        }
        List__insert(&vList, &v317, &vItr306);
        if (__cir_exc_active) {
          return;
        }
        char* cast331 = (char*)&(_str_2);
        int r332 = printf(cast331);
        if (__cir_exc_active) {
          return;
        }
        struct VM* t333 = v317;
        printElement(t333);
        if (__cir_exc_active) {
          return;
        }
        ListItr__advance(&vItr306);
        if (__cir_exc_active) {
          return;
        }
    for_step311: ;
      int t334 = i309;
      int u335 = t334 + 1;
      i309 = u335;
    }
  return;
}

// function: _ZN2VM14reassignMemoryEP6Memory
void VM__reassignMemory(struct VM* v336, struct Memory* v337) {
bb338:
  struct VM* this339;
  struct Memory* sp340;
  this339 = v336;
  sp340 = v337;
  struct VM* t341 = this339;
    struct Memory* t342 = t341->s;
    _Bool cast343 = (_Bool)t342;
    if (cast343) {
      struct Memory* t344 = t341->s;
      struct Memory* c345 = ((void*)0);
      _Bool c346 = ((t344 != c345)) ? 1 : 0;
      if (c346) {
          Memory___Memory(t344);
        {
          void* cast347 = (void*)t344;
          unsigned long c348 = 16;
          operator_delete(cast347, c348);
        }
      }
    }
  struct Memory* t349 = sp340;
  t341->s = t349;
  return;
}

// function: _Z9resizeVMsv
void resizeVMs() {
bb350:
  struct ListItr vItr351;
  struct ListItr r352 = List__zeroth(&vList);
  if (__cir_exc_active) {
    return;
  }
  vItr351 = r352;
    int i353;
    int c354 = 0;
    i353 = c354;
    while (1) {
      int t356 = i353;
      int t357 = NUM_VMS;
      _Bool c358 = ((t356 <= t357)) ? 1 : 0;
      if (!c358) break;
        struct Memory* newM359;
        struct Memory* __new_result360;
        struct VM* vm361;
        ListItr__advance(&vItr351);
        if (__cir_exc_active) {
          return;
        }
        unsigned long c362 = 16;
        void* r363 = operator_new(c362);
        if (__cir_exc_active) {
          return;
        }
          struct Memory* cast364 = (struct Memory*)r363;
          __new_result360 = cast364;
          int c365 = 2048;
          Memory__Memory(cast364, c365);
          if (__cir_exc_active) {
            {
              operator_delete(r363, c362);
            }
            return;
          }
        struct Memory* t366 = __new_result360;
        newM359 = t366;
        struct VM** r367 = ListItr__retrieve(&vItr351);
        if (__cir_exc_active) {
          return;
        }
        struct VM* t368 = *r367;
        vm361 = t368;
        struct VM* t369 = vm361;
        struct Memory* t370 = newM359;
        VM__reassignMemory(t369, t370);
        if (__cir_exc_active) {
          return;
        }
        char* cast371 = (char*)&(_str_3);
        int r372 = printf(cast371);
        if (__cir_exc_active) {
          return;
        }
        struct VM* t373 = vm361;
        printElement(t373);
        if (__cir_exc_active) {
          return;
        }
    for_step355: ;
      int t374 = i353;
      int u375 = t374 + 1;
      i353 = u375;
    }
  return;
}

// function: main
int main() {
bb376:
  int __retval377;
  int c378 = 0;
  __retval377 = c378;
      createVMs();
      if (__cir_exc_active) {
        goto cir_try_dispatch379;
      }
      resizeVMs();
      if (__cir_exc_active) {
        goto cir_try_dispatch379;
      }
    cir_try_dispatch379: ;
    if (__cir_exc_active) {
    {
      int ca_tok380 = 0;
      void* ca_exn381 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        char* cast382 = (char*)&(_str_4);
        int r383 = printf(cast382);
        if (__cir_exc_active) {
          {
            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        goto ERROR;
      bb384:
      ERROR: ;
    }
    }
  List__makeEmpty(&vList);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
  int c385 = 0;
  __retval377 = c385;
  int t386 = __retval377;
  return t386;
}

// function: _ZN2VMD2Ev
void VM___VM(struct VM* v387) {
bb388:
  struct VM* this389;
  this389 = v387;
  struct VM* t390 = this389;
  VM__destroy(t390);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN6MemoryD2Ev
void Memory___Memory(struct Memory* v391) {
bb392:
  struct Memory* this393;
  this393 = v391;
  struct Memory* t394 = this393;
    int* t395 = t394->space;
    _Bool cast396 = (_Bool)t395;
    if (cast396) {
      int* t397 = t394->space;
      int* c398 = ((void*)0);
      _Bool c399 = ((t397 != c398)) ? 1 : 0;
      if (c399) {
        void* cast400 = (void*)t397;
        {
          operator_delete__(cast400);
        }
      }
    }
  return;
}

// function: _ZN2VM7destroyEv
void VM__destroy(struct VM* v401) {
bb402:
  struct VM* this403;
  this403 = v401;
  struct VM* t404 = this403;
    struct Memory* t405 = t404->s;
    _Bool cast406 = (_Bool)t405;
    if (cast406) {
      struct Memory* t407 = t404->s;
      struct Memory* c408 = ((void*)0);
      _Bool c409 = ((t407 != c408)) ? 1 : 0;
      if (c409) {
          Memory___Memory(t407);
        {
          void* cast410 = (void*)t407;
          unsigned long c411 = 16;
          operator_delete(cast410, c411);
        }
      }
    }
  return;
}

// function: _GLOBAL__sub_I_main.cpp
__attribute__((constructor)) void _GLOBAL__sub_I_main_cpp() {
bb412:
  __cxx_global_var_init();
  if (__cir_exc_active) {
    return;
  }
  return;
}

