extern void abort(void);
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_;
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[8] = "nums1: ";
char _str_1[9] = " nums2: ";
char _str_2[9] = " nums3: ";
char _str_3[12] = "Initially:\n";
char _str_4[18] = "After assigment:\n";
char _str_5[23] = "After move assigment:\n";
char _str_6[26] = "vector::_M_realloc_append";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[35] = "reference std::vector<int>::back()";
char _str_8[15] = "!this->empty()";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void display_sizes(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1, struct std__vector_int__std__allocator_int__* p2);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: _Z13display_sizesRKSt6vectorIiSaIiEES3_S3_
void display_sizes(struct std__vector_int__std__allocator_int__* v0, struct std__vector_int__std__allocator_int__* v1, struct std__vector_int__std__allocator_int__* v2) {
bb3:
  struct std__vector_int__std__allocator_int__* nums14;
  struct std__vector_int__std__allocator_int__* nums25;
  struct std__vector_int__std__allocator_int__* nums36;
  nums14 = v0;
  nums25 = v1;
  nums36 = v2;
  char* cast7 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* std8;
  __VERIFIER_nondet_memory(&std8, sizeof(std8));
  struct std__vector_int__std__allocator_int__* t9 = nums14;
  unsigned long std10 = __VERIFIER_nondet_unsigned_long();
  struct std__basic_ostream_char__std__char_traits_char__* std11;
  __VERIFIER_nondet_memory(&std11, sizeof(std11));
  char* cast12 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* std13;
  __VERIFIER_nondet_memory(&std13, sizeof(std13));
  struct std__vector_int__std__allocator_int__* t14 = nums25;
  unsigned long std15 = __VERIFIER_nondet_unsigned_long();
  struct std__basic_ostream_char__std__char_traits_char__* std16;
  __VERIFIER_nondet_memory(&std16, sizeof(std16));
  char* cast17 = (char*)&(_str_2);
  struct std__basic_ostream_char__std__char_traits_char__* std18;
  __VERIFIER_nondet_memory(&std18, sizeof(std18));
  struct std__vector_int__std__allocator_int__* t19 = nums36;
  unsigned long std20 = __VERIFIER_nondet_unsigned_long();
  struct std__basic_ostream_char__std__char_traits_char__* std21;
  __VERIFIER_nondet_memory(&std21, sizeof(std21));
  char c22 = 10;
  struct std__basic_ostream_char__std__char_traits_char__* std23;
  __VERIFIER_nondet_memory(&std23, sizeof(std23));
  return;
}

// function: main
int main() {
bb24:
  int __retval25;
  struct std__vector_int__std__allocator_int__ nums126;
  int ref_tmp027;
  int ref_tmp128;
  int ref_tmp229;
  int ref_tmp330;
  int ref_tmp431;
  struct std__vector_int__std__allocator_int__ nums232;
  struct std__vector_int__std__allocator_int__ nums333;
  int c34 = 0;
  __retval25 = c34;
  // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
  __VERIFIER_nondet_memory(&nums126, sizeof(nums126));
    int c35 = 1;
    ref_tmp027 = c35;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&nums126, sizeof(nums126));
    __VERIFIER_nondet_memory(&ref_tmp027, sizeof(ref_tmp027));
    int c36 = 2;
    ref_tmp128 = c36;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&nums126, sizeof(nums126));
    __VERIFIER_nondet_memory(&ref_tmp128, sizeof(ref_tmp128));
    int c37 = 3;
    ref_tmp229 = c37;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&nums126, sizeof(nums126));
    __VERIFIER_nondet_memory(&ref_tmp229, sizeof(ref_tmp229));
    int c38 = 4;
    ref_tmp330 = c38;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&nums126, sizeof(nums126));
    __VERIFIER_nondet_memory(&ref_tmp330, sizeof(ref_tmp330));
    int c39 = 5;
    ref_tmp431 = c39;
    // externalized std:: op: std::vector<int, std::allocator<int> >::push_back(int&&)
    __VERIFIER_nondet_memory(&nums126, sizeof(nums126));
    __VERIFIER_nondet_memory(&ref_tmp431, sizeof(ref_tmp431));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
    __VERIFIER_nondet_memory(&nums232, sizeof(nums232));
      // externalized std:: op: std::vector<int, std::allocator<int> >::vector()
      __VERIFIER_nondet_memory(&nums333, sizeof(nums333));
        char* cast40 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std41;
        __VERIFIER_nondet_memory(&std41, sizeof(std41));
        display_sizes(&nums126, &nums232, &nums333);
        struct std__vector_int__std__allocator_int__* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        char* cast43 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std44;
        __VERIFIER_nondet_memory(&std44, sizeof(std44));
        display_sizes(&nums126, &nums232, &nums333);
        char* cast45 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std46;
        __VERIFIER_nondet_memory(&std46, sizeof(std46));
        display_sizes(&nums126, &nums232, &nums333);
      {
        // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
        __VERIFIER_nondet_memory(&nums333, sizeof(nums333));
      }
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&nums232, sizeof(nums232));
    }
  {
    // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
    __VERIFIER_nondet_memory(&nums126, sizeof(nums126));
  }
  int t47 = __retval25;
  return t47;
}

