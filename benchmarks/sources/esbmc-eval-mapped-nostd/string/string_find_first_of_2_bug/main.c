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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "look for non-a";
char _str_1[5] = "-_=+";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[35] = "First non-alphabetic character is ";
char _str_3[14] = " at position ";
char _str_4[18] = "str[found] != '-'";
char _str_5[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_first_of_2_bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[12] = "found != 12";
char _str_7[50] = "basic_string: construction from null is not valid";
char _str_8[24] = "basic_string::_M_create";
char _str_9[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_10[16] = "__pos <= size()";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
        char* cast20 = (char*)&(_str_7);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v100, char* v101, unsigned long v102, unsigned long v103) {
bb104:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this105;
  char* __s106;
  unsigned long __pos107;
  unsigned long __n108;
  unsigned long __retval109;
  this105 = v100;
  __s106 = v101;
  __pos107 = v102;
  __n108 = v103;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t110 = this105;
    while (1) {
      unsigned long t112 = __n108;
      _Bool cast113 = (_Bool)t112;
      _Bool ternary114;
      if (cast113) {
        unsigned long t115 = __pos107;
        unsigned long r116 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t110);
        _Bool c117 = ((t115 < r116)) ? 1 : 0;
        ternary114 = (_Bool)c117;
      } else {
        _Bool c118 = 0;
        ternary114 = (_Bool)c118;
      }
      if (!ternary114) break;
        char* __p119;
        char* t120 = __s106;
        unsigned long t121 = __n108;
        unsigned long t122 = __pos107;
        char* r123 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t110);
        char* ptr124 = &(r123)[t122];
        char* r125 = std__char_traits_char___find(t120, t121, ptr124);
        __p119 = r125;
          char* t126 = __p119;
          _Bool cast127 = (_Bool)t126;
          if (cast127) {
            unsigned long t128 = __pos107;
            __retval109 = t128;
            unsigned long t129 = __retval109;
            unsigned long ret_val130 = t129;
            return ret_val130;
          }
    for_step111: ;
      unsigned long t131 = __pos107;
      unsigned long u132 = t131 + 1;
      __pos107 = u132;
    }
  unsigned long t133 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval109 = t133;
  unsigned long t134 = __retval109;
  return t134;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v135, char* v136, unsigned long v137) {
bb138:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this139;
  char* __s140;
  unsigned long __pos141;
  unsigned long __retval142;
  this139 = v135;
  __s140 = v136;
  __pos141 = v137;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t143 = this139;
  char* t144 = __s140;
  unsigned long t145 = __pos141;
  char* t146 = __s140;
  unsigned long r147 = std__char_traits_char___length(t146);
  unsigned long r148 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(t143, t144, t145, r147);
  __retval142 = r148;
  unsigned long t149 = __retval142;
  return t149;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v150) {
bb151:
  struct std__ios_base* this152;
  long __retval153;
  this152 = v150;
  struct std__ios_base* t154 = this152;
  long t155 = t154->_M_width;
  __retval153 = t155;
  long t156 = __retval153;
  return t156;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v157, char v158) {
bb159:
  struct std__basic_ostream_char__std__char_traits_char__* __out160;
  char __c161;
  struct std__basic_ostream_char__std__char_traits_char__* __retval162;
  __out160 = v157;
  __c161 = v158;
    struct std__basic_ostream_char__std__char_traits_char__* t163 = __out160;
    void** v164 = (void**)t163;
    void* v165 = *((void**)v164);
    unsigned char* cast166 = (unsigned char*)v165;
    long c167 = -24;
    unsigned char* ptr168 = &(cast166)[c167];
    long* cast169 = (long*)ptr168;
    long t170 = *cast169;
    unsigned char* cast171 = (unsigned char*)t163;
    unsigned char* ptr172 = &(cast171)[t170];
    struct std__basic_ostream_char__std__char_traits_char__* cast173 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr172;
    struct std__ios_base* cast174 = (struct std__ios_base*)cast173;
    long r175 = std__ios_base__width___const(cast174);
    long c176 = 0;
    _Bool c177 = ((r175 != c176)) ? 1 : 0;
    if (c177) {
      struct std__basic_ostream_char__std__char_traits_char__* t178 = __out160;
      long c179 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r180 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t178, &__c161, c179);
      __retval162 = r180;
      struct std__basic_ostream_char__std__char_traits_char__* t181 = __retval162;
      return t181;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t182 = __out160;
  char t183 = __c161;
  struct std__basic_ostream_char__std__char_traits_char__* r184 = std__ostream__put(t182, t183);
  struct std__basic_ostream_char__std__char_traits_char__* t185 = __out160;
  __retval162 = t185;
  struct std__basic_ostream_char__std__char_traits_char__* t186 = __retval162;
  return t186;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v187, int v188) {
bb189:
  int __a190;
  int __b191;
  int __retval192;
  __a190 = v187;
  __b191 = v188;
  int t193 = __a190;
  int t194 = __b191;
  int b195 = t193 | t194;
  __retval192 = b195;
  int t196 = __retval192;
  return t196;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v197) {
bb198:
  struct std__basic_ios_char__std__char_traits_char__* this199;
  int __retval200;
  this199 = v197;
  struct std__basic_ios_char__std__char_traits_char__* t201 = this199;
  struct std__ios_base* base202 = (struct std__ios_base*)((char *)t201 + 0);
  int t203 = base202->_M_streambuf_state;
  __retval200 = t203;
  int t204 = __retval200;
  return t204;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v205, int v206) {
bb207:
  struct std__basic_ios_char__std__char_traits_char__* this208;
  int __state209;
  this208 = v205;
  __state209 = v206;
  struct std__basic_ios_char__std__char_traits_char__* t210 = this208;
  int r211 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t210);
  int t212 = __state209;
  int r213 = std__operator_(r211, t212);
  std__basic_ios_char__std__char_traits_char_____clear(t210, r213);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v214, char* v215) {
bb216:
  struct std__basic_ostream_char__std__char_traits_char__* __out217;
  char* __s218;
  struct std__basic_ostream_char__std__char_traits_char__* __retval219;
  __out217 = v214;
  __s218 = v215;
    char* t220 = __s218;
    _Bool cast221 = (_Bool)t220;
    _Bool u222 = !cast221;
    if (u222) {
      struct std__basic_ostream_char__std__char_traits_char__* t223 = __out217;
      void** v224 = (void**)t223;
      void* v225 = *((void**)v224);
      unsigned char* cast226 = (unsigned char*)v225;
      long c227 = -24;
      unsigned char* ptr228 = &(cast226)[c227];
      long* cast229 = (long*)ptr228;
      long t230 = *cast229;
      unsigned char* cast231 = (unsigned char*)t223;
      unsigned char* ptr232 = &(cast231)[t230];
      struct std__basic_ostream_char__std__char_traits_char__* cast233 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr232;
      struct std__basic_ios_char__std__char_traits_char__* cast234 = (struct std__basic_ios_char__std__char_traits_char__*)cast233;
      int t235 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast234, t235);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t236 = __out217;
      char* t237 = __s218;
      char* t238 = __s218;
      unsigned long r239 = std__char_traits_char___length(t238);
      long cast240 = (long)r239;
      struct std__basic_ostream_char__std__char_traits_char__* r241 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t236, t237, cast240);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t242 = __out217;
  __retval219 = t242;
  struct std__basic_ostream_char__std__char_traits_char__* t243 = __retval219;
  return t243;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v244, unsigned long v245) {
bb246:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this247;
  unsigned long __pos248;
  char* __retval249;
  this247 = v244;
  __pos248 = v245;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t250 = this247;
    do {
          unsigned long t251 = __pos248;
          unsigned long r252 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t250);
          _Bool c253 = ((t251 <= r252)) ? 1 : 0;
          _Bool u254 = !c253;
          if (u254) {
            char* cast255 = (char*)&(_str_9);
            int c256 = 1369;
            char* cast257 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm);
            char* cast258 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast255, c256, cast257, cast258);
          }
      _Bool c259 = 0;
      if (!c259) break;
    } while (1);
  unsigned long t260 = __pos248;
  char* r261 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t250);
  char* ptr262 = &(r261)[t260];
  __retval249 = ptr262;
  char* t263 = __retval249;
  return t263;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v264, void* v265) {
bb266:
  struct std__basic_ostream_char__std__char_traits_char__* this267;
  void* __pf268;
  struct std__basic_ostream_char__std__char_traits_char__* __retval269;
  this267 = v264;
  __pf268 = v265;
  struct std__basic_ostream_char__std__char_traits_char__* t270 = this267;
  void* t271 = __pf268;
  struct std__basic_ostream_char__std__char_traits_char__* r272 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t271)(t270);
  __retval269 = r272;
  struct std__basic_ostream_char__std__char_traits_char__* t273 = __retval269;
  return t273;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v274) {
bb275:
  struct std__basic_ostream_char__std__char_traits_char__* __os276;
  struct std__basic_ostream_char__std__char_traits_char__* __retval277;
  __os276 = v274;
  struct std__basic_ostream_char__std__char_traits_char__* t278 = __os276;
  struct std__basic_ostream_char__std__char_traits_char__* r279 = std__ostream__flush(t278);
  __retval277 = r279;
  struct std__basic_ostream_char__std__char_traits_char__* t280 = __retval277;
  return t280;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v281) {
bb282:
  struct std__ctype_char_* __f283;
  struct std__ctype_char_* __retval284;
  __f283 = v281;
    struct std__ctype_char_* t285 = __f283;
    _Bool cast286 = (_Bool)t285;
    _Bool u287 = !cast286;
    if (u287) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t288 = __f283;
  __retval284 = t288;
  struct std__ctype_char_* t289 = __retval284;
  return t289;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v290, char v291) {
bb292:
  struct std__ctype_char_* this293;
  char __c294;
  char __retval295;
  this293 = v290;
  __c294 = v291;
  struct std__ctype_char_* t296 = this293;
    char t297 = t296->_M_widen_ok;
    _Bool cast298 = (_Bool)t297;
    if (cast298) {
      char t299 = __c294;
      unsigned char cast300 = (unsigned char)t299;
      unsigned long cast301 = (unsigned long)cast300;
      char t302 = t296->_M_widen[cast301];
      __retval295 = t302;
      char t303 = __retval295;
      return t303;
    }
  std__ctype_char____M_widen_init___const(t296);
  char t304 = __c294;
  void** v305 = (void**)t296;
  void* v306 = *((void**)v305);
  char vcall309 = (char)__VERIFIER_virtual_call_char_char(t296, 6, t304);
  __retval295 = vcall309;
  char t310 = __retval295;
  return t310;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v311, char v312) {
bb313:
  struct std__basic_ios_char__std__char_traits_char__* this314;
  char __c315;
  char __retval316;
  this314 = v311;
  __c315 = v312;
  struct std__basic_ios_char__std__char_traits_char__* t317 = this314;
  struct std__ctype_char_* t318 = t317->_M_ctype;
  struct std__ctype_char_* r319 = std__ctype_char__const__std____check_facet_std__ctype_char___(t318);
  char t320 = __c315;
  char r321 = std__ctype_char___widen_char__const(r319, t320);
  __retval316 = r321;
  char t322 = __retval316;
  return t322;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v323) {
bb324:
  struct std__basic_ostream_char__std__char_traits_char__* __os325;
  struct std__basic_ostream_char__std__char_traits_char__* __retval326;
  __os325 = v323;
  struct std__basic_ostream_char__std__char_traits_char__* t327 = __os325;
  struct std__basic_ostream_char__std__char_traits_char__* t328 = __os325;
  void** v329 = (void**)t328;
  void* v330 = *((void**)v329);
  unsigned char* cast331 = (unsigned char*)v330;
  long c332 = -24;
  unsigned char* ptr333 = &(cast331)[c332];
  long* cast334 = (long*)ptr333;
  long t335 = *cast334;
  unsigned char* cast336 = (unsigned char*)t328;
  unsigned char* ptr337 = &(cast336)[t335];
  struct std__basic_ostream_char__std__char_traits_char__* cast338 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr337;
  struct std__basic_ios_char__std__char_traits_char__* cast339 = (struct std__basic_ios_char__std__char_traits_char__*)cast338;
  char c340 = 10;
  char r341 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast339, c340);
  struct std__basic_ostream_char__std__char_traits_char__* r342 = std__ostream__put(t327, r341);
  struct std__basic_ostream_char__std__char_traits_char__* r343 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r342);
  __retval326 = r343;
  struct std__basic_ostream_char__std__char_traits_char__* t344 = __retval326;
  return t344;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v345) {
bb346:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this347;
  this347 = v345;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t348 = this347;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t348);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t348->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb349:
  int __retval350;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str351;
  struct std__allocator_char_ ref_tmp0352;
  unsigned long found353;
  int c354 = 0;
  __retval350 = c354;
  char* cast355 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0352);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str351, cast355, &ref_tmp0352);
  {
    std__allocator_char____allocator(&ref_tmp0352);
  }
    char* cast356 = (char*)&(_str_1);
    unsigned long c357 = 0;
    unsigned long r358 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(&str351, cast356, c357);
    found353 = r358;
      unsigned long t359 = found353;
      unsigned long t360 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      _Bool c361 = ((t359 != t360)) ? 1 : 0;
      if (c361) {
        char* cast362 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r363 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast362);
        unsigned long t364 = found353;
        char* r365 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str351, t364);
        char t366 = *r365;
        struct std__basic_ostream_char__std__char_traits_char__* r367 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r363, t366);
        char* cast368 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r369 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast368);
        unsigned long t370 = found353;
        int cast371 = (int)t370;
        struct std__basic_ostream_char__std__char_traits_char__* r372 = std__ostream__operator__(r369, cast371);
        struct std__basic_ostream_char__std__char_traits_char__* r373 = std__ostream__operator___std__ostream_____(r372, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    unsigned long t374 = found353;
    char* r375 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str351, t374);
    char t376 = *r375;
    int cast377 = (int)t376;
    int c378 = 45;
    _Bool c379 = ((cast377 != c378)) ? 1 : 0;
    if (c379) {
    } else {
      char* cast380 = (char*)&(_str_4);
      char* c381 = _str_5;
      unsigned int c382 = 27;
      char* cast383 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast380, c381, c382, cast383);
    }
    unsigned long t384 = found353;
    unsigned long c385 = 12;
    _Bool c386 = ((t384 != c385)) ? 1 : 0;
    if (c386) {
    } else {
      char* cast387 = (char*)&(_str_6);
      char* c388 = _str_5;
      unsigned int c389 = 28;
      char* cast390 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast387, c388, c389, cast390);
    }
    int c391 = 0;
    __retval350 = c391;
    int t392 = __retval350;
    int ret_val393 = t392;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str351);
    }
    return ret_val393;
  int t394 = __retval350;
  return t394;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v395) {
bb396:
  struct std____new_allocator_char_* this397;
  this397 = v395;
  struct std____new_allocator_char_* t398 = this397;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v399) {
bb400:
  char* __r401;
  char* __retval402;
  __r401 = v399;
  char* t403 = __r401;
  __retval402 = t403;
  char* t404 = __retval402;
  return t404;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v405) {
bb406:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this407;
  char* __retval408;
  this407 = v405;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t409 = this407;
  char* cast410 = (char*)&(t409->field2._M_local_buf);
  char* r411 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast410);
  __retval408 = r411;
  char* t412 = __retval408;
  return t412;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v413, char* v414, struct std__allocator_char_* v415) {
bb416:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this417;
  char* __dat418;
  struct std__allocator_char_* __a419;
  this417 = v413;
  __dat418 = v414;
  __a419 = v415;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t420 = this417;
  struct std__allocator_char_* base421 = (struct std__allocator_char_*)((char *)t420 + 0);
  struct std__allocator_char_* t422 = __a419;
  std__allocator_char___allocator(base421, t422);
    char* t423 = __dat418;
    t420->_M_p = t423;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb424:
  _Bool __retval425;
    _Bool c426 = 0;
    __retval425 = c426;
    _Bool t427 = __retval425;
    return t427;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v428, char* v429) {
bb430:
  char* __c1431;
  char* __c2432;
  _Bool __retval433;
  __c1431 = v428;
  __c2432 = v429;
  char* t434 = __c1431;
  char t435 = *t434;
  int cast436 = (int)t435;
  char* t437 = __c2432;
  char t438 = *t437;
  int cast439 = (int)t438;
  _Bool c440 = ((cast436 == cast439)) ? 1 : 0;
  __retval433 = c440;
  _Bool t441 = __retval433;
  return t441;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v442) {
bb443:
  char* __p444;
  unsigned long __retval445;
  unsigned long __i446;
  __p444 = v442;
  unsigned long c447 = 0;
  __i446 = c447;
    char ref_tmp0448;
    while (1) {
      unsigned long t449 = __i446;
      char* t450 = __p444;
      char* ptr451 = &(t450)[t449];
      char c452 = 0;
      ref_tmp0448 = c452;
      _Bool r453 = __gnu_cxx__char_traits_char___eq(ptr451, &ref_tmp0448);
      _Bool u454 = !r453;
      if (!u454) break;
      unsigned long t455 = __i446;
      unsigned long u456 = t455 + 1;
      __i446 = u456;
    }
  unsigned long t457 = __i446;
  __retval445 = t457;
  unsigned long t458 = __retval445;
  return t458;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v459) {
bb460:
  char* __s461;
  unsigned long __retval462;
  __s461 = v459;
    _Bool r463 = std____is_constant_evaluated();
    if (r463) {
      char* t464 = __s461;
      unsigned long r465 = __gnu_cxx__char_traits_char___length(t464);
      __retval462 = r465;
      unsigned long t466 = __retval462;
      return t466;
    }
  char* t467 = __s461;
  unsigned long r468 = strlen(t467);
  __retval462 = r468;
  unsigned long t469 = __retval462;
  return t469;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v470, char* v471, struct std__random_access_iterator_tag v472) {
bb473:
  char* __first474;
  char* __last475;
  struct std__random_access_iterator_tag unnamed476;
  long __retval477;
  __first474 = v470;
  __last475 = v471;
  unnamed476 = v472;
  char* t478 = __last475;
  char* t479 = __first474;
  long diff480 = t478 - t479;
  __retval477 = diff480;
  long t481 = __retval477;
  return t481;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v482) {
bb483:
  char** unnamed484;
  struct std__random_access_iterator_tag __retval485;
  unnamed484 = v482;
  struct std__random_access_iterator_tag t486 = __retval485;
  return t486;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v487, char* v488) {
bb489:
  char* __first490;
  char* __last491;
  long __retval492;
  struct std__random_access_iterator_tag agg_tmp0493;
  __first490 = v487;
  __last491 = v488;
  char* t494 = __first490;
  char* t495 = __last491;
  struct std__random_access_iterator_tag r496 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first490);
  agg_tmp0493 = r496;
  struct std__random_access_iterator_tag t497 = agg_tmp0493;
  long r498 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t494, t495, t497);
  __retval492 = r498;
  long t499 = __retval492;
  return t499;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v500, char* v501) {
bb502:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this503;
  char* __p504;
  this503 = v500;
  __p504 = v501;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t505 = this503;
  char* t506 = __p504;
  t505->_M_dataplus._M_p = t506;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v507) {
bb508:
  struct std__allocator_char_* __a509;
  unsigned long __retval510;
  __a509 = v507;
  unsigned long c511 = -1;
  unsigned long c512 = 1;
  unsigned long b513 = c511 / c512;
  __retval510 = b513;
  unsigned long t514 = __retval510;
  return t514;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v515) {
bb516:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this517;
  struct std__allocator_char_* __retval518;
  this517 = v515;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t519 = this517;
  struct std__allocator_char_* base520 = (struct std__allocator_char_*)((char *)&(t519->_M_dataplus) + 0);
  __retval518 = base520;
  struct std__allocator_char_* t521 = __retval518;
  return t521;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v522, unsigned long* v523) {
bb524:
  unsigned long* __a525;
  unsigned long* __b526;
  unsigned long* __retval527;
  __a525 = v522;
  __b526 = v523;
    unsigned long* t528 = __b526;
    unsigned long t529 = *t528;
    unsigned long* t530 = __a525;
    unsigned long t531 = *t530;
    _Bool c532 = ((t529 < t531)) ? 1 : 0;
    if (c532) {
      unsigned long* t533 = __b526;
      __retval527 = t533;
      unsigned long* t534 = __retval527;
      return t534;
    }
  unsigned long* t535 = __a525;
  __retval527 = t535;
  unsigned long* t536 = __retval527;
  return t536;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v537) {
bb538:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this539;
  unsigned long __retval540;
  unsigned long __diffmax541;
  unsigned long __allocmax542;
  this539 = v537;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t543 = this539;
  unsigned long c544 = 9223372036854775807;
  __diffmax541 = c544;
  struct std__allocator_char_* r545 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t543);
  unsigned long r546 = std__allocator_traits_std__allocator_char_____max_size(r545);
  __allocmax542 = r546;
  unsigned long* r547 = unsigned_long_const__std__min_unsigned_long_(&__diffmax541, &__allocmax542);
  unsigned long t548 = *r547;
  unsigned long c549 = 1;
  unsigned long b550 = t548 - c549;
  __retval540 = b550;
  unsigned long t551 = __retval540;
  return t551;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v552) {
bb553:
  struct std____new_allocator_char_* this554;
  unsigned long __retval555;
  this554 = v552;
  struct std____new_allocator_char_* t556 = this554;
  unsigned long c557 = 9223372036854775807;
  unsigned long c558 = 1;
  unsigned long b559 = c557 / c558;
  __retval555 = b559;
  unsigned long t560 = __retval555;
  return t560;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v561, unsigned long v562, void* v563) {
bb564:
  struct std____new_allocator_char_* this565;
  unsigned long __n566;
  void* unnamed567;
  char* __retval568;
  this565 = v561;
  __n566 = v562;
  unnamed567 = v563;
  struct std____new_allocator_char_* t569 = this565;
    unsigned long t570 = __n566;
    unsigned long r571 = std____new_allocator_char____M_max_size___const(t569);
    _Bool c572 = ((t570 > r571)) ? 1 : 0;
    if (c572) {
        unsigned long t573 = __n566;
        unsigned long c574 = -1;
        unsigned long c575 = 1;
        unsigned long b576 = c574 / c575;
        _Bool c577 = ((t573 > b576)) ? 1 : 0;
        if (c577) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c578 = 1;
    unsigned long c579 = 16;
    _Bool c580 = ((c578 > c579)) ? 1 : 0;
    if (c580) {
      unsigned long __al581;
      unsigned long c582 = 1;
      __al581 = c582;
      unsigned long t583 = __n566;
      unsigned long c584 = 1;
      unsigned long b585 = t583 * c584;
      unsigned long t586 = __al581;
      void* r587 = operator_new_2(b585, t586);
      char* cast588 = (char*)r587;
      __retval568 = cast588;
      char* t589 = __retval568;
      return t589;
    }
  unsigned long t590 = __n566;
  unsigned long c591 = 1;
  unsigned long b592 = t590 * c591;
  void* r593 = operator_new(b592);
  char* cast594 = (char*)r593;
  __retval568 = cast594;
  char* t595 = __retval568;
  return t595;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v596, unsigned long v597) {
bb598:
  struct std__allocator_char_* this599;
  unsigned long __n600;
  char* __retval601;
  this599 = v596;
  __n600 = v597;
  struct std__allocator_char_* t602 = this599;
    _Bool r603 = std____is_constant_evaluated();
    if (r603) {
        unsigned long t604 = __n600;
        unsigned long c605 = 1;
        unsigned long ovr606;
        _Bool ovf607 = __builtin_mul_overflow(t604, c605, &ovr606);
        __n600 = ovr606;
        if (ovf607) {
          std____throw_bad_array_new_length();
        }
      unsigned long t608 = __n600;
      void* r609 = operator_new(t608);
      char* cast610 = (char*)r609;
      __retval601 = cast610;
      char* t611 = __retval601;
      return t611;
    }
  struct std____new_allocator_char_* base612 = (struct std____new_allocator_char_*)((char *)t602 + 0);
  unsigned long t613 = __n600;
  void* c614 = ((void*)0);
  char* r615 = std____new_allocator_char___allocate(base612, t613, c614);
  __retval601 = r615;
  char* t616 = __retval601;
  return t616;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v617, unsigned long v618) {
bb619:
  struct std__allocator_char_* __a620;
  unsigned long __n621;
  char* __retval622;
  __a620 = v617;
  __n621 = v618;
  struct std__allocator_char_* t623 = __a620;
  unsigned long t624 = __n621;
  char* r625 = std__allocator_char___allocate(t623, t624);
  __retval622 = r625;
  char* t626 = __retval622;
  return t626;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v627, unsigned long v628) {
bb629:
  struct std__allocator_char_* __a630;
  unsigned long __n631;
  char* __retval632;
  char* __p633;
  __a630 = v627;
  __n631 = v628;
  struct std__allocator_char_* t634 = __a630;
  unsigned long t635 = __n631;
  char* r636 = std__allocator_traits_std__allocator_char_____allocate(t634, t635);
  __p633 = r636;
  char* t637 = __p633;
  __retval632 = t637;
  char* t638 = __retval632;
  return t638;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v639) {
bb640:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this641;
  struct std__allocator_char_* __retval642;
  this641 = v639;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t643 = this641;
  struct std__allocator_char_* base644 = (struct std__allocator_char_*)((char *)&(t643->_M_dataplus) + 0);
  __retval642 = base644;
  struct std__allocator_char_* t645 = __retval642;
  return t645;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v646, unsigned long* v647, unsigned long v648) {
bb649:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this650;
  unsigned long* __capacity651;
  unsigned long __old_capacity652;
  char* __retval653;
  this650 = v646;
  __capacity651 = v647;
  __old_capacity652 = v648;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t654 = this650;
    unsigned long* t655 = __capacity651;
    unsigned long t656 = *t655;
    unsigned long r657 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t654);
    _Bool c658 = ((t656 > r657)) ? 1 : 0;
    if (c658) {
      char* cast659 = (char*)&(_str_8);
      std____throw_length_error(cast659);
    }
    unsigned long* t660 = __capacity651;
    unsigned long t661 = *t660;
    unsigned long t662 = __old_capacity652;
    _Bool c663 = ((t661 > t662)) ? 1 : 0;
    _Bool ternary664;
    if (c663) {
      unsigned long* t665 = __capacity651;
      unsigned long t666 = *t665;
      unsigned long c667 = 2;
      unsigned long t668 = __old_capacity652;
      unsigned long b669 = c667 * t668;
      _Bool c670 = ((t666 < b669)) ? 1 : 0;
      ternary664 = (_Bool)c670;
    } else {
      _Bool c671 = 0;
      ternary664 = (_Bool)c671;
    }
    if (ternary664) {
      unsigned long c672 = 2;
      unsigned long t673 = __old_capacity652;
      unsigned long b674 = c672 * t673;
      unsigned long* t675 = __capacity651;
      *t675 = b674;
        unsigned long* t676 = __capacity651;
        unsigned long t677 = *t676;
        unsigned long r678 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t654);
        _Bool c679 = ((t677 > r678)) ? 1 : 0;
        if (c679) {
          unsigned long r680 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t654);
          unsigned long* t681 = __capacity651;
          *t681 = r680;
        }
    }
  struct std__allocator_char_* r682 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t654);
  unsigned long* t683 = __capacity651;
  unsigned long t684 = *t683;
  unsigned long c685 = 1;
  unsigned long b686 = t684 + c685;
  char* r687 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r682, b686);
  __retval653 = r687;
  char* t688 = __retval653;
  return t688;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v689, unsigned long v690) {
bb691:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this692;
  unsigned long __capacity693;
  this692 = v689;
  __capacity693 = v690;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t694 = this692;
  unsigned long t695 = __capacity693;
  t694->field2._M_allocated_capacity = t695;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb696:
  _Bool __retval697;
    _Bool c698 = 0;
    __retval697 = c698;
    _Bool t699 = __retval697;
    return t699;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v700) {
bb701:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this702;
  this702 = v700;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t703 = this702;
    _Bool r704 = std__is_constant_evaluated();
    if (r704) {
        unsigned long __i705;
        unsigned long c706 = 0;
        __i705 = c706;
        while (1) {
          unsigned long t708 = __i705;
          unsigned long c709 = 15;
          _Bool c710 = ((t708 <= c709)) ? 1 : 0;
          if (!c710) break;
          char c711 = 0;
          unsigned long t712 = __i705;
          t703->field2._M_local_buf[t712] = c711;
        for_step707: ;
          unsigned long t713 = __i705;
          unsigned long u714 = t713 + 1;
          __i705 = u714;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v715, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v716) {
bb717:
  struct _Guard* this718;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s719;
  this718 = v715;
  __s719 = v716;
  struct _Guard* t720 = this718;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t721 = __s719;
  t720->_M_guarded = t721;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v722, char* v723) {
bb724:
  char* __location725;
  char* __args726;
  char* __retval727;
  void* __loc728;
  __location725 = v722;
  __args726 = v723;
  char* t729 = __location725;
  void* cast730 = (void*)t729;
  __loc728 = cast730;
    void* t731 = __loc728;
    char* cast732 = (char*)t731;
    char* t733 = __args726;
    char t734 = *t733;
    *cast732 = t734;
    __retval727 = cast732;
    char* t735 = __retval727;
    return t735;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v736, char* v737) {
bb738:
  char* __c1739;
  char* __c2740;
  __c1739 = v736;
  __c2740 = v737;
    _Bool r741 = std____is_constant_evaluated();
    if (r741) {
      char* t742 = __c1739;
      char* t743 = __c2740;
      char* r744 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t742, t743);
    } else {
      char* t745 = __c2740;
      char t746 = *t745;
      char* t747 = __c1739;
      *t747 = t746;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v748, char* v749, unsigned long v750) {
bb751:
  char* __s1752;
  char* __s2753;
  unsigned long __n754;
  char* __retval755;
  __s1752 = v748;
  __s2753 = v749;
  __n754 = v750;
    unsigned long t756 = __n754;
    unsigned long c757 = 0;
    _Bool c758 = ((t756 == c757)) ? 1 : 0;
    if (c758) {
      char* t759 = __s1752;
      __retval755 = t759;
      char* t760 = __retval755;
      return t760;
    }
    _Bool r761 = std____is_constant_evaluated();
    if (r761) {
        unsigned long __i762;
        unsigned long c763 = 0;
        __i762 = c763;
        while (1) {
          unsigned long t765 = __i762;
          unsigned long t766 = __n754;
          _Bool c767 = ((t765 < t766)) ? 1 : 0;
          if (!c767) break;
          char* t768 = __s1752;
          unsigned long t769 = __i762;
          char* ptr770 = &(t768)[t769];
          unsigned long t771 = __i762;
          char* t772 = __s2753;
          char* ptr773 = &(t772)[t771];
          char* r774 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr770, ptr773);
        for_step764: ;
          unsigned long t775 = __i762;
          unsigned long u776 = t775 + 1;
          __i762 = u776;
        }
      char* t777 = __s1752;
      __retval755 = t777;
      char* t778 = __retval755;
      return t778;
    }
  char* t779 = __s1752;
  void* cast780 = (void*)t779;
  char* t781 = __s2753;
  void* cast782 = (void*)t781;
  unsigned long t783 = __n754;
  unsigned long c784 = 1;
  unsigned long b785 = t783 * c784;
  void* r786 = memcpy(cast780, cast782, b785);
  char* t787 = __s1752;
  __retval755 = t787;
  char* t788 = __retval755;
  return t788;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v789, char* v790, unsigned long v791) {
bb792:
  char* __s1793;
  char* __s2794;
  unsigned long __n795;
  char* __retval796;
  __s1793 = v789;
  __s2794 = v790;
  __n795 = v791;
    unsigned long t797 = __n795;
    unsigned long c798 = 0;
    _Bool c799 = ((t797 == c798)) ? 1 : 0;
    if (c799) {
      char* t800 = __s1793;
      __retval796 = t800;
      char* t801 = __retval796;
      return t801;
    }
    _Bool r802 = std____is_constant_evaluated();
    if (r802) {
      char* t803 = __s1793;
      char* t804 = __s2794;
      unsigned long t805 = __n795;
      char* r806 = __gnu_cxx__char_traits_char___copy(t803, t804, t805);
      __retval796 = r806;
      char* t807 = __retval796;
      return t807;
    }
  char* t808 = __s1793;
  void* cast809 = (void*)t808;
  char* t810 = __s2794;
  void* cast811 = (void*)t810;
  unsigned long t812 = __n795;
  void* r813 = memcpy(cast809, cast811, t812);
  char* cast814 = (char*)r813;
  __retval796 = cast814;
  char* t815 = __retval796;
  return t815;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v816, char* v817, unsigned long v818) {
bb819:
  char* __d820;
  char* __s821;
  unsigned long __n822;
  __d820 = v816;
  __s821 = v817;
  __n822 = v818;
    unsigned long t823 = __n822;
    unsigned long c824 = 1;
    _Bool c825 = ((t823 == c824)) ? 1 : 0;
    if (c825) {
      char* t826 = __d820;
      char* t827 = __s821;
      std__char_traits_char___assign(t826, t827);
    } else {
      char* t828 = __d820;
      char* t829 = __s821;
      unsigned long t830 = __n822;
      char* r831 = std__char_traits_char___copy(t828, t829, t830);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v832) {
bb833:
  char* __it834;
  char* __retval835;
  __it834 = v832;
  char* t836 = __it834;
  __retval835 = t836;
  char* t837 = __retval835;
  return t837;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v838, char* v839, char* v840) {
bb841:
  char* __p842;
  char* __k1843;
  char* __k2844;
  __p842 = v838;
  __k1843 = v839;
  __k2844 = v840;
    char* t845 = __p842;
    char* t846 = __k1843;
    char* r847 = char_const__std____niter_base_char_const__(t846);
    char* t848 = __k2844;
    char* t849 = __k1843;
    long diff850 = t848 - t849;
    unsigned long cast851 = (unsigned long)diff850;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t845, r847, cast851);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v852) {
bb853:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this854;
  char* __retval855;
  this854 = v852;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t856 = this854;
  char* t857 = t856->_M_dataplus._M_p;
  __retval855 = t857;
  char* t858 = __retval855;
  return t858;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v859, unsigned long v860) {
bb861:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this862;
  unsigned long __length863;
  this862 = v859;
  __length863 = v860;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t864 = this862;
  unsigned long t865 = __length863;
  t864->_M_string_length = t865;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v866, unsigned long v867) {
bb868:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this869;
  unsigned long __n870;
  char ref_tmp0871;
  this869 = v866;
  __n870 = v867;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t872 = this869;
  unsigned long t873 = __n870;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t872, t873);
  unsigned long t874 = __n870;
  char* r875 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t872);
  char* ptr876 = &(r875)[t874];
  char c877 = 0;
  ref_tmp0871 = c877;
  std__char_traits_char___assign(ptr876, &ref_tmp0871);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v878) {
bb879:
  struct _Guard* this880;
  this880 = v878;
  struct _Guard* t881 = this880;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t882 = t881->_M_guarded;
    _Bool cast883 = (_Bool)t882;
    if (cast883) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t884 = t881->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t884);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v885, char* v886, char* v887, struct std__forward_iterator_tag v888) {
bb889:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this890;
  char* __beg891;
  char* __end892;
  struct std__forward_iterator_tag unnamed893;
  unsigned long __dnew894;
  struct _Guard __guard895;
  this890 = v885;
  __beg891 = v886;
  __end892 = v887;
  unnamed893 = v888;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t896 = this890;
  char* t897 = __beg891;
  char* t898 = __end892;
  long r899 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t897, t898);
  unsigned long cast900 = (unsigned long)r899;
  __dnew894 = cast900;
    unsigned long t901 = __dnew894;
    unsigned long c902 = 15;
    _Bool c903 = ((t901 > c902)) ? 1 : 0;
    if (c903) {
      unsigned long c904 = 0;
      char* r905 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t896, &__dnew894, c904);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t896, r905);
      unsigned long t906 = __dnew894;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t896, t906);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t896);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard895, t896);
    char* r907 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t896);
    char* t908 = __beg891;
    char* t909 = __end892;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r907, t908, t909);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c910 = ((void*)0);
    __guard895._M_guarded = c910;
    unsigned long t911 = __dnew894;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t896, t911);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard895);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v912) {
bb913:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this914;
  this914 = v912;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t915 = this914;
  {
    struct std__allocator_char_* base916 = (struct std__allocator_char_*)((char *)t915 + 0);
    std__allocator_char____allocator(base916);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v917, struct std____new_allocator_char_* v918) {
bb919:
  struct std____new_allocator_char_* this920;
  struct std____new_allocator_char_* unnamed921;
  this920 = v917;
  unnamed921 = v918;
  struct std____new_allocator_char_* t922 = this920;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v923, struct std__allocator_char_* v924) {
bb925:
  struct std__allocator_char_* this926;
  struct std__allocator_char_* __a927;
  this926 = v923;
  __a927 = v924;
  struct std__allocator_char_* t928 = this926;
  struct std____new_allocator_char_* base929 = (struct std____new_allocator_char_*)((char *)t928 + 0);
  struct std__allocator_char_* t930 = __a927;
  struct std____new_allocator_char_* base931 = (struct std____new_allocator_char_*)((char *)t930 + 0);
  std____new_allocator_char_____new_allocator(base929, base931);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v932) {
bb933:
  char* __r934;
  char* __retval935;
  __r934 = v932;
  char* t936 = __r934;
  __retval935 = t936;
  char* t937 = __retval935;
  return t937;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v938) {
bb939:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this940;
  char* __retval941;
  this940 = v938;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t942 = this940;
  char* cast943 = (char*)&(t942->field2._M_local_buf);
  char* r944 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast943);
  __retval941 = r944;
  char* t945 = __retval941;
  return t945;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v946) {
bb947:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this948;
  _Bool __retval949;
  this948 = v946;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t950 = this948;
    char* r951 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t950);
    char* r952 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t950);
    _Bool c953 = ((r951 == r952)) ? 1 : 0;
    if (c953) {
        unsigned long t954 = t950->_M_string_length;
        unsigned long c955 = 15;
        _Bool c956 = ((t954 > c955)) ? 1 : 0;
        if (c956) {
          __builtin_unreachable();
        }
      _Bool c957 = 1;
      __retval949 = c957;
      _Bool t958 = __retval949;
      return t958;
    }
  _Bool c959 = 0;
  __retval949 = c959;
  _Bool t960 = __retval949;
  return t960;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v961, char* v962, unsigned long v963) {
bb964:
  struct std____new_allocator_char_* this965;
  char* __p966;
  unsigned long __n967;
  this965 = v961;
  __p966 = v962;
  __n967 = v963;
  struct std____new_allocator_char_* t968 = this965;
    unsigned long c969 = 1;
    unsigned long c970 = 16;
    _Bool c971 = ((c969 > c970)) ? 1 : 0;
    if (c971) {
      char* t972 = __p966;
      void* cast973 = (void*)t972;
      unsigned long t974 = __n967;
      unsigned long c975 = 1;
      unsigned long b976 = t974 * c975;
      unsigned long c977 = 1;
      operator_delete_3(cast973, b976, c977);
      return;
    }
  char* t978 = __p966;
  void* cast979 = (void*)t978;
  unsigned long t980 = __n967;
  unsigned long c981 = 1;
  unsigned long b982 = t980 * c981;
  operator_delete_2(cast979, b982);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v983, char* v984, unsigned long v985) {
bb986:
  struct std__allocator_char_* this987;
  char* __p988;
  unsigned long __n989;
  this987 = v983;
  __p988 = v984;
  __n989 = v985;
  struct std__allocator_char_* t990 = this987;
    _Bool r991 = std____is_constant_evaluated();
    if (r991) {
      char* t992 = __p988;
      void* cast993 = (void*)t992;
      operator_delete(cast993);
      return;
    }
  struct std____new_allocator_char_* base994 = (struct std____new_allocator_char_*)((char *)t990 + 0);
  char* t995 = __p988;
  unsigned long t996 = __n989;
  std____new_allocator_char___deallocate(base994, t995, t996);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v997, char* v998, unsigned long v999) {
bb1000:
  struct std__allocator_char_* __a1001;
  char* __p1002;
  unsigned long __n1003;
  __a1001 = v997;
  __p1002 = v998;
  __n1003 = v999;
  struct std__allocator_char_* t1004 = __a1001;
  char* t1005 = __p1002;
  unsigned long t1006 = __n1003;
  std__allocator_char___deallocate(t1004, t1005, t1006);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1007, unsigned long v1008) {
bb1009:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1010;
  unsigned long __size1011;
  this1010 = v1007;
  __size1011 = v1008;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1012 = this1010;
  struct std__allocator_char_* r1013 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1012);
  char* r1014 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1012);
  unsigned long t1015 = __size1011;
  unsigned long c1016 = 1;
  unsigned long b1017 = t1015 + c1016;
  std__allocator_traits_std__allocator_char_____deallocate(r1013, r1014, b1017);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1018) {
bb1019:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1020;
  this1020 = v1018;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1021 = this1020;
    _Bool r1022 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1021);
    _Bool u1023 = !r1022;
    if (u1023) {
      unsigned long t1024 = t1021->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1021, t1024);
    }
  return;
}

