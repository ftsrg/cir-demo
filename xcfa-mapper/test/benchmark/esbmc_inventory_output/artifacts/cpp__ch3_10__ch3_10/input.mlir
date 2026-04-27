!rec___locale_data = !cir.record<struct "__locale_data" incomplete>
!s32i = !cir.int<s, 32>
!s64i = !cir.int<s, 64>
!s8i = !cir.int<s, 8>
!u16i = !cir.int<u, 16>
!u32i = !cir.int<u, 32>
!u64i = !cir.int<u, 64>
!u8i = !cir.int<u, 8>
!void = !cir.void
#fn_attr = #cir<extra({nothrow = #cir.nothrow})>
#fn_attr1 = #cir<extra({nothrow = #cir.nothrow, uwtable = #cir.uwtable<async>})>
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":237:8)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":237:12)
!rec_std3A3A_Setw = !cir.record<struct "std::_Setw" {!s32i}>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc72 = loc(fused[#loc16, #loc17])
!rec_std3A3Aios_base3A3A_Words = !cir.record<struct "std::ios_base::_Words" {!cir.ptr<!void>, !s64i} #cir.record.decl.ast>
!rec_std3A3Alocale3A3Afacet = !cir.record<class "std::locale::facet" packed padded {!cir.vptr, !s32i, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec_std3A3Anum_get3Cchar3E = !cir.record<class "std::num_get<char>" padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec_std3A3Anum_put3Cchar3E = !cir.record<class "std::num_put<char>" padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec___locale_struct = !cir.record<struct "__locale_struct" {!cir.array<!cir.ptr<!rec___locale_data> x 13>, !cir.ptr<!u16i>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.array<!cir.ptr<!s8i> x 13>} #cir.record.decl.ast>
!rec_std3A3Aios_base3A3A_Callback_list = !cir.record<struct "std::ios_base::_Callback_list" {!cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !cir.ptr<!cir.func<(!u32i, !cir.ptr<!cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !cir.record<class "std::locale" {!cir.ptr<!cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>>} #cir.record.decl.ast>} #cir.record.decl.ast>>, !s32i)>>, !s32i, !s32i} #cir.record.decl.ast>
!rec_std3A3Actype3Cchar3E = !cir.record<class "std::ctype<char>" packed padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>, !cir.ptr<!rec___locale_struct>, !cir.bool, !cir.array<!u8i x 7>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.ptr<!u16i>, !s8i, !cir.array<!s8i x 256>, !cir.array<!s8i x 256>, !s8i, !cir.array<!u8i x 6>} #cir.record.decl.ast>
!rec_std3A3Alocale3A3A_Impl = !cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>
!rec_std3A3Alocale = !cir.record<class "std::locale" {!cir.ptr<!rec_std3A3Alocale3A3A_Impl>} #cir.record.decl.ast>
!rec_std3A3Abasic_streambuf3Cchar3E = !cir.record<class "std::basic_streambuf<char>" {!cir.vptr, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Aios_base = !cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Callback_list>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Abasic_ios3Cchar3E = !cir.record<class "std::basic_ios<char>" {!rec_std3A3Aios_base, !cir.ptr<!cir.record<class "std::basic_ostream<char>" {!cir.vptr, !cir.record<class "std::basic_ios<char>">} #cir.record.decl.ast>>, !s8i, !cir.bool, !cir.ptr<!rec_std3A3Abasic_streambuf3Cchar3E>, !cir.ptr<!rec_std3A3Actype3Cchar3E>, !cir.ptr<!rec_std3A3Anum_put3Cchar3E>, !cir.ptr<!rec_std3A3Anum_get3Cchar3E>} #cir.record.decl.ast>
!rec_std3A3Abasic_istream3Cchar3E = !cir.record<class "std::basic_istream<char>" {!cir.vptr, !s64i, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
!rec_std3A3Abasic_ostream3Cchar3E = !cir.record<class "std::basic_ostream<char>" {!cir.vptr, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc65)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc66)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Enter seed: \00" : !cir.array<!s8i x 13>> : !cir.array<!s8i x 13> {alignment = 1 : i64} loc(#loc5)
  cir.global "private" external @_ZSt3cin : !rec_std3A3Abasic_istream3Cchar3E {alignment = 8 : i64} loc(#loc67)
  cir.func private @_ZNSirsERj(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!u32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc68)
  cir.func private @srand(!u32i) extra(#fn_attr) loc(#loc69)
  cir.func private @_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !rec_std3A3A_Setw) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc70)
  cir.func no_inline optnone linkonce_odr dso_local @_ZSt4setwi(%arg0: !s32i loc(fused[#loc16, #loc17])) -> !rec_std3A3A_Setw extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__n", init] {alignment = 4 : i64} loc(#loc72)
    %1 = cir.alloca !rec_std3A3A_Setw, !cir.ptr<!rec_std3A3A_Setw>, ["__retval"] {alignment = 4 : i64} loc(#loc15)
    cir.store %arg0, %0 : !s32i, !cir.ptr<!s32i> loc(#loc18)
    %2 = cir.get_member %1[0] {name = "_M_n"} : !cir.ptr<!rec_std3A3A_Setw> -> !cir.ptr<!s32i> loc(#loc19)
    %3 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc20)
    cir.store align(4) %3, %2 : !s32i, !cir.ptr<!s32i> loc(#loc20)
    %4 = cir.load align(4) %1 : !cir.ptr<!rec_std3A3A_Setw>, !rec_std3A3A_Setw loc(#loc73)
    cir.return %4 : !rec_std3A3A_Setw loc(#loc73)
  } loc(#loc71)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc74)
  cir.func private @rand() -> !s32i extra(#fn_attr) loc(#loc75)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc76)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc77)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["counter", init] {alignment = 4 : i64} loc(#loc79)
    %1 = cir.alloca !rec_std3A3A_Setw, !cir.ptr<!rec_std3A3A_Setw>, ["agg.tmp0"] {alignment = 4 : i64} loc(#loc80)
    %2 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc32)
    %3 = cir.alloca !u32i, !cir.ptr<!u32i>, ["seed"] {alignment = 4 : i64} loc(#loc81)
    %4 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc66)
    %5 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 13>> loc(#loc5)
    %6 = cir.cast array_to_ptrdecay %5 : !cir.ptr<!cir.array<!s8i x 13>> -> !cir.ptr<!s8i> loc(#loc5)
    %7 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%4, %6) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc39)
    %8 = cir.get_global @_ZSt3cin : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc67)
    %9 = cir.call @_ZNSirsERj(%8, %3) : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!u32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc40)
    %10 = cir.load align(4) %3 : !cir.ptr<!u32i>, !u32i loc(#loc41)
    cir.call @srand(%10) : (!u32i) -> () extra(#fn_attr) loc(#loc42)
    cir.br ^bb1 loc(#loc82)
  ^bb1:  // pred: ^bb0
    %11 = cir.const #cir.int<1> : !s32i loc(#loc34)
    cir.store align(4) %11, %0 : !s32i, !cir.ptr<!s32i> loc(#loc79)
    cir.br ^bb2 loc(#loc82)
  ^bb2:  // 2 preds: ^bb1, ^bb10
    %12 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc45)
    %13 = cir.const #cir.int<10> : !s32i loc(#loc46)
    %14 = cir.cmp(le, %12, %13) : !s32i, !cir.bool loc(#loc83)
    cir.brcond %14 ^bb3, ^bb11 loc(#loc83)
  ^bb3:  // pred: ^bb2
    cir.br ^bb4 loc(#loc84)
  ^bb4:  // pred: ^bb3
    %15 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc66)
    %16 = cir.const #cir.int<10> : !s32i loc(#loc48)
    %17 = cir.call @_ZSt4setwi(%16) : (!s32i) -> !rec_std3A3A_Setw loc(#loc35)
    cir.store align(4) %17, %1 : !rec_std3A3A_Setw, !cir.ptr<!rec_std3A3A_Setw> loc(#loc35)
    %18 = cir.load align(4) %1 : !cir.ptr<!rec_std3A3A_Setw>, !rec_std3A3A_Setw loc(#loc49)
    %19 = cir.call @_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(%15, %18) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !rec_std3A3A_Setw) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
    %20 = cir.const #cir.int<1> : !s32i loc(#loc50)
    %21 = cir.call @rand() : () -> !s32i extra(#fn_attr) loc(#loc51)
    %22 = cir.const #cir.int<6> : !s32i loc(#loc52)
    %23 = cir.binop(rem, %21, %22) : !s32i loc(#loc85)
    %24 = cir.binop(add, %20, %23) nsw : !s32i loc(#loc50)
    %25 = cir.call @_ZNSolsEi(%19, %24) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc53)
    cir.br ^bb5 loc(#loc86)
  ^bb5:  // pred: ^bb4
    %26 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc56)
    %27 = cir.const #cir.int<5> : !s32i loc(#loc57)
    %28 = cir.binop(rem, %26, %27) : !s32i loc(#loc87)
    %29 = cir.const #cir.int<0> : !s32i loc(#loc58)
    %30 = cir.cmp(eq, %28, %29) : !s32i, !cir.bool loc(#loc88)
    cir.brcond %30 ^bb6, ^bb7 loc(#loc89)
  ^bb6:  // pred: ^bb5
    %31 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc66)
    %32 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc55)
    %33 = cir.call @_ZNSolsEPFRSoS_E(%31, %32) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc60)
    cir.br ^bb7 loc(#loc55)
  ^bb7:  // 2 preds: ^bb5, ^bb6
    cir.br ^bb8 loc(#loc55)
  ^bb8:  // pred: ^bb7
    cir.br ^bb9 loc(#loc44)
  ^bb9:  // pred: ^bb8
    cir.br ^bb10 loc(#loc44)
  ^bb10:  // pred: ^bb9
    %34 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc61)
    %35 = cir.unary(inc, %34) nsw : !s32i, !s32i loc(#loc62)
    cir.store align(4) %35, %0 : !s32i, !cir.ptr<!s32i> loc(#loc90)
    cir.br ^bb2 loc(#loc82)
  ^bb11:  // pred: ^bb2
    cir.br ^bb12 loc(#loc44)
  ^bb12:  // pred: ^bb11
    %36 = cir.const #cir.int<0> : !s32i loc(#loc63)
    cir.store align(4) %36, %2 : !s32i, !cir.ptr<!s32i> loc(#loc91)
    %37 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc91)
    cir.return %37 : !s32i loc(#loc91)
  } loc(#loc78)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":27:12)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:3)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:18)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":185:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":187:33)
#loc10 = loc("/usr/include/stdlib.h":579:1)
#loc11 = loc("/usr/include/stdlib.h":579:41)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":249:5)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":254:5)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":236:3)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:21)
#loc18 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:3)
#loc19 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":227:22)
#loc20 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:14)
#loc21 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:5)
#loc22 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:18)
#loc23 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc24 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc25 = loc("/usr/include/stdlib.h":577:1)
#loc26 = loc("/usr/include/stdlib.h":577:24)
#loc27 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc28 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc29 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc30 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":23:1)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":45:1)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":32:10)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":32:24)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":35:15)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":35:24)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":25:4)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":25:13)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":27:9)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":28:8)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":29:11)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":29:4)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":32:4)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":41:4)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":32:27)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":32:38)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":32:54)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":35:21)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":35:12)
#loc50 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":35:31)
#loc51 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":35:35)
#loc52 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":35:44)
#loc53 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":35:26)
#loc54 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":38:7)
#loc55 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":39:18)
#loc56 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":38:12)
#loc57 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":38:22)
#loc58 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":38:27)
#loc59 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":39:10)
#loc60 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":39:15)
#loc61 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":32:49)
#loc62 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":32:42)
#loc63 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":43:11)
#loc64 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_10/main.cpp":43:4)
#loc65 = loc(fused[#loc1, #loc2])
#loc66 = loc(fused[#loc3, #loc4])
#loc67 = loc(fused[#loc6, #loc7])
#loc68 = loc(fused[#loc8, #loc9])
#loc69 = loc(fused[#loc10, #loc11])
#loc70 = loc(fused[#loc12, #loc13])
#loc71 = loc(fused[#loc14, #loc15])
#loc73 = loc(fused[#loc21, #loc22])
#loc74 = loc(fused[#loc23, #loc24])
#loc75 = loc(fused[#loc25, #loc26])
#loc76 = loc(fused[#loc27, #loc28])
#loc77 = loc(fused[#loc29, #loc30])
#loc78 = loc(fused[#loc31, #loc32])
#loc79 = loc(fused[#loc33, #loc34])
#loc80 = loc(fused[#loc35, #loc36])
#loc81 = loc(fused[#loc37, #loc38])
#loc82 = loc(fused[#loc43, #loc44])
#loc83 = loc(fused[#loc45, #loc46])
#loc84 = loc(fused[#loc47, #loc44])
#loc85 = loc(fused[#loc51, #loc52])
#loc86 = loc(fused[#loc54, #loc55])
#loc87 = loc(fused[#loc56, #loc57])
#loc88 = loc(fused[#loc56, #loc58])
#loc89 = loc(fused[#loc59, #loc55])
#loc90 = loc(fused[#loc62, #loc61])
#loc91 = loc(fused[#loc64, #loc63])
