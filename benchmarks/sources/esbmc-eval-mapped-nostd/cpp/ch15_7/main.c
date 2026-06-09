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
char _str[156] = "The values in any left subtree\nare less than the value in the\nparent node and the values in\nany right subtree are greater\nthan the value in the parent node";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_1[18] = "Original string:\n";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_2[30] = "Original string after erase:\n";
char _str_3[28] = "\n\nAfter first replacement:\n";
char _str_4[2] = " ";
char _str_5[2] = ".";
char _str_6[29] = "\n\nAfter second replacement:\n";
char _str_7[11] = "xxxxx;;yyy";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
char _str_10[20] = "basic_string::erase";
char _str_11[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_12[22] = "basic_string::replace";
char _str_13[25] = "basic_string::_M_replace";
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
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
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void __gnu_cxx__char_traits_char___assign(char* p0, char* p1);
char* __gnu_cxx__char_traits_char___move(char* p0, char* p1, unsigned long p2);
extern void* memmove(void* p0, void* p1, unsigned long p2);
char* std__char_traits_char___move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* p0, char* p1, char* p2);
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, char* p3, unsigned long p4, unsigned long p5);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3, unsigned long p4);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, char* p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p3, unsigned long p4, unsigned long p5);
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
        char* cast20 = (char*)&(_str_8);
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

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v32, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v33) {
bb34:
  struct std__basic_ostream_char__std__char_traits_char__* __os35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str36;
  struct std__basic_ostream_char__std__char_traits_char__* __retval37;
  __os35 = v32;
  __str36 = v33;
  struct std__basic_ostream_char__std__char_traits_char__* t38 = __os35;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t39 = __str36;
  char* r40 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t39);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t41 = __str36;
  unsigned long r42 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t41);
  long cast43 = (long)r42;
  struct std__basic_ostream_char__std__char_traits_char__* r44 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t38, r40, cast43);
  __retval37 = r44;
  struct std__basic_ostream_char__std__char_traits_char__* t45 = __retval37;
  return t45;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v46, int v47) {
bb48:
  int __a49;
  int __b50;
  int __retval51;
  __a49 = v46;
  __b50 = v47;
  int t52 = __a49;
  int t53 = __b50;
  int b54 = t52 | t53;
  __retval51 = b54;
  int t55 = __retval51;
  return t55;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v56) {
bb57:
  struct std__basic_ios_char__std__char_traits_char__* this58;
  int __retval59;
  this58 = v56;
  struct std__basic_ios_char__std__char_traits_char__* t60 = this58;
  struct std__ios_base* base61 = (struct std__ios_base*)((char *)t60 + 0);
  int t62 = base61->_M_streambuf_state;
  __retval59 = t62;
  int t63 = __retval59;
  return t63;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v64, int v65) {
bb66:
  struct std__basic_ios_char__std__char_traits_char__* this67;
  int __state68;
  this67 = v64;
  __state68 = v65;
  struct std__basic_ios_char__std__char_traits_char__* t69 = this67;
  int r70 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t69);
  int t71 = __state68;
  int r72 = std__operator_(r70, t71);
  std__basic_ios_char__std__char_traits_char_____clear(t69, r72);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v73, char* v74) {
bb75:
  struct std__basic_ostream_char__std__char_traits_char__* __out76;
  char* __s77;
  struct std__basic_ostream_char__std__char_traits_char__* __retval78;
  __out76 = v73;
  __s77 = v74;
    char* t79 = __s77;
    _Bool cast80 = (_Bool)t79;
    _Bool u81 = !cast80;
    if (u81) {
      struct std__basic_ostream_char__std__char_traits_char__* t82 = __out76;
      void** v83 = (void**)t82;
      void* v84 = *((void**)v83);
      unsigned char* cast85 = (unsigned char*)v84;
      long c86 = -24;
      unsigned char* ptr87 = &(cast85)[c86];
      long* cast88 = (long*)ptr87;
      long t89 = *cast88;
      unsigned char* cast90 = (unsigned char*)t82;
      unsigned char* ptr91 = &(cast90)[t89];
      struct std__basic_ostream_char__std__char_traits_char__* cast92 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr91;
      struct std__basic_ios_char__std__char_traits_char__* cast93 = (struct std__basic_ios_char__std__char_traits_char__*)cast92;
      int t94 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast93, t94);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t95 = __out76;
      char* t96 = __s77;
      char* t97 = __s77;
      unsigned long r98 = std__char_traits_char___length(t97);
      long cast99 = (long)r98;
      struct std__basic_ostream_char__std__char_traits_char__* r100 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t95, t96, cast99);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __out76;
  __retval78 = t101;
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __retval78;
  return t102;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v103, void* v104) {
bb105:
  struct std__basic_ostream_char__std__char_traits_char__* this106;
  void* __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* __retval108;
  this106 = v103;
  __pf107 = v104;
  struct std__basic_ostream_char__std__char_traits_char__* t109 = this106;
  void* t110 = __pf107;
  struct std__basic_ostream_char__std__char_traits_char__* r111 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t110)(t109);
  __retval108 = r111;
  struct std__basic_ostream_char__std__char_traits_char__* t112 = __retval108;
  return t112;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v113) {
bb114:
  struct std__basic_ostream_char__std__char_traits_char__* __os115;
  struct std__basic_ostream_char__std__char_traits_char__* __retval116;
  __os115 = v113;
  struct std__basic_ostream_char__std__char_traits_char__* t117 = __os115;
  struct std__basic_ostream_char__std__char_traits_char__* r118 = std__ostream__flush(t117);
  __retval116 = r118;
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __retval116;
  return t119;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v120) {
bb121:
  struct std__ctype_char_* __f122;
  struct std__ctype_char_* __retval123;
  __f122 = v120;
    struct std__ctype_char_* t124 = __f122;
    _Bool cast125 = (_Bool)t124;
    _Bool u126 = !cast125;
    if (u126) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t127 = __f122;
  __retval123 = t127;
  struct std__ctype_char_* t128 = __retval123;
  return t128;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v129, char v130) {
bb131:
  struct std__ctype_char_* this132;
  char __c133;
  char __retval134;
  this132 = v129;
  __c133 = v130;
  struct std__ctype_char_* t135 = this132;
    char t136 = t135->_M_widen_ok;
    _Bool cast137 = (_Bool)t136;
    if (cast137) {
      char t138 = __c133;
      unsigned char cast139 = (unsigned char)t138;
      unsigned long cast140 = (unsigned long)cast139;
      char t141 = t135->_M_widen[cast140];
      __retval134 = t141;
      char t142 = __retval134;
      return t142;
    }
  std__ctype_char____M_widen_init___const(t135);
  char t143 = __c133;
  void** v144 = (void**)t135;
  void* v145 = *((void**)v144);
  char vcall148 = (char)__VERIFIER_virtual_call_char_char(t135, 6, t143);
  __retval134 = vcall148;
  char t149 = __retval134;
  return t149;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v150, char v151) {
bb152:
  struct std__basic_ios_char__std__char_traits_char__* this153;
  char __c154;
  char __retval155;
  this153 = v150;
  __c154 = v151;
  struct std__basic_ios_char__std__char_traits_char__* t156 = this153;
  struct std__ctype_char_* t157 = t156->_M_ctype;
  struct std__ctype_char_* r158 = std__ctype_char__const__std____check_facet_std__ctype_char___(t157);
  char t159 = __c154;
  char r160 = std__ctype_char___widen_char__const(r158, t159);
  __retval155 = r160;
  char t161 = __retval155;
  return t161;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* __os164;
  struct std__basic_ostream_char__std__char_traits_char__* __retval165;
  __os164 = v162;
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __os164;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = __os164;
  void** v168 = (void**)t167;
  void* v169 = *((void**)v168);
  unsigned char* cast170 = (unsigned char*)v169;
  long c171 = -24;
  unsigned char* ptr172 = &(cast170)[c171];
  long* cast173 = (long*)ptr172;
  long t174 = *cast173;
  unsigned char* cast175 = (unsigned char*)t167;
  unsigned char* ptr176 = &(cast175)[t174];
  struct std__basic_ostream_char__std__char_traits_char__* cast177 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr176;
  struct std__basic_ios_char__std__char_traits_char__* cast178 = (struct std__basic_ios_char__std__char_traits_char__*)cast177;
  char c179 = 10;
  char r180 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast178, c179);
  struct std__basic_ostream_char__std__char_traits_char__* r181 = std__ostream__put(t166, r180);
  struct std__basic_ostream_char__std__char_traits_char__* r182 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r181);
  __retval165 = r182;
  struct std__basic_ostream_char__std__char_traits_char__* t183 = __retval165;
  return t183;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v184) {
bb185:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this186;
  unsigned long __retval187;
  unsigned long __sz188;
  this186 = v184;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t189 = this186;
  unsigned long t190 = t189->_M_string_length;
  __sz188 = t190;
    unsigned long t191 = __sz188;
    unsigned long r192 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t189);
    _Bool c193 = ((t191 > r192)) ? 1 : 0;
    if (c193) {
      __builtin_unreachable();
    }
  unsigned long t194 = __sz188;
  __retval187 = t194;
  unsigned long t195 = __retval187;
  return t195;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v196, unsigned long v197, char* v198) {
bb199:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this200;
  unsigned long __pos201;
  char* __s202;
  unsigned long __retval203;
  this200 = v196;
  __pos201 = v197;
  __s202 = v198;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t204 = this200;
    unsigned long t205 = __pos201;
    unsigned long r206 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t204);
    _Bool c207 = ((t205 > r206)) ? 1 : 0;
    if (c207) {
      char* cast208 = (char*)&(_str_11);
      char* t209 = __s202;
      unsigned long t210 = __pos201;
      unsigned long r211 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t204);
      std____throw_out_of_range_fmt(cast208, t209, t210, r211);
    }
  unsigned long t212 = __pos201;
  __retval203 = t212;
  unsigned long t213 = __retval203;
  return t213;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v214) {
bb215:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this216;
  unsigned long __retval217;
  this216 = v214;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t218 = this216;
  unsigned long r219 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t218);
  __retval217 = r219;
  unsigned long t220 = __retval217;
  return t220;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6assignERcRKc
void __gnu_cxx__char_traits_char___assign(char* v221, char* v222) {
bb223:
  char* __c1224;
  char* __c2225;
  __c1224 = v221;
  __c2225 = v222;
    _Bool r226 = std____is_constant_evaluated();
    if (r226) {
      char* t227 = __c1224;
      char* t228 = __c2225;
      char* r229 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t227, t228);
    } else {
      char* t230 = __c2225;
      char t231 = *t230;
      char* t232 = __c1224;
      *t232 = t231;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4moveEPcPKcm
char* __gnu_cxx__char_traits_char___move(char* v233, char* v234, unsigned long v235) {
bb236:
  char* __s1237;
  char* __s2238;
  unsigned long __n239;
  char* __retval240;
  __s1237 = v233;
  __s2238 = v234;
  __n239 = v235;
    unsigned long t241 = __n239;
    unsigned long c242 = 0;
    _Bool c243 = ((t241 == c242)) ? 1 : 0;
    if (c243) {
      char* t244 = __s1237;
      __retval240 = t244;
      char* t245 = __retval240;
      return t245;
    }
    _Bool r246 = std____is_constant_evaluated();
    if (r246) {
        char* t247 = __s2238;
        char* t248 = __s1237;
        _Bool c249 = ((t247 < t248)) ? 1 : 0;
        _Bool isconst250 = 0;
        _Bool ternary251;
        if (isconst250) {
          char* t252 = __s1237;
          char* t253 = __s2238;
          _Bool c254 = ((t252 > t253)) ? 1 : 0;
          ternary251 = (_Bool)c254;
        } else {
          _Bool c255 = 0;
          ternary251 = (_Bool)c255;
        }
        _Bool ternary256;
        if (ternary251) {
          char* t257 = __s1237;
          char* t258 = __s2238;
          unsigned long t259 = __n239;
          char* ptr260 = &(t258)[t259];
          _Bool c261 = ((t257 < ptr260)) ? 1 : 0;
          ternary256 = (_Bool)c261;
        } else {
          _Bool c262 = 0;
          ternary256 = (_Bool)c262;
        }
        if (ternary256) {
            do {
                unsigned long t263 = __n239;
                unsigned long u264 = t263 - 1;
                __n239 = u264;
                unsigned long t265 = __n239;
                char* t266 = __s1237;
                char* ptr267 = &(t266)[t265];
                unsigned long t268 = __n239;
                char* t269 = __s2238;
                char* ptr270 = &(t269)[t268];
                __gnu_cxx__char_traits_char___assign(ptr267, ptr270);
              unsigned long t271 = __n239;
              unsigned long c272 = 0;
              _Bool c273 = ((t271 > c272)) ? 1 : 0;
              if (!c273) break;
            } while (1);
        } else {
          char* t274 = __s1237;
          char* t275 = __s2238;
          unsigned long t276 = __n239;
          char* r277 = __gnu_cxx__char_traits_char___copy(t274, t275, t276);
        }
      char* t278 = __s1237;
      __retval240 = t278;
      char* t279 = __retval240;
      return t279;
    }
  char* t280 = __s1237;
  void* cast281 = (void*)t280;
  char* t282 = __s2238;
  void* cast283 = (void*)t282;
  unsigned long t284 = __n239;
  unsigned long c285 = 1;
  unsigned long b286 = t284 * c285;
  void* r287 = memmove(cast281, cast283, b286);
  char* t288 = __s1237;
  __retval240 = t288;
  char* t289 = __retval240;
  return t289;
}

// function: _ZNSt11char_traitsIcE4moveEPcPKcm
char* std__char_traits_char___move(char* v290, char* v291, unsigned long v292) {
bb293:
  char* __s1294;
  char* __s2295;
  unsigned long __n296;
  char* __retval297;
  __s1294 = v290;
  __s2295 = v291;
  __n296 = v292;
    unsigned long t298 = __n296;
    unsigned long c299 = 0;
    _Bool c300 = ((t298 == c299)) ? 1 : 0;
    if (c300) {
      char* t301 = __s1294;
      __retval297 = t301;
      char* t302 = __retval297;
      return t302;
    }
    _Bool r303 = std____is_constant_evaluated();
    if (r303) {
      char* t304 = __s1294;
      char* t305 = __s2295;
      unsigned long t306 = __n296;
      char* r307 = __gnu_cxx__char_traits_char___move(t304, t305, t306);
      __retval297 = r307;
      char* t308 = __retval297;
      return t308;
    }
  char* t309 = __s1294;
  void* cast310 = (void*)t309;
  char* t311 = __s2295;
  void* cast312 = (void*)t311;
  unsigned long t313 = __n296;
  void* r314 = memmove(cast310, cast312, t313);
  char* cast315 = (char*)r314;
  __retval297 = cast315;
  char* t316 = __retval297;
  return t316;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_moveEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(char* v317, char* v318, unsigned long v319) {
bb320:
  char* __d321;
  char* __s322;
  unsigned long __n323;
  __d321 = v317;
  __s322 = v318;
  __n323 = v319;
    unsigned long t324 = __n323;
    unsigned long c325 = 1;
    _Bool c326 = ((t324 == c325)) ? 1 : 0;
    if (c326) {
      char* t327 = __d321;
      char* t328 = __s322;
      std__char_traits_char___assign(t327, t328);
    } else {
      char* t329 = __d321;
      char* t330 = __s322;
      unsigned long t331 = __n323;
      char* r332 = std__char_traits_char___move(t329, t330, t331);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_eraseEmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v333, unsigned long v334, unsigned long v335) {
bb336:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this337;
  unsigned long __pos338;
  unsigned long __n339;
  unsigned long __how_much340;
  this337 = v333;
  __pos338 = v334;
  __n339 = v335;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t341 = this337;
  unsigned long r342 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t341);
  unsigned long t343 = __pos338;
  unsigned long b344 = r342 - t343;
  unsigned long t345 = __n339;
  unsigned long b346 = b344 - t345;
  __how_much340 = b346;
    unsigned long t347 = __how_much340;
    _Bool cast348 = (_Bool)t347;
    _Bool ternary349;
    if (cast348) {
      unsigned long t350 = __n339;
      _Bool cast351 = (_Bool)t350;
      ternary349 = (_Bool)cast351;
    } else {
      _Bool c352 = 0;
      ternary349 = (_Bool)c352;
    }
    if (ternary349) {
      char* r353 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t341);
      unsigned long t354 = __pos338;
      char* ptr355 = &(r353)[t354];
      char* r356 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t341);
      unsigned long t357 = __pos338;
      char* ptr358 = &(r356)[t357];
      unsigned long t359 = __n339;
      char* ptr360 = &(ptr358)[t359];
      unsigned long t361 = __how_much340;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr355, ptr360, t361);
    }
  unsigned long r362 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t341);
  unsigned long t363 = __n339;
  unsigned long b364 = r362 - t363;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t341, b364);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v365, unsigned long v366, unsigned long v367) {
bb368:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this369;
  unsigned long __pos370;
  unsigned long __off371;
  unsigned long __retval372;
  _Bool __testoff373;
  this369 = v365;
  __pos370 = v366;
  __off371 = v367;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t374 = this369;
  unsigned long t375 = __off371;
  unsigned long r376 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t374);
  unsigned long t377 = __pos370;
  unsigned long b378 = r376 - t377;
  _Bool c379 = ((t375 < b378)) ? 1 : 0;
  __testoff373 = c379;
  _Bool t380 = __testoff373;
  unsigned long ternary381;
  if (t380) {
    unsigned long t382 = __off371;
    ternary381 = (unsigned long)t382;
  } else {
    unsigned long r383 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t374);
    unsigned long t384 = __pos370;
    unsigned long b385 = r383 - t384;
    ternary381 = (unsigned long)b385;
  }
  __retval372 = ternary381;
  unsigned long t386 = __retval372;
  return t386;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5eraseEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v387, unsigned long v388, unsigned long v389) {
bb390:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this391;
  unsigned long __pos392;
  unsigned long __n393;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval394;
  this391 = v387;
  __pos392 = v388;
  __n393 = v389;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t395 = this391;
  unsigned long t396 = __pos392;
  char* cast397 = (char*)&(_str_10);
  unsigned long r398 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t395, t396, cast397);
    unsigned long t399 = __n393;
    unsigned long t400 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    _Bool c401 = ((t399 == t400)) ? 1 : 0;
    if (c401) {
      unsigned long t402 = __pos392;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t395, t402);
    } else {
        unsigned long t403 = __n393;
        unsigned long c404 = 0;
        _Bool c405 = ((t403 != c404)) ? 1 : 0;
        if (c405) {
          unsigned long t406 = __pos392;
          unsigned long t407 = __pos392;
          unsigned long t408 = __n393;
          unsigned long r409 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t395, t407, t408);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_erase(t395, t406, r409);
        }
    }
  __retval394 = t395;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t410 = __retval394;
  return t410;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v411) {
bb412:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this413;
  char* __retval414;
  this413 = v411;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t415 = this413;
  char* r416 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t415);
  __retval414 = r416;
  char* t417 = __retval414;
  return t417;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v418, unsigned long v419, char* v420) {
bb421:
  char* __s422;
  unsigned long __n423;
  char* __a424;
  char* __retval425;
  __s422 = v418;
  __n423 = v419;
  __a424 = v420;
    unsigned long __i426;
    unsigned long c427 = 0;
    __i426 = c427;
    while (1) {
      unsigned long t429 = __i426;
      unsigned long t430 = __n423;
      _Bool c431 = ((t429 < t430)) ? 1 : 0;
      if (!c431) break;
        unsigned long t432 = __i426;
        char* t433 = __s422;
        char* ptr434 = &(t433)[t432];
        char* t435 = __a424;
        _Bool r436 = __gnu_cxx__char_traits_char___eq(ptr434, t435);
        if (r436) {
          char* t437 = __s422;
          unsigned long t438 = __i426;
          char* ptr439 = &(t437)[t438];
          __retval425 = ptr439;
          char* t440 = __retval425;
          char* ret_val441 = t440;
          return ret_val441;
        }
    for_step428: ;
      unsigned long t442 = __i426;
      unsigned long u443 = t442 + 1;
      __i426 = u443;
    }
  char* c444 = ((void*)0);
  __retval425 = c444;
  char* t445 = __retval425;
  return t445;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v446, unsigned long v447, char* v448) {
bb449:
  char* __s450;
  unsigned long __n451;
  char* __a452;
  char* __retval453;
  __s450 = v446;
  __n451 = v447;
  __a452 = v448;
    unsigned long t454 = __n451;
    unsigned long c455 = 0;
    _Bool c456 = ((t454 == c455)) ? 1 : 0;
    if (c456) {
      char* c457 = ((void*)0);
      __retval453 = c457;
      char* t458 = __retval453;
      return t458;
    }
    _Bool r459 = std____is_constant_evaluated();
    if (r459) {
      char* t460 = __s450;
      unsigned long t461 = __n451;
      char* t462 = __a452;
      char* r463 = __gnu_cxx__char_traits_char___find(t460, t461, t462);
      __retval453 = r463;
      char* t464 = __retval453;
      return t464;
    }
  char* t465 = __s450;
  void* cast466 = (void*)t465;
  char* t467 = __a452;
  char t468 = *t467;
  int cast469 = (int)t468;
  unsigned long t470 = __n451;
  void* memchr471 = (void*)__builtin_memchr(cast466, cast469, t470);
  char* cast472 = (char*)memchr471;
  __retval453 = cast472;
  char* t473 = __retval453;
  return t473;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v474, char* v475) {
bb476:
  char* __c1477;
  char* __c2478;
  _Bool __retval479;
  __c1477 = v474;
  __c2478 = v475;
  char* t480 = __c1477;
  char t481 = *t480;
  unsigned char cast482 = (unsigned char)t481;
  int cast483 = (int)cast482;
  char* t484 = __c2478;
  char t485 = *t484;
  unsigned char cast486 = (unsigned char)t485;
  int cast487 = (int)cast486;
  _Bool c488 = ((cast483 < cast487)) ? 1 : 0;
  __retval479 = c488;
  _Bool t489 = __retval479;
  return t489;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v490, char* v491, unsigned long v492) {
bb493:
  char* __s1494;
  char* __s2495;
  unsigned long __n496;
  int __retval497;
  __s1494 = v490;
  __s2495 = v491;
  __n496 = v492;
    unsigned long t498 = __n496;
    unsigned long c499 = 0;
    _Bool c500 = ((t498 == c499)) ? 1 : 0;
    if (c500) {
      int c501 = 0;
      __retval497 = c501;
      int t502 = __retval497;
      return t502;
    }
    _Bool r503 = std____is_constant_evaluated();
    if (r503) {
        unsigned long __i504;
        unsigned long c505 = 0;
        __i504 = c505;
        while (1) {
          unsigned long t507 = __i504;
          unsigned long t508 = __n496;
          _Bool c509 = ((t507 < t508)) ? 1 : 0;
          if (!c509) break;
            unsigned long t510 = __i504;
            char* t511 = __s1494;
            char* ptr512 = &(t511)[t510];
            unsigned long t513 = __i504;
            char* t514 = __s2495;
            char* ptr515 = &(t514)[t513];
            _Bool r516 = std__char_traits_char___lt(ptr512, ptr515);
            if (r516) {
              int c517 = -1;
              __retval497 = c517;
              int t518 = __retval497;
              int ret_val519 = t518;
              return ret_val519;
            } else {
                unsigned long t520 = __i504;
                char* t521 = __s2495;
                char* ptr522 = &(t521)[t520];
                unsigned long t523 = __i504;
                char* t524 = __s1494;
                char* ptr525 = &(t524)[t523];
                _Bool r526 = std__char_traits_char___lt(ptr522, ptr525);
                if (r526) {
                  int c527 = 1;
                  __retval497 = c527;
                  int t528 = __retval497;
                  int ret_val529 = t528;
                  return ret_val529;
                }
            }
        for_step506: ;
          unsigned long t530 = __i504;
          unsigned long u531 = t530 + 1;
          __i504 = u531;
        }
      int c532 = 0;
      __retval497 = c532;
      int t533 = __retval497;
      return t533;
    }
  char* t534 = __s1494;
  void* cast535 = (void*)t534;
  char* t536 = __s2495;
  void* cast537 = (void*)t536;
  unsigned long t538 = __n496;
  int r539 = memcmp(cast535, cast537, t538);
  __retval497 = r539;
  int t540 = __retval497;
  return t540;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v541, char* v542, unsigned long v543, unsigned long v544) {
bb545:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this546;
  char* __s547;
  unsigned long __pos548;
  unsigned long __n549;
  unsigned long __retval550;
  unsigned long __size551;
  char __elem0552;
  char* __data553;
  char* __first554;
  char* __last555;
  unsigned long __len556;
  this546 = v541;
  __s547 = v542;
  __pos548 = v543;
  __n549 = v544;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t557 = this546;
  unsigned long r558 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t557);
  __size551 = r558;
    unsigned long t559 = __n549;
    unsigned long c560 = 0;
    _Bool c561 = ((t559 == c560)) ? 1 : 0;
    if (c561) {
      unsigned long t562 = __pos548;
      unsigned long t563 = __size551;
      _Bool c564 = ((t562 <= t563)) ? 1 : 0;
      unsigned long ternary565;
      if (c564) {
        unsigned long t566 = __pos548;
        ternary565 = (unsigned long)t566;
      } else {
        unsigned long t567 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        ternary565 = (unsigned long)t567;
      }
      __retval550 = ternary565;
      unsigned long t568 = __retval550;
      return t568;
    }
    unsigned long t569 = __pos548;
    unsigned long t570 = __size551;
    _Bool c571 = ((t569 >= t570)) ? 1 : 0;
    if (c571) {
      unsigned long t572 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
      __retval550 = t572;
      unsigned long t573 = __retval550;
      return t573;
    }
  long c574 = 0;
  char* t575 = __s547;
  char* ptr576 = &(t575)[c574];
  char t577 = *ptr576;
  __elem0552 = t577;
  char* r578 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t557);
  __data553 = r578;
  char* t579 = __data553;
  unsigned long t580 = __pos548;
  char* ptr581 = &(t579)[t580];
  __first554 = ptr581;
  char* t582 = __data553;
  unsigned long t583 = __size551;
  char* ptr584 = &(t582)[t583];
  __last555 = ptr584;
  unsigned long t585 = __size551;
  unsigned long t586 = __pos548;
  unsigned long b587 = t585 - t586;
  __len556 = b587;
    while (1) {
      unsigned long t588 = __len556;
      unsigned long t589 = __n549;
      _Bool c590 = ((t588 >= t589)) ? 1 : 0;
      if (!c590) break;
        char* t591 = __first554;
        unsigned long t592 = __len556;
        unsigned long t593 = __n549;
        unsigned long b594 = t592 - t593;
        unsigned long c595 = 1;
        unsigned long b596 = b594 + c595;
        char* r597 = std__char_traits_char___find(t591, b596, &__elem0552);
        __first554 = r597;
          char* t598 = __first554;
          _Bool cast599 = (_Bool)t598;
          _Bool u600 = !cast599;
          if (u600) {
            unsigned long t601 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            __retval550 = t601;
            unsigned long t602 = __retval550;
            unsigned long ret_val603 = t602;
            return ret_val603;
          }
          char* t604 = __first554;
          char* t605 = __s547;
          unsigned long t606 = __n549;
          int r607 = std__char_traits_char___compare(t604, t605, t606);
          int c608 = 0;
          _Bool c609 = ((r607 == c608)) ? 1 : 0;
          if (c609) {
            char* t610 = __first554;
            char* t611 = __data553;
            long diff612 = t610 - t611;
            unsigned long cast613 = (unsigned long)diff612;
            __retval550 = cast613;
            unsigned long t614 = __retval550;
            unsigned long ret_val615 = t614;
            return ret_val615;
          }
        char* t616 = __last555;
        char* t617 = __first554;
        int c618 = 1;
        char* ptr619 = &(t617)[c618];
        __first554 = ptr619;
        long diff620 = t616 - ptr619;
        unsigned long cast621 = (unsigned long)diff620;
        __len556 = cast621;
    }
  unsigned long t622 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval550 = t622;
  unsigned long t623 = __retval550;
  return t623;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v624, char* v625, unsigned long v626) {
bb627:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this628;
  char* __s629;
  unsigned long __pos630;
  unsigned long __retval631;
  this628 = v624;
  __s629 = v625;
  __pos630 = v626;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t632 = this628;
  char* t633 = __s629;
  unsigned long t634 = __pos630;
  char* t635 = __s629;
  unsigned long r636 = std__char_traits_char___length(t635);
  unsigned long r637 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__unsigned_long__const(t632, t633, t634, r636);
  __retval631 = r637;
  unsigned long t638 = __retval631;
  return t638;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_check_lengthEmmPKc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v639, unsigned long v640, unsigned long v641, char* v642) {
bb643:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this644;
  unsigned long __n1645;
  unsigned long __n2646;
  char* __s647;
  this644 = v639;
  __n1645 = v640;
  __n2646 = v641;
  __s647 = v642;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t648 = this644;
    unsigned long r649 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t648);
    unsigned long r650 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t648);
    unsigned long t651 = __n1645;
    unsigned long b652 = r650 - t651;
    unsigned long b653 = r649 - b652;
    unsigned long t654 = __n2646;
    _Bool c655 = ((b653 < t654)) ? 1 : 0;
    if (c655) {
      char* t656 = __s647;
      std____throw_length_error(t656);
    }
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v657) {
bb658:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this659;
  unsigned long __retval660;
  unsigned long __sz661;
  this659 = v657;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t662 = this659;
  _Bool r663 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t662);
  unsigned long ternary664;
  if (r663) {
    unsigned long c665 = 15;
    ternary664 = (unsigned long)c665;
  } else {
    unsigned long t666 = t662->field2._M_allocated_capacity;
    ternary664 = (unsigned long)t666;
  }
  __sz661 = ternary664;
    unsigned long t667 = __sz661;
    unsigned long c668 = 15;
    _Bool c669 = ((t667 < c668)) ? 1 : 0;
    _Bool ternary670;
    if (c669) {
      _Bool c671 = 1;
      ternary670 = (_Bool)c671;
    } else {
      unsigned long t672 = __sz661;
      unsigned long r673 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t662);
      _Bool c674 = ((t672 > r673)) ? 1 : 0;
      ternary670 = (_Bool)c674;
    }
    if (ternary670) {
      __builtin_unreachable();
    }
  unsigned long t675 = __sz661;
  __retval660 = t675;
  unsigned long t676 = __retval660;
  return t676;
}

// function: _ZNKSt4lessIPKcEclES1_S1_
_Bool std__less_char_const____operator___char_const___char_const___const(struct std__less_const_char___* v677, char* v678, char* v679) {
bb680:
  struct std__less_const_char___* this681;
  char* __x682;
  char* __y683;
  _Bool __retval684;
  this681 = v677;
  __x682 = v678;
  __y683 = v679;
  struct std__less_const_char___* t685 = this681;
    _Bool r686 = std____is_constant_evaluated();
    if (r686) {
      char* t687 = __x682;
      char* t688 = __y683;
      _Bool c689 = ((t687 < t688)) ? 1 : 0;
      __retval684 = c689;
      _Bool t690 = __retval684;
      return t690;
    }
  char* t691 = __x682;
  unsigned long cast692 = (unsigned long)t691;
  char* t693 = __y683;
  unsigned long cast694 = (unsigned long)t693;
  _Bool c695 = ((cast692 < cast694)) ? 1 : 0;
  __retval684 = c695;
  _Bool t696 = __retval684;
  return t696;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_disjunctEPKc
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v697, char* v698) {
bb699:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this700;
  char* __s701;
  _Bool __retval702;
  struct std__less_const_char___ ref_tmp0703;
  this700 = v697;
  __s701 = v698;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t704 = this700;
  char* t705 = __s701;
  char* r706 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t704);
  _Bool r707 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp0703, t705, r706);
  _Bool ternary708;
  if (r707) {
    _Bool c709 = 1;
    ternary708 = (_Bool)c709;
  } else {
    struct std__less_const_char___ ref_tmp1710;
    char* r711 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t704);
    unsigned long r712 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t704);
    char* ptr713 = &(r711)[r712];
    char* t714 = __s701;
    _Bool r715 = std__less_char_const____operator___char_const___char_const___const(&ref_tmp1710, ptr713, t714);
    ternary708 = (_Bool)r715;
  }
  __retval702 = ternary708;
  _Bool t716 = __retval702;
  return t716;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE15_M_replace_coldEPcmPKcmm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v717, char* v718, unsigned long v719, char* v720, unsigned long v721, unsigned long v722) {
bb723:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this724;
  char* __p725;
  unsigned long __len1726;
  char* __s727;
  unsigned long __len2728;
  unsigned long __how_much729;
  this724 = v717;
  __p725 = v718;
  __len1726 = v719;
  __s727 = v720;
  __len2728 = v721;
  __how_much729 = v722;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this724;
    unsigned long t731 = __len2728;
    _Bool cast732 = (_Bool)t731;
    _Bool ternary733;
    if (cast732) {
      unsigned long t734 = __len2728;
      unsigned long t735 = __len1726;
      _Bool c736 = ((t734 <= t735)) ? 1 : 0;
      ternary733 = (_Bool)c736;
    } else {
      _Bool c737 = 0;
      ternary733 = (_Bool)c737;
    }
    if (ternary733) {
      char* t738 = __p725;
      char* t739 = __s727;
      unsigned long t740 = __len2728;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t738, t739, t740);
    }
    unsigned long t741 = __how_much729;
    _Bool cast742 = (_Bool)t741;
    _Bool ternary743;
    if (cast742) {
      unsigned long t744 = __len1726;
      unsigned long t745 = __len2728;
      _Bool c746 = ((t744 != t745)) ? 1 : 0;
      ternary743 = (_Bool)c746;
    } else {
      _Bool c747 = 0;
      ternary743 = (_Bool)c747;
    }
    if (ternary743) {
      char* t748 = __p725;
      unsigned long t749 = __len2728;
      char* ptr750 = &(t748)[t749];
      char* t751 = __p725;
      unsigned long t752 = __len1726;
      char* ptr753 = &(t751)[t752];
      unsigned long t754 = __how_much729;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr750, ptr753, t754);
    }
    unsigned long t755 = __len2728;
    unsigned long t756 = __len1726;
    _Bool c757 = ((t755 > t756)) ? 1 : 0;
    if (c757) {
        char* t758 = __s727;
        unsigned long t759 = __len2728;
        char* ptr760 = &(t758)[t759];
        char* t761 = __p725;
        unsigned long t762 = __len1726;
        char* ptr763 = &(t761)[t762];
        _Bool c764 = ((ptr760 <= ptr763)) ? 1 : 0;
        if (c764) {
          char* t765 = __p725;
          char* t766 = __s727;
          unsigned long t767 = __len2728;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t765, t766, t767);
        } else {
            char* t768 = __s727;
            char* t769 = __p725;
            unsigned long t770 = __len1726;
            char* ptr771 = &(t769)[t770];
            _Bool c772 = ((t768 >= ptr771)) ? 1 : 0;
            if (c772) {
              unsigned long __poff773;
              char* t774 = __s727;
              char* t775 = __p725;
              long diff776 = t774 - t775;
              unsigned long cast777 = (unsigned long)diff776;
              unsigned long t778 = __len2728;
              unsigned long t779 = __len1726;
              unsigned long b780 = t778 - t779;
              unsigned long b781 = cast777 + b780;
              __poff773 = b781;
              char* t782 = __p725;
              char* t783 = __p725;
              unsigned long t784 = __poff773;
              char* ptr785 = &(t783)[t784];
              unsigned long t786 = __len2728;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t782, ptr785, t786);
            } else {
              unsigned long __nleft787;
              char* t788 = __p725;
              unsigned long t789 = __len1726;
              char* ptr790 = &(t788)[t789];
              char* t791 = __s727;
              long diff792 = ptr790 - t791;
              unsigned long cast793 = (unsigned long)diff792;
              __nleft787 = cast793;
              char* t794 = __p725;
              char* t795 = __s727;
              unsigned long t796 = __nleft787;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(t794, t795, t796);
              char* t797 = __p725;
              unsigned long t798 = __nleft787;
              char* ptr799 = &(t797)[t798];
              char* t800 = __p725;
              unsigned long t801 = __len2728;
              char* ptr802 = &(t800)[t801];
              unsigned long t803 = __len2728;
              unsigned long t804 = __nleft787;
              unsigned long b805 = t803 - t804;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr799, ptr802, b805);
            }
        }
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v806, unsigned long v807, unsigned long v808, char* v809, unsigned long v810) {
bb811:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this812;
  unsigned long __pos813;
  unsigned long __len1814;
  char* __s815;
  unsigned long __len2816;
  unsigned long __how_much817;
  unsigned long __new_capacity818;
  char* __r819;
  this812 = v806;
  __pos813 = v807;
  __len1814 = v808;
  __s815 = v809;
  __len2816 = v810;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t820 = this812;
  unsigned long r821 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t820);
  unsigned long t822 = __pos813;
  unsigned long b823 = r821 - t822;
  unsigned long t824 = __len1814;
  unsigned long b825 = b823 - t824;
  __how_much817 = b825;
  unsigned long r826 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t820);
  unsigned long t827 = __len2816;
  unsigned long b828 = r826 + t827;
  unsigned long t829 = __len1814;
  unsigned long b830 = b828 - t829;
  __new_capacity818 = b830;
  unsigned long r831 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t820);
  char* r832 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t820, &__new_capacity818, r831);
  __r819 = r832;
    unsigned long t833 = __pos813;
    _Bool cast834 = (_Bool)t833;
    if (cast834) {
      char* t835 = __r819;
      char* r836 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t820);
      unsigned long t837 = __pos813;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t835, r836, t837);
    }
    char* t838 = __s815;
    _Bool cast839 = (_Bool)t838;
    _Bool ternary840;
    if (cast839) {
      unsigned long t841 = __len2816;
      _Bool cast842 = (_Bool)t841;
      ternary840 = (_Bool)cast842;
    } else {
      _Bool c843 = 0;
      ternary840 = (_Bool)c843;
    }
    if (ternary840) {
      char* t844 = __r819;
      unsigned long t845 = __pos813;
      char* ptr846 = &(t844)[t845];
      char* t847 = __s815;
      unsigned long t848 = __len2816;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr846, t847, t848);
    }
    unsigned long t849 = __how_much817;
    _Bool cast850 = (_Bool)t849;
    if (cast850) {
      char* t851 = __r819;
      unsigned long t852 = __pos813;
      char* ptr853 = &(t851)[t852];
      unsigned long t854 = __len2816;
      char* ptr855 = &(ptr853)[t854];
      char* r856 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t820);
      unsigned long t857 = __pos813;
      char* ptr858 = &(r856)[t857];
      unsigned long t859 = __len1814;
      char* ptr860 = &(ptr858)[t859];
      unsigned long t861 = __how_much817;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr855, ptr860, t861);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t820);
  char* t862 = __r819;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t820, t862);
  unsigned long t863 = __new_capacity818;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t820, t863);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v864, unsigned long v865, unsigned long v866, char* v867, unsigned long v868) {
bb869:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this870;
  unsigned long __pos871;
  unsigned long __len1872;
  char* __s873;
  unsigned long __len2874;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval875;
  unsigned long __old_size876;
  unsigned long __new_size877;
  this870 = v864;
  __pos871 = v865;
  __len1872 = v866;
  __s873 = v867;
  __len2874 = v868;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t878 = this870;
  unsigned long t879 = __len1872;
  unsigned long t880 = __len2874;
  char* cast881 = (char*)&(_str_13);
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_length_unsigned_long__unsigned_long__char_const___const(t878, t879, t880, cast881);
  unsigned long r882 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t878);
  __old_size876 = r882;
  unsigned long t883 = __old_size876;
  unsigned long t884 = __len2874;
  unsigned long b885 = t883 + t884;
  unsigned long t886 = __len1872;
  unsigned long b887 = b885 - t886;
  __new_size877 = b887;
    unsigned long t888 = __new_size877;
    unsigned long r889 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t878);
    _Bool c890 = ((t888 <= r889)) ? 1 : 0;
    if (c890) {
      char* __p891;
      unsigned long __how_much892;
      char* r893 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t878);
      unsigned long t894 = __pos871;
      char* ptr895 = &(r893)[t894];
      __p891 = ptr895;
      unsigned long t896 = __old_size876;
      unsigned long t897 = __pos871;
      unsigned long b898 = t896 - t897;
      unsigned long t899 = __len1872;
      unsigned long b900 = b898 - t899;
      __how_much892 = b900;
        _Bool r901 = std__is_constant_evaluated();
        if (r901) {
          char* __newp902;
          struct std__allocator_char_* r903 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t878);
          unsigned long t904 = __new_size877;
          char* r905 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r903, t904);
          __newp902 = r905;
          char* t906 = __newp902;
          char* r907 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t878);
          unsigned long t908 = __pos871;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t906, r907, t908);
          char* t909 = __newp902;
          unsigned long t910 = __pos871;
          char* ptr911 = &(t909)[t910];
          char* t912 = __s873;
          unsigned long t913 = __len2874;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr911, t912, t913);
          char* t914 = __newp902;
          unsigned long t915 = __pos871;
          char* ptr916 = &(t914)[t915];
          unsigned long t917 = __len2874;
          char* ptr918 = &(ptr916)[t917];
          char* t919 = __p891;
          unsigned long t920 = __len1872;
          char* ptr921 = &(t919)[t920];
          unsigned long t922 = __how_much892;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(ptr918, ptr921, t922);
          char* r923 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t878);
          char* t924 = __newp902;
          unsigned long t925 = __new_size877;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r923, t924, t925);
          struct std__allocator_char_* r926 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t878);
          char* t927 = __newp902;
          unsigned long t928 = __new_size877;
          std__allocator_char___deallocate(r926, t927, t928);
        } else {
            char* t929 = __s873;
            _Bool r930 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_disjunct_char_const___const(t878, t929);
            if (r930) {
                unsigned long t931 = __how_much892;
                _Bool cast932 = (_Bool)t931;
                _Bool ternary933;
                if (cast932) {
                  unsigned long t934 = __len1872;
                  unsigned long t935 = __len2874;
                  _Bool c936 = ((t934 != t935)) ? 1 : 0;
                  ternary933 = (_Bool)c936;
                } else {
                  _Bool c937 = 0;
                  ternary933 = (_Bool)c937;
                }
                if (ternary933) {
                  char* t938 = __p891;
                  unsigned long t939 = __len2874;
                  char* ptr940 = &(t938)[t939];
                  char* t941 = __p891;
                  unsigned long t942 = __len1872;
                  char* ptr943 = &(t941)[t942];
                  unsigned long t944 = __how_much892;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_move(ptr940, ptr943, t944);
                }
                unsigned long t945 = __len2874;
                _Bool cast946 = (_Bool)t945;
                if (cast946) {
                  char* t947 = __p891;
                  char* t948 = __s873;
                  unsigned long t949 = __len2874;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t947, t948, t949);
                }
            } else {
              char* t950 = __p891;
              unsigned long t951 = __len1872;
              char* t952 = __s873;
              unsigned long t953 = __len2874;
              unsigned long t954 = __how_much892;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace_cold(t878, t950, t951, t952, t953, t954);
            }
        }
    } else {
      unsigned long t955 = __pos871;
      unsigned long t956 = __len1872;
      char* t957 = __s873;
      unsigned long t958 = __len2874;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_mutate(t878, t955, t956, t957, t958);
    }
  unsigned long t959 = __new_size877;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t878, t959);
  __retval875 = t878;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t960 = __retval875;
  return t960;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKcm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v961, unsigned long v962, unsigned long v963, char* v964, unsigned long v965) {
bb966:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this967;
  unsigned long __pos968;
  unsigned long __n1969;
  char* __s970;
  unsigned long __n2971;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval972;
  this967 = v961;
  __pos968 = v962;
  __n1969 = v963;
  __s970 = v964;
  __n2971 = v965;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t973 = this967;
  unsigned long t974 = __pos968;
  char* cast975 = (char*)&(_str_12);
  unsigned long r976 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t973, t974, cast975);
  unsigned long t977 = __pos968;
  unsigned long t978 = __n1969;
  unsigned long r979 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t973, t977, t978);
  char* t980 = __s970;
  unsigned long t981 = __n2971;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r982 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_replace(t973, r976, r979, t980, t981);
  __retval972 = r982;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t983 = __retval972;
  return t983;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmPKc
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v984, unsigned long v985, unsigned long v986, char* v987) {
bb988:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this989;
  unsigned long __pos990;
  unsigned long __n1991;
  char* __s992;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval993;
  this989 = v984;
  __pos990 = v985;
  __n1991 = v986;
  __s992 = v987;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t994 = this989;
  unsigned long t995 = __pos990;
  unsigned long t996 = __n1991;
  char* t997 = __s992;
  char* t998 = __s992;
  unsigned long r999 = std__char_traits_char___length(t998);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1000 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t994, t995, t996, t997, r999);
  __retval993 = r1000;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1001 = __retval993;
  return t1001;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7replaceEmmRKS4_mm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1002, unsigned long v1003, unsigned long v1004, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1005, unsigned long v1006, unsigned long v1007) {
bb1008:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1009;
  unsigned long __pos11010;
  unsigned long __n11011;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str1012;
  unsigned long __pos21013;
  unsigned long __n21014;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval1015;
  this1009 = v1002;
  __pos11010 = v1003;
  __n11011 = v1004;
  __str1012 = v1005;
  __pos21013 = v1006;
  __n21014 = v1007;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1016 = this1009;
  unsigned long t1017 = __pos11010;
  unsigned long t1018 = __n11011;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1019 = __str1012;
  char* r1020 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1019);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1021 = __str1012;
  unsigned long t1022 = __pos21013;
  char* cast1023 = (char*)&(_str_12);
  unsigned long r1024 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t1021, t1022, cast1023);
  char* ptr1025 = &(r1020)[r1024];
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1026 = __str1012;
  unsigned long t1027 = __pos21013;
  unsigned long t1028 = __n21014;
  unsigned long r1029 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t1026, t1027, t1028);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1030 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_2(t1016, t1017, t1018, ptr1025, r1029);
  __retval1015 = r1030;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1031 = __retval1015;
  return t1031;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1032) {
bb1033:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1034;
  this1034 = v1032;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1035 = this1034;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1035);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t1035->_M_dataplus);
  }
  return;
}

// function: main
int main() {
bb1036:
  int __retval1037;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ string11038;
  struct std__allocator_char_ ref_tmp01039;
  int position1040;
  int c1041 = 0;
  __retval1037 = c1041;
  char* cast1042 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp01039);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&string11038, cast1042, &ref_tmp01039);
  {
    std__allocator_char____allocator(&ref_tmp01039);
  }
    char* cast1043 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r1044 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1043);
    struct std__basic_ostream_char__std__char_traits_char__* r1045 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1044, &string11038);
    struct std__basic_ostream_char__std__char_traits_char__* r1046 = std__ostream__operator___std__ostream_____(r1045, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    struct std__basic_ostream_char__std__char_traits_char__* r1047 = std__ostream__operator___std__ostream_____(r1046, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long c1048 = 62;
    unsigned long t1049 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1050 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____erase(&string11038, c1048, t1049);
    char* cast1051 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1052 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1051);
    struct std__basic_ostream_char__std__char_traits_char__* r1053 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r1052, &string11038);
    char* cast1054 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1055 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1053, cast1054);
    char* cast1056 = (char*)&(_str_4);
    unsigned long c1057 = 0;
    unsigned long r1058 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&string11038, cast1056, c1057);
    int cast1059 = (int)r1058;
    position1040 = cast1059;
      while (1) {
        int t1060 = position1040;
        unsigned long cast1061 = (unsigned long)t1060;
        unsigned long t1062 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c1063 = ((cast1061 != t1062)) ? 1 : 0;
        if (!c1063) break;
          int t1064 = position1040;
          unsigned long cast1065 = (unsigned long)t1064;
          unsigned long c1066 = 1;
          char* cast1067 = (char*)&(_str_5);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1068 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace(&string11038, cast1065, c1066, cast1067);
          char* cast1069 = (char*)&(_str_4);
          int t1070 = position1040;
          int c1071 = 1;
          int b1072 = t1070 + c1071;
          unsigned long cast1073 = (unsigned long)b1072;
          unsigned long r1074 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&string11038, cast1069, cast1073);
          int cast1075 = (int)r1074;
          position1040 = cast1075;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1076 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &string11038);
    char* cast1077 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1078 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1076, cast1077);
    char* cast1079 = (char*)&(_str_5);
    unsigned long c1080 = 0;
    unsigned long r1081 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&string11038, cast1079, c1080);
    int cast1082 = (int)r1081;
    position1040 = cast1082;
      while (1) {
        int t1083 = position1040;
        unsigned long cast1084 = (unsigned long)t1083;
        unsigned long t1085 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        _Bool c1086 = ((cast1084 != t1085)) ? 1 : 0;
        if (!c1086) break;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp11087;
          struct std__allocator_char_ ref_tmp21088;
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup1089;
          int t1090 = position1040;
          unsigned long cast1091 = (unsigned long)t1090;
          unsigned long c1092 = 2;
          char* cast1093 = (char*)&(_str_7);
          std__allocator_char___allocator_2(&ref_tmp21088);
            std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp11087, cast1093, &ref_tmp21088);
              unsigned long c1094 = 5;
              unsigned long c1095 = 2;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r1096 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____replace_3(&string11038, cast1091, c1092, &ref_tmp11087, c1094, c1095);
              tmp_exprcleanup1089 = r1096;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp11087);
            }
          {
            std__allocator_char____allocator(&ref_tmp21088);
          }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1097 = tmp_exprcleanup1089;
          char* cast1098 = (char*)&(_str_5);
          int t1099 = position1040;
          int c1100 = 1;
          int b1101 = t1099 + c1100;
          unsigned long cast1102 = (unsigned long)b1101;
          unsigned long r1103 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_char_const___unsigned_long__const(&string11038, cast1098, cast1102);
          int cast1104 = (int)r1103;
          position1040 = cast1104;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1105 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(&_ZSt4cout, &string11038);
    struct std__basic_ostream_char__std__char_traits_char__* r1106 = std__ostream__operator___std__ostream_____(r1105, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1107 = 0;
    __retval1037 = c1107;
    int t1108 = __retval1037;
    int ret_val1109 = t1108;
    {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&string11038);
    }
    return ret_val1109;
  int t1110 = __retval1037;
  return t1110;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v1111) {
bb1112:
  struct std____new_allocator_char_* this1113;
  this1113 = v1111;
  struct std____new_allocator_char_* t1114 = this1113;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v1115) {
bb1116:
  char* __r1117;
  char* __retval1118;
  __r1117 = v1115;
  char* t1119 = __r1117;
  __retval1118 = t1119;
  char* t1120 = __retval1118;
  return t1120;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1121) {
bb1122:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1123;
  char* __retval1124;
  this1123 = v1121;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1125 = this1123;
  char* cast1126 = (char*)&(t1125->field2._M_local_buf);
  char* r1127 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast1126);
  __retval1124 = r1127;
  char* t1128 = __retval1124;
  return t1128;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1129, char* v1130, struct std__allocator_char_* v1131) {
bb1132:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1133;
  char* __dat1134;
  struct std__allocator_char_* __a1135;
  this1133 = v1129;
  __dat1134 = v1130;
  __a1135 = v1131;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1136 = this1133;
  struct std__allocator_char_* base1137 = (struct std__allocator_char_*)((char *)t1136 + 0);
  struct std__allocator_char_* t1138 = __a1135;
  std__allocator_char___allocator(base1137, t1138);
    char* t1139 = __dat1134;
    t1136->_M_p = t1139;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1140:
  _Bool __retval1141;
    _Bool c1142 = 0;
    __retval1141 = c1142;
    _Bool t1143 = __retval1141;
    return t1143;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1144, char* v1145) {
bb1146:
  char* __c11147;
  char* __c21148;
  _Bool __retval1149;
  __c11147 = v1144;
  __c21148 = v1145;
  char* t1150 = __c11147;
  char t1151 = *t1150;
  int cast1152 = (int)t1151;
  char* t1153 = __c21148;
  char t1154 = *t1153;
  int cast1155 = (int)t1154;
  _Bool c1156 = ((cast1152 == cast1155)) ? 1 : 0;
  __retval1149 = c1156;
  _Bool t1157 = __retval1149;
  return t1157;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1158) {
bb1159:
  char* __p1160;
  unsigned long __retval1161;
  unsigned long __i1162;
  __p1160 = v1158;
  unsigned long c1163 = 0;
  __i1162 = c1163;
    char ref_tmp01164;
    while (1) {
      unsigned long t1165 = __i1162;
      char* t1166 = __p1160;
      char* ptr1167 = &(t1166)[t1165];
      char c1168 = 0;
      ref_tmp01164 = c1168;
      _Bool r1169 = __gnu_cxx__char_traits_char___eq(ptr1167, &ref_tmp01164);
      _Bool u1170 = !r1169;
      if (!u1170) break;
      unsigned long t1171 = __i1162;
      unsigned long u1172 = t1171 + 1;
      __i1162 = u1172;
    }
  unsigned long t1173 = __i1162;
  __retval1161 = t1173;
  unsigned long t1174 = __retval1161;
  return t1174;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1175) {
bb1176:
  char* __s1177;
  unsigned long __retval1178;
  __s1177 = v1175;
    _Bool r1179 = std____is_constant_evaluated();
    if (r1179) {
      char* t1180 = __s1177;
      unsigned long r1181 = __gnu_cxx__char_traits_char___length(t1180);
      __retval1178 = r1181;
      unsigned long t1182 = __retval1178;
      return t1182;
    }
  char* t1183 = __s1177;
  unsigned long r1184 = strlen(t1183);
  __retval1178 = r1184;
  unsigned long t1185 = __retval1178;
  return t1185;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v1186, char* v1187, struct std__random_access_iterator_tag v1188) {
bb1189:
  char* __first1190;
  char* __last1191;
  struct std__random_access_iterator_tag unnamed1192;
  long __retval1193;
  __first1190 = v1186;
  __last1191 = v1187;
  unnamed1192 = v1188;
  char* t1194 = __last1191;
  char* t1195 = __first1190;
  long diff1196 = t1194 - t1195;
  __retval1193 = diff1196;
  long t1197 = __retval1193;
  return t1197;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v1198) {
bb1199:
  char** unnamed1200;
  struct std__random_access_iterator_tag __retval1201;
  unnamed1200 = v1198;
  struct std__random_access_iterator_tag t1202 = __retval1201;
  return t1202;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v1203, char* v1204) {
bb1205:
  char* __first1206;
  char* __last1207;
  long __retval1208;
  struct std__random_access_iterator_tag agg_tmp01209;
  __first1206 = v1203;
  __last1207 = v1204;
  char* t1210 = __first1206;
  char* t1211 = __last1207;
  struct std__random_access_iterator_tag r1212 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first1206);
  agg_tmp01209 = r1212;
  struct std__random_access_iterator_tag t1213 = agg_tmp01209;
  long r1214 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t1210, t1211, t1213);
  __retval1208 = r1214;
  long t1215 = __retval1208;
  return t1215;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1216, char* v1217) {
bb1218:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1219;
  char* __p1220;
  this1219 = v1216;
  __p1220 = v1217;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1221 = this1219;
  char* t1222 = __p1220;
  t1221->_M_dataplus._M_p = t1222;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v1223) {
bb1224:
  struct std__allocator_char_* __a1225;
  unsigned long __retval1226;
  __a1225 = v1223;
  unsigned long c1227 = -1;
  unsigned long c1228 = 1;
  unsigned long b1229 = c1227 / c1228;
  __retval1226 = b1229;
  unsigned long t1230 = __retval1226;
  return t1230;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1231) {
bb1232:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1233;
  struct std__allocator_char_* __retval1234;
  this1233 = v1231;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1235 = this1233;
  struct std__allocator_char_* base1236 = (struct std__allocator_char_*)((char *)&(t1235->_M_dataplus) + 0);
  __retval1234 = base1236;
  struct std__allocator_char_* t1237 = __retval1234;
  return t1237;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1238, unsigned long* v1239) {
bb1240:
  unsigned long* __a1241;
  unsigned long* __b1242;
  unsigned long* __retval1243;
  __a1241 = v1238;
  __b1242 = v1239;
    unsigned long* t1244 = __b1242;
    unsigned long t1245 = *t1244;
    unsigned long* t1246 = __a1241;
    unsigned long t1247 = *t1246;
    _Bool c1248 = ((t1245 < t1247)) ? 1 : 0;
    if (c1248) {
      unsigned long* t1249 = __b1242;
      __retval1243 = t1249;
      unsigned long* t1250 = __retval1243;
      return t1250;
    }
  unsigned long* t1251 = __a1241;
  __retval1243 = t1251;
  unsigned long* t1252 = __retval1243;
  return t1252;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1253) {
bb1254:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1255;
  unsigned long __retval1256;
  unsigned long __diffmax1257;
  unsigned long __allocmax1258;
  this1255 = v1253;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1259 = this1255;
  unsigned long c1260 = 9223372036854775807;
  __diffmax1257 = c1260;
  struct std__allocator_char_* r1261 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t1259);
  unsigned long r1262 = std__allocator_traits_std__allocator_char_____max_size(r1261);
  __allocmax1258 = r1262;
  unsigned long* r1263 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1257, &__allocmax1258);
  unsigned long t1264 = *r1263;
  unsigned long c1265 = 1;
  unsigned long b1266 = t1264 - c1265;
  __retval1256 = b1266;
  unsigned long t1267 = __retval1256;
  return t1267;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v1268) {
bb1269:
  struct std____new_allocator_char_* this1270;
  unsigned long __retval1271;
  this1270 = v1268;
  struct std____new_allocator_char_* t1272 = this1270;
  unsigned long c1273 = 9223372036854775807;
  unsigned long c1274 = 1;
  unsigned long b1275 = c1273 / c1274;
  __retval1271 = b1275;
  unsigned long t1276 = __retval1271;
  return t1276;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v1277, unsigned long v1278, void* v1279) {
bb1280:
  struct std____new_allocator_char_* this1281;
  unsigned long __n1282;
  void* unnamed1283;
  char* __retval1284;
  this1281 = v1277;
  __n1282 = v1278;
  unnamed1283 = v1279;
  struct std____new_allocator_char_* t1285 = this1281;
    unsigned long t1286 = __n1282;
    unsigned long r1287 = std____new_allocator_char____M_max_size___const(t1285);
    _Bool c1288 = ((t1286 > r1287)) ? 1 : 0;
    if (c1288) {
        unsigned long t1289 = __n1282;
        unsigned long c1290 = -1;
        unsigned long c1291 = 1;
        unsigned long b1292 = c1290 / c1291;
        _Bool c1293 = ((t1289 > b1292)) ? 1 : 0;
        if (c1293) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1294 = 1;
    unsigned long c1295 = 16;
    _Bool c1296 = ((c1294 > c1295)) ? 1 : 0;
    if (c1296) {
      unsigned long __al1297;
      unsigned long c1298 = 1;
      __al1297 = c1298;
      unsigned long t1299 = __n1282;
      unsigned long c1300 = 1;
      unsigned long b1301 = t1299 * c1300;
      unsigned long t1302 = __al1297;
      void* r1303 = operator_new_2(b1301, t1302);
      char* cast1304 = (char*)r1303;
      __retval1284 = cast1304;
      char* t1305 = __retval1284;
      return t1305;
    }
  unsigned long t1306 = __n1282;
  unsigned long c1307 = 1;
  unsigned long b1308 = t1306 * c1307;
  void* r1309 = operator_new(b1308);
  char* cast1310 = (char*)r1309;
  __retval1284 = cast1310;
  char* t1311 = __retval1284;
  return t1311;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v1312, unsigned long v1313) {
bb1314:
  struct std__allocator_char_* this1315;
  unsigned long __n1316;
  char* __retval1317;
  this1315 = v1312;
  __n1316 = v1313;
  struct std__allocator_char_* t1318 = this1315;
    _Bool r1319 = std____is_constant_evaluated();
    if (r1319) {
        unsigned long t1320 = __n1316;
        unsigned long c1321 = 1;
        unsigned long ovr1322;
        _Bool ovf1323 = __builtin_mul_overflow(t1320, c1321, &ovr1322);
        __n1316 = ovr1322;
        if (ovf1323) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1324 = __n1316;
      void* r1325 = operator_new(t1324);
      char* cast1326 = (char*)r1325;
      __retval1317 = cast1326;
      char* t1327 = __retval1317;
      return t1327;
    }
  struct std____new_allocator_char_* base1328 = (struct std____new_allocator_char_*)((char *)t1318 + 0);
  unsigned long t1329 = __n1316;
  void* c1330 = ((void*)0);
  char* r1331 = std____new_allocator_char___allocate(base1328, t1329, c1330);
  __retval1317 = r1331;
  char* t1332 = __retval1317;
  return t1332;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v1333, unsigned long v1334) {
bb1335:
  struct std__allocator_char_* __a1336;
  unsigned long __n1337;
  char* __retval1338;
  __a1336 = v1333;
  __n1337 = v1334;
  struct std__allocator_char_* t1339 = __a1336;
  unsigned long t1340 = __n1337;
  char* r1341 = std__allocator_char___allocate(t1339, t1340);
  __retval1338 = r1341;
  char* t1342 = __retval1338;
  return t1342;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v1343, unsigned long v1344) {
bb1345:
  struct std__allocator_char_* __a1346;
  unsigned long __n1347;
  char* __retval1348;
  char* __p1349;
  __a1346 = v1343;
  __n1347 = v1344;
  struct std__allocator_char_* t1350 = __a1346;
  unsigned long t1351 = __n1347;
  char* r1352 = std__allocator_traits_std__allocator_char_____allocate(t1350, t1351);
  __p1349 = r1352;
  char* t1353 = __p1349;
  __retval1348 = t1353;
  char* t1354 = __retval1348;
  return t1354;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1355) {
bb1356:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1357;
  struct std__allocator_char_* __retval1358;
  this1357 = v1355;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1359 = this1357;
  struct std__allocator_char_* base1360 = (struct std__allocator_char_*)((char *)&(t1359->_M_dataplus) + 0);
  __retval1358 = base1360;
  struct std__allocator_char_* t1361 = __retval1358;
  return t1361;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1362, unsigned long* v1363, unsigned long v1364) {
bb1365:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1366;
  unsigned long* __capacity1367;
  unsigned long __old_capacity1368;
  char* __retval1369;
  this1366 = v1362;
  __capacity1367 = v1363;
  __old_capacity1368 = v1364;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1370 = this1366;
    unsigned long* t1371 = __capacity1367;
    unsigned long t1372 = *t1371;
    unsigned long r1373 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1370);
    _Bool c1374 = ((t1372 > r1373)) ? 1 : 0;
    if (c1374) {
      char* cast1375 = (char*)&(_str_9);
      std____throw_length_error(cast1375);
    }
    unsigned long* t1376 = __capacity1367;
    unsigned long t1377 = *t1376;
    unsigned long t1378 = __old_capacity1368;
    _Bool c1379 = ((t1377 > t1378)) ? 1 : 0;
    _Bool ternary1380;
    if (c1379) {
      unsigned long* t1381 = __capacity1367;
      unsigned long t1382 = *t1381;
      unsigned long c1383 = 2;
      unsigned long t1384 = __old_capacity1368;
      unsigned long b1385 = c1383 * t1384;
      _Bool c1386 = ((t1382 < b1385)) ? 1 : 0;
      ternary1380 = (_Bool)c1386;
    } else {
      _Bool c1387 = 0;
      ternary1380 = (_Bool)c1387;
    }
    if (ternary1380) {
      unsigned long c1388 = 2;
      unsigned long t1389 = __old_capacity1368;
      unsigned long b1390 = c1388 * t1389;
      unsigned long* t1391 = __capacity1367;
      *t1391 = b1390;
        unsigned long* t1392 = __capacity1367;
        unsigned long t1393 = *t1392;
        unsigned long r1394 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1370);
        _Bool c1395 = ((t1393 > r1394)) ? 1 : 0;
        if (c1395) {
          unsigned long r1396 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t1370);
          unsigned long* t1397 = __capacity1367;
          *t1397 = r1396;
        }
    }
  struct std__allocator_char_* r1398 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1370);
  unsigned long* t1399 = __capacity1367;
  unsigned long t1400 = *t1399;
  unsigned long c1401 = 1;
  unsigned long b1402 = t1400 + c1401;
  char* r1403 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r1398, b1402);
  __retval1369 = r1403;
  char* t1404 = __retval1369;
  return t1404;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1405, unsigned long v1406) {
bb1407:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1408;
  unsigned long __capacity1409;
  this1408 = v1405;
  __capacity1409 = v1406;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1410 = this1408;
  unsigned long t1411 = __capacity1409;
  t1410->field2._M_allocated_capacity = t1411;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1412:
  _Bool __retval1413;
    _Bool c1414 = 0;
    __retval1413 = c1414;
    _Bool t1415 = __retval1413;
    return t1415;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1416) {
bb1417:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1418;
  this1418 = v1416;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1419 = this1418;
    _Bool r1420 = std__is_constant_evaluated();
    if (r1420) {
        unsigned long __i1421;
        unsigned long c1422 = 0;
        __i1421 = c1422;
        while (1) {
          unsigned long t1424 = __i1421;
          unsigned long c1425 = 15;
          _Bool c1426 = ((t1424 <= c1425)) ? 1 : 0;
          if (!c1426) break;
          char c1427 = 0;
          unsigned long t1428 = __i1421;
          t1419->field2._M_local_buf[t1428] = c1427;
        for_step1423: ;
          unsigned long t1429 = __i1421;
          unsigned long u1430 = t1429 + 1;
          __i1421 = u1430;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v1431, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1432) {
bb1433:
  struct _Guard* this1434;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s1435;
  this1434 = v1431;
  __s1435 = v1432;
  struct _Guard* t1436 = this1434;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1437 = __s1435;
  t1436->_M_guarded = t1437;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v1438, char* v1439) {
bb1440:
  char* __location1441;
  char* __args1442;
  char* __retval1443;
  void* __loc1444;
  __location1441 = v1438;
  __args1442 = v1439;
  char* t1445 = __location1441;
  void* cast1446 = (void*)t1445;
  __loc1444 = cast1446;
    void* t1447 = __loc1444;
    char* cast1448 = (char*)t1447;
    char* t1449 = __args1442;
    char t1450 = *t1449;
    *cast1448 = t1450;
    __retval1443 = cast1448;
    char* t1451 = __retval1443;
    return t1451;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v1452, char* v1453) {
bb1454:
  char* __c11455;
  char* __c21456;
  __c11455 = v1452;
  __c21456 = v1453;
    _Bool r1457 = std____is_constant_evaluated();
    if (r1457) {
      char* t1458 = __c11455;
      char* t1459 = __c21456;
      char* r1460 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1458, t1459);
    } else {
      char* t1461 = __c21456;
      char t1462 = *t1461;
      char* t1463 = __c11455;
      *t1463 = t1462;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v1464, char* v1465, unsigned long v1466) {
bb1467:
  char* __s11468;
  char* __s21469;
  unsigned long __n1470;
  char* __retval1471;
  __s11468 = v1464;
  __s21469 = v1465;
  __n1470 = v1466;
    unsigned long t1472 = __n1470;
    unsigned long c1473 = 0;
    _Bool c1474 = ((t1472 == c1473)) ? 1 : 0;
    if (c1474) {
      char* t1475 = __s11468;
      __retval1471 = t1475;
      char* t1476 = __retval1471;
      return t1476;
    }
    _Bool r1477 = std____is_constant_evaluated();
    if (r1477) {
        unsigned long __i1478;
        unsigned long c1479 = 0;
        __i1478 = c1479;
        while (1) {
          unsigned long t1481 = __i1478;
          unsigned long t1482 = __n1470;
          _Bool c1483 = ((t1481 < t1482)) ? 1 : 0;
          if (!c1483) break;
          char* t1484 = __s11468;
          unsigned long t1485 = __i1478;
          char* ptr1486 = &(t1484)[t1485];
          unsigned long t1487 = __i1478;
          char* t1488 = __s21469;
          char* ptr1489 = &(t1488)[t1487];
          char* r1490 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1486, ptr1489);
        for_step1480: ;
          unsigned long t1491 = __i1478;
          unsigned long u1492 = t1491 + 1;
          __i1478 = u1492;
        }
      char* t1493 = __s11468;
      __retval1471 = t1493;
      char* t1494 = __retval1471;
      return t1494;
    }
  char* t1495 = __s11468;
  void* cast1496 = (void*)t1495;
  char* t1497 = __s21469;
  void* cast1498 = (void*)t1497;
  unsigned long t1499 = __n1470;
  unsigned long c1500 = 1;
  unsigned long b1501 = t1499 * c1500;
  void* r1502 = memcpy(cast1496, cast1498, b1501);
  char* t1503 = __s11468;
  __retval1471 = t1503;
  char* t1504 = __retval1471;
  return t1504;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1505, char* v1506, unsigned long v1507) {
bb1508:
  char* __s11509;
  char* __s21510;
  unsigned long __n1511;
  char* __retval1512;
  __s11509 = v1505;
  __s21510 = v1506;
  __n1511 = v1507;
    unsigned long t1513 = __n1511;
    unsigned long c1514 = 0;
    _Bool c1515 = ((t1513 == c1514)) ? 1 : 0;
    if (c1515) {
      char* t1516 = __s11509;
      __retval1512 = t1516;
      char* t1517 = __retval1512;
      return t1517;
    }
    _Bool r1518 = std____is_constant_evaluated();
    if (r1518) {
      char* t1519 = __s11509;
      char* t1520 = __s21510;
      unsigned long t1521 = __n1511;
      char* r1522 = __gnu_cxx__char_traits_char___copy(t1519, t1520, t1521);
      __retval1512 = r1522;
      char* t1523 = __retval1512;
      return t1523;
    }
  char* t1524 = __s11509;
  void* cast1525 = (void*)t1524;
  char* t1526 = __s21510;
  void* cast1527 = (void*)t1526;
  unsigned long t1528 = __n1511;
  void* r1529 = memcpy(cast1525, cast1527, t1528);
  char* cast1530 = (char*)r1529;
  __retval1512 = cast1530;
  char* t1531 = __retval1512;
  return t1531;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1532, char* v1533, unsigned long v1534) {
bb1535:
  char* __d1536;
  char* __s1537;
  unsigned long __n1538;
  __d1536 = v1532;
  __s1537 = v1533;
  __n1538 = v1534;
    unsigned long t1539 = __n1538;
    unsigned long c1540 = 1;
    _Bool c1541 = ((t1539 == c1540)) ? 1 : 0;
    if (c1541) {
      char* t1542 = __d1536;
      char* t1543 = __s1537;
      std__char_traits_char___assign(t1542, t1543);
    } else {
      char* t1544 = __d1536;
      char* t1545 = __s1537;
      unsigned long t1546 = __n1538;
      char* r1547 = std__char_traits_char___copy(t1544, t1545, t1546);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1548) {
bb1549:
  char* __it1550;
  char* __retval1551;
  __it1550 = v1548;
  char* t1552 = __it1550;
  __retval1551 = t1552;
  char* t1553 = __retval1551;
  return t1553;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1554, char* v1555, char* v1556) {
bb1557:
  char* __p1558;
  char* __k11559;
  char* __k21560;
  __p1558 = v1554;
  __k11559 = v1555;
  __k21560 = v1556;
    char* t1561 = __p1558;
    char* t1562 = __k11559;
    char* r1563 = char_const__std____niter_base_char_const__(t1562);
    char* t1564 = __k21560;
    char* t1565 = __k11559;
    long diff1566 = t1564 - t1565;
    unsigned long cast1567 = (unsigned long)diff1566;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1561, r1563, cast1567);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1568) {
bb1569:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1570;
  char* __retval1571;
  this1570 = v1568;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1572 = this1570;
  char* t1573 = t1572->_M_dataplus._M_p;
  __retval1571 = t1573;
  char* t1574 = __retval1571;
  return t1574;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1575, unsigned long v1576) {
bb1577:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1578;
  unsigned long __length1579;
  this1578 = v1575;
  __length1579 = v1576;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1580 = this1578;
  unsigned long t1581 = __length1579;
  t1580->_M_string_length = t1581;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1582, unsigned long v1583) {
bb1584:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1585;
  unsigned long __n1586;
  char ref_tmp01587;
  this1585 = v1582;
  __n1586 = v1583;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1588 = this1585;
  unsigned long t1589 = __n1586;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1588, t1589);
  unsigned long t1590 = __n1586;
  char* r1591 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1588);
  char* ptr1592 = &(r1591)[t1590];
  char c1593 = 0;
  ref_tmp01587 = c1593;
  std__char_traits_char___assign(ptr1592, &ref_tmp01587);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1594) {
bb1595:
  struct _Guard* this1596;
  this1596 = v1594;
  struct _Guard* t1597 = this1596;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1598 = t1597->_M_guarded;
    _Bool cast1599 = (_Bool)t1598;
    if (cast1599) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1600 = t1597->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1600);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1601, char* v1602, char* v1603, struct std__forward_iterator_tag v1604) {
bb1605:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1606;
  char* __beg1607;
  char* __end1608;
  struct std__forward_iterator_tag unnamed1609;
  unsigned long __dnew1610;
  struct _Guard __guard1611;
  this1606 = v1601;
  __beg1607 = v1602;
  __end1608 = v1603;
  unnamed1609 = v1604;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1612 = this1606;
  char* t1613 = __beg1607;
  char* t1614 = __end1608;
  long r1615 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1613, t1614);
  unsigned long cast1616 = (unsigned long)r1615;
  __dnew1610 = cast1616;
    unsigned long t1617 = __dnew1610;
    unsigned long c1618 = 15;
    _Bool c1619 = ((t1617 > c1618)) ? 1 : 0;
    if (c1619) {
      unsigned long c1620 = 0;
      char* r1621 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1612, &__dnew1610, c1620);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1612, r1621);
      unsigned long t1622 = __dnew1610;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1612, t1622);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1612);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1611, t1612);
    char* r1623 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1612);
    char* t1624 = __beg1607;
    char* t1625 = __end1608;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1623, t1624, t1625);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1626 = ((void*)0);
    __guard1611._M_guarded = c1626;
    unsigned long t1627 = __dnew1610;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1612, t1627);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1611);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1628) {
bb1629:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1630;
  this1630 = v1628;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1631 = this1630;
  {
    struct std__allocator_char_* base1632 = (struct std__allocator_char_*)((char *)t1631 + 0);
    std__allocator_char____allocator(base1632);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1633, struct std____new_allocator_char_* v1634) {
bb1635:
  struct std____new_allocator_char_* this1636;
  struct std____new_allocator_char_* unnamed1637;
  this1636 = v1633;
  unnamed1637 = v1634;
  struct std____new_allocator_char_* t1638 = this1636;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1639, struct std__allocator_char_* v1640) {
bb1641:
  struct std__allocator_char_* this1642;
  struct std__allocator_char_* __a1643;
  this1642 = v1639;
  __a1643 = v1640;
  struct std__allocator_char_* t1644 = this1642;
  struct std____new_allocator_char_* base1645 = (struct std____new_allocator_char_*)((char *)t1644 + 0);
  struct std__allocator_char_* t1646 = __a1643;
  struct std____new_allocator_char_* base1647 = (struct std____new_allocator_char_*)((char *)t1646 + 0);
  std____new_allocator_char_____new_allocator(base1645, base1647);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1648) {
bb1649:
  char* __r1650;
  char* __retval1651;
  __r1650 = v1648;
  char* t1652 = __r1650;
  __retval1651 = t1652;
  char* t1653 = __retval1651;
  return t1653;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1654) {
bb1655:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1656;
  char* __retval1657;
  this1656 = v1654;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1658 = this1656;
  char* cast1659 = (char*)&(t1658->field2._M_local_buf);
  char* r1660 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1659);
  __retval1657 = r1660;
  char* t1661 = __retval1657;
  return t1661;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1662) {
bb1663:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1664;
  _Bool __retval1665;
  this1664 = v1662;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1666 = this1664;
    char* r1667 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1666);
    char* r1668 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1666);
    _Bool c1669 = ((r1667 == r1668)) ? 1 : 0;
    if (c1669) {
        unsigned long t1670 = t1666->_M_string_length;
        unsigned long c1671 = 15;
        _Bool c1672 = ((t1670 > c1671)) ? 1 : 0;
        if (c1672) {
          __builtin_unreachable();
        }
      _Bool c1673 = 1;
      __retval1665 = c1673;
      _Bool t1674 = __retval1665;
      return t1674;
    }
  _Bool c1675 = 0;
  __retval1665 = c1675;
  _Bool t1676 = __retval1665;
  return t1676;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1677, char* v1678, unsigned long v1679) {
bb1680:
  struct std____new_allocator_char_* this1681;
  char* __p1682;
  unsigned long __n1683;
  this1681 = v1677;
  __p1682 = v1678;
  __n1683 = v1679;
  struct std____new_allocator_char_* t1684 = this1681;
    unsigned long c1685 = 1;
    unsigned long c1686 = 16;
    _Bool c1687 = ((c1685 > c1686)) ? 1 : 0;
    if (c1687) {
      char* t1688 = __p1682;
      void* cast1689 = (void*)t1688;
      unsigned long t1690 = __n1683;
      unsigned long c1691 = 1;
      unsigned long b1692 = t1690 * c1691;
      unsigned long c1693 = 1;
      operator_delete_3(cast1689, b1692, c1693);
      return;
    }
  char* t1694 = __p1682;
  void* cast1695 = (void*)t1694;
  unsigned long t1696 = __n1683;
  unsigned long c1697 = 1;
  unsigned long b1698 = t1696 * c1697;
  operator_delete_2(cast1695, b1698);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1699, char* v1700, unsigned long v1701) {
bb1702:
  struct std__allocator_char_* this1703;
  char* __p1704;
  unsigned long __n1705;
  this1703 = v1699;
  __p1704 = v1700;
  __n1705 = v1701;
  struct std__allocator_char_* t1706 = this1703;
    _Bool r1707 = std____is_constant_evaluated();
    if (r1707) {
      char* t1708 = __p1704;
      void* cast1709 = (void*)t1708;
      operator_delete(cast1709);
      return;
    }
  struct std____new_allocator_char_* base1710 = (struct std____new_allocator_char_*)((char *)t1706 + 0);
  char* t1711 = __p1704;
  unsigned long t1712 = __n1705;
  std____new_allocator_char___deallocate(base1710, t1711, t1712);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1713, char* v1714, unsigned long v1715) {
bb1716:
  struct std__allocator_char_* __a1717;
  char* __p1718;
  unsigned long __n1719;
  __a1717 = v1713;
  __p1718 = v1714;
  __n1719 = v1715;
  struct std__allocator_char_* t1720 = __a1717;
  char* t1721 = __p1718;
  unsigned long t1722 = __n1719;
  std__allocator_char___deallocate(t1720, t1721, t1722);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1723, unsigned long v1724) {
bb1725:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1726;
  unsigned long __size1727;
  this1726 = v1723;
  __size1727 = v1724;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1728 = this1726;
  struct std__allocator_char_* r1729 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1728);
  char* r1730 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1728);
  unsigned long t1731 = __size1727;
  unsigned long c1732 = 1;
  unsigned long b1733 = t1731 + c1732;
  std__allocator_traits_std__allocator_char_____deallocate(r1729, r1730, b1733);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1734) {
bb1735:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1736;
  this1736 = v1734;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1737 = this1736;
    _Bool r1738 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1737);
    _Bool u1739 = !r1738;
    if (u1739) {
      unsigned long t1740 = t1737->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1737, t1740);
    }
  return;
}

