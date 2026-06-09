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
struct std__less_const_char___ { unsigned char __field0; };
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
char _str[14] = "beginning end";
char _str_1[8] = "middle ";
char _str_2[9] = "12345678";
char _str_3[3] = "xx";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[27] = "Initial strings:\nstring1: ";
char _str_5[11] = "\nstring2: ";
char _str_6[11] = "\nstring3: ";
char _str_7[11] = "\nstring4: ";
char _str_8[3] = "\n\n";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_9[32] = "Strings after insert:\nstring1: ";
char _str_10[50] = "basic_string: construction from null is not valid";
char _str_11[24] = "basic_string::_M_create";
char _str_12[22] = "basic_string::replace";
char _str_13[25] = "basic_string::_M_replace";
char _str_14[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_15[21] = "basic_string::insert";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p2, unsigned long p3, unsigned long p4);
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
        char* cast20 = (char*)&(_str_10);
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

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v32, int v33) {
bb34:
  int __a35;
  int __b36;
  int __retval37;
  __a35 = v32;
  __b36 = v33;
  int t38 = __a35;
  int t39 = __b36;
  int b40 = t38 | t39;
  __retval37 = b40;
  int t41 = __retval37;
  return t41;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v42) {
bb43:
  struct std__basic_ios_char__std__char_traits_char__* this44;
  int __retval45;
  this44 = v42;
  struct std__basic_ios_char__std__char_traits_char__* t46 = this44;
  struct std__ios_base* base47 = (struct std__ios_base*)((char *)t46 + 0);
  int t48 = base47->_M_streambuf_state;
  __retval45 = t48;
  int t49 = __retval45;
  return t49;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v50, int v51) {
bb52:
  struct std__basic_ios_char__std__char_traits_char__* this53;
  int __state54;
  this53 = v50;
  __state54 = v51;
  struct std__basic_ios_char__std__char_traits_char__* t55 = this53;
  int r56 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t55);
  int t57 = __state54;
  int r58 = std__operator_(r56, t57);
  std__basic_ios_char__std__char_traits_char_____clear(t55, r58);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v59, char* v60) {
bb61:
  struct std__basic_ostream_char__std__char_traits_char__* __out62;
  char* __s63;
  struct std__basic_ostream_char__std__char_traits_char__* __retval64;
  __out62 = v59;
  __s63 = v60;
    char* t65 = __s63;
    _Bool cast66 = (_Bool)t65;
    _Bool u67 = !cast66;
    if (u67) {
      struct std__basic_ostream_char__std__char_traits_char__* t68 = __out62;
      void** v69 = (void**)t68;
      void* v70 = *((void**)v69);
      unsigned char* cast71 = (unsigned char*)v70;
      long c72 = -24;
      unsigned char* ptr73 = &(cast71)[c72];
      long* cast74 = (long*)ptr73;
      long t75 = *cast74;
      unsigned char* cast76 = (unsigned char*)t68;
      unsigned char* ptr77 = &(cast76)[t75];
      struct std__basic_ostream_char__std__char_traits_char__* cast78 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr77;
      struct std__basic_ios_char__std__char_traits_char__* cast79 = (struct std__basic_ios_char__std__char_traits_char__*)cast78;
      int t80 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast79, t80);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t81 = __out62;
      char* t82 = __s63;
      char* t83 = __s63;
      unsigned long r84 = std__char_traits_char___length(t83);
      long cast85 = (long)r84;
      struct std__basic_ostream_char__std__char_traits_char__* r86 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t81, t82, cast85);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t87 = __out62;
  __retval64 = t87;
  struct std__basic_ostream_char__std__char_traits_char__* t88 = __retval64;
  return t88;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v89) {
bb90:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this91;
  char* __retval92;
  this91 = v89;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t93 = this91;
  char* r94 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t93);
  __retval92 = r94;
  char* t95 = __retval92;
  return t95;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v96, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v97) {
bb98:
  struct std__basic_ostream_char__std__char_traits_char__* __os99;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str100;
  struct std__basic_ostream_char__std__char_traits_char__* __retval101;
  __os99 = v96;
  __str100 = v97;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __os99;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t103 = __str100;
  char* r104 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t103);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t105 = __str100;
  unsigned long r106 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t105);
  long cast107 = (long)r106;
  struct std__basic_ostream_char__std__char_traits_char__* r108 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t102, r104, cast107);
  __retval101 = r108;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = __retval101;
  return t109;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v110, unsigned long v111, unsigned long v112, char* v113) {
bb114:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this115;
  unsigned long __n1116;
  unsigned long __n2117;
  char* __s118;
  this115 = v110;
  __n1116 = v111;
  __n2117 = v112;
  __s118 = v113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t119 = this115;
    unsigned long r120 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t119);
    unsigned long r121 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t119);
    unsigned long t122 = __n1116;
    unsigned long b123 = r121 - t122;
    unsigned long b124 = r120 - b123;
    unsigned long t125 = __n2117;
    _Bool c126 = ((b124 < t125)) ? 1 : 0;
    if (c126) {
      char* t127 = __s118;
      std____throw_length_error(t127);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v128) {
bb129:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this130;
  unsigned long __retval131;
  unsigned long __sz132;
  this130 = v128;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t133 = this130;
  _Bool r134 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t133);
  unsigned long ternary135;
  if (r134) {
    unsigned long c136 = 15;
    ternary135 = (unsigned long)c136;
  } else {
    unsigned long t137 = t133->field2._M_allocated_capacity;
    ternary135 = (unsigned long)t137;
  }
  __sz132 = ternary135;
    unsigned long t138 = __sz132;
    unsigned long c139 = 15;
    _Bool c140 = ((t138 < c139)) ? 1 : 0;
    _Bool ternary141;
    if (c140) {
      _Bool c142 = 1;
      ternary141 = (_Bool)c142;
    } else {
      unsigned long t143 = __sz132;
      unsigned long r144 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t133);
      _Bool c145 = ((t143 > r144)) ? 1 : 0;
      ternary141 = (_Bool)c145;
    }
    if (ternary141) {
      __builtin_unreachable();
    }
  unsigned long t146 = __sz132;
  __retval131 = t146;
  unsigned long t147 = __retval131;
  return t147;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v148, char* v149, char* v150) {
bb151:
  struct std__less_const_char___* this152;
  char* __x153;
  char* __y154;
  _Bool __retval155;
  this152 = v148;
  __x153 = v149;
  __y154 = v150;
  struct std__less_const_char___* t156 = this152;
    _Bool r157 = std____is_constant_evaluated();
    if (r157) {
      char* t158 = __x153;
      char* t159 = __y154;
      _Bool c160 = ((t158 < t159)) ? 1 : 0;
      __retval155 = c160;
      _Bool t161 = __retval155;
      return t161;
    }
  char* t162 = __x153;
  unsigned long cast163 = (unsigned long)t162;
  char* t164 = __y154;
  unsigned long cast165 = (unsigned long)t164;
  _Bool c166 = ((cast163 < cast165)) ? 1 : 0;
  __retval155 = c166;
  _Bool t167 = __retval155;
  return t167;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v168, char* v169) {
bb170:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this171;
  char* __s172;
  _Bool __retval173;
  struct std__less_const_char___ ref_tmp0174;
  this171 = v168;
  __s172 = v169;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t175 = this171;
  char* t176 = __s172;
  char* r177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t175);
  _Bool r178 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0174, t176, r177);
  _Bool ternary179;
  if (r178) {
    _Bool c180 = 1;
    ternary179 = (_Bool)c180;
  } else {
    struct std__less_const_char___ ref_tmp1181;
    char* r182 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t175);
    unsigned long r183 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t175);
    char* ptr184 = &(r182)[r183];
    char* t185 = __s172;
    _Bool r186 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1181, ptr184, t185);
    ternary179 = (_Bool)r186;
  }
  __retval173 = ternary179;
  _Bool t187 = __retval173;
  return t187;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v188, char* v189) {
bb190:
  char* __c1191;
  char* __c2192;
  __c1191 = v188;
  __c2192 = v189;
    _Bool r193 = std____is_constant_evaluated();
    if (r193) {
      char* t194 = __c1191;
      char* t195 = __c2192;
      char* r196 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t194, t195);
    } else {
      char* t197 = __c2192;
      char t198 = *t197;
      char* t199 = __c1191;
      *t199 = t198;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v200, char* v201, unsigned long v202) {
bb203:
  char* __s1204;
  char* __s2205;
  unsigned long __n206;
  char* __retval207;
  __s1204 = v200;
  __s2205 = v201;
  __n206 = v202;
    unsigned long t208 = __n206;
    unsigned long c209 = 0;
    _Bool c210 = ((t208 == c209)) ? 1 : 0;
    if (c210) {
      char* t211 = __s1204;
      __retval207 = t211;
      char* t212 = __retval207;
      return t212;
    }
    _Bool r213 = std____is_constant_evaluated();
    if (r213) {
        char* t214 = __s2205;
        char* t215 = __s1204;
        _Bool c216 = ((t214 < t215)) ? 1 : 0;
        _Bool isconst217 = 0;
        _Bool ternary218;
        if (isconst217) {
          char* t219 = __s1204;
          char* t220 = __s2205;
          _Bool c221 = ((t219 > t220)) ? 1 : 0;
          ternary218 = (_Bool)c221;
        } else {
          _Bool c222 = 0;
          ternary218 = (_Bool)c222;
        }
        _Bool ternary223;
        if (ternary218) {
          char* t224 = __s1204;
          char* t225 = __s2205;
          unsigned long t226 = __n206;
          char* ptr227 = &(t225)[t226];
          _Bool c228 = ((t224 < ptr227)) ? 1 : 0;
          ternary223 = (_Bool)c228;
        } else {
          _Bool c229 = 0;
          ternary223 = (_Bool)c229;
        }
        if (ternary223) {
            do {
                unsigned long t230 = __n206;
                unsigned long u231 = t230 - 1;
                __n206 = u231;
                unsigned long t232 = __n206;
                char* t233 = __s1204;
                char* ptr234 = &(t233)[t232];
                unsigned long t235 = __n206;
                char* t236 = __s2205;
                char* ptr237 = &(t236)[t235];
                __gnu_cxx__char_traits_char___assign(ptr234, ptr237);
              unsigned long t238 = __n206;
              unsigned long c239 = 0;
              _Bool c240 = ((t238 > c239)) ? 1 : 0;
              if (!c240) break;
            } while (1);
        } else {
          char* t241 = __s1204;
          char* t242 = __s2205;
          unsigned long t243 = __n206;
          char* r244 = __gnu_cxx__char_traits_char___copy(t241, t242, t243);
        }
      char* t245 = __s1204;
      __retval207 = t245;
      char* t246 = __retval207;
      return t246;
    }
  char* t247 = __s1204;
  void* cast248 = (void*)t247;
  char* t249 = __s2205;
  void* cast250 = (void*)t249;
  unsigned long t251 = __n206;
  unsigned long c252 = 1;
  unsigned long b253 = t251 * c252;
  void* r254 = memmove(cast248, cast250, b253);
  char* t255 = __s1204;
  __retval207 = t255;
  char* t256 = __retval207;
  return t256;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v257, char* v258, unsigned long v259) {
bb260:
  char* __s1261;
  char* __s2262;
  unsigned long __n263;
  char* __retval264;
  __s1261 = v257;
  __s2262 = v258;
  __n263 = v259;
    unsigned long t265 = __n263;
    unsigned long c266 = 0;
    _Bool c267 = ((t265 == c266)) ? 1 : 0;
    if (c267) {
      char* t268 = __s1261;
      __retval264 = t268;
      char* t269 = __retval264;
      return t269;
    }
    _Bool r270 = std____is_constant_evaluated();
    if (r270) {
      char* t271 = __s1261;
      char* t272 = __s2262;
      unsigned long t273 = __n263;
      char* r274 = __gnu_cxx__char_traits_char___move(t271, t272, t273);
      __retval264 = r274;
      char* t275 = __retval264;
      return t275;
    }
  char* t276 = __s1261;
  void* cast277 = (void*)t276;
  char* t278 = __s2262;
  void* cast279 = (void*)t278;
  unsigned long t280 = __n263;
  void* r281 = memmove(cast277, cast279, t280);
  char* cast282 = (char*)r281;
  __retval264 = cast282;
  char* t283 = __retval264;
  return t283;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v284, char* v285, unsigned long v286) {
bb287:
  char* __d288;
  char* __s289;
  unsigned long __n290;
  __d288 = v284;
  __s289 = v285;
  __n290 = v286;
    unsigned long t291 = __n290;
    unsigned long c292 = 1;
    _Bool c293 = ((t291 == c292)) ? 1 : 0;
    if (c293) {
      char* t294 = __d288;
      char* t295 = __s289;
      std__char_traits_char___assign(t294, t295);
    } else {
      char* t296 = __d288;
      char* t297 = __s289;
      unsigned long t298 = __n290;
      char* r299 = std__char_traits_char___move(t296, t297, t298);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v300, char* v301, unsigned long v302, char* v303, unsigned long v304, unsigned long v305) {
bb306:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this307;
  char* __p308;
  unsigned long __len1309;
  char* __s310;
  unsigned long __len2311;
  unsigned long __how_much312;
  this307 = v300;
  __p308 = v301;
  __len1309 = v302;
  __s310 = v303;
  __len2311 = v304;
  __how_much312 = v305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t313 = this307;
    unsigned long t314 = __len2311;
    _Bool cast315 = (_Bool)t314;
    _Bool ternary316;
    if (cast315) {
      unsigned long t317 = __len2311;
      unsigned long t318 = __len1309;
      _Bool c319 = ((t317 <= t318)) ? 1 : 0;
      ternary316 = (_Bool)c319;
    } else {
      _Bool c320 = 0;
      ternary316 = (_Bool)c320;
    }
    if (ternary316) {
      char* t321 = __p308;
      char* t322 = __s310;
      unsigned long t323 = __len2311;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t321, t322, t323);
    }
    unsigned long t324 = __how_much312;
    _Bool cast325 = (_Bool)t324;
    _Bool ternary326;
    if (cast325) {
      unsigned long t327 = __len1309;
      unsigned long t328 = __len2311;
      _Bool c329 = ((t327 != t328)) ? 1 : 0;
      ternary326 = (_Bool)c329;
    } else {
      _Bool c330 = 0;
      ternary326 = (_Bool)c330;
    }
    if (ternary326) {
      char* t331 = __p308;
      unsigned long t332 = __len2311;
      char* ptr333 = &(t331)[t332];
      char* t334 = __p308;
      unsigned long t335 = __len1309;
      char* ptr336 = &(t334)[t335];
      unsigned long t337 = __how_much312;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr333, ptr336, t337);
    }
    unsigned long t338 = __len2311;
    unsigned long t339 = __len1309;
    _Bool c340 = ((t338 > t339)) ? 1 : 0;
    if (c340) {
        char* t341 = __s310;
        unsigned long t342 = __len2311;
        char* ptr343 = &(t341)[t342];
        char* t344 = __p308;
        unsigned long t345 = __len1309;
        char* ptr346 = &(t344)[t345];
        _Bool c347 = ((ptr343 <= ptr346)) ? 1 : 0;
        if (c347) {
          char* t348 = __p308;
          char* t349 = __s310;
          unsigned long t350 = __len2311;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t348, t349, t350);
        } else {
            char* t351 = __s310;
            char* t352 = __p308;
            unsigned long t353 = __len1309;
            char* ptr354 = &(t352)[t353];
            _Bool c355 = ((t351 >= ptr354)) ? 1 : 0;
            if (c355) {
              unsigned long __poff356;
              char* t357 = __s310;
              char* t358 = __p308;
              long diff359 = t357 - t358;
              unsigned long cast360 = (unsigned long)diff359;
              unsigned long t361 = __len2311;
              unsigned long t362 = __len1309;
              unsigned long b363 = t361 - t362;
              unsigned long b364 = cast360 + b363;
              __poff356 = b364;
              char* t365 = __p308;
              char* t366 = __p308;
              unsigned long t367 = __poff356;
              char* ptr368 = &(t366)[t367];
              unsigned long t369 = __len2311;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t365, ptr368, t369);
            } else {
              unsigned long __nleft370;
              char* t371 = __p308;
              unsigned long t372 = __len1309;
              char* ptr373 = &(t371)[t372];
              char* t374 = __s310;
              long diff375 = ptr373 - t374;
              unsigned long cast376 = (unsigned long)diff375;
              __nleft370 = cast376;
              char* t377 = __p308;
              char* t378 = __s310;
              unsigned long t379 = __nleft370;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t377, t378, t379);
              char* t380 = __p308;
              unsigned long t381 = __nleft370;
              char* ptr382 = &(t380)[t381];
              char* t383 = __p308;
              unsigned long t384 = __len2311;
              char* ptr385 = &(t383)[t384];
              unsigned long t386 = __len2311;
              unsigned long t387 = __nleft370;
              unsigned long b388 = t386 - t387;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr382, ptr385, b388);
            }
        }
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v389) {
bb390:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this391;
  unsigned long __retval392;
  this391 = v389;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t393 = this391;
  unsigned long r394 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t393);
  __retval392 = r394;
  unsigned long t395 = __retval392;
  return t395;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v396, unsigned long v397, unsigned long v398, char* v399, unsigned long v400) {
bb401:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this402;
  unsigned long __pos403;
  unsigned long __len1404;
  char* __s405;
  unsigned long __len2406;
  unsigned long __how_much407;
  unsigned long __new_capacity408;
  char* __r409;
  this402 = v396;
  __pos403 = v397;
  __len1404 = v398;
  __s405 = v399;
  __len2406 = v400;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t410 = this402;
  unsigned long r411 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t410);
  unsigned long t412 = __pos403;
  unsigned long b413 = r411 - t412;
  unsigned long t414 = __len1404;
  unsigned long b415 = b413 - t414;
  __how_much407 = b415;
  unsigned long r416 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t410);
  unsigned long t417 = __len2406;
  unsigned long b418 = r416 + t417;
  unsigned long t419 = __len1404;
  unsigned long b420 = b418 - t419;
  __new_capacity408 = b420;
  unsigned long r421 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t410);
  char* r422 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t410, &__new_capacity408, r421);
  __r409 = r422;
    unsigned long t423 = __pos403;
    _Bool cast424 = (_Bool)t423;
    if (cast424) {
      char* t425 = __r409;
      char* r426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t410);
      unsigned long t427 = __pos403;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t425, r426, t427);
    }
    char* t428 = __s405;
    _Bool cast429 = (_Bool)t428;
    _Bool ternary430;
    if (cast429) {
      unsigned long t431 = __len2406;
      _Bool cast432 = (_Bool)t431;
      ternary430 = (_Bool)cast432;
    } else {
      _Bool c433 = 0;
      ternary430 = (_Bool)c433;
    }
    if (ternary430) {
      char* t434 = __r409;
      unsigned long t435 = __pos403;
      char* ptr436 = &(t434)[t435];
      char* t437 = __s405;
      unsigned long t438 = __len2406;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr436, t437, t438);
    }
    unsigned long t439 = __how_much407;
    _Bool cast440 = (_Bool)t439;
    if (cast440) {
      char* t441 = __r409;
      unsigned long t442 = __pos403;
      char* ptr443 = &(t441)[t442];
      unsigned long t444 = __len2406;
      char* ptr445 = &(ptr443)[t444];
      char* r446 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t410);
      unsigned long t447 = __pos403;
      char* ptr448 = &(r446)[t447];
      unsigned long t449 = __len1404;
      char* ptr450 = &(ptr448)[t449];
      unsigned long t451 = __how_much407;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr445, ptr450, t451);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t410);
  char* t452 = __r409;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t410, t452);
  unsigned long t453 = __new_capacity408;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t410, t453);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v454, unsigned long v455, unsigned long v456, char* v457, unsigned long v458) {
bb459:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this460;
  unsigned long __pos461;
  unsigned long __len1462;
  char* __s463;
  unsigned long __len2464;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval465;
  unsigned long __old_size466;
  unsigned long __new_size467;
  this460 = v454;
  __pos461 = v455;
  __len1462 = v456;
  __s463 = v457;
  __len2464 = v458;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t468 = this460;
  unsigned long t469 = __len1462;
  unsigned long t470 = __len2464;
  char* cast471 = (char*)&(_str_13);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t468, t469, t470, cast471);
  unsigned long r472 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t468);
  __old_size466 = r472;
  unsigned long t473 = __old_size466;
  unsigned long t474 = __len2464;
  unsigned long b475 = t473 + t474;
  unsigned long t476 = __len1462;
  unsigned long b477 = b475 - t476;
  __new_size467 = b477;
    unsigned long t478 = __new_size467;
    unsigned long r479 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t468);
    _Bool c480 = ((t478 <= r479)) ? 1 : 0;
    if (c480) {
      char* __p481;
      unsigned long __how_much482;
      char* r483 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t468);
      unsigned long t484 = __pos461;
      char* ptr485 = &(r483)[t484];
      __p481 = ptr485;
      unsigned long t486 = __old_size466;
      unsigned long t487 = __pos461;
      unsigned long b488 = t486 - t487;
      unsigned long t489 = __len1462;
      unsigned long b490 = b488 - t489;
      __how_much482 = b490;
        _Bool r491 = std__is_constant_evaluated();
        if (r491) {
          char* __newp492;
          struct std__allocator_char_* r493 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t468);
          unsigned long t494 = __new_size467;
          char* r495 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r493, t494);
          __newp492 = r495;
          char* t496 = __newp492;
          char* r497 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t468);
          unsigned long t498 = __pos461;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t496, r497, t498);
          char* t499 = __newp492;
          unsigned long t500 = __pos461;
          char* ptr501 = &(t499)[t500];
          char* t502 = __s463;
          unsigned long t503 = __len2464;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr501, t502, t503);
          char* t504 = __newp492;
          unsigned long t505 = __pos461;
          char* ptr506 = &(t504)[t505];
          unsigned long t507 = __len2464;
          char* ptr508 = &(ptr506)[t507];
          char* t509 = __p481;
          unsigned long t510 = __len1462;
          char* ptr511 = &(t509)[t510];
          unsigned long t512 = __how_much482;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr508, ptr511, t512);
          char* r513 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t468);
          char* t514 = __newp492;
          unsigned long t515 = __new_size467;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r513, t514, t515);
          struct std__allocator_char_* r516 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t468);
          char* t517 = __newp492;
          unsigned long t518 = __new_size467;
          std__allocator_char___deallocate(r516, t517, t518);
        } else {
            char* t519 = __s463;
            _Bool r520 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t468, t519);
            if (r520) {
                unsigned long t521 = __how_much482;
                _Bool cast522 = (_Bool)t521;
                _Bool ternary523;
                if (cast522) {
                  unsigned long t524 = __len1462;
                  unsigned long t525 = __len2464;
                  _Bool c526 = ((t524 != t525)) ? 1 : 0;
                  ternary523 = (_Bool)c526;
                } else {
                  _Bool c527 = 0;
                  ternary523 = (_Bool)c527;
                }
                if (ternary523) {
                  char* t528 = __p481;
                  unsigned long t529 = __len2464;
                  char* ptr530 = &(t528)[t529];
                  char* t531 = __p481;
                  unsigned long t532 = __len1462;
                  char* ptr533 = &(t531)[t532];
                  unsigned long t534 = __how_much482;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr530, ptr533, t534);
                }
                unsigned long t535 = __len2464;
                _Bool cast536 = (_Bool)t535;
                if (cast536) {
                  char* t537 = __p481;
                  char* t538 = __s463;
                  unsigned long t539 = __len2464;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t537, t538, t539);
                }
            } else {
              char* t540 = __p481;
              unsigned long t541 = __len1462;
              char* t542 = __s463;
              unsigned long t543 = __len2464;
              unsigned long t544 = __how_much482;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t468, t540, t541, t542, t543, t544);
            }
        }
    } else {
      unsigned long t545 = __pos461;
      unsigned long t546 = __len1462;
      char* t547 = __s463;
      unsigned long t548 = __len2464;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t468, t545, t546, t547, t548);
    }
  unsigned long t549 = __new_size467;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t468, t549);
  __retval465 = t468;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t550 = __retval465;
  return t550;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v551, unsigned long v552, char* v553) {
bb554:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this555;
  unsigned long __pos556;
  char* __s557;
  unsigned long __retval558;
  this555 = v551;
  __pos556 = v552;
  __s557 = v553;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t559 = this555;
    unsigned long t560 = __pos556;
    unsigned long r561 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t559);
    _Bool c562 = ((t560 > r561)) ? 1 : 0;
    if (c562) {
      char* cast563 = (char*)&(_str_14);
      char* t564 = __s557;
      unsigned long t565 = __pos556;
      unsigned long r566 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t559);
      std____throw_out_of_range_fmt(cast563, t564, t565, r566);
    }
  unsigned long t567 = __pos556;
  __retval558 = t567;
  unsigned long t568 = __retval558;
  return t568;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v569, unsigned long v570, unsigned long v571) {
bb572:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this573;
  unsigned long __pos574;
  unsigned long __off575;
  unsigned long __retval576;
  _Bool __testoff577;
  this573 = v569;
  __pos574 = v570;
  __off575 = v571;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t578 = this573;
  unsigned long t579 = __off575;
  unsigned long r580 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t578);
  unsigned long t581 = __pos574;
  unsigned long b582 = r580 - t581;
  _Bool c583 = ((t579 < b582)) ? 1 : 0;
  __testoff577 = c583;
  _Bool t584 = __testoff577;
  unsigned long ternary585;
  if (t584) {
    unsigned long t586 = __off575;
    ternary585 = (unsigned long)t586;
  } else {
    unsigned long r587 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t578);
    unsigned long t588 = __pos574;
    unsigned long b589 = r587 - t588;
    ternary585 = (unsigned long)b589;
  }
  __retval576 = ternary585;
  unsigned long t590 = __retval576;
  return t590;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v591, unsigned long v592, unsigned long v593, char* v594, unsigned long v595) {
bb596:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this597;
  unsigned long __pos598;
  unsigned long __n1599;
  char* __s600;
  unsigned long __n2601;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval602;
  this597 = v591;
  __pos598 = v592;
  __n1599 = v593;
  __s600 = v594;
  __n2601 = v595;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t603 = this597;
  unsigned long t604 = __pos598;
  char* cast605 = (char*)&(_str_12);
  unsigned long r606 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t603, t604, cast605);
  unsigned long t607 = __pos598;
  unsigned long t608 = __n1599;
  unsigned long r609 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t603, t607, t608);
  char* t610 = __s600;
  unsigned long t611 = __n2601;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r612 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t603, r606, r609, t610, t611);
  __retval602 = r612;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t613 = __retval602;
  return t613;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v614) {
bb615:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this616;
  unsigned long __retval617;
  unsigned long __sz618;
  this616 = v614;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t619 = this616;
  unsigned long t620 = t619->_M_string_length;
  __sz618 = t620;
    unsigned long t621 = __sz618;
    unsigned long r622 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t619);
    _Bool c623 = ((t621 > r622)) ? 1 : 0;
    if (c623) {
      __builtin_unreachable();
    }
  unsigned long t624 = __sz618;
  __retval617 = t624;
  unsigned long t625 = __retval617;
  return t625;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmRKS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v626, unsigned long v627, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v628) {
bb629:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this630;
  unsigned long __pos1631;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str632;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval633;
  this630 = v626;
  __pos1631 = v627;
  __str632 = v628;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t634 = this630;
  unsigned long t635 = __pos1631;
  unsigned long c636 = 0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t637 = __str632;
  char* r638 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t637);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t639 = __str632;
  unsigned long r640 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t639);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r641 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t634, t635, c636, r638, r640);
  __retval633 = r641;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t642 = __retval633;
  return t642;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v643, unsigned long v644, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v645, unsigned long v646, unsigned long v647) {
bb648:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this649;
  unsigned long __pos1650;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str651;
  unsigned long __pos2652;
  unsigned long __n653;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval654;
  this649 = v643;
  __pos1650 = v644;
  __str651 = v645;
  __pos2652 = v646;
  __n653 = v647;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t655 = this649;
  unsigned long t656 = __pos1650;
  unsigned long c657 = 0;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t658 = __str651;
  char* r659 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t658);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t660 = __str651;
  unsigned long t661 = __pos2652;
  char* cast662 = (char*)&(_str_15);
  unsigned long r663 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t660, t661, cast662);
  char* ptr664 = &(r659)[r663];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t665 = __str651;
  unsigned long t666 = __pos2652;
  unsigned long t667 = __n653;
  unsigned long r668 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t665, t666, t667);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r669 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(t655, t656, c657, ptr664, r668);
  __retval654 = r669;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t670 = __retval654;
  return t670;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v671, void* v672) {
bb673:
  struct std__basic_ostream_char__std__char_traits_char__* this674;
  void* __pf675;
  struct std__basic_ostream_char__std__char_traits_char__* __retval676;
  this674 = v671;
  __pf675 = v672;
  struct std__basic_ostream_char__std__char_traits_char__* t677 = this674;
  void* t678 = __pf675;
  struct std__basic_ostream_char__std__char_traits_char__* r679 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t678)(t677);
  __retval676 = r679;
  struct std__basic_ostream_char__std__char_traits_char__* t680 = __retval676;
  return t680;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v681) {
bb682:
  struct std__basic_ostream_char__std__char_traits_char__* __os683;
  struct std__basic_ostream_char__std__char_traits_char__* __retval684;
  __os683 = v681;
  struct std__basic_ostream_char__std__char_traits_char__* t685 = __os683;
  struct std__basic_ostream_char__std__char_traits_char__* r686 = std__ostream__flush(t685);
  __retval684 = r686;
  struct std__basic_ostream_char__std__char_traits_char__* t687 = __retval684;
  return t687;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v688) {
bb689:
  struct std__ctype_char_* __f690;
  struct std__ctype_char_* __retval691;
  __f690 = v688;
    struct std__ctype_char_* t692 = __f690;
    _Bool cast693 = (_Bool)t692;
    _Bool u694 = !cast693;
    if (u694) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t695 = __f690;
  __retval691 = t695;
  struct std__ctype_char_* t696 = __retval691;
  return t696;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v697, char v698) {
bb699:
  struct std__ctype_char_* this700;
  char __c701;
  char __retval702;
  this700 = v697;
  __c701 = v698;
  struct std__ctype_char_* t703 = this700;
    char t704 = t703->_M_widen_ok;
    _Bool cast705 = (_Bool)t704;
    if (cast705) {
      char t706 = __c701;
      unsigned char cast707 = (unsigned char)t706;
      unsigned long cast708 = (unsigned long)cast707;
      char t709 = t703->_M_widen[cast708];
      __retval702 = t709;
      char t710 = __retval702;
      return t710;
    }
  std__ctype_char____M_widen_init___const(t703);
  char t711 = __c701;
  void** v712 = (void**)t703;
  void* v713 = *((void**)v712);
  char vcall716 = (char)__VERIFIER_virtual_call_char_char(t703, 6, t711);
  __retval702 = vcall716;
  char t717 = __retval702;
  return t717;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v718, char v719) {
bb720:
  struct std__basic_ios_char__std__char_traits_char__* this721;
  char __c722;
  char __retval723;
  this721 = v718;
  __c722 = v719;
  struct std__basic_ios_char__std__char_traits_char__* t724 = this721;
  struct std__ctype_char_* t725 = t724->_M_ctype;
  struct std__ctype_char_* r726 = std__ctype_char__const__std____check_facet_std__ctype_char___(t725);
  char t727 = __c722;
  char r728 = std__ctype_char___widen_char__const(r726, t727);
  __retval723 = r728;
  char t729 = __retval723;
  return t729;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v730) {
bb731:
  struct std__basic_ostream_char__std__char_traits_char__* __os732;
  struct std__basic_ostream_char__std__char_traits_char__* __retval733;
  __os732 = v730;
  struct std__basic_ostream_char__std__char_traits_char__* t734 = __os732;
  struct std__basic_ostream_char__std__char_traits_char__* t735 = __os732;
  void** v736 = (void**)t735;
  void* v737 = *((void**)v736);
  unsigned char* cast738 = (unsigned char*)v737;
  long c739 = -24;
  unsigned char* ptr740 = &(cast738)[c739];
  long* cast741 = (long*)ptr740;
  long t742 = *cast741;
  unsigned char* cast743 = (unsigned char*)t735;
  unsigned char* ptr744 = &(cast743)[t742];
  struct std__basic_ostream_char__std__char_traits_char__* cast745 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr744;
  struct std__basic_ios_char__std__char_traits_char__* cast746 = (struct std__basic_ios_char__std__char_traits_char__*)cast745;
  char c747 = 10;
  char r748 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast746, c747);
  struct std__basic_ostream_char__std__char_traits_char__* r749 = std__ostream__put(t734, r748);
  struct std__basic_ostream_char__std__char_traits_char__* r750 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r749);
  __retval733 = r750;
  struct std__basic_ostream_char__std__char_traits_char__* t751 = __retval733;
  return t751;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v752) {
bb753:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this754;
  this754 = v752;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t755 = this754;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t755);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t755->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb756:
  int __retval757;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string1758;
  struct std__allocator_char_ ref_tmp0759;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string2760;
  struct std__allocator_char_ ref_tmp1761;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string3762;
  struct std__allocator_char_ ref_tmp2763;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string4764;
  struct std__allocator_char_ ref_tmp3765;
  int c766 = 0;
  __retval757 = c766;
  char* cast767 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0759);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string1758, cast767, &ref_tmp0759);
  {
    std__allocator_char____allocator(&ref_tmp0759);
  }
    char* cast768 = (char*)&(_str_1);
    std__allocator_char___allocator_2(&ref_tmp1761);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string2760, cast768, &ref_tmp1761);
    {
      std__allocator_char____allocator(&ref_tmp1761);
    }
      char* cast769 = (char*)&(_str_2);
      std__allocator_char___allocator_2(&ref_tmp2763);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string3762, cast769, &ref_tmp2763);
      {
        std__allocator_char____allocator(&ref_tmp2763);
      }
        char* cast770 = (char*)&(_str_3);
        std__allocator_char___allocator_2(&ref_tmp3765);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string4764, cast770, &ref_tmp3765);
        {
          std__allocator_char____allocator(&ref_tmp3765);
        }
          char* cast771 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r772 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast771);
          struct std__basic_ostream_char__std__char_traits_char__* r773 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r772, &string1758);
          char* cast774 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r775 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r773, cast774);
          struct std__basic_ostream_char__std__char_traits_char__* r776 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r775, &string2760);
          char* cast777 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r778 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r776, cast777);
          struct std__basic_ostream_char__std__char_traits_char__* r779 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r778, &string3762);
          char* cast780 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r781 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r779, cast780);
          struct std__basic_ostream_char__std__char_traits_char__* r782 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r781, &string4764);
          char* cast783 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* r784 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r782, cast783);
          unsigned long c785 = 10;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r786 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert(&string1758, c785, &string2760);
          unsigned long c787 = 3;
          unsigned long c788 = 0;
          unsigned long t789 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r790 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____insert_2(&string3762, c787, &string4764, c788, t789);
          char* cast791 = (char*)&(_str_9);
          struct std__basic_ostream_char__std__char_traits_char__* r792 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast791);
          struct std__basic_ostream_char__std__char_traits_char__* r793 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r792, &string1758);
          char* cast794 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r795 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r793, cast794);
          struct std__basic_ostream_char__std__char_traits_char__* r796 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r795, &string2760);
          char* cast797 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r798 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r796, cast797);
          struct std__basic_ostream_char__std__char_traits_char__* r799 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r798, &string3762);
          char* cast800 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r801 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r799, cast800);
          struct std__basic_ostream_char__std__char_traits_char__* r802 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r801, &string4764);
          struct std__basic_ostream_char__std__char_traits_char__* r803 = std__ostream__operator___std__ostream_____(r802, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          int c804 = 0;
          __retval757 = c804;
          int t805 = __retval757;
          int ret_val806 = t805;
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string4764);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string3762);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string2760);
          }
          {
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string1758);
          }
          return ret_val806;
  int t807 = __retval757;
  return t807;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v808) {
bb809:
  struct std____new_allocator_char_* this810;
  this810 = v808;
  struct std____new_allocator_char_* t811 = this810;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v812) {
bb813:
  char* __r814;
  char* __retval815;
  __r814 = v812;
  char* t816 = __r814;
  __retval815 = t816;
  char* t817 = __retval815;
  return t817;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v818) {
bb819:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this820;
  char* __retval821;
  this820 = v818;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t822 = this820;
  char* cast823 = (char*)&(t822->field2._M_local_buf);
  char* r824 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast823);
  __retval821 = r824;
  char* t825 = __retval821;
  return t825;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v826, char* v827, struct std__allocator_char_* v828) {
bb829:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this830;
  char* __dat831;
  struct std__allocator_char_* __a832;
  this830 = v826;
  __dat831 = v827;
  __a832 = v828;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t833 = this830;
  struct std__allocator_char_* base834 = (struct std__allocator_char_*)((char *)t833 + 0);
  struct std__allocator_char_* t835 = __a832;
  std__allocator_char___allocator(base834, t835);
    char* t836 = __dat831;
    t833->_M_p = t836;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb837:
  _Bool __retval838;
    _Bool c839 = 0;
    __retval838 = c839;
    _Bool t840 = __retval838;
    return t840;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v841, char* v842) {
bb843:
  char* __c1844;
  char* __c2845;
  _Bool __retval846;
  __c1844 = v841;
  __c2845 = v842;
  char* t847 = __c1844;
  char t848 = *t847;
  int cast849 = (int)t848;
  char* t850 = __c2845;
  char t851 = *t850;
  int cast852 = (int)t851;
  _Bool c853 = ((cast849 == cast852)) ? 1 : 0;
  __retval846 = c853;
  _Bool t854 = __retval846;
  return t854;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v855) {
bb856:
  char* __p857;
  unsigned long __retval858;
  unsigned long __i859;
  __p857 = v855;
  unsigned long c860 = 0;
  __i859 = c860;
    char ref_tmp0861;
    while (1) {
      unsigned long t862 = __i859;
      char* t863 = __p857;
      char* ptr864 = &(t863)[t862];
      char c865 = 0;
      ref_tmp0861 = c865;
      _Bool r866 = __gnu_cxx__char_traits_char___eq(ptr864, &ref_tmp0861);
      _Bool u867 = !r866;
      if (!u867) break;
      unsigned long t868 = __i859;
      unsigned long u869 = t868 + 1;
      __i859 = u869;
    }
  unsigned long t870 = __i859;
  __retval858 = t870;
  unsigned long t871 = __retval858;
  return t871;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v872) {
bb873:
  char* __s874;
  unsigned long __retval875;
  __s874 = v872;
    _Bool r876 = std____is_constant_evaluated();
    if (r876) {
      char* t877 = __s874;
      unsigned long r878 = __gnu_cxx__char_traits_char___length(t877);
      __retval875 = r878;
      unsigned long t879 = __retval875;
      return t879;
    }
  char* t880 = __s874;
  unsigned long r881 = strlen(t880);
  __retval875 = r881;
  unsigned long t882 = __retval875;
  return t882;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v883, char* v884, struct std__random_access_iterator_tag v885) {
bb886:
  char* __first887;
  char* __last888;
  struct std__random_access_iterator_tag unnamed889;
  long __retval890;
  __first887 = v883;
  __last888 = v884;
  unnamed889 = v885;
  char* t891 = __last888;
  char* t892 = __first887;
  long diff893 = t891 - t892;
  __retval890 = diff893;
  long t894 = __retval890;
  return t894;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v895) {
bb896:
  char** unnamed897;
  struct std__random_access_iterator_tag __retval898;
  unnamed897 = v895;
  struct std__random_access_iterator_tag t899 = __retval898;
  return t899;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v900, char* v901) {
bb902:
  char* __first903;
  char* __last904;
  long __retval905;
  struct std__random_access_iterator_tag agg_tmp0906;
  __first903 = v900;
  __last904 = v901;
  char* t907 = __first903;
  char* t908 = __last904;
  struct std__random_access_iterator_tag r909 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first903);
  agg_tmp0906 = r909;
  struct std__random_access_iterator_tag t910 = agg_tmp0906;
  long r911 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t907, t908, t910);
  __retval905 = r911;
  long t912 = __retval905;
  return t912;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v913, char* v914) {
bb915:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this916;
  char* __p917;
  this916 = v913;
  __p917 = v914;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t918 = this916;
  char* t919 = __p917;
  t918->_M_dataplus._M_p = t919;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v920) {
bb921:
  struct std__allocator_char_* __a922;
  unsigned long __retval923;
  __a922 = v920;
  unsigned long c924 = -1;
  unsigned long c925 = 1;
  unsigned long b926 = c924 / c925;
  __retval923 = b926;
  unsigned long t927 = __retval923;
  return t927;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v928) {
bb929:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this930;
  struct std__allocator_char_* __retval931;
  this930 = v928;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t932 = this930;
  struct std__allocator_char_* base933 = (struct std__allocator_char_*)((char *)&(t932->_M_dataplus) + 0);
  __retval931 = base933;
  struct std__allocator_char_* t934 = __retval931;
  return t934;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v935, unsigned long* v936) {
bb937:
  unsigned long* __a938;
  unsigned long* __b939;
  unsigned long* __retval940;
  __a938 = v935;
  __b939 = v936;
    unsigned long* t941 = __b939;
    unsigned long t942 = *t941;
    unsigned long* t943 = __a938;
    unsigned long t944 = *t943;
    _Bool c945 = ((t942 < t944)) ? 1 : 0;
    if (c945) {
      unsigned long* t946 = __b939;
      __retval940 = t946;
      unsigned long* t947 = __retval940;
      return t947;
    }
  unsigned long* t948 = __a938;
  __retval940 = t948;
  unsigned long* t949 = __retval940;
  return t949;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v950) {
bb951:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this952;
  unsigned long __retval953;
  unsigned long __diffmax954;
  unsigned long __allocmax955;
  this952 = v950;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t956 = this952;
  unsigned long c957 = 9223372036854775807;
  __diffmax954 = c957;
  struct std__allocator_char_* r958 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t956);
  unsigned long r959 = std__allocator_traits_std__allocator_char_____max_size(r958);
  __allocmax955 = r959;
  unsigned long* r960 = unsigned_long_const__std__min_unsigned_long_(&__diffmax954, &__allocmax955);
  unsigned long t961 = *r960;
  unsigned long c962 = 1;
  unsigned long b963 = t961 - c962;
  __retval953 = b963;
  unsigned long t964 = __retval953;
  return t964;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v965) {
bb966:
  struct std____new_allocator_char_* this967;
  unsigned long __retval968;
  this967 = v965;
  struct std____new_allocator_char_* t969 = this967;
  unsigned long c970 = 9223372036854775807;
  unsigned long c971 = 1;
  unsigned long b972 = c970 / c971;
  __retval968 = b972;
  unsigned long t973 = __retval968;
  return t973;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v974, unsigned long v975, void* v976) {
bb977:
  struct std____new_allocator_char_* this978;
  unsigned long __n979;
  void* unnamed980;
  char* __retval981;
  this978 = v974;
  __n979 = v975;
  unnamed980 = v976;
  struct std____new_allocator_char_* t982 = this978;
    unsigned long t983 = __n979;
    unsigned long r984 = std____new_allocator_char____M_max_size___const(t982);
    _Bool c985 = ((t983 > r984)) ? 1 : 0;
    if (c985) {
        unsigned long t986 = __n979;
        unsigned long c987 = -1;
        unsigned long c988 = 1;
        unsigned long b989 = c987 / c988;
        _Bool c990 = ((t986 > b989)) ? 1 : 0;
        if (c990) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c991 = 1;
    unsigned long c992 = 16;
    _Bool c993 = ((c991 > c992)) ? 1 : 0;
    if (c993) {
      unsigned long __al994;
      unsigned long c995 = 1;
      __al994 = c995;
      unsigned long t996 = __n979;
      unsigned long c997 = 1;
      unsigned long b998 = t996 * c997;
      unsigned long t999 = __al994;
      void* r1000 = operator_new_2(b998, t999);
      char* cast1001 = (char*)r1000;
      __retval981 = cast1001;
      char* t1002 = __retval981;
      return t1002;
    }
  unsigned long t1003 = __n979;
  unsigned long c1004 = 1;
  unsigned long b1005 = t1003 * c1004;
  void* r1006 = operator_new(b1005);
  char* cast1007 = (char*)r1006;
  __retval981 = cast1007;
  char* t1008 = __retval981;
  return t1008;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1009, unsigned long v1010) {
bb1011:
  struct std__allocator_char_* this1012;
  unsigned long __n1013;
  char* __retval1014;
  this1012 = v1009;
  __n1013 = v1010;
  struct std__allocator_char_* t1015 = this1012;
    _Bool r1016 = std____is_constant_evaluated();
    if (r1016) {
        unsigned long t1017 = __n1013;
        unsigned long c1018 = 1;
        unsigned long ovr1019;
        _Bool ovf1020 = __builtin_mul_overflow(t1017, c1018, &ovr1019);
        __n1013 = ovr1019;
        if (ovf1020) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1021 = __n1013;
      void* r1022 = operator_new(t1021);
      char* cast1023 = (char*)r1022;
      __retval1014 = cast1023;
      char* t1024 = __retval1014;
      return t1024;
    }
  struct std____new_allocator_char_* base1025 = (struct std____new_allocator_char_*)((char *)t1015 + 0);
  unsigned long t1026 = __n1013;
  void* c1027 = ((void*)0);
  char* r1028 = std____new_allocator_char___allocate(base1025, t1026, c1027);
  __retval1014 = r1028;
  char* t1029 = __retval1014;
  return t1029;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1030, unsigned long v1031) {
bb1032:
  struct std__allocator_char_* __a1033;
  unsigned long __n1034;
  char* __retval1035;
  __a1033 = v1030;
  __n1034 = v1031;
  struct std__allocator_char_* t1036 = __a1033;
  unsigned long t1037 = __n1034;
  char* r1038 = std__allocator_char___allocate(t1036, t1037);
  __retval1035 = r1038;
  char* t1039 = __retval1035;
  return t1039;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1040, unsigned long v1041) {
bb1042:
  struct std__allocator_char_* __a1043;
  unsigned long __n1044;
  char* __retval1045;
  char* __p1046;
  __a1043 = v1040;
  __n1044 = v1041;
  struct std__allocator_char_* t1047 = __a1043;
  unsigned long t1048 = __n1044;
  char* r1049 = std__allocator_traits_std__allocator_char_____allocate(t1047, t1048);
  __p1046 = r1049;
  char* t1050 = __p1046;
  __retval1045 = t1050;
  char* t1051 = __retval1045;
  return t1051;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1052) {
bb1053:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1054;
  struct std__allocator_char_* __retval1055;
  this1054 = v1052;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1056 = this1054;
  struct std__allocator_char_* base1057 = (struct std__allocator_char_*)((char *)&(t1056->_M_dataplus) + 0);
  __retval1055 = base1057;
  struct std__allocator_char_* t1058 = __retval1055;
  return t1058;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1059, unsigned long* v1060, unsigned long v1061) {
bb1062:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1063;
  unsigned long* __capacity1064;
  unsigned long __old_capacity1065;
  char* __retval1066;
  this1063 = v1059;
  __capacity1064 = v1060;
  __old_capacity1065 = v1061;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1067 = this1063;
    unsigned long* t1068 = __capacity1064;
    unsigned long t1069 = *t1068;
    unsigned long r1070 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1067);
    _Bool c1071 = ((t1069 > r1070)) ? 1 : 0;
    if (c1071) {
      char* cast1072 = (char*)&(_str_11);
      std____throw_length_error(cast1072);
    }
    unsigned long* t1073 = __capacity1064;
    unsigned long t1074 = *t1073;
    unsigned long t1075 = __old_capacity1065;
    _Bool c1076 = ((t1074 > t1075)) ? 1 : 0;
    _Bool ternary1077;
    if (c1076) {
      unsigned long* t1078 = __capacity1064;
      unsigned long t1079 = *t1078;
      unsigned long c1080 = 2;
      unsigned long t1081 = __old_capacity1065;
      unsigned long b1082 = c1080 * t1081;
      _Bool c1083 = ((t1079 < b1082)) ? 1 : 0;
      ternary1077 = (_Bool)c1083;
    } else {
      _Bool c1084 = 0;
      ternary1077 = (_Bool)c1084;
    }
    if (ternary1077) {
      unsigned long c1085 = 2;
      unsigned long t1086 = __old_capacity1065;
      unsigned long b1087 = c1085 * t1086;
      unsigned long* t1088 = __capacity1064;
      *t1088 = b1087;
        unsigned long* t1089 = __capacity1064;
        unsigned long t1090 = *t1089;
        unsigned long r1091 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1067);
        _Bool c1092 = ((t1090 > r1091)) ? 1 : 0;
        if (c1092) {
          unsigned long r1093 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1067);
          unsigned long* t1094 = __capacity1064;
          *t1094 = r1093;
        }
    }
  struct std__allocator_char_* r1095 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1067);
  unsigned long* t1096 = __capacity1064;
  unsigned long t1097 = *t1096;
  unsigned long c1098 = 1;
  unsigned long b1099 = t1097 + c1098;
  char* r1100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1095, b1099);
  __retval1066 = r1100;
  char* t1101 = __retval1066;
  return t1101;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1102, unsigned long v1103) {
bb1104:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1105;
  unsigned long __capacity1106;
  this1105 = v1102;
  __capacity1106 = v1103;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1107 = this1105;
  unsigned long t1108 = __capacity1106;
  t1107->field2._M_allocated_capacity = t1108;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1109:
  _Bool __retval1110;
    _Bool c1111 = 0;
    __retval1110 = c1111;
    _Bool t1112 = __retval1110;
    return t1112;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1113) {
bb1114:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1115;
  this1115 = v1113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1116 = this1115;
    _Bool r1117 = std__is_constant_evaluated();
    if (r1117) {
        unsigned long __i1118;
        unsigned long c1119 = 0;
        __i1118 = c1119;
        while (1) {
          unsigned long t1121 = __i1118;
          unsigned long c1122 = 15;
          _Bool c1123 = ((t1121 <= c1122)) ? 1 : 0;
          if (!c1123) break;
          char c1124 = 0;
          unsigned long t1125 = __i1118;
          t1116->field2._M_local_buf[t1125] = c1124;
        for_step1120: ;
          unsigned long t1126 = __i1118;
          unsigned long u1127 = t1126 + 1;
          __i1118 = u1127;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1128, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1129) {
bb1130:
  struct _Guard* this1131;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1132;
  this1131 = v1128;
  __s1132 = v1129;
  struct _Guard* t1133 = this1131;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1134 = __s1132;
  t1133->_M_guarded = t1134;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1135, char* v1136) {
bb1137:
  char* __location1138;
  char* __args1139;
  char* __retval1140;
  void* __loc1141;
  __location1138 = v1135;
  __args1139 = v1136;
  char* t1142 = __location1138;
  void* cast1143 = (void*)t1142;
  __loc1141 = cast1143;
    void* t1144 = __loc1141;
    char* cast1145 = (char*)t1144;
    char* t1146 = __args1139;
    char t1147 = *t1146;
    *cast1145 = t1147;
    __retval1140 = cast1145;
    char* t1148 = __retval1140;
    return t1148;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1149, char* v1150) {
bb1151:
  char* __c11152;
  char* __c21153;
  __c11152 = v1149;
  __c21153 = v1150;
    _Bool r1154 = std____is_constant_evaluated();
    if (r1154) {
      char* t1155 = __c11152;
      char* t1156 = __c21153;
      char* r1157 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1155, t1156);
    } else {
      char* t1158 = __c21153;
      char t1159 = *t1158;
      char* t1160 = __c11152;
      *t1160 = t1159;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1161, char* v1162, unsigned long v1163) {
bb1164:
  char* __s11165;
  char* __s21166;
  unsigned long __n1167;
  char* __retval1168;
  __s11165 = v1161;
  __s21166 = v1162;
  __n1167 = v1163;
    unsigned long t1169 = __n1167;
    unsigned long c1170 = 0;
    _Bool c1171 = ((t1169 == c1170)) ? 1 : 0;
    if (c1171) {
      char* t1172 = __s11165;
      __retval1168 = t1172;
      char* t1173 = __retval1168;
      return t1173;
    }
    _Bool r1174 = std____is_constant_evaluated();
    if (r1174) {
        unsigned long __i1175;
        unsigned long c1176 = 0;
        __i1175 = c1176;
        while (1) {
          unsigned long t1178 = __i1175;
          unsigned long t1179 = __n1167;
          _Bool c1180 = ((t1178 < t1179)) ? 1 : 0;
          if (!c1180) break;
          char* t1181 = __s11165;
          unsigned long t1182 = __i1175;
          char* ptr1183 = &(t1181)[t1182];
          unsigned long t1184 = __i1175;
          char* t1185 = __s21166;
          char* ptr1186 = &(t1185)[t1184];
          char* r1187 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1183, ptr1186);
        for_step1177: ;
          unsigned long t1188 = __i1175;
          unsigned long u1189 = t1188 + 1;
          __i1175 = u1189;
        }
      char* t1190 = __s11165;
      __retval1168 = t1190;
      char* t1191 = __retval1168;
      return t1191;
    }
  char* t1192 = __s11165;
  void* cast1193 = (void*)t1192;
  char* t1194 = __s21166;
  void* cast1195 = (void*)t1194;
  unsigned long t1196 = __n1167;
  unsigned long c1197 = 1;
  unsigned long b1198 = t1196 * c1197;
  void* r1199 = memcpy(cast1193, cast1195, b1198);
  char* t1200 = __s11165;
  __retval1168 = t1200;
  char* t1201 = __retval1168;
  return t1201;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1202, char* v1203, unsigned long v1204) {
bb1205:
  char* __s11206;
  char* __s21207;
  unsigned long __n1208;
  char* __retval1209;
  __s11206 = v1202;
  __s21207 = v1203;
  __n1208 = v1204;
    unsigned long t1210 = __n1208;
    unsigned long c1211 = 0;
    _Bool c1212 = ((t1210 == c1211)) ? 1 : 0;
    if (c1212) {
      char* t1213 = __s11206;
      __retval1209 = t1213;
      char* t1214 = __retval1209;
      return t1214;
    }
    _Bool r1215 = std____is_constant_evaluated();
    if (r1215) {
      char* t1216 = __s11206;
      char* t1217 = __s21207;
      unsigned long t1218 = __n1208;
      char* r1219 = __gnu_cxx__char_traits_char___copy(t1216, t1217, t1218);
      __retval1209 = r1219;
      char* t1220 = __retval1209;
      return t1220;
    }
  char* t1221 = __s11206;
  void* cast1222 = (void*)t1221;
  char* t1223 = __s21207;
  void* cast1224 = (void*)t1223;
  unsigned long t1225 = __n1208;
  void* r1226 = memcpy(cast1222, cast1224, t1225);
  char* cast1227 = (char*)r1226;
  __retval1209 = cast1227;
  char* t1228 = __retval1209;
  return t1228;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1229, char* v1230, unsigned long v1231) {
bb1232:
  char* __d1233;
  char* __s1234;
  unsigned long __n1235;
  __d1233 = v1229;
  __s1234 = v1230;
  __n1235 = v1231;
    unsigned long t1236 = __n1235;
    unsigned long c1237 = 1;
    _Bool c1238 = ((t1236 == c1237)) ? 1 : 0;
    if (c1238) {
      char* t1239 = __d1233;
      char* t1240 = __s1234;
      std__char_traits_char___assign(t1239, t1240);
    } else {
      char* t1241 = __d1233;
      char* t1242 = __s1234;
      unsigned long t1243 = __n1235;
      char* r1244 = std__char_traits_char___copy(t1241, t1242, t1243);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1245) {
bb1246:
  char* __it1247;
  char* __retval1248;
  __it1247 = v1245;
  char* t1249 = __it1247;
  __retval1248 = t1249;
  char* t1250 = __retval1248;
  return t1250;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1251, char* v1252, char* v1253) {
bb1254:
  char* __p1255;
  char* __k11256;
  char* __k21257;
  __p1255 = v1251;
  __k11256 = v1252;
  __k21257 = v1253;
    char* t1258 = __p1255;
    char* t1259 = __k11256;
    char* r1260 = char_const__std____niter_base_char_const__(t1259);
    char* t1261 = __k21257;
    char* t1262 = __k11256;
    long diff1263 = t1261 - t1262;
    unsigned long cast1264 = (unsigned long)diff1263;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1258, r1260, cast1264);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1265) {
bb1266:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1267;
  char* __retval1268;
  this1267 = v1265;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1269 = this1267;
  char* t1270 = t1269->_M_dataplus._M_p;
  __retval1268 = t1270;
  char* t1271 = __retval1268;
  return t1271;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1272, unsigned long v1273) {
bb1274:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1275;
  unsigned long __length1276;
  this1275 = v1272;
  __length1276 = v1273;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1277 = this1275;
  unsigned long t1278 = __length1276;
  t1277->_M_string_length = t1278;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1279, unsigned long v1280) {
bb1281:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1282;
  unsigned long __n1283;
  char ref_tmp01284;
  this1282 = v1279;
  __n1283 = v1280;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1285 = this1282;
  unsigned long t1286 = __n1283;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1285, t1286);
  unsigned long t1287 = __n1283;
  char* r1288 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1285);
  char* ptr1289 = &(r1288)[t1287];
  char c1290 = 0;
  ref_tmp01284 = c1290;
  std__char_traits_char___assign(ptr1289, &ref_tmp01284);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1291) {
bb1292:
  struct _Guard* this1293;
  this1293 = v1291;
  struct _Guard* t1294 = this1293;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1295 = t1294->_M_guarded;
    _Bool cast1296 = (_Bool)t1295;
    if (cast1296) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1297 = t1294->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1297);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1298, char* v1299, char* v1300, struct std__forward_iterator_tag v1301) {
bb1302:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1303;
  char* __beg1304;
  char* __end1305;
  struct std__forward_iterator_tag unnamed1306;
  unsigned long __dnew1307;
  struct _Guard __guard1308;
  this1303 = v1298;
  __beg1304 = v1299;
  __end1305 = v1300;
  unnamed1306 = v1301;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1309 = this1303;
  char* t1310 = __beg1304;
  char* t1311 = __end1305;
  long r1312 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1310, t1311);
  unsigned long cast1313 = (unsigned long)r1312;
  __dnew1307 = cast1313;
    unsigned long t1314 = __dnew1307;
    unsigned long c1315 = 15;
    _Bool c1316 = ((t1314 > c1315)) ? 1 : 0;
    if (c1316) {
      unsigned long c1317 = 0;
      char* r1318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1309, &__dnew1307, c1317);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1309, r1318);
      unsigned long t1319 = __dnew1307;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1309, t1319);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1309);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1308, t1309);
    char* r1320 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1309);
    char* t1321 = __beg1304;
    char* t1322 = __end1305;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1320, t1321, t1322);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1323 = ((void*)0);
    __guard1308._M_guarded = c1323;
    unsigned long t1324 = __dnew1307;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1309, t1324);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1308);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1325) {
bb1326:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1327;
  this1327 = v1325;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1328 = this1327;
  {
    struct std__allocator_char_* base1329 = (struct std__allocator_char_*)((char *)t1328 + 0);
    std__allocator_char____allocator(base1329);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1330, struct std____new_allocator_char_* v1331) {
bb1332:
  struct std____new_allocator_char_* this1333;
  struct std____new_allocator_char_* unnamed1334;
  this1333 = v1330;
  unnamed1334 = v1331;
  struct std____new_allocator_char_* t1335 = this1333;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1336, struct std__allocator_char_* v1337) {
bb1338:
  struct std__allocator_char_* this1339;
  struct std__allocator_char_* __a1340;
  this1339 = v1336;
  __a1340 = v1337;
  struct std__allocator_char_* t1341 = this1339;
  struct std____new_allocator_char_* base1342 = (struct std____new_allocator_char_*)((char *)t1341 + 0);
  struct std__allocator_char_* t1343 = __a1340;
  struct std____new_allocator_char_* base1344 = (struct std____new_allocator_char_*)((char *)t1343 + 0);
  std____new_allocator_char_____new_allocator(base1342, base1344);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1345) {
bb1346:
  char* __r1347;
  char* __retval1348;
  __r1347 = v1345;
  char* t1349 = __r1347;
  __retval1348 = t1349;
  char* t1350 = __retval1348;
  return t1350;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1351) {
bb1352:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1353;
  char* __retval1354;
  this1353 = v1351;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1355 = this1353;
  char* cast1356 = (char*)&(t1355->field2._M_local_buf);
  char* r1357 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1356);
  __retval1354 = r1357;
  char* t1358 = __retval1354;
  return t1358;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1359) {
bb1360:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1361;
  _Bool __retval1362;
  this1361 = v1359;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1363 = this1361;
    char* r1364 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1363);
    char* r1365 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1363);
    _Bool c1366 = ((r1364 == r1365)) ? 1 : 0;
    if (c1366) {
        unsigned long t1367 = t1363->_M_string_length;
        unsigned long c1368 = 15;
        _Bool c1369 = ((t1367 > c1368)) ? 1 : 0;
        if (c1369) {
          __builtin_unreachable();
        }
      _Bool c1370 = 1;
      __retval1362 = c1370;
      _Bool t1371 = __retval1362;
      return t1371;
    }
  _Bool c1372 = 0;
  __retval1362 = c1372;
  _Bool t1373 = __retval1362;
  return t1373;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1374, char* v1375, unsigned long v1376) {
bb1377:
  struct std____new_allocator_char_* this1378;
  char* __p1379;
  unsigned long __n1380;
  this1378 = v1374;
  __p1379 = v1375;
  __n1380 = v1376;
  struct std____new_allocator_char_* t1381 = this1378;
    unsigned long c1382 = 1;
    unsigned long c1383 = 16;
    _Bool c1384 = ((c1382 > c1383)) ? 1 : 0;
    if (c1384) {
      char* t1385 = __p1379;
      void* cast1386 = (void*)t1385;
      unsigned long t1387 = __n1380;
      unsigned long c1388 = 1;
      unsigned long b1389 = t1387 * c1388;
      unsigned long c1390 = 1;
      operator_delete_3(cast1386, b1389, c1390);
      return;
    }
  char* t1391 = __p1379;
  void* cast1392 = (void*)t1391;
  unsigned long t1393 = __n1380;
  unsigned long c1394 = 1;
  unsigned long b1395 = t1393 * c1394;
  operator_delete_2(cast1392, b1395);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1396, char* v1397, unsigned long v1398) {
bb1399:
  struct std__allocator_char_* this1400;
  char* __p1401;
  unsigned long __n1402;
  this1400 = v1396;
  __p1401 = v1397;
  __n1402 = v1398;
  struct std__allocator_char_* t1403 = this1400;
    _Bool r1404 = std____is_constant_evaluated();
    if (r1404) {
      char* t1405 = __p1401;
      void* cast1406 = (void*)t1405;
      operator_delete(cast1406);
      return;
    }
  struct std____new_allocator_char_* base1407 = (struct std____new_allocator_char_*)((char *)t1403 + 0);
  char* t1408 = __p1401;
  unsigned long t1409 = __n1402;
  std____new_allocator_char___deallocate(base1407, t1408, t1409);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1410, char* v1411, unsigned long v1412) {
bb1413:
  struct std__allocator_char_* __a1414;
  char* __p1415;
  unsigned long __n1416;
  __a1414 = v1410;
  __p1415 = v1411;
  __n1416 = v1412;
  struct std__allocator_char_* t1417 = __a1414;
  char* t1418 = __p1415;
  unsigned long t1419 = __n1416;
  std__allocator_char___deallocate(t1417, t1418, t1419);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1420, unsigned long v1421) {
bb1422:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1423;
  unsigned long __size1424;
  this1423 = v1420;
  __size1424 = v1421;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1425 = this1423;
  struct std__allocator_char_* r1426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1425);
  char* r1427 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1425);
  unsigned long t1428 = __size1424;
  unsigned long c1429 = 1;
  unsigned long b1430 = t1428 + c1429;
  std__allocator_traits_std__allocator_char_____deallocate(r1426, r1427, b1430);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1431) {
bb1432:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1433;
  this1433 = v1431;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1434 = this1433;
    _Bool r1435 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1434);
    _Bool u1436 = !r1435;
    if (u1436) {
      unsigned long t1437 = t1434->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1434, t1437);
    }
  return;
}

