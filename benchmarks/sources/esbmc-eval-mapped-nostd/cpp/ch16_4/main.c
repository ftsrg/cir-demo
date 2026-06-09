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
char _str[1];
char _str_1[13] = "QUERY_STRING";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[26] = "Content-type: text/html\n\n";
char _str_3[24] = "<?xml version = \"1.0\"?>";
char _str_4[46] = "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 ";
char _str_5[47] = "Transitional//EN\" \"http://www.w3.org/TR/xhtml1";
char _str_6[31] = "/DTD/xhtml1-transitional.dtd\">";
char _str_7[46] = "<html xmlns = \"http://www.w3.org/1999/xhtml\">";
char _str_8[49] = "<head><title>Using GET with Forms</title></head>";
char _str_9[7] = "<body>";
char _str_10[46] = "<p>Enter one of your favorite words here:</p>";
char _str_11[46] = "<form method = \"get\" action = \"getquery.cgi\">";
char _str_12[37] = "<input type = \"text\" name = \"word\"/>";
char _str_13[47] = "<input type = \"submit\" value = \"Submit Word\"/>";
char _str_14[8] = "</form>";
char _str_15[28] = "<p>Please enter a word.</p>";
char _str_16[6] = "word=";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_17[18] = "<p>Your word is: ";
char _str_18[5] = "</p>";
char _str_19[15] = "</body></html>";
char _str_20[50] = "basic_string: construction from null is not valid";
char _str_21[24] = "basic_string::_M_create";
char _str_22[21] = "basic_string::substr";
char _str_23[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_24[27] = "basic_string::basic_string";
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
extern char* getenv(char* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool std__char_traits_char___lt(char* p0, char* p1);
extern int memcmp(void* p0, void* p1, unsigned long p2);
int std__char_traits_char___compare(char* p0, char* p1, unsigned long p2);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1);
char* __gnu_cxx__char_traits_char___find(char* p0, unsigned long p1, char* p2);
char* std__char_traits_char___find(char* p0, unsigned long p1, char* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2, unsigned long p3);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, unsigned long p2);
extern void std____throw_out_of_range_fmt(char* p0, ...);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, char* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1, unsigned long p2, unsigned long p3);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* p0, struct std____new_allocator_char_* p1);
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* p0, struct std__allocator_char_* p1);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
int main();
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* p0);
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
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
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* p0, char* p1, struct std__allocator_char_* p2);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, unsigned long p1, unsigned long p2);

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
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(&t14->_M_dataplus, r15, t16);
      char* t17 = __s10;
      char* c18 = ((void*)0);
      _Bool c19 = ((t17 == c18)) ? 1 : 0;
      if (c19) {
        char* cast20 = (char*)&(_str_20);
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

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v89) {
bb90:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this91;
  unsigned long __retval92;
  unsigned long __sz93;
  this91 = v89;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t94 = this91;
  unsigned long t95 = t94->_M_string_length;
  __sz93 = t95;
    unsigned long t96 = __sz93;
    unsigned long r97 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t94);
    _Bool c98 = ((t96 > r97)) ? 1 : 0;
    if (c98) {
      __builtin_unreachable();
    }
  unsigned long t99 = __sz93;
  __retval92 = t99;
  unsigned long t100 = __retval92;
  return t100;
}

// function: _ZNSt11char_traitsIcE2ltERKcS2_
_Bool std__char_traits_char___lt(char* v101, char* v102) {
bb103:
  char* __c1104;
  char* __c2105;
  _Bool __retval106;
  __c1104 = v101;
  __c2105 = v102;
  char* t107 = __c1104;
  char t108 = *t107;
  unsigned char cast109 = (unsigned char)t108;
  int cast110 = (int)cast109;
  char* t111 = __c2105;
  char t112 = *t111;
  unsigned char cast113 = (unsigned char)t112;
  int cast114 = (int)cast113;
  _Bool c115 = ((cast110 < cast114)) ? 1 : 0;
  __retval106 = c115;
  _Bool t116 = __retval106;
  return t116;
}

// function: _ZNSt11char_traitsIcE7compareEPKcS2_m
int std__char_traits_char___compare(char* v117, char* v118, unsigned long v119) {
bb120:
  char* __s1121;
  char* __s2122;
  unsigned long __n123;
  int __retval124;
  __s1121 = v117;
  __s2122 = v118;
  __n123 = v119;
    unsigned long t125 = __n123;
    unsigned long c126 = 0;
    _Bool c127 = ((t125 == c126)) ? 1 : 0;
    if (c127) {
      int c128 = 0;
      __retval124 = c128;
      int t129 = __retval124;
      return t129;
    }
    _Bool r130 = std____is_constant_evaluated();
    if (r130) {
        unsigned long __i131;
        unsigned long c132 = 0;
        __i131 = c132;
        while (1) {
          unsigned long t134 = __i131;
          unsigned long t135 = __n123;
          _Bool c136 = ((t134 < t135)) ? 1 : 0;
          if (!c136) break;
            unsigned long t137 = __i131;
            char* t138 = __s1121;
            char* ptr139 = &(t138)[t137];
            unsigned long t140 = __i131;
            char* t141 = __s2122;
            char* ptr142 = &(t141)[t140];
            _Bool r143 = std__char_traits_char___lt(ptr139, ptr142);
            if (r143) {
              int c144 = -1;
              __retval124 = c144;
              int t145 = __retval124;
              int ret_val146 = t145;
              return ret_val146;
            } else {
                unsigned long t147 = __i131;
                char* t148 = __s2122;
                char* ptr149 = &(t148)[t147];
                unsigned long t150 = __i131;
                char* t151 = __s1121;
                char* ptr152 = &(t151)[t150];
                _Bool r153 = std__char_traits_char___lt(ptr149, ptr152);
                if (r153) {
                  int c154 = 1;
                  __retval124 = c154;
                  int t155 = __retval124;
                  int ret_val156 = t155;
                  return ret_val156;
                }
            }
        for_step133: ;
          unsigned long t157 = __i131;
          unsigned long u158 = t157 + 1;
          __i131 = u158;
        }
      int c159 = 0;
      __retval124 = c159;
      int t160 = __retval124;
      return t160;
    }
  char* t161 = __s1121;
  void* cast162 = (void*)t161;
  char* t163 = __s2122;
  void* cast164 = (void*)t163;
  unsigned long t165 = __n123;
  int r166 = memcmp(cast162, cast164, t165);
  __retval124 = r166;
  int t167 = __retval124;
  return t167;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v168) {
bb169:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this170;
  char* __retval171;
  this170 = v168;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t172 = this170;
  char* r173 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t172);
  __retval171 = r173;
  char* t174 = __retval171;
  return t174;
}

// function: _ZSteqIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_
_Bool bool_std__operator___char__std__char_traits_char___std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v175, char* v176) {
bb177:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __lhs178;
  char* __rhs179;
  _Bool __retval180;
  __lhs178 = v175;
  __rhs179 = v176;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t181 = __lhs178;
  unsigned long r182 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t181);
  char* t183 = __rhs179;
  unsigned long r184 = std__char_traits_char___length(t183);
  _Bool c185 = ((r182 == r184)) ? 1 : 0;
  _Bool ternary186;
  if (c185) {
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t187 = __lhs178;
    char* r188 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t187);
    char* t189 = __rhs179;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t190 = __lhs178;
    unsigned long r191 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t190);
    int r192 = std__char_traits_char___compare(r188, t189, r191);
    _Bool cast193 = (_Bool)r192;
    _Bool u194 = !cast193;
    ternary186 = (_Bool)u194;
  } else {
    _Bool c195 = 0;
    ternary186 = (_Bool)c195;
  }
  __retval180 = ternary186;
  _Bool t196 = __retval180;
  return t196;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4findEPKcmRS2_
char* __gnu_cxx__char_traits_char___find(char* v197, unsigned long v198, char* v199) {
bb200:
  char* __s201;
  unsigned long __n202;
  char* __a203;
  char* __retval204;
  __s201 = v197;
  __n202 = v198;
  __a203 = v199;
    unsigned long __i205;
    unsigned long c206 = 0;
    __i205 = c206;
    while (1) {
      unsigned long t208 = __i205;
      unsigned long t209 = __n202;
      _Bool c210 = ((t208 < t209)) ? 1 : 0;
      if (!c210) break;
        unsigned long t211 = __i205;
        char* t212 = __s201;
        char* ptr213 = &(t212)[t211];
        char* t214 = __a203;
        _Bool r215 = __gnu_cxx__char_traits_char___eq(ptr213, t214);
        if (r215) {
          char* t216 = __s201;
          unsigned long t217 = __i205;
          char* ptr218 = &(t216)[t217];
          __retval204 = ptr218;
          char* t219 = __retval204;
          char* ret_val220 = t219;
          return ret_val220;
        }
    for_step207: ;
      unsigned long t221 = __i205;
      unsigned long u222 = t221 + 1;
      __i205 = u222;
    }
  char* c223 = ((void*)0);
  __retval204 = c223;
  char* t224 = __retval204;
  return t224;
}

// function: _ZNSt11char_traitsIcE4findEPKcmRS1_
char* std__char_traits_char___find(char* v225, unsigned long v226, char* v227) {
bb228:
  char* __s229;
  unsigned long __n230;
  char* __a231;
  char* __retval232;
  __s229 = v225;
  __n230 = v226;
  __a231 = v227;
    unsigned long t233 = __n230;
    unsigned long c234 = 0;
    _Bool c235 = ((t233 == c234)) ? 1 : 0;
    if (c235) {
      char* c236 = ((void*)0);
      __retval232 = c236;
      char* t237 = __retval232;
      return t237;
    }
    _Bool r238 = std____is_constant_evaluated();
    if (r238) {
      char* t239 = __s229;
      unsigned long t240 = __n230;
      char* t241 = __a231;
      char* r242 = __gnu_cxx__char_traits_char___find(t239, t240, t241);
      __retval232 = r242;
      char* t243 = __retval232;
      return t243;
    }
  char* t244 = __s229;
  void* cast245 = (void*)t244;
  char* t246 = __a231;
  char t247 = *t246;
  int cast248 = (int)t247;
  unsigned long t249 = __n230;
  void* memchr250 = (void*)__builtin_memchr(cast245, cast248, t249);
  char* cast251 = (char*)memchr250;
  __retval232 = cast251;
  char* t252 = __retval232;
  return t252;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v253, char* v254, unsigned long v255, unsigned long v256) {
bb257:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this258;
  char* __s259;
  unsigned long __pos260;
  unsigned long __n261;
  unsigned long __retval262;
  this258 = v253;
  __s259 = v254;
  __pos260 = v255;
  __n261 = v256;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t263 = this258;
    while (1) {
      unsigned long t265 = __n261;
      _Bool cast266 = (_Bool)t265;
      _Bool ternary267;
      if (cast266) {
        unsigned long t268 = __pos260;
        unsigned long r269 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t263);
        _Bool c270 = ((t268 < r269)) ? 1 : 0;
        ternary267 = (_Bool)c270;
      } else {
        _Bool c271 = 0;
        ternary267 = (_Bool)c271;
      }
      if (!ternary267) break;
        char* __p272;
        char* t273 = __s259;
        unsigned long t274 = __n261;
        unsigned long t275 = __pos260;
        char* r276 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t263);
        char* ptr277 = &(r276)[t275];
        char* r278 = std__char_traits_char___find(t273, t274, ptr277);
        __p272 = r278;
          char* t279 = __p272;
          _Bool cast280 = (_Bool)t279;
          if (cast280) {
            unsigned long t281 = __pos260;
            __retval262 = t281;
            unsigned long t282 = __retval262;
            unsigned long ret_val283 = t282;
            return ret_val283;
          }
    for_step264: ;
      unsigned long t284 = __pos260;
      unsigned long u285 = t284 + 1;
      __pos260 = u285;
    }
  unsigned long t286 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
  __retval262 = t286;
  unsigned long t287 = __retval262;
  return t287;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v288, char* v289, unsigned long v290) {
bb291:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this292;
  char* __s293;
  unsigned long __pos294;
  unsigned long __retval295;
  this292 = v288;
  __s293 = v289;
  __pos294 = v290;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t296 = this292;
  char* t297 = __s293;
  unsigned long t298 = __pos294;
  char* t299 = __s293;
  unsigned long r300 = std__char_traits_char___length(t299);
  unsigned long r301 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__unsigned_long__const(t296, t297, t298, r300);
  __retval295 = r301;
  unsigned long t302 = __retval295;
  return t302;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_checkEmPKc
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v303, unsigned long v304, char* v305) {
bb306:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this307;
  unsigned long __pos308;
  char* __s309;
  unsigned long __retval310;
  this307 = v303;
  __pos308 = v304;
  __s309 = v305;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t311 = this307;
    unsigned long t312 = __pos308;
    unsigned long r313 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t311);
    _Bool c314 = ((t312 > r313)) ? 1 : 0;
    if (c314) {
      char* cast315 = (char*)&(_str_23);
      char* t316 = __s309;
      unsigned long t317 = __pos308;
      unsigned long r318 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t311);
      std____throw_out_of_range_fmt(cast315, t316, t317, r318);
    }
  unsigned long t319 = __pos308;
  __retval310 = t319;
  unsigned long t320 = __retval310;
  return t320;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2ERKS4_mm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v321, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v322, unsigned long v323, unsigned long v324) {
bb325:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this326;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str327;
  unsigned long __pos328;
  unsigned long __n329;
  struct std__allocator_char_ ref_tmp0330;
  char* __start331;
  struct std__forward_iterator_tag agg_tmp0332;
  this326 = v321;
  __str327 = v322;
  __pos328 = v323;
  __n329 = v324;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t333 = this326;
  char* r334 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t333);
  std__allocator_char___allocator_2(&ref_tmp0330);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t333->_M_dataplus, r334, &ref_tmp0330);
  {
    std__allocator_char____allocator(&ref_tmp0330);
  }
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t335 = __str327;
    char* r336 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t335);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t337 = __str327;
    unsigned long t338 = __pos328;
    char* cast339 = (char*)&(_str_24);
    unsigned long r340 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t337, t338, cast339);
    char* ptr341 = &(r336)[r340];
    __start331 = ptr341;
    char* t342 = __start331;
    char* t343 = __start331;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t344 = __str327;
    unsigned long t345 = __pos328;
    unsigned long t346 = __n329;
    unsigned long r347 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(t344, t345, t346);
    char* ptr348 = &(t343)[r347];
    struct std__forward_iterator_tag t349 = agg_tmp0332;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t333, t342, ptr348, t349);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6substrEmm
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v350, unsigned long v351, unsigned long v352) {
bb353:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this354;
  unsigned long __pos355;
  unsigned long __n356;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __retval357;
  this354 = v350;
  __pos355 = v351;
  __n356 = v352;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t358 = this354;
  unsigned long t359 = __pos355;
  char* cast360 = (char*)&(_str_22);
  unsigned long r361 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_check_unsigned_long__char_const___const(t358, t359, cast360);
  unsigned long t362 = __n356;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string(&__retval357, t358, r361, t362);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ t363 = __retval357;
  return t363;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIcEcE27_S_propagate_on_move_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign() {
bb364:
  _Bool __retval365;
  _Bool t366 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval365 = t366;
  _Bool t367 = __retval365;
  return t367;
}

// function: _ZNSt15__new_allocatorIcEaSERKS0_
struct std____new_allocator_char_* std____new_allocator_char___operator_(struct std____new_allocator_char_* v368, struct std____new_allocator_char_* v369) {
bb370:
  struct std____new_allocator_char_* this371;
  struct std____new_allocator_char_* unnamed372;
  struct std____new_allocator_char_* __retval373;
  this371 = v368;
  unnamed372 = v369;
  struct std____new_allocator_char_* t374 = this371;
  __retval373 = t374;
  struct std____new_allocator_char_* t375 = __retval373;
  return t375;
}

// function: _ZNSaIcEaSERKS_
struct std__allocator_char_* std__allocator_char___operator_(struct std__allocator_char_* v376, struct std__allocator_char_* v377) {
bb378:
  struct std__allocator_char_* this379;
  struct std__allocator_char_* unnamed380;
  struct std__allocator_char_* __retval381;
  this379 = v376;
  unnamed380 = v377;
  struct std__allocator_char_* t382 = this379;
  struct std____new_allocator_char_* base383 = (struct std____new_allocator_char_*)((char *)t382 + 0);
  struct std__allocator_char_* t384 = unnamed380;
  struct std____new_allocator_char_* base385 = (struct std____new_allocator_char_*)((char *)t384 + 0);
  struct std____new_allocator_char_* r386 = std____new_allocator_char___operator_(base383, base385);
  __retval381 = t382;
  struct std__allocator_char_* t387 = __retval381;
  return t387;
}

// function: _ZSt15__alloc_on_moveISaIcEEvRT_S2_
void void_std____alloc_on_move_std__allocator_char___(struct std__allocator_char_* v388, struct std__allocator_char_* v389) {
bb390:
  struct std__allocator_char_* __one391;
  struct std__allocator_char_* __two392;
  __one391 = v388;
  __two392 = v389;
    struct std__allocator_char_* t393 = __two392;
    struct std__allocator_char_* t394 = __one391;
    struct std__allocator_char_* r395 = std__allocator_char___operator_(t394, t393);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6lengthEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v396) {
bb397:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this398;
  unsigned long __retval399;
  this398 = v396;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t400 = this398;
  unsigned long r401 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t400);
  __retval399 = r401;
  unsigned long t402 = __retval399;
  return t402;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_use_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v403) {
bb404:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this405;
  char* __retval406;
  this405 = v403;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t407 = this405;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t407);
  char* r408 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t407);
  __retval406 = r408;
  char* t409 = __retval406;
  return t409;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8capacityEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v410) {
bb411:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this412;
  unsigned long __retval413;
  unsigned long __sz414;
  this412 = v410;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t415 = this412;
  _Bool r416 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t415);
  unsigned long ternary417;
  if (r416) {
    unsigned long c418 = 15;
    ternary417 = (unsigned long)c418;
  } else {
    unsigned long t419 = t415->field2._M_allocated_capacity;
    ternary417 = (unsigned long)t419;
  }
  __sz414 = ternary417;
    unsigned long t420 = __sz414;
    unsigned long c421 = 15;
    _Bool c422 = ((t420 < c421)) ? 1 : 0;
    _Bool ternary423;
    if (c422) {
      _Bool c424 = 1;
      ternary423 = (_Bool)c424;
    } else {
      unsigned long t425 = __sz414;
      unsigned long r426 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t415);
      _Bool c427 = ((t425 > r426)) ? 1 : 0;
      ternary423 = (_Bool)c427;
    }
    if (ternary423) {
      __builtin_unreachable();
    }
  unsigned long t428 = __sz414;
  __retval413 = t428;
  unsigned long t429 = __retval413;
  return t429;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_assignERKS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v430, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v431) {
bb432:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this433;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str434;
  this433 = v430;
  __str434 = v431;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t435 = this433;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t436 = __str434;
    _Bool c437 = ((t435 != t436)) ? 1 : 0;
    if (c437) {
      unsigned long __rsize438;
      unsigned long __capacity439;
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t440 = __str434;
      unsigned long r441 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t440);
      __rsize438 = r441;
      unsigned long r442 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____capacity___const(t435);
      __capacity439 = r442;
        unsigned long t443 = __rsize438;
        unsigned long t444 = __capacity439;
        _Bool c445 = ((t443 > t444)) ? 1 : 0;
        if (c445) {
          unsigned long __new_capacity446;
          char* __tmp447;
          unsigned long t448 = __rsize438;
          __new_capacity446 = t448;
          unsigned long t449 = __capacity439;
          char* r450 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t435, &__new_capacity446, t449);
          __tmp447 = r450;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t435);
          char* t451 = __tmp447;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t435, t451);
          unsigned long t452 = __new_capacity446;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t435, t452);
        }
        unsigned long t453 = __rsize438;
        _Bool cast454 = (_Bool)t453;
        if (cast454) {
          char* r455 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t435);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t456 = __str434;
          char* r457 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t456);
          unsigned long t458 = __rsize438;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r455, r457, t458);
        }
      unsigned long t459 = __rsize438;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t435, t459);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v460) {
bb461:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this462;
  this462 = v460;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t463 = this462;
  unsigned long c464 = 0;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t463, c464);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v465, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v466) {
bb467:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this468;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str469;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __retval470;
  _Bool __equal_allocs471;
  this468 = v465;
  __str469 = v466;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t472 = this468;
  _Bool c473 = 1;
  __equal_allocs471 = c473;
    _Bool r474 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t472);
    _Bool u475 = !r474;
    _Bool ternary476;
    if (u475) {
      _Bool r477 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
      ternary476 = (_Bool)r477;
    } else {
      _Bool c478 = 0;
      ternary476 = (_Bool)c478;
    }
    _Bool ternary479;
    if (ternary476) {
      _Bool t480 = __equal_allocs471;
      _Bool u481 = !t480;
      ternary479 = (_Bool)u481;
    } else {
      _Bool c482 = 0;
      ternary479 = (_Bool)c482;
    }
    if (ternary479) {
      unsigned long t483 = t472->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t472, t483);
      char* r484 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t472);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t472, r484);
      unsigned long c485 = 0;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t472, c485);
    }
  struct std__allocator_char_* r486 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t472);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t487 = __str469;
  struct std__allocator_char_* r488 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t487);
  void_std____alloc_on_move_std__allocator_char___(r486, r488);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t489 = __str469;
    _Bool r490 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t489);
    if (r490) {
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t491 = __str469;
        _Bool c492 = ((t491 != t472)) ? 1 : 0;
        if (c492) {
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t493 = __str469;
            unsigned long r494 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t493);
            _Bool cast495 = (_Bool)r494;
            if (cast495) {
              char* r496 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t472);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t497 = __str469;
              char* r498 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t497);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t499 = __str469;
              unsigned long r500 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t499);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(r496, r498, r500);
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t501 = __str469;
          unsigned long r502 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t501);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t472, r502);
        }
    } else {
        _Bool r503 = __gnu_cxx____alloc_traits_std__allocator_char___char____S_propagate_on_move_assign();
        _Bool ternary504;
        if (r503) {
          _Bool c505 = 1;
          ternary504 = (_Bool)c505;
        } else {
          _Bool t506 = __equal_allocs471;
          ternary504 = (_Bool)t506;
        }
        if (ternary504) {
          char* __data507;
          unsigned long __capacity508;
          char* c509 = ((void*)0);
          __data507 = c509;
            _Bool r510 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t472);
            _Bool u511 = !r510;
            if (u511) {
                _Bool t512 = __equal_allocs471;
                if (t512) {
                  char* r513 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t472);
                  __data507 = r513;
                  unsigned long t514 = t472->field2._M_allocated_capacity;
                  __capacity508 = t514;
                } else {
                  unsigned long t515 = t472->field2._M_allocated_capacity;
                  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t472, t515);
                }
            }
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t516 = __str469;
          char* r517 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t516);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t472, r517);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t518 = __str469;
          unsigned long r519 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____length___const(t518);
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t472, r519);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t520 = __str469;
          unsigned long t521 = t520->field2._M_allocated_capacity;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t472, t521);
            char* t522 = __data507;
            _Bool cast523 = (_Bool)t522;
            if (cast523) {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t524 = __str469;
              char* t525 = __data507;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t524, t525);
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t526 = __str469;
              unsigned long t527 = __capacity508;
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t526, t527);
            } else {
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t528 = __str469;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t529 = __str469;
              char* r530 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_use_local_data(t529);
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t528, r530);
            }
        } else {
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t531 = __str469;
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_assign(t472, t531);
        }
    }
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t532 = __str469;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____clear(t532);
  __retval470 = t472;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t533 = __retval470;
  return t533;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v534) {
bb535:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this536;
  this536 = v534;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t537 = this536;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t537);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t537->_M_dataplus);
  }
  return;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v538, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v539) {
bb540:
  struct std__basic_ostream_char__std__char_traits_char__* __os541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str542;
  struct std__basic_ostream_char__std__char_traits_char__* __retval543;
  __os541 = v538;
  __str542 = v539;
  struct std__basic_ostream_char__std__char_traits_char__* t544 = __os541;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t545 = __str542;
  char* r546 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t545);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t547 = __str542;
  unsigned long r548 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t547);
  long cast549 = (long)r548;
  struct std__basic_ostream_char__std__char_traits_char__* r550 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t544, r546, cast549);
  __retval543 = r550;
  struct std__basic_ostream_char__std__char_traits_char__* t551 = __retval543;
  return t551;
}

// function: main
int main() {
bb552:
  int __retval553;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ nameString554;
  struct std__allocator_char_ ref_tmp0555;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ wordString556;
  struct std__allocator_char_ ref_tmp1557;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ query558;
  struct std__allocator_char_ ref_tmp2559;
  int c560 = 0;
  __retval553 = c560;
  char* cast561 = (char*)&(_str);
  std__allocator_char___allocator_2(&ref_tmp0555);
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&nameString554, cast561, &ref_tmp0555);
  {
    std__allocator_char____allocator(&ref_tmp0555);
  }
    char* cast562 = (char*)&(_str);
    std__allocator_char___allocator_2(&ref_tmp1557);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&wordString556, cast562, &ref_tmp1557);
    {
      std__allocator_char____allocator(&ref_tmp1557);
    }
      char* cast563 = (char*)&(_str_1);
      char* r564 = getenv(cast563);
      std__allocator_char___allocator_2(&ref_tmp2559);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&query558, r564, &ref_tmp2559);
      {
        std__allocator_char____allocator(&ref_tmp2559);
      }
        char* cast565 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r566 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast565);
        char* cast567 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r568 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast567);
        char* cast569 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r570 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r568, cast569);
        char* cast571 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r572 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r570, cast571);
        char* cast573 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r574 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r572, cast573);
        char* cast575 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r576 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast575);
        char* cast577 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* r578 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r576, cast577);
        char* cast579 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* r580 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r578, cast579);
        char* cast581 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* r582 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast581);
        char* cast583 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r584 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r582, cast583);
        char* cast585 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* r586 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r584, cast585);
        char* cast587 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r588 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r586, cast587);
        char* cast589 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r590 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r588, cast589);
          char* cast591 = (char*)&(_str);
          _Bool r592 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&query558, cast591);
          if (r592) {
            char* cast593 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* r594 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast593);
          } else {
            int wordLocation595;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp3596;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* tmp_exprcleanup597;
            char* cast598 = (char*)&(_str_16);
            unsigned long c599 = 0;
            unsigned long r600 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____find_first_of_char_const___unsigned_long__const(&query558, cast598, c599);
            unsigned long c601 = 5;
            unsigned long b602 = r600 + c601;
            int cast603 = (int)b602;
            wordLocation595 = cast603;
            int t604 = wordLocation595;
            unsigned long cast605 = (unsigned long)t604;
            unsigned long t606 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r607 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____substr_unsigned_long__unsigned_long__const(&query558, cast605, t606);
            ref_tmp3596 = r607;
              struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* r608 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____operator_(&wordString556, &ref_tmp3596);
              tmp_exprcleanup597 = r608;
            {
              std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp3596);
            }
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t609 = tmp_exprcleanup597;
              char* cast610 = (char*)&(_str);
              _Bool r611 = bool_std__operator___char__std__char_traits_char___std__allocator_char___(&wordString556, cast610);
              if (r611) {
                char* cast612 = (char*)&(_str_15);
                struct std__basic_ostream_char__std__char_traits_char__* r613 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast612);
              } else {
                char* cast614 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* r615 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast614);
                struct std__basic_ostream_char__std__char_traits_char__* r616 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r615, &wordString556);
                char* cast617 = (char*)&(_str_18);
                struct std__basic_ostream_char__std__char_traits_char__* r618 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r616, cast617);
              }
          }
        char* cast619 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* r620 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast619);
        int c621 = 0;
        __retval553 = c621;
        int t622 = __retval553;
        int ret_val623 = t622;
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&query558);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&wordString556);
        }
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&nameString554);
        }
        return ret_val623;
  int t624 = __retval553;
  return t624;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v625) {
bb626:
  struct std____new_allocator_char_* this627;
  this627 = v625;
  struct std____new_allocator_char_* t628 = this627;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v629) {
bb630:
  char* __r631;
  char* __retval632;
  __r631 = v629;
  char* t633 = __r631;
  __retval632 = t633;
  char* t634 = __retval632;
  return t634;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v635) {
bb636:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this637;
  char* __retval638;
  this637 = v635;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t639 = this637;
  char* cast640 = (char*)&(t639->field2._M_local_buf);
  char* r641 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast640);
  __retval638 = r641;
  char* t642 = __retval638;
  return t642;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider_2(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v643, char* v644, struct std__allocator_char_* v645) {
bb646:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this647;
  char* __dat648;
  struct std__allocator_char_* __a649;
  this647 = v643;
  __dat648 = v644;
  __a649 = v645;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t650 = this647;
  struct std__allocator_char_* base651 = (struct std__allocator_char_*)((char *)t650 + 0);
  struct std__allocator_char_* t652 = __a649;
  std__allocator_char___allocator(base651, t652);
    char* t653 = __dat648;
    t650->_M_p = t653;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb654:
  _Bool __retval655;
    _Bool c656 = 0;
    __retval655 = c656;
    _Bool t657 = __retval655;
    return t657;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v658, char* v659) {
bb660:
  char* __c1661;
  char* __c2662;
  _Bool __retval663;
  __c1661 = v658;
  __c2662 = v659;
  char* t664 = __c1661;
  char t665 = *t664;
  int cast666 = (int)t665;
  char* t667 = __c2662;
  char t668 = *t667;
  int cast669 = (int)t668;
  _Bool c670 = ((cast666 == cast669)) ? 1 : 0;
  __retval663 = c670;
  _Bool t671 = __retval663;
  return t671;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v672) {
bb673:
  char* __p674;
  unsigned long __retval675;
  unsigned long __i676;
  __p674 = v672;
  unsigned long c677 = 0;
  __i676 = c677;
    char ref_tmp0678;
    while (1) {
      unsigned long t679 = __i676;
      char* t680 = __p674;
      char* ptr681 = &(t680)[t679];
      char c682 = 0;
      ref_tmp0678 = c682;
      _Bool r683 = __gnu_cxx__char_traits_char___eq(ptr681, &ref_tmp0678);
      _Bool u684 = !r683;
      if (!u684) break;
      unsigned long t685 = __i676;
      unsigned long u686 = t685 + 1;
      __i676 = u686;
    }
  unsigned long t687 = __i676;
  __retval675 = t687;
  unsigned long t688 = __retval675;
  return t688;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v689) {
bb690:
  char* __s691;
  unsigned long __retval692;
  __s691 = v689;
    _Bool r693 = std____is_constant_evaluated();
    if (r693) {
      char* t694 = __s691;
      unsigned long r695 = __gnu_cxx__char_traits_char___length(t694);
      __retval692 = r695;
      unsigned long t696 = __retval692;
      return t696;
    }
  char* t697 = __s691;
  unsigned long r698 = strlen(t697);
  __retval692 = r698;
  unsigned long t699 = __retval692;
  return t699;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v700, char* v701, struct std__random_access_iterator_tag v702) {
bb703:
  char* __first704;
  char* __last705;
  struct std__random_access_iterator_tag unnamed706;
  long __retval707;
  __first704 = v700;
  __last705 = v701;
  unnamed706 = v702;
  char* t708 = __last705;
  char* t709 = __first704;
  long diff710 = t708 - t709;
  __retval707 = diff710;
  long t711 = __retval707;
  return t711;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v712) {
bb713:
  char** unnamed714;
  struct std__random_access_iterator_tag __retval715;
  unnamed714 = v712;
  struct std__random_access_iterator_tag t716 = __retval715;
  return t716;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v717, char* v718) {
bb719:
  char* __first720;
  char* __last721;
  long __retval722;
  struct std__random_access_iterator_tag agg_tmp0723;
  __first720 = v717;
  __last721 = v718;
  char* t724 = __first720;
  char* t725 = __last721;
  struct std__random_access_iterator_tag r726 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first720);
  agg_tmp0723 = r726;
  struct std__random_access_iterator_tag t727 = agg_tmp0723;
  long r728 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t724, t725, t727);
  __retval722 = r728;
  long t729 = __retval722;
  return t729;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v730, char* v731) {
bb732:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this733;
  char* __p734;
  this733 = v730;
  __p734 = v731;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t735 = this733;
  char* t736 = __p734;
  t735->_M_dataplus._M_p = t736;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v737) {
bb738:
  struct std__allocator_char_* __a739;
  unsigned long __retval740;
  __a739 = v737;
  unsigned long c741 = -1;
  unsigned long c742 = 1;
  unsigned long b743 = c741 / c742;
  __retval740 = b743;
  unsigned long t744 = __retval740;
  return t744;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v745) {
bb746:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this747;
  struct std__allocator_char_* __retval748;
  this747 = v745;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t749 = this747;
  struct std__allocator_char_* base750 = (struct std__allocator_char_*)((char *)&(t749->_M_dataplus) + 0);
  __retval748 = base750;
  struct std__allocator_char_* t751 = __retval748;
  return t751;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v752, unsigned long* v753) {
bb754:
  unsigned long* __a755;
  unsigned long* __b756;
  unsigned long* __retval757;
  __a755 = v752;
  __b756 = v753;
    unsigned long* t758 = __b756;
    unsigned long t759 = *t758;
    unsigned long* t760 = __a755;
    unsigned long t761 = *t760;
    _Bool c762 = ((t759 < t761)) ? 1 : 0;
    if (c762) {
      unsigned long* t763 = __b756;
      __retval757 = t763;
      unsigned long* t764 = __retval757;
      return t764;
    }
  unsigned long* t765 = __a755;
  __retval757 = t765;
  unsigned long* t766 = __retval757;
  return t766;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v767) {
bb768:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this769;
  unsigned long __retval770;
  unsigned long __diffmax771;
  unsigned long __allocmax772;
  this769 = v767;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t773 = this769;
  unsigned long c774 = 9223372036854775807;
  __diffmax771 = c774;
  struct std__allocator_char_* r775 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t773);
  unsigned long r776 = std__allocator_traits_std__allocator_char_____max_size(r775);
  __allocmax772 = r776;
  unsigned long* r777 = unsigned_long_const__std__min_unsigned_long_(&__diffmax771, &__allocmax772);
  unsigned long t778 = *r777;
  unsigned long c779 = 1;
  unsigned long b780 = t778 - c779;
  __retval770 = b780;
  unsigned long t781 = __retval770;
  return t781;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v782) {
bb783:
  struct std____new_allocator_char_* this784;
  unsigned long __retval785;
  this784 = v782;
  struct std____new_allocator_char_* t786 = this784;
  unsigned long c787 = 9223372036854775807;
  unsigned long c788 = 1;
  unsigned long b789 = c787 / c788;
  __retval785 = b789;
  unsigned long t790 = __retval785;
  return t790;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v791, unsigned long v792, void* v793) {
bb794:
  struct std____new_allocator_char_* this795;
  unsigned long __n796;
  void* unnamed797;
  char* __retval798;
  this795 = v791;
  __n796 = v792;
  unnamed797 = v793;
  struct std____new_allocator_char_* t799 = this795;
    unsigned long t800 = __n796;
    unsigned long r801 = std____new_allocator_char____M_max_size___const(t799);
    _Bool c802 = ((t800 > r801)) ? 1 : 0;
    if (c802) {
        unsigned long t803 = __n796;
        unsigned long c804 = -1;
        unsigned long c805 = 1;
        unsigned long b806 = c804 / c805;
        _Bool c807 = ((t803 > b806)) ? 1 : 0;
        if (c807) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c808 = 1;
    unsigned long c809 = 16;
    _Bool c810 = ((c808 > c809)) ? 1 : 0;
    if (c810) {
      unsigned long __al811;
      unsigned long c812 = 1;
      __al811 = c812;
      unsigned long t813 = __n796;
      unsigned long c814 = 1;
      unsigned long b815 = t813 * c814;
      unsigned long t816 = __al811;
      void* r817 = operator_new_2(b815, t816);
      char* cast818 = (char*)r817;
      __retval798 = cast818;
      char* t819 = __retval798;
      return t819;
    }
  unsigned long t820 = __n796;
  unsigned long c821 = 1;
  unsigned long b822 = t820 * c821;
  void* r823 = operator_new(b822);
  char* cast824 = (char*)r823;
  __retval798 = cast824;
  char* t825 = __retval798;
  return t825;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v826, unsigned long v827) {
bb828:
  struct std__allocator_char_* this829;
  unsigned long __n830;
  char* __retval831;
  this829 = v826;
  __n830 = v827;
  struct std__allocator_char_* t832 = this829;
    _Bool r833 = std____is_constant_evaluated();
    if (r833) {
        unsigned long t834 = __n830;
        unsigned long c835 = 1;
        unsigned long ovr836;
        _Bool ovf837 = __builtin_mul_overflow(t834, c835, &ovr836);
        __n830 = ovr836;
        if (ovf837) {
          std____throw_bad_array_new_length();
        }
      unsigned long t838 = __n830;
      void* r839 = operator_new(t838);
      char* cast840 = (char*)r839;
      __retval831 = cast840;
      char* t841 = __retval831;
      return t841;
    }
  struct std____new_allocator_char_* base842 = (struct std____new_allocator_char_*)((char *)t832 + 0);
  unsigned long t843 = __n830;
  void* c844 = ((void*)0);
  char* r845 = std____new_allocator_char___allocate(base842, t843, c844);
  __retval831 = r845;
  char* t846 = __retval831;
  return t846;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v847, unsigned long v848) {
bb849:
  struct std__allocator_char_* __a850;
  unsigned long __n851;
  char* __retval852;
  __a850 = v847;
  __n851 = v848;
  struct std__allocator_char_* t853 = __a850;
  unsigned long t854 = __n851;
  char* r855 = std__allocator_char___allocate(t853, t854);
  __retval852 = r855;
  char* t856 = __retval852;
  return t856;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v857, unsigned long v858) {
bb859:
  struct std__allocator_char_* __a860;
  unsigned long __n861;
  char* __retval862;
  char* __p863;
  __a860 = v857;
  __n861 = v858;
  struct std__allocator_char_* t864 = __a860;
  unsigned long t865 = __n861;
  char* r866 = std__allocator_traits_std__allocator_char_____allocate(t864, t865);
  __p863 = r866;
  char* t867 = __p863;
  __retval862 = t867;
  char* t868 = __retval862;
  return t868;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v869) {
bb870:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this871;
  struct std__allocator_char_* __retval872;
  this871 = v869;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t873 = this871;
  struct std__allocator_char_* base874 = (struct std__allocator_char_*)((char *)&(t873->_M_dataplus) + 0);
  __retval872 = base874;
  struct std__allocator_char_* t875 = __retval872;
  return t875;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v876, unsigned long* v877, unsigned long v878) {
bb879:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this880;
  unsigned long* __capacity881;
  unsigned long __old_capacity882;
  char* __retval883;
  this880 = v876;
  __capacity881 = v877;
  __old_capacity882 = v878;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t884 = this880;
    unsigned long* t885 = __capacity881;
    unsigned long t886 = *t885;
    unsigned long r887 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t884);
    _Bool c888 = ((t886 > r887)) ? 1 : 0;
    if (c888) {
      char* cast889 = (char*)&(_str_21);
      std____throw_length_error(cast889);
    }
    unsigned long* t890 = __capacity881;
    unsigned long t891 = *t890;
    unsigned long t892 = __old_capacity882;
    _Bool c893 = ((t891 > t892)) ? 1 : 0;
    _Bool ternary894;
    if (c893) {
      unsigned long* t895 = __capacity881;
      unsigned long t896 = *t895;
      unsigned long c897 = 2;
      unsigned long t898 = __old_capacity882;
      unsigned long b899 = c897 * t898;
      _Bool c900 = ((t896 < b899)) ? 1 : 0;
      ternary894 = (_Bool)c900;
    } else {
      _Bool c901 = 0;
      ternary894 = (_Bool)c901;
    }
    if (ternary894) {
      unsigned long c902 = 2;
      unsigned long t903 = __old_capacity882;
      unsigned long b904 = c902 * t903;
      unsigned long* t905 = __capacity881;
      *t905 = b904;
        unsigned long* t906 = __capacity881;
        unsigned long t907 = *t906;
        unsigned long r908 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t884);
        _Bool c909 = ((t907 > r908)) ? 1 : 0;
        if (c909) {
          unsigned long r910 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t884);
          unsigned long* t911 = __capacity881;
          *t911 = r910;
        }
    }
  struct std__allocator_char_* r912 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t884);
  unsigned long* t913 = __capacity881;
  unsigned long t914 = *t913;
  unsigned long c915 = 1;
  unsigned long b916 = t914 + c915;
  char* r917 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r912, b916);
  __retval883 = r917;
  char* t918 = __retval883;
  return t918;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v919, unsigned long v920) {
bb921:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this922;
  unsigned long __capacity923;
  this922 = v919;
  __capacity923 = v920;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t924 = this922;
  unsigned long t925 = __capacity923;
  t924->field2._M_allocated_capacity = t925;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb926:
  _Bool __retval927;
    _Bool c928 = 0;
    __retval927 = c928;
    _Bool t929 = __retval927;
    return t929;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v930) {
bb931:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this932;
  this932 = v930;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t933 = this932;
    _Bool r934 = std__is_constant_evaluated();
    if (r934) {
        unsigned long __i935;
        unsigned long c936 = 0;
        __i935 = c936;
        while (1) {
          unsigned long t938 = __i935;
          unsigned long c939 = 15;
          _Bool c940 = ((t938 <= c939)) ? 1 : 0;
          if (!c940) break;
          char c941 = 0;
          unsigned long t942 = __i935;
          t933->field2._M_local_buf[t942] = c941;
        for_step937: ;
          unsigned long t943 = __i935;
          unsigned long u944 = t943 + 1;
          __i935 = u944;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v945, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v946) {
bb947:
  struct _Guard* this948;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s949;
  this948 = v945;
  __s949 = v946;
  struct _Guard* t950 = this948;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t951 = __s949;
  t950->_M_guarded = t951;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v952, char* v953) {
bb954:
  char* __location955;
  char* __args956;
  char* __retval957;
  void* __loc958;
  __location955 = v952;
  __args956 = v953;
  char* t959 = __location955;
  void* cast960 = (void*)t959;
  __loc958 = cast960;
    void* t961 = __loc958;
    char* cast962 = (char*)t961;
    char* t963 = __args956;
    char t964 = *t963;
    *cast962 = t964;
    __retval957 = cast962;
    char* t965 = __retval957;
    return t965;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v966, char* v967) {
bb968:
  char* __c1969;
  char* __c2970;
  __c1969 = v966;
  __c2970 = v967;
    _Bool r971 = std____is_constant_evaluated();
    if (r971) {
      char* t972 = __c1969;
      char* t973 = __c2970;
      char* r974 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t972, t973);
    } else {
      char* t975 = __c2970;
      char t976 = *t975;
      char* t977 = __c1969;
      *t977 = t976;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v978, char* v979, unsigned long v980) {
bb981:
  char* __s1982;
  char* __s2983;
  unsigned long __n984;
  char* __retval985;
  __s1982 = v978;
  __s2983 = v979;
  __n984 = v980;
    unsigned long t986 = __n984;
    unsigned long c987 = 0;
    _Bool c988 = ((t986 == c987)) ? 1 : 0;
    if (c988) {
      char* t989 = __s1982;
      __retval985 = t989;
      char* t990 = __retval985;
      return t990;
    }
    _Bool r991 = std____is_constant_evaluated();
    if (r991) {
        unsigned long __i992;
        unsigned long c993 = 0;
        __i992 = c993;
        while (1) {
          unsigned long t995 = __i992;
          unsigned long t996 = __n984;
          _Bool c997 = ((t995 < t996)) ? 1 : 0;
          if (!c997) break;
          char* t998 = __s1982;
          unsigned long t999 = __i992;
          char* ptr1000 = &(t998)[t999];
          unsigned long t1001 = __i992;
          char* t1002 = __s2983;
          char* ptr1003 = &(t1002)[t1001];
          char* r1004 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr1000, ptr1003);
        for_step994: ;
          unsigned long t1005 = __i992;
          unsigned long u1006 = t1005 + 1;
          __i992 = u1006;
        }
      char* t1007 = __s1982;
      __retval985 = t1007;
      char* t1008 = __retval985;
      return t1008;
    }
  char* t1009 = __s1982;
  void* cast1010 = (void*)t1009;
  char* t1011 = __s2983;
  void* cast1012 = (void*)t1011;
  unsigned long t1013 = __n984;
  unsigned long c1014 = 1;
  unsigned long b1015 = t1013 * c1014;
  void* r1016 = memcpy(cast1010, cast1012, b1015);
  char* t1017 = __s1982;
  __retval985 = t1017;
  char* t1018 = __retval985;
  return t1018;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1019, char* v1020, unsigned long v1021) {
bb1022:
  char* __s11023;
  char* __s21024;
  unsigned long __n1025;
  char* __retval1026;
  __s11023 = v1019;
  __s21024 = v1020;
  __n1025 = v1021;
    unsigned long t1027 = __n1025;
    unsigned long c1028 = 0;
    _Bool c1029 = ((t1027 == c1028)) ? 1 : 0;
    if (c1029) {
      char* t1030 = __s11023;
      __retval1026 = t1030;
      char* t1031 = __retval1026;
      return t1031;
    }
    _Bool r1032 = std____is_constant_evaluated();
    if (r1032) {
      char* t1033 = __s11023;
      char* t1034 = __s21024;
      unsigned long t1035 = __n1025;
      char* r1036 = __gnu_cxx__char_traits_char___copy(t1033, t1034, t1035);
      __retval1026 = r1036;
      char* t1037 = __retval1026;
      return t1037;
    }
  char* t1038 = __s11023;
  void* cast1039 = (void*)t1038;
  char* t1040 = __s21024;
  void* cast1041 = (void*)t1040;
  unsigned long t1042 = __n1025;
  void* r1043 = memcpy(cast1039, cast1041, t1042);
  char* cast1044 = (char*)r1043;
  __retval1026 = cast1044;
  char* t1045 = __retval1026;
  return t1045;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1046, char* v1047, unsigned long v1048) {
bb1049:
  char* __d1050;
  char* __s1051;
  unsigned long __n1052;
  __d1050 = v1046;
  __s1051 = v1047;
  __n1052 = v1048;
    unsigned long t1053 = __n1052;
    unsigned long c1054 = 1;
    _Bool c1055 = ((t1053 == c1054)) ? 1 : 0;
    if (c1055) {
      char* t1056 = __d1050;
      char* t1057 = __s1051;
      std__char_traits_char___assign(t1056, t1057);
    } else {
      char* t1058 = __d1050;
      char* t1059 = __s1051;
      unsigned long t1060 = __n1052;
      char* r1061 = std__char_traits_char___copy(t1058, t1059, t1060);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1062) {
bb1063:
  char* __it1064;
  char* __retval1065;
  __it1064 = v1062;
  char* t1066 = __it1064;
  __retval1065 = t1066;
  char* t1067 = __retval1065;
  return t1067;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1068, char* v1069, char* v1070) {
bb1071:
  char* __p1072;
  char* __k11073;
  char* __k21074;
  __p1072 = v1068;
  __k11073 = v1069;
  __k21074 = v1070;
    char* t1075 = __p1072;
    char* t1076 = __k11073;
    char* r1077 = char_const__std____niter_base_char_const__(t1076);
    char* t1078 = __k21074;
    char* t1079 = __k11073;
    long diff1080 = t1078 - t1079;
    unsigned long cast1081 = (unsigned long)diff1080;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1075, r1077, cast1081);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1082) {
bb1083:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1084;
  char* __retval1085;
  this1084 = v1082;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1086 = this1084;
  char* t1087 = t1086->_M_dataplus._M_p;
  __retval1085 = t1087;
  char* t1088 = __retval1085;
  return t1088;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1089, unsigned long v1090) {
bb1091:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1092;
  unsigned long __length1093;
  this1092 = v1089;
  __length1093 = v1090;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1094 = this1092;
  unsigned long t1095 = __length1093;
  t1094->_M_string_length = t1095;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1096, unsigned long v1097) {
bb1098:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1099;
  unsigned long __n1100;
  char ref_tmp01101;
  this1099 = v1096;
  __n1100 = v1097;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1102 = this1099;
  unsigned long t1103 = __n1100;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1102, t1103);
  unsigned long t1104 = __n1100;
  char* r1105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1102);
  char* ptr1106 = &(r1105)[t1104];
  char c1107 = 0;
  ref_tmp01101 = c1107;
  std__char_traits_char___assign(ptr1106, &ref_tmp01101);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1108) {
bb1109:
  struct _Guard* this1110;
  this1110 = v1108;
  struct _Guard* t1111 = this1110;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1112 = t1111->_M_guarded;
    _Bool cast1113 = (_Bool)t1112;
    if (cast1113) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1114 = t1111->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1114);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1115, char* v1116, char* v1117, struct std__forward_iterator_tag v1118) {
bb1119:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1120;
  char* __beg1121;
  char* __end1122;
  struct std__forward_iterator_tag unnamed1123;
  unsigned long __dnew1124;
  struct _Guard __guard1125;
  this1120 = v1115;
  __beg1121 = v1116;
  __end1122 = v1117;
  unnamed1123 = v1118;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1126 = this1120;
  char* t1127 = __beg1121;
  char* t1128 = __end1122;
  long r1129 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1127, t1128);
  unsigned long cast1130 = (unsigned long)r1129;
  __dnew1124 = cast1130;
    unsigned long t1131 = __dnew1124;
    unsigned long c1132 = 15;
    _Bool c1133 = ((t1131 > c1132)) ? 1 : 0;
    if (c1133) {
      unsigned long c1134 = 0;
      char* r1135 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1126, &__dnew1124, c1134);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1126, r1135);
      unsigned long t1136 = __dnew1124;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1126, t1136);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1126);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1125, t1126);
    char* r1137 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1126);
    char* t1138 = __beg1121;
    char* t1139 = __end1122;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1137, t1138, t1139);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1140 = ((void*)0);
    __guard1125._M_guarded = c1140;
    unsigned long t1141 = __dnew1124;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1126, t1141);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1125);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1142) {
bb1143:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1144;
  this1144 = v1142;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1145 = this1144;
  {
    struct std__allocator_char_* base1146 = (struct std__allocator_char_*)((char *)t1145 + 0);
    std__allocator_char____allocator(base1146);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1147, struct std____new_allocator_char_* v1148) {
bb1149:
  struct std____new_allocator_char_* this1150;
  struct std____new_allocator_char_* unnamed1151;
  this1150 = v1147;
  unnamed1151 = v1148;
  struct std____new_allocator_char_* t1152 = this1150;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1153, struct std__allocator_char_* v1154) {
bb1155:
  struct std__allocator_char_* this1156;
  struct std__allocator_char_* __a1157;
  this1156 = v1153;
  __a1157 = v1154;
  struct std__allocator_char_* t1158 = this1156;
  struct std____new_allocator_char_* base1159 = (struct std____new_allocator_char_*)((char *)t1158 + 0);
  struct std__allocator_char_* t1160 = __a1157;
  struct std____new_allocator_char_* base1161 = (struct std____new_allocator_char_*)((char *)t1160 + 0);
  std____new_allocator_char_____new_allocator(base1159, base1161);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1162) {
bb1163:
  char* __r1164;
  char* __retval1165;
  __r1164 = v1162;
  char* t1166 = __r1164;
  __retval1165 = t1166;
  char* t1167 = __retval1165;
  return t1167;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1168) {
bb1169:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1170;
  char* __retval1171;
  this1170 = v1168;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1172 = this1170;
  char* cast1173 = (char*)&(t1172->field2._M_local_buf);
  char* r1174 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1173);
  __retval1171 = r1174;
  char* t1175 = __retval1171;
  return t1175;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1176) {
bb1177:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1178;
  _Bool __retval1179;
  this1178 = v1176;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1180 = this1178;
    char* r1181 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1180);
    char* r1182 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1180);
    _Bool c1183 = ((r1181 == r1182)) ? 1 : 0;
    if (c1183) {
        unsigned long t1184 = t1180->_M_string_length;
        unsigned long c1185 = 15;
        _Bool c1186 = ((t1184 > c1185)) ? 1 : 0;
        if (c1186) {
          __builtin_unreachable();
        }
      _Bool c1187 = 1;
      __retval1179 = c1187;
      _Bool t1188 = __retval1179;
      return t1188;
    }
  _Bool c1189 = 0;
  __retval1179 = c1189;
  _Bool t1190 = __retval1179;
  return t1190;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1191, char* v1192, unsigned long v1193) {
bb1194:
  struct std____new_allocator_char_* this1195;
  char* __p1196;
  unsigned long __n1197;
  this1195 = v1191;
  __p1196 = v1192;
  __n1197 = v1193;
  struct std____new_allocator_char_* t1198 = this1195;
    unsigned long c1199 = 1;
    unsigned long c1200 = 16;
    _Bool c1201 = ((c1199 > c1200)) ? 1 : 0;
    if (c1201) {
      char* t1202 = __p1196;
      void* cast1203 = (void*)t1202;
      unsigned long t1204 = __n1197;
      unsigned long c1205 = 1;
      unsigned long b1206 = t1204 * c1205;
      unsigned long c1207 = 1;
      operator_delete_3(cast1203, b1206, c1207);
      return;
    }
  char* t1208 = __p1196;
  void* cast1209 = (void*)t1208;
  unsigned long t1210 = __n1197;
  unsigned long c1211 = 1;
  unsigned long b1212 = t1210 * c1211;
  operator_delete_2(cast1209, b1212);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1213, char* v1214, unsigned long v1215) {
bb1216:
  struct std__allocator_char_* this1217;
  char* __p1218;
  unsigned long __n1219;
  this1217 = v1213;
  __p1218 = v1214;
  __n1219 = v1215;
  struct std__allocator_char_* t1220 = this1217;
    _Bool r1221 = std____is_constant_evaluated();
    if (r1221) {
      char* t1222 = __p1218;
      void* cast1223 = (void*)t1222;
      operator_delete(cast1223);
      return;
    }
  struct std____new_allocator_char_* base1224 = (struct std____new_allocator_char_*)((char *)t1220 + 0);
  char* t1225 = __p1218;
  unsigned long t1226 = __n1219;
  std____new_allocator_char___deallocate(base1224, t1225, t1226);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1227, char* v1228, unsigned long v1229) {
bb1230:
  struct std__allocator_char_* __a1231;
  char* __p1232;
  unsigned long __n1233;
  __a1231 = v1227;
  __p1232 = v1228;
  __n1233 = v1229;
  struct std__allocator_char_* t1234 = __a1231;
  char* t1235 = __p1232;
  unsigned long t1236 = __n1233;
  std__allocator_char___deallocate(t1234, t1235, t1236);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1237, unsigned long v1238) {
bb1239:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1240;
  unsigned long __size1241;
  this1240 = v1237;
  __size1241 = v1238;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1242 = this1240;
  struct std__allocator_char_* r1243 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1242);
  char* r1244 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1242);
  unsigned long t1245 = __size1241;
  unsigned long c1246 = 1;
  unsigned long b1247 = t1245 + c1246;
  std__allocator_traits_std__allocator_char_____deallocate(r1243, r1244, b1247);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1248) {
bb1249:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1250;
  this1250 = v1248;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1251 = this1250;
    _Bool r1252 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1251);
    _Bool u1253 = !r1252;
    if (u1253) {
      unsigned long t1254 = t1251->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1251, t1254);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcOS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1255, char* v1256, struct std__allocator_char_* v1257) {
bb1258:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1259;
  char* __dat1260;
  struct std__allocator_char_* __a1261;
  this1259 = v1255;
  __dat1260 = v1256;
  __a1261 = v1257;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1262 = this1259;
  struct std__allocator_char_* base1263 = (struct std__allocator_char_*)((char *)t1262 + 0);
  struct std__allocator_char_* t1264 = __a1261;
  std__allocator_char___allocator(base1263, t1264);
    char* t1265 = __dat1260;
    t1262->_M_p = t1265;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8_M_limitEmm
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_limit_unsigned_long__unsigned_long__const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1266, unsigned long v1267, unsigned long v1268) {
bb1269:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1270;
  unsigned long __pos1271;
  unsigned long __off1272;
  unsigned long __retval1273;
  _Bool __testoff1274;
  this1270 = v1266;
  __pos1271 = v1267;
  __off1272 = v1268;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1275 = this1270;
  unsigned long t1276 = __off1272;
  unsigned long r1277 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1275);
  unsigned long t1278 = __pos1271;
  unsigned long b1279 = r1277 - t1278;
  _Bool c1280 = ((t1276 < b1279)) ? 1 : 0;
  __testoff1274 = c1280;
  _Bool t1281 = __testoff1274;
  unsigned long ternary1282;
  if (t1281) {
    unsigned long t1283 = __off1272;
    ternary1282 = (unsigned long)t1283;
  } else {
    unsigned long r1284 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t1275);
    unsigned long t1285 = __pos1271;
    unsigned long b1286 = r1284 - t1285;
    ternary1282 = (unsigned long)b1286;
  }
  __retval1273 = ternary1282;
  unsigned long t1287 = __retval1273;
  return t1287;
}

