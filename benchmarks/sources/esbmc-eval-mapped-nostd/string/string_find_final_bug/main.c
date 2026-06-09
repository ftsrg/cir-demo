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
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[7] = "There.";
char _str_1[7] = "needle";
char _str_2[15] = "int(found)==51";
char _str_3[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_final_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[18] = "Period found at: ";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char p1, unsigned long p2);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
        char* cast20 = (char*)&(_str_5);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v32) {
bb33:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this34;
  unsigned long __retval35;
  unsigned long __sz36;
  this34 = v32;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t37 = this34;
  unsigned long t38 = t37->_M_string_length;
  __sz36 = t38;
    unsigned long t39 = __sz36;
    unsigned long r40 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t37);
    _Bool c41 = ((t39 > r40)) ? 1 : 0;
    if (c41) {
      __builtin_unreachable();
    }
  unsigned long t42 = __sz36;
  __retval35 = t42;
  unsigned long t43 = __retval35;
  return t43;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v44, unsigned long v45, char* v46) {
bb47:
  char* __s48;
  unsigned long __n49;
  char* __a50;
  char* __retval51;
  __s48 = v44;
  __n49 = v45;
  __a50 = v46;
    unsigned long __i52;
    unsigned long c53 = 0;
    __i52 = c53;
    while (1) {
      unsigned long t55 = __i52;
      unsigned long t56 = __n49;
      _Bool c57 = ((t55 < t56)) ? 1 : 0;
      if (!c57) break;
        unsigned long t58 = __i52;
        char* t59 = __s48;
        char* ptr60 = &(t59)[t58];
        char* t61 = __a50;
        _Bool r62 = __gnu_cxx__char_traits_char___eq(ptr60, t61);
        if (r62) {
          char* t63 = __s48;
          unsigned long t64 = __i52;
          char* ptr65 = &(t63)[t64];
          __retval51 = ptr65;
          char* t66 = __retval51;
          char* ret_val67 = t66;
          return ret_val67;
        }
    for_step54: ;
      unsigned long t68 = __i52;
      unsigned long u69 = t68 + 1;
      __i52 = u69;
    }
  char* c70 = ((void*)0);
  __retval51 = c70;
  char* t71 = __retval51;
  return t71;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v72, unsigned long v73, char* v74) {
bb75:
  char* __s76;
  unsigned long __n77;
  char* __a78;
  char* __retval79;
  __s76 = v72;
  __n77 = v73;
  __a78 = v74;
    unsigned long t80 = __n77;
    unsigned long c81 = 0;
    _Bool c82 = ((t80 == c81)) ? 1 : 0;
    if (c82) {
      char* c83 = ((void*)0);
      __retval79 = c83;
      char* t84 = __retval79;
      return t84;
    }
    _Bool r85 = std____is_constant_evaluated();
    if (r85) {
      char* t86 = __s76;
      unsigned long t87 = __n77;
      char* t88 = __a78;
      char* r89 = __gnu_cxx__char_traits_char___find(t86, t87, t88);
      __retval79 = r89;
      char* t90 = __retval79;
      return t90;
    }
  char* t91 = __s76;
  void* cast92 = (void*)t91;
  char* t93 = __a78;
  char t94 = *t93;
  int cast95 = (int)t94;
  unsigned long t96 = __n77;
  void* memchr97 = (void*)__builtin_memchr(cast92, cast95, t96);
  char* cast98 = (char*)memchr97;
  __retval79 = cast98;
  char* t99 = __retval79;
  return t99;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v100, char v101, unsigned long v102) {
bb103:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this104;
  char __c105;
  unsigned long __pos106;
  unsigned long __retval107;
  unsigned long __ret108;
  unsigned long __size109;
  this104 = v100;
  __c105 = v101;
  __pos106 = v102;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t110 = this104;
  unsigned long t111 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __ret108 = t111;
  unsigned long r112 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t110);
  __size109 = r112;
    unsigned long t113 = __pos106;
    unsigned long t114 = __size109;
    _Bool c115 = ((t113 < t114)) ? 1 : 0;
    if (c115) {
      char* __data116;
      unsigned long __n117;
      char* __p118;
      char* r119 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t110);
      __data116 = r119;
      unsigned long t120 = __size109;
      unsigned long t121 = __pos106;
      unsigned long b122 = t120 - t121;
      __n117 = b122;
      char* t123 = __data116;
      unsigned long t124 = __pos106;
      char* ptr125 = &(t123)[t124];
      unsigned long t126 = __n117;
      char* r127 = std__char_traits_char___find(ptr125, t126, &__c105);
      __p118 = r127;
        char* t128 = __p118;
        _Bool cast129 = (_Bool)t128;
        if (cast129) {
          char* t130 = __p118;
          char* t131 = __data116;
          long diff132 = t130 - t131;
          unsigned long cast133 = (unsigned long)diff132;
          __ret108 = cast133;
        }
    }
  unsigned long t134 = __ret108;
  __retval107 = t134;
  unsigned long t135 = __retval107;
  return t135;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v136, int v137) {
bb138:
  int __a139;
  int __b140;
  int __retval141;
  __a139 = v136;
  __b140 = v137;
  int t142 = __a139;
  int t143 = __b140;
  int b144 = t142 | t143;
  __retval141 = b144;
  int t145 = __retval141;
  return t145;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v146) {
bb147:
  struct std__basic_ios_char__std__char_traits_char__* this148;
  int __retval149;
  this148 = v146;
  struct std__basic_ios_char__std__char_traits_char__* t150 = this148;
  struct std__ios_base* base151 = (struct std__ios_base*)((char *)t150 + 0);
  int t152 = base151->_M_streambuf_state;
  __retval149 = t152;
  int t153 = __retval149;
  return t153;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v154, int v155) {
bb156:
  struct std__basic_ios_char__std__char_traits_char__* this157;
  int __state158;
  this157 = v154;
  __state158 = v155;
  struct std__basic_ios_char__std__char_traits_char__* t159 = this157;
  int r160 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t159);
  int t161 = __state158;
  int r162 = std__operator_(r160, t161);
  std__basic_ios_char__std__char_traits_char_____clear(t159, r162);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v163, char* v164) {
bb165:
  struct std__basic_ostream_char__std__char_traits_char__* __out166;
  char* __s167;
  struct std__basic_ostream_char__std__char_traits_char__* __retval168;
  __out166 = v163;
  __s167 = v164;
    char* t169 = __s167;
    _Bool cast170 = (_Bool)t169;
    _Bool u171 = !cast170;
    if (u171) {
      struct std__basic_ostream_char__std__char_traits_char__* t172 = __out166;
      void** v173 = (void**)t172;
      void* v174 = *((void**)v173);
      unsigned char* cast175 = (unsigned char*)v174;
      long c176 = -24;
      unsigned char* ptr177 = &(cast175)[c176];
      long* cast178 = (long*)ptr177;
      long t179 = *cast178;
      unsigned char* cast180 = (unsigned char*)t172;
      unsigned char* ptr181 = &(cast180)[t179];
      struct std__basic_ostream_char__std__char_traits_char__* cast182 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr181;
      struct std__basic_ios_char__std__char_traits_char__* cast183 = (struct std__basic_ios_char__std__char_traits_char__*)cast182;
      int t184 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast183, t184);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t185 = __out166;
      char* t186 = __s167;
      char* t187 = __s167;
      unsigned long r188 = std__char_traits_char___length(t187);
      long cast189 = (long)r188;
      struct std__basic_ostream_char__std__char_traits_char__* r190 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t185, t186, cast189);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t191 = __out166;
  __retval168 = t191;
  struct std__basic_ostream_char__std__char_traits_char__* t192 = __retval168;
  return t192;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v193, void* v194) {
bb195:
  struct std__basic_ostream_char__std__char_traits_char__* this196;
  void* __pf197;
  struct std__basic_ostream_char__std__char_traits_char__* __retval198;
  this196 = v193;
  __pf197 = v194;
  struct std__basic_ostream_char__std__char_traits_char__* t199 = this196;
  void* t200 = __pf197;
  struct std__basic_ostream_char__std__char_traits_char__* r201 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t200)(t199);
  __retval198 = r201;
  struct std__basic_ostream_char__std__char_traits_char__* t202 = __retval198;
  return t202;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v203) {
bb204:
  struct std__basic_ostream_char__std__char_traits_char__* __os205;
  struct std__basic_ostream_char__std__char_traits_char__* __retval206;
  __os205 = v203;
  struct std__basic_ostream_char__std__char_traits_char__* t207 = __os205;
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__ostream__flush(t207);
  __retval206 = r208;
  struct std__basic_ostream_char__std__char_traits_char__* t209 = __retval206;
  return t209;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v210) {
bb211:
  struct std__ctype_char_* __f212;
  struct std__ctype_char_* __retval213;
  __f212 = v210;
    struct std__ctype_char_* t214 = __f212;
    _Bool cast215 = (_Bool)t214;
    _Bool u216 = !cast215;
    if (u216) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t217 = __f212;
  __retval213 = t217;
  struct std__ctype_char_* t218 = __retval213;
  return t218;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v219, char v220) {
bb221:
  struct std__ctype_char_* this222;
  char __c223;
  char __retval224;
  this222 = v219;
  __c223 = v220;
  struct std__ctype_char_* t225 = this222;
    char t226 = t225->_M_widen_ok;
    _Bool cast227 = (_Bool)t226;
    if (cast227) {
      char t228 = __c223;
      unsigned char cast229 = (unsigned char)t228;
      unsigned long cast230 = (unsigned long)cast229;
      char t231 = t225->_M_widen[cast230];
      __retval224 = t231;
      char t232 = __retval224;
      return t232;
    }
  std__ctype_char____M_widen_init___const(t225);
  char t233 = __c223;
  void** v234 = (void**)t225;
  void* v235 = *((void**)v234);
  char vcall238 = (char)__VERIFIER_virtual_call_char_char(t225, 6, t233);
  __retval224 = vcall238;
  char t239 = __retval224;
  return t239;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v240, char v241) {
bb242:
  struct std__basic_ios_char__std__char_traits_char__* this243;
  char __c244;
  char __retval245;
  this243 = v240;
  __c244 = v241;
  struct std__basic_ios_char__std__char_traits_char__* t246 = this243;
  struct std__ctype_char_* t247 = t246->_M_ctype;
  struct std__ctype_char_* r248 = std__ctype_char__const__std____check_facet_std__ctype_char___(t247);
  char t249 = __c244;
  char r250 = std__ctype_char___widen_char__const(r248, t249);
  __retval245 = r250;
  char t251 = __retval245;
  return t251;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v252) {
bb253:
  struct std__basic_ostream_char__std__char_traits_char__* __os254;
  struct std__basic_ostream_char__std__char_traits_char__* __retval255;
  __os254 = v252;
  struct std__basic_ostream_char__std__char_traits_char__* t256 = __os254;
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __os254;
  void** v258 = (void**)t257;
  void* v259 = *((void**)v258);
  unsigned char* cast260 = (unsigned char*)v259;
  long c261 = -24;
  unsigned char* ptr262 = &(cast260)[c261];
  long* cast263 = (long*)ptr262;
  long t264 = *cast263;
  unsigned char* cast265 = (unsigned char*)t257;
  unsigned char* ptr266 = &(cast265)[t264];
  struct std__basic_ostream_char__std__char_traits_char__* cast267 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr266;
  struct std__basic_ios_char__std__char_traits_char__* cast268 = (struct std__basic_ios_char__std__char_traits_char__*)cast267;
  char c269 = 10;
  char r270 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast268, c269);
  struct std__basic_ostream_char__std__char_traits_char__* r271 = std__ostream__put(t256, r270);
  struct std__basic_ostream_char__std__char_traits_char__* r272 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r271);
  __retval255 = r272;
  struct std__basic_ostream_char__std__char_traits_char__* t273 = __retval255;
  return t273;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v274) {
bb275:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this276;
  this276 = v274;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t277 = this276;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t277);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t277->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb278:
  int __retval279;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str280;
  struct std__allocator_char_ ref_tmp0281;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str2282;
  struct std__allocator_char_ ref_tmp1283;
  unsigned long found284;
  int c285 = 0;
  __retval279 = c285;
  char* cast286 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0281);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str280, cast286, &ref_tmp0281);
  {
    std__allocator_char____allocator(&ref_tmp0281);
  }
    char* cast287 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1283);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str2282, cast287, &ref_tmp1283);
    {
      std__allocator_char____allocator(&ref_tmp1283);
    }
      char c288 = 46;
      unsigned long c289 = 0;
      unsigned long r290 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char__unsigned_long__const(&str280, c288, c289);
      found284 = r290;
      unsigned long t291 = found284;
      int cast292 = (int)t291;
      int c293 = 51;
      _Bool c294 = ((cast292 == c293)) ? 1 : 0;
      if (c294) {
      } else {
        char* cast295 = (char*)&(_str_2);
        char* c296 = _str_3;
        unsigned int c297 = 22;
        char* cast298 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast295, c296, c297, cast298);
      }
        unsigned long t299 = found284;
        unsigned long t300 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c301 = ((t299 != t300)) ? 1 : 0;
        if (c301) {
          char* cast302 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r303 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast302);
          unsigned long t304 = found284;
          int cast305 = (int)t304;
          struct std__basic_ostream_char__std__char_traits_char__* r306 = std__ostream__operator__(r303, cast305);
          struct std__basic_ostream_char__std__char_traits_char__* r307 = std__ostream__operator___std__ostream_____(r306, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        }
      int c308 = 0;
      __retval279 = c308;
      int t309 = __retval279;
      int ret_val310 = t309;
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str2282);
      }
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str280);
      }
      return ret_val310;
  int t311 = __retval279;
  return t311;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v312) {
bb313:
  struct std____new_allocator_char_* this314;
  this314 = v312;
  struct std____new_allocator_char_* t315 = this314;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v316) {
bb317:
  char* __r318;
  char* __retval319;
  __r318 = v316;
  char* t320 = __r318;
  __retval319 = t320;
  char* t321 = __retval319;
  return t321;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v322) {
bb323:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this324;
  char* __retval325;
  this324 = v322;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t326 = this324;
  char* cast327 = (char*)&(t326->field2._M_local_buf);
  char* r328 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast327);
  __retval325 = r328;
  char* t329 = __retval325;
  return t329;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v330, char* v331, struct std__allocator_char_* v332) {
bb333:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this334;
  char* __dat335;
  struct std__allocator_char_* __a336;
  this334 = v330;
  __dat335 = v331;
  __a336 = v332;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t337 = this334;
  struct std__allocator_char_* base338 = (struct std__allocator_char_*)((char *)t337 + 0);
  struct std__allocator_char_* t339 = __a336;
  std__allocator_char___allocator(base338, t339);
    char* t340 = __dat335;
    t337->_M_p = t340;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb341:
  _Bool __retval342;
    _Bool c343 = 0;
    __retval342 = c343;
    _Bool t344 = __retval342;
    return t344;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v345, char* v346) {
bb347:
  char* __c1348;
  char* __c2349;
  _Bool __retval350;
  __c1348 = v345;
  __c2349 = v346;
  char* t351 = __c1348;
  char t352 = *t351;
  int cast353 = (int)t352;
  char* t354 = __c2349;
  char t355 = *t354;
  int cast356 = (int)t355;
  _Bool c357 = ((cast353 == cast356)) ? 1 : 0;
  __retval350 = c357;
  _Bool t358 = __retval350;
  return t358;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v359) {
bb360:
  char* __p361;
  unsigned long __retval362;
  unsigned long __i363;
  __p361 = v359;
  unsigned long c364 = 0;
  __i363 = c364;
    char ref_tmp0365;
    while (1) {
      unsigned long t366 = __i363;
      char* t367 = __p361;
      char* ptr368 = &(t367)[t366];
      char c369 = 0;
      ref_tmp0365 = c369;
      _Bool r370 = __gnu_cxx__char_traits_char___eq(ptr368, &ref_tmp0365);
      _Bool u371 = !r370;
      if (!u371) break;
      unsigned long t372 = __i363;
      unsigned long u373 = t372 + 1;
      __i363 = u373;
    }
  unsigned long t374 = __i363;
  __retval362 = t374;
  unsigned long t375 = __retval362;
  return t375;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v376) {
bb377:
  char* __s378;
  unsigned long __retval379;
  __s378 = v376;
    _Bool r380 = std____is_constant_evaluated();
    if (r380) {
      char* t381 = __s378;
      unsigned long r382 = __gnu_cxx__char_traits_char___length(t381);
      __retval379 = r382;
      unsigned long t383 = __retval379;
      return t383;
    }
  char* t384 = __s378;
  unsigned long r385 = strlen(t384);
  __retval379 = r385;
  unsigned long t386 = __retval379;
  return t386;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v387, char* v388, struct std__random_access_iterator_tag v389) {
bb390:
  char* __first391;
  char* __last392;
  struct std__random_access_iterator_tag unnamed393;
  long __retval394;
  __first391 = v387;
  __last392 = v388;
  unnamed393 = v389;
  char* t395 = __last392;
  char* t396 = __first391;
  long diff397 = t395 - t396;
  __retval394 = diff397;
  long t398 = __retval394;
  return t398;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v399) {
bb400:
  char** unnamed401;
  struct std__random_access_iterator_tag __retval402;
  unnamed401 = v399;
  struct std__random_access_iterator_tag t403 = __retval402;
  return t403;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v404, char* v405) {
bb406:
  char* __first407;
  char* __last408;
  long __retval409;
  struct std__random_access_iterator_tag agg_tmp0410;
  __first407 = v404;
  __last408 = v405;
  char* t411 = __first407;
  char* t412 = __last408;
  struct std__random_access_iterator_tag r413 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first407);
  agg_tmp0410 = r413;
  struct std__random_access_iterator_tag t414 = agg_tmp0410;
  long r415 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t411, t412, t414);
  __retval409 = r415;
  long t416 = __retval409;
  return t416;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v417, char* v418) {
bb419:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this420;
  char* __p421;
  this420 = v417;
  __p421 = v418;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t422 = this420;
  char* t423 = __p421;
  t422->_M_dataplus._M_p = t423;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v424) {
bb425:
  struct std__allocator_char_* __a426;
  unsigned long __retval427;
  __a426 = v424;
  unsigned long c428 = -1;
  unsigned long c429 = 1;
  unsigned long b430 = c428 / c429;
  __retval427 = b430;
  unsigned long t431 = __retval427;
  return t431;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v432) {
bb433:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this434;
  struct std__allocator_char_* __retval435;
  this434 = v432;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t436 = this434;
  struct std__allocator_char_* base437 = (struct std__allocator_char_*)((char *)&(t436->_M_dataplus) + 0);
  __retval435 = base437;
  struct std__allocator_char_* t438 = __retval435;
  return t438;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v439, unsigned long* v440) {
bb441:
  unsigned long* __a442;
  unsigned long* __b443;
  unsigned long* __retval444;
  __a442 = v439;
  __b443 = v440;
    unsigned long* t445 = __b443;
    unsigned long t446 = *t445;
    unsigned long* t447 = __a442;
    unsigned long t448 = *t447;
    _Bool c449 = ((t446 < t448)) ? 1 : 0;
    if (c449) {
      unsigned long* t450 = __b443;
      __retval444 = t450;
      unsigned long* t451 = __retval444;
      return t451;
    }
  unsigned long* t452 = __a442;
  __retval444 = t452;
  unsigned long* t453 = __retval444;
  return t453;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v454) {
bb455:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this456;
  unsigned long __retval457;
  unsigned long __diffmax458;
  unsigned long __allocmax459;
  this456 = v454;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t460 = this456;
  unsigned long c461 = 9223372036854775807;
  __diffmax458 = c461;
  struct std__allocator_char_* r462 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t460);
  unsigned long r463 = std__allocator_traits_std__allocator_char_____max_size(r462);
  __allocmax459 = r463;
  unsigned long* r464 = unsigned_long_const__std__min_unsigned_long_(&__diffmax458, &__allocmax459);
  unsigned long t465 = *r464;
  unsigned long c466 = 1;
  unsigned long b467 = t465 - c466;
  __retval457 = b467;
  unsigned long t468 = __retval457;
  return t468;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v469) {
bb470:
  struct std____new_allocator_char_* this471;
  unsigned long __retval472;
  this471 = v469;
  struct std____new_allocator_char_* t473 = this471;
  unsigned long c474 = 9223372036854775807;
  unsigned long c475 = 1;
  unsigned long b476 = c474 / c475;
  __retval472 = b476;
  unsigned long t477 = __retval472;
  return t477;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v478, unsigned long v479, void* v480) {
bb481:
  struct std____new_allocator_char_* this482;
  unsigned long __n483;
  void* unnamed484;
  char* __retval485;
  this482 = v478;
  __n483 = v479;
  unnamed484 = v480;
  struct std____new_allocator_char_* t486 = this482;
    unsigned long t487 = __n483;
    unsigned long r488 = std____new_allocator_char____M_max_size___const(t486);
    _Bool c489 = ((t487 > r488)) ? 1 : 0;
    if (c489) {
        unsigned long t490 = __n483;
        unsigned long c491 = -1;
        unsigned long c492 = 1;
        unsigned long b493 = c491 / c492;
        _Bool c494 = ((t490 > b493)) ? 1 : 0;
        if (c494) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c495 = 1;
    unsigned long c496 = 16;
    _Bool c497 = ((c495 > c496)) ? 1 : 0;
    if (c497) {
      unsigned long __al498;
      unsigned long c499 = 1;
      __al498 = c499;
      unsigned long t500 = __n483;
      unsigned long c501 = 1;
      unsigned long b502 = t500 * c501;
      unsigned long t503 = __al498;
      void* r504 = operator_new_2(b502, t503);
      char* cast505 = (char*)r504;
      __retval485 = cast505;
      char* t506 = __retval485;
      return t506;
    }
  unsigned long t507 = __n483;
  unsigned long c508 = 1;
  unsigned long b509 = t507 * c508;
  void* r510 = operator_new(b509);
  char* cast511 = (char*)r510;
  __retval485 = cast511;
  char* t512 = __retval485;
  return t512;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v513, unsigned long v514) {
bb515:
  struct std__allocator_char_* this516;
  unsigned long __n517;
  char* __retval518;
  this516 = v513;
  __n517 = v514;
  struct std__allocator_char_* t519 = this516;
    _Bool r520 = std____is_constant_evaluated();
    if (r520) {
        unsigned long t521 = __n517;
        unsigned long c522 = 1;
        unsigned long ovr523;
        _Bool ovf524 = __builtin_mul_overflow(t521, c522, &ovr523);
        __n517 = ovr523;
        if (ovf524) {
          std____throw_bad_array_new_length();
        }
      unsigned long t525 = __n517;
      void* r526 = operator_new(t525);
      char* cast527 = (char*)r526;
      __retval518 = cast527;
      char* t528 = __retval518;
      return t528;
    }
  struct std____new_allocator_char_* base529 = (struct std____new_allocator_char_*)((char *)t519 + 0);
  unsigned long t530 = __n517;
  void* c531 = ((void*)0);
  char* r532 = std____new_allocator_char___allocate(base529, t530, c531);
  __retval518 = r532;
  char* t533 = __retval518;
  return t533;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v534, unsigned long v535) {
bb536:
  struct std__allocator_char_* __a537;
  unsigned long __n538;
  char* __retval539;
  __a537 = v534;
  __n538 = v535;
  struct std__allocator_char_* t540 = __a537;
  unsigned long t541 = __n538;
  char* r542 = std__allocator_char___allocate(t540, t541);
  __retval539 = r542;
  char* t543 = __retval539;
  return t543;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v544, unsigned long v545) {
bb546:
  struct std__allocator_char_* __a547;
  unsigned long __n548;
  char* __retval549;
  char* __p550;
  __a547 = v544;
  __n548 = v545;
  struct std__allocator_char_* t551 = __a547;
  unsigned long t552 = __n548;
  char* r553 = std__allocator_traits_std__allocator_char_____allocate(t551, t552);
  __p550 = r553;
  char* t554 = __p550;
  __retval549 = t554;
  char* t555 = __retval549;
  return t555;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v556) {
bb557:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this558;
  struct std__allocator_char_* __retval559;
  this558 = v556;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t560 = this558;
  struct std__allocator_char_* base561 = (struct std__allocator_char_*)((char *)&(t560->_M_dataplus) + 0);
  __retval559 = base561;
  struct std__allocator_char_* t562 = __retval559;
  return t562;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v563, unsigned long* v564, unsigned long v565) {
bb566:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this567;
  unsigned long* __capacity568;
  unsigned long __old_capacity569;
  char* __retval570;
  this567 = v563;
  __capacity568 = v564;
  __old_capacity569 = v565;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t571 = this567;
    unsigned long* t572 = __capacity568;
    unsigned long t573 = *t572;
    unsigned long r574 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t571);
    _Bool c575 = ((t573 > r574)) ? 1 : 0;
    if (c575) {
      char* cast576 = (char*)&(_str_6);
      std____throw_length_error(cast576);
    }
    unsigned long* t577 = __capacity568;
    unsigned long t578 = *t577;
    unsigned long t579 = __old_capacity569;
    _Bool c580 = ((t578 > t579)) ? 1 : 0;
    _Bool ternary581;
    if (c580) {
      unsigned long* t582 = __capacity568;
      unsigned long t583 = *t582;
      unsigned long c584 = 2;
      unsigned long t585 = __old_capacity569;
      unsigned long b586 = c584 * t585;
      _Bool c587 = ((t583 < b586)) ? 1 : 0;
      ternary581 = (_Bool)c587;
    } else {
      _Bool c588 = 0;
      ternary581 = (_Bool)c588;
    }
    if (ternary581) {
      unsigned long c589 = 2;
      unsigned long t590 = __old_capacity569;
      unsigned long b591 = c589 * t590;
      unsigned long* t592 = __capacity568;
      *t592 = b591;
        unsigned long* t593 = __capacity568;
        unsigned long t594 = *t593;
        unsigned long r595 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t571);
        _Bool c596 = ((t594 > r595)) ? 1 : 0;
        if (c596) {
          unsigned long r597 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t571);
          unsigned long* t598 = __capacity568;
          *t598 = r597;
        }
    }
  struct std__allocator_char_* r599 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t571);
  unsigned long* t600 = __capacity568;
  unsigned long t601 = *t600;
  unsigned long c602 = 1;
  unsigned long b603 = t601 + c602;
  char* r604 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r599, b603);
  __retval570 = r604;
  char* t605 = __retval570;
  return t605;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v606, unsigned long v607) {
bb608:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this609;
  unsigned long __capacity610;
  this609 = v606;
  __capacity610 = v607;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t611 = this609;
  unsigned long t612 = __capacity610;
  t611->field2._M_allocated_capacity = t612;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb613:
  _Bool __retval614;
    _Bool c615 = 0;
    __retval614 = c615;
    _Bool t616 = __retval614;
    return t616;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v617) {
bb618:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this619;
  this619 = v617;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t620 = this619;
    _Bool r621 = std__is_constant_evaluated();
    if (r621) {
        unsigned long __i622;
        unsigned long c623 = 0;
        __i622 = c623;
        while (1) {
          unsigned long t625 = __i622;
          unsigned long c626 = 15;
          _Bool c627 = ((t625 <= c626)) ? 1 : 0;
          if (!c627) break;
          char c628 = 0;
          unsigned long t629 = __i622;
          t620->field2._M_local_buf[t629] = c628;
        for_step624: ;
          unsigned long t630 = __i622;
          unsigned long u631 = t630 + 1;
          __i622 = u631;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v632, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v633) {
bb634:
  struct _Guard* this635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s636;
  this635 = v632;
  __s636 = v633;
  struct _Guard* t637 = this635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t638 = __s636;
  t637->_M_guarded = t638;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v639, char* v640) {
bb641:
  char* __location642;
  char* __args643;
  char* __retval644;
  void* __loc645;
  __location642 = v639;
  __args643 = v640;
  char* t646 = __location642;
  void* cast647 = (void*)t646;
  __loc645 = cast647;
    void* t648 = __loc645;
    char* cast649 = (char*)t648;
    char* t650 = __args643;
    char t651 = *t650;
    *cast649 = t651;
    __retval644 = cast649;
    char* t652 = __retval644;
    return t652;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v653, char* v654) {
bb655:
  char* __c1656;
  char* __c2657;
  __c1656 = v653;
  __c2657 = v654;
    _Bool r658 = std____is_constant_evaluated();
    if (r658) {
      char* t659 = __c1656;
      char* t660 = __c2657;
      char* r661 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t659, t660);
    } else {
      char* t662 = __c2657;
      char t663 = *t662;
      char* t664 = __c1656;
      *t664 = t663;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v665, char* v666, unsigned long v667) {
bb668:
  char* __s1669;
  char* __s2670;
  unsigned long __n671;
  char* __retval672;
  __s1669 = v665;
  __s2670 = v666;
  __n671 = v667;
    unsigned long t673 = __n671;
    unsigned long c674 = 0;
    _Bool c675 = ((t673 == c674)) ? 1 : 0;
    if (c675) {
      char* t676 = __s1669;
      __retval672 = t676;
      char* t677 = __retval672;
      return t677;
    }
    _Bool r678 = std____is_constant_evaluated();
    if (r678) {
        unsigned long __i679;
        unsigned long c680 = 0;
        __i679 = c680;
        while (1) {
          unsigned long t682 = __i679;
          unsigned long t683 = __n671;
          _Bool c684 = ((t682 < t683)) ? 1 : 0;
          if (!c684) break;
          char* t685 = __s1669;
          unsigned long t686 = __i679;
          char* ptr687 = &(t685)[t686];
          unsigned long t688 = __i679;
          char* t689 = __s2670;
          char* ptr690 = &(t689)[t688];
          char* r691 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr687, ptr690);
        for_step681: ;
          unsigned long t692 = __i679;
          unsigned long u693 = t692 + 1;
          __i679 = u693;
        }
      char* t694 = __s1669;
      __retval672 = t694;
      char* t695 = __retval672;
      return t695;
    }
  char* t696 = __s1669;
  void* cast697 = (void*)t696;
  char* t698 = __s2670;
  void* cast699 = (void*)t698;
  unsigned long t700 = __n671;
  unsigned long c701 = 1;
  unsigned long b702 = t700 * c701;
  void* r703 = memcpy(cast697, cast699, b702);
  char* t704 = __s1669;
  __retval672 = t704;
  char* t705 = __retval672;
  return t705;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v706, char* v707, unsigned long v708) {
bb709:
  char* __s1710;
  char* __s2711;
  unsigned long __n712;
  char* __retval713;
  __s1710 = v706;
  __s2711 = v707;
  __n712 = v708;
    unsigned long t714 = __n712;
    unsigned long c715 = 0;
    _Bool c716 = ((t714 == c715)) ? 1 : 0;
    if (c716) {
      char* t717 = __s1710;
      __retval713 = t717;
      char* t718 = __retval713;
      return t718;
    }
    _Bool r719 = std____is_constant_evaluated();
    if (r719) {
      char* t720 = __s1710;
      char* t721 = __s2711;
      unsigned long t722 = __n712;
      char* r723 = __gnu_cxx__char_traits_char___copy(t720, t721, t722);
      __retval713 = r723;
      char* t724 = __retval713;
      return t724;
    }
  char* t725 = __s1710;
  void* cast726 = (void*)t725;
  char* t727 = __s2711;
  void* cast728 = (void*)t727;
  unsigned long t729 = __n712;
  void* r730 = memcpy(cast726, cast728, t729);
  char* cast731 = (char*)r730;
  __retval713 = cast731;
  char* t732 = __retval713;
  return t732;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v733, char* v734, unsigned long v735) {
bb736:
  char* __d737;
  char* __s738;
  unsigned long __n739;
  __d737 = v733;
  __s738 = v734;
  __n739 = v735;
    unsigned long t740 = __n739;
    unsigned long c741 = 1;
    _Bool c742 = ((t740 == c741)) ? 1 : 0;
    if (c742) {
      char* t743 = __d737;
      char* t744 = __s738;
      std__char_traits_char___assign(t743, t744);
    } else {
      char* t745 = __d737;
      char* t746 = __s738;
      unsigned long t747 = __n739;
      char* r748 = std__char_traits_char___copy(t745, t746, t747);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v749) {
bb750:
  char* __it751;
  char* __retval752;
  __it751 = v749;
  char* t753 = __it751;
  __retval752 = t753;
  char* t754 = __retval752;
  return t754;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v755, char* v756, char* v757) {
bb758:
  char* __p759;
  char* __k1760;
  char* __k2761;
  __p759 = v755;
  __k1760 = v756;
  __k2761 = v757;
    char* t762 = __p759;
    char* t763 = __k1760;
    char* r764 = char_const__std____niter_base_char_const__(t763);
    char* t765 = __k2761;
    char* t766 = __k1760;
    long diff767 = t765 - t766;
    unsigned long cast768 = (unsigned long)diff767;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t762, r764, cast768);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v769) {
bb770:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this771;
  char* __retval772;
  this771 = v769;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t773 = this771;
  char* t774 = t773->_M_dataplus._M_p;
  __retval772 = t774;
  char* t775 = __retval772;
  return t775;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v776, unsigned long v777) {
bb778:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this779;
  unsigned long __length780;
  this779 = v776;
  __length780 = v777;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t781 = this779;
  unsigned long t782 = __length780;
  t781->_M_string_length = t782;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v783, unsigned long v784) {
bb785:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this786;
  unsigned long __n787;
  char ref_tmp0788;
  this786 = v783;
  __n787 = v784;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t789 = this786;
  unsigned long t790 = __n787;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t789, t790);
  unsigned long t791 = __n787;
  char* r792 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t789);
  char* ptr793 = &(r792)[t791];
  char c794 = 0;
  ref_tmp0788 = c794;
  std__char_traits_char___assign(ptr793, &ref_tmp0788);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v795) {
bb796:
  struct _Guard* this797;
  this797 = v795;
  struct _Guard* t798 = this797;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t799 = t798->_M_guarded;
    _Bool cast800 = (_Bool)t799;
    if (cast800) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t801 = t798->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t801);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v802, char* v803, char* v804, struct std__forward_iterator_tag v805) {
bb806:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this807;
  char* __beg808;
  char* __end809;
  struct std__forward_iterator_tag unnamed810;
  unsigned long __dnew811;
  struct _Guard __guard812;
  this807 = v802;
  __beg808 = v803;
  __end809 = v804;
  unnamed810 = v805;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t813 = this807;
  char* t814 = __beg808;
  char* t815 = __end809;
  long r816 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t814, t815);
  unsigned long cast817 = (unsigned long)r816;
  __dnew811 = cast817;
    unsigned long t818 = __dnew811;
    unsigned long c819 = 15;
    _Bool c820 = ((t818 > c819)) ? 1 : 0;
    if (c820) {
      unsigned long c821 = 0;
      char* r822 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t813, &__dnew811, c821);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t813, r822);
      unsigned long t823 = __dnew811;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t813, t823);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t813);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard812, t813);
    char* r824 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t813);
    char* t825 = __beg808;
    char* t826 = __end809;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r824, t825, t826);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c827 = ((void*)0);
    __guard812._M_guarded = c827;
    unsigned long t828 = __dnew811;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t813, t828);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard812);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v829) {
bb830:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this831;
  this831 = v829;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t832 = this831;
  {
    struct std__allocator_char_* base833 = (struct std__allocator_char_*)((char *)t832 + 0);
    std__allocator_char____allocator(base833);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v834, struct std____new_allocator_char_* v835) {
bb836:
  struct std____new_allocator_char_* this837;
  struct std____new_allocator_char_* unnamed838;
  this837 = v834;
  unnamed838 = v835;
  struct std____new_allocator_char_* t839 = this837;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v840, struct std__allocator_char_* v841) {
bb842:
  struct std__allocator_char_* this843;
  struct std__allocator_char_* __a844;
  this843 = v840;
  __a844 = v841;
  struct std__allocator_char_* t845 = this843;
  struct std____new_allocator_char_* base846 = (struct std____new_allocator_char_*)((char *)t845 + 0);
  struct std__allocator_char_* t847 = __a844;
  struct std____new_allocator_char_* base848 = (struct std____new_allocator_char_*)((char *)t847 + 0);
  std____new_allocator_char_____new_allocator(base846, base848);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v849) {
bb850:
  char* __r851;
  char* __retval852;
  __r851 = v849;
  char* t853 = __r851;
  __retval852 = t853;
  char* t854 = __retval852;
  return t854;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v855) {
bb856:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this857;
  char* __retval858;
  this857 = v855;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t859 = this857;
  char* cast860 = (char*)&(t859->field2._M_local_buf);
  char* r861 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast860);
  __retval858 = r861;
  char* t862 = __retval858;
  return t862;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v863) {
bb864:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this865;
  _Bool __retval866;
  this865 = v863;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t867 = this865;
    char* r868 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t867);
    char* r869 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t867);
    _Bool c870 = ((r868 == r869)) ? 1 : 0;
    if (c870) {
        unsigned long t871 = t867->_M_string_length;
        unsigned long c872 = 15;
        _Bool c873 = ((t871 > c872)) ? 1 : 0;
        if (c873) {
          __builtin_unreachable();
        }
      _Bool c874 = 1;
      __retval866 = c874;
      _Bool t875 = __retval866;
      return t875;
    }
  _Bool c876 = 0;
  __retval866 = c876;
  _Bool t877 = __retval866;
  return t877;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v878, char* v879, unsigned long v880) {
bb881:
  struct std____new_allocator_char_* this882;
  char* __p883;
  unsigned long __n884;
  this882 = v878;
  __p883 = v879;
  __n884 = v880;
  struct std____new_allocator_char_* t885 = this882;
    unsigned long c886 = 1;
    unsigned long c887 = 16;
    _Bool c888 = ((c886 > c887)) ? 1 : 0;
    if (c888) {
      char* t889 = __p883;
      void* cast890 = (void*)t889;
      unsigned long t891 = __n884;
      unsigned long c892 = 1;
      unsigned long b893 = t891 * c892;
      unsigned long c894 = 1;
      operator_delete_3(cast890, b893, c894);
      return;
    }
  char* t895 = __p883;
  void* cast896 = (void*)t895;
  unsigned long t897 = __n884;
  unsigned long c898 = 1;
  unsigned long b899 = t897 * c898;
  operator_delete_2(cast896, b899);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v900, char* v901, unsigned long v902) {
bb903:
  struct std__allocator_char_* this904;
  char* __p905;
  unsigned long __n906;
  this904 = v900;
  __p905 = v901;
  __n906 = v902;
  struct std__allocator_char_* t907 = this904;
    _Bool r908 = std____is_constant_evaluated();
    if (r908) {
      char* t909 = __p905;
      void* cast910 = (void*)t909;
      operator_delete(cast910);
      return;
    }
  struct std____new_allocator_char_* base911 = (struct std____new_allocator_char_*)((char *)t907 + 0);
  char* t912 = __p905;
  unsigned long t913 = __n906;
  std____new_allocator_char___deallocate(base911, t912, t913);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v914, char* v915, unsigned long v916) {
bb917:
  struct std__allocator_char_* __a918;
  char* __p919;
  unsigned long __n920;
  __a918 = v914;
  __p919 = v915;
  __n920 = v916;
  struct std__allocator_char_* t921 = __a918;
  char* t922 = __p919;
  unsigned long t923 = __n920;
  std__allocator_char___deallocate(t921, t922, t923);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v924, unsigned long v925) {
bb926:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this927;
  unsigned long __size928;
  this927 = v924;
  __size928 = v925;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t929 = this927;
  struct std__allocator_char_* r930 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t929);
  char* r931 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t929);
  unsigned long t932 = __size928;
  unsigned long c933 = 1;
  unsigned long b934 = t932 + c933;
  std__allocator_traits_std__allocator_char_____deallocate(r930, r931, b934);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v935) {
bb936:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this937;
  this937 = v935;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t938 = this937;
    _Bool r939 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t938);
    _Bool u940 = !r939;
    if (u940) {
      unsigned long t941 = t938->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t938, t941);
    }
  return;
}

