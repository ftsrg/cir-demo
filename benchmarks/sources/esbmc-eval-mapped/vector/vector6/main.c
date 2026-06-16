extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____detail____move_iter_cat_int___;
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__move_iterator_int___ { int* _M_current; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[23] = "vectorOne.size() == 10";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector6/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[27] = "vectorOne.capacity() == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[23] = "Size of vectorOne is: ";
char _str_4[11] = " elements.";
char _str_5[27] = "Capacity of vectorOne is: ";
char _str_6[43] = "vectorOne contains the following elements:";
char _str_7[2] = " ";
char _str_8[75] = "Using reserve to reallocate vectorOne with enough storage for 40 elements.";
char _str_9[27] = "vectorOne.capacity() == 40";
char _str_10[84] = "Using resize to increase size of vector to 15 elements, with new elements set to 0.";
char _str_11[23] = "vectorOne.size() == 15";
char _str_12[55] = "Using resize to decrease size of vector to 5 elements.";
char _str_13[22] = "vectorOne.size() == 5";
char _str_14[49] = "cannot create std::vector larger than max_size()";
char _str_15[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char _str_16[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_17[19] = "__n < this->size()";
char _str_18[16] = "vector::reserve";
char _str_19[23] = "vector::_M_fill_append";
char _str_20[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_21[9] = "__n >= 0";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_22[26] = "vector::_M_default_append";
extern void reach_error();
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern int rand();
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0: ;
  int __retval1;
  struct std__vector_int__std__allocator_int__ vectorOne2;
  struct std__allocator_int_ ref_tmp03;
  int ref_tmp14;
  int c5 = 0;
  __retval1 = c5;
  unsigned long c6 = 10;
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector(unsigned long, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&vectorOne2, sizeof(vectorOne2));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    unsigned long std7 = __VERIFIER_nondet_unsigned_long();
    unsigned long c8 = 10;
    _Bool c9 = ((std7 == c8)) ? 1 : 0;
    if (c9) {
    } else {
      char* cast10 = (char*)&(_str);
      char* c11 = (char*)_str_1;
      unsigned int c12 = 16;
      char* cast13 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast10, c11, c12, cast13);
    }
    unsigned long std14 = __VERIFIER_nondet_unsigned_long();
    unsigned long c15 = 10;
    _Bool c16 = ((std14 == c15)) ? 1 : 0;
    if (c16) {
    } else {
      char* cast17 = (char*)&(_str_2);
      char* c18 = (char*)_str_1;
      unsigned int c19 = 17;
      char* cast20 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast17, c18, c19, cast20);
    }
    char* cast21 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std22;
    __VERIFIER_nondet_memory(&std22, sizeof(std22));
    unsigned long std23 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std24;
    __VERIFIER_nondet_memory(&std24, sizeof(std24));
    char* cast25 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std26;
    __VERIFIER_nondet_memory(&std26, sizeof(std26));
    struct std__basic_ostream_char__std__char_traits_char__* std27;
    __VERIFIER_nondet_memory(&std27, sizeof(std27));
    char* cast28 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std29;
    __VERIFIER_nondet_memory(&std29, sizeof(std29));
    unsigned long std30 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std31;
    __VERIFIER_nondet_memory(&std31, sizeof(std31));
    char* cast32 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std33;
    __VERIFIER_nondet_memory(&std33, sizeof(std33));
    struct std__basic_ostream_char__std__char_traits_char__* std34;
    __VERIFIER_nondet_memory(&std34, sizeof(std34));
      long index35;
      long c36 = 0;
      index35 = c36;
      while (1) {
        long t38 = index35;
        unsigned long std39 = __VERIFIER_nondet_unsigned_long();
        long cast40 = (long)std39;
        _Bool c41 = ((t38 < cast40)) ? 1 : 0;
        if (!c41) break;
        int r42 = rand();
        long t43 = index35;
        unsigned long cast44 = (unsigned long)t43;
        int* std45;
        __VERIFIER_nondet_memory(&std45, sizeof(std45));
        *std45 = r42;
      for_step37: ;
        long t46 = index35;
        long u47 = t46 + 1;
        index35 = u47;
      }
    char* cast48 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std49;
    __VERIFIER_nondet_memory(&std49, sizeof(std49));
    struct std__basic_ostream_char__std__char_traits_char__* std50;
    __VERIFIER_nondet_memory(&std50, sizeof(std50));
      long index51;
      long c52 = 0;
      index51 = c52;
      while (1) {
        long t54 = index51;
        unsigned long std55 = __VERIFIER_nondet_unsigned_long();
        long cast56 = (long)std55;
        _Bool c57 = ((t54 < cast56)) ? 1 : 0;
        if (!c57) break;
          long t58 = index51;
          unsigned long cast59 = (unsigned long)t58;
          int* std60;
          __VERIFIER_nondet_memory(&std60, sizeof(std60));
          int t61 = *std60;
          struct std__basic_ostream_char__std__char_traits_char__* std62;
          __VERIFIER_nondet_memory(&std62, sizeof(std62));
          char* cast63 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std64;
          __VERIFIER_nondet_memory(&std64, sizeof(std64));
      for_step53: ;
        long t65 = index51;
        long u66 = t65 + 1;
        index51 = u66;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    struct std__basic_ostream_char__std__char_traits_char__* std68;
    __VERIFIER_nondet_memory(&std68, sizeof(std68));
    char* cast69 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* std70;
    __VERIFIER_nondet_memory(&std70, sizeof(std70));
    struct std__basic_ostream_char__std__char_traits_char__* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    unsigned long c72 = 40;
    // externalized std:: op: std::vector<int, std::allocator<int> >::reserve(unsigned long)
    __VERIFIER_nondet_memory(&vectorOne2, sizeof(vectorOne2));
    unsigned long std73 = __VERIFIER_nondet_unsigned_long();
    unsigned long c74 = 10;
    _Bool c75 = ((std73 == c74)) ? 1 : 0;
    if (c75) {
    } else {
      char* cast76 = (char*)&(_str);
      char* c77 = (char*)_str_1;
      unsigned int c78 = 29;
      char* cast79 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast76, c77, c78, cast79);
    }
    unsigned long std80 = __VERIFIER_nondet_unsigned_long();
    unsigned long c81 = 40;
    _Bool c82 = ((std80 == c81)) ? 1 : 0;
    if (c82) {
    } else {
      char* cast83 = (char*)&(_str_9);
      char* c84 = (char*)_str_1;
      unsigned int c85 = 30;
      char* cast86 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast83, c84, c85, cast86);
    }
    char* cast87 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std88;
    __VERIFIER_nondet_memory(&std88, sizeof(std88));
    unsigned long std89 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std90;
    __VERIFIER_nondet_memory(&std90, sizeof(std90));
    char* cast91 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std92;
    __VERIFIER_nondet_memory(&std92, sizeof(std92));
    struct std__basic_ostream_char__std__char_traits_char__* std93;
    __VERIFIER_nondet_memory(&std93, sizeof(std93));
    char* cast94 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std95;
    __VERIFIER_nondet_memory(&std95, sizeof(std95));
    unsigned long std96 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std97;
    __VERIFIER_nondet_memory(&std97, sizeof(std97));
    char* cast98 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std99;
    __VERIFIER_nondet_memory(&std99, sizeof(std99));
    struct std__basic_ostream_char__std__char_traits_char__* std100;
    __VERIFIER_nondet_memory(&std100, sizeof(std100));
      long index101;
      long c102 = 0;
      index101 = c102;
      while (1) {
        long t104 = index101;
        unsigned long std105 = __VERIFIER_nondet_unsigned_long();
        long cast106 = (long)std105;
        _Bool c107 = ((t104 < cast106)) ? 1 : 0;
        if (!c107) break;
        int r108 = rand();
        long t109 = index101;
        unsigned long cast110 = (unsigned long)t109;
        int* std111;
        __VERIFIER_nondet_memory(&std111, sizeof(std111));
        *std111 = r108;
      for_step103: ;
        long t112 = index101;
        long u113 = t112 + 1;
        index101 = u113;
      }
    char* cast114 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std115;
    __VERIFIER_nondet_memory(&std115, sizeof(std115));
    struct std__basic_ostream_char__std__char_traits_char__* std116;
    __VERIFIER_nondet_memory(&std116, sizeof(std116));
      long index117;
      long c118 = 0;
      index117 = c118;
      while (1) {
        long t120 = index117;
        unsigned long std121 = __VERIFIER_nondet_unsigned_long();
        long cast122 = (long)std121;
        _Bool c123 = ((t120 < cast122)) ? 1 : 0;
        if (!c123) break;
          long t124 = index117;
          unsigned long cast125 = (unsigned long)t124;
          int* std126;
          __VERIFIER_nondet_memory(&std126, sizeof(std126));
          int t127 = *std126;
          struct std__basic_ostream_char__std__char_traits_char__* std128;
          __VERIFIER_nondet_memory(&std128, sizeof(std128));
          char* cast129 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std130;
          __VERIFIER_nondet_memory(&std130, sizeof(std130));
      for_step119: ;
        long t131 = index117;
        long u132 = t131 + 1;
        index117 = u132;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std133;
    __VERIFIER_nondet_memory(&std133, sizeof(std133));
    struct std__basic_ostream_char__std__char_traits_char__* std134;
    __VERIFIER_nondet_memory(&std134, sizeof(std134));
    char* cast135 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* std136;
    __VERIFIER_nondet_memory(&std136, sizeof(std136));
    struct std__basic_ostream_char__std__char_traits_char__* std137;
    __VERIFIER_nondet_memory(&std137, sizeof(std137));
    unsigned long c138 = 15;
    int c139 = 0;
    ref_tmp14 = c139;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long, int const&)
    __VERIFIER_nondet_memory(&vectorOne2, sizeof(vectorOne2));
    __VERIFIER_nondet_memory(&ref_tmp14, sizeof(ref_tmp14));
    unsigned long std140 = __VERIFIER_nondet_unsigned_long();
    unsigned long c141 = 15;
    _Bool c142 = ((std140 == c141)) ? 1 : 0;
    if (c142) {
    } else {
      char* cast143 = (char*)&(_str_11);
      char* c144 = (char*)_str_1;
      unsigned int c145 = 41;
      char* cast146 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast143, c144, c145, cast146);
    }
    unsigned long std147 = __VERIFIER_nondet_unsigned_long();
    unsigned long c148 = 40;
    _Bool c149 = ((std147 == c148)) ? 1 : 0;
    if (c149) {
    } else {
      char* cast150 = (char*)&(_str_9);
      char* c151 = (char*)_str_1;
      unsigned int c152 = 42;
      char* cast153 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast150, c151, c152, cast153);
    }
    char* cast154 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std155;
    __VERIFIER_nondet_memory(&std155, sizeof(std155));
    unsigned long std156 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std157;
    __VERIFIER_nondet_memory(&std157, sizeof(std157));
    char* cast158 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std159;
    __VERIFIER_nondet_memory(&std159, sizeof(std159));
    struct std__basic_ostream_char__std__char_traits_char__* std160;
    __VERIFIER_nondet_memory(&std160, sizeof(std160));
    char* cast161 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std162;
    __VERIFIER_nondet_memory(&std162, sizeof(std162));
    unsigned long std163 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std164;
    __VERIFIER_nondet_memory(&std164, sizeof(std164));
    char* cast165 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std166;
    __VERIFIER_nondet_memory(&std166, sizeof(std166));
    struct std__basic_ostream_char__std__char_traits_char__* std167;
    __VERIFIER_nondet_memory(&std167, sizeof(std167));
      long index168;
      long c169 = 0;
      index168 = c169;
      while (1) {
        long t171 = index168;
        unsigned long std172 = __VERIFIER_nondet_unsigned_long();
        long cast173 = (long)std172;
        _Bool c174 = ((t171 < cast173)) ? 1 : 0;
        if (!c174) break;
        int r175 = rand();
        long t176 = index168;
        unsigned long cast177 = (unsigned long)t176;
        int* std178;
        __VERIFIER_nondet_memory(&std178, sizeof(std178));
        *std178 = r175;
      for_step170: ;
        long t179 = index168;
        long u180 = t179 + 1;
        index168 = u180;
      }
    char* cast181 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std182;
    __VERIFIER_nondet_memory(&std182, sizeof(std182));
    struct std__basic_ostream_char__std__char_traits_char__* std183;
    __VERIFIER_nondet_memory(&std183, sizeof(std183));
      long index184;
      long c185 = 0;
      index184 = c185;
      while (1) {
        long t187 = index184;
        unsigned long std188 = __VERIFIER_nondet_unsigned_long();
        long cast189 = (long)std188;
        _Bool c190 = ((t187 < cast189)) ? 1 : 0;
        if (!c190) break;
          long t191 = index184;
          unsigned long cast192 = (unsigned long)t191;
          int* std193;
          __VERIFIER_nondet_memory(&std193, sizeof(std193));
          int t194 = *std193;
          struct std__basic_ostream_char__std__char_traits_char__* std195;
          __VERIFIER_nondet_memory(&std195, sizeof(std195));
          char* cast196 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std197;
          __VERIFIER_nondet_memory(&std197, sizeof(std197));
      for_step186: ;
        long t198 = index184;
        long u199 = t198 + 1;
        index184 = u199;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std200;
    __VERIFIER_nondet_memory(&std200, sizeof(std200));
    struct std__basic_ostream_char__std__char_traits_char__* std201;
    __VERIFIER_nondet_memory(&std201, sizeof(std201));
    char* cast202 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* std203;
    __VERIFIER_nondet_memory(&std203, sizeof(std203));
    struct std__basic_ostream_char__std__char_traits_char__* std204;
    __VERIFIER_nondet_memory(&std204, sizeof(std204));
    unsigned long c205 = 5;
    // externalized std:: op: std::vector<int, std::allocator<int> >::resize(unsigned long)
    __VERIFIER_nondet_memory(&vectorOne2, sizeof(vectorOne2));
    unsigned long std206 = __VERIFIER_nondet_unsigned_long();
    unsigned long c207 = 5;
    _Bool c208 = ((std206 == c207)) ? 1 : 0;
    if (c208) {
    } else {
      char* cast209 = (char*)&(_str_13);
      char* c210 = (char*)_str_1;
      unsigned int c211 = 53;
      char* cast212 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast209, c210, c211, cast212);
    }
    unsigned long std213 = __VERIFIER_nondet_unsigned_long();
    unsigned long c214 = 40;
    _Bool c215 = ((std213 == c214)) ? 1 : 0;
    if (c215) {
    } else {
      char* cast216 = (char*)&(_str_9);
      char* c217 = (char*)_str_1;
      unsigned int c218 = 54;
      char* cast219 = (char*)&(__PRETTY_FUNCTION___main);
      reach_error();
      __assert_fail(cast216, c217, c218, cast219);
    }
    char* cast220 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std221;
    __VERIFIER_nondet_memory(&std221, sizeof(std221));
    unsigned long std222 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std223;
    __VERIFIER_nondet_memory(&std223, sizeof(std223));
    char* cast224 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std225;
    __VERIFIER_nondet_memory(&std225, sizeof(std225));
    struct std__basic_ostream_char__std__char_traits_char__* std226;
    __VERIFIER_nondet_memory(&std226, sizeof(std226));
    char* cast227 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std228;
    __VERIFIER_nondet_memory(&std228, sizeof(std228));
    unsigned long std229 = __VERIFIER_nondet_unsigned_long();
    struct std__basic_ostream_char__std__char_traits_char__* std230;
    __VERIFIER_nondet_memory(&std230, sizeof(std230));
    char* cast231 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std232;
    __VERIFIER_nondet_memory(&std232, sizeof(std232));
    struct std__basic_ostream_char__std__char_traits_char__* std233;
    __VERIFIER_nondet_memory(&std233, sizeof(std233));
      long index234;
      long c235 = 0;
      index234 = c235;
      while (1) {
        long t237 = index234;
        unsigned long std238 = __VERIFIER_nondet_unsigned_long();
        long cast239 = (long)std238;
        _Bool c240 = ((t237 < cast239)) ? 1 : 0;
        if (!c240) break;
        int r241 = rand();
        long t242 = index234;
        unsigned long cast243 = (unsigned long)t242;
        int* std244;
        __VERIFIER_nondet_memory(&std244, sizeof(std244));
        *std244 = r241;
      for_step236: ;
        long t245 = index234;
        long u246 = t245 + 1;
        index234 = u246;
      }
    char* cast247 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* std248;
    __VERIFIER_nondet_memory(&std248, sizeof(std248));
    struct std__basic_ostream_char__std__char_traits_char__* std249;
    __VERIFIER_nondet_memory(&std249, sizeof(std249));
      long index250;
      long c251 = 0;
      index250 = c251;
      while (1) {
        long t253 = index250;
        unsigned long std254 = __VERIFIER_nondet_unsigned_long();
        long cast255 = (long)std254;
        _Bool c256 = ((t253 < cast255)) ? 1 : 0;
        if (!c256) break;
          long t257 = index250;
          unsigned long cast258 = (unsigned long)t257;
          int* std259;
          __VERIFIER_nondet_memory(&std259, sizeof(std259));
          int t260 = *std259;
          struct std__basic_ostream_char__std__char_traits_char__* std261;
          __VERIFIER_nondet_memory(&std261, sizeof(std261));
          char* cast262 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* std263;
          __VERIFIER_nondet_memory(&std263, sizeof(std263));
      for_step252: ;
        long t264 = index250;
        long u265 = t264 + 1;
        index250 = u265;
      }
    struct std__basic_ostream_char__std__char_traits_char__* std266;
    __VERIFIER_nondet_memory(&std266, sizeof(std266));
    struct std__basic_ostream_char__std__char_traits_char__* std267;
    __VERIFIER_nondet_memory(&std267, sizeof(std267));
    int c268 = 0;
    __retval1 = c268;
    int t269 = __retval1;
    int ret_val270 = t269;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&vectorOne2, sizeof(vectorOne2));
    }
    return ret_val270;
  int t271 = __retval1;
  return t271;
}

