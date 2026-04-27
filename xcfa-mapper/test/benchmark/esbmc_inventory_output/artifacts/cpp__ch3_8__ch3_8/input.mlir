!rec___locale_data = !cir.record<struct "__locale_data" incomplete>
!s32i = !cir.int<s, 32>
!s64i = !cir.int<s, 64>
!s8i = !cir.int<s, 8>
!u16i = !cir.int<u, 16>
!u32i = !cir.int<u, 32>
!u64i = !cir.int<u, 64>
!u8i = !cir.int<u, 8>
!void = !cir.void
#fn_attr = #cir<extra({nothrow = #cir.nothrow, uwtable = #cir.uwtable<async>})>
#fn_attr1 = #cir<extra({nothrow = #cir.nothrow})>
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":237:8)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":237:12)
!rec_std3A3A_Setw = !cir.record<struct "std::_Setw" {!s32i}>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc53 = loc(fused[#loc7, #loc8])
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
!rec_std3A3Abasic_ostream3Cchar3E = !cir.record<class "std::basic_ostream<char>" {!cir.vptr, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !rec_std3A3A_Setw) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc50)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc51)
  cir.func no_inline optnone linkonce_odr dso_local @_ZSt4setwi(%arg0: !s32i loc(fused[#loc7, #loc8])) -> !rec_std3A3A_Setw extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__n", init] {alignment = 4 : i64} loc(#loc53)
    %1 = cir.alloca !rec_std3A3A_Setw, !cir.ptr<!rec_std3A3A_Setw>, ["__retval"] {alignment = 4 : i64} loc(#loc6)
    cir.store %arg0, %0 : !s32i, !cir.ptr<!s32i> loc(#loc9)
    %2 = cir.get_member %1[0] {name = "_M_n"} : !cir.ptr<!rec_std3A3A_Setw> -> !cir.ptr<!s32i> loc(#loc10)
    %3 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc11)
    cir.store align(4) %3, %2 : !s32i, !cir.ptr<!s32i> loc(#loc11)
    %4 = cir.load align(4) %1 : !cir.ptr<!rec_std3A3A_Setw>, !rec_std3A3A_Setw loc(#loc54)
    cir.return %4 : !rec_std3A3A_Setw loc(#loc54)
  } loc(#loc52)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
  cir.func private @rand() -> !s32i extra(#fn_attr1) loc(#loc56)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc57)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc58)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["counter", init] {alignment = 4 : i64} loc(#loc60)
    %1 = cir.alloca !rec_std3A3A_Setw, !cir.ptr<!rec_std3A3A_Setw>, ["agg.tmp0"] {alignment = 4 : i64} loc(#loc61)
    %2 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc23)
    cir.br ^bb1 loc(#loc62)
  ^bb1:  // pred: ^bb0
    %3 = cir.const #cir.int<1> : !s32i loc(#loc25)
    cir.store align(4) %3, %0 : !s32i, !cir.ptr<!s32i> loc(#loc60)
    cir.br ^bb2 loc(#loc62)
  ^bb2:  // 2 preds: ^bb1, ^bb10
    %4 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc30)
    %5 = cir.const #cir.int<20> : !s32i loc(#loc31)
    %6 = cir.cmp(le, %4, %5) : !s32i, !cir.bool loc(#loc63)
    cir.brcond %6 ^bb3, ^bb11 loc(#loc63)
  ^bb3:  // pred: ^bb2
    cir.br ^bb4 loc(#loc64)
  ^bb4:  // pred: ^bb3
    %7 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
    %8 = cir.const #cir.int<10> : !s32i loc(#loc33)
    %9 = cir.call @_ZSt4setwi(%8) : (!s32i) -> !rec_std3A3A_Setw loc(#loc26)
    cir.store align(4) %9, %1 : !rec_std3A3A_Setw, !cir.ptr<!rec_std3A3A_Setw> loc(#loc26)
    %10 = cir.load align(4) %1 : !cir.ptr<!rec_std3A3A_Setw>, !rec_std3A3A_Setw loc(#loc34)
    %11 = cir.call @_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw(%7, %10) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !rec_std3A3A_Setw) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc34)
    %12 = cir.const #cir.int<1> : !s32i loc(#loc35)
    %13 = cir.call @rand() : () -> !s32i extra(#fn_attr1) loc(#loc36)
    %14 = cir.const #cir.int<6> : !s32i loc(#loc37)
    %15 = cir.binop(rem, %13, %14) : !s32i loc(#loc65)
    %16 = cir.binop(add, %12, %15) nsw : !s32i loc(#loc35)
    %17 = cir.call @_ZNSolsEi(%11, %16) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc38)
    cir.br ^bb5 loc(#loc66)
  ^bb5:  // pred: ^bb4
    %18 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc41)
    %19 = cir.const #cir.int<5> : !s32i loc(#loc42)
    %20 = cir.binop(rem, %18, %19) : !s32i loc(#loc67)
    %21 = cir.const #cir.int<0> : !s32i loc(#loc43)
    %22 = cir.cmp(eq, %20, %21) : !s32i, !cir.bool loc(#loc68)
    cir.brcond %22 ^bb6, ^bb7 loc(#loc69)
  ^bb6:  // pred: ^bb5
    %23 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
    %24 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc40)
    %25 = cir.call @_ZNSolsEPFRSoS_E(%23, %24) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc45)
    cir.br ^bb7 loc(#loc40)
  ^bb7:  // 2 preds: ^bb5, ^bb6
    cir.br ^bb8 loc(#loc40)
  ^bb8:  // pred: ^bb7
    cir.br ^bb9 loc(#loc29)
  ^bb9:  // pred: ^bb8
    cir.br ^bb10 loc(#loc29)
  ^bb10:  // pred: ^bb9
    %26 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc46)
    %27 = cir.unary(inc, %26) nsw : !s32i, !s32i loc(#loc47)
    cir.store align(4) %27, %0 : !s32i, !cir.ptr<!s32i> loc(#loc70)
    cir.br ^bb2 loc(#loc62)
  ^bb11:  // pred: ^bb2
    cir.br ^bb12 loc(#loc29)
  ^bb12:  // pred: ^bb11
    %28 = cir.const #cir.int<0> : !s32i loc(#loc48)
    cir.store align(4) %28, %2 : !s32i, !cir.ptr<!s32i> loc(#loc71)
    %29 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc71)
    cir.return %29 : !s32i loc(#loc71)
  } loc(#loc59)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":249:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":254:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":236:3)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:21)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:3)
#loc10 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":227:22)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:14)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:5)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iomanip":238:18)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc16 = loc("/usr/include/stdlib.h":577:1)
#loc17 = loc("/usr/include/stdlib.h":577:24)
#loc18 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc19 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc20 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc21 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":21:1)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":37:1)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":24:10)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":24:24)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":27:15)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":27:24)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":24:4)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":33:4)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":24:27)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":24:38)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":24:54)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":27:21)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":27:12)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":27:31)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":27:35)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":27:44)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":27:26)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":30:7)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":31:18)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":30:12)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":30:22)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":30:27)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":31:10)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":31:15)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":24:49)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":24:42)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":35:11)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_8/main.cpp":35:4)
#loc50 = loc(fused[#loc1, #loc2])
#loc51 = loc(fused[#loc3, #loc4])
#loc52 = loc(fused[#loc5, #loc6])
#loc54 = loc(fused[#loc12, #loc13])
#loc55 = loc(fused[#loc14, #loc15])
#loc56 = loc(fused[#loc16, #loc17])
#loc57 = loc(fused[#loc18, #loc19])
#loc58 = loc(fused[#loc20, #loc21])
#loc59 = loc(fused[#loc22, #loc23])
#loc60 = loc(fused[#loc24, #loc25])
#loc61 = loc(fused[#loc26, #loc27])
#loc62 = loc(fused[#loc28, #loc29])
#loc63 = loc(fused[#loc30, #loc31])
#loc64 = loc(fused[#loc32, #loc29])
#loc65 = loc(fused[#loc36, #loc37])
#loc66 = loc(fused[#loc39, #loc40])
#loc67 = loc(fused[#loc41, #loc42])
#loc68 = loc(fused[#loc41, #loc43])
#loc69 = loc(fused[#loc44, #loc40])
#loc70 = loc(fused[#loc47, #loc46])
#loc71 = loc(fused[#loc49, #loc48])
