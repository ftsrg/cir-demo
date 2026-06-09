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
char _str[12] = "look non-a.";
char _str_1[10] = "aijklnop ";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[35] = "First non-alphabetic character is ";
char _str_3[14] = " at position ";
char _str_4[18] = "str[found] == '-'";
char _str_5[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_find_first_not_of_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_6[11] = "found == 8";
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17find_first_not_ofEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v100, char* v101, unsigned long v102, unsigned long v103) {
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
      unsigned long t112 = __pos107;
      unsigned long r113 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t110);
      _Bool c114 = ((t112 < r113)) ? 1 : 0;
      if (!c114) break;
        char* t115 = __s106;
        unsigned long t116 = __n108;
        unsigned long t117 = __pos107;
        char* r118 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t110);
        char* ptr119 = &(r118)[t117];
        char* r120 = std__char_traits_char___find(t115, t116, ptr119);
        _Bool cast121 = (_Bool)r120;
        _Bool u122 = !cast121;
        if (u122) {
          unsigned long t123 = __pos107;
          __retval109 = t123;
          unsigned long t124 = __retval109;
          unsigned long ret_val125 = t124;
          return ret_val125;
        }
    for_step111: ;
      unsigned long t126 = __pos107;
      unsigned long u127 = t126 + 1;
      __pos107 = u127;
    }
  unsigned long t128 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval109 = t128;
  unsigned long t129 = __retval109;
  return t129;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17find_first_not_ofEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v130, char* v131, unsigned long v132) {
bb133:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this134;
  char* __s135;
  unsigned long __pos136;
  unsigned long __retval137;
  this134 = v130;
  __s135 = v131;
  __pos136 = v132;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t138 = this134;
  char* t139 = __s135;
  unsigned long t140 = __pos136;
  char* t141 = __s135;
  unsigned long r142 = std__char_traits_char___length(t141);
  unsigned long r143 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__unsigned_long__const(t138, t139, t140, r142);
  __retval137 = r143;
  unsigned long t144 = __retval137;
  return t144;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v145) {
bb146:
  struct std__ios_base* this147;
  long __retval148;
  this147 = v145;
  struct std__ios_base* t149 = this147;
  long t150 = t149->_M_width;
  __retval148 = t150;
  long t151 = __retval148;
  return t151;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v152, char v153) {
bb154:
  struct std__basic_ostream_char__std__char_traits_char__* __out155;
  char __c156;
  struct std__basic_ostream_char__std__char_traits_char__* __retval157;
  __out155 = v152;
  __c156 = v153;
    struct std__basic_ostream_char__std__char_traits_char__* t158 = __out155;
    void** v159 = (void**)t158;
    void* v160 = *((void**)v159);
    unsigned char* cast161 = (unsigned char*)v160;
    long c162 = -24;
    unsigned char* ptr163 = &(cast161)[c162];
    long* cast164 = (long*)ptr163;
    long t165 = *cast164;
    unsigned char* cast166 = (unsigned char*)t158;
    unsigned char* ptr167 = &(cast166)[t165];
    struct std__basic_ostream_char__std__char_traits_char__* cast168 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr167;
    struct std__ios_base* cast169 = (struct std__ios_base*)cast168;
    long r170 = std__ios_base__width___const(cast169);
    long c171 = 0;
    _Bool c172 = ((r170 != c171)) ? 1 : 0;
    if (c172) {
      struct std__basic_ostream_char__std__char_traits_char__* t173 = __out155;
      long c174 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r175 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t173, &__c156, c174);
      __retval157 = r175;
      struct std__basic_ostream_char__std__char_traits_char__* t176 = __retval157;
      return t176;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t177 = __out155;
  char t178 = __c156;
  struct std__basic_ostream_char__std__char_traits_char__* r179 = std__ostream__put(t177, t178);
  struct std__basic_ostream_char__std__char_traits_char__* t180 = __out155;
  __retval157 = t180;
  struct std__basic_ostream_char__std__char_traits_char__* t181 = __retval157;
  return t181;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v182, int v183) {
bb184:
  int __a185;
  int __b186;
  int __retval187;
  __a185 = v182;
  __b186 = v183;
  int t188 = __a185;
  int t189 = __b186;
  int b190 = t188 | t189;
  __retval187 = b190;
  int t191 = __retval187;
  return t191;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v192) {
bb193:
  struct std__basic_ios_char__std__char_traits_char__* this194;
  int __retval195;
  this194 = v192;
  struct std__basic_ios_char__std__char_traits_char__* t196 = this194;
  struct std__ios_base* base197 = (struct std__ios_base*)((char *)t196 + 0);
  int t198 = base197->_M_streambuf_state;
  __retval195 = t198;
  int t199 = __retval195;
  return t199;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v200, int v201) {
bb202:
  struct std__basic_ios_char__std__char_traits_char__* this203;
  int __state204;
  this203 = v200;
  __state204 = v201;
  struct std__basic_ios_char__std__char_traits_char__* t205 = this203;
  int r206 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t205);
  int t207 = __state204;
  int r208 = std__operator_(r206, t207);
  std__basic_ios_char__std__char_traits_char_____clear(t205, r208);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v209, char* v210) {
bb211:
  struct std__basic_ostream_char__std__char_traits_char__* __out212;
  char* __s213;
  struct std__basic_ostream_char__std__char_traits_char__* __retval214;
  __out212 = v209;
  __s213 = v210;
    char* t215 = __s213;
    _Bool cast216 = (_Bool)t215;
    _Bool u217 = !cast216;
    if (u217) {
      struct std__basic_ostream_char__std__char_traits_char__* t218 = __out212;
      void** v219 = (void**)t218;
      void* v220 = *((void**)v219);
      unsigned char* cast221 = (unsigned char*)v220;
      long c222 = -24;
      unsigned char* ptr223 = &(cast221)[c222];
      long* cast224 = (long*)ptr223;
      long t225 = *cast224;
      unsigned char* cast226 = (unsigned char*)t218;
      unsigned char* ptr227 = &(cast226)[t225];
      struct std__basic_ostream_char__std__char_traits_char__* cast228 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr227;
      struct std__basic_ios_char__std__char_traits_char__* cast229 = (struct std__basic_ios_char__std__char_traits_char__*)cast228;
      int t230 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast229, t230);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t231 = __out212;
      char* t232 = __s213;
      char* t233 = __s213;
      unsigned long r234 = std__char_traits_char___length(t233);
      long cast235 = (long)r234;
      struct std__basic_ostream_char__std__char_traits_char__* r236 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t231, t232, cast235);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t237 = __out212;
  __retval214 = t237;
  struct std__basic_ostream_char__std__char_traits_char__* t238 = __retval214;
  return t238;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v239, unsigned long v240) {
bb241:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this242;
  unsigned long __pos243;
  char* __retval244;
  this242 = v239;
  __pos243 = v240;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t245 = this242;
    do {
          unsigned long t246 = __pos243;
          unsigned long r247 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t245);
          _Bool c248 = ((t246 <= r247)) ? 1 : 0;
          _Bool u249 = !c248;
          if (u249) {
            char* cast250 = (char*)&(_str_9);
            int c251 = 1369;
            char* cast252 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm);
            char* cast253 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast250, c251, cast252, cast253);
          }
      _Bool c254 = 0;
      if (!c254) break;
    } while (1);
  unsigned long t255 = __pos243;
  char* r256 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t245);
  char* ptr257 = &(r256)[t255];
  __retval244 = ptr257;
  char* t258 = __retval244;
  return t258;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v259, void* v260) {
bb261:
  struct std__basic_ostream_char__std__char_traits_char__* this262;
  void* __pf263;
  struct std__basic_ostream_char__std__char_traits_char__* __retval264;
  this262 = v259;
  __pf263 = v260;
  struct std__basic_ostream_char__std__char_traits_char__* t265 = this262;
  void* t266 = __pf263;
  struct std__basic_ostream_char__std__char_traits_char__* r267 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t266)(t265);
  __retval264 = r267;
  struct std__basic_ostream_char__std__char_traits_char__* t268 = __retval264;
  return t268;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v269) {
bb270:
  struct std__basic_ostream_char__std__char_traits_char__* __os271;
  struct std__basic_ostream_char__std__char_traits_char__* __retval272;
  __os271 = v269;
  struct std__basic_ostream_char__std__char_traits_char__* t273 = __os271;
  struct std__basic_ostream_char__std__char_traits_char__* r274 = std__ostream__flush(t273);
  __retval272 = r274;
  struct std__basic_ostream_char__std__char_traits_char__* t275 = __retval272;
  return t275;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v276) {
bb277:
  struct std__ctype_char_* __f278;
  struct std__ctype_char_* __retval279;
  __f278 = v276;
    struct std__ctype_char_* t280 = __f278;
    _Bool cast281 = (_Bool)t280;
    _Bool u282 = !cast281;
    if (u282) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t283 = __f278;
  __retval279 = t283;
  struct std__ctype_char_* t284 = __retval279;
  return t284;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v285, char v286) {
bb287:
  struct std__ctype_char_* this288;
  char __c289;
  char __retval290;
  this288 = v285;
  __c289 = v286;
  struct std__ctype_char_* t291 = this288;
    char t292 = t291->_M_widen_ok;
    _Bool cast293 = (_Bool)t292;
    if (cast293) {
      char t294 = __c289;
      unsigned char cast295 = (unsigned char)t294;
      unsigned long cast296 = (unsigned long)cast295;
      char t297 = t291->_M_widen[cast296];
      __retval290 = t297;
      char t298 = __retval290;
      return t298;
    }
  std__ctype_char____M_widen_init___const(t291);
  char t299 = __c289;
  void** v300 = (void**)t291;
  void* v301 = *((void**)v300);
  char vcall304 = (char)__VERIFIER_virtual_call_char_char(t291, 6, t299);
  __retval290 = vcall304;
  char t305 = __retval290;
  return t305;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v306, char v307) {
bb308:
  struct std__basic_ios_char__std__char_traits_char__* this309;
  char __c310;
  char __retval311;
  this309 = v306;
  __c310 = v307;
  struct std__basic_ios_char__std__char_traits_char__* t312 = this309;
  struct std__ctype_char_* t313 = t312->_M_ctype;
  struct std__ctype_char_* r314 = std__ctype_char__const__std____check_facet_std__ctype_char___(t313);
  char t315 = __c310;
  char r316 = std__ctype_char___widen_char__const(r314, t315);
  __retval311 = r316;
  char t317 = __retval311;
  return t317;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v318) {
bb319:
  struct std__basic_ostream_char__std__char_traits_char__* __os320;
  struct std__basic_ostream_char__std__char_traits_char__* __retval321;
  __os320 = v318;
  struct std__basic_ostream_char__std__char_traits_char__* t322 = __os320;
  struct std__basic_ostream_char__std__char_traits_char__* t323 = __os320;
  void** v324 = (void**)t323;
  void* v325 = *((void**)v324);
  unsigned char* cast326 = (unsigned char*)v325;
  long c327 = -24;
  unsigned char* ptr328 = &(cast326)[c327];
  long* cast329 = (long*)ptr328;
  long t330 = *cast329;
  unsigned char* cast331 = (unsigned char*)t323;
  unsigned char* ptr332 = &(cast331)[t330];
  struct std__basic_ostream_char__std__char_traits_char__* cast333 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr332;
  struct std__basic_ios_char__std__char_traits_char__* cast334 = (struct std__basic_ios_char__std__char_traits_char__*)cast333;
  char c335 = 10;
  char r336 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast334, c335);
  struct std__basic_ostream_char__std__char_traits_char__* r337 = std__ostream__put(t322, r336);
  struct std__basic_ostream_char__std__char_traits_char__* r338 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r337);
  __retval321 = r338;
  struct std__basic_ostream_char__std__char_traits_char__* t339 = __retval321;
  return t339;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v340) {
bb341:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this342;
  this342 = v340;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t343 = this342;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t343);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t343->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb344:
  int __retval345;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str346;
  struct std__allocator_char_ ref_tmp0347;
  unsigned long found348;
  int c349 = 0;
  __retval345 = c349;
  char* cast350 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0347);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str346, cast350, &ref_tmp0347);
  {
    std__allocator_char____allocator(&ref_tmp0347);
  }
    char* cast351 = (char*)&(_str_1);
    unsigned long c352 = 0;
    unsigned long r353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_not_of_char_const___unsigned_long__const(&str346, cast351, c352);
    found348 = r353;
      unsigned long t354 = found348;
      unsigned long t355 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      _Bool c356 = ((t354 != t355)) ? 1 : 0;
      if (c356) {
        char* cast357 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r358 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast357);
        unsigned long t359 = found348;
        char* r360 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str346, t359);
        char t361 = *r360;
        struct std__basic_ostream_char__std__char_traits_char__* r362 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r358, t361);
        char* cast363 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r364 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast363);
        unsigned long t365 = found348;
        int cast366 = (int)t365;
        struct std__basic_ostream_char__std__char_traits_char__* r367 = std__ostream__operator__(r364, cast366);
        struct std__basic_ostream_char__std__char_traits_char__* r368 = std__ostream__operator___std__ostream_____(r367, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    unsigned long t369 = found348;
    char* r370 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator__(&str346, t369);
    char t371 = *r370;
    int cast372 = (int)t371;
    int c373 = 45;
    _Bool c374 = ((cast372 == c373)) ? 1 : 0;
    if (c374) {
    } else {
      char* cast375 = (char*)&(_str_4);
      char* c376 = _str_5;
      unsigned int c377 = 25;
      char* cast378 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast375, c376, c377, cast378);
    }
    unsigned long t379 = found348;
    unsigned long c380 = 8;
    _Bool c381 = ((t379 == c380)) ? 1 : 0;
    if (c381) {
    } else {
      char* cast382 = (char*)&(_str_6);
      char* c383 = _str_5;
      unsigned int c384 = 26;
      char* cast385 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast382, c383, c384, cast385);
    }
    int c386 = 0;
    __retval345 = c386;
    int t387 = __retval345;
    int ret_val388 = t387;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str346);
    }
    return ret_val388;
  int t389 = __retval345;
  return t389;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v390) {
bb391:
  struct std____new_allocator_char_* this392;
  this392 = v390;
  struct std____new_allocator_char_* t393 = this392;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v394) {
bb395:
  char* __r396;
  char* __retval397;
  __r396 = v394;
  char* t398 = __r396;
  __retval397 = t398;
  char* t399 = __retval397;
  return t399;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v400) {
bb401:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this402;
  char* __retval403;
  this402 = v400;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t404 = this402;
  char* cast405 = (char*)&(t404->field2._M_local_buf);
  char* r406 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast405);
  __retval403 = r406;
  char* t407 = __retval403;
  return t407;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v408, char* v409, struct std__allocator_char_* v410) {
bb411:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this412;
  char* __dat413;
  struct std__allocator_char_* __a414;
  this412 = v408;
  __dat413 = v409;
  __a414 = v410;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t415 = this412;
  struct std__allocator_char_* base416 = (struct std__allocator_char_*)((char *)t415 + 0);
  struct std__allocator_char_* t417 = __a414;
  std__allocator_char___allocator(base416, t417);
    char* t418 = __dat413;
    t415->_M_p = t418;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb419:
  _Bool __retval420;
    _Bool c421 = 0;
    __retval420 = c421;
    _Bool t422 = __retval420;
    return t422;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v423, char* v424) {
bb425:
  char* __c1426;
  char* __c2427;
  _Bool __retval428;
  __c1426 = v423;
  __c2427 = v424;
  char* t429 = __c1426;
  char t430 = *t429;
  int cast431 = (int)t430;
  char* t432 = __c2427;
  char t433 = *t432;
  int cast434 = (int)t433;
  _Bool c435 = ((cast431 == cast434)) ? 1 : 0;
  __retval428 = c435;
  _Bool t436 = __retval428;
  return t436;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v437) {
bb438:
  char* __p439;
  unsigned long __retval440;
  unsigned long __i441;
  __p439 = v437;
  unsigned long c442 = 0;
  __i441 = c442;
    char ref_tmp0443;
    while (1) {
      unsigned long t444 = __i441;
      char* t445 = __p439;
      char* ptr446 = &(t445)[t444];
      char c447 = 0;
      ref_tmp0443 = c447;
      _Bool r448 = __gnu_cxx__char_traits_char___eq(ptr446, &ref_tmp0443);
      _Bool u449 = !r448;
      if (!u449) break;
      unsigned long t450 = __i441;
      unsigned long u451 = t450 + 1;
      __i441 = u451;
    }
  unsigned long t452 = __i441;
  __retval440 = t452;
  unsigned long t453 = __retval440;
  return t453;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v454) {
bb455:
  char* __s456;
  unsigned long __retval457;
  __s456 = v454;
    _Bool r458 = std____is_constant_evaluated();
    if (r458) {
      char* t459 = __s456;
      unsigned long r460 = __gnu_cxx__char_traits_char___length(t459);
      __retval457 = r460;
      unsigned long t461 = __retval457;
      return t461;
    }
  char* t462 = __s456;
  unsigned long r463 = strlen(t462);
  __retval457 = r463;
  unsigned long t464 = __retval457;
  return t464;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v465, char* v466, struct std__random_access_iterator_tag v467) {
bb468:
  char* __first469;
  char* __last470;
  struct std__random_access_iterator_tag unnamed471;
  long __retval472;
  __first469 = v465;
  __last470 = v466;
  unnamed471 = v467;
  char* t473 = __last470;
  char* t474 = __first469;
  long diff475 = t473 - t474;
  __retval472 = diff475;
  long t476 = __retval472;
  return t476;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v477) {
bb478:
  char** unnamed479;
  struct std__random_access_iterator_tag __retval480;
  unnamed479 = v477;
  struct std__random_access_iterator_tag t481 = __retval480;
  return t481;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v482, char* v483) {
bb484:
  char* __first485;
  char* __last486;
  long __retval487;
  struct std__random_access_iterator_tag agg_tmp0488;
  __first485 = v482;
  __last486 = v483;
  char* t489 = __first485;
  char* t490 = __last486;
  struct std__random_access_iterator_tag r491 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first485);
  agg_tmp0488 = r491;
  struct std__random_access_iterator_tag t492 = agg_tmp0488;
  long r493 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t489, t490, t492);
  __retval487 = r493;
  long t494 = __retval487;
  return t494;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v495, char* v496) {
bb497:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this498;
  char* __p499;
  this498 = v495;
  __p499 = v496;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t500 = this498;
  char* t501 = __p499;
  t500->_M_dataplus._M_p = t501;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v502) {
bb503:
  struct std__allocator_char_* __a504;
  unsigned long __retval505;
  __a504 = v502;
  unsigned long c506 = -1;
  unsigned long c507 = 1;
  unsigned long b508 = c506 / c507;
  __retval505 = b508;
  unsigned long t509 = __retval505;
  return t509;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v510) {
bb511:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this512;
  struct std__allocator_char_* __retval513;
  this512 = v510;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t514 = this512;
  struct std__allocator_char_* base515 = (struct std__allocator_char_*)((char *)&(t514->_M_dataplus) + 0);
  __retval513 = base515;
  struct std__allocator_char_* t516 = __retval513;
  return t516;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v517, unsigned long* v518) {
bb519:
  unsigned long* __a520;
  unsigned long* __b521;
  unsigned long* __retval522;
  __a520 = v517;
  __b521 = v518;
    unsigned long* t523 = __b521;
    unsigned long t524 = *t523;
    unsigned long* t525 = __a520;
    unsigned long t526 = *t525;
    _Bool c527 = ((t524 < t526)) ? 1 : 0;
    if (c527) {
      unsigned long* t528 = __b521;
      __retval522 = t528;
      unsigned long* t529 = __retval522;
      return t529;
    }
  unsigned long* t530 = __a520;
  __retval522 = t530;
  unsigned long* t531 = __retval522;
  return t531;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v532) {
bb533:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this534;
  unsigned long __retval535;
  unsigned long __diffmax536;
  unsigned long __allocmax537;
  this534 = v532;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t538 = this534;
  unsigned long c539 = 9223372036854775807;
  __diffmax536 = c539;
  struct std__allocator_char_* r540 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t538);
  unsigned long r541 = std__allocator_traits_std__allocator_char_____max_size(r540);
  __allocmax537 = r541;
  unsigned long* r542 = unsigned_long_const__std__min_unsigned_long_(&__diffmax536, &__allocmax537);
  unsigned long t543 = *r542;
  unsigned long c544 = 1;
  unsigned long b545 = t543 - c544;
  __retval535 = b545;
  unsigned long t546 = __retval535;
  return t546;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v547) {
bb548:
  struct std____new_allocator_char_* this549;
  unsigned long __retval550;
  this549 = v547;
  struct std____new_allocator_char_* t551 = this549;
  unsigned long c552 = 9223372036854775807;
  unsigned long c553 = 1;
  unsigned long b554 = c552 / c553;
  __retval550 = b554;
  unsigned long t555 = __retval550;
  return t555;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v556, unsigned long v557, void* v558) {
bb559:
  struct std____new_allocator_char_* this560;
  unsigned long __n561;
  void* unnamed562;
  char* __retval563;
  this560 = v556;
  __n561 = v557;
  unnamed562 = v558;
  struct std____new_allocator_char_* t564 = this560;
    unsigned long t565 = __n561;
    unsigned long r566 = std____new_allocator_char____M_max_size___const(t564);
    _Bool c567 = ((t565 > r566)) ? 1 : 0;
    if (c567) {
        unsigned long t568 = __n561;
        unsigned long c569 = -1;
        unsigned long c570 = 1;
        unsigned long b571 = c569 / c570;
        _Bool c572 = ((t568 > b571)) ? 1 : 0;
        if (c572) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c573 = 1;
    unsigned long c574 = 16;
    _Bool c575 = ((c573 > c574)) ? 1 : 0;
    if (c575) {
      unsigned long __al576;
      unsigned long c577 = 1;
      __al576 = c577;
      unsigned long t578 = __n561;
      unsigned long c579 = 1;
      unsigned long b580 = t578 * c579;
      unsigned long t581 = __al576;
      void* r582 = operator_new_2(b580, t581);
      char* cast583 = (char*)r582;
      __retval563 = cast583;
      char* t584 = __retval563;
      return t584;
    }
  unsigned long t585 = __n561;
  unsigned long c586 = 1;
  unsigned long b587 = t585 * c586;
  void* r588 = operator_new(b587);
  char* cast589 = (char*)r588;
  __retval563 = cast589;
  char* t590 = __retval563;
  return t590;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v591, unsigned long v592) {
bb593:
  struct std__allocator_char_* this594;
  unsigned long __n595;
  char* __retval596;
  this594 = v591;
  __n595 = v592;
  struct std__allocator_char_* t597 = this594;
    _Bool r598 = std____is_constant_evaluated();
    if (r598) {
        unsigned long t599 = __n595;
        unsigned long c600 = 1;
        unsigned long ovr601;
        _Bool ovf602 = __builtin_mul_overflow(t599, c600, &ovr601);
        __n595 = ovr601;
        if (ovf602) {
          std____throw_bad_array_new_length();
        }
      unsigned long t603 = __n595;
      void* r604 = operator_new(t603);
      char* cast605 = (char*)r604;
      __retval596 = cast605;
      char* t606 = __retval596;
      return t606;
    }
  struct std____new_allocator_char_* base607 = (struct std____new_allocator_char_*)((char *)t597 + 0);
  unsigned long t608 = __n595;
  void* c609 = ((void*)0);
  char* r610 = std____new_allocator_char___allocate(base607, t608, c609);
  __retval596 = r610;
  char* t611 = __retval596;
  return t611;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v612, unsigned long v613) {
bb614:
  struct std__allocator_char_* __a615;
  unsigned long __n616;
  char* __retval617;
  __a615 = v612;
  __n616 = v613;
  struct std__allocator_char_* t618 = __a615;
  unsigned long t619 = __n616;
  char* r620 = std__allocator_char___allocate(t618, t619);
  __retval617 = r620;
  char* t621 = __retval617;
  return t621;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v622, unsigned long v623) {
bb624:
  struct std__allocator_char_* __a625;
  unsigned long __n626;
  char* __retval627;
  char* __p628;
  __a625 = v622;
  __n626 = v623;
  struct std__allocator_char_* t629 = __a625;
  unsigned long t630 = __n626;
  char* r631 = std__allocator_traits_std__allocator_char_____allocate(t629, t630);
  __p628 = r631;
  char* t632 = __p628;
  __retval627 = t632;
  char* t633 = __retval627;
  return t633;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v634) {
bb635:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this636;
  struct std__allocator_char_* __retval637;
  this636 = v634;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t638 = this636;
  struct std__allocator_char_* base639 = (struct std__allocator_char_*)((char *)&(t638->_M_dataplus) + 0);
  __retval637 = base639;
  struct std__allocator_char_* t640 = __retval637;
  return t640;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v641, unsigned long* v642, unsigned long v643) {
bb644:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this645;
  unsigned long* __capacity646;
  unsigned long __old_capacity647;
  char* __retval648;
  this645 = v641;
  __capacity646 = v642;
  __old_capacity647 = v643;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t649 = this645;
    unsigned long* t650 = __capacity646;
    unsigned long t651 = *t650;
    unsigned long r652 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t649);
    _Bool c653 = ((t651 > r652)) ? 1 : 0;
    if (c653) {
      char* cast654 = (char*)&(_str_8);
      std____throw_length_error(cast654);
    }
    unsigned long* t655 = __capacity646;
    unsigned long t656 = *t655;
    unsigned long t657 = __old_capacity647;
    _Bool c658 = ((t656 > t657)) ? 1 : 0;
    _Bool ternary659;
    if (c658) {
      unsigned long* t660 = __capacity646;
      unsigned long t661 = *t660;
      unsigned long c662 = 2;
      unsigned long t663 = __old_capacity647;
      unsigned long b664 = c662 * t663;
      _Bool c665 = ((t661 < b664)) ? 1 : 0;
      ternary659 = (_Bool)c665;
    } else {
      _Bool c666 = 0;
      ternary659 = (_Bool)c666;
    }
    if (ternary659) {
      unsigned long c667 = 2;
      unsigned long t668 = __old_capacity647;
      unsigned long b669 = c667 * t668;
      unsigned long* t670 = __capacity646;
      *t670 = b669;
        unsigned long* t671 = __capacity646;
        unsigned long t672 = *t671;
        unsigned long r673 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t649);
        _Bool c674 = ((t672 > r673)) ? 1 : 0;
        if (c674) {
          unsigned long r675 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t649);
          unsigned long* t676 = __capacity646;
          *t676 = r675;
        }
    }
  struct std__allocator_char_* r677 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t649);
  unsigned long* t678 = __capacity646;
  unsigned long t679 = *t678;
  unsigned long c680 = 1;
  unsigned long b681 = t679 + c680;
  char* r682 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r677, b681);
  __retval648 = r682;
  char* t683 = __retval648;
  return t683;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v684, unsigned long v685) {
bb686:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this687;
  unsigned long __capacity688;
  this687 = v684;
  __capacity688 = v685;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t689 = this687;
  unsigned long t690 = __capacity688;
  t689->field2._M_allocated_capacity = t690;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb691:
  _Bool __retval692;
    _Bool c693 = 0;
    __retval692 = c693;
    _Bool t694 = __retval692;
    return t694;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v695) {
bb696:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this697;
  this697 = v695;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t698 = this697;
    _Bool r699 = std__is_constant_evaluated();
    if (r699) {
        unsigned long __i700;
        unsigned long c701 = 0;
        __i700 = c701;
        while (1) {
          unsigned long t703 = __i700;
          unsigned long c704 = 15;
          _Bool c705 = ((t703 <= c704)) ? 1 : 0;
          if (!c705) break;
          char c706 = 0;
          unsigned long t707 = __i700;
          t698->field2._M_local_buf[t707] = c706;
        for_step702: ;
          unsigned long t708 = __i700;
          unsigned long u709 = t708 + 1;
          __i700 = u709;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v710, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v711) {
bb712:
  struct _Guard* this713;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s714;
  this713 = v710;
  __s714 = v711;
  struct _Guard* t715 = this713;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t716 = __s714;
  t715->_M_guarded = t716;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v717, char* v718) {
bb719:
  char* __location720;
  char* __args721;
  char* __retval722;
  void* __loc723;
  __location720 = v717;
  __args721 = v718;
  char* t724 = __location720;
  void* cast725 = (void*)t724;
  __loc723 = cast725;
    void* t726 = __loc723;
    char* cast727 = (char*)t726;
    char* t728 = __args721;
    char t729 = *t728;
    *cast727 = t729;
    __retval722 = cast727;
    char* t730 = __retval722;
    return t730;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v731, char* v732) {
bb733:
  char* __c1734;
  char* __c2735;
  __c1734 = v731;
  __c2735 = v732;
    _Bool r736 = std____is_constant_evaluated();
    if (r736) {
      char* t737 = __c1734;
      char* t738 = __c2735;
      char* r739 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t737, t738);
    } else {
      char* t740 = __c2735;
      char t741 = *t740;
      char* t742 = __c1734;
      *t742 = t741;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v743, char* v744, unsigned long v745) {
bb746:
  char* __s1747;
  char* __s2748;
  unsigned long __n749;
  char* __retval750;
  __s1747 = v743;
  __s2748 = v744;
  __n749 = v745;
    unsigned long t751 = __n749;
    unsigned long c752 = 0;
    _Bool c753 = ((t751 == c752)) ? 1 : 0;
    if (c753) {
      char* t754 = __s1747;
      __retval750 = t754;
      char* t755 = __retval750;
      return t755;
    }
    _Bool r756 = std____is_constant_evaluated();
    if (r756) {
        unsigned long __i757;
        unsigned long c758 = 0;
        __i757 = c758;
        while (1) {
          unsigned long t760 = __i757;
          unsigned long t761 = __n749;
          _Bool c762 = ((t760 < t761)) ? 1 : 0;
          if (!c762) break;
          char* t763 = __s1747;
          unsigned long t764 = __i757;
          char* ptr765 = &(t763)[t764];
          unsigned long t766 = __i757;
          char* t767 = __s2748;
          char* ptr768 = &(t767)[t766];
          char* r769 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr765, ptr768);
        for_step759: ;
          unsigned long t770 = __i757;
          unsigned long u771 = t770 + 1;
          __i757 = u771;
        }
      char* t772 = __s1747;
      __retval750 = t772;
      char* t773 = __retval750;
      return t773;
    }
  char* t774 = __s1747;
  void* cast775 = (void*)t774;
  char* t776 = __s2748;
  void* cast777 = (void*)t776;
  unsigned long t778 = __n749;
  unsigned long c779 = 1;
  unsigned long b780 = t778 * c779;
  void* r781 = memcpy(cast775, cast777, b780);
  char* t782 = __s1747;
  __retval750 = t782;
  char* t783 = __retval750;
  return t783;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v784, char* v785, unsigned long v786) {
bb787:
  char* __s1788;
  char* __s2789;
  unsigned long __n790;
  char* __retval791;
  __s1788 = v784;
  __s2789 = v785;
  __n790 = v786;
    unsigned long t792 = __n790;
    unsigned long c793 = 0;
    _Bool c794 = ((t792 == c793)) ? 1 : 0;
    if (c794) {
      char* t795 = __s1788;
      __retval791 = t795;
      char* t796 = __retval791;
      return t796;
    }
    _Bool r797 = std____is_constant_evaluated();
    if (r797) {
      char* t798 = __s1788;
      char* t799 = __s2789;
      unsigned long t800 = __n790;
      char* r801 = __gnu_cxx__char_traits_char___copy(t798, t799, t800);
      __retval791 = r801;
      char* t802 = __retval791;
      return t802;
    }
  char* t803 = __s1788;
  void* cast804 = (void*)t803;
  char* t805 = __s2789;
  void* cast806 = (void*)t805;
  unsigned long t807 = __n790;
  void* r808 = memcpy(cast804, cast806, t807);
  char* cast809 = (char*)r808;
  __retval791 = cast809;
  char* t810 = __retval791;
  return t810;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v811, char* v812, unsigned long v813) {
bb814:
  char* __d815;
  char* __s816;
  unsigned long __n817;
  __d815 = v811;
  __s816 = v812;
  __n817 = v813;
    unsigned long t818 = __n817;
    unsigned long c819 = 1;
    _Bool c820 = ((t818 == c819)) ? 1 : 0;
    if (c820) {
      char* t821 = __d815;
      char* t822 = __s816;
      std__char_traits_char___assign(t821, t822);
    } else {
      char* t823 = __d815;
      char* t824 = __s816;
      unsigned long t825 = __n817;
      char* r826 = std__char_traits_char___copy(t823, t824, t825);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v827) {
bb828:
  char* __it829;
  char* __retval830;
  __it829 = v827;
  char* t831 = __it829;
  __retval830 = t831;
  char* t832 = __retval830;
  return t832;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v833, char* v834, char* v835) {
bb836:
  char* __p837;
  char* __k1838;
  char* __k2839;
  __p837 = v833;
  __k1838 = v834;
  __k2839 = v835;
    char* t840 = __p837;
    char* t841 = __k1838;
    char* r842 = char_const__std____niter_base_char_const__(t841);
    char* t843 = __k2839;
    char* t844 = __k1838;
    long diff845 = t843 - t844;
    unsigned long cast846 = (unsigned long)diff845;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t840, r842, cast846);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v847) {
bb848:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this849;
  char* __retval850;
  this849 = v847;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t851 = this849;
  char* t852 = t851->_M_dataplus._M_p;
  __retval850 = t852;
  char* t853 = __retval850;
  return t853;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v854, unsigned long v855) {
bb856:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this857;
  unsigned long __length858;
  this857 = v854;
  __length858 = v855;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t859 = this857;
  unsigned long t860 = __length858;
  t859->_M_string_length = t860;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v861, unsigned long v862) {
bb863:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this864;
  unsigned long __n865;
  char ref_tmp0866;
  this864 = v861;
  __n865 = v862;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t867 = this864;
  unsigned long t868 = __n865;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t867, t868);
  unsigned long t869 = __n865;
  char* r870 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t867);
  char* ptr871 = &(r870)[t869];
  char c872 = 0;
  ref_tmp0866 = c872;
  std__char_traits_char___assign(ptr871, &ref_tmp0866);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v873) {
bb874:
  struct _Guard* this875;
  this875 = v873;
  struct _Guard* t876 = this875;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t877 = t876->_M_guarded;
    _Bool cast878 = (_Bool)t877;
    if (cast878) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t879 = t876->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t879);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v880, char* v881, char* v882, struct std__forward_iterator_tag v883) {
bb884:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this885;
  char* __beg886;
  char* __end887;
  struct std__forward_iterator_tag unnamed888;
  unsigned long __dnew889;
  struct _Guard __guard890;
  this885 = v880;
  __beg886 = v881;
  __end887 = v882;
  unnamed888 = v883;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t891 = this885;
  char* t892 = __beg886;
  char* t893 = __end887;
  long r894 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t892, t893);
  unsigned long cast895 = (unsigned long)r894;
  __dnew889 = cast895;
    unsigned long t896 = __dnew889;
    unsigned long c897 = 15;
    _Bool c898 = ((t896 > c897)) ? 1 : 0;
    if (c898) {
      unsigned long c899 = 0;
      char* r900 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t891, &__dnew889, c899);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t891, r900);
      unsigned long t901 = __dnew889;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t891, t901);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t891);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard890, t891);
    char* r902 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t891);
    char* t903 = __beg886;
    char* t904 = __end887;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r902, t903, t904);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c905 = ((void*)0);
    __guard890._M_guarded = c905;
    unsigned long t906 = __dnew889;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t891, t906);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard890);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v907) {
bb908:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this909;
  this909 = v907;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t910 = this909;
  {
    struct std__allocator_char_* base911 = (struct std__allocator_char_*)((char *)t910 + 0);
    std__allocator_char____allocator(base911);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v912, struct std____new_allocator_char_* v913) {
bb914:
  struct std____new_allocator_char_* this915;
  struct std____new_allocator_char_* unnamed916;
  this915 = v912;
  unnamed916 = v913;
  struct std____new_allocator_char_* t917 = this915;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v918, struct std__allocator_char_* v919) {
bb920:
  struct std__allocator_char_* this921;
  struct std__allocator_char_* __a922;
  this921 = v918;
  __a922 = v919;
  struct std__allocator_char_* t923 = this921;
  struct std____new_allocator_char_* base924 = (struct std____new_allocator_char_*)((char *)t923 + 0);
  struct std__allocator_char_* t925 = __a922;
  struct std____new_allocator_char_* base926 = (struct std____new_allocator_char_*)((char *)t925 + 0);
  std____new_allocator_char_____new_allocator(base924, base926);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v927) {
bb928:
  char* __r929;
  char* __retval930;
  __r929 = v927;
  char* t931 = __r929;
  __retval930 = t931;
  char* t932 = __retval930;
  return t932;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v933) {
bb934:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this935;
  char* __retval936;
  this935 = v933;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t937 = this935;
  char* cast938 = (char*)&(t937->field2._M_local_buf);
  char* r939 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast938);
  __retval936 = r939;
  char* t940 = __retval936;
  return t940;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v941) {
bb942:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this943;
  _Bool __retval944;
  this943 = v941;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t945 = this943;
    char* r946 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t945);
    char* r947 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t945);
    _Bool c948 = ((r946 == r947)) ? 1 : 0;
    if (c948) {
        unsigned long t949 = t945->_M_string_length;
        unsigned long c950 = 15;
        _Bool c951 = ((t949 > c950)) ? 1 : 0;
        if (c951) {
          __builtin_unreachable();
        }
      _Bool c952 = 1;
      __retval944 = c952;
      _Bool t953 = __retval944;
      return t953;
    }
  _Bool c954 = 0;
  __retval944 = c954;
  _Bool t955 = __retval944;
  return t955;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v956, char* v957, unsigned long v958) {
bb959:
  struct std____new_allocator_char_* this960;
  char* __p961;
  unsigned long __n962;
  this960 = v956;
  __p961 = v957;
  __n962 = v958;
  struct std____new_allocator_char_* t963 = this960;
    unsigned long c964 = 1;
    unsigned long c965 = 16;
    _Bool c966 = ((c964 > c965)) ? 1 : 0;
    if (c966) {
      char* t967 = __p961;
      void* cast968 = (void*)t967;
      unsigned long t969 = __n962;
      unsigned long c970 = 1;
      unsigned long b971 = t969 * c970;
      unsigned long c972 = 1;
      operator_delete_3(cast968, b971, c972);
      return;
    }
  char* t973 = __p961;
  void* cast974 = (void*)t973;
  unsigned long t975 = __n962;
  unsigned long c976 = 1;
  unsigned long b977 = t975 * c976;
  operator_delete_2(cast974, b977);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v978, char* v979, unsigned long v980) {
bb981:
  struct std__allocator_char_* this982;
  char* __p983;
  unsigned long __n984;
  this982 = v978;
  __p983 = v979;
  __n984 = v980;
  struct std__allocator_char_* t985 = this982;
    _Bool r986 = std____is_constant_evaluated();
    if (r986) {
      char* t987 = __p983;
      void* cast988 = (void*)t987;
      operator_delete(cast988);
      return;
    }
  struct std____new_allocator_char_* base989 = (struct std____new_allocator_char_*)((char *)t985 + 0);
  char* t990 = __p983;
  unsigned long t991 = __n984;
  std____new_allocator_char___deallocate(base989, t990, t991);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v992, char* v993, unsigned long v994) {
bb995:
  struct std__allocator_char_* __a996;
  char* __p997;
  unsigned long __n998;
  __a996 = v992;
  __p997 = v993;
  __n998 = v994;
  struct std__allocator_char_* t999 = __a996;
  char* t1000 = __p997;
  unsigned long t1001 = __n998;
  std__allocator_char___deallocate(t999, t1000, t1001);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1002, unsigned long v1003) {
bb1004:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1005;
  unsigned long __size1006;
  this1005 = v1002;
  __size1006 = v1003;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1007 = this1005;
  struct std__allocator_char_* r1008 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1007);
  char* r1009 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1007);
  unsigned long t1010 = __size1006;
  unsigned long c1011 = 1;
  unsigned long b1012 = t1010 + c1011;
  std__allocator_traits_std__allocator_char_____deallocate(r1008, r1009, b1012);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1013) {
bb1014:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1015;
  this1015 = v1013;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1016 = this1015;
    _Bool r1017 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1016);
    _Bool u1018 = !r1017;
    if (u1018) {
      unsigned long t1019 = t1016->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1016, t1019);
    }
  return;
}

