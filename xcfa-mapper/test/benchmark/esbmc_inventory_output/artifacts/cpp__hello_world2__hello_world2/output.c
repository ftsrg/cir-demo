// Struct definitions (auto-parsed)
struct std::basic_string_view<char> { unsigned long long _M_len; char* _M_str; };

char _str[14] = "Hello, World!";
// function: _ZNSt17basic_string_viewIcSt11char_traitsIcEEC2EPKc
void std__basic_string_view_char__std__char_traits_char_____basic_string_view(struct std::basic_string_view<char>* v0, char* v1) {
bb2:
  struct std::basic_string_view<char>* this3;
  char* __str4;
  this3 = v0;
  __str4 = v1;
  struct std::basic_string_view<char>* t5 = this3;
  char* t6 = __str4;
  unsigned long long r7 = std__char_traits_char___length(t6);
  *t5->_M_len = r7;
  char* t8 = __str4;
  *t5->_M_str = t8;
  return;
}

// function: main
int main() {
bb9:
  int __retval10;
  struct std::basic_string_view<char> message11;
  char* cast12 = (char*)_str;
  std__basic_string_view_char__std__char_traits_char_____basic_string_view(&message11, cast12);
  int c13 = 0;
  __retval10 = c13;
  int t14 = __retval10;
  return t14;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb15:
  _Bool __retval16;
  int c17 = 0;
  int* cast18 = (int*)__retval16;
  *cast18 = c17;
  _Bool t19 = __retval16;
  return t19;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v20, char* v21) {
bb22:
  char* __c123;
  char* __c224;
  _Bool __retval25;
  __c123 = v20;
  __c224 = v21;
  char* t26 = __c123;
  char t27 = *t26;
  int cast28 = (int)t27;
  char* t29 = __c224;
  char t30 = *t29;
  int cast31 = (int)t30;
  _Bool c32 = (cast28 == cast31) ? 1 : 0;
  __retval25 = c32;
  _Bool t33 = __retval25;
  return t33;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long long __gnu_cxx__char_traits_char___length(char* v34) {
  _Bool v35;
bb36:
  char ref.tmp044;
  char* __p45;
  unsigned long long __retval46;
  unsigned long long __i47;
  __p45 = v34;
  int c48 = 0;
  unsigned long long cast49 = (unsigned long long)c48;
  __i47 = cast49;
  goto bb37;
bb37:
  goto bb38;
bb38:
  goto bb39;
bb39:
  char* t50 = __p45;
  unsigned long long t51 = __i47;
  char* ptr52 = t50 + t51;
  char c53 = 0;
  ref.tmp044 = c53;
  _Bool r54 = __gnu_cxx__char_traits_char___eq(ptr52, &ref.tmp044);
  _Bool u55 = !r54;
  v35 = u55;
  goto bb40;
bb40:
  if (v35) goto bb41; else goto bb42;
bb41:
  unsigned long long t56 = __i47;
  unsigned long long u57 = ++t56;
  __i47 = u57;
  goto bb38;
bb42:
  goto bb43;
bb43:
  unsigned long long t58 = __i47;
  __retval46 = t58;
  unsigned long long t59 = __retval46;
  return t59;
}

// function: strlen
unsigned long long strlen(char*);

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long long std__char_traits_char___length(char* v60) {
bb61:
  char* __s66;
  unsigned long long __retval67;
  __s66 = v60;
  goto bb62;
bb62:
  _Bool r68 = std____is_constant_evaluated();
  if (r68) goto bb63; else goto bb64;
bb63:
  char* t69 = __s66;
  unsigned long long r70 = __gnu_cxx__char_traits_char___length(t69);
  __retval67 = r70;
  unsigned long long t71 = __retval67;
  return t71;
bb64:
  goto bb65;
bb65:
  char* t72 = __s66;
  unsigned long long r73 = strlen(t72);
  __retval67 = r73;
  unsigned long long t74 = __retval67;
  return t74;
}

