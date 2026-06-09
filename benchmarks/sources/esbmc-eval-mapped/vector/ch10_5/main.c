extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) double __VERIFIER_virtual_call_double(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((double(*)(void*))__fn)(__obj);
}
__attribute__((weak)) struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ __VERIFIER_virtual_call_struct_std_cxx11_basic_string_char_std_char_traits_char_std_allocator_char(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__(*)(void*))__fn)(__obj);
}
__attribute__((weak)) void __VERIFIER_virtual_call_void(void* __obj, int __slot) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  ((void(*)(void*))__fn)(__obj);
}

// Struct definitions (auto-parsed)
struct Shape { void* __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
union anon_0 { char _M_local_buf[16]; unsigned long _M_allocated_capacity; };
struct std___Setprecision { int _M_n; };
struct std___UninitDestroyGuard_Shape_____void_ { struct Shape** _M_first; struct Shape*** _M_cur; };
struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data { struct Shape** _M_start; struct Shape** _M_finish; struct Shape** _M_end_of_storage; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_Shape___;
struct std____new_allocator_char_;
struct std__allocator_Shape___ { unsigned char __field0; };
struct std__allocator_char_;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct Point { struct Shape __field0; int __field1; int __field2; };
struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl { struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl_data __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ios_base;
struct Circle { struct Point __field0; double __field1; };
struct Cylinder { struct Circle __field0; double __field1; };
struct std___Vector_base_Shape____std__allocator_Shape____ { struct std___Vector_base_Shape____std__allocator_Shape_______Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_Shape____std__allocator_Shape____ { struct std___Vector_base_Shape____std__allocator_Shape____ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
int _ZNSt8ios_base10floatfieldE_const __attribute__((aligned(4))) = 260;
int _ZNSt8ios_base5fixedE_const __attribute__((aligned(4))) = 4;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[3] = ": ";
char _str_1[3] = "\n\n";
char _str_2[34] = "\nVirtual function calls made off ";
char _str_3[23] = "base-class pointers:\n\n";
char _str_4[25] = "base-class references:\n\n";
char _str_5[10] = "\narea is ";
char _str_6[12] = "\nvolume is ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIP5ShapeSaIS1_EEixEm[104] = "reference std::vector<Shape *>::operator[](size_type) [_Tp = Shape *, _Alloc = std::allocator<Shape *>]";
char _str_9[19] = "__n < this->size()";
extern void Point__Point(struct Point* p0, int p1, int p2);
extern void Circle__Circle(struct Circle* p0, int p1, int p2, double p3);
extern void Cylinder__Cylinder(struct Cylinder* p0, int p1, int p2, double p3, double p4);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ Point__getName_abi_cxx11____const(struct Point* p0);
extern void Point__print___const(struct Point* p0);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ Circle__getName_abi_cxx11____const(struct Circle* p0);
extern void Circle__print___const(struct Circle* p0);
extern struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ Cylinder__getName_abi_cxx11____const(struct Cylinder* p0);
extern void Cylinder__print___const(struct Cylinder* p0);
void virtualViaPointer(struct Shape* p0);
void virtualViaReference(struct Shape* p0);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z17virtualViaPointerPK5Shape
void virtualViaPointer(struct Shape* v0) {
bb1:
  struct Shape* baseClassPtr2;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp03;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup4;
  baseClassPtr2 = v0;
  struct Shape* t5 = baseClassPtr2;
  void** v6 = (void**)t5;
  void* v7 = *((void**)v6);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ vcall10 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__)__VERIFIER_virtual_call_struct_std_cxx11_basic_string_char_std_char_traits_char_std_allocator_char(t5, 2);
  ref_tmp03 = vcall10;
    struct std__basic_ostream_char__std__char_traits_char__* std11;
    __VERIFIER_nondet_memory(&std11, sizeof(std11));
    char* cast12 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std13;
    __VERIFIER_nondet_memory(&std13, sizeof(std13));
    tmp_exprcleanup4 = std13;
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
  struct std__basic_ostream_char__std__char_traits_char__* t14 = tmp_exprcleanup4;
  struct Shape* t15 = baseClassPtr2;
  void** v16 = (void**)t15;
  void* v17 = *((void**)v16);
  __VERIFIER_virtual_call_void(t15, 3);
  char* cast20 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  struct Shape* t22 = baseClassPtr2;
  void** v23 = (void**)t22;
  void* v24 = *((void**)v23);
  double vcall27 = (double)__VERIFIER_virtual_call_double(t22, 0);
  struct std__basic_ostream_char__std__char_traits_char__* std28;
  __VERIFIER_nondet_memory(&std28, sizeof(std28));
  char* cast29 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std30;
  __VERIFIER_nondet_memory(&std30, sizeof(std30));
  struct Shape* t31 = baseClassPtr2;
  void** v32 = (void**)t31;
  void* v33 = *((void**)v32);
  double vcall36 = (double)__VERIFIER_virtual_call_double(t31, 1);
  struct std__basic_ostream_char__std__char_traits_char__* std37;
  __VERIFIER_nondet_memory(&std37, sizeof(std37));
  char* cast38 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std39;
  __VERIFIER_nondet_memory(&std39, sizeof(std39));
  return;
}

// function: _Z19virtualViaReferenceRK5Shape
void virtualViaReference(struct Shape* v40) {
bb41:
  struct Shape* baseClassRef42;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp043;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup44;
  baseClassRef42 = v40;
  struct Shape* t45 = baseClassRef42;
  void** v46 = (void**)t45;
  void* v47 = *((void**)v46);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ vcall50 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__)__VERIFIER_virtual_call_struct_std_cxx11_basic_string_char_std_char_traits_char_std_allocator_char(t45, 2);
  ref_tmp043 = vcall50;
    struct std__basic_ostream_char__std__char_traits_char__* std51;
    __VERIFIER_nondet_memory(&std51, sizeof(std51));
    char* cast52 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std53;
    __VERIFIER_nondet_memory(&std53, sizeof(std53));
    tmp_exprcleanup44 = std53;
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&ref_tmp043, sizeof(ref_tmp043));
  }
  struct std__basic_ostream_char__std__char_traits_char__* t54 = tmp_exprcleanup44;
  struct Shape* t55 = baseClassRef42;
  void** v56 = (void**)t55;
  void* v57 = *((void**)v56);
  __VERIFIER_virtual_call_void(t55, 3);
  char* cast60 = (char*)&(_str_5);
  struct std__basic_ostream_char__std__char_traits_char__* std61;
  __VERIFIER_nondet_memory(&std61, sizeof(std61));
  struct Shape* t62 = baseClassRef42;
  void** v63 = (void**)t62;
  void* v64 = *((void**)v63);
  double vcall67 = (double)__VERIFIER_virtual_call_double(t62, 0);
  struct std__basic_ostream_char__std__char_traits_char__* std68;
  __VERIFIER_nondet_memory(&std68, sizeof(std68));
  char* cast69 = (char*)&(_str_6);
  struct std__basic_ostream_char__std__char_traits_char__* std70;
  __VERIFIER_nondet_memory(&std70, sizeof(std70));
  struct Shape* t71 = baseClassRef42;
  void** v72 = (void**)t71;
  void* v73 = *((void**)v72);
  double vcall76 = (double)__VERIFIER_virtual_call_double(t71, 1);
  struct std__basic_ostream_char__std__char_traits_char__* std77;
  __VERIFIER_nondet_memory(&std77, sizeof(std77));
  char* cast78 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std79;
  __VERIFIER_nondet_memory(&std79, sizeof(std79));
  return;
}

// function: main
int main() {
bb80:
  int __retval81;
  struct std___Setprecision agg_tmp082;
  struct Point point83;
  struct Circle circle84;
  struct Cylinder cylinder85;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp086;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup87;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp188;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup89;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp290;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup91;
  struct std__vector_Shape____std__allocator_Shape____ shapeVector92;
  struct std__allocator_Shape___ ref_tmp393;
  int c94 = 0;
  __retval81 = c94;
  struct std__basic_ostream_char__std__char_traits_char__* std95;
  __VERIFIER_nondet_memory(&std95, sizeof(std95));
  int c96 = 2;
  struct std___Setprecision std97;
  __VERIFIER_nondet_memory(&std97, sizeof(std97));
  agg_tmp082 = std97;
  struct std___Setprecision t98 = agg_tmp082;
  struct std__basic_ostream_char__std__char_traits_char__* std99;
  __VERIFIER_nondet_memory(&std99, sizeof(std99));
  int c100 = 7;
  int c101 = 11;
  Point__Point(&point83, c100, c101);
  int c102 = 22;
  int c103 = 8;
  double c104 = 0x1.cp1;
  Circle__Circle(&circle84, c102, c103, c104);
  int c105 = 10;
  int c106 = 10;
  double c107 = 0x1.a666666666666p1;
  int c108 = 10;
  double cast109 = (double)c108;
  Cylinder__Cylinder(&cylinder85, c105, c106, c107, cast109);
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r110 = Point__getName_abi_cxx11____const(&point83);
  ref_tmp086 = r110;
    struct std__basic_ostream_char__std__char_traits_char__* std111;
    __VERIFIER_nondet_memory(&std111, sizeof(std111));
    char* cast112 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std113;
    __VERIFIER_nondet_memory(&std113, sizeof(std113));
    tmp_exprcleanup87 = std113;
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&ref_tmp086, sizeof(ref_tmp086));
  }
  struct std__basic_ostream_char__std__char_traits_char__* t114 = tmp_exprcleanup87;
  Point__print___const(&point83);
  char c115 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std116;
  __VERIFIER_nondet_memory(&std116, sizeof(std116));
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r117 = Circle__getName_abi_cxx11____const(&circle84);
  ref_tmp188 = r117;
    struct std__basic_ostream_char__std__char_traits_char__* std118;
    __VERIFIER_nondet_memory(&std118, sizeof(std118));
    char* cast119 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std120;
    __VERIFIER_nondet_memory(&std120, sizeof(std120));
    tmp_exprcleanup89 = std120;
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&ref_tmp188, sizeof(ref_tmp188));
  }
  struct std__basic_ostream_char__std__char_traits_char__* t121 = tmp_exprcleanup89;
  Circle__print___const(&circle84);
  char c122 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std123;
  __VERIFIER_nondet_memory(&std123, sizeof(std123));
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ r124 = Cylinder__getName_abi_cxx11____const(&cylinder85);
  ref_tmp290 = r124;
    struct std__basic_ostream_char__std__char_traits_char__* std125;
    __VERIFIER_nondet_memory(&std125, sizeof(std125));
    char* cast126 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* std127;
    __VERIFIER_nondet_memory(&std127, sizeof(std127));
    tmp_exprcleanup91 = std127;
  {
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
    __VERIFIER_nondet_memory(&ref_tmp290, sizeof(ref_tmp290));
  }
  struct std__basic_ostream_char__std__char_traits_char__* t128 = tmp_exprcleanup91;
  Cylinder__print___const(&cylinder85);
  char* cast129 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std130;
  __VERIFIER_nondet_memory(&std130, sizeof(std130));
  unsigned long c131 = 3;
  // externalized std:: op: std::allocator<Shape*>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp393, sizeof(ref_tmp393));
    // externalized std:: op: std::vector<Shape*, std::allocator<Shape*> >::vector(unsigned long, std::allocator<Shape*> const&)
    __VERIFIER_nondet_memory(&shapeVector92, sizeof(shapeVector92));
    __VERIFIER_nondet_memory(&ref_tmp393, sizeof(ref_tmp393));
  {
    // externalized std:: op: std::allocator<Shape*>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp393, sizeof(ref_tmp393));
  }
    struct Shape* base132 = (struct Shape*)((char *)&(point83) + 0);
    unsigned long c133 = 0;
    struct Shape** std134;
    __VERIFIER_nondet_memory(&std134, sizeof(std134));
    *std134 = base132;
    struct Shape* base135 = (struct Shape*)((char *)&(circle84) + 0);
    unsigned long c136 = 1;
    struct Shape** std137;
    __VERIFIER_nondet_memory(&std137, sizeof(std137));
    *std137 = base135;
    struct Shape* base138 = (struct Shape*)((char *)&(cylinder85) + 0);
    unsigned long c139 = 2;
    struct Shape** std140;
    __VERIFIER_nondet_memory(&std140, sizeof(std140));
    *std140 = base138;
    char* cast141 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std142;
    __VERIFIER_nondet_memory(&std142, sizeof(std142));
    char* cast143 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std144;
    __VERIFIER_nondet_memory(&std144, sizeof(std144));
      int i145;
      int c146 = 0;
      i145 = c146;
      while (1) {
        int t148 = i145;
        unsigned long cast149 = (unsigned long)t148;
        unsigned long std150 = __VERIFIER_nondet_unsigned_long();
        _Bool c151 = ((cast149 < std150)) ? 1 : 0;
        if (!c151) break;
        int t152 = i145;
        unsigned long cast153 = (unsigned long)t152;
        struct Shape** std154;
        __VERIFIER_nondet_memory(&std154, sizeof(std154));
        struct Shape* t155 = *std154;
        virtualViaPointer(t155);
      for_step147: ;
        int t156 = i145;
        int u157 = t156 + 1;
        i145 = u157;
      }
    char* cast158 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std159;
    __VERIFIER_nondet_memory(&std159, sizeof(std159));
    char* cast160 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std161;
    __VERIFIER_nondet_memory(&std161, sizeof(std161));
      int j162;
      int c163 = 0;
      j162 = c163;
      while (1) {
        int t165 = j162;
        unsigned long cast166 = (unsigned long)t165;
        unsigned long std167 = __VERIFIER_nondet_unsigned_long();
        _Bool c168 = ((cast166 < std167)) ? 1 : 0;
        if (!c168) break;
        int t169 = j162;
        unsigned long cast170 = (unsigned long)t169;
        struct Shape** std171;
        __VERIFIER_nondet_memory(&std171, sizeof(std171));
        struct Shape* t172 = *std171;
        virtualViaReference(t172);
      for_step164: ;
        int t173 = j162;
        int u174 = t173 + 1;
        j162 = u174;
      }
    int c175 = 0;
    __retval81 = c175;
    int t176 = __retval81;
    int ret_val177 = t176;
    {
      // externalized std:: op: std::vector<Shape*, std::allocator<Shape*> >::~vector()
      __VERIFIER_nondet_memory(&shapeVector92, sizeof(shapeVector92));
    }
    return ret_val177;
  int t178 = __retval81;
  return t178;
}

