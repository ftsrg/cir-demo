extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct _Guard { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* _M_guarded; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_ { unsigned char __field0; };
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

char _str[18] = "T six sd six hck.";
char _str_1[4] = "six";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_2[11] = "found == 9";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_rfind_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[50] = "basic_string: construction from null is not valid";
char _str_5[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
extern void std____throw_logic_error(char* p0);
_Bool std____is_constant_evaluated();
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* p0, char* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** p0);
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* p0);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_length_error(char* p0);
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
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* p0, unsigned long p1);
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
_Bool std__is_constant_evaluated();
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* p0, char* p1);
void std__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___copy(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* p0, char* p1, unsigned long p2);
char* char_const__std____niter_base_char_const__(char* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* p0, char* p1, char* p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* p0);
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, char* p2, struct std__forward_iterator_tag p3);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0);
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
void std__allocator_char___allocator(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_char___deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v0) {
bb1:
  struct std__allocator_char_* this2;
  this2 = v0;
  struct std__allocator_char_* t3 = this2;
  struct std____new_allocator_char_* base4 = (struct std____new_allocator_char_*)((char *)t3 + 0);
  std____new_allocator_char_____new_allocator_2(base4);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v5, char* v6, struct std__allocator_char_* v7) {
bb8:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this9;
  char* __s10;
  struct std__allocator_char_* __a11;
  char* __end12;
  struct std__forward_iterator_tag agg_tmp013;
  this9 = v5;
  __s10 = v6;
  __a11 = v7;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t14 = this9;
  char* r15 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t14);
  struct std__allocator_char_* t16 = __a11;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_4);
        std____throw_logic_error(cast20);
      }
    char* t21 = __s10;
    char* t22 = __s10;
    unsigned long r23 = std__char_traits_char___length(t22);
    char* ptr24 = &(t21)[r23];
    __end12 = ptr24;
    char* t25 = __s10;
    char* t26 = __end12;
    struct std__forward_iterator_tag t27 = agg_tmp013;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t14, t25, t26, t27);
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v28) {
bb29:
  struct std__allocator_char_* this30;
  this30 = v28;
  struct std__allocator_char_* t31 = this30;
  return;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v32, char* v33) {
bb34:
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  unsigned char cast40 = (unsigned char)t39;
  int cast41 = (int)cast40;
  char* t42 = __c236;
  char t43 = *t42;
  unsigned char cast44 = (unsigned char)t43;
  int cast45 = (int)cast44;
  _Bool c46 = ((cast41 < cast45)) ? 1 : 0;
  __retval37 = c46;
  _Bool t47 = __retval37;
  return t47;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v48, char* v49, unsigned long v50) {
bb51:
  char* __s152;
  char* __s253;
  unsigned long __n54;
  int __retval55;
  __s152 = v48;
  __s253 = v49;
  __n54 = v50;
    unsigned long t56 = __n54;
    unsigned long c57 = 0;
    _Bool c58 = ((t56 == c57)) ? 1 : 0;
    if (c58) {
      int c59 = 0;
      __retval55 = c59;
      int t60 = __retval55;
      return t60;
    }
    _Bool r61 = std____is_constant_evaluated();
    if (r61) {
        unsigned long __i62;
        unsigned long c63 = 0;
        __i62 = c63;
        while (1) {
          unsigned long t65 = __i62;
          unsigned long t66 = __n54;
          _Bool c67 = ((t65 < t66)) ? 1 : 0;
          if (!c67) break;
            unsigned long t68 = __i62;
            char* t69 = __s152;
            char* ptr70 = &(t69)[t68];
            unsigned long t71 = __i62;
            char* t72 = __s253;
            char* ptr73 = &(t72)[t71];
            _Bool r74 = std__char_traits_char___lt(ptr70, ptr73);
            if (r74) {
              int c75 = -1;
              __retval55 = c75;
              int t76 = __retval55;
              int ret_val77 = t76;
              return ret_val77;
            } else {
                unsigned long t78 = __i62;
                char* t79 = __s253;
                char* ptr80 = &(t79)[t78];
                unsigned long t81 = __i62;
                char* t82 = __s152;
                char* ptr83 = &(t82)[t81];
                _Bool r84 = std__char_traits_char___lt(ptr80, ptr83);
                if (r84) {
                  int c85 = 1;
                  __retval55 = c85;
                  int t86 = __retval55;
                  int ret_val87 = t86;
                  return ret_val87;
                }
            }
        for_step64: ;
          unsigned long t88 = __i62;
          unsigned long u89 = t88 + 1;
          __i62 = u89;
        }
      int c90 = 0;
      __retval55 = c90;
      int t91 = __retval55;
      return t91;
    }
  char* t92 = __s152;
  void* cast93 = (void*)t92;
  char* t94 = __s253;
  void* cast95 = (void*)t94;
  unsigned long t96 = __n54;
  int r97 = memcmp(cast93, cast95, t96);
  __retval55 = r97;
  int t98 = __retval55;
  return t98;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v99, char* v100, unsigned long v101, unsigned long v102) {
bb103:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this104;
  char* __s105;
  unsigned long __pos106;
  unsigned long __n107;
  unsigned long __retval108;
  unsigned long __size109;
  this104 = v99;
  __s105 = v100;
  __pos106 = v101;
  __n107 = v102;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t110 = this104;
  unsigned long r111 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t110);
  __size109 = r111;
    unsigned long t112 = __n107;
    unsigned long t113 = __size109;
    _Bool c114 = ((t112 <= t113)) ? 1 : 0;
    if (c114) {
      unsigned long ref_tmp0115;
      char* __data116;
      unsigned long t117 = __size109;
      unsigned long t118 = __n107;
      unsigned long b119 = t117 - t118;
      ref_tmp0115 = b119;
      unsigned long* r120 = unsigned_long_const__std__min_unsigned_long_(&ref_tmp0115, &__pos106);
      unsigned long t121 = *r120;
      __pos106 = t121;
      char* r122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t110);
      __data116 = r122;
        do {
              char* t123 = __data116;
              unsigned long t124 = __pos106;
              char* ptr125 = &(t123)[t124];
              char* t126 = __s105;
              unsigned long t127 = __n107;
              int r128 = std__char_traits_char___compare(ptr125, t126, t127);
              int c129 = 0;
              _Bool c130 = ((r128 == c129)) ? 1 : 0;
              if (c130) {
                unsigned long t131 = __pos106;
                __retval108 = t131;
                unsigned long t132 = __retval108;
                unsigned long ret_val133 = t132;
                return ret_val133;
              }
          unsigned long t134 = __pos106;
          unsigned long u135 = t134 - 1;
          __pos106 = u135;
          unsigned long c136 = 0;
          _Bool c137 = ((t134 > c136)) ? 1 : 0;
          if (!c137) break;
        } while (1);
    }
  unsigned long t138 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval108 = t138;
  unsigned long t139 = __retval108;
  return t139;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v140) {
bb141:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this142;
  char* __retval143;
  this142 = v140;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t144 = this142;
  char* r145 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t144);
  __retval143 = r145;
  char* t146 = __retval143;
  return t146;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v147) {
bb148:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this149;
  unsigned long __retval150;
  unsigned long __sz151;
  this149 = v147;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t152 = this149;
  unsigned long t153 = t152->_M_string_length;
  __sz151 = t153;
    unsigned long t154 = __sz151;
    unsigned long r155 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t152);
    _Bool c156 = ((t154 > r155)) ? 1 : 0;
    if (c156) {
      __builtin_unreachable();
    }
  unsigned long t157 = __sz151;
  __retval150 = t157;
  unsigned long t158 = __retval150;
  return t158;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindERKS4_m
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v159, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v160, unsigned long v161) {
bb162:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this163;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str164;
  unsigned long __pos165;
  unsigned long __retval166;
  this163 = v159;
  __str164 = v160;
  __pos165 = v161;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t167 = this163;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t168 = __str164;
  char* r169 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t168);
  unsigned long t170 = __pos165;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t171 = __str164;
  unsigned long r172 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t171);
  unsigned long r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_char_const___unsigned_long__unsigned_long__const(t167, r169, t170, r172);
  __retval166 = r173;
  unsigned long t174 = __retval166;
  return t174;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v175, unsigned long v176) {
bb177:
  struct std__basic_ostream_char__std__char_traits_char__* this178;
  unsigned long __n179;
  struct std__basic_ostream_char__std__char_traits_char__* __retval180;
  this178 = v175;
  __n179 = v176;
  struct std__basic_ostream_char__std__char_traits_char__* t181 = this178;
  unsigned long t182 = __n179;
  struct std__basic_ostream_char__std__char_traits_char__* r183 = std__ostream__std__ostream___M_insert_unsigned_long_(t181, t182);
  __retval180 = r183;
  struct std__basic_ostream_char__std__char_traits_char__* t184 = __retval180;
  return t184;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v185, void* v186) {
bb187:
  struct std__basic_ostream_char__std__char_traits_char__* this188;
  void* __pf189;
  struct std__basic_ostream_char__std__char_traits_char__* __retval190;
  this188 = v185;
  __pf189 = v186;
  struct std__basic_ostream_char__std__char_traits_char__* t191 = this188;
  void* t192 = __pf189;
  struct std__basic_ostream_char__std__char_traits_char__* r193 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t192)(t191);
  __retval190 = r193;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __retval190;
  return t194;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v195) {
bb196:
  struct std__basic_ostream_char__std__char_traits_char__* __os197;
  struct std__basic_ostream_char__std__char_traits_char__* __retval198;
  __os197 = v195;
  struct std__basic_ostream_char__std__char_traits_char__* t199 = __os197;
  struct std__basic_ostream_char__std__char_traits_char__* r200 = std__ostream__flush(t199);
  __retval198 = r200;
  struct std__basic_ostream_char__std__char_traits_char__* t201 = __retval198;
  return t201;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v202) {
bb203:
  struct std__ctype_char_* __f204;
  struct std__ctype_char_* __retval205;
  __f204 = v202;
    struct std__ctype_char_* t206 = __f204;
    _Bool cast207 = (_Bool)t206;
    _Bool u208 = !cast207;
    if (u208) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t209 = __f204;
  __retval205 = t209;
  struct std__ctype_char_* t210 = __retval205;
  return t210;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v211, char v212) {
bb213:
  struct std__ctype_char_* this214;
  char __c215;
  char __retval216;
  this214 = v211;
  __c215 = v212;
  struct std__ctype_char_* t217 = this214;
    char t218 = t217->_M_widen_ok;
    _Bool cast219 = (_Bool)t218;
    if (cast219) {
      char t220 = __c215;
      unsigned char cast221 = (unsigned char)t220;
      unsigned long cast222 = (unsigned long)cast221;
      char t223 = t217->_M_widen[cast222];
      __retval216 = t223;
      char t224 = __retval216;
      return t224;
    }
  std__ctype_char____M_widen_init___const(t217);
  char t225 = __c215;
  void** v226 = (void**)t217;
  void* v227 = *((void**)v226);
  char vcall230 = (char)__VERIFIER_virtual_call_char_char(t217, 6, t225);
  __retval216 = vcall230;
  char t231 = __retval216;
  return t231;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v232, char v233) {
bb234:
  struct std__basic_ios_char__std__char_traits_char__* this235;
  char __c237;
  char __retval238;
  this235 = v232;
  __c237 = v233;
  struct std__basic_ios_char__std__char_traits_char__* t239 = this235;
  struct std__ctype_char_* t240 = t239->_M_ctype;
  struct std__ctype_char_* r241 = std__ctype_char__const__std____check_facet_std__ctype_char___(t240);
  char t242 = __c237;
  char r243 = std__ctype_char___widen_char__const(r241, t242);
  __retval238 = r243;
  char t244 = __retval238;
  return t244;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v245) {
bb246:
  struct std__basic_ostream_char__std__char_traits_char__* __os247;
  struct std__basic_ostream_char__std__char_traits_char__* __retval248;
  __os247 = v245;
  struct std__basic_ostream_char__std__char_traits_char__* t249 = __os247;
  struct std__basic_ostream_char__std__char_traits_char__* t250 = __os247;
  void** v251 = (void**)t250;
  void* v252 = *((void**)v251);
  unsigned char* cast253 = (unsigned char*)v252;
  long c254 = -24;
  unsigned char* ptr255 = &(cast253)[c254];
  long* cast256 = (long*)ptr255;
  long t257 = *cast256;
  unsigned char* cast258 = (unsigned char*)t250;
  unsigned char* ptr259 = &(cast258)[t257];
  struct std__basic_ostream_char__std__char_traits_char__* cast260 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr259;
  struct std__basic_ios_char__std__char_traits_char__* cast261 = (struct std__basic_ios_char__std__char_traits_char__*)cast260;
  char c262 = 10;
  char r263 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast261, c262);
  struct std__basic_ostream_char__std__char_traits_char__* r264 = std__ostream__put(t249, r263);
  struct std__basic_ostream_char__std__char_traits_char__* r265 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r264);
  __retval248 = r265;
  struct std__basic_ostream_char__std__char_traits_char__* t266 = __retval248;
  return t266;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v267) {
bb268:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this269;
  this269 = v267;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t270 = this269;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t270);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t270->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb271:
  int __retval272;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str273;
  struct std__allocator_char_ ref_tmp0274;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ key275;
  struct std__allocator_char_ ref_tmp1276;
  unsigned long found277;
  int c278 = 0;
  __retval272 = c278;
  char* cast279 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0274);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str273, cast279, &ref_tmp0274);
  {
    std__allocator_char____allocator(&ref_tmp0274);
  }
    char* cast280 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1276);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&key275, cast280, &ref_tmp1276);
    {
      std__allocator_char____allocator(&ref_tmp1276);
    }
      unsigned long t281 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      unsigned long r282 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____rfind_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char____const___unsigned_long__const(&str273, &key275, t281);
      found277 = r282;
      unsigned long t283 = found277;
      unsigned long c284 = 9;
      _Bool c285 = ((t283 == c284)) ? 1 : 0;
      if (c285) {
      } else {
        char* cast286 = (char*)&(_str_2);
        char* c287 = _str_3;
        unsigned int c288 = 22;
        char* cast289 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast286, c287, c288, cast289);
      }
      unsigned long t290 = found277;
      struct std__basic_ostream_char__std__char_traits_char__* r291 = std__ostream__operator__(&_ZSt4cout, t290);
      struct std__basic_ostream_char__std__char_traits_char__* r292 = std__ostream__operator___std__ostream_____(r291, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c293 = 0;
      __retval272 = c293;
      int t294 = __retval272;
      int ret_val295 = t294;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&key275);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str273);
      }
      return ret_val295;
  int t296 = __retval272;
  return t296;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v297) {
bb298:
  struct std____new_allocator_char_* this299;
  this299 = v297;
  struct std____new_allocator_char_* t300 = this299;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v301) {
bb302:
  char* __r303;
  char* __retval304;
  __r303 = v301;
  char* t305 = __r303;
  __retval304 = t305;
  char* t306 = __retval304;
  return t306;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v307) {
bb308:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this309;
  char* __retval310;
  this309 = v307;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t311 = this309;
  char* cast312 = (char*)&(t311->field2._M_local_buf);
  char* r313 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast312);
  __retval310 = r313;
  char* t314 = __retval310;
  return t314;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v315, char* v316, struct std__allocator_char_* v317) {
bb318:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this319;
  char* __dat320;
  struct std__allocator_char_* __a321;
  this319 = v315;
  __dat320 = v316;
  __a321 = v317;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t322 = this319;
  struct std__allocator_char_* base323 = (struct std__allocator_char_*)((char *)t322 + 0);
  struct std__allocator_char_* t324 = __a321;
  std__allocator_char___allocator(base323, t324);
    char* t325 = __dat320;
    t322->_M_p = t325;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb326:
  _Bool __retval327;
    _Bool c328 = 0;
    __retval327 = c328;
    _Bool t329 = __retval327;
    return t329;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v330, char* v331) {
bb332:
  char* __c1333;
  char* __c2334;
  _Bool __retval335;
  __c1333 = v330;
  __c2334 = v331;
  char* t336 = __c1333;
  char t337 = *t336;
  int cast338 = (int)t337;
  char* t339 = __c2334;
  char t340 = *t339;
  int cast341 = (int)t340;
  _Bool c342 = ((cast338 == cast341)) ? 1 : 0;
  __retval335 = c342;
  _Bool t343 = __retval335;
  return t343;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v344) {
bb345:
  char* __p346;
  unsigned long __retval347;
  unsigned long __i348;
  __p346 = v344;
  unsigned long c349 = 0;
  __i348 = c349;
    char ref_tmp0350;
    while (1) {
      unsigned long t351 = __i348;
      char* t352 = __p346;
      char* ptr353 = &(t352)[t351];
      char c354 = 0;
      ref_tmp0350 = c354;
      _Bool r355 = __gnu_cxx__char_traits_char___eq(ptr353, &ref_tmp0350);
      _Bool u356 = !r355;
      if (!u356) break;
      unsigned long t357 = __i348;
      unsigned long u358 = t357 + 1;
      __i348 = u358;
    }
  unsigned long t359 = __i348;
  __retval347 = t359;
  unsigned long t360 = __retval347;
  return t360;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v361) {
bb362:
  char* __s363;
  unsigned long __retval364;
  __s363 = v361;
    _Bool r365 = std____is_constant_evaluated();
    if (r365) {
      char* t366 = __s363;
      unsigned long r367 = __gnu_cxx__char_traits_char___length(t366);
      __retval364 = r367;
      unsigned long t368 = __retval364;
      return t368;
    }
  char* t369 = __s363;
  unsigned long r370 = strlen(t369);
  __retval364 = r370;
  unsigned long t371 = __retval364;
  return t371;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v372, char* v373, struct std__random_access_iterator_tag v374) {
bb375:
  char* __first376;
  char* __last377;
  struct std__random_access_iterator_tag unnamed378;
  long __retval379;
  __first376 = v372;
  __last377 = v373;
  unnamed378 = v374;
  char* t380 = __last377;
  char* t381 = __first376;
  long diff382 = t380 - t381;
  __retval379 = diff382;
  long t383 = __retval379;
  return t383;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v384) {
bb385:
  char** unnamed386;
  struct std__random_access_iterator_tag __retval387;
  unnamed386 = v384;
  struct std__random_access_iterator_tag t388 = __retval387;
  return t388;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v389, char* v390) {
bb391:
  char* __first392;
  char* __last393;
  long __retval394;
  struct std__random_access_iterator_tag agg_tmp0395;
  __first392 = v389;
  __last393 = v390;
  char* t396 = __first392;
  char* t397 = __last393;
  struct std__random_access_iterator_tag r398 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first392);
  agg_tmp0395 = r398;
  struct std__random_access_iterator_tag t399 = agg_tmp0395;
  long r400 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t396, t397, t399);
  __retval394 = r400;
  long t401 = __retval394;
  return t401;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v402, char* v403) {
bb404:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this405;
  char* __p406;
  this405 = v402;
  __p406 = v403;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t407 = this405;
  char* t408 = __p406;
  t407->_M_dataplus._M_p = t408;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v409) {
bb410:
  struct std__allocator_char_* __a411;
  unsigned long __retval412;
  __a411 = v409;
  unsigned long c413 = -1;
  unsigned long c414 = 1;
  unsigned long b415 = c413 / c414;
  __retval412 = b415;
  unsigned long t416 = __retval412;
  return t416;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v417) {
bb418:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this419;
  struct std__allocator_char_* __retval420;
  this419 = v417;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t421 = this419;
  struct std__allocator_char_* base422 = (struct std__allocator_char_*)((char *)&(t421->_M_dataplus) + 0);
  __retval420 = base422;
  struct std__allocator_char_* t423 = __retval420;
  return t423;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v424, unsigned long* v425) {
bb426:
  unsigned long* __a427;
  unsigned long* __b428;
  unsigned long* __retval429;
  __a427 = v424;
  __b428 = v425;
    unsigned long* t430 = __b428;
    unsigned long t431 = *t430;
    unsigned long* t432 = __a427;
    unsigned long t433 = *t432;
    _Bool c434 = ((t431 < t433)) ? 1 : 0;
    if (c434) {
      unsigned long* t435 = __b428;
      __retval429 = t435;
      unsigned long* t436 = __retval429;
      return t436;
    }
  unsigned long* t437 = __a427;
  __retval429 = t437;
  unsigned long* t438 = __retval429;
  return t438;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v439) {
bb440:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this441;
  unsigned long __retval442;
  unsigned long __diffmax443;
  unsigned long __allocmax444;
  this441 = v439;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t445 = this441;
  unsigned long c446 = 9223372036854775807;
  __diffmax443 = c446;
  struct std__allocator_char_* r447 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t445);
  unsigned long r448 = std__allocator_traits_std__allocator_char_____max_size(r447);
  __allocmax444 = r448;
  unsigned long* r449 = unsigned_long_const__std__min_unsigned_long_(&__diffmax443, &__allocmax444);
  unsigned long t450 = *r449;
  unsigned long c451 = 1;
  unsigned long b452 = t450 - c451;
  __retval442 = b452;
  unsigned long t453 = __retval442;
  return t453;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v454) {
bb455:
  struct std____new_allocator_char_* this456;
  unsigned long __retval457;
  this456 = v454;
  struct std____new_allocator_char_* t458 = this456;
  unsigned long c459 = 9223372036854775807;
  unsigned long c460 = 1;
  unsigned long b461 = c459 / c460;
  __retval457 = b461;
  unsigned long t462 = __retval457;
  return t462;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v463, unsigned long v464, void* v465) {
bb466:
  struct std____new_allocator_char_* this467;
  unsigned long __n468;
  void* unnamed469;
  char* __retval470;
  this467 = v463;
  __n468 = v464;
  unnamed469 = v465;
  struct std____new_allocator_char_* t471 = this467;
    unsigned long t472 = __n468;
    unsigned long r473 = std____new_allocator_char____M_max_size___const(t471);
    _Bool c474 = ((t472 > r473)) ? 1 : 0;
    if (c474) {
        unsigned long t475 = __n468;
        unsigned long c476 = -1;
        unsigned long c477 = 1;
        unsigned long b478 = c476 / c477;
        _Bool c479 = ((t475 > b478)) ? 1 : 0;
        if (c479) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c480 = 1;
    unsigned long c481 = 16;
    _Bool c482 = ((c480 > c481)) ? 1 : 0;
    if (c482) {
      unsigned long __al483;
      unsigned long c484 = 1;
      __al483 = c484;
      unsigned long t485 = __n468;
      unsigned long c486 = 1;
      unsigned long b487 = t485 * c486;
      unsigned long t488 = __al483;
      void* r489 = operator_new_2(b487, t488);
      char* cast490 = (char*)r489;
      __retval470 = cast490;
      char* t491 = __retval470;
      return t491;
    }
  unsigned long t492 = __n468;
  unsigned long c493 = 1;
  unsigned long b494 = t492 * c493;
  void* r495 = operator_new(b494);
  char* cast496 = (char*)r495;
  __retval470 = cast496;
  char* t497 = __retval470;
  return t497;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v498, unsigned long v499) {
bb500:
  struct std__allocator_char_* this501;
  unsigned long __n502;
  char* __retval503;
  this501 = v498;
  __n502 = v499;
  struct std__allocator_char_* t504 = this501;
    _Bool r505 = std____is_constant_evaluated();
    if (r505) {
        unsigned long t506 = __n502;
        unsigned long c507 = 1;
        unsigned long ovr508;
        _Bool ovf509 = __builtin_mul_overflow(t506, c507, &ovr508);
        __n502 = ovr508;
        if (ovf509) {
          std____throw_bad_array_new_length();
        }
      unsigned long t510 = __n502;
      void* r511 = operator_new(t510);
      char* cast512 = (char*)r511;
      __retval503 = cast512;
      char* t513 = __retval503;
      return t513;
    }
  struct std____new_allocator_char_* base514 = (struct std____new_allocator_char_*)((char *)t504 + 0);
  unsigned long t515 = __n502;
  void* c516 = ((void*)0);
  char* r517 = std____new_allocator_char___allocate(base514, t515, c516);
  __retval503 = r517;
  char* t518 = __retval503;
  return t518;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v519, unsigned long v520) {
bb521:
  struct std__allocator_char_* __a522;
  unsigned long __n523;
  char* __retval524;
  __a522 = v519;
  __n523 = v520;
  struct std__allocator_char_* t525 = __a522;
  unsigned long t526 = __n523;
  char* r527 = std__allocator_char___allocate(t525, t526);
  __retval524 = r527;
  char* t528 = __retval524;
  return t528;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v529, unsigned long v530) {
bb531:
  struct std__allocator_char_* __a532;
  unsigned long __n533;
  char* __retval534;
  char* __p535;
  __a532 = v529;
  __n533 = v530;
  struct std__allocator_char_* t536 = __a532;
  unsigned long t537 = __n533;
  char* r538 = std__allocator_traits_std__allocator_char_____allocate(t536, t537);
  __p535 = r538;
  char* t539 = __p535;
  __retval534 = t539;
  char* t540 = __retval534;
  return t540;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v541) {
bb542:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this543;
  struct std__allocator_char_* __retval544;
  this543 = v541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t545 = this543;
  struct std__allocator_char_* base546 = (struct std__allocator_char_*)((char *)&(t545->_M_dataplus) + 0);
  __retval544 = base546;
  struct std__allocator_char_* t547 = __retval544;
  return t547;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v548, unsigned long* v549, unsigned long v550) {
bb551:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this552;
  unsigned long* __capacity553;
  unsigned long __old_capacity554;
  char* __retval555;
  this552 = v548;
  __capacity553 = v549;
  __old_capacity554 = v550;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t556 = this552;
    unsigned long* t557 = __capacity553;
    unsigned long t558 = *t557;
    unsigned long r559 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t556);
    _Bool c560 = ((t558 > r559)) ? 1 : 0;
    if (c560) {
      char* cast561 = (char*)&(_str_5);
      std____throw_length_error(cast561);
    }
    unsigned long* t562 = __capacity553;
    unsigned long t563 = *t562;
    unsigned long t564 = __old_capacity554;
    _Bool c565 = ((t563 > t564)) ? 1 : 0;
    _Bool ternary566;
    if (c565) {
      unsigned long* t567 = __capacity553;
      unsigned long t568 = *t567;
      unsigned long c569 = 2;
      unsigned long t570 = __old_capacity554;
      unsigned long b571 = c569 * t570;
      _Bool c572 = ((t568 < b571)) ? 1 : 0;
      ternary566 = (_Bool)c572;
    } else {
      _Bool c573 = 0;
      ternary566 = (_Bool)c573;
    }
    if (ternary566) {
      unsigned long c574 = 2;
      unsigned long t575 = __old_capacity554;
      unsigned long b576 = c574 * t575;
      unsigned long* t577 = __capacity553;
      *t577 = b576;
        unsigned long* t578 = __capacity553;
        unsigned long t579 = *t578;
        unsigned long r580 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t556);
        _Bool c581 = ((t579 > r580)) ? 1 : 0;
        if (c581) {
          unsigned long r582 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t556);
          unsigned long* t583 = __capacity553;
          *t583 = r582;
        }
    }
  struct std__allocator_char_* r584 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t556);
  unsigned long* t585 = __capacity553;
  unsigned long t586 = *t585;
  unsigned long c587 = 1;
  unsigned long b588 = t586 + c587;
  char* r589 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r584, b588);
  __retval555 = r589;
  char* t590 = __retval555;
  return t590;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v591, unsigned long v592) {
bb593:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this594;
  unsigned long __capacity595;
  this594 = v591;
  __capacity595 = v592;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t596 = this594;
  unsigned long t597 = __capacity595;
  t596->field2._M_allocated_capacity = t597;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb598:
  _Bool __retval599;
    _Bool c600 = 0;
    __retval599 = c600;
    _Bool t601 = __retval599;
    return t601;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v602) {
bb603:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this604;
  this604 = v602;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t605 = this604;
    _Bool r606 = std__is_constant_evaluated();
    if (r606) {
        unsigned long __i607;
        unsigned long c608 = 0;
        __i607 = c608;
        while (1) {
          unsigned long t610 = __i607;
          unsigned long c611 = 15;
          _Bool c612 = ((t610 <= c611)) ? 1 : 0;
          if (!c612) break;
          char c613 = 0;
          unsigned long t614 = __i607;
          t605->field2._M_local_buf[t614] = c613;
        for_step609: ;
          unsigned long t615 = __i607;
          unsigned long u616 = t615 + 1;
          __i607 = u616;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v617, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v618) {
bb619:
  struct _Guard* this620;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s621;
  this620 = v617;
  __s621 = v618;
  struct _Guard* t622 = this620;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t623 = __s621;
  t622->_M_guarded = t623;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v624, char* v625) {
bb626:
  char* __location627;
  char* __args628;
  char* __retval629;
  void* __loc630;
  __location627 = v624;
  __args628 = v625;
  char* t631 = __location627;
  void* cast632 = (void*)t631;
  __loc630 = cast632;
    void* t633 = __loc630;
    char* cast634 = (char*)t633;
    char* t635 = __args628;
    char t636 = *t635;
    *cast634 = t636;
    __retval629 = cast634;
    char* t637 = __retval629;
    return t637;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v638, char* v639) {
bb640:
  char* __c1641;
  char* __c2642;
  __c1641 = v638;
  __c2642 = v639;
    _Bool r643 = std____is_constant_evaluated();
    if (r643) {
      char* t644 = __c1641;
      char* t645 = __c2642;
      char* r646 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t644, t645);
    } else {
      char* t647 = __c2642;
      char t648 = *t647;
      char* t649 = __c1641;
      *t649 = t648;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v650, char* v651, unsigned long v652) {
bb653:
  char* __s1654;
  char* __s2655;
  unsigned long __n656;
  char* __retval657;
  __s1654 = v650;
  __s2655 = v651;
  __n656 = v652;
    unsigned long t658 = __n656;
    unsigned long c659 = 0;
    _Bool c660 = ((t658 == c659)) ? 1 : 0;
    if (c660) {
      char* t661 = __s1654;
      __retval657 = t661;
      char* t662 = __retval657;
      return t662;
    }
    _Bool r663 = std____is_constant_evaluated();
    if (r663) {
        unsigned long __i664;
        unsigned long c665 = 0;
        __i664 = c665;
        while (1) {
          unsigned long t667 = __i664;
          unsigned long t668 = __n656;
          _Bool c669 = ((t667 < t668)) ? 1 : 0;
          if (!c669) break;
          char* t670 = __s1654;
          unsigned long t671 = __i664;
          char* ptr672 = &(t670)[t671];
          unsigned long t673 = __i664;
          char* t674 = __s2655;
          char* ptr675 = &(t674)[t673];
          char* r676 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr672, ptr675);
        for_step666: ;
          unsigned long t677 = __i664;
          unsigned long u678 = t677 + 1;
          __i664 = u678;
        }
      char* t679 = __s1654;
      __retval657 = t679;
      char* t680 = __retval657;
      return t680;
    }
  char* t681 = __s1654;
  void* cast682 = (void*)t681;
  char* t683 = __s2655;
  void* cast684 = (void*)t683;
  unsigned long t685 = __n656;
  unsigned long c686 = 1;
  unsigned long b687 = t685 * c686;
  void* r688 = memcpy(cast682, cast684, b687);
  char* t689 = __s1654;
  __retval657 = t689;
  char* t690 = __retval657;
  return t690;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v691, char* v692, unsigned long v693) {
bb694:
  char* __s1695;
  char* __s2696;
  unsigned long __n697;
  char* __retval698;
  __s1695 = v691;
  __s2696 = v692;
  __n697 = v693;
    unsigned long t699 = __n697;
    unsigned long c700 = 0;
    _Bool c701 = ((t699 == c700)) ? 1 : 0;
    if (c701) {
      char* t702 = __s1695;
      __retval698 = t702;
      char* t703 = __retval698;
      return t703;
    }
    _Bool r704 = std____is_constant_evaluated();
    if (r704) {
      char* t705 = __s1695;
      char* t706 = __s2696;
      unsigned long t707 = __n697;
      char* r708 = __gnu_cxx__char_traits_char___copy(t705, t706, t707);
      __retval698 = r708;
      char* t709 = __retval698;
      return t709;
    }
  char* t710 = __s1695;
  void* cast711 = (void*)t710;
  char* t712 = __s2696;
  void* cast713 = (void*)t712;
  unsigned long t714 = __n697;
  void* r715 = memcpy(cast711, cast713, t714);
  char* cast716 = (char*)r715;
  __retval698 = cast716;
  char* t717 = __retval698;
  return t717;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v718, char* v719, unsigned long v720) {
bb721:
  char* __d722;
  char* __s723;
  unsigned long __n724;
  __d722 = v718;
  __s723 = v719;
  __n724 = v720;
    unsigned long t725 = __n724;
    unsigned long c726 = 1;
    _Bool c727 = ((t725 == c726)) ? 1 : 0;
    if (c727) {
      char* t728 = __d722;
      char* t729 = __s723;
      std__char_traits_char___assign(t728, t729);
    } else {
      char* t730 = __d722;
      char* t731 = __s723;
      unsigned long t732 = __n724;
      char* r733 = std__char_traits_char___copy(t730, t731, t732);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v734) {
bb735:
  char* __it736;
  char* __retval737;
  __it736 = v734;
  char* t738 = __it736;
  __retval737 = t738;
  char* t739 = __retval737;
  return t739;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v740, char* v741, char* v742) {
bb743:
  char* __p744;
  char* __k1745;
  char* __k2746;
  __p744 = v740;
  __k1745 = v741;
  __k2746 = v742;
    char* t747 = __p744;
    char* t748 = __k1745;
    char* r749 = char_const__std____niter_base_char_const__(t748);
    char* t750 = __k2746;
    char* t751 = __k1745;
    long diff752 = t750 - t751;
    unsigned long cast753 = (unsigned long)diff752;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t747, r749, cast753);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v754) {
bb755:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this756;
  char* __retval757;
  this756 = v754;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t758 = this756;
  char* t759 = t758->_M_dataplus._M_p;
  __retval757 = t759;
  char* t760 = __retval757;
  return t760;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v761, unsigned long v762) {
bb763:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this764;
  unsigned long __length765;
  this764 = v761;
  __length765 = v762;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t766 = this764;
  unsigned long t767 = __length765;
  t766->_M_string_length = t767;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v768, unsigned long v769) {
bb770:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this771;
  unsigned long __n772;
  char ref_tmp0773;
  this771 = v768;
  __n772 = v769;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t774 = this771;
  unsigned long t775 = __n772;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t774, t775);
  unsigned long t776 = __n772;
  char* r777 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t774);
  char* ptr778 = &(r777)[t776];
  char c779 = 0;
  ref_tmp0773 = c779;
  std__char_traits_char___assign(ptr778, &ref_tmp0773);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v780) {
bb781:
  struct _Guard* this782;
  this782 = v780;
  struct _Guard* t783 = this782;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t784 = t783->_M_guarded;
    _Bool cast785 = (_Bool)t784;
    if (cast785) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t786 = t783->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t786);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v787, char* v788, char* v789, struct std__forward_iterator_tag v790) {
bb791:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this792;
  char* __beg793;
  char* __end794;
  struct std__forward_iterator_tag unnamed795;
  unsigned long __dnew796;
  struct _Guard __guard797;
  this792 = v787;
  __beg793 = v788;
  __end794 = v789;
  unnamed795 = v790;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t798 = this792;
  char* t799 = __beg793;
  char* t800 = __end794;
  long r801 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t799, t800);
  unsigned long cast802 = (unsigned long)r801;
  __dnew796 = cast802;
    unsigned long t803 = __dnew796;
    unsigned long c804 = 15;
    _Bool c805 = ((t803 > c804)) ? 1 : 0;
    if (c805) {
      unsigned long c806 = 0;
      char* r807 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t798, &__dnew796, c806);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t798, r807);
      unsigned long t808 = __dnew796;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t798, t808);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t798);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard797, t798);
    char* r809 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t798);
    char* t810 = __beg793;
    char* t811 = __end794;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r809, t810, t811);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c812 = ((void*)0);
    __guard797._M_guarded = c812;
    unsigned long t813 = __dnew796;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t798, t813);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard797);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v814) {
bb815:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this816;
  this816 = v814;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t817 = this816;
  {
    struct std__allocator_char_* base818 = (struct std__allocator_char_*)((char *)t817 + 0);
    std__allocator_char____allocator(base818);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v819, struct std____new_allocator_char_* v820) {
bb821:
  struct std____new_allocator_char_* this822;
  struct std____new_allocator_char_* unnamed823;
  this822 = v819;
  unnamed823 = v820;
  struct std____new_allocator_char_* t824 = this822;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v825, struct std__allocator_char_* v826) {
bb827:
  struct std__allocator_char_* this828;
  struct std__allocator_char_* __a829;
  this828 = v825;
  __a829 = v826;
  struct std__allocator_char_* t830 = this828;
  struct std____new_allocator_char_* base831 = (struct std____new_allocator_char_*)((char *)t830 + 0);
  struct std__allocator_char_* t832 = __a829;
  struct std____new_allocator_char_* base833 = (struct std____new_allocator_char_*)((char *)t832 + 0);
  std____new_allocator_char_____new_allocator(base831, base833);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v834) {
bb835:
  char* __r836;
  char* __retval837;
  __r836 = v834;
  char* t838 = __r836;
  __retval837 = t838;
  char* t839 = __retval837;
  return t839;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v840) {
bb841:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this842;
  char* __retval843;
  this842 = v840;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t844 = this842;
  char* cast845 = (char*)&(t844->field2._M_local_buf);
  char* r846 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast845);
  __retval843 = r846;
  char* t847 = __retval843;
  return t847;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v848) {
bb849:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this850;
  _Bool __retval851;
  this850 = v848;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t852 = this850;
    char* r853 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t852);
    char* r854 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t852);
    _Bool c855 = ((r853 == r854)) ? 1 : 0;
    if (c855) {
        unsigned long t856 = t852->_M_string_length;
        unsigned long c857 = 15;
        _Bool c858 = ((t856 > c857)) ? 1 : 0;
        if (c858) {
          __builtin_unreachable();
        }
      _Bool c859 = 1;
      __retval851 = c859;
      _Bool t860 = __retval851;
      return t860;
    }
  _Bool c861 = 0;
  __retval851 = c861;
  _Bool t862 = __retval851;
  return t862;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v863, char* v864, unsigned long v865) {
bb866:
  struct std____new_allocator_char_* this867;
  char* __p868;
  unsigned long __n869;
  this867 = v863;
  __p868 = v864;
  __n869 = v865;
  struct std____new_allocator_char_* t870 = this867;
    unsigned long c871 = 1;
    unsigned long c872 = 16;
    _Bool c873 = ((c871 > c872)) ? 1 : 0;
    if (c873) {
      char* t874 = __p868;
      void* cast875 = (void*)t874;
      unsigned long t876 = __n869;
      unsigned long c877 = 1;
      unsigned long b878 = t876 * c877;
      unsigned long c879 = 1;
      operator_delete_3(cast875, b878, c879);
      return;
    }
  char* t880 = __p868;
  void* cast881 = (void*)t880;
  unsigned long t882 = __n869;
  unsigned long c883 = 1;
  unsigned long b884 = t882 * c883;
  operator_delete_2(cast881, b884);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v885, char* v886, unsigned long v887) {
bb888:
  struct std__allocator_char_* this889;
  char* __p890;
  unsigned long __n891;
  this889 = v885;
  __p890 = v886;
  __n891 = v887;
  struct std__allocator_char_* t892 = this889;
    _Bool r893 = std____is_constant_evaluated();
    if (r893) {
      char* t894 = __p890;
      void* cast895 = (void*)t894;
      operator_delete(cast895);
      return;
    }
  struct std____new_allocator_char_* base896 = (struct std____new_allocator_char_*)((char *)t892 + 0);
  char* t897 = __p890;
  unsigned long t898 = __n891;
  std____new_allocator_char___deallocate(base896, t897, t898);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v899, char* v900, unsigned long v901) {
bb902:
  struct std__allocator_char_* __a903;
  char* __p904;
  unsigned long __n905;
  __a903 = v899;
  __p904 = v900;
  __n905 = v901;
  struct std__allocator_char_* t906 = __a903;
  char* t907 = __p904;
  unsigned long t908 = __n905;
  std__allocator_char___deallocate(t906, t907, t908);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v909, unsigned long v910) {
bb911:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this912;
  unsigned long __size913;
  this912 = v909;
  __size913 = v910;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t914 = this912;
  struct std__allocator_char_* r915 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t914);
  char* r916 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t914);
  unsigned long t917 = __size913;
  unsigned long c918 = 1;
  unsigned long b919 = t917 + c918;
  std__allocator_traits_std__allocator_char_____deallocate(r915, r916, b919);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v920) {
bb921:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this922;
  this922 = v920;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t923 = this922;
    _Bool r924 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t923);
    _Bool u925 = !r924;
    if (u925) {
      unsigned long t926 = t923->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t923, t926);
    }
  return;
}

