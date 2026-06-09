extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___List_iterator_int_ { struct std____detail___List_node_base* _M_node; };
struct std____allocated_ptr_std__allocator_std___List_node_int___ { struct std__allocator_std___List_node_int__* _M_alloc; struct std___List_node_int_* _M_ptr; };
struct std____detail___List_node_base { struct std____detail___List_node_base* _M_next; struct std____detail___List_node_base* _M_prev; };
struct std____detail___List_size { unsigned long _M_size; };
struct std____new_allocator_std___List_node_int__ { unsigned char __field0; };
struct std__allocator_std___List_node_int__ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std___List_node_int_ { struct std____detail___List_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____allocated_obj_std__allocator_std___List_node_int___ { struct std____allocated_ptr_std__allocator_std___List_node_int___ __field0; };
struct std____detail___List_node_header { struct std____detail___List_node_base __field0; struct std____detail___List_size __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std____cxx11___List_base_int__std__allocator_int_____List_impl { struct std____detail___List_node_header _M_node; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std____cxx11___List_base_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int_____List_impl _M_impl; };
struct std____cxx11__list_int__std__allocator_int__ { struct std____cxx11___List_base_int__std__allocator_int__ __field0; };

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[21] = "mylist.front() == 77";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_front/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[21] = "mylist.front() == 55";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[23] = "mylist.front() is now ";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv[76] = "reference std::list<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv[75] = "reference std::list<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* p0);
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* p0);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* p0, unsigned long p1, void* p2);
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* p0, unsigned long p1);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std__allocator_std___List_node_int__* p1, struct std___List_node_int_* p2);
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____front(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
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
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* p0);
int main();
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* p0);
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___List_node_int____M_valptr(struct std___List_node_int_* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* p0, struct std___List_node_int_* p1, unsigned long p2);
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std___List_node_int_* p1);
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* p0, struct std___List_node_int_* p1);
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* p0);
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* p0);
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* p0);
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* p0);
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* p0);
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* p0);
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* p0, struct std____detail___List_size* p1);
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* p0);
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0, struct std____allocated_ptr_std__allocator_std___List_node_int___* p1);
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* p0);
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** p0);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);

// function: _ZNSt7__cxx114listIiSaIiEEC2Ev
void std____cxx11__list_int__std__allocator_int_____list(struct std____cxx11__list_int__std__allocator_int__* v0) {
bb1:
  struct std____cxx11__list_int__std__allocator_int__* this2;
  this2 = v0;
  struct std____cxx11__list_int__std__allocator_int__* t3 = this2;
  struct std____cxx11___List_base_int__std__allocator_int__* base4 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t3 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base(base4);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v5) {
bb6:
  struct std____cxx11___List_base_int__std__allocator_int__* this7;
  struct std__allocator_std___List_node_int__* __retval8;
  this7 = v5;
  struct std____cxx11___List_base_int__std__allocator_int__* t9 = this7;
  struct std__allocator_std___List_node_int__* base10 = (struct std__allocator_std___List_node_int__*)((char *)&(t9->_M_impl) + 0);
  __retval8 = base10;
  struct std__allocator_std___List_node_int__* t11 = __retval8;
  return t11;
}

// function: _ZNKSt15__new_allocatorISt10_List_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___List_node_int______M_max_size___const(struct std____new_allocator_std___List_node_int__* v12) {
bb13:
  struct std____new_allocator_std___List_node_int__* this14;
  unsigned long __retval15;
  this14 = v12;
  struct std____new_allocator_std___List_node_int__* t16 = this14;
  unsigned long c17 = 9223372036854775807;
  unsigned long c18 = 24;
  unsigned long b19 = c17 / c18;
  __retval15 = b19;
  unsigned long t20 = __retval15;
  return t20;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE8allocateEmPKv
struct std___List_node_int_* std____new_allocator_std___List_node_int_____allocate(struct std____new_allocator_std___List_node_int__* v21, unsigned long v22, void* v23) {
bb24:
  struct std____new_allocator_std___List_node_int__* this25;
  unsigned long __n26;
  void* unnamed27;
  struct std___List_node_int_* __retval28;
  this25 = v21;
  __n26 = v22;
  unnamed27 = v23;
  struct std____new_allocator_std___List_node_int__* t29 = this25;
    unsigned long t30 = __n26;
    unsigned long r31 = std____new_allocator_std___List_node_int______M_max_size___const(t29);
    _Bool c32 = ((t30 > r31)) ? 1 : 0;
    if (c32) {
        unsigned long t33 = __n26;
        unsigned long c34 = -1;
        unsigned long c35 = 24;
        unsigned long b36 = c34 / c35;
        _Bool c37 = ((t33 > b36)) ? 1 : 0;
        if (c37) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c38 = 8;
    unsigned long c39 = 16;
    _Bool c40 = ((c38 > c39)) ? 1 : 0;
    if (c40) {
      unsigned long __al41;
      unsigned long c42 = 8;
      __al41 = c42;
      unsigned long t43 = __n26;
      unsigned long c44 = 24;
      unsigned long b45 = t43 * c44;
      unsigned long t46 = __al41;
      void* r47 = operator_new_2(b45, t46);
      struct std___List_node_int_* cast48 = (struct std___List_node_int_*)r47;
      __retval28 = cast48;
      struct std___List_node_int_* t49 = __retval28;
      return t49;
    }
  unsigned long t50 = __n26;
  unsigned long c51 = 24;
  unsigned long b52 = t50 * c51;
  void* r53 = operator_new(b52);
  struct std___List_node_int_* cast54 = (struct std___List_node_int_*)r53;
  __retval28 = cast54;
  struct std___List_node_int_* t55 = __retval28;
  return t55;
}

// function: _ZNSaISt10_List_nodeIiEE8allocateEm
struct std___List_node_int_* std__allocator_std___List_node_int_____allocate(struct std__allocator_std___List_node_int__* v56, unsigned long v57) {
bb58:
  struct std__allocator_std___List_node_int__* this59;
  unsigned long __n60;
  struct std___List_node_int_* __retval61;
  this59 = v56;
  __n60 = v57;
  struct std__allocator_std___List_node_int__* t62 = this59;
    _Bool r63 = std____is_constant_evaluated();
    if (r63) {
        unsigned long t64 = __n60;
        unsigned long c65 = 24;
        unsigned long ovr66;
        _Bool ovf67 = __builtin_mul_overflow(t64, c65, &ovr66);
        __n60 = ovr66;
        if (ovf67) {
          std____throw_bad_array_new_length();
        }
      unsigned long t68 = __n60;
      void* r69 = operator_new(t68);
      struct std___List_node_int_* cast70 = (struct std___List_node_int_*)r69;
      __retval61 = cast70;
      struct std___List_node_int_* t71 = __retval61;
      return t71;
    }
  struct std____new_allocator_std___List_node_int__* base72 = (struct std____new_allocator_std___List_node_int__*)((char *)t62 + 0);
  unsigned long t73 = __n60;
  void* c74 = ((void*)0);
  struct std___List_node_int_* r75 = std____new_allocator_std___List_node_int_____allocate(base72, t73, c74);
  __retval61 = r75;
  struct std___List_node_int_* t76 = __retval61;
  return t76;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE8allocateERS2_m
struct std___List_node_int_* std__allocator_traits_std__allocator_std___List_node_int_______allocate(struct std__allocator_std___List_node_int__* v77, unsigned long v78) {
bb79:
  struct std__allocator_std___List_node_int__* __a80;
  unsigned long __n81;
  struct std___List_node_int_* __retval82;
  __a80 = v77;
  __n81 = v78;
  struct std__allocator_std___List_node_int__* t83 = __a80;
  unsigned long t84 = __n81;
  struct std___List_node_int_* r85 = std__allocator_std___List_node_int_____allocate(t83, t84);
  __retval82 = r85;
  struct std___List_node_int_* t86 = __retval82;
  return t86;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2ERS2_PS1_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(struct std____allocated_ptr_std__allocator_std___List_node_int___* v87, struct std__allocator_std___List_node_int__* v88, struct std___List_node_int_* v89) {
bb90:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this91;
  struct std__allocator_std___List_node_int__* __a92;
  struct std___List_node_int_* __ptr93;
  this91 = v87;
  __a92 = v88;
  __ptr93 = v89;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t94 = this91;
  struct std__allocator_std___List_node_int__* t95 = __a92;
  t94->_M_alloc = t95;
  struct std___List_node_int_* t96 = __ptr93;
  t94->_M_ptr = t96;
  return;
}

// function: _ZSt18__allocate_guardedISaISt10_List_nodeIiEEESt15__allocated_ptrIT_ERS4_
struct std____allocated_ptr_std__allocator_std___List_node_int___ std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v97) {
bb98:
  struct std__allocator_std___List_node_int__* __a99;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ __retval100;
  __a99 = v97;
  struct std__allocator_std___List_node_int__* t101 = __a99;
  struct std__allocator_std___List_node_int__* t102 = __a99;
  unsigned long c103 = 1;
  struct std___List_node_int_* r104 = std__allocator_traits_std__allocator_std___List_node_int_______allocate(t102, c103);
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr_2(&__retval100, t101, r104);
  struct std____allocated_ptr_std__allocator_std___List_node_int___ t105 = __retval100;
  return t105;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEEC2EOSt15__allocated_ptrIS2_E
void std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v106, struct std____allocated_ptr_std__allocator_std___List_node_int___* v107) {
bb108:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this109;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __ptr110;
  this109 = v106;
  __ptr110 = v107;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t111 = this109;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base112 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t113 = __ptr110;
  std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(base112, t113);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base114 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t111 + 0);
    struct std___List_node_int_* r115 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base114);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEED2Ev
void std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v116) {
bb117:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this118;
  this118 = v116;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t119 = this118;
    struct std___List_node_int_* t120 = t119->_M_ptr;
    struct std___List_node_int_* c121 = ((void*)0);
    _Bool c122 = ((t120 != c121)) ? 1 : 0;
    if (c122) {
      struct std__allocator_std___List_node_int__* t123 = t119->_M_alloc;
      struct std___List_node_int_* t124 = t119->_M_ptr;
      unsigned long c125 = 1;
      std__allocator_traits_std__allocator_std___List_node_int_______deallocate(t123, t124, c125);
    }
  return;
}

// function: _ZSt22__allocate_guarded_objISaISt10_List_nodeIiEEESt15__allocated_objIT_ERS4_
struct std____allocated_obj_std__allocator_std___List_node_int___ std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(struct std__allocator_std___List_node_int__* v126) {
bb127:
  struct std__allocator_std___List_node_int__* __a128;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __retval129;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ ref_tmp0130;
  __a128 = v126;
  struct std__allocator_std___List_node_int__* t131 = __a128;
  struct std____allocated_ptr_std__allocator_std___List_node_int___ r132 = std____allocated_ptr_std__allocator_std___List_node_int______std____allocate_guarded_std__allocator_std___List_node_int_____(t131);
  ref_tmp0130 = r132;
    std____allocated_obj_std__allocator_std___List_node_int_________allocated_obj(&__retval129, &ref_tmp0130);
  {
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(&ref_tmp0130);
  }
  struct std____allocated_obj_std__allocator_std___List_node_int___ t133 = __retval129;
  return t133;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v134, int* v135) {
bb136:
  int* __location137;
  int* __args138;
  int* __retval139;
  void* __loc140;
  __location137 = v134;
  __args138 = v135;
  int* t141 = __location137;
  void* cast142 = (void*)t141;
  __loc140 = cast142;
    void* t143 = __loc140;
    int* cast144 = (int*)t143;
    int* t145 = __args138;
    int t146 = *t145;
    *cast144 = t146;
    __retval139 = cast144;
    int* t147 = __retval139;
    return t147;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(struct std__allocator_std___List_node_int__* v148, int* v149, int* v150) {
bb151:
  struct std__allocator_std___List_node_int__* __a152;
  int* __p153;
  int* __args154;
  __a152 = v148;
  __p153 = v149;
  __args154 = v150;
  int* t155 = __p153;
  int* t156 = __args154;
  int* r157 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t155, t156);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v158) {
bb159:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this160;
  struct std___List_node_int_* __retval161;
  this160 = v158;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t162 = this160;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* base163 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t162 + 0);
  struct std___List_node_int_* r164 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base163);
  __retval161 = r164;
  struct std___List_node_int_* t165 = __retval161;
  return t165;
}

// function: _ZSt10__exchangeIPSt10_List_nodeIiEDnET_RS3_OT0_
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** v166, void** v167) {
bb168:
  struct std___List_node_int_** __obj169;
  void** __new_val170;
  struct std___List_node_int_* __retval171;
  struct std___List_node_int_* __old_val172;
  __obj169 = v166;
  __new_val170 = v167;
  struct std___List_node_int_** t173 = __obj169;
  struct std___List_node_int_* t174 = *t173;
  __old_val172 = t174;
  void** t175 = __new_val170;
  struct std___List_node_int_* c176 = ((void*)0);
  struct std___List_node_int_** t177 = __obj169;
  *t177 = c176;
  struct std___List_node_int_* t178 = __old_val172;
  __retval171 = t178;
  struct std___List_node_int_* t179 = __retval171;
  return t179;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEE7releaseEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* v180) {
bb181:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this182;
  struct std___List_node_int_* __retval183;
  void* ref_tmp0184;
  this182 = v180;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t185 = this182;
  void* c186 = ((void*)0);
  ref_tmp0184 = c186;
  struct std___List_node_int_* r187 = std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(&t185->_M_ptr, &ref_tmp0184);
  __retval183 = r187;
  struct std___List_node_int_* t188 = __retval183;
  return t188;
}

// function: _ZNSt15__allocated_objISaISt10_List_nodeIiEEED2Ev
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* v189) {
bb190:
  struct std____allocated_obj_std__allocator_std___List_node_int___* this191;
  this191 = v189;
  struct std____allocated_obj_std__allocator_std___List_node_int___* t192 = this191;
      struct std____allocated_ptr_std__allocator_std___List_node_int___* base193 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t192 + 0);
      _Bool r194 = std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(base193);
      if (r194) {
        struct std____allocated_ptr_std__allocator_std___List_node_int___* base195 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t192 + 0);
        struct std___List_node_int_* r196 = std____allocated_ptr_std__allocator_std___List_node_int_______get___const(base195);
      }
  {
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base197 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)t192 + 0);
    std____allocated_ptr_std__allocator_std___List_node_int__________allocated_ptr(base197);
  }
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(struct std____cxx11__list_int__std__allocator_int__* v198, int* v199) {
bb200:
  struct std____cxx11__list_int__std__allocator_int__* this201;
  int* __args202;
  struct std___List_node_int_* __retval203;
  struct std__allocator_std___List_node_int__* __alloc204;
  struct std____allocated_obj_std__allocator_std___List_node_int___ __guard205;
  this201 = v198;
  __args202 = v199;
  struct std____cxx11__list_int__std__allocator_int__* t206 = this201;
  struct std____cxx11___List_base_int__std__allocator_int__* base207 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t206 + 0);
  struct std__allocator_std___List_node_int__* r208 = std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(base207);
  __alloc204 = r208;
  struct std__allocator_std___List_node_int__* t209 = __alloc204;
  struct std____allocated_obj_std__allocator_std___List_node_int___ r210 = std____allocated_obj_std__allocator_std___List_node_int______std____allocate_guarded_obj_std__allocator_std___List_node_int_____(t209);
  __guard205 = r210;
    struct std__allocator_std___List_node_int__* t211 = __alloc204;
    struct std___List_node_int_* r212 = std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(&__guard205);
    int* r213 = std___List_node_int____M_valptr(r212);
    int* t214 = __args202;
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_(t211, r213, t214);
    struct std____allocated_ptr_std__allocator_std___List_node_int___* base215 = (struct std____allocated_ptr_std__allocator_std___List_node_int___*)((char *)&(__guard205) + 0);
    struct std___List_node_int_* r216 = std____allocated_ptr_std__allocator_std___List_node_int_______release(base215);
    __retval203 = r216;
    struct std___List_node_int_* t217 = __retval203;
    struct std___List_node_int_* ret_val218 = t217;
    {
      std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(&__guard205);
    }
    return ret_val218;
  abort();
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_inc_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* v219, unsigned long v220) {
bb221:
  struct std____cxx11___List_base_int__std__allocator_int__* this222;
  unsigned long __n223;
  this222 = v219;
  __n223 = v220;
  struct std____cxx11___List_base_int__std__allocator_int__* t224 = this222;
  unsigned long t225 = __n223;
  struct std____detail___List_size* base226 = (struct std____detail___List_size*)((char *)&(t224->_M_impl._M_node) + 16);
  unsigned long t227 = base226->_M_size;
  unsigned long b228 = t227 + t225;
  base226->_M_size = b228;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_(struct std____cxx11__list_int__std__allocator_int__* v229, struct std___List_iterator_int_ v230, int* v231) {
bb232:
  struct std____cxx11__list_int__std__allocator_int__* this233;
  struct std___List_iterator_int_ __position234;
  int* __args235;
  struct std___List_node_int_* __tmp236;
  this233 = v229;
  __position234 = v230;
  __args235 = v231;
  struct std____cxx11__list_int__std__allocator_int__* t237 = this233;
  int* t238 = __args235;
  struct std___List_node_int_* r239 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_(t237, t238);
  __tmp236 = r239;
  struct std___List_node_int_* t240 = __tmp236;
  struct std____detail___List_node_base* base241 = (struct std____detail___List_node_base*)((char *)t240 + 0);
  struct std____detail___List_node_base* t242 = __position234._M_node;
  std____detail___List_node_base___M_hook(base241, t242);
  struct std____cxx11___List_base_int__std__allocator_int__* base243 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t237 + 0);
  unsigned long c244 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_inc_size(base243, c244);
  return;
}

// function: _ZNSt14_List_iteratorIiEC2EPNSt8__detail15_List_node_baseE
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* v245, struct std____detail___List_node_base* v246) {
bb247:
  struct std___List_iterator_int_* this248;
  struct std____detail___List_node_base* __x249;
  this248 = v245;
  __x249 = v246;
  struct std___List_iterator_int_* t250 = this248;
  struct std____detail___List_node_base* t251 = __x249;
  t250->_M_node = t251;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE3endEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* v252) {
bb253:
  struct std____cxx11__list_int__std__allocator_int__* this254;
  struct std___List_iterator_int_ __retval255;
  this254 = v252;
  struct std____cxx11__list_int__std__allocator_int__* t256 = this254;
  struct std____cxx11___List_base_int__std__allocator_int__* base257 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t256 + 0);
  struct std____detail___List_node_base* r258 = std____detail___List_node_header___M_base(&base257->_M_impl._M_node);
  std___List_iterator_int____List_iterator(&__retval255, r258);
  struct std___List_iterator_int_ t259 = __retval255;
  return t259;
}

// function: _ZNSt7__cxx114listIiSaIiEE9push_backEOi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v260, int* v261) {
bb262:
  struct std____cxx11__list_int__std__allocator_int__* this263;
  int* __x264;
  struct std___List_iterator_int_ agg_tmp0265;
  this263 = v260;
  __x264 = v261;
  struct std____cxx11__list_int__std__allocator_int__* t266 = this263;
  struct std___List_iterator_int_ r267 = std____cxx11__list_int__std__allocator_int_____end(t266);
  agg_tmp0265 = r267;
  int* t268 = __x264;
  struct std___List_iterator_int_ t269 = agg_tmp0265;
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_(t266, t269, t268);
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v270) {
bb271:
  struct std____detail___List_node_base* this272;
  struct std____detail___List_node_base* __retval273;
  this272 = v270;
  struct std____detail___List_node_base* t274 = this272;
  __retval273 = t274;
  struct std____detail___List_node_base* t275 = __retval273;
  return t275;
}

// function: _ZNKSt7__cxx114listIiSaIiEE5emptyEv
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* v276) {
bb277:
  struct std____cxx11__list_int__std__allocator_int__* this278;
  _Bool __retval279;
  this278 = v276;
  struct std____cxx11__list_int__std__allocator_int__* t280 = this278;
  struct std____cxx11___List_base_int__std__allocator_int__* base281 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t280 + 0);
  struct std____detail___List_node_base* base282 = (struct std____detail___List_node_base*)((char *)&(base281->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t283 = base282->_M_next;
  struct std____cxx11___List_base_int__std__allocator_int__* base284 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t280 + 0);
  struct std____detail___List_node_base* base285 = (struct std____detail___List_node_base*)((char *)&(base284->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* r286 = std____detail___List_node_base___M_base___const(base285);
  _Bool c287 = ((t283 == r286)) ? 1 : 0;
  __retval279 = c287;
  _Bool t288 = __retval279;
  return t288;
}

// function: _ZNSt7__cxx114listIiSaIiEE5beginEv
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* v289) {
bb290:
  struct std____cxx11__list_int__std__allocator_int__* this291;
  struct std___List_iterator_int_ __retval292;
  this291 = v289;
  struct std____cxx11__list_int__std__allocator_int__* t293 = this291;
  struct std____cxx11___List_base_int__std__allocator_int__* base294 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t293 + 0);
  struct std____detail___List_node_base* base295 = (struct std____detail___List_node_base*)((char *)&(base294->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t296 = base295->_M_next;
  std___List_iterator_int____List_iterator(&__retval292, t296);
  struct std___List_iterator_int_ t297 = __retval292;
  return t297;
}

// function: _ZNKSt14_List_iteratorIiEdeEv
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* v298) {
bb299:
  struct std___List_iterator_int_* this300;
  int* __retval301;
  this300 = v298;
  struct std___List_iterator_int_* t302 = this300;
  struct std____detail___List_node_base* t303 = t302->_M_node;
  struct std___List_node_int_* derived304 = ((t303) ? (struct std___List_node_int_*)((char *)t303 - 0) : (struct std___List_node_int_*)0);
  int* r305 = std___List_node_int____M_valptr(derived304);
  __retval301 = r305;
  int* t306 = __retval301;
  return t306;
}

// function: _ZNSt7__cxx114listIiSaIiEE5frontEv
int* std____cxx11__list_int__std__allocator_int_____front(struct std____cxx11__list_int__std__allocator_int__* v307) {
bb308:
  struct std____cxx11__list_int__std__allocator_int__* this309;
  int* __retval310;
  struct std___List_iterator_int_ ref_tmp0311;
  this309 = v307;
  struct std____cxx11__list_int__std__allocator_int__* t312 = this309;
    do {
          _Bool r313 = std____cxx11__list_int__std__allocator_int_____empty___const(t312);
          if (r313) {
            char* cast314 = (char*)&(_str_4);
            int c315 = 1650;
            char* cast316 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv);
            char* cast317 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast314, c315, cast316, cast317);
          }
      _Bool c318 = 0;
      if (!c318) break;
    } while (1);
  struct std___List_iterator_int_ r319 = std____cxx11__list_int__std__allocator_int_____begin(t312);
  ref_tmp0311 = r319;
  int* r320 = std___List_iterator_int___operator____const(&ref_tmp0311);
  __retval310 = r320;
  int* t321 = __retval310;
  return t321;
}

// function: _ZNSt14_List_iteratorIiEmmEv
struct std___List_iterator_int_* std___List_iterator_int___operator__(struct std___List_iterator_int_* v322) {
bb323:
  struct std___List_iterator_int_* this324;
  struct std___List_iterator_int_* __retval325;
  this324 = v322;
  struct std___List_iterator_int_* t326 = this324;
  struct std____detail___List_node_base* t327 = t326->_M_node;
  struct std____detail___List_node_base* t328 = t327->_M_prev;
  t326->_M_node = t328;
  __retval325 = t326;
  struct std___List_iterator_int_* t329 = __retval325;
  return t329;
}

// function: _ZNSt7__cxx114listIiSaIiEE4backEv
int* std____cxx11__list_int__std__allocator_int_____back(struct std____cxx11__list_int__std__allocator_int__* v330) {
bb331:
  struct std____cxx11__list_int__std__allocator_int__* this332;
  int* __retval333;
  struct std___List_iterator_int_ __tmp334;
  this332 = v330;
  struct std____cxx11__list_int__std__allocator_int__* t335 = this332;
    do {
          _Bool r336 = std____cxx11__list_int__std__allocator_int_____empty___const(t335);
          if (r336) {
            char* cast337 = (char*)&(_str_4);
            int c338 = 1674;
            char* cast339 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE4backEv);
            char* cast340 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast337, c338, cast339, cast340);
          }
      _Bool c341 = 0;
      if (!c341) break;
    } while (1);
  struct std___List_iterator_int_ r342 = std____cxx11__list_int__std__allocator_int_____end(t335);
  __tmp334 = r342;
  struct std___List_iterator_int_* r343 = std___List_iterator_int___operator__(&__tmp334);
  int* r344 = std___List_iterator_int___operator____const(&__tmp334);
  __retval333 = r344;
  int* t345 = __retval333;
  return t345;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v346, int v347) {
bb348:
  int __a349;
  int __b350;
  int __retval351;
  __a349 = v346;
  __b350 = v347;
  int t352 = __a349;
  int t353 = __b350;
  int b354 = t352 | t353;
  __retval351 = b354;
  int t355 = __retval351;
  return t355;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v356) {
bb357:
  struct std__basic_ios_char__std__char_traits_char__* this358;
  int __retval359;
  this358 = v356;
  struct std__basic_ios_char__std__char_traits_char__* t360 = this358;
  struct std__ios_base* base361 = (struct std__ios_base*)((char *)t360 + 0);
  int t362 = base361->_M_streambuf_state;
  __retval359 = t362;
  int t363 = __retval359;
  return t363;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v364, int v365) {
bb366:
  struct std__basic_ios_char__std__char_traits_char__* this367;
  int __state368;
  this367 = v364;
  __state368 = v365;
  struct std__basic_ios_char__std__char_traits_char__* t369 = this367;
  int r370 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t369);
  int t371 = __state368;
  int r372 = std__operator_(r370, t371);
  std__basic_ios_char__std__char_traits_char_____clear(t369, r372);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v373, char* v374) {
bb375:
  char* __c1376;
  char* __c2377;
  _Bool __retval378;
  __c1376 = v373;
  __c2377 = v374;
  char* t379 = __c1376;
  char t380 = *t379;
  int cast381 = (int)t380;
  char* t382 = __c2377;
  char t383 = *t382;
  int cast384 = (int)t383;
  _Bool c385 = ((cast381 == cast384)) ? 1 : 0;
  __retval378 = c385;
  _Bool t386 = __retval378;
  return t386;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v387) {
bb388:
  char* __p389;
  unsigned long __retval390;
  unsigned long __i391;
  __p389 = v387;
  unsigned long c392 = 0;
  __i391 = c392;
    char ref_tmp0393;
    while (1) {
      unsigned long t394 = __i391;
      char* t395 = __p389;
      char* ptr396 = &(t395)[t394];
      char c397 = 0;
      ref_tmp0393 = c397;
      _Bool r398 = __gnu_cxx__char_traits_char___eq(ptr396, &ref_tmp0393);
      _Bool u399 = !r398;
      if (!u399) break;
      unsigned long t400 = __i391;
      unsigned long u401 = t400 + 1;
      __i391 = u401;
    }
  unsigned long t402 = __i391;
  __retval390 = t402;
  unsigned long t403 = __retval390;
  return t403;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v404) {
bb405:
  char* __s406;
  unsigned long __retval407;
  __s406 = v404;
    _Bool r408 = std____is_constant_evaluated();
    if (r408) {
      char* t409 = __s406;
      unsigned long r410 = __gnu_cxx__char_traits_char___length(t409);
      __retval407 = r410;
      unsigned long t411 = __retval407;
      return t411;
    }
  char* t412 = __s406;
  unsigned long r413 = strlen(t412);
  __retval407 = r413;
  unsigned long t414 = __retval407;
  return t414;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v415, char* v416) {
bb417:
  struct std__basic_ostream_char__std__char_traits_char__* __out418;
  char* __s419;
  struct std__basic_ostream_char__std__char_traits_char__* __retval420;
  __out418 = v415;
  __s419 = v416;
    char* t421 = __s419;
    _Bool cast422 = (_Bool)t421;
    _Bool u423 = !cast422;
    if (u423) {
      struct std__basic_ostream_char__std__char_traits_char__* t424 = __out418;
      void** v425 = (void**)t424;
      void* v426 = *((void**)v425);
      unsigned char* cast427 = (unsigned char*)v426;
      long c428 = -24;
      unsigned char* ptr429 = &(cast427)[c428];
      long* cast430 = (long*)ptr429;
      long t431 = *cast430;
      unsigned char* cast432 = (unsigned char*)t424;
      unsigned char* ptr433 = &(cast432)[t431];
      struct std__basic_ostream_char__std__char_traits_char__* cast434 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr433;
      struct std__basic_ios_char__std__char_traits_char__* cast435 = (struct std__basic_ios_char__std__char_traits_char__*)cast434;
      int t436 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast435, t436);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t437 = __out418;
      char* t438 = __s419;
      char* t439 = __s419;
      unsigned long r440 = std__char_traits_char___length(t439);
      long cast441 = (long)r440;
      struct std__basic_ostream_char__std__char_traits_char__* r442 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t437, t438, cast441);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t443 = __out418;
  __retval420 = t443;
  struct std__basic_ostream_char__std__char_traits_char__* t444 = __retval420;
  return t444;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v445, void* v446) {
bb447:
  struct std__basic_ostream_char__std__char_traits_char__* this448;
  void* __pf449;
  struct std__basic_ostream_char__std__char_traits_char__* __retval450;
  this448 = v445;
  __pf449 = v446;
  struct std__basic_ostream_char__std__char_traits_char__* t451 = this448;
  void* t452 = __pf449;
  struct std__basic_ostream_char__std__char_traits_char__* r453 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t452)(t451);
  __retval450 = r453;
  struct std__basic_ostream_char__std__char_traits_char__* t454 = __retval450;
  return t454;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v455) {
bb456:
  struct std__basic_ostream_char__std__char_traits_char__* __os457;
  struct std__basic_ostream_char__std__char_traits_char__* __retval458;
  __os457 = v455;
  struct std__basic_ostream_char__std__char_traits_char__* t459 = __os457;
  struct std__basic_ostream_char__std__char_traits_char__* r460 = std__ostream__flush(t459);
  __retval458 = r460;
  struct std__basic_ostream_char__std__char_traits_char__* t461 = __retval458;
  return t461;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v462) {
bb463:
  struct std__ctype_char_* __f464;
  struct std__ctype_char_* __retval465;
  __f464 = v462;
    struct std__ctype_char_* t466 = __f464;
    _Bool cast467 = (_Bool)t466;
    _Bool u468 = !cast467;
    if (u468) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t469 = __f464;
  __retval465 = t469;
  struct std__ctype_char_* t470 = __retval465;
  return t470;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v471, char v472) {
bb473:
  struct std__ctype_char_* this474;
  char __c475;
  char __retval476;
  this474 = v471;
  __c475 = v472;
  struct std__ctype_char_* t477 = this474;
    char t478 = t477->_M_widen_ok;
    _Bool cast479 = (_Bool)t478;
    if (cast479) {
      char t480 = __c475;
      unsigned char cast481 = (unsigned char)t480;
      unsigned long cast482 = (unsigned long)cast481;
      char t483 = t477->_M_widen[cast482];
      __retval476 = t483;
      char t484 = __retval476;
      return t484;
    }
  std__ctype_char____M_widen_init___const(t477);
  char t485 = __c475;
  void** v486 = (void**)t477;
  void* v487 = *((void**)v486);
  char vcall490 = (char)__VERIFIER_virtual_call_char_char(t477, 6, t485);
  __retval476 = vcall490;
  char t491 = __retval476;
  return t491;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v492, char v493) {
bb494:
  struct std__basic_ios_char__std__char_traits_char__* this495;
  char __c496;
  char __retval497;
  this495 = v492;
  __c496 = v493;
  struct std__basic_ios_char__std__char_traits_char__* t498 = this495;
  struct std__ctype_char_* t499 = t498->_M_ctype;
  struct std__ctype_char_* r500 = std__ctype_char__const__std____check_facet_std__ctype_char___(t499);
  char t501 = __c496;
  char r502 = std__ctype_char___widen_char__const(r500, t501);
  __retval497 = r502;
  char t503 = __retval497;
  return t503;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v504) {
bb505:
  struct std__basic_ostream_char__std__char_traits_char__* __os506;
  struct std__basic_ostream_char__std__char_traits_char__* __retval507;
  __os506 = v504;
  struct std__basic_ostream_char__std__char_traits_char__* t508 = __os506;
  struct std__basic_ostream_char__std__char_traits_char__* t509 = __os506;
  void** v510 = (void**)t509;
  void* v511 = *((void**)v510);
  unsigned char* cast512 = (unsigned char*)v511;
  long c513 = -24;
  unsigned char* ptr514 = &(cast512)[c513];
  long* cast515 = (long*)ptr514;
  long t516 = *cast515;
  unsigned char* cast517 = (unsigned char*)t509;
  unsigned char* ptr518 = &(cast517)[t516];
  struct std__basic_ostream_char__std__char_traits_char__* cast519 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr518;
  struct std__basic_ios_char__std__char_traits_char__* cast520 = (struct std__basic_ios_char__std__char_traits_char__*)cast519;
  char c521 = 10;
  char r522 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast520, c521);
  struct std__basic_ostream_char__std__char_traits_char__* r523 = std__ostream__put(t508, r522);
  struct std__basic_ostream_char__std__char_traits_char__* r524 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r523);
  __retval507 = r524;
  struct std__basic_ostream_char__std__char_traits_char__* t525 = __retval507;
  return t525;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v526) {
bb527:
  struct std____cxx11__list_int__std__allocator_int__* this528;
  this528 = v526;
  struct std____cxx11__list_int__std__allocator_int__* t529 = this528;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base530 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t529 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base530);
  }
  return;
}

// function: main
int main() {
bb531:
  int __retval532;
  struct std____cxx11__list_int__std__allocator_int__ mylist533;
  int ref_tmp0534;
  int ref_tmp1535;
  int c536 = 0;
  __retval532 = c536;
  std____cxx11__list_int__std__allocator_int_____list(&mylist533);
    int c537 = 77;
    ref_tmp0534 = c537;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist533, &ref_tmp0534);
    int c538 = 22;
    ref_tmp1535 = c538;
    std____cxx11__list_int__std__allocator_int_____push_back(&mylist533, &ref_tmp1535);
    int* r539 = std____cxx11__list_int__std__allocator_int_____front(&mylist533);
    int t540 = *r539;
    int c541 = 77;
    _Bool c542 = ((t540 == c541)) ? 1 : 0;
    if (c542) {
    } else {
      char* cast543 = (char*)&(_str);
      char* c544 = _str_1;
      unsigned int c545 = 20;
      char* cast546 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast543, c544, c545, cast546);
    }
    int* r547 = std____cxx11__list_int__std__allocator_int_____back(&mylist533);
    int t548 = *r547;
    int* r549 = std____cxx11__list_int__std__allocator_int_____front(&mylist533);
    int t550 = *r549;
    int b551 = t550 - t548;
    *r549 = b551;
    int* r552 = std____cxx11__list_int__std__allocator_int_____front(&mylist533);
    int t553 = *r552;
    int c554 = 55;
    _Bool c555 = ((t553 == c554)) ? 1 : 0;
    if (c555) {
    } else {
      char* cast556 = (char*)&(_str_2);
      char* c557 = _str_1;
      unsigned int c558 = 24;
      char* cast559 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast556, c557, c558, cast559);
    }
    char* cast560 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r561 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast560);
    int* r562 = std____cxx11__list_int__std__allocator_int_____front(&mylist533);
    int t563 = *r562;
    struct std__basic_ostream_char__std__char_traits_char__* r564 = std__ostream__operator__(r561, t563);
    struct std__basic_ostream_char__std__char_traits_char__* r565 = std__ostream__operator___std__ostream_____(r564, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c566 = 0;
    __retval532 = c566;
    int t567 = __retval532;
    int ret_val568 = t567;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist533);
    }
    return ret_val568;
  int t569 = __retval532;
  return t569;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v570) {
bb571:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this572;
  this572 = v570;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t573 = this572;
  struct std__allocator_std___List_node_int__* base574 = (struct std__allocator_std___List_node_int__*)((char *)t573 + 0);
  std__allocator_std___List_node_int_____allocator(base574);
    std____detail___List_node_header___List_node_header(&t573->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v575) {
bb576:
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this577;
  this577 = v575;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t578 = this577;
  {
    struct std__allocator_std___List_node_int__* base579 = (struct std__allocator_std___List_node_int__*)((char *)t578 + 0);
    std__allocator_std___List_node_int______allocator(base579);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v580) {
bb581:
  struct std____cxx11___List_base_int__std__allocator_int__* this582;
  this582 = v580;
  struct std____cxx11___List_base_int__std__allocator_int__* t583 = this582;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t583->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v584) {
bb585:
  struct std____detail___List_node_header* this586;
  struct std____detail___List_node_base* __retval587;
  this586 = v584;
  struct std____detail___List_node_header* t588 = this586;
  struct std____detail___List_node_base* base589 = (struct std____detail___List_node_base*)((char *)t588 + 0);
  __retval587 = base589;
  struct std____detail___List_node_base* t590 = __retval587;
  return t590;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v591) {
bb592:
  int* __location593;
  __location593 = v591;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v594, int* v595) {
bb596:
  struct std__allocator_std___List_node_int__* __a597;
  int* __p598;
  __a597 = v594;
  __p598 = v595;
  int* t599 = __p598;
  void_std__destroy_at_int_(t599);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v600) {
bb601:
  struct __gnu_cxx____aligned_membuf_int_* this602;
  void* __retval603;
  this602 = v600;
  struct __gnu_cxx____aligned_membuf_int_* t604 = this602;
  void* cast605 = (void*)&(t604->_M_storage);
  __retval603 = cast605;
  void* t606 = __retval603;
  return t606;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v607) {
bb608:
  struct __gnu_cxx____aligned_membuf_int_* this609;
  int* __retval610;
  this609 = v607;
  struct __gnu_cxx____aligned_membuf_int_* t611 = this609;
  void* r612 = __gnu_cxx____aligned_membuf_int____M_addr(t611);
  int* cast613 = (int*)r612;
  __retval610 = cast613;
  int* t614 = __retval610;
  return t614;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v615) {
bb616:
  struct std___List_node_int_* this617;
  int* __retval618;
  this617 = v615;
  struct std___List_node_int_* t619 = this617;
  int* r620 = __gnu_cxx____aligned_membuf_int____M_ptr(&t619->_M_storage);
  __retval618 = r620;
  int* t621 = __retval618;
  return t621;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb622:
  _Bool __retval623;
    _Bool c624 = 0;
    __retval623 = c624;
    _Bool t625 = __retval623;
    return t625;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v626, struct std___List_node_int_* v627, unsigned long v628) {
bb629:
  struct std____new_allocator_std___List_node_int__* this630;
  struct std___List_node_int_* __p631;
  unsigned long __n632;
  this630 = v626;
  __p631 = v627;
  __n632 = v628;
  struct std____new_allocator_std___List_node_int__* t633 = this630;
    unsigned long c634 = 8;
    unsigned long c635 = 16;
    _Bool c636 = ((c634 > c635)) ? 1 : 0;
    if (c636) {
      struct std___List_node_int_* t637 = __p631;
      void* cast638 = (void*)t637;
      unsigned long t639 = __n632;
      unsigned long c640 = 24;
      unsigned long b641 = t639 * c640;
      unsigned long c642 = 8;
      operator_delete_3(cast638, b641, c642);
      return;
    }
  struct std___List_node_int_* t643 = __p631;
  void* cast644 = (void*)t643;
  unsigned long t645 = __n632;
  unsigned long c646 = 24;
  unsigned long b647 = t645 * c646;
  operator_delete_2(cast644, b647);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v648, struct std___List_node_int_* v649, unsigned long v650) {
bb651:
  struct std__allocator_std___List_node_int__* this652;
  struct std___List_node_int_* __p653;
  unsigned long __n654;
  this652 = v648;
  __p653 = v649;
  __n654 = v650;
  struct std__allocator_std___List_node_int__* t655 = this652;
    _Bool r656 = std____is_constant_evaluated();
    if (r656) {
      struct std___List_node_int_* t657 = __p653;
      void* cast658 = (void*)t657;
      operator_delete(cast658);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base659 = (struct std____new_allocator_std___List_node_int__*)((char *)t655 + 0);
  struct std___List_node_int_* t660 = __p653;
  unsigned long t661 = __n654;
  std____new_allocator_std___List_node_int_____deallocate(base659, t660, t661);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v662, struct std___List_node_int_* v663, unsigned long v664) {
bb665:
  struct std__allocator_std___List_node_int__* __a666;
  struct std___List_node_int_* __p667;
  unsigned long __n668;
  __a666 = v662;
  __p667 = v663;
  __n668 = v664;
  struct std__allocator_std___List_node_int__* t669 = __a666;
  struct std___List_node_int_* t670 = __p667;
  unsigned long t671 = __n668;
  std__allocator_std___List_node_int_____deallocate(t669, t670, t671);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v672, struct std___List_node_int_* v673) {
bb674:
  struct std____cxx11___List_base_int__std__allocator_int__* this675;
  struct std___List_node_int_* __p676;
  this675 = v672;
  __p676 = v673;
  struct std____cxx11___List_base_int__std__allocator_int__* t677 = this675;
  struct std__allocator_std___List_node_int__* base678 = (struct std__allocator_std___List_node_int__*)((char *)&(t677->_M_impl) + 0);
  struct std___List_node_int_* t679 = __p676;
  unsigned long c680 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base678, t679, c680);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v681, struct std___List_node_int_* v682) {
bb683:
  struct std____cxx11___List_base_int__std__allocator_int__* this684;
  struct std___List_node_int_* __p685;
  this684 = v681;
  __p685 = v682;
  struct std____cxx11___List_base_int__std__allocator_int__* t686 = this684;
  struct std__allocator_std___List_node_int__* base687 = (struct std__allocator_std___List_node_int__*)((char *)&(t686->_M_impl) + 0);
  struct std___List_node_int_* t688 = __p685;
  int* r689 = std___List_node_int____M_valptr(t688);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base687, r689);
  struct std___List_node_int_* t690 = __p685;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t686, t690);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v691) {
bb692:
  struct std___List_node_int_* this693;
  struct std___List_node_int_* __retval694;
  this693 = v691;
  struct std___List_node_int_* t695 = this693;
  __retval694 = t695;
  struct std___List_node_int_* t696 = __retval694;
  return t696;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v697) {
bb698:
  struct std____cxx11___List_base_int__std__allocator_int__* this699;
  struct std____detail___List_node_base* __cur700;
  this699 = v697;
  struct std____cxx11___List_base_int__std__allocator_int__* t701 = this699;
  struct std____detail___List_node_base* base702 = (struct std____detail___List_node_base*)((char *)&(t701->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t703 = base702->_M_next;
  __cur700 = t703;
    while (1) {
      struct std____detail___List_node_base* t704 = __cur700;
      struct std____detail___List_node_base* r705 = std____detail___List_node_header___M_base(&t701->_M_impl._M_node);
      _Bool c706 = ((t704 != r705)) ? 1 : 0;
      if (!c706) break;
        struct std___List_node_int_* __tmp707;
        struct std____detail___List_node_base* t708 = __cur700;
        struct std___List_node_int_* derived709 = (struct std___List_node_int_*)((char *)t708 - 0);
        __tmp707 = derived709;
        struct std___List_node_int_* t710 = __tmp707;
        struct std____detail___List_node_base* base711 = (struct std____detail___List_node_base*)((char *)t710 + 0);
        struct std____detail___List_node_base* t712 = base711->_M_next;
        __cur700 = t712;
        struct std___List_node_int_* t713 = __tmp707;
        struct std___List_node_int_* r714 = std___List_node_int____M_node_ptr(t713);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t701, r714);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v715) {
bb716:
  struct std____cxx11___List_base_int__std__allocator_int__* this717;
  this717 = v715;
  struct std____cxx11___List_base_int__std__allocator_int__* t718 = this717;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t718);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t718->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v719) {
bb720:
  struct std____new_allocator_std___List_node_int__* this721;
  this721 = v719;
  struct std____new_allocator_std___List_node_int__* t722 = this721;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v723) {
bb724:
  struct std__allocator_std___List_node_int__* this725;
  this725 = v723;
  struct std__allocator_std___List_node_int__* t726 = this725;
  struct std____new_allocator_std___List_node_int__* base727 = (struct std____new_allocator_std___List_node_int__*)((char *)t726 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base727);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v728) {
bb729:
  struct std____detail___List_node_header* this730;
  this730 = v728;
  struct std____detail___List_node_header* t731 = this730;
  struct std____detail___List_node_base* base732 = (struct std____detail___List_node_base*)((char *)t731 + 0);
  struct std____detail___List_size* base733 = (struct std____detail___List_size*)((char *)t731 + 16);
  std____detail___List_node_header___M_init(t731);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v734) {
bb735:
  struct std__allocator_std___List_node_int__* this736;
  this736 = v734;
  struct std__allocator_std___List_node_int__* t737 = this736;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v738, struct std____detail___List_size* v739) {
bb740:
  struct std____detail___List_size* this741;
  struct std____detail___List_size* unnamed742;
  struct std____detail___List_size* __retval743;
  this741 = v738;
  unnamed742 = v739;
  struct std____detail___List_size* t744 = this741;
  struct std____detail___List_size* t745 = unnamed742;
  unsigned long t746 = t745->_M_size;
  t744->_M_size = t746;
  __retval743 = t744;
  struct std____detail___List_size* t747 = __retval743;
  return t747;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v748) {
bb749:
  struct std____detail___List_node_header* this750;
  struct std____detail___List_size ref_tmp0751;
  this750 = v748;
  struct std____detail___List_node_header* t752 = this750;
  struct std____detail___List_node_base* base753 = (struct std____detail___List_node_base*)((char *)t752 + 0);
  struct std____detail___List_node_base* base754 = (struct std____detail___List_node_base*)((char *)t752 + 0);
  base754->_M_prev = base753;
  struct std____detail___List_node_base* base755 = (struct std____detail___List_node_base*)((char *)t752 + 0);
  base755->_M_next = base753;
  struct std____detail___List_size* base756 = (struct std____detail___List_size*)((char *)t752 + 16);
  ref_tmp0751 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r757 = std____detail___List_size__operator_(base756, &ref_tmp0751);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v758, struct std____allocated_ptr_std__allocator_std___List_node_int___* v759) {
bb760:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this761;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd762;
  this761 = v758;
  __gd762 = v759;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t763 = this761;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t764 = __gd762;
  struct std__allocator_std___List_node_int__* t765 = t764->_M_alloc;
  t763->_M_alloc = t765;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t766 = __gd762;
  struct std___List_node_int_* t767 = t766->_M_ptr;
  t763->_M_ptr = t767;
  struct std___List_node_int_* c768 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t769 = __gd762;
  t769->_M_ptr = c768;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v770) {
bb771:
  struct std___List_node_int_* __ptr772;
  struct std___List_node_int_* __retval773;
  __ptr772 = v770;
  struct std___List_node_int_* t774 = __ptr772;
  __retval773 = t774;
  struct std___List_node_int_* t775 = __retval773;
  return t775;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v776) {
bb777:
  struct std___List_node_int_** __ptr778;
  struct std___List_node_int_* __retval779;
  __ptr778 = v776;
  struct std___List_node_int_** t780 = __ptr778;
  struct std___List_node_int_* t781 = *t780;
  struct std___List_node_int_* r782 = std___List_node_int___std__to_address_std___List_node_int___(t781);
  __retval779 = r782;
  struct std___List_node_int_* t783 = __retval779;
  return t783;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v784) {
bb785:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this786;
  struct std___List_node_int_* __retval787;
  this786 = v784;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t788 = this786;
  struct std___List_node_int_* r789 = auto_std____to_address_std___List_node_int___(&t788->_M_ptr);
  __retval787 = r789;
  struct std___List_node_int_* t790 = __retval787;
  return t790;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v791) {
bb792:
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this793;
  _Bool __retval794;
  this793 = v791;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t795 = this793;
  struct std___List_node_int_* t796 = t795->_M_ptr;
  _Bool cast797 = (_Bool)t796;
  __retval794 = cast797;
  _Bool t798 = __retval794;
  return t798;
}

