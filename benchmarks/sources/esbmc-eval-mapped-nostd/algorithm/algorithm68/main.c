extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ { char* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_char____void_ { char* _M_first; char** _M_cur; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl_data { char* _M_start; char* _M_finish; char* _M_end_of_storage; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_char__std__allocator_char_____Vector_impl { struct std___Vector_base_char__std__allocator_char_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_char__std__allocator_char__ { struct std___Vector_base_char__std__allocator_char__ __field0; };

int __const_main_match[3] = {65, 66, 67};
int __const_main_mychars[6] = {97, 98, 99, 65, 66, 67};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[17] = "first match is: ";
char _str_1[11] = "*it != 'a'";
char _str_2[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm68/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_3[49] = "cannot create std::vector larger than max_size()";
extern int tolower(int p0);
_Bool comp_case_insensitive(char p0, char p1);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std__vector_char__std__allocator_char_____vector_int___void_(struct std__vector_char__std__allocator_char__* p0, int* p1, int* p2, struct std__allocator_char_* p3);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, int* p2, int* p3);
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, char** p1);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end(struct std__vector_char__std__allocator_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p1);
char** __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
_Bool _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p1);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___bool_____char__char_____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___int___bool____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p0, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ p1, int* p2, int* p3, void* p4);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0, struct std__allocator_char_* p1);
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* p0);
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0, struct std__allocator_char_* p1);
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* p0, int** p1, int* p2);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* p0, unsigned long p1, void* p2);
char* std__allocator_char___allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* p0, unsigned long p1);
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* p0, unsigned long p1);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* p0);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_char__std__allocator_char______S_check_init_len(unsigned long p0, struct std__allocator_char_* p1);
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* p0);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_char___void____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* p0, char** p1);
char* _ZSt12construct_atIcJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* p0, int* p1);
void void_std___Construct_char__int__(char* p0, int* p1);
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* p0);
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* p0);
char* char__std____do_uninit_copy_int___int___char__(int* p0, int* p1, char* p2);
char* char__std__uninitialized_copy_int___char__(int* p0, int* p1, char* p2);
char* char__std____uninitialized_copy_a_int___int___char___char_(int* p0, int* p1, char* p2, struct std__allocator_char_* p3);
void void_std__vector_char__std__allocator_char______M_range_initialize_n_int___int__(struct std__vector_char__std__allocator_char__* p0, int* p1, int* p2, unsigned long p3);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* p0, char* p1, unsigned long p2);
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* p0);
void void_std__destroy_at_char_(char* p0);
void void_std___Destroy_char__(char* p0, char* p1);
void void_std___Destroy_char___char_(char* p0, char* p1, struct std__allocator_char_* p2);

// function: _Z21comp_case_insensitivecc
_Bool comp_case_insensitive(char v0, char v1) {
bb2:
  char c13;
  char c24;
  _Bool __retval5;
  c13 = v0;
  c24 = v1;
  char t6 = c13;
  int cast7 = (int)t6;
  int r8 = tolower(cast7);
  char t9 = c24;
  int cast10 = (int)t9;
  int r11 = tolower(cast10);
  _Bool c12 = ((r8 == r11)) ? 1 : 0;
  __retval5 = c12;
  _Bool t13 = __retval5;
  return t13;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v14) {
bb15:
  struct std__allocator_char_* this16;
  this16 = v14;
  struct std__allocator_char_* t17 = this16;
  struct std____new_allocator_char_* base18 = (struct std____new_allocator_char_*)((char *)t17 + 0);
  std____new_allocator_char_____new_allocator_2(base18);
  return;
}

// function: _ZNSt6vectorIcSaIcEEC2IPivEET_S4_RKS0_
void std__vector_char__std__allocator_char_____vector_int___void_(struct std__vector_char__std__allocator_char__* v19, int* v20, int* v21, struct std__allocator_char_* v22) {
bb23:
  struct std__vector_char__std__allocator_char__* this24;
  int* __first25;
  int* __last26;
  struct std__allocator_char_* __a27;
  this24 = v19;
  __first25 = v20;
  __last26 = v21;
  __a27 = v22;
  struct std__vector_char__std__allocator_char__* t28 = this24;
  struct std___Vector_base_char__std__allocator_char__* base29 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t28 + 0);
  struct std__allocator_char_* t30 = __a27;
  std___Vector_base_char__std__allocator_char______Vector_base(base29, t30);
      unsigned long __n31;
      int* t32 = __last26;
      long r33 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first25, t32);
      unsigned long cast34 = (unsigned long)r33;
      __n31 = cast34;
      int* t35 = __first25;
      int* t36 = __last26;
      unsigned long t37 = __n31;
      void_std__vector_char__std__allocator_char______M_range_initialize_n_int___int__(t28, t35, t36, t37);
      {
        struct std___Vector_base_char__std__allocator_char__* base38 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t28 + 0);
        std___Vector_base_char__std__allocator_char_______Vector_base(base38);
      }
      return;
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v39) {
bb40:
  struct std__allocator_char_* this41;
  this41 = v39;
  struct std__allocator_char_* t42 = this41;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEC2Ev
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator_2(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v43) {
bb44:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this45;
  this45 = v43;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t46 = this45;
  char* c47 = ((void*)0);
  t46->_M_current = c47;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEppEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v48) {
bb49:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this50;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __retval51;
  this50 = v48;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t52 = this50;
  char* t53 = t52->_M_current;
  int c54 = 1;
  char* ptr55 = &(t53)[c54];
  t52->_M_current = ptr55;
  __retval51 = t52;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t56 = __retval51;
  return t56;
}

// function: _ZSt13find_first_ofIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEPiET_S8_S8_T0_S9_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v57, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v58, int* v59, int* v60) {
bb61:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first162;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last163;
  int* __first264;
  int* __last265;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval66;
  __first162 = v57;
  __last163 = v58;
  __first264 = v59;
  __last265 = v60;
    while (1) {
      _Bool r68 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first162, &__last163);
      _Bool u69 = !r68;
      if (!u69) break;
        int* __iter70;
        int* t71 = __first264;
        __iter70 = t71;
        while (1) {
          int* t73 = __iter70;
          int* t74 = __last265;
          _Bool c75 = ((t73 != t74)) ? 1 : 0;
          if (!c75) break;
            char* r76 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&__first162);
            char t77 = *r76;
            int cast78 = (int)t77;
            int* t79 = __iter70;
            int t80 = *t79;
            _Bool c81 = ((cast78 == t80)) ? 1 : 0;
            if (c81) {
              __retval66 = __first162; // copy
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t82 = __retval66;
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ret_val83 = t82;
              return ret_val83;
            }
        for_step72: ;
          int* t84 = __iter70;
          int c85 = 1;
          int* ptr86 = &(t84)[c85];
          __iter70 = ptr86;
        }
    for_step67: ;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r87 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(&__first162);
    }
  __retval66 = __last163; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t88 = __retval66;
  return t88;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEC2ERKS1_
void __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v89, char** v90) {
bb91:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this92;
  char** __i93;
  this92 = v89;
  __i93 = v90;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t94 = this92;
  char** t95 = __i93;
  char* t96 = *t95;
  t94->_M_current = t96;
  return;
}

// function: _ZNSt6vectorIcSaIcEE5beginEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____begin(struct std__vector_char__std__allocator_char__* v97) {
bb98:
  struct std__vector_char__std__allocator_char__* this99;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval100;
  this99 = v97;
  struct std__vector_char__std__allocator_char__* t101 = this99;
  struct std___Vector_base_char__std__allocator_char__* base102 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t101 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base103 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base102->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval100, &base103->_M_start);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t104 = __retval100;
  return t104;
}

// function: _ZNSt6vectorIcSaIcEE3endEv
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ std__vector_char__std__allocator_char_____end(struct std__vector_char__std__allocator_char__* v105) {
bb106:
  struct std__vector_char__std__allocator_char__* this107;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval108;
  this107 = v105;
  struct std__vector_char__std__allocator_char__* t109 = this107;
  struct std___Vector_base_char__std__allocator_char__* base110 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t109 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base111 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base110->_M_impl) + 0);
  __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator(&__retval108, &base111->_M_finish);
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t112 = __retval108;
  return t112;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEaSEOS5_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v113, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v114) {
bb115:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this116;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* unnamed117;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __retval118;
  this116 = v113;
  unnamed117 = v114;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t119 = this116;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t120 = unnamed117;
  char* t121 = t120->_M_current;
  t119->_M_current = t121;
  __retval118 = t119;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t122 = __retval118;
  return t122;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEE4baseEv
char** __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v123) {
bb124:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this125;
  char** __retval126;
  this125 = v123;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t127 = this125;
  __retval126 = &t127->_M_current;
  char** t128 = __retval126;
  return t128;
}

// function: _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v129, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v130) {
bb131:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __lhs132;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* __rhs133;
  _Bool __retval134;
  __lhs132 = v129;
  __rhs133 = v130;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t135 = __lhs132;
  char** r136 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t135);
  char* t137 = *r136;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t138 = __rhs133;
  char** r139 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______base___const(t138);
  char* t140 = *r139;
  _Bool c141 = ((t137 == t140)) ? 1 : 0;
  __retval134 = c141;
  _Bool t142 = __retval134;
  return t142;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v143) {
bb144:
  struct std__ios_base* this145;
  long __retval146;
  this145 = v143;
  struct std__ios_base* t147 = this145;
  long t148 = t147->_M_width;
  __retval146 = t148;
  long t149 = __retval146;
  return t149;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v150, char v151) {
bb152:
  struct std__basic_ostream_char__std__char_traits_char__* __out153;
  char __c154;
  struct std__basic_ostream_char__std__char_traits_char__* __retval155;
  __out153 = v150;
  __c154 = v151;
    struct std__basic_ostream_char__std__char_traits_char__* t156 = __out153;
    void** v157 = (void**)t156;
    void* v158 = *((void**)v157);
    unsigned char* cast159 = (unsigned char*)v158;
    long c160 = -24;
    unsigned char* ptr161 = &(cast159)[c160];
    long* cast162 = (long*)ptr161;
    long t163 = *cast162;
    unsigned char* cast164 = (unsigned char*)t156;
    unsigned char* ptr165 = &(cast164)[t163];
    struct std__basic_ostream_char__std__char_traits_char__* cast166 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr165;
    struct std__ios_base* cast167 = (struct std__ios_base*)cast166;
    long r168 = std__ios_base__width___const(cast167);
    long c169 = 0;
    _Bool c170 = ((r168 != c169)) ? 1 : 0;
    if (c170) {
      struct std__basic_ostream_char__std__char_traits_char__* t171 = __out153;
      long c172 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r173 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t171, &__c154, c172);
      __retval155 = r173;
      struct std__basic_ostream_char__std__char_traits_char__* t174 = __retval155;
      return t174;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t175 = __out153;
  char t176 = __c154;
  struct std__basic_ostream_char__std__char_traits_char__* r177 = std__ostream__put(t175, t176);
  struct std__basic_ostream_char__std__char_traits_char__* t178 = __out153;
  __retval155 = t178;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __retval155;
  return t179;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v180, int v181) {
bb182:
  int __a183;
  int __b184;
  int __retval185;
  __a183 = v180;
  __b184 = v181;
  int t186 = __a183;
  int t187 = __b184;
  int b188 = t186 | t187;
  __retval185 = b188;
  int t189 = __retval185;
  return t189;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v190) {
bb191:
  struct std__basic_ios_char__std__char_traits_char__* this192;
  int __retval193;
  this192 = v190;
  struct std__basic_ios_char__std__char_traits_char__* t194 = this192;
  struct std__ios_base* base195 = (struct std__ios_base*)((char *)t194 + 0);
  int t196 = base195->_M_streambuf_state;
  __retval193 = t196;
  int t197 = __retval193;
  return t197;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v198, int v199) {
bb200:
  struct std__basic_ios_char__std__char_traits_char__* this201;
  int __state202;
  this201 = v198;
  __state202 = v199;
  struct std__basic_ios_char__std__char_traits_char__* t203 = this201;
  int r204 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t203);
  int t205 = __state202;
  int r206 = std__operator_(r204, t205);
  std__basic_ios_char__std__char_traits_char_____clear(t203, r206);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v207, char* v208) {
bb209:
  char* __c1210;
  char* __c2211;
  _Bool __retval212;
  __c1210 = v207;
  __c2211 = v208;
  char* t213 = __c1210;
  char t214 = *t213;
  int cast215 = (int)t214;
  char* t216 = __c2211;
  char t217 = *t216;
  int cast218 = (int)t217;
  _Bool c219 = ((cast215 == cast218)) ? 1 : 0;
  __retval212 = c219;
  _Bool t220 = __retval212;
  return t220;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v221) {
bb222:
  char* __p223;
  unsigned long __retval224;
  unsigned long __i225;
  __p223 = v221;
  unsigned long c226 = 0;
  __i225 = c226;
    char ref_tmp0227;
    while (1) {
      unsigned long t228 = __i225;
      char* t229 = __p223;
      char* ptr230 = &(t229)[t228];
      char c231 = 0;
      ref_tmp0227 = c231;
      _Bool r232 = __gnu_cxx__char_traits_char___eq(ptr230, &ref_tmp0227);
      _Bool u233 = !r232;
      if (!u233) break;
      unsigned long t234 = __i225;
      unsigned long u235 = t234 + 1;
      __i225 = u235;
    }
  unsigned long t236 = __i225;
  __retval224 = t236;
  unsigned long t237 = __retval224;
  return t237;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v238) {
bb239:
  char* __s240;
  unsigned long __retval241;
  __s240 = v238;
    _Bool r242 = std____is_constant_evaluated();
    if (r242) {
      char* t243 = __s240;
      unsigned long r244 = __gnu_cxx__char_traits_char___length(t243);
      __retval241 = r244;
      unsigned long t245 = __retval241;
      return t245;
    }
  char* t246 = __s240;
  unsigned long r247 = strlen(t246);
  __retval241 = r247;
  unsigned long t248 = __retval241;
  return t248;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v249, char* v250) {
bb251:
  struct std__basic_ostream_char__std__char_traits_char__* __out252;
  char* __s253;
  struct std__basic_ostream_char__std__char_traits_char__* __retval254;
  __out252 = v249;
  __s253 = v250;
    char* t255 = __s253;
    _Bool cast256 = (_Bool)t255;
    _Bool u257 = !cast256;
    if (u257) {
      struct std__basic_ostream_char__std__char_traits_char__* t258 = __out252;
      void** v259 = (void**)t258;
      void* v260 = *((void**)v259);
      unsigned char* cast261 = (unsigned char*)v260;
      long c262 = -24;
      unsigned char* ptr263 = &(cast261)[c262];
      long* cast264 = (long*)ptr263;
      long t265 = *cast264;
      unsigned char* cast266 = (unsigned char*)t258;
      unsigned char* ptr267 = &(cast266)[t265];
      struct std__basic_ostream_char__std__char_traits_char__* cast268 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr267;
      struct std__basic_ios_char__std__char_traits_char__* cast269 = (struct std__basic_ios_char__std__char_traits_char__*)cast268;
      int t270 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast269, t270);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t271 = __out252;
      char* t272 = __s253;
      char* t273 = __s253;
      unsigned long r274 = std__char_traits_char___length(t273);
      long cast275 = (long)r274;
      struct std__basic_ostream_char__std__char_traits_char__* r276 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t271, t272, cast275);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t277 = __out252;
  __retval254 = t277;
  struct std__basic_ostream_char__std__char_traits_char__* t278 = __retval254;
  return t278;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEdeEv
char* __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* v279) {
bb280:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* this281;
  char* __retval282;
  this281 = v279;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* t283 = this281;
  char* t284 = t283->_M_current;
  __retval282 = t284;
  char* t285 = __retval282;
  return t285;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v286, void* v287) {
bb288:
  struct std__basic_ostream_char__std__char_traits_char__* this289;
  void* __pf290;
  struct std__basic_ostream_char__std__char_traits_char__* __retval291;
  this289 = v286;
  __pf290 = v287;
  struct std__basic_ostream_char__std__char_traits_char__* t292 = this289;
  void* t293 = __pf290;
  struct std__basic_ostream_char__std__char_traits_char__* r294 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t293)(t292);
  __retval291 = r294;
  struct std__basic_ostream_char__std__char_traits_char__* t295 = __retval291;
  return t295;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v296) {
bb297:
  struct std__basic_ostream_char__std__char_traits_char__* __os298;
  struct std__basic_ostream_char__std__char_traits_char__* __retval299;
  __os298 = v296;
  struct std__basic_ostream_char__std__char_traits_char__* t300 = __os298;
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__ostream__flush(t300);
  __retval299 = r301;
  struct std__basic_ostream_char__std__char_traits_char__* t302 = __retval299;
  return t302;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v303) {
bb304:
  struct std__ctype_char_* __f305;
  struct std__ctype_char_* __retval306;
  __f305 = v303;
    struct std__ctype_char_* t307 = __f305;
    _Bool cast308 = (_Bool)t307;
    _Bool u309 = !cast308;
    if (u309) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t310 = __f305;
  __retval306 = t310;
  struct std__ctype_char_* t311 = __retval306;
  return t311;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v312, char v313) {
bb314:
  struct std__ctype_char_* this315;
  char __c316;
  char __retval317;
  this315 = v312;
  __c316 = v313;
  struct std__ctype_char_* t318 = this315;
    char t319 = t318->_M_widen_ok;
    _Bool cast320 = (_Bool)t319;
    if (cast320) {
      char t321 = __c316;
      unsigned char cast322 = (unsigned char)t321;
      unsigned long cast323 = (unsigned long)cast322;
      char t324 = t318->_M_widen[cast323];
      __retval317 = t324;
      char t325 = __retval317;
      return t325;
    }
  std__ctype_char____M_widen_init___const(t318);
  char t326 = __c316;
  void** v327 = (void**)t318;
  void* v328 = *((void**)v327);
  char vcall331 = (char)__VERIFIER_virtual_call_char_char(t318, 6, t326);
  __retval317 = vcall331;
  char t332 = __retval317;
  return t332;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v333, char v334) {
bb335:
  struct std__basic_ios_char__std__char_traits_char__* this336;
  char __c337;
  char __retval338;
  this336 = v333;
  __c337 = v334;
  struct std__basic_ios_char__std__char_traits_char__* t339 = this336;
  struct std__ctype_char_* t340 = t339->_M_ctype;
  struct std__ctype_char_* r341 = std__ctype_char__const__std____check_facet_std__ctype_char___(t340);
  char t342 = __c337;
  char r343 = std__ctype_char___widen_char__const(r341, t342);
  __retval338 = r343;
  char t344 = __retval338;
  return t344;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v345) {
bb346:
  struct std__basic_ostream_char__std__char_traits_char__* __os347;
  struct std__basic_ostream_char__std__char_traits_char__* __retval348;
  __os347 = v345;
  struct std__basic_ostream_char__std__char_traits_char__* t349 = __os347;
  struct std__basic_ostream_char__std__char_traits_char__* t350 = __os347;
  void** v351 = (void**)t350;
  void* v352 = *((void**)v351);
  unsigned char* cast353 = (unsigned char*)v352;
  long c354 = -24;
  unsigned char* ptr355 = &(cast353)[c354];
  long* cast356 = (long*)ptr355;
  long t357 = *cast356;
  unsigned char* cast358 = (unsigned char*)t350;
  unsigned char* ptr359 = &(cast358)[t357];
  struct std__basic_ostream_char__std__char_traits_char__* cast360 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr359;
  struct std__basic_ios_char__std__char_traits_char__* cast361 = (struct std__basic_ios_char__std__char_traits_char__*)cast360;
  char c362 = 10;
  char r363 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast361, c362);
  struct std__basic_ostream_char__std__char_traits_char__* r364 = std__ostream__put(t349, r363);
  struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r364);
  __retval348 = r365;
  struct std__basic_ostream_char__std__char_traits_char__* t366 = __retval348;
  return t366;
}

// function: _ZSt13find_first_ofIN9__gnu_cxx17__normal_iteratorIPcSt6vectorIcSaIcEEEEPiPFbccEET_SA_SA_T0_SB_T1_
struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___bool_____char__char_____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___int___bool____(struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v367, struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ v368, int* v369, int* v370, void* v371) {
bb372:
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __first1373;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __last1374;
  int* __first2375;
  int* __last2376;
  void* __comp377;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ __retval378;
  __first1373 = v367;
  __last1374 = v368;
  __first2375 = v369;
  __last2376 = v370;
  __comp377 = v371;
    while (1) {
      _Bool r380 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1373, &__last1374);
      _Bool u381 = !r380;
      if (!u381) break;
        int* __iter382;
        int* t383 = __first2375;
        __iter382 = t383;
        while (1) {
          int* t385 = __iter382;
          int* t386 = __last2376;
          _Bool c387 = ((t385 != t386)) ? 1 : 0;
          if (!c387) break;
            void* t388 = __comp377;
            char* r389 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&__first1373);
            char t390 = *r389;
            int* t391 = __iter382;
            int t392 = *t391;
            char cast393 = (char)t392;
            _Bool r394 = ((_Bool (*)(char, char))t388)(t390, cast393);
            if (r394) {
              __retval378 = __first1373; // copy
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t395 = __retval378;
              struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ret_val396 = t395;
              return ret_val396;
            }
        for_step384: ;
          int* t397 = __iter382;
          int c398 = 1;
          int* ptr399 = &(t397)[c398];
          __iter382 = ptr399;
        }
    for_step379: ;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r400 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator__(&__first1373);
    }
  __retval378 = __last1374; // copy
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t401 = __retval378;
  return t401;
}

// function: _ZNSt6vectorIcSaIcEED2Ev
void std__vector_char__std__allocator_char______vector(struct std__vector_char__std__allocator_char__* v402) {
bb403:
  struct std__vector_char__std__allocator_char__* this404;
  this404 = v402;
  struct std__vector_char__std__allocator_char__* t405 = this404;
    struct std___Vector_base_char__std__allocator_char__* base406 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t405 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base407 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base406->_M_impl) + 0);
    char* t408 = base407->_M_start;
    struct std___Vector_base_char__std__allocator_char__* base409 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t405 + 0);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base410 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base409->_M_impl) + 0);
    char* t411 = base410->_M_finish;
    struct std___Vector_base_char__std__allocator_char__* base412 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t405 + 0);
    struct std__allocator_char_* r413 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base412);
    void_std___Destroy_char___char_(t408, t411, r413);
  {
    struct std___Vector_base_char__std__allocator_char__* base414 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t405 + 0);
    std___Vector_base_char__std__allocator_char_______Vector_base(base414);
  }
  return;
}

// function: main
int main() {
bb415:
  int __retval416;
  int mychars417[6];
  struct std__vector_char__std__allocator_char__ myvector418;
  struct std__allocator_char_ ref_tmp0419;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ it420;
  int match421[3];
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp1422;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp0423;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp1424;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp3425;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp2426;
  struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ agg_tmp3427;
  int c428 = 0;
  __retval416 = c428;
  // array copy
  __builtin_memcpy(mychars417, __const_main_mychars, (unsigned long)6 * sizeof(__const_main_mychars[0]));
  int* cast429 = (int*)&(mychars417);
  int* cast430 = (int*)&(mychars417);
  int c431 = 6;
  int* ptr432 = &(cast430)[c431];
  std__allocator_char___allocator_2(&ref_tmp0419);
    std__vector_char__std__allocator_char_____vector_int___void_(&myvector418, cast429, ptr432, &ref_tmp0419);
  {
    std__allocator_char____allocator(&ref_tmp0419);
  }
    __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________normal_iterator_2(&it420);
    // array copy
    __builtin_memcpy(match421, __const_main_match, (unsigned long)3 * sizeof(__const_main_match[0]));
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r433 = std__vector_char__std__allocator_char_____begin(&myvector418);
    agg_tmp0423 = r433;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r434 = std__vector_char__std__allocator_char_____end(&myvector418);
    agg_tmp1424 = r434;
    int* cast435 = (int*)&(match421);
    int* cast436 = (int*)&(match421);
    int c437 = 3;
    int* ptr438 = &(cast436)[c437];
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t439 = agg_tmp0423;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t440 = agg_tmp1424;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r441 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int__(t439, t440, cast435, ptr438);
    ref_tmp1422 = r441;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r442 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(&it420, &ref_tmp1422);
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp2443;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r444 = std__vector_char__std__allocator_char_____end(&myvector418);
      ref_tmp2443 = r444;
      _Bool r445 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it420, &ref_tmp2443);
      _Bool u446 = !r445;
      if (u446) {
        char* cast447 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast447);
        char* r449 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&it420);
        char t450 = *r449;
        struct std__basic_ostream_char__std__char_traits_char__* r451 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r448, t450);
        struct std__basic_ostream_char__std__char_traits_char__* r452 = std__ostream__operator___std__ostream_____(r451, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r453 = std__vector_char__std__allocator_char_____begin(&myvector418);
    agg_tmp2426 = r453;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r454 = std__vector_char__std__allocator_char_____end(&myvector418);
    agg_tmp3427 = r454;
    int* cast455 = (int*)&(match421);
    int* cast456 = (int*)&(match421);
    int c457 = 3;
    int* ptr458 = &(cast456)[c457];
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t459 = agg_tmp2426;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ t460 = agg_tmp3427;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r461 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char______std__find_first_of___gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___bool_____char__char_____gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_________gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______int___int___bool____(t459, t460, cast455, ptr458, &comp_case_insensitive);
    ref_tmp3425 = r461;
    struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___* r462 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator_(&it420, &ref_tmp3425);
    char* r463 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&it420);
    char t464 = *r463;
    int cast465 = (int)t464;
    int c466 = 97;
    _Bool c467 = ((cast465 != c466)) ? 1 : 0;
    if (c467) {
    } else {
      char* cast468 = (char*)&(_str_1);
      char* c469 = _str_2;
      unsigned int c470 = 37;
      char* cast471 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast468, c469, c470, cast471);
    }
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ ref_tmp4472;
      struct __gnu_cxx____normal_iterator_char____std__vector_char__std__allocator_char___ r473 = std__vector_char__std__allocator_char_____end(&myvector418);
      ref_tmp4472 = r473;
      _Bool r474 = _ZN9__gnu_cxxeqIPcSt6vectorIcSaIcEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it420, &ref_tmp4472);
      _Bool u475 = !r474;
      if (u475) {
        char* cast476 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r477 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast476);
        char* r478 = __gnu_cxx____normal_iterator_char___std__vector_char__std__allocator_char_______operator____const(&it420);
        char t479 = *r478;
        struct std__basic_ostream_char__std__char_traits_char__* r480 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r477, t479);
        struct std__basic_ostream_char__std__char_traits_char__* r481 = std__ostream__operator___std__ostream_____(r480, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    int c482 = 0;
    __retval416 = c482;
    int t483 = __retval416;
    int ret_val484 = t483;
    {
      std__vector_char__std__allocator_char______vector(&myvector418);
    }
    return ret_val484;
  int t485 = __retval416;
  return t485;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v486) {
bb487:
  struct std____new_allocator_char_* this488;
  this488 = v486;
  struct std____new_allocator_char_* t489 = this488;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implC2ERKS0_
void std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v490, struct std__allocator_char_* v491) {
bb492:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this493;
  struct std__allocator_char_* __a494;
  this493 = v490;
  __a494 = v491;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t495 = this493;
  struct std__allocator_char_* base496 = (struct std__allocator_char_*)((char *)t495 + 0);
  struct std__allocator_char_* t497 = __a494;
  std__allocator_char___allocator(base496, t497);
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base498 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)t495 + 0);
    std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(base498);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE12_Vector_implD2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(struct std___Vector_base_char__std__allocator_char_____Vector_impl* v499) {
bb500:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* this501;
  this501 = v499;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl* t502 = this501;
  {
    struct std__allocator_char_* base503 = (struct std__allocator_char_*)((char *)t502 + 0);
    std__allocator_char____allocator(base503);
  }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEEC2ERKS0_
void std___Vector_base_char__std__allocator_char______Vector_base(struct std___Vector_base_char__std__allocator_char__* v504, struct std__allocator_char_* v505) {
bb506:
  struct std___Vector_base_char__std__allocator_char__* this507;
  struct std__allocator_char_* __a508;
  this507 = v504;
  __a508 = v505;
  struct std___Vector_base_char__std__allocator_char__* t509 = this507;
  struct std__allocator_char_* t510 = __a508;
  std___Vector_base_char__std__allocator_char______Vector_impl___Vector_impl(&t509->_M_impl, t510);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v511, int** v512, int* v513) {
bb514:
  struct std__ranges____distance_fn* this515;
  int** __first516;
  int* __last517;
  long __retval518;
  this515 = v511;
  __first516 = v512;
  __last517 = v513;
  struct std__ranges____distance_fn* t519 = this515;
  int* t520 = __last517;
  int** t521 = __first516;
  int* t522 = *t521;
  long diff523 = t520 - t522;
  __retval518 = diff523;
  long t524 = __retval518;
  return t524;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb525:
  _Bool __retval526;
    _Bool c527 = 0;
    __retval526 = c527;
    _Bool t528 = __retval526;
    return t528;
  abort();
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v529) {
bb530:
  struct std____new_allocator_char_* this531;
  unsigned long __retval532;
  this531 = v529;
  struct std____new_allocator_char_* t533 = this531;
  unsigned long c534 = 9223372036854775807;
  unsigned long c535 = 1;
  unsigned long b536 = c534 / c535;
  __retval532 = b536;
  unsigned long t537 = __retval532;
  return t537;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v538, unsigned long v539, void* v540) {
bb541:
  struct std____new_allocator_char_* this542;
  unsigned long __n543;
  void* unnamed544;
  char* __retval545;
  this542 = v538;
  __n543 = v539;
  unnamed544 = v540;
  struct std____new_allocator_char_* t546 = this542;
    unsigned long t547 = __n543;
    unsigned long r548 = std____new_allocator_char____M_max_size___const(t546);
    _Bool c549 = ((t547 > r548)) ? 1 : 0;
    if (c549) {
        unsigned long t550 = __n543;
        unsigned long c551 = -1;
        unsigned long c552 = 1;
        unsigned long b553 = c551 / c552;
        _Bool c554 = ((t550 > b553)) ? 1 : 0;
        if (c554) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c555 = 1;
    unsigned long c556 = 16;
    _Bool c557 = ((c555 > c556)) ? 1 : 0;
    if (c557) {
      unsigned long __al558;
      unsigned long c559 = 1;
      __al558 = c559;
      unsigned long t560 = __n543;
      unsigned long c561 = 1;
      unsigned long b562 = t560 * c561;
      unsigned long t563 = __al558;
      void* r564 = operator_new_2(b562, t563);
      char* cast565 = (char*)r564;
      __retval545 = cast565;
      char* t566 = __retval545;
      return t566;
    }
  unsigned long t567 = __n543;
  unsigned long c568 = 1;
  unsigned long b569 = t567 * c568;
  void* r570 = operator_new(b569);
  char* cast571 = (char*)r570;
  __retval545 = cast571;
  char* t572 = __retval545;
  return t572;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v573, unsigned long v574) {
bb575:
  struct std__allocator_char_* this576;
  unsigned long __n577;
  char* __retval578;
  this576 = v573;
  __n577 = v574;
  struct std__allocator_char_* t579 = this576;
    _Bool r580 = std____is_constant_evaluated();
    if (r580) {
        unsigned long t581 = __n577;
        unsigned long c582 = 1;
        unsigned long ovr583;
        _Bool ovf584 = __builtin_mul_overflow(t581, c582, &ovr583);
        __n577 = ovr583;
        if (ovf584) {
          std____throw_bad_array_new_length();
        }
      unsigned long t585 = __n577;
      void* r586 = operator_new(t585);
      char* cast587 = (char*)r586;
      __retval578 = cast587;
      char* t588 = __retval578;
      return t588;
    }
  struct std____new_allocator_char_* base589 = (struct std____new_allocator_char_*)((char *)t579 + 0);
  unsigned long t590 = __n577;
  void* c591 = ((void*)0);
  char* r592 = std____new_allocator_char___allocate(base589, t590, c591);
  __retval578 = r592;
  char* t593 = __retval578;
  return t593;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v594, unsigned long v595) {
bb596:
  struct std__allocator_char_* __a597;
  unsigned long __n598;
  char* __retval599;
  __a597 = v594;
  __n598 = v595;
  struct std__allocator_char_* t600 = __a597;
  unsigned long t601 = __n598;
  char* r602 = std__allocator_char___allocate(t600, t601);
  __retval599 = r602;
  char* t603 = __retval599;
  return t603;
}

// function: _ZNSt12_Vector_baseIcSaIcEE11_M_allocateEm
char* std___Vector_base_char__std__allocator_char______M_allocate(struct std___Vector_base_char__std__allocator_char__* v604, unsigned long v605) {
bb606:
  struct std___Vector_base_char__std__allocator_char__* this607;
  unsigned long __n608;
  char* __retval609;
  this607 = v604;
  __n608 = v605;
  struct std___Vector_base_char__std__allocator_char__* t610 = this607;
  unsigned long t611 = __n608;
  unsigned long c612 = 0;
  _Bool c613 = ((t611 != c612)) ? 1 : 0;
  char* ternary614;
  if (c613) {
    struct std__allocator_char_* base615 = (struct std__allocator_char_*)((char *)&(t610->_M_impl) + 0);
    unsigned long t616 = __n608;
    char* r617 = std__allocator_traits_std__allocator_char_____allocate(base615, t616);
    ternary614 = (char*)r617;
  } else {
    char* c618 = ((void*)0);
    ternary614 = (char*)c618;
  }
  __retval609 = ternary614;
  char* t619 = __retval609;
  return t619;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v620, unsigned long* v621) {
bb622:
  unsigned long* __a623;
  unsigned long* __b624;
  unsigned long* __retval625;
  __a623 = v620;
  __b624 = v621;
    unsigned long* t626 = __b624;
    unsigned long t627 = *t626;
    unsigned long* t628 = __a623;
    unsigned long t629 = *t628;
    _Bool c630 = ((t627 < t629)) ? 1 : 0;
    if (c630) {
      unsigned long* t631 = __b624;
      __retval625 = t631;
      unsigned long* t632 = __retval625;
      return t632;
    }
  unsigned long* t633 = __a623;
  __retval625 = t633;
  unsigned long* t634 = __retval625;
  return t634;
}

// function: _ZNSt6vectorIcSaIcEE11_S_max_sizeERKS0_
unsigned long std__vector_char__std__allocator_char______S_max_size(struct std__allocator_char_* v635) {
bb636:
  struct std__allocator_char_* __a637;
  unsigned long __retval638;
  unsigned long __diffmax639;
  unsigned long __allocmax640;
  __a637 = v635;
  unsigned long c641 = 9223372036854775807;
  __diffmax639 = c641;
  unsigned long c642 = -1;
  __allocmax640 = c642;
  unsigned long* r643 = unsigned_long_const__std__min_unsigned_long_(&__diffmax639, &__allocmax640);
  unsigned long t644 = *r643;
  __retval638 = t644;
  unsigned long t645 = __retval638;
  return t645;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v646, struct std__allocator_char_* v647) {
bb648:
  struct std__allocator_char_* this649;
  struct std__allocator_char_* __a650;
  this649 = v646;
  __a650 = v647;
  struct std__allocator_char_* t651 = this649;
  struct std____new_allocator_char_* base652 = (struct std____new_allocator_char_*)((char *)t651 + 0);
  struct std__allocator_char_* t653 = __a650;
  struct std____new_allocator_char_* base654 = (struct std____new_allocator_char_*)((char *)t653 + 0);
  std____new_allocator_char_____new_allocator(base652, base654);
  return;
}

// function: _ZNSt6vectorIcSaIcEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_char__std__allocator_char______S_check_init_len(unsigned long v655, struct std__allocator_char_* v656) {
bb657:
  unsigned long __n658;
  struct std__allocator_char_* __a659;
  unsigned long __retval660;
  __n658 = v655;
  __a659 = v656;
    struct std__allocator_char_ ref_tmp0661;
    _Bool tmp_exprcleanup662;
    unsigned long t663 = __n658;
    struct std__allocator_char_* t664 = __a659;
    std__allocator_char___allocator(&ref_tmp0661, t664);
      unsigned long r665 = std__vector_char__std__allocator_char______S_max_size(&ref_tmp0661);
      _Bool c666 = ((t663 > r665)) ? 1 : 0;
      tmp_exprcleanup662 = c666;
    {
      std__allocator_char____allocator(&ref_tmp0661);
    }
    _Bool t667 = tmp_exprcleanup662;
    if (t667) {
      char* cast668 = (char*)&(_str_3);
      std____throw_length_error(cast668);
    }
  unsigned long t669 = __n658;
  __retval660 = t669;
  unsigned long t670 = __retval660;
  return t670;
}

// function: _ZNSt12_Vector_baseIcSaIcEE19_M_get_Tp_allocatorEv
struct std__allocator_char_* std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(struct std___Vector_base_char__std__allocator_char__* v671) {
bb672:
  struct std___Vector_base_char__std__allocator_char__* this673;
  struct std__allocator_char_* __retval674;
  this673 = v671;
  struct std___Vector_base_char__std__allocator_char__* t675 = this673;
  struct std__allocator_char_* base676 = (struct std__allocator_char_*)((char *)&(t675->_M_impl) + 0);
  __retval674 = base676;
  struct std__allocator_char_* t677 = __retval674;
  return t677;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb678:
  _Bool __retval679;
    _Bool c680 = 0;
    __retval679 = c680;
    _Bool t681 = __retval679;
    return t681;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPcvEC2ERS0_
void std___UninitDestroyGuard_char___void____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v682, char** v683) {
bb684:
  struct std___UninitDestroyGuard_char____void_* this685;
  char** __first686;
  this685 = v682;
  __first686 = v683;
  struct std___UninitDestroyGuard_char____void_* t687 = this685;
  char** t688 = __first686;
  char* t689 = *t688;
  t687->_M_first = t689;
  char** t690 = __first686;
  t687->_M_cur = t690;
  return;
}

// function: _ZSt12construct_atIcJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
char* _ZSt12construct_atIcJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(char* v691, int* v692) {
bb693:
  char* __location694;
  int* __args695;
  char* __retval696;
  void* __loc697;
  __location694 = v691;
  __args695 = v692;
  char* t698 = __location694;
  void* cast699 = (void*)t698;
  __loc697 = cast699;
    void* t700 = __loc697;
    char* cast701 = (char*)t700;
    int* t702 = __args695;
    int t703 = *t702;
    char cast704 = (char)t703;
    *cast701 = cast704;
    __retval696 = cast701;
    char* t705 = __retval696;
    return t705;
  abort();
}

// function: _ZSt10_ConstructIcJRiEEvPT_DpOT0_
void void_std___Construct_char__int__(char* v706, int* v707) {
bb708:
  char* __p709;
  int* __args710;
  __p709 = v706;
  __args710 = v707;
    _Bool r711 = std____is_constant_evaluated();
    if (r711) {
      char* t712 = __p709;
      int* t713 = __args710;
      char* r714 = _ZSt12construct_atIcJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t712, t713);
      return;
    }
  char* t715 = __p709;
  void* cast716 = (void*)t715;
  char* cast717 = (char*)cast716;
  int* t718 = __args710;
  int t719 = *t718;
  char cast720 = (char)t719;
  *cast717 = cast720;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvE7releaseEv
void std___UninitDestroyGuard_char___void___release(struct std___UninitDestroyGuard_char____void_* v721) {
bb722:
  struct std___UninitDestroyGuard_char____void_* this723;
  this723 = v721;
  struct std___UninitDestroyGuard_char____void_* t724 = this723;
  char** c725 = ((void*)0);
  t724->_M_cur = c725;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPcvED2Ev
void std___UninitDestroyGuard_char___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_char____void_* v726) {
bb727:
  struct std___UninitDestroyGuard_char____void_* this728;
  this728 = v726;
  struct std___UninitDestroyGuard_char____void_* t729 = this728;
    char** t730 = t729->_M_cur;
    char** c731 = ((void*)0);
    _Bool c732 = ((t730 != c731)) ? 1 : 0;
    if (c732) {
      char* t733 = t729->_M_first;
      char** t734 = t729->_M_cur;
      char* t735 = *t734;
      void_std___Destroy_char__(t733, t735);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_PcET1_T_T0_S2_
char* char__std____do_uninit_copy_int___int___char__(int* v736, int* v737, char* v738) {
bb739:
  int* __first740;
  int* __last741;
  char* __result742;
  char* __retval743;
  struct std___UninitDestroyGuard_char____void_ __guard744;
  __first740 = v736;
  __last741 = v737;
  __result742 = v738;
  std___UninitDestroyGuard_char___void____UninitDestroyGuard(&__guard744, &__result742);
      while (1) {
        int* t746 = __first740;
        int* t747 = __last741;
        _Bool c748 = ((t746 != t747)) ? 1 : 0;
        if (!c748) break;
        char* t749 = __result742;
        int* t750 = __first740;
        void_std___Construct_char__int__(t749, t750);
      for_step745: ;
        int* t751 = __first740;
        int c752 = 1;
        int* ptr753 = &(t751)[c752];
        __first740 = ptr753;
        char* t754 = __result742;
        int c755 = 1;
        char* ptr756 = &(t754)[c755];
        __result742 = ptr756;
      }
    std___UninitDestroyGuard_char___void___release(&__guard744);
    char* t757 = __result742;
    __retval743 = t757;
    char* t758 = __retval743;
    char* ret_val759 = t758;
    {
      std___UninitDestroyGuard_char___void_____UninitDestroyGuard(&__guard744);
    }
    return ret_val759;
  abort();
}

// function: _ZSt18uninitialized_copyIPiPcET0_T_S3_S2_
char* char__std__uninitialized_copy_int___char__(int* v760, int* v761, char* v762) {
bb763:
  int* __first764;
  int* __last765;
  char* __result766;
  char* __retval767;
  __first764 = v760;
  __last765 = v761;
  __result766 = v762;
          int* t768 = __first764;
          int* t769 = __last765;
          char* t770 = __result766;
          char* r771 = char__std____do_uninit_copy_int___int___char__(t768, t769, t770);
          __retval767 = r771;
          char* t772 = __retval767;
          return t772;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_PccET1_T_T0_S2_RSaIT2_E
char* char__std____uninitialized_copy_a_int___int___char___char_(int* v773, int* v774, char* v775, struct std__allocator_char_* v776) {
bb777:
  int* __first778;
  int* __last779;
  char* __result780;
  struct std__allocator_char_* unnamed781;
  char* __retval782;
  __first778 = v773;
  __last779 = v774;
  __result780 = v775;
  unnamed781 = v776;
    _Bool r783 = std__is_constant_evaluated();
    if (r783) {
      int* t784 = __first778;
      int* t785 = __last779;
      char* t786 = __result780;
      char* r787 = char__std____do_uninit_copy_int___int___char__(t784, t785, t786);
      __retval782 = r787;
      char* t788 = __retval782;
      return t788;
    }
    int* t789 = __first778;
    int* t790 = __last779;
    char* t791 = __result780;
    char* r792 = char__std__uninitialized_copy_int___char__(t789, t790, t791);
    __retval782 = r792;
    char* t793 = __retval782;
    return t793;
  abort();
}

// function: _ZNSt6vectorIcSaIcEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_char__std__allocator_char______M_range_initialize_n_int___int__(struct std__vector_char__std__allocator_char__* v794, int* v795, int* v796, unsigned long v797) {
bb798:
  struct std__vector_char__std__allocator_char__* this799;
  int* __first800;
  int* __last801;
  unsigned long __n802;
  char* __start803;
  this799 = v794;
  __first800 = v795;
  __last801 = v796;
  __n802 = v797;
  struct std__vector_char__std__allocator_char__* t804 = this799;
  struct std___Vector_base_char__std__allocator_char__* base805 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t804 + 0);
  unsigned long t806 = __n802;
  struct std___Vector_base_char__std__allocator_char__* base807 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t804 + 0);
  struct std__allocator_char_* r808 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base807);
  unsigned long r809 = std__vector_char__std__allocator_char______S_check_init_len(t806, r808);
  char* r810 = std___Vector_base_char__std__allocator_char______M_allocate(base805, r809);
  __start803 = r810;
  char* t811 = __start803;
  struct std___Vector_base_char__std__allocator_char__* base812 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t804 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base813 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base812->_M_impl) + 0);
  base813->_M_finish = t811;
  struct std___Vector_base_char__std__allocator_char__* base814 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t804 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base815 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base814->_M_impl) + 0);
  base815->_M_start = t811;
  char* t816 = __start803;
  unsigned long t817 = __n802;
  char* ptr818 = &(t816)[t817];
  struct std___Vector_base_char__std__allocator_char__* base819 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t804 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base820 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base819->_M_impl) + 0);
  base820->_M_end_of_storage = ptr818;
  int* t821 = __first800;
  int* t822 = __last801;
  char* t823 = __start803;
  struct std___Vector_base_char__std__allocator_char__* base824 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t804 + 0);
  struct std__allocator_char_* r825 = std___Vector_base_char__std__allocator_char______M_get_Tp_allocator(base824);
  char* r826 = char__std____uninitialized_copy_a_int___int___char___char_(t821, t822, t823, r825);
  struct std___Vector_base_char__std__allocator_char__* base827 = (struct std___Vector_base_char__std__allocator_char__*)((char *)t804 + 0);
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base828 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(base827->_M_impl) + 0);
  base828->_M_finish = r826;
  return;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v829, char* v830, unsigned long v831) {
bb832:
  struct std____new_allocator_char_* this833;
  char* __p834;
  unsigned long __n835;
  this833 = v829;
  __p834 = v830;
  __n835 = v831;
  struct std____new_allocator_char_* t836 = this833;
    unsigned long c837 = 1;
    unsigned long c838 = 16;
    _Bool c839 = ((c837 > c838)) ? 1 : 0;
    if (c839) {
      char* t840 = __p834;
      void* cast841 = (void*)t840;
      unsigned long t842 = __n835;
      unsigned long c843 = 1;
      unsigned long b844 = t842 * c843;
      unsigned long c845 = 1;
      operator_delete_3(cast841, b844, c845);
      return;
    }
  char* t846 = __p834;
  void* cast847 = (void*)t846;
  unsigned long t848 = __n835;
  unsigned long c849 = 1;
  unsigned long b850 = t848 * c849;
  operator_delete_2(cast847, b850);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v851, char* v852, unsigned long v853) {
bb854:
  struct std__allocator_char_* this855;
  char* __p856;
  unsigned long __n857;
  this855 = v851;
  __p856 = v852;
  __n857 = v853;
  struct std__allocator_char_* t858 = this855;
    _Bool r859 = std____is_constant_evaluated();
    if (r859) {
      char* t860 = __p856;
      void* cast861 = (void*)t860;
      operator_delete(cast861);
      return;
    }
  struct std____new_allocator_char_* base862 = (struct std____new_allocator_char_*)((char *)t858 + 0);
  char* t863 = __p856;
  unsigned long t864 = __n857;
  std____new_allocator_char___deallocate(base862, t863, t864);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v865, char* v866, unsigned long v867) {
bb868:
  struct std__allocator_char_* __a869;
  char* __p870;
  unsigned long __n871;
  __a869 = v865;
  __p870 = v866;
  __n871 = v867;
  struct std__allocator_char_* t872 = __a869;
  char* t873 = __p870;
  unsigned long t874 = __n871;
  std__allocator_char___deallocate(t872, t873, t874);
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE13_M_deallocateEPcm
void std___Vector_base_char__std__allocator_char______M_deallocate(struct std___Vector_base_char__std__allocator_char__* v875, char* v876, unsigned long v877) {
bb878:
  struct std___Vector_base_char__std__allocator_char__* this879;
  char* __p880;
  unsigned long __n881;
  this879 = v875;
  __p880 = v876;
  __n881 = v877;
  struct std___Vector_base_char__std__allocator_char__* t882 = this879;
    char* t883 = __p880;
    _Bool cast884 = (_Bool)t883;
    if (cast884) {
      struct std__allocator_char_* base885 = (struct std__allocator_char_*)((char *)&(t882->_M_impl) + 0);
      char* t886 = __p880;
      unsigned long t887 = __n881;
      std__allocator_traits_std__allocator_char_____deallocate(base885, t886, t887);
    }
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEED2Ev
void std___Vector_base_char__std__allocator_char_______Vector_base(struct std___Vector_base_char__std__allocator_char__* v888) {
bb889:
  struct std___Vector_base_char__std__allocator_char__* this890;
  this890 = v888;
  struct std___Vector_base_char__std__allocator_char__* t891 = this890;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base892 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t891->_M_impl) + 0);
    char* t893 = base892->_M_start;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base894 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t891->_M_impl) + 0);
    char* t895 = base894->_M_end_of_storage;
    struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* base896 = (struct std___Vector_base_char__std__allocator_char_____Vector_impl_data*)((char *)&(t891->_M_impl) + 0);
    char* t897 = base896->_M_start;
    long diff898 = t895 - t897;
    unsigned long cast899 = (unsigned long)diff898;
    std___Vector_base_char__std__allocator_char______M_deallocate(t891, t893, cast899);
  {
    std___Vector_base_char__std__allocator_char______Vector_impl____Vector_impl(&t891->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v900, struct std____new_allocator_char_* v901) {
bb902:
  struct std____new_allocator_char_* this903;
  struct std____new_allocator_char_* unnamed904;
  this903 = v900;
  unnamed904 = v901;
  struct std____new_allocator_char_* t905 = this903;
  return;
}

// function: _ZNSt12_Vector_baseIcSaIcEE17_Vector_impl_dataC2Ev
void std___Vector_base_char__std__allocator_char______Vector_impl_data___Vector_impl_data(struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* v906) {
bb907:
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* this908;
  this908 = v906;
  struct std___Vector_base_char__std__allocator_char_____Vector_impl_data* t909 = this908;
  char* c910 = ((void*)0);
  t909->_M_start = c910;
  char* c911 = ((void*)0);
  t909->_M_finish = c911;
  char* c912 = ((void*)0);
  t909->_M_end_of_storage = c912;
  return;
}

// function: _ZSt10destroy_atIcEvPT_
void void_std__destroy_at_char_(char* v913) {
bb914:
  char* __location915;
  __location915 = v913;
  return;
}

// function: _ZSt8_DestroyIPcEvT_S1_
void void_std___Destroy_char__(char* v916, char* v917) {
bb918:
  char* __first919;
  char* __last920;
  __first919 = v916;
  __last920 = v917;
      _Bool r921 = std____is_constant_evaluated();
      if (r921) {
          while (1) {
            char* t923 = __first919;
            char* t924 = __last920;
            _Bool c925 = ((t923 != t924)) ? 1 : 0;
            if (!c925) break;
            char* t926 = __first919;
            void_std__destroy_at_char_(t926);
          for_step922: ;
            char* t927 = __first919;
            int c928 = 1;
            char* ptr929 = &(t927)[c928];
            __first919 = ptr929;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPccEvT_S1_RSaIT0_E
void void_std___Destroy_char___char_(char* v930, char* v931, struct std__allocator_char_* v932) {
bb933:
  char* __first934;
  char* __last935;
  struct std__allocator_char_* unnamed936;
  __first934 = v930;
  __last935 = v931;
  unnamed936 = v932;
  char* t937 = __first934;
  char* t938 = __last935;
  void_std___Destroy_char__(t937, t938);
  return;
}

