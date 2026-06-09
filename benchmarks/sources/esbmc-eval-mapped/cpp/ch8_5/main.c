/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider { char* _M_p; };
struct std____new_allocator_char_;
struct std__allocator_char_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ { struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char_____Alloc_hider _M_dataplus; unsigned long _M_string_length; union anon_0 field2; };
struct std__ctype_char_;
struct std__ios_base;
struct std__basic_ios_char__std__char_traits_char__;
struct std__basic_ostream_char__std__char_traits_char__;

struct std____cmp_cat____unspec __const_main_agg_tmp7;
struct std____cmp_cat____unspec __const_main_agg_tmp5;
struct std____cmp_cat____unspec __const_main_agg_tmp3;
struct std____cmp_cat____unspec __const_main_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[6] = "happy";
char _str_1[10] = " birthday";
char _str_2[15] = "happy birthday";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[8] = "s1 is \"";
char _str_4[11] = "\"; s2 is \"";
char _str_5[11] = "\"; s3 is \"";
char _str_6[38] = "\n\nThe results of comparing s2 and s1:";
char _str_7[18] = "\ns2 == s1 yields ";
char _str_8[5] = "true";
char _str_9[6] = "false";
char _str_10[18] = "\ns2 != s1 yields ";
char _str_11[18] = "\ns2 >  s1 yields ";
char _str_12[18] = "\ns2 <  s1 yields ";
char _str_13[18] = "\ns2 >= s1 yields ";
char _str_14[18] = "\ns2 <= s1 yields ";
char _str_15[23] = "\n\nTesting s3.empty():\n";
char _str_16[34] = "s3 is empty; assigning s1 to s3;\n";
char _str_17[8] = "s3 is \"";
char _str_18[2] = "\"";
char _str_19[24] = "\n\ns1 += s2 yields s1 = ";
char _str_20[26] = "\n\ns1 += \" to you\" yields\n";
char _str_21[8] = " to you";
char _str_22[6] = "s1 = ";
char _str_23[3] = "\n\n";
char _str_24[48] = "The substring of s1 starting at location 0 for\n";
char _str_25[38] = "14 characters, s1.substr(0, 14), is:\n";
char _str_26[33] = "The substring of s1 starting at\n";
char _str_27[33] = "location 15, s1.substr(15), is:\n";
unsigned long _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE __attribute__((aligned(8))) = -1;
char _str_28[11] = "\n*s4Ptr = ";
char _str_29[28] = "assigning *s4Ptr to *s4Ptr\n";
char _str_30[10] = "*s4Ptr = ";
char _str_31[43] = "\ns1 after s1[0] = 'H' and s1[6] = 'B' is: ";
char _str_32[45] = "Attempt to assign 'd' to s1.at( 30 ) yields:";
char _str_33[50] = "basic_string: construction from null is not valid";
char _str_34[24] = "basic_string::_M_create";
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__maxE __attribute__((aligned(4))) = 2147483647;
int _ZN9__gnu_cxx24__numeric_traits_integerIiE5__minE __attribute__((aligned(4))) = -2147483648;
char _str_35[21] = "basic_string::append";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_36[21] = "basic_string::substr";
char _str_37[55] = "%s: __pos (which is %zu) > this->size() (which is %zu)";
char _str_38[27] = "basic_string::basic_string";
char _str_39[93] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_string.h";
char __PRETTY_FUNCTION____ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm[138] = "reference std::basic_string<char>::operator[](size_type) [_CharT = char, _Traits = std::char_traits<char>, _Alloc = std::allocator<char>]";
char _str_40[16] = "__pos <= size()";
char _str_41[68] = "basic_string::at: __n (which is %zu) >= this->size() (which is %zu)";
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
int main();

extern void __VERIFIER_nondet_memory(void*, unsigned long);
extern unsigned long __VERIFIER_nondet_unsigned_long(void);
// function: main
int main() {
bb0:
  int __retval1;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s12;
  struct std__allocator_char_ ref_tmp03;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s24;
  struct std__allocator_char_ ref_tmp15;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ s36;
  struct std__allocator_char_ ref_tmp27;
  struct std__strong_ordering agg_tmp08;
  struct std____cmp_cat____unspec agg_tmp19;
  struct std__strong_ordering agg_tmp210;
  struct std____cmp_cat____unspec agg_tmp311;
  struct std__strong_ordering agg_tmp412;
  struct std____cmp_cat____unspec agg_tmp513;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp314;
  struct std__strong_ordering agg_tmp615;
  struct std____cmp_cat____unspec agg_tmp716;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup17;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp418;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup19;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ ref_tmp520;
  struct std__basic_ostream_char__std__char_traits_char__* tmp_exprcleanup21;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* s4Ptr22;
  struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* __new_result23;
  int c24 = 0;
  __retval1 = c24;
  char* cast25 = (char*)&(_str);
  // externalized std:: op: std::allocator<char>::allocator()
  __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
    // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
    __VERIFIER_nondet_memory(&s12, sizeof(s12));
    __VERIFIER_nondet_memory(cast25, sizeof(*cast25));
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  {
    // externalized std:: op: std::allocator<char>::~allocator()
    __VERIFIER_nondet_memory(&ref_tmp03, sizeof(ref_tmp03));
  }
    char* cast26 = (char*)&(_str_1);
    // externalized std:: op: std::allocator<char>::allocator()
    __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
      // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
      __VERIFIER_nondet_memory(&s24, sizeof(s24));
      __VERIFIER_nondet_memory(cast26, sizeof(*cast26));
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    {
      // externalized std:: op: std::allocator<char>::~allocator()
      __VERIFIER_nondet_memory(&ref_tmp15, sizeof(ref_tmp15));
    }
      char* cast27 = (char*)&(_str_2);
      // externalized std:: op: std::allocator<char>::allocator()
      __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
        // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string<std::allocator<char> >(char const*, std::allocator<char> const&)
        __VERIFIER_nondet_memory(&s36, sizeof(s36));
        __VERIFIER_nondet_memory(cast27, sizeof(*cast27));
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      {
        // externalized std:: op: std::allocator<char>::~allocator()
        __VERIFIER_nondet_memory(&ref_tmp27, sizeof(ref_tmp27));
      }
        char* cast28 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* std29;
        __VERIFIER_nondet_memory(&std29, sizeof(std29));
        struct std__basic_ostream_char__std__char_traits_char__* std30;
        __VERIFIER_nondet_memory(&std30, sizeof(std30));
        char* cast31 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* std32;
        __VERIFIER_nondet_memory(&std32, sizeof(std32));
        struct std__basic_ostream_char__std__char_traits_char__* std33;
        __VERIFIER_nondet_memory(&std33, sizeof(std33));
        char* cast34 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* std35;
        __VERIFIER_nondet_memory(&std35, sizeof(std35));
        struct std__basic_ostream_char__std__char_traits_char__* std36;
        __VERIFIER_nondet_memory(&std36, sizeof(std36));
        char c37 = 34;
        struct std__basic_ostream_char__std__char_traits_char__* std38;
        __VERIFIER_nondet_memory(&std38, sizeof(std38));
        char* cast39 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* std40;
        __VERIFIER_nondet_memory(&std40, sizeof(std40));
        char* cast41 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* std42;
        __VERIFIER_nondet_memory(&std42, sizeof(std42));
        _Bool std43;
        __VERIFIER_nondet_memory(&std43, sizeof(std43));
        char* cast44 = (char*)&(_str_8);
        char* cast45 = (char*)&(_str_9);
        char* sel46 = std43 ? cast44 : cast45;
        struct std__basic_ostream_char__std__char_traits_char__* std47;
        __VERIFIER_nondet_memory(&std47, sizeof(std47));
        char* cast48 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* std49;
        __VERIFIER_nondet_memory(&std49, sizeof(std49));
        _Bool std50;
        __VERIFIER_nondet_memory(&std50, sizeof(std50));
        _Bool u51 = !std50;
        char* cast52 = (char*)&(_str_8);
        char* cast53 = (char*)&(_str_9);
        char* sel54 = u51 ? cast52 : cast53;
        struct std__basic_ostream_char__std__char_traits_char__* std55;
        __VERIFIER_nondet_memory(&std55, sizeof(std55));
        char* cast56 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* std57;
        __VERIFIER_nondet_memory(&std57, sizeof(std57));
        struct std__strong_ordering std58;
        __VERIFIER_nondet_memory(&std58, sizeof(std58));
        agg_tmp08 = std58;
        agg_tmp19 = *&__const_main_agg_tmp1; // copy
        struct std__strong_ordering t59 = agg_tmp08;
        struct std____cmp_cat____unspec t60 = agg_tmp19;
        _Bool std61;
        __VERIFIER_nondet_memory(&std61, sizeof(std61));
        char* cast62 = (char*)&(_str_8);
        char* cast63 = (char*)&(_str_9);
        char* sel64 = std61 ? cast62 : cast63;
        struct std__basic_ostream_char__std__char_traits_char__* std65;
        __VERIFIER_nondet_memory(&std65, sizeof(std65));
        char* cast66 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* std67;
        __VERIFIER_nondet_memory(&std67, sizeof(std67));
        struct std__strong_ordering std68;
        __VERIFIER_nondet_memory(&std68, sizeof(std68));
        agg_tmp210 = std68;
        agg_tmp311 = *&__const_main_agg_tmp3; // copy
        struct std__strong_ordering t69 = agg_tmp210;
        struct std____cmp_cat____unspec t70 = agg_tmp311;
        _Bool std71;
        __VERIFIER_nondet_memory(&std71, sizeof(std71));
        char* cast72 = (char*)&(_str_8);
        char* cast73 = (char*)&(_str_9);
        char* sel74 = std71 ? cast72 : cast73;
        struct std__basic_ostream_char__std__char_traits_char__* std75;
        __VERIFIER_nondet_memory(&std75, sizeof(std75));
        char* cast76 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* std77;
        __VERIFIER_nondet_memory(&std77, sizeof(std77));
        struct std__strong_ordering std78;
        __VERIFIER_nondet_memory(&std78, sizeof(std78));
        agg_tmp412 = std78;
        agg_tmp513 = *&__const_main_agg_tmp5; // copy
        struct std__strong_ordering t79 = agg_tmp412;
        struct std____cmp_cat____unspec t80 = agg_tmp513;
        _Bool std81;
        __VERIFIER_nondet_memory(&std81, sizeof(std81));
        char* cast82 = (char*)&(_str_8);
        char* cast83 = (char*)&(_str_9);
        char* sel84 = std81 ? cast82 : cast83;
        struct std__basic_ostream_char__std__char_traits_char__* std85;
        __VERIFIER_nondet_memory(&std85, sizeof(std85));
        char* cast86 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* std87;
        __VERIFIER_nondet_memory(&std87, sizeof(std87));
        unsigned long std88 = __VERIFIER_nondet_unsigned_long();
        struct std__basic_ostream_char__std__char_traits_char__* std89;
        __VERIFIER_nondet_memory(&std89, sizeof(std89));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std90;
        __VERIFIER_nondet_memory(&std90, sizeof(std90));
        ref_tmp314 = std90;
          struct std__basic_ostream_char__std__char_traits_char__* std91;
          __VERIFIER_nondet_memory(&std91, sizeof(std91));
          struct std__strong_ordering std92;
          __VERIFIER_nondet_memory(&std92, sizeof(std92));
          agg_tmp615 = std92;
          agg_tmp716 = *&__const_main_agg_tmp7; // copy
          struct std__strong_ordering t93 = agg_tmp615;
          struct std____cmp_cat____unspec t94 = agg_tmp716;
          _Bool std95;
          __VERIFIER_nondet_memory(&std95, sizeof(std95));
          char* cast96 = (char*)&(_str_8);
          char* cast97 = (char*)&(_str_9);
          char* sel98 = std95 ? cast96 : cast97;
          struct std__basic_ostream_char__std__char_traits_char__* std99;
          __VERIFIER_nondet_memory(&std99, sizeof(std99));
          tmp_exprcleanup17 = std99;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp314, sizeof(ref_tmp314));
        }
        struct std__basic_ostream_char__std__char_traits_char__* t100 = tmp_exprcleanup17;
        char* cast101 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* std102;
        __VERIFIER_nondet_memory(&std102, sizeof(std102));
          _Bool std103;
          __VERIFIER_nondet_memory(&std103, sizeof(std103));
          if (std103) {
            char* cast104 = (char*)&(_str_16);
            struct std__basic_ostream_char__std__char_traits_char__* std105;
            __VERIFIER_nondet_memory(&std105, sizeof(std105));
            struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std106;
            __VERIFIER_nondet_memory(&std106, sizeof(std106));
            char* cast107 = (char*)&(_str_17);
            struct std__basic_ostream_char__std__char_traits_char__* std108;
            __VERIFIER_nondet_memory(&std108, sizeof(std108));
            struct std__basic_ostream_char__std__char_traits_char__* std109;
            __VERIFIER_nondet_memory(&std109, sizeof(std109));
            char* cast110 = (char*)&(_str_18);
            struct std__basic_ostream_char__std__char_traits_char__* std111;
            __VERIFIER_nondet_memory(&std111, sizeof(std111));
          }
        char* cast112 = (char*)&(_str_19);
        struct std__basic_ostream_char__std__char_traits_char__* std113;
        __VERIFIER_nondet_memory(&std113, sizeof(std113));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std114;
        __VERIFIER_nondet_memory(&std114, sizeof(std114));
        struct std__basic_ostream_char__std__char_traits_char__* std115;
        __VERIFIER_nondet_memory(&std115, sizeof(std115));
        char* cast116 = (char*)&(_str_20);
        struct std__basic_ostream_char__std__char_traits_char__* std117;
        __VERIFIER_nondet_memory(&std117, sizeof(std117));
        char* cast118 = (char*)&(_str_21);
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std119;
        __VERIFIER_nondet_memory(&std119, sizeof(std119));
        char* cast120 = (char*)&(_str_22);
        struct std__basic_ostream_char__std__char_traits_char__* std121;
        __VERIFIER_nondet_memory(&std121, sizeof(std121));
        struct std__basic_ostream_char__std__char_traits_char__* std122;
        __VERIFIER_nondet_memory(&std122, sizeof(std122));
        char* cast123 = (char*)&(_str_23);
        struct std__basic_ostream_char__std__char_traits_char__* std124;
        __VERIFIER_nondet_memory(&std124, sizeof(std124));
        char* cast125 = (char*)&(_str_24);
        struct std__basic_ostream_char__std__char_traits_char__* std126;
        __VERIFIER_nondet_memory(&std126, sizeof(std126));
        char* cast127 = (char*)&(_str_25);
        struct std__basic_ostream_char__std__char_traits_char__* std128;
        __VERIFIER_nondet_memory(&std128, sizeof(std128));
        unsigned long c129 = 0;
        unsigned long c130 = 14;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std131;
        __VERIFIER_nondet_memory(&std131, sizeof(std131));
        ref_tmp418 = std131;
          struct std__basic_ostream_char__std__char_traits_char__* std132;
          __VERIFIER_nondet_memory(&std132, sizeof(std132));
          char* cast133 = (char*)&(_str_23);
          struct std__basic_ostream_char__std__char_traits_char__* std134;
          __VERIFIER_nondet_memory(&std134, sizeof(std134));
          tmp_exprcleanup19 = std134;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp418, sizeof(ref_tmp418));
        }
        struct std__basic_ostream_char__std__char_traits_char__* t135 = tmp_exprcleanup19;
        char* cast136 = (char*)&(_str_26);
        struct std__basic_ostream_char__std__char_traits_char__* std137;
        __VERIFIER_nondet_memory(&std137, sizeof(std137));
        char* cast138 = (char*)&(_str_27);
        struct std__basic_ostream_char__std__char_traits_char__* std139;
        __VERIFIER_nondet_memory(&std139, sizeof(std139));
        unsigned long c140 = 15;
        unsigned long t141 = _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4nposE;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__ std142;
        __VERIFIER_nondet_memory(&std142, sizeof(std142));
        ref_tmp520 = std142;
          struct std__basic_ostream_char__std__char_traits_char__* std143;
          __VERIFIER_nondet_memory(&std143, sizeof(std143));
          char c144 = 10;
          struct std__basic_ostream_char__std__char_traits_char__* std145;
          __VERIFIER_nondet_memory(&std145, sizeof(std145));
          tmp_exprcleanup21 = std145;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&ref_tmp520, sizeof(ref_tmp520));
        }
        struct std__basic_ostream_char__std__char_traits_char__* t146 = tmp_exprcleanup21;
        unsigned long c147 = 32;
        void* r148 = operator_new(c147);
          struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* cast149 = (struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__*)r148;
          __new_result23 = cast149;
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
          __VERIFIER_nondet_memory(cast149, sizeof(*cast149));
          __VERIFIER_nondet_memory(&s12, sizeof(s12));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t150 = __new_result23;
        s4Ptr22 = t150;
        char* cast151 = (char*)&(_str_28);
        struct std__basic_ostream_char__std__char_traits_char__* std152;
        __VERIFIER_nondet_memory(&std152, sizeof(std152));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t153 = s4Ptr22;
        struct std__basic_ostream_char__std__char_traits_char__* std154;
        __VERIFIER_nondet_memory(&std154, sizeof(std154));
        char* cast155 = (char*)&(_str_23);
        struct std__basic_ostream_char__std__char_traits_char__* std156;
        __VERIFIER_nondet_memory(&std156, sizeof(std156));
        char* cast157 = (char*)&(_str_29);
        struct std__basic_ostream_char__std__char_traits_char__* std158;
        __VERIFIER_nondet_memory(&std158, sizeof(std158));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t159 = s4Ptr22;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t160 = s4Ptr22;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* std161;
        __VERIFIER_nondet_memory(&std161, sizeof(std161));
        char* cast162 = (char*)&(_str_30);
        struct std__basic_ostream_char__std__char_traits_char__* std163;
        __VERIFIER_nondet_memory(&std163, sizeof(std163));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t164 = s4Ptr22;
        struct std__basic_ostream_char__std__char_traits_char__* std165;
        __VERIFIER_nondet_memory(&std165, sizeof(std165));
        char c166 = 10;
        struct std__basic_ostream_char__std__char_traits_char__* std167;
        __VERIFIER_nondet_memory(&std167, sizeof(std167));
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* t168 = s4Ptr22;
        struct std____cxx11__basic_string_char__std__char_traits_char___std__allocator_char__* c169 = ((void*)0);
        _Bool c170 = ((t168 != c169)) ? 1 : 0;
        if (c170) {
            // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
            __VERIFIER_nondet_memory(t168, sizeof(*t168));
          {
            void* cast171 = (void*)t168;
            unsigned long c172 = 32;
            operator_delete_2(cast171, c172);
          }
        }
        char c173 = 72;
        unsigned long c174 = 0;
        char* std175;
        __VERIFIER_nondet_memory(&std175, sizeof(std175));
        *std175 = c173;
        char c176 = 66;
        unsigned long c177 = 6;
        char* std178;
        __VERIFIER_nondet_memory(&std178, sizeof(std178));
        *std178 = c176;
        char* cast179 = (char*)&(_str_31);
        struct std__basic_ostream_char__std__char_traits_char__* std180;
        __VERIFIER_nondet_memory(&std180, sizeof(std180));
        struct std__basic_ostream_char__std__char_traits_char__* std181;
        __VERIFIER_nondet_memory(&std181, sizeof(std181));
        char* cast182 = (char*)&(_str_23);
        struct std__basic_ostream_char__std__char_traits_char__* std183;
        __VERIFIER_nondet_memory(&std183, sizeof(std183));
        char* cast184 = (char*)&(_str_32);
        struct std__basic_ostream_char__std__char_traits_char__* std185;
        __VERIFIER_nondet_memory(&std185, sizeof(std185));
        struct std__basic_ostream_char__std__char_traits_char__* std186;
        __VERIFIER_nondet_memory(&std186, sizeof(std186));
        char c187 = 100;
        unsigned long c188 = 30;
        char* std189;
        __VERIFIER_nondet_memory(&std189, sizeof(std189));
        *std189 = c187;
        int c190 = 0;
        __retval1 = c190;
        int t191 = __retval1;
        int ret_val192 = t191;
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&s36, sizeof(s36));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&s24, sizeof(s24));
        }
        {
          // externalized std:: op: std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string()
          __VERIFIER_nondet_memory(&s12, sizeof(s12));
        }
        return ret_val192;
  int t193 = __retval1;
  return t193;
}

