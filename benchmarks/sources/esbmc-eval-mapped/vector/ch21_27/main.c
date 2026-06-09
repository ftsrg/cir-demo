extern void abort(void);
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct SumSquaresClass_int_ { unsigned char __field0; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_;
struct std__allocator_int_ { unsigned char __field0; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_;
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__ctype_char_;
struct std__ios_base;
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[20] = "vector v contains:\n";
char _str_2[48] = "\n\nSum of squares of elements in integers using ";
char _str_3[29] = "binary\nfunction sumSquares: ";
char _str_4[32] = "binary\nfunction object of type ";
char _str_5[25] = "SumSquaresClass< int >: ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_6[49] = "cannot create std::vector larger than max_size()";
int sumSquares(int p0, int p1);
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern int __VERIFIER_nondet_int(void);
// function: _Z10sumSquaresii
int sumSquares(int v0, int v1) {
bb2:
  int total3;
  int value4;
  int __retval5;
  total3 = v0;
  value4 = v1;
  int t6 = total3;
  int t7 = value4;
  int t8 = value4;
  int b9 = t7 * t8;
  int b10 = t6 + b9;
  __retval5 = b10;
  int t11 = __retval5;
  return t11;
}

// function: main
int main() {
bb12:
  int __retval13;
  int SIZE14;
  int array15[10];
  struct std__vector_int__std__allocator_int__ integers16;
  struct std__allocator_int_ ref_tmp017;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output18;
  int result19;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp020;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp121;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp222;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp323;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp424;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp525;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp626;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp727;
  struct SumSquaresClass_int_ agg_tmp828;
  int c29 = 0;
  __retval13 = c29;
  int c30 = 10;
  SIZE14 = c30;
  // array copy
  __builtin_memcpy(array15, __const_main_array, (unsigned long)10 * sizeof(__const_main_array[0]));
  int* cast31 = (int*)&(array15);
  int* cast32 = (int*)&(array15);
  int t33 = SIZE14;
  int* ptr34 = &(cast32)[t33];
  // externalized std:: op: std::allocator<int>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp017, sizeof(ref_tmp017));
    // externalized std:: op: std::vector<int, std::allocator<int> >::vector<int*, void>(int*, int*, std::allocator<int> const&)
    __VERIFIER_nondet_memory(&integers16, sizeof(integers16));
    __VERIFIER_nondet_memory(cast31, sizeof(*cast31));
    __VERIFIER_nondet_memory(ptr34, sizeof(*ptr34));
    __VERIFIER_nondet_memory(&ref_tmp017, sizeof(ref_tmp017));
  {
    // externalized std:: op: std::allocator<int>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp017, sizeof(ref_tmp017));
  }
    char* cast35 = (char*)&(_str);
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream&, char const*)
    __VERIFIER_nondet_memory(&output18, sizeof(output18));
    __VERIFIER_nondet_memory(&_ZSt4cout, sizeof(*&_ZSt4cout));
    __VERIFIER_nondet_memory(cast35, sizeof(*cast35));
    int c36 = 0;
    result19 = c36;
    char* cast37 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* std38;
    __VERIFIER_nondet_memory(&std38, sizeof(std38));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std39;
    __VERIFIER_nondet_memory(&std39, sizeof(std39));
    agg_tmp020 = std39;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std40;
    __VERIFIER_nondet_memory(&std40, sizeof(std40));
    agg_tmp121 = std40;
    // externalized std:: op: std::ostream_iterator<int, char, std::char_traits<char> >::ostream_iterator(std::ostream_iterator<int, char, std::char_traits<char> > const&)
    __VERIFIER_nondet_memory(&agg_tmp222, sizeof(agg_tmp222));
    __VERIFIER_nondet_memory(&output18, sizeof(output18));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t41 = agg_tmp020;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t42 = agg_tmp121;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t43 = agg_tmp222;
    struct std__ostream_iterator_int__char__std__char_traits_char__ std44;
    __VERIFIER_nondet_memory(&std44, sizeof(std44));
    agg_tmp323 = std44;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std45;
    __VERIFIER_nondet_memory(&std45, sizeof(std45));
    agg_tmp424 = std45;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std46;
    __VERIFIER_nondet_memory(&std46, sizeof(std46));
    agg_tmp525 = std46;
    int c47 = 0;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t48 = agg_tmp424;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t49 = agg_tmp525;
    int std50 = __VERIFIER_nondet_int();
    result19 = std50;
    char* cast51 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std52;
    __VERIFIER_nondet_memory(&std52, sizeof(std52));
    char* cast53 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* std54;
    __VERIFIER_nondet_memory(&std54, sizeof(std54));
    int t55 = result19;
    struct std__basic_ostream_char__std__char_traits_char__* std56;
    __VERIFIER_nondet_memory(&std56, sizeof(std56));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std57;
    __VERIFIER_nondet_memory(&std57, sizeof(std57));
    agg_tmp626 = std57;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std58;
    __VERIFIER_nondet_memory(&std58, sizeof(std58));
    agg_tmp727 = std58;
    int c59 = 0;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t60 = agg_tmp626;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t61 = agg_tmp727;
    struct SumSquaresClass_int_ t62 = agg_tmp828;
    int std63 = __VERIFIER_nondet_int();
    result19 = std63;
    char* cast64 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* std65;
    __VERIFIER_nondet_memory(&std65, sizeof(std65));
    char* cast66 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* std67;
    __VERIFIER_nondet_memory(&std67, sizeof(std67));
    char* cast68 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* std69;
    __VERIFIER_nondet_memory(&std69, sizeof(std69));
    int t70 = result19;
    struct std__basic_ostream_char__std__char_traits_char__* std71;
    __VERIFIER_nondet_memory(&std71, sizeof(std71));
    struct std__basic_ostream_char__std__char_traits_char__* std72;
    __VERIFIER_nondet_memory(&std72, sizeof(std72));
    int c73 = 0;
    __retval13 = c73;
    int t74 = __retval13;
    int ret_val75 = t74;
    {
      // externalized std:: op: std::vector<int, std::allocator<int> >::~vector()
      __VERIFIER_nondet_memory(&integers16, sizeof(integers16));
    }
    return ret_val75;
  int t76 = __retval13;
  return t76;
}

