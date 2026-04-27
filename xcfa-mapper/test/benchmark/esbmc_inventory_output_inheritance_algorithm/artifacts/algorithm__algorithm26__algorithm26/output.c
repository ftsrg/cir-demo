// Struct definitions (auto-parsed)
struct std::basic_ostream<char> { unsigned char __placeholder; };

int current = 0;
char _str[18] = "myarray[i] == i+1";
char _str_1[96] = "/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/algorithm/algorithm26/main.cpp";
char _str_2[11] = "int main()";
struct std::basic_ostream<char> _ZSt4cout;
// function: _Z12UniqueNumberv
int UniqueNumber() {
bb0:
  int __retval1;
  int* g2 = &current;
  int t3 = *g2;
  int u4 = ++t3;
  *g2 = u4;
  __retval1 = u4;
  int t5 = __retval1;
  return t5;
}

// function: _ZSt17__size_to_integeri
int std____size_to_integer(int v6) {
bb7:
  int __n8;
  int __retval9;
  __n8 = v6;
  int t10 = __n8;
  __retval9 = t10;
  int t11 = __retval9;
  return t11;
}

// function: _ZSt10generate_nIPiiPFivEET_S3_T0_T1_
int* int__std__generate_n_int___int__int________int___int__int____(int* v12, int v13, void* v14) {
bb15:
  int __niter22;
  int* __first23;
  int __n24;
  void* __gen25;
  int* __retval26;
  __first23 = v12;
  __n24 = v13;
  __gen25 = v14;
  goto bb16;
bb16:
  int t27 = __n24;
  int r28 = std____size_to_integer(t27);
  __niter22 = r28;
  goto bb17;
bb17:
  int t29 = __niter22;
  int c30 = 0;
  _Bool c31 = (t29 > c30) ? 1 : 0;
  if (c31) goto bb18; else goto bb20;
bb18:
  void* t32 = __gen25;
  int r33 = ((int (*)())t32)();
  int* t34 = __first23;
  *t34 = r33;
  goto bb19;
bb19:
  int t35 = __niter22;
  int u36 = --t35;
  __niter22 = u36;
  int* t37 = __first23;
  int c38 = 1;
  int* ptr39 = t37 + c38;
  __first23 = ptr39;
  goto bb17;
bb20:
  goto bb21;
bb21:
  int* t40 = __first23;
  __retval26 = t40;
  int* t41 = __retval26;
  return t41;
}

// function: __assert_fail
void __assert_fail(char*, char*, unsigned int, char*);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb42:
  int i52;
  int __retval53;
  int myarray54[9];
  int* cast55 = (int*)myarray54;
  int c56 = 9;
  void* g57 = &_Z12UniqueNumberv;
  int* r58 = int__std__generate_n_int___int__int________int___int__int____(cast55, c56, g57);
  goto bb43;
bb43:
  int c59 = 0;
  i52 = c59;
  goto bb44;
bb44:
  int t60 = i52;
  int c61 = 9;
  _Bool c62 = (t60 < c61) ? 1 : 0;
  if (c62) goto bb45; else goto bb50;
bb45:
  int t63 = i52;
  int t64 = myarray54[t63];
  int t65 = i52;
  int c66 = 1;
  int b67 = t65 + c66;
  _Bool c68 = (t64 == b67) ? 1 : 0;
  if (c68) goto bb46; else goto bb47;
bb46:
  int c69 = 0;
  goto bb48;
bb47:
  char* cast70 = (char*)_str;
