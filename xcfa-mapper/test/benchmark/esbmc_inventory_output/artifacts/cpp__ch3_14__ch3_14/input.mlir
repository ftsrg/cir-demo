!rec___locale_data = !cir.record<struct "__locale_data" incomplete>
!s32i = !cir.int<s, 32>
!s64i = !cir.int<s, 64>
!s8i = !cir.int<s, 8>
!u16i = !cir.int<u, 16>
!u32i = !cir.int<u, 32>
!u64i = !cir.int<u, 64>
!u8i = !cir.int<u, 8>
!void = !cir.void
#false = #cir.bool<false> : !cir.bool
#fn_attr = #cir<extra({nothrow = #cir.nothrow, uwtable = #cir.uwtable<async>})>
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":37:26)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":37:40)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":40:16)
#true = #cir.bool<true> : !cir.bool
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc66 = loc(fused[#loc12, #loc13])
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc61)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc62)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Enter an integer: \00" : !cir.array<!s8i x 19>> : !cir.array<!s8i x 19> {alignment = 1 : i64} loc(#loc5)
  cir.global "private" external @_ZSt3cin : !rec_std3A3Abasic_istream3Cchar3E {alignment = 8 : i64} loc(#loc63)
  cir.func private @_ZNSirsERm(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!u64i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc64)
  cir.func no_inline optnone dso_local @_Z9fibonaccim(%arg0: !u64i loc(fused[#loc12, #loc13])) -> !u64i extra(#fn_attr) {
    %0 = cir.alloca !u64i, !cir.ptr<!u64i>, ["n", init] {alignment = 8 : i64} loc(#loc66)
    %1 = cir.alloca !u64i, !cir.ptr<!u64i>, ["__retval"] {alignment = 8 : i64} loc(#loc14)
    cir.store %arg0, %0 : !u64i, !cir.ptr<!u64i> loc(#loc15)
    cir.br ^bb1 loc(#loc67)
  ^bb1:  // pred: ^bb0
    %2 = cir.load align(8) %0 : !cir.ptr<!u64i>, !u64i loc(#loc18)
    %3 = cir.const #cir.int<0> : !s32i loc(#loc19)
    %4 = cir.cast integral %3 : !s32i -> !u64i loc(#loc19)
    %5 = cir.cmp(eq, %2, %4) : !u64i, !cir.bool loc(#loc68)
    cir.brcond %5 ^bb2, ^bb3 loc(#loc20)
  ^bb2:  // pred: ^bb1
    %6 = cir.const #true loc(#loc20)
    cir.br ^bb7(%6 : !cir.bool) loc(#loc20)
  ^bb3:  // pred: ^bb1
    %7 = cir.load align(8) %0 : !cir.ptr<!u64i>, !u64i loc(#loc21)
    %8 = cir.const #cir.int<1> : !s32i loc(#loc22)
    %9 = cir.cast integral %8 : !s32i -> !u64i loc(#loc22)
    %10 = cir.cmp(eq, %7, %9) : !u64i, !cir.bool loc(#loc69)
    cir.brcond %10 ^bb4, ^bb5 loc(#loc20)
  ^bb4:  // pred: ^bb3
    %11 = cir.const #true loc(#loc20)
    cir.br ^bb6(%11 : !cir.bool) loc(#loc20)
  ^bb5:  // pred: ^bb3
    %12 = cir.const #false loc(#loc20)
    cir.br ^bb6(%12 : !cir.bool) loc(#loc20)
  ^bb6(%13: !cir.bool loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":40:16)):  // 2 preds: ^bb4, ^bb5
    cir.br ^bb7(%13 : !cir.bool) loc(#loc20)
  ^bb7(%14: !cir.bool loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":40:16)):  // 2 preds: ^bb2, ^bb6
    cir.brcond %14 ^bb8, ^bb9 loc(#loc70)
  ^bb8:  // pred: ^bb7
    %15 = cir.load align(8) %0 : !cir.ptr<!u64i>, !u64i loc(#loc24)
    cir.store align(8) %15, %1 : !u64i, !cir.ptr<!u64i> loc(#loc71)
    %16 = cir.load align(8) %1 : !cir.ptr<!u64i>, !u64i loc(#loc71)
    cir.return %16 : !u64i loc(#loc71)
  ^bb9:  // pred: ^bb7
    %17 = cir.load align(8) %0 : !cir.ptr<!u64i>, !u64i loc(#loc26)
    %18 = cir.const #cir.int<1> : !s32i loc(#loc27)
    %19 = cir.cast integral %18 : !s32i -> !u64i loc(#loc27)
    %20 = cir.binop(sub, %17, %19) : !u64i loc(#loc72)
    %21 = cir.call @_Z9fibonaccim(%20) : (!u64i) -> !u64i loc(#loc28)
    %22 = cir.load align(8) %0 : !cir.ptr<!u64i>, !u64i loc(#loc29)
    %23 = cir.const #cir.int<2> : !s32i loc(#loc30)
    %24 = cir.cast integral %23 : !s32i -> !u64i loc(#loc30)
    %25 = cir.binop(sub, %22, %24) : !u64i loc(#loc73)
    %26 = cir.call @_Z9fibonaccim(%25) : (!u64i) -> !u64i loc(#loc31)
    %27 = cir.binop(add, %21, %26) : !u64i loc(#loc74)
    cir.store align(8) %27, %1 : !u64i, !cir.ptr<!u64i> loc(#loc75)
    %28 = cir.load align(8) %1 : !cir.ptr<!u64i>, !u64i loc(#loc75)
    cir.return %28 : !u64i loc(#loc75)
  ^bb10:  // no predecessors
    cir.br ^bb11 loc(#loc17)
  ^bb11:  // pred: ^bb10
    cir.trap loc(#loc14)
  } loc(#loc65)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"Fibonacci(\00" : !cir.array<!s8i x 11>> : !cir.array<!s8i x 11> {alignment = 1 : i64} loc(#loc32)
  cir.func private @_ZNSolsEm(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !u64i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc76)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<") = \00" : !cir.array<!s8i x 5>> : !cir.array<!s8i x 5> {alignment = 1 : i64} loc(#loc35)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc77)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc78)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc41)
    %1 = cir.alloca !u64i, !cir.ptr<!u64i>, ["result"] {alignment = 8 : i64} loc(#loc80)
    %2 = cir.alloca !u64i, !cir.ptr<!u64i>, ["number"] {alignment = 8 : i64} loc(#loc81)
    %3 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc62)
    %4 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 19>> loc(#loc5)
    %5 = cir.cast array_to_ptrdecay %4 : !cir.ptr<!cir.array<!s8i x 19>> -> !cir.ptr<!s8i> loc(#loc5)
    %6 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%3, %5) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc45)
    %7 = cir.get_global @_ZSt3cin : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc63)
    %8 = cir.call @_ZNSirsERm(%7, %2) : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!u64i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc46)
    %9 = cir.load align(8) %2 : !cir.ptr<!u64i>, !u64i loc(#loc47)
    %10 = cir.call @_Z9fibonaccim(%9) : (!u64i) -> !u64i loc(#loc48)
    cir.store align(8) %10, %1 : !u64i, !cir.ptr<!u64i> loc(#loc82)
    %11 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc62)
    %12 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 11>> loc(#loc32)
    %13 = cir.cast array_to_ptrdecay %12 : !cir.ptr<!cir.array<!s8i x 11>> -> !cir.ptr<!s8i> loc(#loc32)
    %14 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%11, %13) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
    %15 = cir.load align(8) %2 : !cir.ptr<!u64i>, !u64i loc(#loc52)
    %16 = cir.call @_ZNSolsEm(%14, %15) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !u64i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc53)
    %17 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 5>> loc(#loc35)
    %18 = cir.cast array_to_ptrdecay %17 : !cir.ptr<!cir.array<!s8i x 5>> -> !cir.ptr<!s8i> loc(#loc35)
    %19 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%16, %18) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc54)
    %20 = cir.load align(8) %1 : !cir.ptr<!u64i>, !u64i loc(#loc55)
    %21 = cir.call @_ZNSolsEm(%19, %20) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !u64i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc56)
    %22 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc57)
    %23 = cir.call @_ZNSolsEPFRSoS_E(%21, %22) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc58)
    %24 = cir.const #cir.int<0> : !s32i loc(#loc59)
    cir.store align(4) %24, %0 : !s32i, !cir.ptr<!s32i> loc(#loc83)
    %25 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc83)
    cir.return %25 : !s32i loc(#loc83)
  } loc(#loc79)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":23:12)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:3)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:18)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":193:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":195:33)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":16:1)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":16:40)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":47:1)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":38:1)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":40:4)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":45:52)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":40:9)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":40:14)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":40:19)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":40:24)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":41:7)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":41:14)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":45:7)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":45:25)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":45:29)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":45:14)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":45:46)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":45:50)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":45:35)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:12)
#loc33 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":177:7)
#loc34 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":179:32)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:38)
#loc36 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc37 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc38 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc39 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":18:1)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":34:1)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":20:4)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":20:18)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":20:26)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":23:9)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":24:8)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":27:24)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":27:13)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":27:4)
#loc50 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":27:31)
#loc51 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:9)
#loc52 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:28)
#loc53 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:25)
#loc54 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:35)
#loc55 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:48)
#loc56 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:45)
#loc57 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:58)
#loc58 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":30:55)
#loc59 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":32:11)
#loc60 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_14/main.cpp":32:4)
#loc61 = loc(fused[#loc1, #loc2])
#loc62 = loc(fused[#loc3, #loc4])
#loc63 = loc(fused[#loc6, #loc7])
#loc64 = loc(fused[#loc8, #loc9])
#loc65 = loc(fused[#loc10, #loc11])
#loc67 = loc(fused[#loc16, #loc17])
#loc68 = loc(fused[#loc18, #loc19])
#loc69 = loc(fused[#loc21, #loc22])
#loc70 = loc(fused[#loc23, #loc24, #loc25, #loc17])
#loc71 = loc(fused[#loc23, #loc24])
#loc72 = loc(fused[#loc26, #loc27])
#loc73 = loc(fused[#loc29, #loc30])
#loc74 = loc(fused[#loc28, #loc17])
#loc75 = loc(fused[#loc25, #loc17])
#loc76 = loc(fused[#loc33, #loc34])
#loc77 = loc(fused[#loc36, #loc37])
#loc78 = loc(fused[#loc38, #loc39])
#loc79 = loc(fused[#loc40, #loc41])
#loc80 = loc(fused[#loc42, #loc43])
#loc81 = loc(fused[#loc42, #loc44])
#loc82 = loc(fused[#loc49, #loc50])
#loc83 = loc(fused[#loc60, #loc59])
