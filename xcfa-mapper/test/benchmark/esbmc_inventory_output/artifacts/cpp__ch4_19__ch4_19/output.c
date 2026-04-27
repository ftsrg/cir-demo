// Struct definitions (auto-parsed)
struct std::_Setw { int _M_n; };
struct std::basic_istream<char> { unsigned char __placeholder; };
struct std::basic_ostream<char> { unsigned char __placeholder; };

struct std::basic_ostream<char> _ZSt4cout;
char _str[34];
struct std::basic_istream<char> _ZSt3cin;
char _str_3[14];
char _str_4[5] = "    ";
char _str_1[25] = " found in array element ";
char _str_2[11] = " not found";
// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(struct std::basic_ostream<char>*, char*);

// function: _ZNSirsERi
struct std::basic_istream<char>* std__istream__operator__(struct std::basic_istream<char>*, int*);

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std::basic_ostream<char>*, struct std::_Setw);

// function: _ZSt4setwi
struct std::_Setw std__setw(int v0) {
bb1:
  int __n2;
  struct std::_Setw __retval3;
  __n2 = v0;
  int t4 = __n2;
  __retval3._M_n = t4;
  struct std::_Setw t5 = __retval3;
  return t5;
}

// function: _Z11printHeaderi
void printHeader(int v6) {
bb7:
  int j20;
  struct std::_Setw agg.tmp021;
  int k22;
  int size23;
  size23 = v6;
  struct std::basic_ostream<char>* g24 = &_ZSt4cout;
  char* cast25 = (char*)_str_3;
  struct std::basic_ostream<char>* r26 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g24, cast25);
  goto bb8;
bb8:
  int c27 = 0;
  j20 = c27;
  goto bb9;
bb9:
  int t28 = j20;
  int t29 = size23;
  _Bool c30 = (t28 < t29) ? 1 : 0;
  if (c30) goto bb10; else goto bb12;
bb10:
  struct std::basic_ostream<char>* g31 = &_ZSt4cout;
  int c32 = 3;
  struct std::_Setw r33 = std__setw(c32);
  agg.tmp021 = r33;
  struct std::_Setw t34 = agg.tmp021;
  struct std::basic_ostream<char>* r35 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g31, t34);
  int t36 = j20;
  struct std::basic_ostream<char>* r37 = std__ostream__operator__(r35, t36);
  char c38 = 32;
  struct std::basic_ostream<char>* r39 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r37, c38);
  goto bb11;
bb11:
  int t40 = j20;
  int u41 = ++t40;
  j20 = u41;
  goto bb9;
bb12:
  goto bb13;
bb13:
  struct std::basic_ostream<char>* g42 = &_ZSt4cout;
  char c43 = 10;
  struct std::basic_ostream<char>* r44 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g42, c43);
  goto bb14;
bb14:
  int c45 = 1;
  k22 = c45;
  goto bb15;
bb15:
  int t46 = k22;
  int c47 = 4;
  int t48 = size23;
  int b49 = c47 * t48;
  _Bool c50 = (t46 <= b49) ? 1 : 0;
  if (c50) goto bb16; else goto bb18;
bb16:
  struct std::basic_ostream<char>* g51 = &_ZSt4cout;
  char c52 = 45;
  struct std::basic_ostream<char>* r53 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g51, c52);
  goto bb17;
bb17:
  int t54 = k22;
  int u55 = ++t54;
  k22 = u55;
  goto bb15;
bb18:
  goto bb19;
bb19:
  struct std::basic_ostream<char>* g56 = &_ZSt4cout;
  void* g57 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r58 = std__ostream__operator___std__ostream_____(g56, g57);
  return;
}

// function: _Z8printRowPKiiiii
void printRow(int* v59, int v60, int v61, int v62, int v63) {
  _Bool v64;
  _Bool v65;
bb66:
  int m89;
  struct std::_Setw agg.tmp090;
  struct std::_Setw agg.tmp191;
  int* b92;
  int low93;
  int mid94;
  int high95;
  int size96;
  b92 = v59;
  low93 = v60;
  mid94 = v61;
  high95 = v62;
  size96 = v63;
  goto bb67;
bb67:
  int c97 = 0;
  m89 = c97;
  goto bb68;
bb68:
  int t98 = m89;
  int t99 = size96;
  _Bool c100 = (t98 < t99) ? 1 : 0;
  if (c100) goto bb69; else goto bb87;
bb69:
  goto bb70;
bb70:
  int t101 = m89;
  int t102 = low93;
  _Bool c103 = (t101 < t102) ? 1 : 0;
  if (c103) goto bb71; else goto bb72;
bb71:
  _Bool c104 = 1;
  v65 = c104;
  goto bb76;
bb72:
  int t105 = m89;
  int t106 = high95;
  _Bool c107 = (t105 > t106) ? 1 : 0;
  if (c107) goto bb73; else goto bb74;
bb73:
  _Bool c108 = 1;
  v64 = c108;
  goto bb75;
bb74:
  _Bool c109 = 0;
  v64 = c109;
  goto bb75;
bb75:
  v65 = v64;
  goto bb76;
bb76:
  if (v65) goto bb77; else goto bb78;
bb77:
  struct std::basic_ostream<char>* g110 = &_ZSt4cout;
  char* cast111 = (char*)_str_4;
  struct std::basic_ostream<char>* r112 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g110, cast111);
  goto bb84;
bb78:
  goto bb79;
bb79:
  int t113 = m89;
  int t114 = mid94;
  _Bool c115 = (t113 == t114) ? 1 : 0;
  if (c115) goto bb80; else goto bb81;
bb80:
  struct std::basic_ostream<char>* g116 = &_ZSt4cout;
  int c117 = 3;
  struct std::_Setw r118 = std__setw(c117);
  agg.tmp090 = r118;
  struct std::_Setw t119 = agg.tmp090;
  struct std::basic_ostream<char>* r120 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g116, t119);
  int* t121 = b92;
  int t122 = m89;
  int* ptr123 = t121 + t122;
  int t124 = *ptr123;
  struct std::basic_ostream<char>* r125 = std__ostream__operator__(r120, t124);
  char c126 = 42;
  struct std::basic_ostream<char>* r127 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r125, c126);
  goto bb82;
bb81:
  struct std::basic_ostream<char>* g128 = &_ZSt4cout;
  int c129 = 3;
  struct std::_Setw r130 = std__setw(c129);
  agg.tmp191 = r130;
  struct std::_Setw t131 = agg.tmp191;
  struct std::basic_ostream<char>* r132 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(g128, t131);
  int* t133 = b92;
  int t134 = m89;
  int* ptr135 = t133 + t134;
  int t136 = *ptr135;
  struct std::basic_ostream<char>* r137 = std__ostream__operator__(r132, t136);
  char c138 = 32;
  struct std::basic_ostream<char>* r139 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(r137, c138);
  goto bb82;
bb82:
  goto bb83;
bb83:
  goto bb84;
bb84:
  goto bb85;
bb85:
  goto bb86;
bb86:
  int t140 = m89;
  int u141 = ++t140;
  m89 = u141;
  goto bb68;
bb87:
  goto bb88;
bb88:
  struct std::basic_ostream<char>* g142 = &_ZSt4cout;
  void* g143 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r144 = std__ostream__operator___std__ostream_____(g142, g143);
  return;
}

// function: _Z12binarySearchPKiiiii
int binarySearch(int* v145, int v146, int v147, int v148, int v149) {
bb150:
  int* b168;
  int searchKey169;
  int low170;
  int high171;
  int size172;
  int __retval173;
  int middle174;
  b168 = v145;
  searchKey169 = v146;
  low170 = v147;
  high171 = v148;
  size172 = v149;
  goto bb151;
bb151:
  goto bb152;
bb152:
  int t175 = low170;
  int t176 = high171;
  _Bool c177 = (t175 <= t176) ? 1 : 0;
  if (c177) goto bb153; else goto bb166;
bb153:
  goto bb154;
bb154:
  int t178 = low170;
  int t179 = high171;
  int b180 = t178 + t179;
  int c181 = 2;
  int b182 = b180 / c181;
  middle174 = b182;
  int* t183 = b168;
  int t184 = low170;
  int t185 = middle174;
  int t186 = high171;
  int t187 = size172;
  printRow(t183, t184, t185, t186, t187);
  goto bb155;
bb155:
  int t188 = searchKey169;
  int* t189 = b168;
  int t190 = middle174;
  int* ptr191 = t189 + t190;
  int t192 = *ptr191;
  _Bool c193 = (t188 == t192) ? 1 : 0;
  if (c193) goto bb156; else goto bb157;
bb156:
  int t194 = middle174;
  __retval173 = t194;
  int t195 = __retval173;
  return t195;
bb157:
  goto bb158;
bb158:
  int t196 = searchKey169;
  int* t197 = b168;
  int t198 = middle174;
  int* ptr199 = t197 + t198;
  int t200 = *ptr199;
  _Bool c201 = (t196 < t200) ? 1 : 0;
  if (c201) goto bb159; else goto bb160;
bb159:
  int t202 = middle174;
  int c203 = 1;
  int b204 = t202 - c203;
  high171 = b204;
  goto bb161;
bb160:
  int t205 = middle174;
  int c206 = 1;
  int b207 = t205 + c206;
  low170 = b207;
  goto bb161;
bb161:
  goto bb162;
bb162:
  goto bb163;
bb163:
  goto bb164;
bb164:
  goto bb165;
bb165:
  goto bb152;
bb166:
  goto bb167;
bb167:
  int c208 = 1;
  int u209 = -c208;
  __retval173 = u209;
  int t210 = __retval173;
  return t210;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std::basic_ostream<char>* _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(struct std::basic_ostream<char>*, char);

// function: _ZNSolsEi
struct std::basic_ostream<char>* std__ostream__operator__(struct std::basic_ostream<char>*, int);

// function: _ZNSolsEPFRSoS_E
struct std::basic_ostream<char>* std__ostream__operator___std__ostream_____(struct std::basic_ostream<char>*, void*);

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std::basic_ostream<char>* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std::basic_ostream<char>*);

// function: main
int main() {
bb211:
  int i223;
  int __retval224;
  int arraySize225;
  int a226[15];
  int key227;
  int result228;
  int c229 = 15;
  arraySize225 = c229;
  goto bb212;
bb212:
  int c230 = 0;
  i223 = c230;
  goto bb213;
bb213:
  int t231 = i223;
  int c232 = 15;
  _Bool c233 = (t231 < c232) ? 1 : 0;
  if (c233) goto bb214; else goto bb216;
bb214:
  int c234 = 2;
  int t235 = i223;
  int b236 = c234 * t235;
  int t237 = i223;
  a226[t237] = b236;
  goto bb215;
bb215:
  int t238 = i223;
  int u239 = ++t238;
  i223 = u239;
  goto bb213;
bb216:
  goto bb217;
bb217:
  struct std::basic_ostream<char>* g240 = &_ZSt4cout;
  char* cast241 = (char*)_str;
  struct std::basic_ostream<char>* r242 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(g240, cast241);
  struct std::basic_istream<char>* g243 = &_ZSt3cin;
  struct std::basic_istream<char>* r244 = std__istream__operator__(g243, &key227);
  int c245 = 15;
  printHeader(c245);
  int* cast246 = (int*)a226;
  int t247 = key227;
  int c248 = 0;
  int c249 = 15;
  int c250 = 1;
  int b251 = c249 - c250;
  int c252 = 15;
  int r253 = binarySearch(cast246, t247, c248, b251, c252);
  result228 = r253;
  goto bb218;
bb218:
  int t254 = result228;
  int c255 = 1;
  int u256 = -c255;
  _Bool c257 = (t254 != u256) ? 1 : 0;
  if (c257) goto bb219; else goto bb220;
bb219:
  struct std::basic_ostream<char>* g258 = &_ZSt4cout;
  char c259 = 10;
  struct std::basic_ostream<char>* r260 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g258, c259);
  int t261 = key227;
  struct std::basic_ostream<char>* r262 = std__ostream__operator__(r260, t261);
  char* cast263 = (char*)_str_1;
  struct std::basic_ostream<char>* r264 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r262, cast263);
  int t265 = result228;
  struct std::basic_ostream<char>* r266 = std__ostream__operator__(r264, t265);
  void* g267 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r268 = std__ostream__operator___std__ostream_____(r266, g267);
  goto bb221;
bb220:
  struct std::basic_ostream<char>* g269 = &_ZSt4cout;
  char c270 = 10;
  struct std::basic_ostream<char>* r271 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(g269, c270);
  int t272 = key227;
  struct std::basic_ostream<char>* r273 = std__ostream__operator__(r271, t272);
  char* cast274 = (char*)_str_2;
  struct std::basic_ostream<char>* r275 = _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(r273, cast274);
  void* g276 = &_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;
  struct std::basic_ostream<char>* r277 = std__ostream__operator___std__ostream_____(r275, g276);
  goto bb221;
bb221:
  goto bb222;
bb222:
  int c278 = 0;
  __retval224 = c278;
  int t279 = __retval224;
  return t279;
}

