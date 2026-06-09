extern void abort(void);
// Struct definitions (auto-parsed)
struct ListNode_double_ { double data; struct ListNode_double_* nextPtr; };
struct ListNode_int_ { int data; struct ListNode_int_* nextPtr; };
struct List_double_ { struct ListNode_double_* firstPtr; struct ListNode_double_* lastPtr; };
struct List_int_ { struct ListNode_int_* firstPtr; struct ListNode_int_* lastPtr; };
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
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Enter one of the following:\n";
char _str_1[36] = "  1 to insert at beginning of list\n";
char _str_2[30] = "  2 to insert at end of list\n";
char _str_3[38] = "  3 to delete from beginning of list\n";
char _str_4[32] = "  4 to delete from end of list\n";
char _str_5[28] = "  5 to end list processing\n";
char _str_6[8] = "integer";
char _str_7[7] = "double";
char _str_8[50] = "basic_string: construction from null is not valid";
char _str_9[24] = "basic_string::_M_create";
char _str_10[22] = "Destroying nodes ...\n";
char _str_11[22] = "All nodes destroyed\n\n";
char _str_12[19] = "Testing a List of ";
char _str_13[9] = " values\n";
char _str_14[3] = "? ";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
char _str_15[7] = "Enter ";
char _str_16[3] = ": ";
char _str_17[20] = " removed from list\n";
char _str_18[16] = "End list test\n\n";
char _str_19[20] = "The list is empty\n\n";
char _str_20[14] = "The list is: ";
char _str_21[3] = "\n\n";
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
void instructions();
void List_int___List(struct List_int_* p0);
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator___2(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
void ListNode_int___ListNode(struct ListNode_int_* p0, int* p1);
struct ListNode_int_* List_int___getNewNode(struct List_int_* p0, int* p1);
void List_int___insertAtFront(struct List_int_* p0, int* p1);
void List_int___print___const(struct List_int_* p0);
void List_int___insertAtBack(struct List_int_* p0, int* p1);
_Bool List_int___removeFromFront(struct List_int_* p0, int* p1);
_Bool List_int___removeFromBack(struct List_int_* p0, int* p1);
void void_testList_int_(struct List_int_* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void std__allocator_char___allocator_2(struct std__allocator_char_* p0);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0, char* p1, struct std__allocator_char_* p2);
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p0);
void std__allocator_char____allocator(struct std__allocator_char_* p0);
void List_double___List(struct List_double_* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__std__istream___M_extract_double_(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, double* p1);
void ListNode_double___ListNode(struct ListNode_double_* p0, double* p1);
struct ListNode_double_* List_double___getNewNode(struct List_double_* p0, double* p1);
void List_double___insertAtFront(struct List_double_* p0, double* p1);
void List_double___print___const(struct List_double_* p0);
void List_double___insertAtBack(struct List_double_* p0, double* p1);
_Bool List_double___removeFromFront(struct List_double_* p0, double* p1);
_Bool List_double___removeFromBack(struct List_double_* p0, double* p1);
void void_testList_double_(struct List_double_* p0, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* p1);
void List_double____List(struct List_double_* p0);
void List_int____List(struct List_int_* p0);
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
_Bool List_int___isEmpty___const(struct List_int_* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
_Bool List_double___isEmpty___const(struct List_double_* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v0, int v1) {
bb2:
  int __a3;
  int __b4;
  int __retval5;
  __a3 = v0;
  __b4 = v1;
  int t6 = __a3;
  int t7 = __b4;
  int b8 = t6 | t7;
  __retval5 = b8;
  int t9 = __retval5;
  return t9;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v10) {
bb11:
  struct std__basic_ios_char__std__char_traits_char__* this12;
  int __retval13;
  this12 = v10;
  struct std__basic_ios_char__std__char_traits_char__* t14 = this12;
  struct std__ios_base* base15 = (struct std__ios_base*)((char *)t14 + 0);
  int t16 = base15->_M_streambuf_state;
  __retval13 = t16;
  int t17 = __retval13;
  return t17;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v18, int v19) {
bb20:
  struct std__basic_ios_char__std__char_traits_char__* this21;
  int __state22;
  this21 = v18;
  __state22 = v19;
  struct std__basic_ios_char__std__char_traits_char__* t23 = this21;
  int r24 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t23);
  int t25 = __state22;
  int r26 = std__operator_(r24, t25);
  std__basic_ios_char__std__char_traits_char_____clear(t23, r26);
  return;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v27, char* v28) {
bb29:
  struct std__basic_ostream_char__std__char_traits_char__* __out30;
  char* __s31;
  struct std__basic_ostream_char__std__char_traits_char__* __retval32;
  __out30 = v27;
  __s31 = v28;
    char* t33 = __s31;
    _Bool cast34 = (_Bool)t33;
    _Bool u35 = !cast34;
    if (u35) {
      struct std__basic_ostream_char__std__char_traits_char__* t36 = __out30;
      void** v37 = (void**)t36;
      void* v38 = *((void**)v37);
      unsigned char* cast39 = (unsigned char*)v38;
      long c40 = -24;
      unsigned char* ptr41 = &(cast39)[c40];
      long* cast42 = (long*)ptr41;
      long t43 = *cast42;
      unsigned char* cast44 = (unsigned char*)t36;
      unsigned char* ptr45 = &(cast44)[t43];
      struct std__basic_ostream_char__std__char_traits_char__* cast46 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr45;
      struct std__basic_ios_char__std__char_traits_char__* cast47 = (struct std__basic_ios_char__std__char_traits_char__*)cast46;
      int t48 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast47, t48);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t49 = __out30;
      char* t50 = __s31;
      char* t51 = __s31;
      unsigned long r52 = std__char_traits_char___length(t51);
      long cast53 = (long)r52;
      struct std__basic_ostream_char__std__char_traits_char__* r54 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t49, t50, cast53);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t55 = __out30;
  __retval32 = t55;
  struct std__basic_ostream_char__std__char_traits_char__* t56 = __retval32;
  return t56;
}

// function: _Z12instructionsv
void instructions() {
bb57:
  char* cast58 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r59 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast58);
  char* cast60 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r61 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r59, cast60);
  char* cast62 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* r63 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r61, cast62);
  char* cast64 = (char*)&(_str_3);
  struct std__basic_ostream_char__std__char_traits_char__* r65 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r63, cast64);
  char* cast66 = (char*)&(_str_4);
  struct std__basic_ostream_char__std__char_traits_char__* r67 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r65, cast66);
  char* cast68 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* r69 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r67, cast68);
  return;
}

// function: _ZN4ListIiEC2Ev
void List_int___List(struct List_int_* v70) {
bb71:
  struct List_int_* this72;
  this72 = v70;
  struct List_int_* t73 = this72;
  struct ListNode_int_* c74 = ((void*)0);
  t73->firstPtr = c74;
  struct ListNode_int_* c75 = ((void*)0);
  t73->lastPtr = c75;
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v76) {
bb77:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this78;
  char* __retval79;
  this78 = v76;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t80 = this78;
  char* r81 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t80);
  __retval79 = r81;
  char* t82 = __retval79;
  return t82;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v83) {
bb84:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this85;
  unsigned long __retval86;
  unsigned long __sz87;
  this85 = v83;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t88 = this85;
  unsigned long t89 = t88->_M_string_length;
  __sz87 = t89;
    unsigned long t90 = __sz87;
    unsigned long r91 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t88);
    _Bool c92 = ((t90 > r91)) ? 1 : 0;
    if (c92) {
      __builtin_unreachable();
    }
  unsigned long t93 = __sz87;
  __retval86 = t93;
  unsigned long t94 = __retval86;
  return t94;
}

// function: _ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(struct std__basic_ostream_char__std__char_traits_char__* v95, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v96) {
bb97:
  struct std__basic_ostream_char__std__char_traits_char__* __os98;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __str99;
  struct std__basic_ostream_char__std__char_traits_char__* __retval100;
  __os98 = v95;
  __str99 = v96;
  struct std__basic_ostream_char__std__char_traits_char__* t101 = __os98;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t102 = __str99;
  char* r103 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____data___const(t102);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t104 = __str99;
  unsigned long r105 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____size___const(t104);
  long cast106 = (long)r105;
  struct std__basic_ostream_char__std__char_traits_char__* r107 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t101, r103, cast106);
  __retval100 = r107;
  struct std__basic_ostream_char__std__char_traits_char__* t108 = __retval100;
  return t108;
}

// function: _ZN8ListNodeIiEC2ERKi
void ListNode_int___ListNode(struct ListNode_int_* v109, int* v110) {
bb111:
  struct ListNode_int_* this112;
  int* info113;
  this112 = v109;
  info113 = v110;
  struct ListNode_int_* t114 = this112;
  int* t115 = info113;
  int t116 = *t115;
  t114->data = t116;
  struct ListNode_int_* c117 = ((void*)0);
  t114->nextPtr = c117;
  return;
}

// function: _ZN4ListIiE10getNewNodeERKi
struct ListNode_int_* List_int___getNewNode(struct List_int_* v118, int* v119) {
bb120:
  struct List_int_* this121;
  int* value122;
  struct ListNode_int_* __retval123;
  struct ListNode_int_* __new_result124;
  this121 = v118;
  value122 = v119;
  struct List_int_* t125 = this121;
  unsigned long c126 = 16;
  void* r127 = operator_new(c126);
    struct ListNode_int_* cast128 = (struct ListNode_int_*)r127;
    __new_result124 = cast128;
    int* t129 = value122;
    ListNode_int___ListNode(cast128, t129);
  struct ListNode_int_* t130 = __new_result124;
  __retval123 = t130;
  struct ListNode_int_* t131 = __retval123;
  return t131;
}

// function: _ZN4ListIiE13insertAtFrontERKi
void List_int___insertAtFront(struct List_int_* v132, int* v133) {
bb134:
  struct List_int_* this135;
  int* value136;
  struct ListNode_int_* newPtr137;
  this135 = v132;
  value136 = v133;
  struct List_int_* t138 = this135;
  int* t139 = value136;
  struct ListNode_int_* r140 = List_int___getNewNode(t138, t139);
  newPtr137 = r140;
    _Bool r141 = List_int___isEmpty___const(t138);
    if (r141) {
      struct ListNode_int_* t142 = newPtr137;
      t138->lastPtr = t142;
      t138->firstPtr = t142;
    } else {
      struct ListNode_int_* t143 = t138->firstPtr;
      struct ListNode_int_* t144 = newPtr137;
      t144->nextPtr = t143;
      struct ListNode_int_* t145 = newPtr137;
      t138->firstPtr = t145;
    }
  return;
}

// function: _ZNK4ListIiE5printEv
void List_int___print___const(struct List_int_* v146) {
bb147:
  struct List_int_* this148;
  struct ListNode_int_* currentPtr149;
  this148 = v146;
  struct List_int_* t150 = this148;
    _Bool r151 = List_int___isEmpty___const(t150);
    if (r151) {
      char* cast152 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* r153 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast152);
      return;
    }
  struct ListNode_int_* t154 = t150->firstPtr;
  currentPtr149 = t154;
  char* cast155 = (char*)&(_str_20);
  struct std__basic_ostream_char__std__char_traits_char__* r156 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast155);
    while (1) {
      struct ListNode_int_* t157 = currentPtr149;
      struct ListNode_int_* c158 = ((void*)0);
      _Bool c159 = ((t157 != c158)) ? 1 : 0;
      if (!c159) break;
        struct ListNode_int_* t160 = currentPtr149;
        int t161 = t160->data;
        struct std__basic_ostream_char__std__char_traits_char__* r162 = std__ostream__operator___2(&_ZSt4cout, t161);
        char c163 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r164 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r162, c163);
        struct ListNode_int_* t165 = currentPtr149;
        struct ListNode_int_* t166 = t165->nextPtr;
        currentPtr149 = t166;
    }
  char* cast167 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* r168 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast167);
  return;
}

// function: _ZN4ListIiE12insertAtBackERKi
void List_int___insertAtBack(struct List_int_* v169, int* v170) {
bb171:
  struct List_int_* this172;
  int* value173;
  struct ListNode_int_* newPtr174;
  this172 = v169;
  value173 = v170;
  struct List_int_* t175 = this172;
  int* t176 = value173;
  struct ListNode_int_* r177 = List_int___getNewNode(t175, t176);
  newPtr174 = r177;
    _Bool r178 = List_int___isEmpty___const(t175);
    if (r178) {
      struct ListNode_int_* t179 = newPtr174;
      t175->lastPtr = t179;
      t175->firstPtr = t179;
    } else {
      struct ListNode_int_* t180 = newPtr174;
      struct ListNode_int_* t181 = t175->lastPtr;
      t181->nextPtr = t180;
      struct ListNode_int_* t182 = newPtr174;
      t175->lastPtr = t182;
    }
  return;
}

// function: _ZN4ListIiE15removeFromFrontERi
_Bool List_int___removeFromFront(struct List_int_* v183, int* v184) {
bb185:
  struct List_int_* this186;
  int* value187;
  _Bool __retval188;
  this186 = v183;
  value187 = v184;
  struct List_int_* t189 = this186;
    _Bool r190 = List_int___isEmpty___const(t189);
    if (r190) {
      _Bool c191 = 0;
      __retval188 = c191;
      _Bool t192 = __retval188;
      return t192;
    } else {
      struct ListNode_int_* tempPtr193;
      struct ListNode_int_* t194 = t189->firstPtr;
      tempPtr193 = t194;
        struct ListNode_int_* t195 = t189->firstPtr;
        struct ListNode_int_* t196 = t189->lastPtr;
        _Bool c197 = ((t195 == t196)) ? 1 : 0;
        if (c197) {
          struct ListNode_int_* c198 = ((void*)0);
          t189->lastPtr = c198;
          t189->firstPtr = c198;
        } else {
          struct ListNode_int_* t199 = t189->firstPtr;
          struct ListNode_int_* t200 = t199->nextPtr;
          t189->firstPtr = t200;
        }
      struct ListNode_int_* t201 = tempPtr193;
      int t202 = t201->data;
      int* t203 = value187;
      *t203 = t202;
      struct ListNode_int_* t204 = tempPtr193;
      struct ListNode_int_* c205 = ((void*)0);
      _Bool c206 = ((t204 != c205)) ? 1 : 0;
      if (c206) {
        {
          void* cast207 = (void*)t204;
          unsigned long c208 = 16;
          operator_delete_2(cast207, c208);
        }
      }
      _Bool c209 = 1;
      __retval188 = c209;
      _Bool t210 = __retval188;
      return t210;
    }
  abort();
}

// function: _ZN4ListIiE14removeFromBackERi
_Bool List_int___removeFromBack(struct List_int_* v211, int* v212) {
bb213:
  struct List_int_* this214;
  int* value215;
  _Bool __retval216;
  this214 = v211;
  value215 = v212;
  struct List_int_* t217 = this214;
    _Bool r218 = List_int___isEmpty___const(t217);
    if (r218) {
      _Bool c219 = 0;
      __retval216 = c219;
      _Bool t220 = __retval216;
      return t220;
    } else {
      struct ListNode_int_* tempPtr221;
      struct ListNode_int_* t222 = t217->lastPtr;
      tempPtr221 = t222;
        struct ListNode_int_* t223 = t217->firstPtr;
        struct ListNode_int_* t224 = t217->lastPtr;
        _Bool c225 = ((t223 == t224)) ? 1 : 0;
        if (c225) {
          struct ListNode_int_* c226 = ((void*)0);
          t217->lastPtr = c226;
          t217->firstPtr = c226;
        } else {
          struct ListNode_int_* currentPtr227;
          struct ListNode_int_* t228 = t217->firstPtr;
          currentPtr227 = t228;
            while (1) {
              struct ListNode_int_* t229 = currentPtr227;
              struct ListNode_int_* t230 = t229->nextPtr;
              struct ListNode_int_* t231 = t217->lastPtr;
              _Bool c232 = ((t230 != t231)) ? 1 : 0;
              if (!c232) break;
              struct ListNode_int_* t233 = currentPtr227;
              struct ListNode_int_* t234 = t233->nextPtr;
              currentPtr227 = t234;
            }
          struct ListNode_int_* t235 = currentPtr227;
          t217->lastPtr = t235;
          struct ListNode_int_* c236 = ((void*)0);
          struct ListNode_int_* t237 = currentPtr227;
          t237->nextPtr = c236;
        }
      struct ListNode_int_* t238 = tempPtr221;
      int t239 = t238->data;
      int* t240 = value215;
      *t240 = t239;
      struct ListNode_int_* t241 = tempPtr221;
      struct ListNode_int_* c242 = ((void*)0);
      _Bool c243 = ((t241 != c242)) ? 1 : 0;
      if (c243) {
        {
          void* cast244 = (void*)t241;
          unsigned long c245 = 16;
          operator_delete_2(cast244, c245);
        }
      }
      _Bool c246 = 1;
      __retval216 = c246;
      _Bool t247 = __retval216;
      return t247;
    }
  abort();
}

// function: _Z8testListIiEvR4ListIT_ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
void void_testList_int_(struct List_int_* v248, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v249) {
bb250:
  struct List_int_* listObject251;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* typeName252;
  int choice253;
  int value254;
  listObject251 = v248;
  typeName252 = v249;
  char* cast255 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* r256 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast255);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t257 = typeName252;
  struct std__basic_ostream_char__std__char_traits_char__* r258 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r256, t257);
  char* cast259 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* r260 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r258, cast259);
  instructions();
    do {
        char* cast261 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r262 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast261);
        struct std__basic_istream_char__std__char_traits_char__* r263 = std__istream__operator___2(&_ZSt3cin, &choice253);
          int t264 = choice253;
          switch (t264) {
          case 1:
            char* cast265 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* r266 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast265);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t267 = typeName252;
            struct std__basic_ostream_char__std__char_traits_char__* r268 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r266, t267);
            char* cast269 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* r270 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r268, cast269);
            struct std__basic_istream_char__std__char_traits_char__* r271 = std__istream__operator___2(&_ZSt3cin, &value254);
            struct List_int_* t272 = listObject251;
            List_int___insertAtFront(t272, &value254);
            struct List_int_* t273 = listObject251;
            List_int___print___const(t273);
            break;
          case 2:
            char* cast274 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* r275 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast274);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t276 = typeName252;
            struct std__basic_ostream_char__std__char_traits_char__* r277 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r275, t276);
            char* cast278 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* r279 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r277, cast278);
            struct std__basic_istream_char__std__char_traits_char__* r280 = std__istream__operator___2(&_ZSt3cin, &value254);
            struct List_int_* t281 = listObject251;
            List_int___insertAtBack(t281, &value254);
            struct List_int_* t282 = listObject251;
            List_int___print___const(t282);
            break;
          case 3:
              struct List_int_* t283 = listObject251;
              _Bool r284 = List_int___removeFromFront(t283, &value254);
              if (r284) {
                int t285 = value254;
                struct std__basic_ostream_char__std__char_traits_char__* r286 = std__ostream__operator___2(&_ZSt4cout, t285);
                char* cast287 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* r288 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r286, cast287);
              }
            struct List_int_* t289 = listObject251;
            List_int___print___const(t289);
            break;
          case 4:
              struct List_int_* t290 = listObject251;
              _Bool r291 = List_int___removeFromBack(t290, &value254);
              if (r291) {
                int t292 = value254;
                struct std__basic_ostream_char__std__char_traits_char__* r293 = std__ostream__operator___2(&_ZSt4cout, t292);
                char* cast294 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* r295 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r293, cast294);
              }
            struct List_int_* t296 = listObject251;
            List_int___print___const(t296);
            break;
          }
      int t297 = choice253;
      int c298 = 5;
      _Bool c299 = ((t297 != c298)) ? 1 : 0;
      if (!c299) break;
    } while (1);
  char* cast300 = (char*)&(_str_18);
  struct std__basic_ostream_char__std__char_traits_char__* r301 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast300);
  return;
}

// function: _ZNSaIcEC2Ev
void std__allocator_char___allocator_2(struct std__allocator_char_* v302) {
bb303:
  struct std__allocator_char_* this304;
  this304 = v302;
  struct std__allocator_char_* t305 = this304;
  struct std____new_allocator_char_* base306 = (struct std____new_allocator_char_*)((char *)t305 + 0);
  std____new_allocator_char_____new_allocator_2(base306);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEPKcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v307, char* v308, struct std__allocator_char_* v309) {
bb310:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this311;
  char* __s312;
  struct std__allocator_char_* __a313;
  char* __end314;
  struct std__forward_iterator_tag agg_tmp0315;
  this311 = v307;
  __s312 = v308;
  __a313 = v309;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t316 = this311;
  char* r317 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(t316);
  struct std__allocator_char_* t318 = __a313;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(&t316->_M_dataplus, r317, t318);
      char* t319 = __s312;
      char* c320 = ((void*)0);
      _Bool c321 = ((t319 == c320)) ? 1 : 0;
      if (c321) {
        char* cast322 = (char*)&(_str_8);
        std____throw_logic_error(cast322);
      }
    char* t323 = __s312;
    char* t324 = __s312;
    unsigned long r325 = std__char_traits_char___length(t324);
    char* ptr326 = &(t323)[r325];
    __end314 = ptr326;
    char* t327 = __s312;
    char* t328 = __end314;
    struct std__forward_iterator_tag t329 = agg_tmp0315;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(t316, t327, t328, t329);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v330) {
bb331:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this332;
  this332 = v330;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t333 = this332;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t333);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(&t333->_M_dataplus);
  }
  return;
}

// function: _ZNSaIcED2Ev
void std__allocator_char____allocator(struct std__allocator_char_* v334) {
bb335:
  struct std__allocator_char_* this336;
  this336 = v334;
  struct std__allocator_char_* t337 = this336;
  return;
}

// function: _ZN4ListIdEC2Ev
void List_double___List(struct List_double_* v338) {
bb339:
  struct List_double_* this340;
  this340 = v338;
  struct List_double_* t341 = this340;
  struct ListNode_double_* c342 = ((void*)0);
  t341->firstPtr = c342;
  struct ListNode_double_* c343 = ((void*)0);
  t341->lastPtr = c343;
  return;
}

// function: _ZNSirsERd
struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* v344, double* v345) {
bb346:
  struct std__basic_istream_char__std__char_traits_char__* this347;
  double* __f348;
  struct std__basic_istream_char__std__char_traits_char__* __retval349;
  this347 = v344;
  __f348 = v345;
  struct std__basic_istream_char__std__char_traits_char__* t350 = this347;
  double* t351 = __f348;
  struct std__basic_istream_char__std__char_traits_char__* r352 = std__istream__std__istream___M_extract_double_(t350, t351);
  __retval349 = r352;
  struct std__basic_istream_char__std__char_traits_char__* t353 = __retval349;
  return t353;
}

// function: _ZN8ListNodeIdEC2ERKd
void ListNode_double___ListNode(struct ListNode_double_* v354, double* v355) {
bb356:
  struct ListNode_double_* this357;
  double* info358;
  this357 = v354;
  info358 = v355;
  struct ListNode_double_* t359 = this357;
  double* t360 = info358;
  double t361 = *t360;
  t359->data = t361;
  struct ListNode_double_* c362 = ((void*)0);
  t359->nextPtr = c362;
  return;
}

// function: _ZN4ListIdE10getNewNodeERKd
struct ListNode_double_* List_double___getNewNode(struct List_double_* v363, double* v364) {
bb365:
  struct List_double_* this366;
  double* value367;
  struct ListNode_double_* __retval368;
  struct ListNode_double_* __new_result369;
  this366 = v363;
  value367 = v364;
  struct List_double_* t370 = this366;
  unsigned long c371 = 16;
  void* r372 = operator_new(c371);
    struct ListNode_double_* cast373 = (struct ListNode_double_*)r372;
    __new_result369 = cast373;
    double* t374 = value367;
    ListNode_double___ListNode(cast373, t374);
  struct ListNode_double_* t375 = __new_result369;
  __retval368 = t375;
  struct ListNode_double_* t376 = __retval368;
  return t376;
}

// function: _ZN4ListIdE13insertAtFrontERKd
void List_double___insertAtFront(struct List_double_* v377, double* v378) {
bb379:
  struct List_double_* this380;
  double* value381;
  struct ListNode_double_* newPtr382;
  this380 = v377;
  value381 = v378;
  struct List_double_* t383 = this380;
  double* t384 = value381;
  struct ListNode_double_* r385 = List_double___getNewNode(t383, t384);
  newPtr382 = r385;
    _Bool r386 = List_double___isEmpty___const(t383);
    if (r386) {
      struct ListNode_double_* t387 = newPtr382;
      t383->lastPtr = t387;
      t383->firstPtr = t387;
    } else {
      struct ListNode_double_* t388 = t383->firstPtr;
      struct ListNode_double_* t389 = newPtr382;
      t389->nextPtr = t388;
      struct ListNode_double_* t390 = newPtr382;
      t383->firstPtr = t390;
    }
  return;
}

// function: _ZNK4ListIdE5printEv
void List_double___print___const(struct List_double_* v391) {
bb392:
  struct List_double_* this393;
  struct ListNode_double_* currentPtr394;
  this393 = v391;
  struct List_double_* t395 = this393;
    _Bool r396 = List_double___isEmpty___const(t395);
    if (r396) {
      char* cast397 = (char*)&(_str_19);
      struct std__basic_ostream_char__std__char_traits_char__* r398 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast397);
      return;
    }
  struct ListNode_double_* t399 = t395->firstPtr;
  currentPtr394 = t399;
  char* cast400 = (char*)&(_str_20);
  struct std__basic_ostream_char__std__char_traits_char__* r401 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast400);
    while (1) {
      struct ListNode_double_* t402 = currentPtr394;
      struct ListNode_double_* c403 = ((void*)0);
      _Bool c404 = ((t402 != c403)) ? 1 : 0;
      if (!c404) break;
        struct ListNode_double_* t405 = currentPtr394;
        double t406 = t405->data;
        struct std__basic_ostream_char__std__char_traits_char__* r407 = std__ostream__operator__(&_ZSt4cout, t406);
        char c408 = 32;
        struct std__basic_ostream_char__std__char_traits_char__* r409 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r407, c408);
        struct ListNode_double_* t410 = currentPtr394;
        struct ListNode_double_* t411 = t410->nextPtr;
        currentPtr394 = t411;
    }
  char* cast412 = (char*)&(_str_21);
  struct std__basic_ostream_char__std__char_traits_char__* r413 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast412);
  return;
}

// function: _ZN4ListIdE12insertAtBackERKd
void List_double___insertAtBack(struct List_double_* v414, double* v415) {
bb416:
  struct List_double_* this417;
  double* value418;
  struct ListNode_double_* newPtr419;
  this417 = v414;
  value418 = v415;
  struct List_double_* t420 = this417;
  double* t421 = value418;
  struct ListNode_double_* r422 = List_double___getNewNode(t420, t421);
  newPtr419 = r422;
    _Bool r423 = List_double___isEmpty___const(t420);
    if (r423) {
      struct ListNode_double_* t424 = newPtr419;
      t420->lastPtr = t424;
      t420->firstPtr = t424;
    } else {
      struct ListNode_double_* t425 = newPtr419;
      struct ListNode_double_* t426 = t420->lastPtr;
      t426->nextPtr = t425;
      struct ListNode_double_* t427 = newPtr419;
      t420->lastPtr = t427;
    }
  return;
}

// function: _ZN4ListIdE15removeFromFrontERd
_Bool List_double___removeFromFront(struct List_double_* v428, double* v429) {
bb430:
  struct List_double_* this431;
  double* value432;
  _Bool __retval433;
  this431 = v428;
  value432 = v429;
  struct List_double_* t434 = this431;
    _Bool r435 = List_double___isEmpty___const(t434);
    if (r435) {
      _Bool c436 = 0;
      __retval433 = c436;
      _Bool t437 = __retval433;
      return t437;
    } else {
      struct ListNode_double_* tempPtr438;
      struct ListNode_double_* t439 = t434->firstPtr;
      tempPtr438 = t439;
        struct ListNode_double_* t440 = t434->firstPtr;
        struct ListNode_double_* t441 = t434->lastPtr;
        _Bool c442 = ((t440 == t441)) ? 1 : 0;
        if (c442) {
          struct ListNode_double_* c443 = ((void*)0);
          t434->lastPtr = c443;
          t434->firstPtr = c443;
        } else {
          struct ListNode_double_* t444 = t434->firstPtr;
          struct ListNode_double_* t445 = t444->nextPtr;
          t434->firstPtr = t445;
        }
      struct ListNode_double_* t446 = tempPtr438;
      double t447 = t446->data;
      double* t448 = value432;
      *t448 = t447;
      struct ListNode_double_* t449 = tempPtr438;
      struct ListNode_double_* c450 = ((void*)0);
      _Bool c451 = ((t449 != c450)) ? 1 : 0;
      if (c451) {
        {
          void* cast452 = (void*)t449;
          unsigned long c453 = 16;
          operator_delete_2(cast452, c453);
        }
      }
      _Bool c454 = 1;
      __retval433 = c454;
      _Bool t455 = __retval433;
      return t455;
    }
  abort();
}

// function: _ZN4ListIdE14removeFromBackERd
_Bool List_double___removeFromBack(struct List_double_* v456, double* v457) {
bb458:
  struct List_double_* this459;
  double* value460;
  _Bool __retval461;
  this459 = v456;
  value460 = v457;
  struct List_double_* t462 = this459;
    _Bool r463 = List_double___isEmpty___const(t462);
    if (r463) {
      _Bool c464 = 0;
      __retval461 = c464;
      _Bool t465 = __retval461;
      return t465;
    } else {
      struct ListNode_double_* tempPtr466;
      struct ListNode_double_* t467 = t462->lastPtr;
      tempPtr466 = t467;
        struct ListNode_double_* t468 = t462->firstPtr;
        struct ListNode_double_* t469 = t462->lastPtr;
        _Bool c470 = ((t468 == t469)) ? 1 : 0;
        if (c470) {
          struct ListNode_double_* c471 = ((void*)0);
          t462->lastPtr = c471;
          t462->firstPtr = c471;
        } else {
          struct ListNode_double_* currentPtr472;
          struct ListNode_double_* t473 = t462->firstPtr;
          currentPtr472 = t473;
            while (1) {
              struct ListNode_double_* t474 = currentPtr472;
              struct ListNode_double_* t475 = t474->nextPtr;
              struct ListNode_double_* t476 = t462->lastPtr;
              _Bool c477 = ((t475 != t476)) ? 1 : 0;
              if (!c477) break;
              struct ListNode_double_* t478 = currentPtr472;
              struct ListNode_double_* t479 = t478->nextPtr;
              currentPtr472 = t479;
            }
          struct ListNode_double_* t480 = currentPtr472;
          t462->lastPtr = t480;
          struct ListNode_double_* c481 = ((void*)0);
          struct ListNode_double_* t482 = currentPtr472;
          t482->nextPtr = c481;
        }
      struct ListNode_double_* t483 = tempPtr466;
      double t484 = t483->data;
      double* t485 = value460;
      *t485 = t484;
      struct ListNode_double_* t486 = tempPtr466;
      struct ListNode_double_* c487 = ((void*)0);
      _Bool c488 = ((t486 != c487)) ? 1 : 0;
      if (c488) {
        {
          void* cast489 = (void*)t486;
          unsigned long c490 = 16;
          operator_delete_2(cast489, c490);
        }
      }
      _Bool c491 = 1;
      __retval461 = c491;
      _Bool t492 = __retval461;
      return t492;
    }
  abort();
}

// function: _Z8testListIdEvR4ListIT_ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
void void_testList_double_(struct List_double_* v493, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v494) {
bb495:
  struct List_double_* listObject496;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* typeName497;
  int choice498;
  double value499;
  listObject496 = v493;
  typeName497 = v494;
  char* cast500 = (char*)&(_str_12);
  struct std__basic_ostream_char__std__char_traits_char__* r501 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast500);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t502 = typeName497;
  struct std__basic_ostream_char__std__char_traits_char__* r503 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r501, t502);
  char* cast504 = (char*)&(_str_13);
  struct std__basic_ostream_char__std__char_traits_char__* r505 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r503, cast504);
  instructions();
    do {
        char* cast506 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r507 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast506);
        struct std__basic_istream_char__std__char_traits_char__* r508 = std__istream__operator___2(&_ZSt3cin, &choice498);
          int t509 = choice498;
          switch (t509) {
          case 1:
            char* cast510 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* r511 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast510);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t512 = typeName497;
            struct std__basic_ostream_char__std__char_traits_char__* r513 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r511, t512);
            char* cast514 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* r515 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r513, cast514);
            struct std__basic_istream_char__std__char_traits_char__* r516 = std__istream__operator__(&_ZSt3cin, &value499);
            struct List_double_* t517 = listObject496;
            List_double___insertAtFront(t517, &value499);
            struct List_double_* t518 = listObject496;
            List_double___print___const(t518);
            break;
          case 2:
            char* cast519 = (char*)&(_str_15);
            struct std__basic_ostream_char__std__char_traits_char__* r520 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast519);
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t521 = typeName497;
            struct std__basic_ostream_char__std__char_traits_char__* r522 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___std__allocator_char___(r520, t521);
            char* cast523 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* r524 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r522, cast523);
            struct std__basic_istream_char__std__char_traits_char__* r525 = std__istream__operator__(&_ZSt3cin, &value499);
            struct List_double_* t526 = listObject496;
            List_double___insertAtBack(t526, &value499);
            struct List_double_* t527 = listObject496;
            List_double___print___const(t527);
            break;
          case 3:
              struct List_double_* t528 = listObject496;
              _Bool r529 = List_double___removeFromFront(t528, &value499);
              if (r529) {
                double t530 = value499;
                struct std__basic_ostream_char__std__char_traits_char__* r531 = std__ostream__operator__(&_ZSt4cout, t530);
                char* cast532 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* r533 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r531, cast532);
              }
            struct List_double_* t534 = listObject496;
            List_double___print___const(t534);
            break;
          case 4:
              struct List_double_* t535 = listObject496;
              _Bool r536 = List_double___removeFromBack(t535, &value499);
              if (r536) {
                double t537 = value499;
                struct std__basic_ostream_char__std__char_traits_char__* r538 = std__ostream__operator__(&_ZSt4cout, t537);
                char* cast539 = (char*)&(_str_17);
                struct std__basic_ostream_char__std__char_traits_char__* r540 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r538, cast539);
              }
            struct List_double_* t541 = listObject496;
            List_double___print___const(t541);
            break;
          }
      int t542 = choice498;
      int c543 = 5;
      _Bool c544 = ((t542 != c543)) ? 1 : 0;
      if (!c544) break;
    } while (1);
  char* cast545 = (char*)&(_str_18);
  struct std__basic_ostream_char__std__char_traits_char__* r546 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast545);
  return;
}

// function: _ZN4ListIdED2Ev
void List_double____List(struct List_double_* v547) {
bb548:
  struct List_double_* this549;
  this549 = v547;
  struct List_double_* t550 = this549;
    _Bool r551 = List_double___isEmpty___const(t550);
    _Bool u552 = !r551;
    if (u552) {
      struct ListNode_double_* currentPtr553;
      struct ListNode_double_* tempPtr554;
      char* cast555 = (char*)&(_str_10);
      struct std__basic_ostream_char__std__char_traits_char__* r556 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast555);
      struct ListNode_double_* t557 = t550->firstPtr;
      currentPtr553 = t557;
        while (1) {
          struct ListNode_double_* t558 = currentPtr553;
          struct ListNode_double_* c559 = ((void*)0);
          _Bool c560 = ((t558 != c559)) ? 1 : 0;
          if (!c560) break;
            struct ListNode_double_* t561 = currentPtr553;
            tempPtr554 = t561;
            struct ListNode_double_* t562 = tempPtr554;
            double t563 = t562->data;
            struct std__basic_ostream_char__std__char_traits_char__* r564 = std__ostream__operator__(&_ZSt4cout, t563);
            char c565 = 10;
            struct std__basic_ostream_char__std__char_traits_char__* r566 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r564, c565);
            struct ListNode_double_* t567 = currentPtr553;
            struct ListNode_double_* t568 = t567->nextPtr;
            currentPtr553 = t568;
            struct ListNode_double_* t569 = tempPtr554;
            struct ListNode_double_* c570 = ((void*)0);
            _Bool c571 = ((t569 != c570)) ? 1 : 0;
            if (c571) {
              {
                void* cast572 = (void*)t569;
                unsigned long c573 = 16;
                operator_delete_2(cast572, c573);
              }
            }
        }
    }
  char* cast574 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* r575 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast574);
  return;
}

// function: _ZN4ListIiED2Ev
void List_int____List(struct List_int_* v576) {
bb577:
  struct List_int_* this578;
  this578 = v576;
  struct List_int_* t579 = this578;
    _Bool r580 = List_int___isEmpty___const(t579);
    _Bool u581 = !r580;
    if (u581) {
      struct ListNode_int_* currentPtr582;
      struct ListNode_int_* tempPtr583;
      char* cast584 = (char*)&(_str_10);
      struct std__basic_ostream_char__std__char_traits_char__* r585 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast584);
      struct ListNode_int_* t586 = t579->firstPtr;
      currentPtr582 = t586;
        while (1) {
          struct ListNode_int_* t587 = currentPtr582;
          struct ListNode_int_* c588 = ((void*)0);
          _Bool c589 = ((t587 != c588)) ? 1 : 0;
          if (!c589) break;
            struct ListNode_int_* t590 = currentPtr582;
            tempPtr583 = t590;
            struct ListNode_int_* t591 = tempPtr583;
            int t592 = t591->data;
            struct std__basic_ostream_char__std__char_traits_char__* r593 = std__ostream__operator___2(&_ZSt4cout, t592);
            char c594 = 10;
            struct std__basic_ostream_char__std__char_traits_char__* r595 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r593, c594);
            struct ListNode_int_* t596 = currentPtr582;
            struct ListNode_int_* t597 = t596->nextPtr;
            currentPtr582 = t597;
            struct ListNode_int_* t598 = tempPtr583;
            struct ListNode_int_* c599 = ((void*)0);
            _Bool c600 = ((t598 != c599)) ? 1 : 0;
            if (c600) {
              {
                void* cast601 = (void*)t598;
                unsigned long c602 = 16;
                operator_delete_2(cast601, c602);
              }
            }
        }
    }
  char* cast603 = (char*)&(_str_11);
  struct std__basic_ostream_char__std__char_traits_char__* r604 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast603);
  return;
}

// function: main
int main() {
bb605:
  int __retval606;
  struct List_int_ integerList607;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp0608;
  struct std__allocator_char_ ref_tmp1609;
  struct List_double_ doubleList610;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp2611;
  struct std__allocator_char_ ref_tmp3612;
  int c613 = 0;
  __retval606 = c613;
  List_int___List(&integerList607);
    char* cast614 = (char*)&(_str_6);
    std__allocator_char___allocator_2(&ref_tmp1609);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp0608, cast614, &ref_tmp1609);
        void_testList_int_(&integerList607, &ref_tmp0608);
      {
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp0608);
      }
    {
      std__allocator_char____allocator(&ref_tmp1609);
    }
    List_double___List(&doubleList610);
      char* cast615 = (char*)&(_str_7);
      std__allocator_char___allocator_2(&ref_tmp3612);
        std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____basic_string_std__allocator_char___(&ref_tmp2611, cast615, &ref_tmp3612);
          void_testList_double_(&doubleList610, &ref_tmp2611);
        {
          std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______basic_string(&ref_tmp2611);
        }
      {
        std__allocator_char____allocator(&ref_tmp3612);
      }
      int c616 = 0;
      __retval606 = c616;
      int t617 = __retval606;
      int ret_val618 = t617;
      {
        List_double____List(&doubleList610);
      }
      {
        List_int____List(&integerList607);
      }
      return ret_val618;
  int t619 = __retval606;
  return t619;
}

// function: _ZNSt15__new_allocatorIcEC2Ev
void std____new_allocator_char_____new_allocator_2(struct std____new_allocator_char_* v620) {
bb621:
  struct std____new_allocator_char_* this622;
  this622 = v620;
  struct std____new_allocator_char_* t623 = this622;
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPccLb0EE10pointer_toERc
char* std____ptr_traits_ptr_to_char___char__false___pointer_to(char* v624) {
bb625:
  char* __r626;
  char* __retval627;
  __r626 = v624;
  char* t628 = __r626;
  __retval627 = t628;
  char* t629 = __retval627;
  return t629;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v630) {
bb631:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this632;
  char* __retval633;
  this632 = v630;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t634 = this632;
  char* cast635 = (char*)&(t634->field2._M_local_buf);
  char* r636 = std____ptr_traits_ptr_to_char___char__false___pointer_to(cast635);
  __retval633 = r636;
  char* t637 = __retval633;
  return t637;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC2EPcRKS3_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider___Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v638, char* v639, struct std__allocator_char_* v640) {
bb641:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this642;
  char* __dat643;
  struct std__allocator_char_* __a644;
  this642 = v638;
  __dat643 = v639;
  __a644 = v640;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t645 = this642;
  struct std__allocator_char_* base646 = (struct std__allocator_char_*)((char *)t645 + 0);
  struct std__allocator_char_* t647 = __a644;
  std__allocator_char___allocator(base646, t647);
    char* t648 = __dat643;
    t645->_M_p = t648;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb649:
  _Bool __retval650;
    _Bool c651 = 0;
    __retval650 = c651;
    _Bool t652 = __retval650;
    return t652;
  abort();
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v653, char* v654) {
bb655:
  char* __c1656;
  char* __c2657;
  _Bool __retval658;
  __c1656 = v653;
  __c2657 = v654;
  char* t659 = __c1656;
  char t660 = *t659;
  int cast661 = (int)t660;
  char* t662 = __c2657;
  char t663 = *t662;
  int cast664 = (int)t663;
  _Bool c665 = ((cast661 == cast664)) ? 1 : 0;
  __retval658 = c665;
  _Bool t666 = __retval658;
  return t666;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v667) {
bb668:
  char* __p669;
  unsigned long __retval670;
  unsigned long __i671;
  __p669 = v667;
  unsigned long c672 = 0;
  __i671 = c672;
    char ref_tmp0673;
    while (1) {
      unsigned long t674 = __i671;
      char* t675 = __p669;
      char* ptr676 = &(t675)[t674];
      char c677 = 0;
      ref_tmp0673 = c677;
      _Bool r678 = __gnu_cxx__char_traits_char___eq(ptr676, &ref_tmp0673);
      _Bool u679 = !r678;
      if (!u679) break;
      unsigned long t680 = __i671;
      unsigned long u681 = t680 + 1;
      __i671 = u681;
    }
  unsigned long t682 = __i671;
  __retval670 = t682;
  unsigned long t683 = __retval670;
  return t683;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v684) {
bb685:
  char* __s686;
  unsigned long __retval687;
  __s686 = v684;
    _Bool r688 = std____is_constant_evaluated();
    if (r688) {
      char* t689 = __s686;
      unsigned long r690 = __gnu_cxx__char_traits_char___length(t689);
      __retval687 = r690;
      unsigned long t691 = __retval687;
      return t691;
    }
  char* t692 = __s686;
  unsigned long r693 = strlen(t692);
  __retval687 = r693;
  unsigned long t694 = __retval687;
  return t694;
}

// function: _ZSt10__distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_char_const____difference_type_std____distance_char_const__(char* v695, char* v696, struct std__random_access_iterator_tag v697) {
bb698:
  char* __first699;
  char* __last700;
  struct std__random_access_iterator_tag unnamed701;
  long __retval702;
  __first699 = v695;
  __last700 = v696;
  unnamed701 = v697;
  char* t703 = __last700;
  char* t704 = __first699;
  long diff705 = t703 - t704;
  __retval702 = diff705;
  long t706 = __retval702;
  return t706;
}

// function: _ZSt19__iterator_categoryIPKcENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(char** v707) {
bb708:
  char** unnamed709;
  struct std__random_access_iterator_tag __retval710;
  unnamed709 = v707;
  struct std__random_access_iterator_tag t711 = __retval710;
  return t711;
}

// function: _ZSt8distanceIPKcENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_char_const____difference_type_std__distance_char_const__(char* v712, char* v713) {
bb714:
  char* __first715;
  char* __last716;
  long __retval717;
  struct std__random_access_iterator_tag agg_tmp0718;
  __first715 = v712;
  __last716 = v713;
  char* t719 = __first715;
  char* t720 = __last716;
  struct std__random_access_iterator_tag r721 = std__iterator_traits_char_const____iterator_category_std____iterator_category_char_const__(&__first715);
  agg_tmp0718 = r721;
  struct std__random_access_iterator_tag t722 = agg_tmp0718;
  long r723 = std__iterator_traits_char_const____difference_type_std____distance_char_const__(t719, t720, t722);
  __retval717 = r723;
  long t724 = __retval717;
  return t724;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v725, char* v726) {
bb727:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this728;
  char* __p729;
  this728 = v725;
  __p729 = v726;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t730 = this728;
  char* t731 = __p729;
  t730->_M_dataplus._M_p = t731;
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE8max_sizeERKS0_
unsigned long std__allocator_traits_std__allocator_char_____max_size(struct std__allocator_char_* v732) {
bb733:
  struct std__allocator_char_* __a734;
  unsigned long __retval735;
  __a734 = v732;
  unsigned long c736 = -1;
  unsigned long c737 = 1;
  unsigned long b738 = c736 / c737;
  __retval735 = b738;
  unsigned long t739 = __retval735;
  return t739;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v740) {
bb741:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this742;
  struct std__allocator_char_* __retval743;
  this742 = v740;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t744 = this742;
  struct std__allocator_char_* base745 = (struct std__allocator_char_*)((char *)&(t744->_M_dataplus) + 0);
  __retval743 = base745;
  struct std__allocator_char_* t746 = __retval743;
  return t746;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v747, unsigned long* v748) {
bb749:
  unsigned long* __a750;
  unsigned long* __b751;
  unsigned long* __retval752;
  __a750 = v747;
  __b751 = v748;
    unsigned long* t753 = __b751;
    unsigned long t754 = *t753;
    unsigned long* t755 = __a750;
    unsigned long t756 = *t755;
    _Bool c757 = ((t754 < t756)) ? 1 : 0;
    if (c757) {
      unsigned long* t758 = __b751;
      __retval752 = t758;
      unsigned long* t759 = __retval752;
      return t759;
    }
  unsigned long* t760 = __a750;
  __retval752 = t760;
  unsigned long* t761 = __retval752;
  return t761;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE8max_sizeEv
unsigned long std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v762) {
bb763:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this764;
  unsigned long __retval765;
  unsigned long __diffmax766;
  unsigned long __allocmax767;
  this764 = v762;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t768 = this764;
  unsigned long c769 = 9223372036854775807;
  __diffmax766 = c769;
  struct std__allocator_char_* r770 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator___const(t768);
  unsigned long r771 = std__allocator_traits_std__allocator_char_____max_size(r770);
  __allocmax767 = r771;
  unsigned long* r772 = unsigned_long_const__std__min_unsigned_long_(&__diffmax766, &__allocmax767);
  unsigned long t773 = *r772;
  unsigned long c774 = 1;
  unsigned long b775 = t773 - c774;
  __retval765 = b775;
  unsigned long t776 = __retval765;
  return t776;
}

// function: _ZNKSt15__new_allocatorIcE11_M_max_sizeEv
unsigned long std____new_allocator_char____M_max_size___const(struct std____new_allocator_char_* v777) {
bb778:
  struct std____new_allocator_char_* this779;
  unsigned long __retval780;
  this779 = v777;
  struct std____new_allocator_char_* t781 = this779;
  unsigned long c782 = 9223372036854775807;
  unsigned long c783 = 1;
  unsigned long b784 = c782 / c783;
  __retval780 = b784;
  unsigned long t785 = __retval780;
  return t785;
}

// function: _ZNSt15__new_allocatorIcE8allocateEmPKv
char* std____new_allocator_char___allocate(struct std____new_allocator_char_* v786, unsigned long v787, void* v788) {
bb789:
  struct std____new_allocator_char_* this790;
  unsigned long __n791;
  void* unnamed792;
  char* __retval793;
  this790 = v786;
  __n791 = v787;
  unnamed792 = v788;
  struct std____new_allocator_char_* t794 = this790;
    unsigned long t795 = __n791;
    unsigned long r796 = std____new_allocator_char____M_max_size___const(t794);
    _Bool c797 = ((t795 > r796)) ? 1 : 0;
    if (c797) {
        unsigned long t798 = __n791;
        unsigned long c799 = -1;
        unsigned long c800 = 1;
        unsigned long b801 = c799 / c800;
        _Bool c802 = ((t798 > b801)) ? 1 : 0;
        if (c802) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c803 = 1;
    unsigned long c804 = 16;
    _Bool c805 = ((c803 > c804)) ? 1 : 0;
    if (c805) {
      unsigned long __al806;
      unsigned long c807 = 1;
      __al806 = c807;
      unsigned long t808 = __n791;
      unsigned long c809 = 1;
      unsigned long b810 = t808 * c809;
      unsigned long t811 = __al806;
      void* r812 = operator_new_2(b810, t811);
      char* cast813 = (char*)r812;
      __retval793 = cast813;
      char* t814 = __retval793;
      return t814;
    }
  unsigned long t815 = __n791;
  unsigned long c816 = 1;
  unsigned long b817 = t815 * c816;
  void* r818 = operator_new(b817);
  char* cast819 = (char*)r818;
  __retval793 = cast819;
  char* t820 = __retval793;
  return t820;
}

// function: _ZNSaIcE8allocateEm
char* std__allocator_char___allocate(struct std__allocator_char_* v821, unsigned long v822) {
bb823:
  struct std__allocator_char_* this824;
  unsigned long __n825;
  char* __retval826;
  this824 = v821;
  __n825 = v822;
  struct std__allocator_char_* t827 = this824;
    _Bool r828 = std____is_constant_evaluated();
    if (r828) {
        unsigned long t829 = __n825;
        unsigned long c830 = 1;
        unsigned long ovr831;
        _Bool ovf832 = __builtin_mul_overflow(t829, c830, &ovr831);
        __n825 = ovr831;
        if (ovf832) {
          std____throw_bad_array_new_length();
        }
      unsigned long t833 = __n825;
      void* r834 = operator_new(t833);
      char* cast835 = (char*)r834;
      __retval826 = cast835;
      char* t836 = __retval826;
      return t836;
    }
  struct std____new_allocator_char_* base837 = (struct std____new_allocator_char_*)((char *)t827 + 0);
  unsigned long t838 = __n825;
  void* c839 = ((void*)0);
  char* r840 = std____new_allocator_char___allocate(base837, t838, c839);
  __retval826 = r840;
  char* t841 = __retval826;
  return t841;
}

// function: _ZNSt16allocator_traitsISaIcEE8allocateERS0_m
char* std__allocator_traits_std__allocator_char_____allocate(struct std__allocator_char_* v842, unsigned long v843) {
bb844:
  struct std__allocator_char_* __a845;
  unsigned long __n846;
  char* __retval847;
  __a845 = v842;
  __n846 = v843;
  struct std__allocator_char_* t848 = __a845;
  unsigned long t849 = __n846;
  char* r850 = std__allocator_char___allocate(t848, t849);
  __retval847 = r850;
  char* t851 = __retval847;
  return t851;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_S_allocateERS3_m
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(struct std__allocator_char_* v852, unsigned long v853) {
bb854:
  struct std__allocator_char_* __a855;
  unsigned long __n856;
  char* __retval857;
  char* __p858;
  __a855 = v852;
  __n856 = v853;
  struct std__allocator_char_* t859 = __a855;
  unsigned long t860 = __n856;
  char* r861 = std__allocator_traits_std__allocator_char_____allocate(t859, t860);
  __p858 = r861;
  char* t862 = __p858;
  __retval857 = t862;
  char* t863 = __retval857;
  return t863;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE16_M_get_allocatorEv
struct std__allocator_char_* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v864) {
bb865:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this866;
  struct std__allocator_char_* __retval867;
  this866 = v864;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t868 = this866;
  struct std__allocator_char_* base869 = (struct std__allocator_char_*)((char *)&(t868->_M_dataplus) + 0);
  __retval867 = base869;
  struct std__allocator_char_* t870 = __retval867;
  return t870;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v871, unsigned long* v872, unsigned long v873) {
bb874:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this875;
  unsigned long* __capacity876;
  unsigned long __old_capacity877;
  char* __retval878;
  this875 = v871;
  __capacity876 = v872;
  __old_capacity877 = v873;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t879 = this875;
    unsigned long* t880 = __capacity876;
    unsigned long t881 = *t880;
    unsigned long r882 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t879);
    _Bool c883 = ((t881 > r882)) ? 1 : 0;
    if (c883) {
      char* cast884 = (char*)&(_str_9);
      std____throw_length_error(cast884);
    }
    unsigned long* t885 = __capacity876;
    unsigned long t886 = *t885;
    unsigned long t887 = __old_capacity877;
    _Bool c888 = ((t886 > t887)) ? 1 : 0;
    _Bool ternary889;
    if (c888) {
      unsigned long* t890 = __capacity876;
      unsigned long t891 = *t890;
      unsigned long c892 = 2;
      unsigned long t893 = __old_capacity877;
      unsigned long b894 = c892 * t893;
      _Bool c895 = ((t891 < b894)) ? 1 : 0;
      ternary889 = (_Bool)c895;
    } else {
      _Bool c896 = 0;
      ternary889 = (_Bool)c896;
    }
    if (ternary889) {
      unsigned long c897 = 2;
      unsigned long t898 = __old_capacity877;
      unsigned long b899 = c897 * t898;
      unsigned long* t900 = __capacity876;
      *t900 = b899;
        unsigned long* t901 = __capacity876;
        unsigned long t902 = *t901;
        unsigned long r903 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t879);
        _Bool c904 = ((t902 > r903)) ? 1 : 0;
        if (c904) {
          unsigned long r905 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____max_size___const(t879);
          unsigned long* t906 = __capacity876;
          *t906 = r905;
        }
    }
  struct std__allocator_char_* r907 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t879);
  unsigned long* t908 = __capacity876;
  unsigned long t909 = *t908;
  unsigned long c910 = 1;
  unsigned long b911 = t909 + c910;
  char* r912 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_allocate(r907, b911);
  __retval878 = r912;
  char* t913 = __retval878;
  return t913;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v914, unsigned long v915) {
bb916:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this917;
  unsigned long __capacity918;
  this917 = v914;
  __capacity918 = v915;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t919 = this917;
  unsigned long t920 = __capacity918;
  t919->field2._M_allocated_capacity = t920;
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb921:
  _Bool __retval922;
    _Bool c923 = 0;
    __retval922 = c923;
    _Bool t924 = __retval922;
    return t924;
  abort();
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_M_init_local_bufEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v925) {
bb926:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this927;
  this927 = v925;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t928 = this927;
    _Bool r929 = std__is_constant_evaluated();
    if (r929) {
        unsigned long __i930;
        unsigned long c931 = 0;
        __i930 = c931;
        while (1) {
          unsigned long t933 = __i930;
          unsigned long c934 = 15;
          _Bool c935 = ((t933 <= c934)) ? 1 : 0;
          if (!c935) break;
          char c936 = 0;
          unsigned long t937 = __i930;
          t928->field2._M_local_buf[t937] = c936;
        for_step932: ;
          unsigned long t938 = __i930;
          unsigned long u939 = t938 + 1;
          __i930 = u939;
        }
    }
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC2EPS4_
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(struct _Guard* v940, struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v941) {
bb942:
  struct _Guard* this943;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __s944;
  this943 = v940;
  __s944 = v941;
  struct _Guard* t945 = this943;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t946 = __s944;
  t945->_M_guarded = t946;
  return;
}

// function: _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
char* _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(char* v947, char* v948) {
bb949:
  char* __location950;
  char* __args951;
  char* __retval952;
  void* __loc953;
  __location950 = v947;
  __args951 = v948;
  char* t954 = __location950;
  void* cast955 = (void*)t954;
  __loc953 = cast955;
    void* t956 = __loc953;
    char* cast957 = (char*)t956;
    char* t958 = __args951;
    char t959 = *t958;
    *cast957 = t959;
    __retval952 = cast957;
    char* t960 = __retval952;
    return t960;
  abort();
}

// function: _ZNSt11char_traitsIcE6assignERcRKc
void std__char_traits_char___assign(char* v961, char* v962) {
bb963:
  char* __c1964;
  char* __c2965;
  __c1964 = v961;
  __c2965 = v962;
    _Bool r966 = std____is_constant_evaluated();
    if (r966) {
      char* t967 = __c1964;
      char* t968 = __c2965;
      char* r969 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t967, t968);
    } else {
      char* t970 = __c2965;
      char t971 = *t970;
      char* t972 = __c1964;
      *t972 = t971;
    }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE4copyEPcPKcm
char* __gnu_cxx__char_traits_char___copy(char* v973, char* v974, unsigned long v975) {
bb976:
  char* __s1977;
  char* __s2978;
  unsigned long __n979;
  char* __retval980;
  __s1977 = v973;
  __s2978 = v974;
  __n979 = v975;
    unsigned long t981 = __n979;
    unsigned long c982 = 0;
    _Bool c983 = ((t981 == c982)) ? 1 : 0;
    if (c983) {
      char* t984 = __s1977;
      __retval980 = t984;
      char* t985 = __retval980;
      return t985;
    }
    _Bool r986 = std____is_constant_evaluated();
    if (r986) {
        unsigned long __i987;
        unsigned long c988 = 0;
        __i987 = c988;
        while (1) {
          unsigned long t990 = __i987;
          unsigned long t991 = __n979;
          _Bool c992 = ((t990 < t991)) ? 1 : 0;
          if (!c992) break;
          char* t993 = __s1977;
          unsigned long t994 = __i987;
          char* ptr995 = &(t993)[t994];
          unsigned long t996 = __i987;
          char* t997 = __s2978;
          char* ptr998 = &(t997)[t996];
          char* r999 = _ZSt12construct_atIcJRKcEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(ptr995, ptr998);
        for_step989: ;
          unsigned long t1000 = __i987;
          unsigned long u1001 = t1000 + 1;
          __i987 = u1001;
        }
      char* t1002 = __s1977;
      __retval980 = t1002;
      char* t1003 = __retval980;
      return t1003;
    }
  char* t1004 = __s1977;
  void* cast1005 = (void*)t1004;
  char* t1006 = __s2978;
  void* cast1007 = (void*)t1006;
  unsigned long t1008 = __n979;
  unsigned long c1009 = 1;
  unsigned long b1010 = t1008 * c1009;
  void* r1011 = memcpy(cast1005, cast1007, b1010);
  char* t1012 = __s1977;
  __retval980 = t1012;
  char* t1013 = __retval980;
  return t1013;
}

// function: _ZNSt11char_traitsIcE4copyEPcPKcm
char* std__char_traits_char___copy(char* v1014, char* v1015, unsigned long v1016) {
bb1017:
  char* __s11018;
  char* __s21019;
  unsigned long __n1020;
  char* __retval1021;
  __s11018 = v1014;
  __s21019 = v1015;
  __n1020 = v1016;
    unsigned long t1022 = __n1020;
    unsigned long c1023 = 0;
    _Bool c1024 = ((t1022 == c1023)) ? 1 : 0;
    if (c1024) {
      char* t1025 = __s11018;
      __retval1021 = t1025;
      char* t1026 = __retval1021;
      return t1026;
    }
    _Bool r1027 = std____is_constant_evaluated();
    if (r1027) {
      char* t1028 = __s11018;
      char* t1029 = __s21019;
      unsigned long t1030 = __n1020;
      char* r1031 = __gnu_cxx__char_traits_char___copy(t1028, t1029, t1030);
      __retval1021 = r1031;
      char* t1032 = __retval1021;
      return t1032;
    }
  char* t1033 = __s11018;
  void* cast1034 = (void*)t1033;
  char* t1035 = __s21019;
  void* cast1036 = (void*)t1035;
  unsigned long t1037 = __n1020;
  void* r1038 = memcpy(cast1034, cast1036, t1037);
  char* cast1039 = (char*)r1038;
  __retval1021 = cast1039;
  char* t1040 = __retval1021;
  return t1040;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_S_copyEPcPKcm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(char* v1041, char* v1042, unsigned long v1043) {
bb1044:
  char* __d1045;
  char* __s1046;
  unsigned long __n1047;
  __d1045 = v1041;
  __s1046 = v1042;
  __n1047 = v1043;
    unsigned long t1048 = __n1047;
    unsigned long c1049 = 1;
    _Bool c1050 = ((t1048 == c1049)) ? 1 : 0;
    if (c1050) {
      char* t1051 = __d1045;
      char* t1052 = __s1046;
      std__char_traits_char___assign(t1051, t1052);
    } else {
      char* t1053 = __d1045;
      char* t1054 = __s1046;
      unsigned long t1055 = __n1047;
      char* r1056 = std__char_traits_char___copy(t1053, t1054, t1055);
    }
  return;
}

// function: _ZSt12__niter_baseIPKcET_S2_
char* char_const__std____niter_base_char_const__(char* v1057) {
bb1058:
  char* __it1059;
  char* __retval1060;
  __it1059 = v1057;
  char* t1061 = __it1059;
  __retval1060 = t1061;
  char* t1062 = __retval1060;
  return t1062;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsIPKcEEvPcT_S9_
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(char* v1063, char* v1064, char* v1065) {
bb1066:
  char* __p1067;
  char* __k11068;
  char* __k21069;
  __p1067 = v1063;
  __k11068 = v1064;
  __k21069 = v1065;
    char* t1070 = __p1067;
    char* t1071 = __k11068;
    char* r1072 = char_const__std____niter_base_char_const__(t1071);
    char* t1073 = __k21069;
    char* t1074 = __k11068;
    long diff1075 = t1073 - t1074;
    unsigned long cast1076 = (unsigned long)diff1075;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy(t1070, r1072, cast1076);
  return;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1077) {
bb1078:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1079;
  char* __retval1080;
  this1079 = v1077;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1081 = this1079;
  char* t1082 = t1081->_M_dataplus._M_p;
  __retval1080 = t1082;
  char* t1083 = __retval1080;
  return t1083;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1084, unsigned long v1085) {
bb1086:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1087;
  unsigned long __length1088;
  this1087 = v1084;
  __length1088 = v1085;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1089 = this1087;
  unsigned long t1090 = __length1088;
  t1089->_M_string_length = t1090;
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1091, unsigned long v1092) {
bb1093:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1094;
  unsigned long __n1095;
  char ref_tmp01096;
  this1094 = v1091;
  __n1095 = v1092;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1097 = this1094;
  unsigned long t1098 = __n1095;
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_length(t1097, t1098);
  unsigned long t1099 = __n1095;
  char* r1100 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1097);
  char* ptr1101 = &(r1100)[t1099];
  char c1102 = 0;
  ref_tmp01096 = c1102;
  std__char_traits_char___assign(ptr1101, &ref_tmp01096);
  return;
}

// function: _ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(struct _Guard* v1103) {
bb1104:
  struct _Guard* this1105;
  this1105 = v1103;
  struct _Guard* t1106 = this1105;
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1107 = t1106->_M_guarded;
    _Bool cast1108 = (_Bool)t1107;
    if (cast1108) {
      struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1109 = t1106->_M_guarded;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(t1109);
    }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
void void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const__(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1110, char* v1111, char* v1112, struct std__forward_iterator_tag v1113) {
bb1114:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1115;
  char* __beg1116;
  char* __end1117;
  struct std__forward_iterator_tag unnamed1118;
  unsigned long __dnew1119;
  struct _Guard __guard1120;
  this1115 = v1110;
  __beg1116 = v1111;
  __end1117 = v1112;
  unnamed1118 = v1113;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1121 = this1115;
  char* t1122 = __beg1116;
  char* t1123 = __end1117;
  long r1124 = std__iterator_traits_char_const____difference_type_std__distance_char_const__(t1122, t1123);
  unsigned long cast1125 = (unsigned long)r1124;
  __dnew1119 = cast1125;
    unsigned long t1126 = __dnew1119;
    unsigned long c1127 = 15;
    _Bool c1128 = ((t1126 > c1127)) ? 1 : 0;
    if (c1128) {
      unsigned long c1129 = 0;
      char* r1130 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_create(t1121, &__dnew1119, c1129);
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data(t1121, r1130);
      unsigned long t1131 = __dnew1119;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_capacity(t1121, t1131);
    } else {
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_init_local_buf(t1121);
    }
  std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard___Guard(&__guard1120, t1121);
    char* r1132 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1121);
    char* t1133 = __beg1116;
    char* t1134 = __end1117;
    void_std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______S_copy_chars_char_const__(r1132, t1133, t1134);
    struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c1135 = ((void*)0);
    __guard1120._M_guarded = c1135;
    unsigned long t1136 = __dnew1119;
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_set_length(t1121, t1136);
  {
    std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_construct_char_const___char_const___char_const___std__forward_iterator_tag____Guard____Guard(&__guard1120);
  }
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______Alloc_hider____Alloc_hider(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* v1137) {
bb1138:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* this1139;
  this1139 = v1137;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider* t1140 = this1139;
  {
    struct std__allocator_char_* base1141 = (struct std__allocator_char_*)((char *)t1140 + 0);
    std__allocator_char____allocator(base1141);
  }
  return;
}

// function: _ZNSt15__new_allocatorIcEC2ERKS0_
void std____new_allocator_char_____new_allocator(struct std____new_allocator_char_* v1142, struct std____new_allocator_char_* v1143) {
bb1144:
  struct std____new_allocator_char_* this1145;
  struct std____new_allocator_char_* unnamed1146;
  this1145 = v1142;
  unnamed1146 = v1143;
  struct std____new_allocator_char_* t1147 = this1145;
  return;
}

// function: _ZNSaIcEC2ERKS_
void std__allocator_char___allocator(struct std__allocator_char_* v1148, struct std__allocator_char_* v1149) {
bb1150:
  struct std__allocator_char_* this1151;
  struct std__allocator_char_* __a1152;
  this1151 = v1148;
  __a1152 = v1149;
  struct std__allocator_char_* t1153 = this1151;
  struct std____new_allocator_char_* base1154 = (struct std____new_allocator_char_*)((char *)t1153 + 0);
  struct std__allocator_char_* t1155 = __a1152;
  struct std____new_allocator_char_* base1156 = (struct std____new_allocator_char_*)((char *)t1155 + 0);
  std____new_allocator_char_____new_allocator(base1154, base1156);
  return;
}

// function: _ZNSt19__ptr_traits_ptr_toIPKcS0_Lb0EE10pointer_toERS0_
char* std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(char* v1157) {
bb1158:
  char* __r1159;
  char* __retval1160;
  __r1159 = v1157;
  char* t1161 = __r1159;
  __retval1160 = t1161;
  char* t1162 = __retval1160;
  return t1162;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
char* std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1163) {
bb1164:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1165;
  char* __retval1166;
  this1165 = v1163;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1167 = this1165;
  char* cast1168 = (char*)&(t1167->field2._M_local_buf);
  char* r1169 = std____ptr_traits_ptr_to_char_const___char_const__false___pointer_to(cast1168);
  __retval1166 = r1169;
  char* t1170 = __retval1166;
  return t1170;
}

// function: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_is_localEv
_Bool std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1171) {
bb1172:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1173;
  _Bool __retval1174;
  this1173 = v1171;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1175 = this1173;
    char* r1176 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1175);
    char* r1177 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_local_data___const(t1175);
    _Bool c1178 = ((r1176 == r1177)) ? 1 : 0;
    if (c1178) {
        unsigned long t1179 = t1175->_M_string_length;
        unsigned long c1180 = 15;
        _Bool c1181 = ((t1179 > c1180)) ? 1 : 0;
        if (c1181) {
          __builtin_unreachable();
        }
      _Bool c1182 = 1;
      __retval1174 = c1182;
      _Bool t1183 = __retval1174;
      return t1183;
    }
  _Bool c1184 = 0;
  __retval1174 = c1184;
  _Bool t1185 = __retval1174;
  return t1185;
}

// function: _ZNSt15__new_allocatorIcE10deallocateEPcm
void std____new_allocator_char___deallocate(struct std____new_allocator_char_* v1186, char* v1187, unsigned long v1188) {
bb1189:
  struct std____new_allocator_char_* this1190;
  char* __p1191;
  unsigned long __n1192;
  this1190 = v1186;
  __p1191 = v1187;
  __n1192 = v1188;
  struct std____new_allocator_char_* t1193 = this1190;
    unsigned long c1194 = 1;
    unsigned long c1195 = 16;
    _Bool c1196 = ((c1194 > c1195)) ? 1 : 0;
    if (c1196) {
      char* t1197 = __p1191;
      void* cast1198 = (void*)t1197;
      unsigned long t1199 = __n1192;
      unsigned long c1200 = 1;
      unsigned long b1201 = t1199 * c1200;
      unsigned long c1202 = 1;
      operator_delete_3(cast1198, b1201, c1202);
      return;
    }
  char* t1203 = __p1191;
  void* cast1204 = (void*)t1203;
  unsigned long t1205 = __n1192;
  unsigned long c1206 = 1;
  unsigned long b1207 = t1205 * c1206;
  operator_delete_2(cast1204, b1207);
  return;
}

// function: _ZNSaIcE10deallocateEPcm
void std__allocator_char___deallocate(struct std__allocator_char_* v1208, char* v1209, unsigned long v1210) {
bb1211:
  struct std__allocator_char_* this1212;
  char* __p1213;
  unsigned long __n1214;
  this1212 = v1208;
  __p1213 = v1209;
  __n1214 = v1210;
  struct std__allocator_char_* t1215 = this1212;
    _Bool r1216 = std____is_constant_evaluated();
    if (r1216) {
      char* t1217 = __p1213;
      void* cast1218 = (void*)t1217;
      operator_delete(cast1218);
      return;
    }
  struct std____new_allocator_char_* base1219 = (struct std____new_allocator_char_*)((char *)t1215 + 0);
  char* t1220 = __p1213;
  unsigned long t1221 = __n1214;
  std____new_allocator_char___deallocate(base1219, t1220, t1221);
  return;
}

// function: _ZNSt16allocator_traitsISaIcEE10deallocateERS0_Pcm
void std__allocator_traits_std__allocator_char_____deallocate(struct std__allocator_char_* v1222, char* v1223, unsigned long v1224) {
bb1225:
  struct std__allocator_char_* __a1226;
  char* __p1227;
  unsigned long __n1228;
  __a1226 = v1222;
  __p1227 = v1223;
  __n1228 = v1224;
  struct std__allocator_char_* t1229 = __a1226;
  char* t1230 = __p1227;
  unsigned long t1231 = __n1228;
  std__allocator_char___deallocate(t1229, t1230, t1231);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_destroyEm
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1232, unsigned long v1233) {
bb1234:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1235;
  unsigned long __size1236;
  this1235 = v1232;
  __size1236 = v1233;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1237 = this1235;
  struct std__allocator_char_* r1238 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_get_allocator(t1237);
  char* r1239 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_data___const(t1237);
  unsigned long t1240 = __size1236;
  unsigned long c1241 = 1;
  unsigned long b1242 = t1240 + c1241;
  std__allocator_traits_std__allocator_char_____deallocate(r1238, r1239, b1242);
  return;
}

// function: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
void std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_dispose(struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* v1243) {
bb1244:
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* this1245;
  this1245 = v1243;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t1246 = this1245;
    _Bool r1247 = std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_is_local___const(t1246);
    _Bool u1248 = !r1247;
    if (u1248) {
      unsigned long t1249 = t1246->field2._M_allocated_capacity;
      std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char______M_destroy(t1246, t1249);
    }
  return;
}

// function: _ZNK4ListIiE7isEmptyEv
_Bool List_int___isEmpty___const(struct List_int_* v1250) {
bb1251:
  struct List_int_* this1252;
  _Bool __retval1253;
  this1252 = v1250;
  struct List_int_* t1254 = this1252;
  struct ListNode_int_* t1255 = t1254->firstPtr;
  struct ListNode_int_* c1256 = ((void*)0);
  _Bool c1257 = ((t1255 == c1256)) ? 1 : 0;
  __retval1253 = c1257;
  _Bool t1258 = __retval1253;
  return t1258;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v1259) {
bb1260:
  struct std__ios_base* this1261;
  long __retval1262;
  this1261 = v1259;
  struct std__ios_base* t1263 = this1261;
  long t1264 = t1263->_M_width;
  __retval1262 = t1264;
  long t1265 = __retval1262;
  return t1265;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v1266, char v1267) {
bb1268:
  struct std__basic_ostream_char__std__char_traits_char__* __out1269;
  char __c1270;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1271;
  __out1269 = v1266;
  __c1270 = v1267;
    struct std__basic_ostream_char__std__char_traits_char__* t1272 = __out1269;
    void** v1273 = (void**)t1272;
    void* v1274 = *((void**)v1273);
    unsigned char* cast1275 = (unsigned char*)v1274;
    long c1276 = -24;
    unsigned char* ptr1277 = &(cast1275)[c1276];
    long* cast1278 = (long*)ptr1277;
    long t1279 = *cast1278;
    unsigned char* cast1280 = (unsigned char*)t1272;
    unsigned char* ptr1281 = &(cast1280)[t1279];
    struct std__basic_ostream_char__std__char_traits_char__* cast1282 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1281;
    struct std__ios_base* cast1283 = (struct std__ios_base*)cast1282;
    long r1284 = std__ios_base__width___const(cast1283);
    long c1285 = 0;
    _Bool c1286 = ((r1284 != c1285)) ? 1 : 0;
    if (c1286) {
      struct std__basic_ostream_char__std__char_traits_char__* t1287 = __out1269;
      long c1288 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r1289 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1287, &__c1270, c1288);
      __retval1271 = r1289;
      struct std__basic_ostream_char__std__char_traits_char__* t1290 = __retval1271;
      return t1290;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1291 = __out1269;
  char t1292 = __c1270;
  struct std__basic_ostream_char__std__char_traits_char__* r1293 = std__ostream__put(t1291, t1292);
  struct std__basic_ostream_char__std__char_traits_char__* t1294 = __out1269;
  __retval1271 = t1294;
  struct std__basic_ostream_char__std__char_traits_char__* t1295 = __retval1271;
  return t1295;
}

// function: _ZNK4ListIdE7isEmptyEv
_Bool List_double___isEmpty___const(struct List_double_* v1296) {
bb1297:
  struct List_double_* this1298;
  _Bool __retval1299;
  this1298 = v1296;
  struct List_double_* t1300 = this1298;
  struct ListNode_double_* t1301 = t1300->firstPtr;
  struct ListNode_double_* c1302 = ((void*)0);
  _Bool c1303 = ((t1301 == c1302)) ? 1 : 0;
  __retval1299 = c1303;
  _Bool t1304 = __retval1299;
  return t1304;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v1305, double v1306) {
bb1307:
  struct std__basic_ostream_char__std__char_traits_char__* this1308;
  double __f1309;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1310;
  this1308 = v1305;
  __f1309 = v1306;
  struct std__basic_ostream_char__std__char_traits_char__* t1311 = this1308;
  double t1312 = __f1309;
  struct std__basic_ostream_char__std__char_traits_char__* r1313 = std__ostream__std__ostream___M_insert_double_(t1311, t1312);
  __retval1310 = r1313;
  struct std__basic_ostream_char__std__char_traits_char__* t1314 = __retval1310;
  return t1314;
}

