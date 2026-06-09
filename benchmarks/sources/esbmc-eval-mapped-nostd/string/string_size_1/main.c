extern void abort(void);
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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[12] = "Test string";
char _str_1[8] = "i == 11";
char _str_2[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_size_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[20] = "The size of str is ";
char _str_4[14] = " characters.\n";
char _str_5[50] = "basic_string: construction from null is not valid";
char _str_6[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v44, int v45) {
bb46:
  int __a47;
  int __b48;
  int __retval49;
  __a47 = v44;
  __b48 = v45;
  int t50 = __a47;
  int t51 = __b48;
  int b52 = t50 | t51;
  __retval49 = b52;
  int t53 = __retval49;
  return t53;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v54) {
bb55:
  struct std__basic_ios_char__std__char_traits_char__* this56;
  int __retval57;
  this56 = v54;
  struct std__basic_ios_char__std__char_traits_char__* t58 = this56;
  struct std__ios_base* base59 = (struct std__ios_base*)((char *)t58 + 0);
  int t60 = base59->_M_streambuf_state;
  __retval57 = t60;
  int t61 = __retval57;
  return t61;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v62, int v63) {
bb64:
  struct std__basic_ios_char__std__char_traits_char__* this65;
  int __state66;
  this65 = v62;
  __state66 = v63;
  struct std__basic_ios_char__std__char_traits_char__* t67 = this65;
  int r68 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t67);
  int t69 = __state66;
  int r70 = std__operator_(r68, t69);
  std__basic_ios_char__std__char_traits_char_____clear(t67, r70);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v71, char* v72) {
bb73:
  struct std__basic_ostream_char__std__char_traits_char__* __out74;
  char* __s75;
  struct std__basic_ostream_char__std__char_traits_char__* __retval76;
  __out74 = v71;
  __s75 = v72;
    char* t77 = __s75;
    _Bool cast78 = (_Bool)t77;
    _Bool u79 = !cast78;
    if (u79) {
      struct std__basic_ostream_char__std__char_traits_char__* t80 = __out74;
      void** v81 = (void**)t80;
      void* v82 = *((void**)v81);
      unsigned char* cast83 = (unsigned char*)v82;
      long c84 = -24;
      unsigned char* ptr85 = &(cast83)[c84];
      long* cast86 = (long*)ptr85;
      long t87 = *cast86;
      unsigned char* cast88 = (unsigned char*)t80;
      unsigned char* ptr89 = &(cast88)[t87];
      struct std__basic_ostream_char__std__char_traits_char__* cast90 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr89;
      struct std__basic_ios_char__std__char_traits_char__* cast91 = (struct std__basic_ios_char__std__char_traits_char__*)cast90;
      int t92 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast91, t92);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t93 = __out74;
      char* t94 = __s75;
      char* t95 = __s75;
      unsigned long r96 = std__char_traits_char___length(t95);
      long cast97 = (long)r96;
      struct std__basic_ostream_char__std__char_traits_char__* r98 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t93, t94, cast97);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t99 = __out74;
  __retval76 = t99;
  struct std__basic_ostream_char__std__char_traits_char__* t100 = __retval76;
  return t100;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v101, unsigned long v102) {
bb103:
  struct std__basic_ostream_char__std__char_traits_char__* this104;
  unsigned long __n105;
  struct std__basic_ostream_char__std__char_traits_char__* __retval106;
  this104 = v101;
  __n105 = v102;
  struct std__basic_ostream_char__std__char_traits_char__* t107 = this104;
  unsigned long t108 = __n105;
  struct std__basic_ostream_char__std__char_traits_char__* r109 = std__ostream__std__ostream___M_insert_unsigned_long_(t107, t108);
  __retval106 = r109;
  struct std__basic_ostream_char__std__char_traits_char__* t110 = __retval106;
  return t110;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v111) {
bb112:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this113;
  this113 = v111;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t114 = this113;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t114);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t114->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb115:
  int __retval116;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str117;
  struct std__allocator_char_ ref_tmp0118;
  int i119;
  int c120 = 0;
  __retval116 = c120;
  char* cast121 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0118);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str117, cast121, &ref_tmp0118);
  {
    std__allocator_char____allocator(&ref_tmp0118);
  }
    unsigned long r122 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(&str117);
    int cast123 = (int)r122;
    i119 = cast123;
    int t124 = i119;
    int c125 = 11;
    _Bool c126 = ((t124 == c125)) ? 1 : 0;
    if (c126) {
    } else {
      char* cast127 = (char*)&(_str_1);
      char* c128 = _str_2;
      unsigned int c129 = 18;
      char* cast130 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast127, c128, c129, cast130);
    }
    char* cast131 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r132 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast131);
    unsigned long r133 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(&str117);
    struct std__basic_ostream_char__std__char_traits_char__* r134 = std__ostream__operator__(r132, r133);
    char* cast135 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r136 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r134, cast135);
    int c137 = 0;
    __retval116 = c137;
    int t138 = __retval116;
    int ret_val139 = t138;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str117);
    }
    return ret_val139;
  int t140 = __retval116;
  return t140;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v141) {
bb142:
  struct std____new_allocator_char_* this143;
  this143 = v141;
  struct std____new_allocator_char_* t144 = this143;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v145) {
bb146:
  char* __r147;
  char* __retval148;
  __r147 = v145;
  char* t149 = __r147;
  __retval148 = t149;
  char* t150 = __retval148;
  return t150;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v151) {
bb152:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this153;
  char* __retval154;
  this153 = v151;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t155 = this153;
  char* cast156 = (char*)&(t155->field2._M_local_buf);
  char* r157 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast156);
  __retval154 = r157;
  char* t158 = __retval154;
  return t158;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v159, char* v160, struct std__allocator_char_* v161) {
bb162:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this163;
  char* __dat164;
  struct std__allocator_char_* __a165;
  this163 = v159;
  __dat164 = v160;
  __a165 = v161;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t166 = this163;
  struct std__allocator_char_* base167 = (struct std__allocator_char_*)((char *)t166 + 0);
  struct std__allocator_char_* t168 = __a165;
  std__allocator_char___allocator(base167, t168);
    char* t169 = __dat164;
    t166->_M_p = t169;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb170:
  _Bool __retval171;
    _Bool c172 = 0;
    __retval171 = c172;
    _Bool t173 = __retval171;
    return t173;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v174, char* v175) {
bb176:
  char* __c1177;
  char* __c2178;
  _Bool __retval179;
  __c1177 = v174;
  __c2178 = v175;
  char* t180 = __c1177;
  char t181 = *t180;
  int cast182 = (int)t181;
  char* t183 = __c2178;
  char t184 = *t183;
  int cast185 = (int)t184;
  _Bool c186 = ((cast182 == cast185)) ? 1 : 0;
  __retval179 = c186;
  _Bool t187 = __retval179;
  return t187;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v188) {
bb189:
  char* __p190;
  unsigned long __retval191;
  unsigned long __i192;
  __p190 = v188;
  unsigned long c193 = 0;
  __i192 = c193;
    char ref_tmp0194;
    while (1) {
      unsigned long t195 = __i192;
      char* t196 = __p190;
      char* ptr197 = &(t196)[t195];
      char c198 = 0;
      ref_tmp0194 = c198;
      _Bool r199 = __gnu_cxx__char_traits_char___eq(ptr197, &ref_tmp0194);
      _Bool u200 = !r199;
      if (!u200) break;
      unsigned long t201 = __i192;
      unsigned long u202 = t201 + 1;
      __i192 = u202;
    }
  unsigned long t203 = __i192;
  __retval191 = t203;
  unsigned long t204 = __retval191;
  return t204;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v205) {
bb206:
  char* __s207;
  unsigned long __retval208;
  __s207 = v205;
    _Bool r209 = std____is_constant_evaluated();
    if (r209) {
      char* t210 = __s207;
      unsigned long r211 = __gnu_cxx__char_traits_char___length(t210);
      __retval208 = r211;
      unsigned long t212 = __retval208;
      return t212;
    }
  char* t213 = __s207;
  unsigned long r214 = strlen(t213);
  __retval208 = r214;
  unsigned long t215 = __retval208;
  return t215;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v216, char* v217, struct std__random_access_iterator_tag v218) {
bb219:
  char* __first220;
  char* __last221;
  struct std__random_access_iterator_tag unnamed222;
  long __retval223;
  __first220 = v216;
  __last221 = v217;
  unnamed222 = v218;
  char* t224 = __last221;
  char* t225 = __first220;
  long diff226 = t224 - t225;
  __retval223 = diff226;
  long t227 = __retval223;
  return t227;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v228) {
bb229:
  char** unnamed230;
  struct std__random_access_iterator_tag __retval231;
  unnamed230 = v228;
  struct std__random_access_iterator_tag t232 = __retval231;
  return t232;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v233, char* v234) {
bb235:
  char* __first236;
  char* __last237;
  long __retval238;
  struct std__random_access_iterator_tag agg_tmp0239;
  __first236 = v233;
  __last237 = v234;
  char* t240 = __first236;
  char* t241 = __last237;
  struct std__random_access_iterator_tag r242 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first236);
  agg_tmp0239 = r242;
  struct std__random_access_iterator_tag t243 = agg_tmp0239;
  long r244 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t240, t241, t243);
  __retval238 = r244;
  long t245 = __retval238;
  return t245;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v246, char* v247) {
bb248:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this249;
  char* __p250;
  this249 = v246;
  __p250 = v247;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t251 = this249;
  char* t252 = __p250;
  t251->_M_dataplus._M_p = t252;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v253) {
bb254:
  struct std__allocator_char_* __a255;
  unsigned long __retval256;
  __a255 = v253;
  unsigned long c257 = -1;
  unsigned long c258 = 1;
  unsigned long b259 = c257 / c258;
  __retval256 = b259;
  unsigned long t260 = __retval256;
  return t260;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v261) {
bb262:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this263;
  struct std__allocator_char_* __retval264;
  this263 = v261;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t265 = this263;
  struct std__allocator_char_* base266 = (struct std__allocator_char_*)((char *)&(t265->_M_dataplus) + 0);
  __retval264 = base266;
  struct std__allocator_char_* t267 = __retval264;
  return t267;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v268, unsigned long* v269) {
bb270:
  unsigned long* __a271;
  unsigned long* __b272;
  unsigned long* __retval273;
  __a271 = v268;
  __b272 = v269;
    unsigned long* t274 = __b272;
    unsigned long t275 = *t274;
    unsigned long* t276 = __a271;
    unsigned long t277 = *t276;
    _Bool c278 = ((t275 < t277)) ? 1 : 0;
    if (c278) {
      unsigned long* t279 = __b272;
      __retval273 = t279;
      unsigned long* t280 = __retval273;
      return t280;
    }
  unsigned long* t281 = __a271;
  __retval273 = t281;
  unsigned long* t282 = __retval273;
  return t282;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v283) {
bb284:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this285;
  unsigned long __retval286;
  unsigned long __diffmax287;
  unsigned long __allocmax288;
  this285 = v283;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t289 = this285;
  unsigned long c290 = 9223372036854775807;
  __diffmax287 = c290;
  struct std__allocator_char_* r291 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t289);
  unsigned long r292 = std__allocator_traits_std__allocator_char_____max_size(r291);
  __allocmax288 = r292;
  unsigned long* r293 = unsigned_long_const__std__min_unsigned_long_(&__diffmax287, &__allocmax288);
  unsigned long t294 = *r293;
  unsigned long c295 = 1;
  unsigned long b296 = t294 - c295;
  __retval286 = b296;
  unsigned long t297 = __retval286;
  return t297;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v298) {
bb299:
  struct std____new_allocator_char_* this300;
  unsigned long __retval301;
  this300 = v298;
  struct std____new_allocator_char_* t302 = this300;
  unsigned long c303 = 9223372036854775807;
  unsigned long c304 = 1;
  unsigned long b305 = c303 / c304;
  __retval301 = b305;
  unsigned long t306 = __retval301;
  return t306;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v307, unsigned long v308, void* v309) {
bb310:
  struct std____new_allocator_char_* this311;
  unsigned long __n312;
  void* unnamed313;
  char* __retval314;
  this311 = v307;
  __n312 = v308;
  unnamed313 = v309;
  struct std____new_allocator_char_* t315 = this311;
    unsigned long t316 = __n312;
    unsigned long r317 = std____new_allocator_char____M_max_size___const(t315);
    _Bool c318 = ((t316 > r317)) ? 1 : 0;
    if (c318) {
        unsigned long t319 = __n312;
        unsigned long c320 = -1;
        unsigned long c321 = 1;
        unsigned long b322 = c320 / c321;
        _Bool c323 = ((t319 > b322)) ? 1 : 0;
        if (c323) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c324 = 1;
    unsigned long c325 = 16;
    _Bool c326 = ((c324 > c325)) ? 1 : 0;
    if (c326) {
      unsigned long __al327;
      unsigned long c328 = 1;
      __al327 = c328;
      unsigned long t329 = __n312;
      unsigned long c330 = 1;
      unsigned long b331 = t329 * c330;
      unsigned long t332 = __al327;
      void* r333 = operator_new_2(b331, t332);
      char* cast334 = (char*)r333;
      __retval314 = cast334;
      char* t335 = __retval314;
      return t335;
    }
  unsigned long t336 = __n312;
  unsigned long c337 = 1;
  unsigned long b338 = t336 * c337;
  void* r339 = operator_new(b338);
  char* cast340 = (char*)r339;
  __retval314 = cast340;
  char* t341 = __retval314;
  return t341;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v342, unsigned long v343) {
bb344:
  struct std__allocator_char_* this345;
  unsigned long __n346;
  char* __retval347;
  this345 = v342;
  __n346 = v343;
  struct std__allocator_char_* t348 = this345;
    _Bool r349 = std____is_constant_evaluated();
    if (r349) {
        unsigned long t350 = __n346;
        unsigned long c351 = 1;
        unsigned long ovr352;
        _Bool ovf353 = __builtin_mul_overflow(t350, c351, &ovr352);
        __n346 = ovr352;
        if (ovf353) {
          std____throw_bad_array_new_length();
        }
      unsigned long t354 = __n346;
      void* r355 = operator_new(t354);
      char* cast356 = (char*)r355;
      __retval347 = cast356;
      char* t357 = __retval347;
      return t357;
    }
  struct std____new_allocator_char_* base358 = (struct std____new_allocator_char_*)((char *)t348 + 0);
  unsigned long t359 = __n346;
  void* c360 = ((void*)0);
  char* r361 = std____new_allocator_char___allocate(base358, t359, c360);
  __retval347 = r361;
  char* t362 = __retval347;
  return t362;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v363, unsigned long v364) {
bb365:
  struct std__allocator_char_* __a366;
  unsigned long __n367;
  char* __retval368;
  __a366 = v363;
  __n367 = v364;
  struct std__allocator_char_* t369 = __a366;
  unsigned long t370 = __n367;
  char* r371 = std__allocator_char___allocate(t369, t370);
  __retval368 = r371;
  char* t372 = __retval368;
  return t372;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v373, unsigned long v374) {
bb375:
  struct std__allocator_char_* __a376;
  unsigned long __n377;
  char* __retval378;
  char* __p379;
  __a376 = v373;
  __n377 = v374;
  struct std__allocator_char_* t380 = __a376;
  unsigned long t381 = __n377;
  char* r382 = std__allocator_traits_std__allocator_char_____allocate(t380, t381);
  __p379 = r382;
  char* t383 = __p379;
  __retval378 = t383;
  char* t384 = __retval378;
  return t384;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v385) {
bb386:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this387;
  struct std__allocator_char_* __retval388;
  this387 = v385;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t389 = this387;
  struct std__allocator_char_* base390 = (struct std__allocator_char_*)((char *)&(t389->_M_dataplus) + 0);
  __retval388 = base390;
  struct std__allocator_char_* t391 = __retval388;
  return t391;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v392, unsigned long* v393, unsigned long v394) {
bb395:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this396;
  unsigned long* __capacity397;
  unsigned long __old_capacity398;
  char* __retval399;
  this396 = v392;
  __capacity397 = v393;
  __old_capacity398 = v394;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t400 = this396;
    unsigned long* t401 = __capacity397;
    unsigned long t402 = *t401;
    unsigned long r403 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t400);
    _Bool c404 = ((t402 > r403)) ? 1 : 0;
    if (c404) {
      char* cast405 = (char*)&(_str_6);
      std____throw_length_error(cast405);
    }
    unsigned long* t406 = __capacity397;
    unsigned long t407 = *t406;
    unsigned long t408 = __old_capacity398;
    _Bool c409 = ((t407 > t408)) ? 1 : 0;
    _Bool ternary410;
    if (c409) {
      unsigned long* t411 = __capacity397;
      unsigned long t412 = *t411;
      unsigned long c413 = 2;
      unsigned long t414 = __old_capacity398;
      unsigned long b415 = c413 * t414;
      _Bool c416 = ((t412 < b415)) ? 1 : 0;
      ternary410 = (_Bool)c416;
    } else {
      _Bool c417 = 0;
      ternary410 = (_Bool)c417;
    }
    if (ternary410) {
      unsigned long c418 = 2;
      unsigned long t419 = __old_capacity398;
      unsigned long b420 = c418 * t419;
      unsigned long* t421 = __capacity397;
      *t421 = b420;
        unsigned long* t422 = __capacity397;
        unsigned long t423 = *t422;
        unsigned long r424 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t400);
        _Bool c425 = ((t423 > r424)) ? 1 : 0;
        if (c425) {
          unsigned long r426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t400);
          unsigned long* t427 = __capacity397;
          *t427 = r426;
        }
    }
  struct std__allocator_char_* r428 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t400);
  unsigned long* t429 = __capacity397;
  unsigned long t430 = *t429;
  unsigned long c431 = 1;
  unsigned long b432 = t430 + c431;
  char* r433 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r428, b432);
  __retval399 = r433;
  char* t434 = __retval399;
  return t434;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v435, unsigned long v436) {
bb437:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this438;
  unsigned long __capacity439;
  this438 = v435;
  __capacity439 = v436;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t440 = this438;
  unsigned long t441 = __capacity439;
  t440->field2._M_allocated_capacity = t441;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb442:
  _Bool __retval443;
    _Bool c444 = 0;
    __retval443 = c444;
    _Bool t445 = __retval443;
    return t445;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v446) {
bb447:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this448;
  this448 = v446;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t449 = this448;
    _Bool r450 = std__is_constant_evaluated();
    if (r450) {
        unsigned long __i451;
        unsigned long c452 = 0;
        __i451 = c452;
        while (1) {
          unsigned long t454 = __i451;
          unsigned long c455 = 15;
          _Bool c456 = ((t454 <= c455)) ? 1 : 0;
          if (!c456) break;
          char c457 = 0;
          unsigned long t458 = __i451;
          t449->field2._M_local_buf[t458] = c457;
        for_step453: ;
          unsigned long t459 = __i451;
          unsigned long u460 = t459 + 1;
          __i451 = u460;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v461, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v462) {
bb463:
  struct _Guard* this464;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s465;
  this464 = v461;
  __s465 = v462;
  struct _Guard* t466 = this464;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t467 = __s465;
  t466->_M_guarded = t467;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v468, char* v469) {
bb470:
  char* __location471;
  char* __args472;
  char* __retval473;
  void* __loc474;
  __location471 = v468;
  __args472 = v469;
  char* t475 = __location471;
  void* cast476 = (void*)t475;
  __loc474 = cast476;
    void* t477 = __loc474;
    char* cast478 = (char*)t477;
    char* t479 = __args472;
    char t480 = *t479;
    *cast478 = t480;
    __retval473 = cast478;
    char* t481 = __retval473;
    return t481;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v482, char* v483) {
bb484:
  char* __c1485;
  char* __c2486;
  __c1485 = v482;
  __c2486 = v483;
    _Bool r487 = std____is_constant_evaluated();
    if (r487) {
      char* t488 = __c1485;
      char* t489 = __c2486;
      char* r490 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t488, t489);
    } else {
      char* t491 = __c2486;
      char t492 = *t491;
      char* t493 = __c1485;
      *t493 = t492;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v494, char* v495, unsigned long v496) {
bb497:
  char* __s1498;
  char* __s2499;
  unsigned long __n500;
  char* __retval501;
  __s1498 = v494;
  __s2499 = v495;
  __n500 = v496;
    unsigned long t502 = __n500;
    unsigned long c503 = 0;
    _Bool c504 = ((t502 == c503)) ? 1 : 0;
    if (c504) {
      char* t505 = __s1498;
      __retval501 = t505;
      char* t506 = __retval501;
      return t506;
    }
    _Bool r507 = std____is_constant_evaluated();
    if (r507) {
        unsigned long __i508;
        unsigned long c509 = 0;
        __i508 = c509;
        while (1) {
          unsigned long t511 = __i508;
          unsigned long t512 = __n500;
          _Bool c513 = ((t511 < t512)) ? 1 : 0;
          if (!c513) break;
          char* t514 = __s1498;
          unsigned long t515 = __i508;
          char* ptr516 = &(t514)[t515];
          unsigned long t517 = __i508;
          char* t518 = __s2499;
          char* ptr519 = &(t518)[t517];
          char* r520 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr516, ptr519);
        for_step510: ;
          unsigned long t521 = __i508;
          unsigned long u522 = t521 + 1;
          __i508 = u522;
        }
      char* t523 = __s1498;
      __retval501 = t523;
      char* t524 = __retval501;
      return t524;
    }
  char* t525 = __s1498;
  void* cast526 = (void*)t525;
  char* t527 = __s2499;
  void* cast528 = (void*)t527;
  unsigned long t529 = __n500;
  unsigned long c530 = 1;
  unsigned long b531 = t529 * c530;
  void* r532 = memcpy(cast526, cast528, b531);
  char* t533 = __s1498;
  __retval501 = t533;
  char* t534 = __retval501;
  return t534;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v535, char* v536, unsigned long v537) {
bb538:
  char* __s1539;
  char* __s2540;
  unsigned long __n541;
  char* __retval542;
  __s1539 = v535;
  __s2540 = v536;
  __n541 = v537;
    unsigned long t543 = __n541;
    unsigned long c544 = 0;
    _Bool c545 = ((t543 == c544)) ? 1 : 0;
    if (c545) {
      char* t546 = __s1539;
      __retval542 = t546;
      char* t547 = __retval542;
      return t547;
    }
    _Bool r548 = std____is_constant_evaluated();
    if (r548) {
      char* t549 = __s1539;
      char* t550 = __s2540;
      unsigned long t551 = __n541;
      char* r552 = __gnu_cxx__char_traits_char___copy(t549, t550, t551);
      __retval542 = r552;
      char* t553 = __retval542;
      return t553;
    }
  char* t554 = __s1539;
  void* cast555 = (void*)t554;
  char* t556 = __s2540;
  void* cast557 = (void*)t556;
  unsigned long t558 = __n541;
  void* r559 = memcpy(cast555, cast557, t558);
  char* cast560 = (char*)r559;
  __retval542 = cast560;
  char* t561 = __retval542;
  return t561;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v562, char* v563, unsigned long v564) {
bb565:
  char* __d566;
  char* __s567;
  unsigned long __n568;
  __d566 = v562;
  __s567 = v563;
  __n568 = v564;
    unsigned long t569 = __n568;
    unsigned long c570 = 1;
    _Bool c571 = ((t569 == c570)) ? 1 : 0;
    if (c571) {
      char* t572 = __d566;
      char* t573 = __s567;
      std__char_traits_char___assign(t572, t573);
    } else {
      char* t574 = __d566;
      char* t575 = __s567;
      unsigned long t576 = __n568;
      char* r577 = std__char_traits_char___copy(t574, t575, t576);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v578) {
bb579:
  char* __it580;
  char* __retval581;
  __it580 = v578;
  char* t582 = __it580;
  __retval581 = t582;
  char* t583 = __retval581;
  return t583;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v584, char* v585, char* v586) {
bb587:
  char* __p588;
  char* __k1589;
  char* __k2590;
  __p588 = v584;
  __k1589 = v585;
  __k2590 = v586;
    char* t591 = __p588;
    char* t592 = __k1589;
    char* r593 = char_const__std____niter_base_char_const__(t592);
    char* t594 = __k2590;
    char* t595 = __k1589;
    long diff596 = t594 - t595;
    unsigned long cast597 = (unsigned long)diff596;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t591, r593, cast597);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v598) {
bb599:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this600;
  char* __retval601;
  this600 = v598;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t602 = this600;
  char* t603 = t602->_M_dataplus._M_p;
  __retval601 = t603;
  char* t604 = __retval601;
  return t604;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v605, unsigned long v606) {
bb607:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this608;
  unsigned long __length609;
  this608 = v605;
  __length609 = v606;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t610 = this608;
  unsigned long t611 = __length609;
  t610->_M_string_length = t611;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v612, unsigned long v613) {
bb614:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this615;
  unsigned long __n616;
  char ref_tmp0617;
  this615 = v612;
  __n616 = v613;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t618 = this615;
  unsigned long t619 = __n616;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t618, t619);
  unsigned long t620 = __n616;
  char* r621 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t618);
  char* ptr622 = &(r621)[t620];
  char c623 = 0;
  ref_tmp0617 = c623;
  std__char_traits_char___assign(ptr622, &ref_tmp0617);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v624) {
bb625:
  struct _Guard* this626;
  this626 = v624;
  struct _Guard* t627 = this626;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t628 = t627->_M_guarded;
    _Bool cast629 = (_Bool)t628;
    if (cast629) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t630 = t627->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t630);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v631, char* v632, char* v633, struct std__forward_iterator_tag v634) {
bb635:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this636;
  char* __beg637;
  char* __end638;
  struct std__forward_iterator_tag unnamed639;
  unsigned long __dnew640;
  struct _Guard __guard641;
  this636 = v631;
  __beg637 = v632;
  __end638 = v633;
  unnamed639 = v634;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t642 = this636;
  char* t643 = __beg637;
  char* t644 = __end638;
  long r645 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t643, t644);
  unsigned long cast646 = (unsigned long)r645;
  __dnew640 = cast646;
    unsigned long t647 = __dnew640;
    unsigned long c648 = 15;
    _Bool c649 = ((t647 > c648)) ? 1 : 0;
    if (c649) {
      unsigned long c650 = 0;
      char* r651 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t642, &__dnew640, c650);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t642, r651);
      unsigned long t652 = __dnew640;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t642, t652);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t642);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard641, t642);
    char* r653 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t642);
    char* t654 = __beg637;
    char* t655 = __end638;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r653, t654, t655);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c656 = ((void*)0);
    __guard641._M_guarded = c656;
    unsigned long t657 = __dnew640;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t642, t657);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard641);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v658) {
bb659:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this660;
  this660 = v658;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t661 = this660;
  {
    struct std__allocator_char_* base662 = (struct std__allocator_char_*)((char *)t661 + 0);
    std__allocator_char____allocator(base662);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v663, struct std____new_allocator_char_* v664) {
bb665:
  struct std____new_allocator_char_* this666;
  struct std____new_allocator_char_* unnamed667;
  this666 = v663;
  unnamed667 = v664;
  struct std____new_allocator_char_* t668 = this666;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v669, struct std__allocator_char_* v670) {
bb671:
  struct std__allocator_char_* this672;
  struct std__allocator_char_* __a673;
  this672 = v669;
  __a673 = v670;
  struct std__allocator_char_* t674 = this672;
  struct std____new_allocator_char_* base675 = (struct std____new_allocator_char_*)((char *)t674 + 0);
  struct std__allocator_char_* t676 = __a673;
  struct std____new_allocator_char_* base677 = (struct std____new_allocator_char_*)((char *)t676 + 0);
  std____new_allocator_char_____new_allocator(base675, base677);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v678) {
bb679:
  char* __r680;
  char* __retval681;
  __r680 = v678;
  char* t682 = __r680;
  __retval681 = t682;
  char* t683 = __retval681;
  return t683;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v684) {
bb685:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this686;
  char* __retval687;
  this686 = v684;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t688 = this686;
  char* cast689 = (char*)&(t688->field2._M_local_buf);
  char* r690 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast689);
  __retval687 = r690;
  char* t691 = __retval687;
  return t691;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v692) {
bb693:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this694;
  _Bool __retval695;
  this694 = v692;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t696 = this694;
    char* r697 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t696);
    char* r698 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t696);
    _Bool c699 = ((r697 == r698)) ? 1 : 0;
    if (c699) {
        unsigned long t700 = t696->_M_string_length;
        unsigned long c701 = 15;
        _Bool c702 = ((t700 > c701)) ? 1 : 0;
        if (c702) {
          __builtin_unreachable();
        }
      _Bool c703 = 1;
      __retval695 = c703;
      _Bool t704 = __retval695;
      return t704;
    }
  _Bool c705 = 0;
  __retval695 = c705;
  _Bool t706 = __retval695;
  return t706;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v707, char* v708, unsigned long v709) {
bb710:
  struct std____new_allocator_char_* this711;
  char* __p712;
  unsigned long __n713;
  this711 = v707;
  __p712 = v708;
  __n713 = v709;
  struct std____new_allocator_char_* t714 = this711;
    unsigned long c715 = 1;
    unsigned long c716 = 16;
    _Bool c717 = ((c715 > c716)) ? 1 : 0;
    if (c717) {
      char* t718 = __p712;
      void* cast719 = (void*)t718;
      unsigned long t720 = __n713;
      unsigned long c721 = 1;
      unsigned long b722 = t720 * c721;
      unsigned long c723 = 1;
      operator_delete_3(cast719, b722, c723);
      return;
    }
  char* t724 = __p712;
  void* cast725 = (void*)t724;
  unsigned long t726 = __n713;
  unsigned long c727 = 1;
  unsigned long b728 = t726 * c727;
  operator_delete_2(cast725, b728);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v729, char* v730, unsigned long v731) {
bb732:
  struct std__allocator_char_* this733;
  char* __p734;
  unsigned long __n735;
  this733 = v729;
  __p734 = v730;
  __n735 = v731;
  struct std__allocator_char_* t736 = this733;
    _Bool r737 = std____is_constant_evaluated();
    if (r737) {
      char* t738 = __p734;
      void* cast739 = (void*)t738;
      operator_delete(cast739);
      return;
    }
  struct std____new_allocator_char_* base740 = (struct std____new_allocator_char_*)((char *)t736 + 0);
  char* t741 = __p734;
  unsigned long t742 = __n735;
  std____new_allocator_char___deallocate(base740, t741, t742);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v743, char* v744, unsigned long v745) {
bb746:
  struct std__allocator_char_* __a747;
  char* __p748;
  unsigned long __n749;
  __a747 = v743;
  __p748 = v744;
  __n749 = v745;
  struct std__allocator_char_* t750 = __a747;
  char* t751 = __p748;
  unsigned long t752 = __n749;
  std__allocator_char___deallocate(t750, t751, t752);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v753, unsigned long v754) {
bb755:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this756;
  unsigned long __size757;
  this756 = v753;
  __size757 = v754;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t758 = this756;
  struct std__allocator_char_* r759 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t758);
  char* r760 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t758);
  unsigned long t761 = __size757;
  unsigned long c762 = 1;
  unsigned long b763 = t761 + c762;
  std__allocator_traits_std__allocator_char_____deallocate(r759, r760, b763);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v764) {
bb765:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this766;
  this766 = v764;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t767 = this766;
    _Bool r768 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t767);
    _Bool u769 = !r768;
    if (u769) {
      unsigned long t770 = t767->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t767, t770);
    }
  return;
}

