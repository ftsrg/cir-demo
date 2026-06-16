extern void abort(void);
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

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

struct std____detail___List_size __const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[16] = "!mylist.empty()";
char _str_1[103] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/list/list_empty/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[37] = "mylist.empty()&&(mylist.size() == 0)";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[8] = "total: ";
char _str_4[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_list.h";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE5frontEv[76] = "reference std::list<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_5[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE9pop_frontEv[75] = "void std::list<int>::pop_front() [_Tp = int, _Alloc = std::allocator<int>]";
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
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* p0, int* p1, int* p2);
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____exchange_std___List_node_int____decltype_nullptr___std___List_node_int_____decltype(struct std___List_node_int_** p0, void** p1);
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______release(struct std____allocated_ptr_std__allocator_std___List_node_int___* p0);
void std____allocated_obj_std__allocator_std___List_node_int__________allocated_obj(struct std____allocated_obj_std__allocator_std___List_node_int___* p0);
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
extern void std____detail___List_node_base___M_hook(struct std____detail___List_node_base* p0, struct std____detail___List_node_base* p1);
void std____cxx11___List_base_int__std__allocator_int______M_inc_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1, int* p2);
void std___List_iterator_int____List_iterator(struct std___List_iterator_int_* p0, struct std____detail___List_node_base* p1);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____end(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* p0, int* p1);
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* p0);
_Bool std____cxx11__list_int__std__allocator_int_____empty___const(struct std____cxx11__list_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
struct std___List_iterator_int_ std____cxx11__list_int__std__allocator_int_____begin(struct std____cxx11__list_int__std__allocator_int__* p0);
int* std___List_iterator_int___operator____const(struct std___List_iterator_int_* p0);
int* std____cxx11__list_int__std__allocator_int_____front(struct std____cxx11__list_int__std__allocator_int__* p0);
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* p0, unsigned long p1);
extern void std____detail___List_node_base___M_unhook(struct std____detail___List_node_base* p0);
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* p0, struct std___List_iterator_int_ p1);
void std____cxx11__list_int__std__allocator_int_____pop_front(struct std____cxx11__list_int__std__allocator_int__* p0);
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* p0);
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* p0);
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
bb1: ;
  struct std____cxx11__list_int__std__allocator_int__* this2;
  this2 = v0;
  struct std____cxx11__list_int__std__allocator_int__* t3 = this2;
  struct std____cxx11___List_base_int__std__allocator_int__* base4 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t3 + 0);
  std____cxx11___List_base_int__std__allocator_int______List_base(base4);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___List_node_int__* std____cxx11___List_base_int__std__allocator_int______M_get_Node_allocator(struct std____cxx11___List_base_int__std__allocator_int__* v5) {
bb6: ;
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
bb13: ;
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
bb24: ;
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
bb58: ;
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
bb79: ;
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
bb90: ;
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
bb98: ;
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
bb108: ;
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
bb117: ;
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
bb127: ;
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

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v134, int* v135) {
bb136: ;
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

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(struct std__allocator_std___List_node_int__* v148, int* v149, int* v150) {
bb151: ;
  struct std__allocator_std___List_node_int__* __a152;
  int* __p153;
  int* __args154;
  __a152 = v148;
  __p153 = v149;
  __args154 = v150;
  int* t155 = __p153;
  int* t156 = __args154;
  int* r157 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t155, t156);
  return;
}

// function: _ZNKSt15__allocated_objISaISt10_List_nodeIiEEEptEv
struct std___List_node_int_* std____allocated_obj_std__allocator_std___List_node_int_______operator_____const(struct std____allocated_obj_std__allocator_std___List_node_int___* v158) {
bb159: ;
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
bb168: ;
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
bb181: ;
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
bb190: ;
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

// function: _ZNSt7__cxx114listIiSaIiEE14_M_create_nodeIJRKiEEEPSt10_List_nodeIiEDpOT_
struct std___List_node_int_* std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(struct std____cxx11__list_int__std__allocator_int__* v198, int* v199) {
bb200: ;
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
    void_std__allocator_traits_std__allocator_std___List_node_int_______construct_int__int_const__(t211, r213, t214);
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
bb221: ;
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

// function: _ZNSt7__cxx114listIiSaIiEE9_M_insertIJRKiEEEvSt14_List_iteratorIiEDpOT_
void void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(struct std____cxx11__list_int__std__allocator_int__* v229, struct std___List_iterator_int_ v230, int* v231) {
bb232: ;
  struct std____cxx11__list_int__std__allocator_int__* this233;
  struct std___List_iterator_int_ __position234;
  int* __args235;
  struct std___List_node_int_* __tmp236;
  this233 = v229;
  __position234 = v230;
  __args235 = v231;
  struct std____cxx11__list_int__std__allocator_int__* t237 = this233;
  int* t238 = __args235;
  struct std___List_node_int_* r239 = std___List_node_int___std____cxx11__list_int__std__allocator_int______M_create_node_int_const__(t237, t238);
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
bb247: ;
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
bb253: ;
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

// function: _ZNSt7__cxx114listIiSaIiEE9push_backERKi
void std____cxx11__list_int__std__allocator_int_____push_back(struct std____cxx11__list_int__std__allocator_int__* v260, int* v261) {
bb262: ;
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
  void_std____cxx11__list_int__std__allocator_int______M_insert_int_const__(t266, t269, t268);
  return;
}

// function: _ZNKSt8__detail15_List_node_base7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_base___M_base___const(struct std____detail___List_node_base* v270) {
bb271: ;
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
bb277: ;
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
bb290: ;
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
bb299: ;
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
bb308: ;
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

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_dec_sizeEm
void std____cxx11___List_base_int__std__allocator_int______M_dec_size(struct std____cxx11___List_base_int__std__allocator_int__* v322, unsigned long v323) {
bb324: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this325;
  unsigned long __n326;
  this325 = v322;
  __n326 = v323;
  struct std____cxx11___List_base_int__std__allocator_int__* t327 = this325;
  unsigned long t328 = __n326;
  struct std____detail___List_size* base329 = (struct std____detail___List_size*)((char *)&(t327->_M_impl._M_node) + 16);
  unsigned long t330 = base329->_M_size;
  unsigned long b331 = t330 - t328;
  base329->_M_size = b331;
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE8_M_eraseESt14_List_iteratorIiE
void std____cxx11__list_int__std__allocator_int______M_erase(struct std____cxx11__list_int__std__allocator_int__* v332, struct std___List_iterator_int_ v333) {
bb334: ;
  struct std____cxx11__list_int__std__allocator_int__* this335;
  struct std___List_iterator_int_ __position336;
  struct std___List_node_int_* __n337;
  this335 = v332;
  __position336 = v333;
  struct std____cxx11__list_int__std__allocator_int__* t338 = this335;
  struct std____cxx11___List_base_int__std__allocator_int__* base339 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t338 + 0);
  unsigned long c340 = 1;
  std____cxx11___List_base_int__std__allocator_int______M_dec_size(base339, c340);
  struct std____detail___List_node_base* t341 = __position336._M_node;
  std____detail___List_node_base___M_unhook(t341);
  struct std____detail___List_node_base* t342 = __position336._M_node;
  struct std___List_node_int_* derived343 = (struct std___List_node_int_*)((char *)t342 - 0);
  __n337 = derived343;
  struct std____cxx11___List_base_int__std__allocator_int__* base344 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t338 + 0);
  struct std___List_node_int_* t345 = __n337;
  struct std___List_node_int_* r346 = std___List_node_int____M_node_ptr(t345);
  std____cxx11___List_base_int__std__allocator_int______M_destroy_node(base344, r346);
  return;
}

// function: _ZNSt7__cxx114listIiSaIiEE9pop_frontEv
void std____cxx11__list_int__std__allocator_int_____pop_front(struct std____cxx11__list_int__std__allocator_int__* v347) {
bb348: ;
  struct std____cxx11__list_int__std__allocator_int__* this349;
  struct std___List_iterator_int_ agg_tmp0350;
  this349 = v347;
  struct std____cxx11__list_int__std__allocator_int__* t351 = this349;
    do {
          _Bool r352 = std____cxx11__list_int__std__allocator_int_____empty___const(t351);
          if (r352) {
            char* cast353 = (char*)&(_str_4);
            int c354 = 1788;
            char* cast355 = (char*)&(__PRETTY_FUNCTION____ZNSt7__cxx114listIiSaIiEE9pop_frontEv);
            char* cast356 = (char*)&(_str_5);
            std____glibcxx_assert_fail(cast353, c354, cast355, cast356);
          }
      _Bool c357 = 0;
      if (!c357) break;
    } while (1);
  struct std___List_iterator_int_ r358 = std____cxx11__list_int__std__allocator_int_____begin(t351);
  agg_tmp0350 = r358;
  struct std___List_iterator_int_ t359 = agg_tmp0350;
  std____cxx11__list_int__std__allocator_int______M_erase(t351, t359);
  return;
}

// function: _ZNKSt7__cxx1110_List_baseIiSaIiEE11_M_get_sizeEv
unsigned long std____cxx11___List_base_int__std__allocator_int______M_get_size___const(struct std____cxx11___List_base_int__std__allocator_int__* v360) {
bb361: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this362;
  unsigned long __retval363;
  this362 = v360;
  struct std____cxx11___List_base_int__std__allocator_int__* t364 = this362;
  struct std____detail___List_size* base365 = (struct std____detail___List_size*)((char *)&(t364->_M_impl._M_node) + 16);
  unsigned long t366 = base365->_M_size;
  __retval363 = t366;
  unsigned long t367 = __retval363;
  return t367;
}

// function: _ZNKSt7__cxx114listIiSaIiEE4sizeEv
unsigned long std____cxx11__list_int__std__allocator_int_____size___const(struct std____cxx11__list_int__std__allocator_int__* v368) {
bb369: ;
  struct std____cxx11__list_int__std__allocator_int__* this370;
  unsigned long __retval371;
  this370 = v368;
  struct std____cxx11__list_int__std__allocator_int__* t372 = this370;
  struct std____cxx11___List_base_int__std__allocator_int__* base373 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t372 + 0);
  unsigned long r374 = std____cxx11___List_base_int__std__allocator_int______M_get_size___const(base373);
  __retval371 = r374;
  unsigned long t375 = __retval371;
  return t375;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v376, int v377) {
bb378: ;
  int __a379;
  int __b380;
  int __retval381;
  __a379 = v376;
  __b380 = v377;
  int t382 = __a379;
  int t383 = __b380;
  int b384 = t382 | t383;
  __retval381 = b384;
  int t385 = __retval381;
  return t385;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v386) {
bb387: ;
  struct std__basic_ios_char__std__char_traits_char__* this388;
  int __retval389;
  this388 = v386;
  struct std__basic_ios_char__std__char_traits_char__* t390 = this388;
  struct std__ios_base* base391 = (struct std__ios_base*)((char *)t390 + 0);
  int t392 = base391->_M_streambuf_state;
  __retval389 = t392;
  int t393 = __retval389;
  return t393;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v394, int v395) {
bb396: ;
  struct std__basic_ios_char__std__char_traits_char__* this397;
  int __state398;
  this397 = v394;
  __state398 = v395;
  struct std__basic_ios_char__std__char_traits_char__* t399 = this397;
  int r400 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t399);
  int t401 = __state398;
  int r402 = std__operator_(r400, t401);
  std__basic_ios_char__std__char_traits_char_____clear(t399, r402);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v403, char* v404) {
bb405: ;
  char* __c1406;
  char* __c2407;
  _Bool __retval408;
  __c1406 = v403;
  __c2407 = v404;
  char* t409 = __c1406;
  char t410 = *t409;
  int cast411 = (int)t410;
  char* t412 = __c2407;
  char t413 = *t412;
  int cast414 = (int)t413;
  _Bool c415 = ((cast411 == cast414)) ? 1 : 0;
  __retval408 = c415;
  _Bool t416 = __retval408;
  return t416;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v417) {
bb418: ;
  char* __p419;
  unsigned long __retval420;
  unsigned long __i421;
  __p419 = v417;
  unsigned long c422 = 0;
  __i421 = c422;
    char ref_tmp0423;
    while (1) {
      unsigned long t424 = __i421;
      char* t425 = __p419;
      char* ptr426 = &(t425)[t424];
      char c427 = 0;
      ref_tmp0423 = c427;
      _Bool r428 = __gnu_cxx__char_traits_char___eq(ptr426, &ref_tmp0423);
      _Bool u429 = !r428;
      if (!u429) break;
      unsigned long t430 = __i421;
      unsigned long u431 = t430 + 1;
      __i421 = u431;
    }
  unsigned long t432 = __i421;
  __retval420 = t432;
  unsigned long t433 = __retval420;
  return t433;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v434) {
bb435: ;
  char* __s436;
  unsigned long __retval437;
  __s436 = v434;
    _Bool r438 = std____is_constant_evaluated();
    if (r438) {
      char* t439 = __s436;
      unsigned long r440 = __gnu_cxx__char_traits_char___length(t439);
      __retval437 = r440;
      unsigned long t441 = __retval437;
      return t441;
    }
  char* t442 = __s436;
  unsigned long r443 = strlen(t442);
  __retval437 = r443;
  unsigned long t444 = __retval437;
  return t444;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v445, char* v446) {
bb447: ;
  struct std__basic_ostream_char__std__char_traits_char__* __out448;
  char* __s449;
  struct std__basic_ostream_char__std__char_traits_char__* __retval450;
  __out448 = v445;
  __s449 = v446;
    char* t451 = __s449;
    _Bool cast452 = (_Bool)t451;
    _Bool u453 = !cast452;
    if (u453) {
      struct std__basic_ostream_char__std__char_traits_char__* t454 = __out448;
      void** v455 = (void**)t454;
      void* v456 = *((void**)v455);
      unsigned char* cast457 = (unsigned char*)v456;
      long c458 = -24;
      unsigned char* ptr459 = &(cast457)[c458];
      long* cast460 = (long*)ptr459;
      long t461 = *cast460;
      unsigned char* cast462 = (unsigned char*)t454;
      unsigned char* ptr463 = &(cast462)[t461];
      struct std__basic_ostream_char__std__char_traits_char__* cast464 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr463;
      struct std__basic_ios_char__std__char_traits_char__* cast465 = (struct std__basic_ios_char__std__char_traits_char__*)cast464;
      int t466 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast465, t466);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t467 = __out448;
      char* t468 = __s449;
      char* t469 = __s449;
      unsigned long r470 = std__char_traits_char___length(t469);
      long cast471 = (long)r470;
      struct std__basic_ostream_char__std__char_traits_char__* r472 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t467, t468, cast471);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t473 = __out448;
  __retval450 = t473;
  struct std__basic_ostream_char__std__char_traits_char__* t474 = __retval450;
  return t474;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v475, void* v476) {
bb477: ;
  struct std__basic_ostream_char__std__char_traits_char__* this478;
  void* __pf479;
  struct std__basic_ostream_char__std__char_traits_char__* __retval480;
  this478 = v475;
  __pf479 = v476;
  struct std__basic_ostream_char__std__char_traits_char__* t481 = this478;
  void* t482 = __pf479;
  struct std__basic_ostream_char__std__char_traits_char__* r483 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t482)(t481);
  __retval480 = r483;
  struct std__basic_ostream_char__std__char_traits_char__* t484 = __retval480;
  return t484;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v485) {
bb486: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os487;
  struct std__basic_ostream_char__std__char_traits_char__* __retval488;
  __os487 = v485;
  struct std__basic_ostream_char__std__char_traits_char__* t489 = __os487;
  struct std__basic_ostream_char__std__char_traits_char__* r490 = std__ostream__flush(t489);
  __retval488 = r490;
  struct std__basic_ostream_char__std__char_traits_char__* t491 = __retval488;
  return t491;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v492) {
bb493: ;
  struct std__ctype_char_* __f494;
  struct std__ctype_char_* __retval495;
  __f494 = v492;
    struct std__ctype_char_* t496 = __f494;
    _Bool cast497 = (_Bool)t496;
    _Bool u498 = !cast497;
    if (u498) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t499 = __f494;
  __retval495 = t499;
  struct std__ctype_char_* t500 = __retval495;
  return t500;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v501, char v502) {
bb503: ;
  struct std__ctype_char_* this504;
  char __c505;
  char __retval506;
  this504 = v501;
  __c505 = v502;
  struct std__ctype_char_* t507 = this504;
    char t508 = t507->_M_widen_ok;
    _Bool cast509 = (_Bool)t508;
    if (cast509) {
      char t510 = __c505;
      unsigned char cast511 = (unsigned char)t510;
      unsigned long cast512 = (unsigned long)cast511;
      char t513 = t507->_M_widen[cast512];
      __retval506 = t513;
      char t514 = __retval506;
      return t514;
    }
  std__ctype_char____M_widen_init___const(t507);
  char t515 = __c505;
  void** v516 = (void**)t507;
  void* v517 = *((void**)v516);
  char vcall520 = (char)__VERIFIER_virtual_call_char_char(t507, 6, t515);
  __retval506 = vcall520;
  char t521 = __retval506;
  return t521;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v522, char v523) {
bb524: ;
  struct std__basic_ios_char__std__char_traits_char__* this525;
  char __c526;
  char __retval527;
  this525 = v522;
  __c526 = v523;
  struct std__basic_ios_char__std__char_traits_char__* t528 = this525;
  struct std__ctype_char_* t529 = t528->_M_ctype;
  struct std__ctype_char_* r530 = std__ctype_char__const__std____check_facet_std__ctype_char___(t529);
  char t531 = __c526;
  char r532 = std__ctype_char___widen_char__const(r530, t531);
  __retval527 = r532;
  char t533 = __retval527;
  return t533;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v534) {
bb535: ;
  struct std__basic_ostream_char__std__char_traits_char__* __os536;
  struct std__basic_ostream_char__std__char_traits_char__* __retval537;
  __os536 = v534;
  struct std__basic_ostream_char__std__char_traits_char__* t538 = __os536;
  struct std__basic_ostream_char__std__char_traits_char__* t539 = __os536;
  void** v540 = (void**)t539;
  void* v541 = *((void**)v540);
  unsigned char* cast542 = (unsigned char*)v541;
  long c543 = -24;
  unsigned char* ptr544 = &(cast542)[c543];
  long* cast545 = (long*)ptr544;
  long t546 = *cast545;
  unsigned char* cast547 = (unsigned char*)t539;
  unsigned char* ptr548 = &(cast547)[t546];
  struct std__basic_ostream_char__std__char_traits_char__* cast549 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr548;
  struct std__basic_ios_char__std__char_traits_char__* cast550 = (struct std__basic_ios_char__std__char_traits_char__*)cast549;
  char c551 = 10;
  char r552 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast550, c551);
  struct std__basic_ostream_char__std__char_traits_char__* r553 = std__ostream__put(t538, r552);
  struct std__basic_ostream_char__std__char_traits_char__* r554 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r553);
  __retval537 = r554;
  struct std__basic_ostream_char__std__char_traits_char__* t555 = __retval537;
  return t555;
}

// function: _ZNSt7__cxx114listIiSaIiEED2Ev
void std____cxx11__list_int__std__allocator_int______list(struct std____cxx11__list_int__std__allocator_int__* v556) {
bb557: ;
  struct std____cxx11__list_int__std__allocator_int__* this558;
  this558 = v556;
  struct std____cxx11__list_int__std__allocator_int__* t559 = this558;
  {
    struct std____cxx11___List_base_int__std__allocator_int__* base560 = (struct std____cxx11___List_base_int__std__allocator_int__*)((char *)t559 + 0);
    std____cxx11___List_base_int__std__allocator_int_______List_base(base560);
  }
  return;
}

// function: main
int main() {
bb561: ;
  int __retval562;
  struct std____cxx11__list_int__std__allocator_int__ mylist563;
  int sum564;
  int c565 = 0;
  __retval562 = c565;
  std____cxx11__list_int__std__allocator_int_____list(&mylist563);
    int c566 = 0;
    sum564 = c566;
      int i567;
      int c568 = 1;
      i567 = c568;
      while (1) {
        int t570 = i567;
        int c571 = 10;
        _Bool c572 = ((t570 <= c571)) ? 1 : 0;
        if (!c572) break;
        std____cxx11__list_int__std__allocator_int_____push_back(&mylist563, &i567);
      for_step569: ;
        int t573 = i567;
        int u574 = t573 + 1;
        i567 = u574;
      }
    _Bool r575 = std____cxx11__list_int__std__allocator_int_____empty___const(&mylist563);
    _Bool u576 = !r575;
    if (u576) {
    } else {
      char* cast577 = (char*)&(_str);
      char* c578 = (char*)_str_1;
      unsigned int c579 = 21;
      char* cast580 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast577, c578, c579, cast580);
    }
      while (1) {
        _Bool r581 = std____cxx11__list_int__std__allocator_int_____empty___const(&mylist563);
        _Bool u582 = !r581;
        if (!u582) break;
          int* r583 = std____cxx11__list_int__std__allocator_int_____front(&mylist563);
          int t584 = *r583;
          int t585 = sum564;
          int b586 = t585 + t584;
          sum564 = b586;
          std____cxx11__list_int__std__allocator_int_____pop_front(&mylist563);
      }
    _Bool r587 = std____cxx11__list_int__std__allocator_int_____empty___const(&mylist563);
    _Bool ternary588;
    if (r587) {
      unsigned long r589 = std____cxx11__list_int__std__allocator_int_____size___const(&mylist563);
      unsigned long c590 = 0;
      _Bool c591 = ((r589 == c590)) ? 1 : 0;
      ternary588 = (_Bool)c591;
    } else {
      _Bool c592 = 0;
      ternary588 = (_Bool)c592;
    }
    if (ternary588) {
    } else {
      char* cast593 = (char*)&(_str_2);
      char* c594 = (char*)_str_1;
      unsigned int c595 = 27;
      char* cast596 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast593, c594, c595, cast596);
    }
    char* cast597 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r598 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast597);
    int t599 = sum564;
    struct std__basic_ostream_char__std__char_traits_char__* r600 = std__ostream__operator__(r598, t599);
    struct std__basic_ostream_char__std__char_traits_char__* r601 = std__ostream__operator___std__ostream_____(r600, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c602 = 0;
    __retval562 = c602;
    int t603 = __retval562;
    int ret_val604 = t603;
    {
      std____cxx11__list_int__std__allocator_int______list(&mylist563);
    }
    return ret_val604;
  int t605 = __retval562;
  return t605;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v606) {
bb607: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this608;
  this608 = v606;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t609 = this608;
  struct std__allocator_std___List_node_int__* base610 = (struct std__allocator_std___List_node_int__*)((char *)t609 + 0);
  std__allocator_std___List_node_int_____allocator(base610);
    std____detail___List_node_header___List_node_header(&t609->_M_node);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE10_List_implD2Ev
void std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(struct std____cxx11___List_base_int__std__allocator_int_____List_impl* v611) {
bb612: ;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* this613;
  this613 = v611;
  struct std____cxx11___List_base_int__std__allocator_int_____List_impl* t614 = this613;
  {
    struct std__allocator_std___List_node_int__* base615 = (struct std__allocator_std___List_node_int__*)((char *)t614 + 0);
    std__allocator_std___List_node_int______allocator(base615);
  }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEEC2Ev
void std____cxx11___List_base_int__std__allocator_int______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v616) {
bb617: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this618;
  this618 = v616;
  struct std____cxx11___List_base_int__std__allocator_int__* t619 = this618;
  std____cxx11___List_base_int__std__allocator_int______List_impl___List_impl(&t619->_M_impl);
  return;
}

// function: _ZNSt8__detail17_List_node_header7_M_baseEv
struct std____detail___List_node_base* std____detail___List_node_header___M_base(struct std____detail___List_node_header* v620) {
bb621: ;
  struct std____detail___List_node_header* this622;
  struct std____detail___List_node_base* __retval623;
  this622 = v620;
  struct std____detail___List_node_header* t624 = this622;
  struct std____detail___List_node_base* base625 = (struct std____detail___List_node_base*)((char *)t624 + 0);
  __retval623 = base625;
  struct std____detail___List_node_base* t626 = __retval623;
  return t626;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v627) {
bb628: ;
  int* __location629;
  __location629 = v627;
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(struct std__allocator_std___List_node_int__* v630, int* v631) {
bb632: ;
  struct std__allocator_std___List_node_int__* __a633;
  int* __p634;
  __a633 = v630;
  __p634 = v631;
  int* t635 = __p634;
  void_std__destroy_at_int_(t635);
  return;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v636) {
bb637: ;
  struct __gnu_cxx____aligned_membuf_int_* this638;
  void* __retval639;
  this638 = v636;
  struct __gnu_cxx____aligned_membuf_int_* t640 = this638;
  void* cast641 = (void*)&(t640->_M_storage);
  __retval639 = cast641;
  void* t642 = __retval639;
  return t642;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v643) {
bb644: ;
  struct __gnu_cxx____aligned_membuf_int_* this645;
  int* __retval646;
  this645 = v643;
  struct __gnu_cxx____aligned_membuf_int_* t647 = this645;
  void* r648 = __gnu_cxx____aligned_membuf_int____M_addr(t647);
  int* cast649 = (int*)r648;
  __retval646 = cast649;
  int* t650 = __retval646;
  return t650;
}

// function: _ZNSt10_List_nodeIiE9_M_valptrEv
int* std___List_node_int____M_valptr(struct std___List_node_int_* v651) {
bb652: ;
  struct std___List_node_int_* this653;
  int* __retval654;
  this653 = v651;
  struct std___List_node_int_* t655 = this653;
  int* r656 = __gnu_cxx____aligned_membuf_int____M_ptr(&t655->_M_storage);
  __retval654 = r656;
  int* t657 = __retval654;
  return t657;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb658: ;
  _Bool __retval659;
    _Bool c660 = 0;
    __retval659 = c660;
    _Bool t661 = __retval659;
    return t661;
  abort();
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___List_node_int_____deallocate(struct std____new_allocator_std___List_node_int__* v662, struct std___List_node_int_* v663, unsigned long v664) {
bb665: ;
  struct std____new_allocator_std___List_node_int__* this666;
  struct std___List_node_int_* __p667;
  unsigned long __n668;
  this666 = v662;
  __p667 = v663;
  __n668 = v664;
  struct std____new_allocator_std___List_node_int__* t669 = this666;
    unsigned long c670 = 8;
    unsigned long c671 = 16;
    _Bool c672 = ((c670 > c671)) ? 1 : 0;
    if (c672) {
      struct std___List_node_int_* t673 = __p667;
      void* cast674 = (void*)t673;
      unsigned long t675 = __n668;
      unsigned long c676 = 24;
      unsigned long b677 = t675 * c676;
      unsigned long c678 = 8;
      operator_delete_3(cast674, b677, c678);
      return;
    }
  struct std___List_node_int_* t679 = __p667;
  void* cast680 = (void*)t679;
  unsigned long t681 = __n668;
  unsigned long c682 = 24;
  unsigned long b683 = t681 * c682;
  operator_delete_2(cast680, b683);
  return;
}

// function: _ZNSaISt10_List_nodeIiEE10deallocateEPS0_m
void std__allocator_std___List_node_int_____deallocate(struct std__allocator_std___List_node_int__* v684, struct std___List_node_int_* v685, unsigned long v686) {
bb687: ;
  struct std__allocator_std___List_node_int__* this688;
  struct std___List_node_int_* __p689;
  unsigned long __n690;
  this688 = v684;
  __p689 = v685;
  __n690 = v686;
  struct std__allocator_std___List_node_int__* t691 = this688;
    _Bool r692 = std____is_constant_evaluated();
    if (r692) {
      struct std___List_node_int_* t693 = __p689;
      void* cast694 = (void*)t693;
      operator_delete(cast694);
      return;
    }
  struct std____new_allocator_std___List_node_int__* base695 = (struct std____new_allocator_std___List_node_int__*)((char *)t691 + 0);
  struct std___List_node_int_* t696 = __p689;
  unsigned long t697 = __n690;
  std____new_allocator_std___List_node_int_____deallocate(base695, t696, t697);
  return;
}

// function: _ZNSt16allocator_traitsISaISt10_List_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___List_node_int_______deallocate(struct std__allocator_std___List_node_int__* v698, struct std___List_node_int_* v699, unsigned long v700) {
bb701: ;
  struct std__allocator_std___List_node_int__* __a702;
  struct std___List_node_int_* __p703;
  unsigned long __n704;
  __a702 = v698;
  __p703 = v699;
  __n704 = v700;
  struct std__allocator_std___List_node_int__* t705 = __a702;
  struct std___List_node_int_* t706 = __p703;
  unsigned long t707 = __n704;
  std__allocator_std___List_node_int_____deallocate(t705, t706, t707);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE11_M_put_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_put_node(struct std____cxx11___List_base_int__std__allocator_int__* v708, struct std___List_node_int_* v709) {
bb710: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this711;
  struct std___List_node_int_* __p712;
  this711 = v708;
  __p712 = v709;
  struct std____cxx11___List_base_int__std__allocator_int__* t713 = this711;
  struct std__allocator_std___List_node_int__* base714 = (struct std__allocator_std___List_node_int__*)((char *)&(t713->_M_impl) + 0);
  struct std___List_node_int_* t715 = __p712;
  unsigned long c716 = 1;
  std__allocator_traits_std__allocator_std___List_node_int_______deallocate(base714, t715, c716);
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE15_M_destroy_nodeEPSt10_List_nodeIiE
void std____cxx11___List_base_int__std__allocator_int______M_destroy_node(struct std____cxx11___List_base_int__std__allocator_int__* v717, struct std___List_node_int_* v718) {
bb719: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this720;
  struct std___List_node_int_* __p721;
  this720 = v717;
  __p721 = v718;
  struct std____cxx11___List_base_int__std__allocator_int__* t722 = this720;
  struct std__allocator_std___List_node_int__* base723 = (struct std__allocator_std___List_node_int__*)((char *)&(t722->_M_impl) + 0);
  struct std___List_node_int_* t724 = __p721;
  int* r725 = std___List_node_int____M_valptr(t724);
  void_std__allocator_traits_std__allocator_std___List_node_int_______destroy_int_(base723, r725);
  struct std___List_node_int_* t726 = __p721;
  std____cxx11___List_base_int__std__allocator_int______M_put_node(t722, t726);
  return;
}

// function: _ZNSt10_List_nodeIiE11_M_node_ptrEv
struct std___List_node_int_* std___List_node_int____M_node_ptr(struct std___List_node_int_* v727) {
bb728: ;
  struct std___List_node_int_* this729;
  struct std___List_node_int_* __retval730;
  this729 = v727;
  struct std___List_node_int_* t731 = this729;
  __retval730 = t731;
  struct std___List_node_int_* t732 = __retval730;
  return t732;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEE8_M_clearEv
void std____cxx11___List_base_int__std__allocator_int______M_clear(struct std____cxx11___List_base_int__std__allocator_int__* v733) {
bb734: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this735;
  struct std____detail___List_node_base* __cur736;
  this735 = v733;
  struct std____cxx11___List_base_int__std__allocator_int__* t737 = this735;
  struct std____detail___List_node_base* base738 = (struct std____detail___List_node_base*)((char *)&(t737->_M_impl._M_node) + 0);
  struct std____detail___List_node_base* t739 = base738->_M_next;
  __cur736 = t739;
    while (1) {
      struct std____detail___List_node_base* t740 = __cur736;
      struct std____detail___List_node_base* r741 = std____detail___List_node_header___M_base(&t737->_M_impl._M_node);
      _Bool c742 = ((t740 != r741)) ? 1 : 0;
      if (!c742) break;
        struct std___List_node_int_* __tmp743;
        struct std____detail___List_node_base* t744 = __cur736;
        struct std___List_node_int_* derived745 = (struct std___List_node_int_*)((char *)t744 - 0);
        __tmp743 = derived745;
        struct std___List_node_int_* t746 = __tmp743;
        struct std____detail___List_node_base* base747 = (struct std____detail___List_node_base*)((char *)t746 + 0);
        struct std____detail___List_node_base* t748 = base747->_M_next;
        __cur736 = t748;
        struct std___List_node_int_* t749 = __tmp743;
        struct std___List_node_int_* r750 = std___List_node_int____M_node_ptr(t749);
        std____cxx11___List_base_int__std__allocator_int______M_destroy_node(t737, r750);
    }
  return;
}

// function: _ZNSt7__cxx1110_List_baseIiSaIiEED2Ev
void std____cxx11___List_base_int__std__allocator_int_______List_base(struct std____cxx11___List_base_int__std__allocator_int__* v751) {
bb752: ;
  struct std____cxx11___List_base_int__std__allocator_int__* this753;
  this753 = v751;
  struct std____cxx11___List_base_int__std__allocator_int__* t754 = this753;
    std____cxx11___List_base_int__std__allocator_int______M_clear(t754);
  {
    std____cxx11___List_base_int__std__allocator_int______List_impl____List_impl(&t754->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt10_List_nodeIiEEC2Ev
void std____new_allocator_std___List_node_int_______new_allocator(struct std____new_allocator_std___List_node_int__* v755) {
bb756: ;
  struct std____new_allocator_std___List_node_int__* this757;
  this757 = v755;
  struct std____new_allocator_std___List_node_int__* t758 = this757;
  return;
}

// function: _ZNSaISt10_List_nodeIiEEC2Ev
void std__allocator_std___List_node_int_____allocator(struct std__allocator_std___List_node_int__* v759) {
bb760: ;
  struct std__allocator_std___List_node_int__* this761;
  this761 = v759;
  struct std__allocator_std___List_node_int__* t762 = this761;
  struct std____new_allocator_std___List_node_int__* base763 = (struct std____new_allocator_std___List_node_int__*)((char *)t762 + 0);
  std____new_allocator_std___List_node_int_______new_allocator(base763);
  return;
}

// function: _ZNSt8__detail17_List_node_headerC2Ev
void std____detail___List_node_header___List_node_header(struct std____detail___List_node_header* v764) {
bb765: ;
  struct std____detail___List_node_header* this766;
  this766 = v764;
  struct std____detail___List_node_header* t767 = this766;
  struct std____detail___List_node_base* base768 = (struct std____detail___List_node_base*)((char *)t767 + 0);
  struct std____detail___List_size* base769 = (struct std____detail___List_size*)((char *)t767 + 16);
  std____detail___List_node_header___M_init(t767);
  return;
}

// function: _ZNSaISt10_List_nodeIiEED2Ev
void std__allocator_std___List_node_int______allocator(struct std__allocator_std___List_node_int__* v770) {
bb771: ;
  struct std__allocator_std___List_node_int__* this772;
  this772 = v770;
  struct std__allocator_std___List_node_int__* t773 = this772;
  return;
}

// function: _ZNSt8__detail10_List_sizeaSEOS0_
struct std____detail___List_size* std____detail___List_size__operator_(struct std____detail___List_size* v774, struct std____detail___List_size* v775) {
bb776: ;
  struct std____detail___List_size* this777;
  struct std____detail___List_size* unnamed778;
  struct std____detail___List_size* __retval779;
  this777 = v774;
  unnamed778 = v775;
  struct std____detail___List_size* t780 = this777;
  struct std____detail___List_size* t781 = unnamed778;
  unsigned long t782 = t781->_M_size;
  t780->_M_size = t782;
  __retval779 = t780;
  struct std____detail___List_size* t783 = __retval779;
  return t783;
}

// function: _ZNSt8__detail17_List_node_header7_M_initEv
void std____detail___List_node_header___M_init(struct std____detail___List_node_header* v784) {
bb785: ;
  struct std____detail___List_node_header* this786;
  struct std____detail___List_size ref_tmp0787;
  this786 = v784;
  struct std____detail___List_node_header* t788 = this786;
  struct std____detail___List_node_base* base789 = (struct std____detail___List_node_base*)((char *)t788 + 0);
  struct std____detail___List_node_base* base790 = (struct std____detail___List_node_base*)((char *)t788 + 0);
  base790->_M_prev = base789;
  struct std____detail___List_node_base* base791 = (struct std____detail___List_node_base*)((char *)t788 + 0);
  base791->_M_next = base789;
  struct std____detail___List_size* base792 = (struct std____detail___List_size*)((char *)t788 + 16);
  ref_tmp0787 = *&__const__ZNSt8__detail17_List_node_header7_M_initEv_ref_tmp0; // copy
  struct std____detail___List_size* r793 = std____detail___List_size__operator_(base792, &ref_tmp0787);
  return;
}

// function: _ZNSt15__allocated_ptrISaISt10_List_nodeIiEEEC2EOS3_
void std____allocated_ptr_std__allocator_std___List_node_int_________allocated_ptr(struct std____allocated_ptr_std__allocator_std___List_node_int___* v794, struct std____allocated_ptr_std__allocator_std___List_node_int___* v795) {
bb796: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this797;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* __gd798;
  this797 = v794;
  __gd798 = v795;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t799 = this797;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t800 = __gd798;
  struct std__allocator_std___List_node_int__* t801 = t800->_M_alloc;
  t799->_M_alloc = t801;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t802 = __gd798;
  struct std___List_node_int_* t803 = t802->_M_ptr;
  t799->_M_ptr = t803;
  struct std___List_node_int_* c804 = ((void*)0);
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t805 = __gd798;
  t805->_M_ptr = c804;
  return;
}

// function: _ZSt10to_addressISt10_List_nodeIiEEPT_S3_
struct std___List_node_int_* std___List_node_int___std__to_address_std___List_node_int___(struct std___List_node_int_* v806) {
bb807: ;
  struct std___List_node_int_* __ptr808;
  struct std___List_node_int_* __retval809;
  __ptr808 = v806;
  struct std___List_node_int_* t810 = __ptr808;
  __retval809 = t810;
  struct std___List_node_int_* t811 = __retval809;
  return t811;
}

// function: _ZSt12__to_addressIPSt10_List_nodeIiEEDaRKT_
struct std___List_node_int_* auto_std____to_address_std___List_node_int___(struct std___List_node_int_** v812) {
bb813: ;
  struct std___List_node_int_** __ptr814;
  struct std___List_node_int_* __retval815;
  __ptr814 = v812;
  struct std___List_node_int_** t816 = __ptr814;
  struct std___List_node_int_* t817 = *t816;
  struct std___List_node_int_* r818 = std___List_node_int___std__to_address_std___List_node_int___(t817);
  __retval815 = r818;
  struct std___List_node_int_* t819 = __retval815;
  return t819;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEE3getEv
struct std___List_node_int_* std____allocated_ptr_std__allocator_std___List_node_int_______get___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v820) {
bb821: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this822;
  struct std___List_node_int_* __retval823;
  this822 = v820;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t824 = this822;
  struct std___List_node_int_* r825 = auto_std____to_address_std___List_node_int___(&t824->_M_ptr);
  __retval823 = r825;
  struct std___List_node_int_* t826 = __retval823;
  return t826;
}

// function: _ZNKSt15__allocated_ptrISaISt10_List_nodeIiEEEcvbEv
_Bool std____allocated_ptr_std__allocator_std___List_node_int_______operator_bool___const(struct std____allocated_ptr_std__allocator_std___List_node_int___* v827) {
bb828: ;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* this829;
  _Bool __retval830;
  this829 = v827;
  struct std____allocated_ptr_std__allocator_std___List_node_int___* t831 = this829;
  struct std___List_node_int_* t832 = t831->_M_ptr;
  _Bool cast833 = (_Bool)t832;
  __retval830 = cast833;
  _Bool t834 = __retval830;
  return t834;
}

