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
char _str_1[30] = "str.length() == strlen (cstr)";
char _str_2[108] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/string/string_data_1/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[36] = "str and cstr have the same length.\n";
char _str_4[40] = "memcmp (cstr, str.data(), length ) == 0";
char _str_5[37] = "str and cstr have the same content.\n";
char _str_6[50] = "basic_string: construction from null is not valid";
char _str_7[24] = "basic_string::_M_create";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern unsigned long strlen(char* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
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
        char* cast20 = (char*)&(_str_6);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v44) {
bb45:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this46;
  unsigned long __retval47;
  this46 = v44;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t48 = this46;
  unsigned long r49 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t48);
  __retval47 = r49;
  unsigned long t50 = __retval47;
  return t50;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v51, int v52) {
bb53:
  int __a54;
  int __b55;
  int __retval56;
  __a54 = v51;
  __b55 = v52;
  int t57 = __a54;
  int t58 = __b55;
  int b59 = t57 | t58;
  __retval56 = b59;
  int t60 = __retval56;
  return t60;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v61) {
bb62:
  struct std__basic_ios_char__std__char_traits_char__* this63;
  int __retval64;
  this63 = v61;
  struct std__basic_ios_char__std__char_traits_char__* t65 = this63;
  struct std__ios_base* base66 = (struct std__ios_base*)((char *)t65 + 0);
  int t67 = base66->_M_streambuf_state;
  __retval64 = t67;
  int t68 = __retval64;
  return t68;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v69, int v70) {
bb71:
  struct std__basic_ios_char__std__char_traits_char__* this72;
  int __state73;
  this72 = v69;
  __state73 = v70;
  struct std__basic_ios_char__std__char_traits_char__* t74 = this72;
  int r75 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t74);
  int t76 = __state73;
  int r77 = std__operator_(r75, t76);
  std__basic_ios_char__std__char_traits_char_____clear(t74, r77);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v78, char* v79) {
bb80:
  struct std__basic_ostream_char__std__char_traits_char__* __out81;
  char* __s82;
  struct std__basic_ostream_char__std__char_traits_char__* __retval83;
  __out81 = v78;
  __s82 = v79;
    char* t84 = __s82;
    _Bool cast85 = (_Bool)t84;
    _Bool u86 = !cast85;
    if (u86) {
      struct std__basic_ostream_char__std__char_traits_char__* t87 = __out81;
      void** v88 = (void**)t87;
      void* v89 = *((void**)v88);
      unsigned char* cast90 = (unsigned char*)v89;
      long c91 = -24;
      unsigned char* ptr92 = &(cast90)[c91];
      long* cast93 = (long*)ptr92;
      long t94 = *cast93;
      unsigned char* cast95 = (unsigned char*)t87;
      unsigned char* ptr96 = &(cast95)[t94];
      struct std__basic_ostream_char__std__char_traits_char__* cast97 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr96;
      struct std__basic_ios_char__std__char_traits_char__* cast98 = (struct std__basic_ios_char__std__char_traits_char__*)cast97;
      int t99 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast98, t99);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t100 = __out81;
      char* t101 = __s82;
      char* t102 = __s82;
      unsigned long r103 = std__char_traits_char___length(t102);
      long cast104 = (long)r103;
      struct std__basic_ostream_char__std__char_traits_char__* r105 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t100, t101, cast104);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t106 = __out81;
  __retval83 = t106;
  struct std__basic_ostream_char__std__char_traits_char__* t107 = __retval83;
  return t107;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v108) {
bb109:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this110;
  char* __retval111;
  this110 = v108;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t112 = this110;
  char* r113 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t112);
  __retval111 = r113;
  char* t114 = __retval111;
  return t114;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v115) {
bb116:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this117;
  this117 = v115;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t118 = this117;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t118);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t118->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb119:
  int __retval120;
  int length121;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ str122;
  struct std__allocator_char_ ref_tmp0123;
  char* cstr124;
  int c125 = 0;
  __retval120 = c125;
  char* cast126 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0123);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&str122, cast126, &ref_tmp0123);
  {
    std__allocator_char____allocator(&ref_tmp0123);
  }
    char* cast127 = (char*)&(_str);
    cstr124 = cast127;
    unsigned long r128 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&str122);
    char* t129 = cstr124;
    unsigned long r130 = strlen(t129);
    _Bool c131 = ((r128 == r130)) ? 1 : 0;
    if (c131) {
    } else {
      char* cast132 = (char*)&(_str_1);
      char* c133 = _str_2;
      unsigned int c134 = 21;
      char* cast135 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast132, c133, c134, cast135);
    }
      unsigned long r136 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&str122);
      char* t137 = cstr124;
      unsigned long r138 = strlen(t137);
      _Bool c139 = ((r136 == r138)) ? 1 : 0;
      if (c139) {
        char* cast140 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r141 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast140);
        unsigned long r142 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(&str122);
        int cast143 = (int)r142;
        length121 = cast143;
        char* t144 = cstr124;
        void* cast145 = (void*)t144;
        char* r146 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(&str122);
        void* cast147 = (void*)r146;
        int t148 = length121;
        unsigned long cast149 = (unsigned long)t148;
        int r150 = memcmp(cast145, cast147, cast149);
        int c151 = 0;
        _Bool c152 = ((r150 == c151)) ? 1 : 0;
        if (c152) {
        } else {
          char* cast153 = (char*)&(_str_4);
          char* c154 = _str_2;
          unsigned int c155 = 27;
          char* cast156 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast153, c154, c155, cast156);
        }
          char* t157 = cstr124;
          void* cast158 = (void*)t157;
          char* r159 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data(&str122);
          void* cast160 = (void*)r159;
          int t161 = length121;
          unsigned long cast162 = (unsigned long)t161;
          int r163 = memcmp(cast158, cast160, cast162);
          int c164 = 0;
          _Bool c165 = ((r163 == c164)) ? 1 : 0;
          if (c165) {
            char* cast166 = (char*)&(_str_5);
            struct std__basic_ostream_char__std__char_traits_char__* r167 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast166);
          }
      }
    int c168 = 0;
    __retval120 = c168;
    int t169 = __retval120;
    int ret_val170 = t169;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&str122);
    }
    return ret_val170;
  int t171 = __retval120;
  return t171;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v172) {
bb173:
  struct std____new_allocator_char_* this174;
  this174 = v172;
  struct std____new_allocator_char_* t175 = this174;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v176) {
bb177:
  char* __r178;
  char* __retval179;
  __r178 = v176;
  char* t180 = __r178;
  __retval179 = t180;
  char* t181 = __retval179;
  return t181;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v182) {
bb183:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this184;
  char* __retval185;
  this184 = v182;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t186 = this184;
  char* cast187 = (char*)&(t186->field2._M_local_buf);
  char* r188 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast187);
  __retval185 = r188;
  char* t189 = __retval185;
  return t189;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v190, char* v191, struct std__allocator_char_* v192) {
bb193:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this194;
  char* __dat195;
  struct std__allocator_char_* __a196;
  this194 = v190;
  __dat195 = v191;
  __a196 = v192;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t197 = this194;
  struct std__allocator_char_* base198 = (struct std__allocator_char_*)((char *)t197 + 0);
  struct std__allocator_char_* t199 = __a196;
  std__allocator_char___allocator(base198, t199);
    char* t200 = __dat195;
    t197->_M_p = t200;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb201:
  _Bool __retval202;
    _Bool c203 = 0;
    __retval202 = c203;
    _Bool t204 = __retval202;
    return t204;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v205, char* v206) {
bb207:
  char* __c1208;
  char* __c2209;
  _Bool __retval210;
  __c1208 = v205;
  __c2209 = v206;
  char* t211 = __c1208;
  char t212 = *t211;
  int cast213 = (int)t212;
  char* t214 = __c2209;
  char t215 = *t214;
  int cast216 = (int)t215;
  _Bool c217 = ((cast213 == cast216)) ? 1 : 0;
  __retval210 = c217;
  _Bool t218 = __retval210;
  return t218;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v219) {
bb220:
  char* __p221;
  unsigned long __retval222;
  unsigned long __i223;
  __p221 = v219;
  unsigned long c224 = 0;
  __i223 = c224;
    char ref_tmp0225;
    while (1) {
      unsigned long t226 = __i223;
      char* t227 = __p221;
      char* ptr228 = &(t227)[t226];
      char c229 = 0;
      ref_tmp0225 = c229;
      _Bool r230 = __gnu_cxx__char_traits_char___eq(ptr228, &ref_tmp0225);
      _Bool u231 = !r230;
      if (!u231) break;
      unsigned long t232 = __i223;
      unsigned long u233 = t232 + 1;
      __i223 = u233;
    }
  unsigned long t234 = __i223;
  __retval222 = t234;
  unsigned long t235 = __retval222;
  return t235;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v236) {
bb237:
  char* __s238;
  unsigned long __retval239;
  __s238 = v236;
    _Bool r240 = std____is_constant_evaluated();
    if (r240) {
      char* t241 = __s238;
      unsigned long r242 = __gnu_cxx__char_traits_char___length(t241);
      __retval239 = r242;
      unsigned long t243 = __retval239;
      return t243;
    }
  char* t244 = __s238;
  unsigned long r245 = strlen(t244);
  __retval239 = r245;
  unsigned long t246 = __retval239;
  return t246;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v247, char* v248, struct std__random_access_iterator_tag v249) {
bb250:
  char* __first251;
  char* __last252;
  struct std__random_access_iterator_tag unnamed253;
  long __retval254;
  __first251 = v247;
  __last252 = v248;
  unnamed253 = v249;
  char* t255 = __last252;
  char* t256 = __first251;
  long diff257 = t255 - t256;
  __retval254 = diff257;
  long t258 = __retval254;
  return t258;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v259) {
bb260:
  char** unnamed261;
  struct std__random_access_iterator_tag __retval262;
  unnamed261 = v259;
  struct std__random_access_iterator_tag t263 = __retval262;
  return t263;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v264, char* v265) {
bb266:
  char* __first267;
  char* __last268;
  long __retval269;
  struct std__random_access_iterator_tag agg_tmp0270;
  __first267 = v264;
  __last268 = v265;
  char* t271 = __first267;
  char* t272 = __last268;
  struct std__random_access_iterator_tag r273 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first267);
  agg_tmp0270 = r273;
  struct std__random_access_iterator_tag t274 = agg_tmp0270;
  long r275 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t271, t272, t274);
  __retval269 = r275;
  long t276 = __retval269;
  return t276;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v277, char* v278) {
bb279:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this280;
  char* __p281;
  this280 = v277;
  __p281 = v278;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t282 = this280;
  char* t283 = __p281;
  t282->_M_dataplus._M_p = t283;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v284) {
bb285:
  struct std__allocator_char_* __a286;
  unsigned long __retval287;
  __a286 = v284;
  unsigned long c288 = -1;
  unsigned long c289 = 1;
  unsigned long b290 = c288 / c289;
  __retval287 = b290;
  unsigned long t291 = __retval287;
  return t291;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v292) {
bb293:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this294;
  struct std__allocator_char_* __retval295;
  this294 = v292;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t296 = this294;
  struct std__allocator_char_* base297 = (struct std__allocator_char_*)((char *)&(t296->_M_dataplus) + 0);
  __retval295 = base297;
  struct std__allocator_char_* t298 = __retval295;
  return t298;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v299, unsigned long* v300) {
bb301:
  unsigned long* __a302;
  unsigned long* __b303;
  unsigned long* __retval304;
  __a302 = v299;
  __b303 = v300;
    unsigned long* t305 = __b303;
    unsigned long t306 = *t305;
    unsigned long* t307 = __a302;
    unsigned long t308 = *t307;
    _Bool c309 = ((t306 < t308)) ? 1 : 0;
    if (c309) {
      unsigned long* t310 = __b303;
      __retval304 = t310;
      unsigned long* t311 = __retval304;
      return t311;
    }
  unsigned long* t312 = __a302;
  __retval304 = t312;
  unsigned long* t313 = __retval304;
  return t313;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v314) {
bb315:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this316;
  unsigned long __retval317;
  unsigned long __diffmax318;
  unsigned long __allocmax319;
  this316 = v314;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t320 = this316;
  unsigned long c321 = 9223372036854775807;
  __diffmax318 = c321;
  struct std__allocator_char_* r322 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t320);
  unsigned long r323 = std__allocator_traits_std__allocator_char_____max_size(r322);
  __allocmax319 = r323;
  unsigned long* r324 = unsigned_long_const__std__min_unsigned_long_(&__diffmax318, &__allocmax319);
  unsigned long t325 = *r324;
  unsigned long c326 = 1;
  unsigned long b327 = t325 - c326;
  __retval317 = b327;
  unsigned long t328 = __retval317;
  return t328;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v329) {
bb330:
  struct std____new_allocator_char_* this331;
  unsigned long __retval332;
  this331 = v329;
  struct std____new_allocator_char_* t333 = this331;
  unsigned long c334 = 9223372036854775807;
  unsigned long c335 = 1;
  unsigned long b336 = c334 / c335;
  __retval332 = b336;
  unsigned long t337 = __retval332;
  return t337;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v338, unsigned long v339, void* v340) {
bb341:
  struct std____new_allocator_char_* this342;
  unsigned long __n343;
  void* unnamed344;
  char* __retval345;
  this342 = v338;
  __n343 = v339;
  unnamed344 = v340;
  struct std____new_allocator_char_* t346 = this342;
    unsigned long t347 = __n343;
    unsigned long r348 = std____new_allocator_char____M_max_size___const(t346);
    _Bool c349 = ((t347 > r348)) ? 1 : 0;
    if (c349) {
        unsigned long t350 = __n343;
        unsigned long c351 = -1;
        unsigned long c352 = 1;
        unsigned long b353 = c351 / c352;
        _Bool c354 = ((t350 > b353)) ? 1 : 0;
        if (c354) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c355 = 1;
    unsigned long c356 = 16;
    _Bool c357 = ((c355 > c356)) ? 1 : 0;
    if (c357) {
      unsigned long __al358;
      unsigned long c359 = 1;
      __al358 = c359;
      unsigned long t360 = __n343;
      unsigned long c361 = 1;
      unsigned long b362 = t360 * c361;
      unsigned long t363 = __al358;
      void* r364 = operator_new_2(b362, t363);
      char* cast365 = (char*)r364;
      __retval345 = cast365;
      char* t366 = __retval345;
      return t366;
    }
  unsigned long t367 = __n343;
  unsigned long c368 = 1;
  unsigned long b369 = t367 * c368;
  void* r370 = operator_new(b369);
  char* cast371 = (char*)r370;
  __retval345 = cast371;
  char* t372 = __retval345;
  return t372;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v373, unsigned long v374) {
bb375:
  struct std__allocator_char_* this376;
  unsigned long __n377;
  char* __retval378;
  this376 = v373;
  __n377 = v374;
  struct std__allocator_char_* t379 = this376;
    _Bool r380 = std____is_constant_evaluated();
    if (r380) {
        unsigned long t381 = __n377;
        unsigned long c382 = 1;
        unsigned long ovr383;
        _Bool ovf384 = __builtin_mul_overflow(t381, c382, &ovr383);
        __n377 = ovr383;
        if (ovf384) {
          std____throw_bad_array_new_length();
        }
      unsigned long t385 = __n377;
      void* r386 = operator_new(t385);
      char* cast387 = (char*)r386;
      __retval378 = cast387;
      char* t388 = __retval378;
      return t388;
    }
  struct std____new_allocator_char_* base389 = (struct std____new_allocator_char_*)((char *)t379 + 0);
  unsigned long t390 = __n377;
  void* c391 = ((void*)0);
  char* r392 = std____new_allocator_char___allocate(base389, t390, c391);
  __retval378 = r392;
  char* t393 = __retval378;
  return t393;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v394, unsigned long v395) {
bb396:
  struct std__allocator_char_* __a397;
  unsigned long __n398;
  char* __retval399;
  __a397 = v394;
  __n398 = v395;
  struct std__allocator_char_* t400 = __a397;
  unsigned long t401 = __n398;
  char* r402 = std__allocator_char___allocate(t400, t401);
  __retval399 = r402;
  char* t403 = __retval399;
  return t403;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v404, unsigned long v405) {
bb406:
  struct std__allocator_char_* __a407;
  unsigned long __n408;
  char* __retval409;
  char* __p410;
  __a407 = v404;
  __n408 = v405;
  struct std__allocator_char_* t411 = __a407;
  unsigned long t412 = __n408;
  char* r413 = std__allocator_traits_std__allocator_char_____allocate(t411, t412);
  __p410 = r413;
  char* t414 = __p410;
  __retval409 = t414;
  char* t415 = __retval409;
  return t415;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v416) {
bb417:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this418;
  struct std__allocator_char_* __retval419;
  this418 = v416;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t420 = this418;
  struct std__allocator_char_* base421 = (struct std__allocator_char_*)((char *)&(t420->_M_dataplus) + 0);
  __retval419 = base421;
  struct std__allocator_char_* t422 = __retval419;
  return t422;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v423, unsigned long* v424, unsigned long v425) {
bb426:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this427;
  unsigned long* __capacity428;
  unsigned long __old_capacity429;
  char* __retval430;
  this427 = v423;
  __capacity428 = v424;
  __old_capacity429 = v425;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t431 = this427;
    unsigned long* t432 = __capacity428;
    unsigned long t433 = *t432;
    unsigned long r434 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t431);
    _Bool c435 = ((t433 > r434)) ? 1 : 0;
    if (c435) {
      char* cast436 = (char*)&(_str_7);
      std____throw_length_error(cast436);
    }
    unsigned long* t437 = __capacity428;
    unsigned long t438 = *t437;
    unsigned long t439 = __old_capacity429;
    _Bool c440 = ((t438 > t439)) ? 1 : 0;
    _Bool ternary441;
    if (c440) {
      unsigned long* t442 = __capacity428;
      unsigned long t443 = *t442;
      unsigned long c444 = 2;
      unsigned long t445 = __old_capacity429;
      unsigned long b446 = c444 * t445;
      _Bool c447 = ((t443 < b446)) ? 1 : 0;
      ternary441 = (_Bool)c447;
    } else {
      _Bool c448 = 0;
      ternary441 = (_Bool)c448;
    }
    if (ternary441) {
      unsigned long c449 = 2;
      unsigned long t450 = __old_capacity429;
      unsigned long b451 = c449 * t450;
      unsigned long* t452 = __capacity428;
      *t452 = b451;
        unsigned long* t453 = __capacity428;
        unsigned long t454 = *t453;
        unsigned long r455 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t431);
        _Bool c456 = ((t454 > r455)) ? 1 : 0;
        if (c456) {
          unsigned long r457 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t431);
          unsigned long* t458 = __capacity428;
          *t458 = r457;
        }
    }
  struct std__allocator_char_* r459 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t431);
  unsigned long* t460 = __capacity428;
  unsigned long t461 = *t460;
  unsigned long c462 = 1;
  unsigned long b463 = t461 + c462;
  char* r464 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r459, b463);
  __retval430 = r464;
  char* t465 = __retval430;
  return t465;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v466, unsigned long v467) {
bb468:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this469;
  unsigned long __capacity470;
  this469 = v466;
  __capacity470 = v467;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t471 = this469;
  unsigned long t472 = __capacity470;
  t471->field2._M_allocated_capacity = t472;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb473:
  _Bool __retval474;
    _Bool c475 = 0;
    __retval474 = c475;
    _Bool t476 = __retval474;
    return t476;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v477) {
bb478:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this479;
  this479 = v477;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t480 = this479;
    _Bool r481 = std__is_constant_evaluated();
    if (r481) {
        unsigned long __i482;
        unsigned long c483 = 0;
        __i482 = c483;
        while (1) {
          unsigned long t485 = __i482;
          unsigned long c486 = 15;
          _Bool c487 = ((t485 <= c486)) ? 1 : 0;
          if (!c487) break;
          char c488 = 0;
          unsigned long t489 = __i482;
          t480->field2._M_local_buf[t489] = c488;
        for_step484: ;
          unsigned long t490 = __i482;
          unsigned long u491 = t490 + 1;
          __i482 = u491;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v492, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v493) {
bb494:
  struct _Guard* this495;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s496;
  this495 = v492;
  __s496 = v493;
  struct _Guard* t497 = this495;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t498 = __s496;
  t497->_M_guarded = t498;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v499, char* v500) {
bb501:
  char* __location502;
  char* __args503;
  char* __retval504;
  void* __loc505;
  __location502 = v499;
  __args503 = v500;
  char* t506 = __location502;
  void* cast507 = (void*)t506;
  __loc505 = cast507;
    void* t508 = __loc505;
    char* cast509 = (char*)t508;
    char* t510 = __args503;
    char t511 = *t510;
    *cast509 = t511;
    __retval504 = cast509;
    char* t512 = __retval504;
    return t512;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v513, char* v514) {
bb515:
  char* __c1516;
  char* __c2517;
  __c1516 = v513;
  __c2517 = v514;
    _Bool r518 = std____is_constant_evaluated();
    if (r518) {
      char* t519 = __c1516;
      char* t520 = __c2517;
      char* r521 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t519, t520);
    } else {
      char* t522 = __c2517;
      char t523 = *t522;
      char* t524 = __c1516;
      *t524 = t523;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v525, char* v526, unsigned long v527) {
bb528:
  char* __s1529;
  char* __s2530;
  unsigned long __n531;
  char* __retval532;
  __s1529 = v525;
  __s2530 = v526;
  __n531 = v527;
    unsigned long t533 = __n531;
    unsigned long c534 = 0;
    _Bool c535 = ((t533 == c534)) ? 1 : 0;
    if (c535) {
      char* t536 = __s1529;
      __retval532 = t536;
      char* t537 = __retval532;
      return t537;
    }
    _Bool r538 = std____is_constant_evaluated();
    if (r538) {
        unsigned long __i539;
        unsigned long c540 = 0;
        __i539 = c540;
        while (1) {
          unsigned long t542 = __i539;
          unsigned long t543 = __n531;
          _Bool c544 = ((t542 < t543)) ? 1 : 0;
          if (!c544) break;
          char* t545 = __s1529;
          unsigned long t546 = __i539;
          char* ptr547 = &(t545)[t546];
          unsigned long t548 = __i539;
          char* t549 = __s2530;
          char* ptr550 = &(t549)[t548];
          char* r551 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr547, ptr550);
        for_step541: ;
          unsigned long t552 = __i539;
          unsigned long u553 = t552 + 1;
          __i539 = u553;
        }
      char* t554 = __s1529;
      __retval532 = t554;
      char* t555 = __retval532;
      return t555;
    }
  char* t556 = __s1529;
  void* cast557 = (void*)t556;
  char* t558 = __s2530;
  void* cast559 = (void*)t558;
  unsigned long t560 = __n531;
  unsigned long c561 = 1;
  unsigned long b562 = t560 * c561;
  void* r563 = memcpy(cast557, cast559, b562);
  char* t564 = __s1529;
  __retval532 = t564;
  char* t565 = __retval532;
  return t565;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v566, char* v567, unsigned long v568) {
bb569:
  char* __s1570;
  char* __s2571;
  unsigned long __n572;
  char* __retval573;
  __s1570 = v566;
  __s2571 = v567;
  __n572 = v568;
    unsigned long t574 = __n572;
    unsigned long c575 = 0;
    _Bool c576 = ((t574 == c575)) ? 1 : 0;
    if (c576) {
      char* t577 = __s1570;
      __retval573 = t577;
      char* t578 = __retval573;
      return t578;
    }
    _Bool r579 = std____is_constant_evaluated();
    if (r579) {
      char* t580 = __s1570;
      char* t581 = __s2571;
      unsigned long t582 = __n572;
      char* r583 = __gnu_cxx__char_traits_char___copy(t580, t581, t582);
      __retval573 = r583;
      char* t584 = __retval573;
      return t584;
    }
  char* t585 = __s1570;
  void* cast586 = (void*)t585;
  char* t587 = __s2571;
  void* cast588 = (void*)t587;
  unsigned long t589 = __n572;
  void* r590 = memcpy(cast586, cast588, t589);
  char* cast591 = (char*)r590;
  __retval573 = cast591;
  char* t592 = __retval573;
  return t592;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v593, char* v594, unsigned long v595) {
bb596:
  char* __d597;
  char* __s598;
  unsigned long __n599;
  __d597 = v593;
  __s598 = v594;
  __n599 = v595;
    unsigned long t600 = __n599;
    unsigned long c601 = 1;
    _Bool c602 = ((t600 == c601)) ? 1 : 0;
    if (c602) {
      char* t603 = __d597;
      char* t604 = __s598;
      std__char_traits_char___assign(t603, t604);
    } else {
      char* t605 = __d597;
      char* t606 = __s598;
      unsigned long t607 = __n599;
      char* r608 = std__char_traits_char___copy(t605, t606, t607);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v609) {
bb610:
  char* __it611;
  char* __retval612;
  __it611 = v609;
  char* t613 = __it611;
  __retval612 = t613;
  char* t614 = __retval612;
  return t614;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v615, char* v616, char* v617) {
bb618:
  char* __p619;
  char* __k1620;
  char* __k2621;
  __p619 = v615;
  __k1620 = v616;
  __k2621 = v617;
    char* t622 = __p619;
    char* t623 = __k1620;
    char* r624 = char_const__std____niter_base_char_const__(t623);
    char* t625 = __k2621;
    char* t626 = __k1620;
    long diff627 = t625 - t626;
    unsigned long cast628 = (unsigned long)diff627;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t622, r624, cast628);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v629) {
bb630:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this631;
  char* __retval632;
  this631 = v629;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t633 = this631;
  char* t634 = t633->_M_dataplus._M_p;
  __retval632 = t634;
  char* t635 = __retval632;
  return t635;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v636, unsigned long v637) {
bb638:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this639;
  unsigned long __length640;
  this639 = v636;
  __length640 = v637;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t641 = this639;
  unsigned long t642 = __length640;
  t641->_M_string_length = t642;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v643, unsigned long v644) {
bb645:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this646;
  unsigned long __n647;
  char ref_tmp0648;
  this646 = v643;
  __n647 = v644;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t649 = this646;
  unsigned long t650 = __n647;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t649, t650);
  unsigned long t651 = __n647;
  char* r652 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t649);
  char* ptr653 = &(r652)[t651];
  char c654 = 0;
  ref_tmp0648 = c654;
  std__char_traits_char___assign(ptr653, &ref_tmp0648);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v655) {
bb656:
  struct _Guard* this657;
  this657 = v655;
  struct _Guard* t658 = this657;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t659 = t658->_M_guarded;
    _Bool cast660 = (_Bool)t659;
    if (cast660) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t661 = t658->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t661);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v662, char* v663, char* v664, struct std__forward_iterator_tag v665) {
bb666:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this667;
  char* __beg668;
  char* __end669;
  struct std__forward_iterator_tag unnamed670;
  unsigned long __dnew671;
  struct _Guard __guard672;
  this667 = v662;
  __beg668 = v663;
  __end669 = v664;
  unnamed670 = v665;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t673 = this667;
  char* t674 = __beg668;
  char* t675 = __end669;
  long r676 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t674, t675);
  unsigned long cast677 = (unsigned long)r676;
  __dnew671 = cast677;
    unsigned long t678 = __dnew671;
    unsigned long c679 = 15;
    _Bool c680 = ((t678 > c679)) ? 1 : 0;
    if (c680) {
      unsigned long c681 = 0;
      char* r682 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t673, &__dnew671, c681);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t673, r682);
      unsigned long t683 = __dnew671;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t673, t683);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t673);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard672, t673);
    char* r684 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t673);
    char* t685 = __beg668;
    char* t686 = __end669;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r684, t685, t686);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c687 = ((void*)0);
    __guard672._M_guarded = c687;
    unsigned long t688 = __dnew671;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t673, t688);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard672);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v689) {
bb690:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this691;
  this691 = v689;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t692 = this691;
  {
    struct std__allocator_char_* base693 = (struct std__allocator_char_*)((char *)t692 + 0);
    std__allocator_char____allocator(base693);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v694, struct std____new_allocator_char_* v695) {
bb696:
  struct std____new_allocator_char_* this697;
  struct std____new_allocator_char_* unnamed698;
  this697 = v694;
  unnamed698 = v695;
  struct std____new_allocator_char_* t699 = this697;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v700, struct std__allocator_char_* v701) {
bb702:
  struct std__allocator_char_* this703;
  struct std__allocator_char_* __a704;
  this703 = v700;
  __a704 = v701;
  struct std__allocator_char_* t705 = this703;
  struct std____new_allocator_char_* base706 = (struct std____new_allocator_char_*)((char *)t705 + 0);
  struct std__allocator_char_* t707 = __a704;
  struct std____new_allocator_char_* base708 = (struct std____new_allocator_char_*)((char *)t707 + 0);
  std____new_allocator_char_____new_allocator(base706, base708);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v709) {
bb710:
  char* __r711;
  char* __retval712;
  __r711 = v709;
  char* t713 = __r711;
  __retval712 = t713;
  char* t714 = __retval712;
  return t714;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v715) {
bb716:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this717;
  char* __retval718;
  this717 = v715;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t719 = this717;
  char* cast720 = (char*)&(t719->field2._M_local_buf);
  char* r721 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast720);
  __retval718 = r721;
  char* t722 = __retval718;
  return t722;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v723) {
bb724:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this725;
  _Bool __retval726;
  this725 = v723;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t727 = this725;
    char* r728 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t727);
    char* r729 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t727);
    _Bool c730 = ((r728 == r729)) ? 1 : 0;
    if (c730) {
        unsigned long t731 = t727->_M_string_length;
        unsigned long c732 = 15;
        _Bool c733 = ((t731 > c732)) ? 1 : 0;
        if (c733) {
          __builtin_unreachable();
        }
      _Bool c734 = 1;
      __retval726 = c734;
      _Bool t735 = __retval726;
      return t735;
    }
  _Bool c736 = 0;
  __retval726 = c736;
  _Bool t737 = __retval726;
  return t737;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v738, char* v739, unsigned long v740) {
bb741:
  struct std____new_allocator_char_* this742;
  char* __p743;
  unsigned long __n744;
  this742 = v738;
  __p743 = v739;
  __n744 = v740;
  struct std____new_allocator_char_* t745 = this742;
    unsigned long c746 = 1;
    unsigned long c747 = 16;
    _Bool c748 = ((c746 > c747)) ? 1 : 0;
    if (c748) {
      char* t749 = __p743;
      void* cast750 = (void*)t749;
      unsigned long t751 = __n744;
      unsigned long c752 = 1;
      unsigned long b753 = t751 * c752;
      unsigned long c754 = 1;
      operator_delete_3(cast750, b753, c754);
      return;
    }
  char* t755 = __p743;
  void* cast756 = (void*)t755;
  unsigned long t757 = __n744;
  unsigned long c758 = 1;
  unsigned long b759 = t757 * c758;
  operator_delete_2(cast756, b759);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v760, char* v761, unsigned long v762) {
bb763:
  struct std__allocator_char_* this764;
  char* __p765;
  unsigned long __n766;
  this764 = v760;
  __p765 = v761;
  __n766 = v762;
  struct std__allocator_char_* t767 = this764;
    _Bool r768 = std____is_constant_evaluated();
    if (r768) {
      char* t769 = __p765;
      void* cast770 = (void*)t769;
      operator_delete(cast770);
      return;
    }
  struct std____new_allocator_char_* base771 = (struct std____new_allocator_char_*)((char *)t767 + 0);
  char* t772 = __p765;
  unsigned long t773 = __n766;
  std____new_allocator_char___deallocate(base771, t772, t773);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v774, char* v775, unsigned long v776) {
bb777:
  struct std__allocator_char_* __a778;
  char* __p779;
  unsigned long __n780;
  __a778 = v774;
  __p779 = v775;
  __n780 = v776;
  struct std__allocator_char_* t781 = __a778;
  char* t782 = __p779;
  unsigned long t783 = __n780;
  std__allocator_char___deallocate(t781, t782, t783);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v784, unsigned long v785) {
bb786:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this787;
  unsigned long __size788;
  this787 = v784;
  __size788 = v785;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t789 = this787;
  struct std__allocator_char_* r790 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t789);
  char* r791 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t789);
  unsigned long t792 = __size788;
  unsigned long c793 = 1;
  unsigned long b794 = t792 + c793;
  std__allocator_traits_std__allocator_char_____deallocate(r790, r791, b794);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v795) {
bb796:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this797;
  this797 = v795;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t798 = this797;
    _Bool r799 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t798);
    _Bool u800 = !r799;
    if (u800) {
      unsigned long t801 = t798->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t798, t801);
    }
  return;
}

