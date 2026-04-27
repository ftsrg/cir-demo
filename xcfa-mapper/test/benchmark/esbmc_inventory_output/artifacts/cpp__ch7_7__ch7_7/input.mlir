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
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":27:7)
#loc4 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":27:13)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":27:17)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":36:12)
!rec_Test = !cir.record<class "Test" {!s32i}>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc48 = loc(fused[#loc4, #loc5])
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func no_inline optnone dso_local @_ZN4TestC2Ei(%arg0: !cir.ptr<!rec_Test> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":27:7), %arg1: !s32i loc(fused[#loc4, #loc5])) special_member<#cir.cxx_ctor<!rec_Test, default>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Test>, !cir.ptr<!cir.ptr<!rec_Test>>, ["this", init] {alignment = 8 : i64} loc(#loc3)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["value", init] {alignment = 4 : i64} loc(#loc48)
    cir.store %arg0, %0 : !cir.ptr<!rec_Test>, !cir.ptr<!cir.ptr<!rec_Test>> loc(#loc6)
    cir.store %arg1, %1 : !s32i, !cir.ptr<!s32i> loc(#loc6)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Test>>, !cir.ptr<!rec_Test> loc(#loc3)
    %3 = cir.get_member %2[0] {name = "x"} : !cir.ptr<!rec_Test> -> !cir.ptr<!s32i> loc(#loc7)
    %4 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc8)
    cir.store align(4) %4, %3 : !s32i, !cir.ptr<!s32i> loc(#loc49)
    cir.return loc(#loc2)
  } loc(#loc47)
  cir.func private dso_local @_ZN4TestC1Ei(!cir.ptr<!rec_Test>, !s32i) special_member<#cir.cxx_ctor<!rec_Test, default>> alias(@_ZN4TestC2Ei) loc(#loc47)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc50)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc51)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"        x = \00" : !cir.array<!s8i x 13>> : !cir.array<!s8i x 13> {alignment = 1 : i64} loc(#loc14)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc52)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"\0A  this->x = \00" : !cir.array<!s8i x 14>> : !cir.array<!s8i x 14> {alignment = 1 : i64} loc(#loc17)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"\0A(*this).x = \00" : !cir.array<!s8i x 14>> : !cir.array<!s8i x 14> {alignment = 1 : i64} loc(#loc18)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc53)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc54)
  cir.func no_inline optnone dso_local @_ZNK4Test5printEv(%arg0: !cir.ptr<!rec_Test> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":36:12)) extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Test>, !cir.ptr<!cir.ptr<!rec_Test>>, ["this", init] {alignment = 8 : i64} loc(#loc25)
    cir.store %arg0, %0 : !cir.ptr<!rec_Test>, !cir.ptr<!cir.ptr<!rec_Test>> loc(#loc26)
    %1 = cir.load deref %0 : !cir.ptr<!cir.ptr<!rec_Test>>, !cir.ptr<!rec_Test> loc(#loc25)
    %2 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
    %3 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 13>> loc(#loc14)
    %4 = cir.cast array_to_ptrdecay %3 : !cir.ptr<!cir.array<!s8i x 13>> -> !cir.ptr<!s8i> loc(#loc14)
    %5 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%2, %4) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc27)
    %6 = cir.get_member %1[0] {name = "x"} : !cir.ptr<!rec_Test> -> !cir.ptr<!s32i> loc(#loc7)
    %7 = cir.load align(4) %6 : !cir.ptr<!s32i>, !s32i loc(#loc28)
    %8 = cir.call @_ZNSolsEi(%5, %7) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc29)
    %9 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
    %10 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 14>> loc(#loc17)
    %11 = cir.cast array_to_ptrdecay %10 : !cir.ptr<!cir.array<!s8i x 14>> -> !cir.ptr<!s8i> loc(#loc17)
    %12 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%9, %11) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc30)
    %13 = cir.get_member %1[0] {name = "x"} : !cir.ptr<!rec_Test> -> !cir.ptr<!s32i> loc(#loc7)
    %14 = cir.load align(4) %13 : !cir.ptr<!s32i>, !s32i loc(#loc31)
    %15 = cir.call @_ZNSolsEi(%12, %14) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc32)
    %16 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
    %17 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 14>> loc(#loc18)
    %18 = cir.cast array_to_ptrdecay %17 : !cir.ptr<!cir.array<!s8i x 14>> -> !cir.ptr<!s8i> loc(#loc18)
    %19 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%16, %18) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
    %20 = cir.get_member %1[0] {name = "x"} : !cir.ptr<!rec_Test> -> !cir.ptr<!s32i> loc(#loc7)
    %21 = cir.load align(4) %20 : !cir.ptr<!s32i>, !s32i loc(#loc34)
    %22 = cir.call @_ZNSolsEi(%19, %21) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
    %23 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc36)
    %24 = cir.call @_ZNSolsEPFRSoS_E(%22, %23) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc37)
    cir.return loc(#loc24)
  } loc(#loc55)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc39)
    %1 = cir.alloca !rec_Test, !cir.ptr<!rec_Test>, ["testObject", init] {alignment = 4 : i64} loc(#loc57)
    %2 = cir.const #cir.int<12> : !s32i loc(#loc42)
    cir.call @_ZN4TestC1Ei(%1, %2) : (!cir.ptr<!rec_Test>, !s32i) -> () loc(#loc43)
    cir.call @_ZNK4Test5printEv(%1) : (!cir.ptr<!rec_Test>) -> () loc(#loc44)
    %3 = cir.const #cir.int<0> : !s32i loc(#loc45)
    cir.store align(4) %3, %0 : !s32i, !cir.ptr<!s32i> loc(#loc58)
    %4 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc58)
    cir.return %4 : !s32i loc(#loc58)
  } loc(#loc56)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":27:1)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":32:1)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":29:1)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":22:8)
#loc8 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":28:9)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":22:4)
#loc10 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":39:12)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":42:12)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":46:12)
#loc19 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc20 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc21 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc22 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":36:1)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":48:1)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":37:1)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":39:9)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":39:30)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":39:27)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":42:9)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":42:38)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":42:29)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":46:9)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":46:42)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":46:29)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":46:47)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":46:44)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":50:1)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":58:1)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":52:4)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":52:24)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":52:21)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":52:9)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":54:15)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":56:11)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_7/main.cpp":56:4)
#loc47 = loc(fused[#loc1, #loc2])
#loc49 = loc(fused[#loc9, #loc7])
#loc50 = loc(fused[#loc10, #loc11])
#loc51 = loc(fused[#loc12, #loc13])
#loc52 = loc(fused[#loc15, #loc16])
#loc53 = loc(fused[#loc19, #loc20])
#loc54 = loc(fused[#loc21, #loc22])
#loc55 = loc(fused[#loc23, #loc24])
#loc56 = loc(fused[#loc38, #loc39])
#loc57 = loc(fused[#loc40, #loc41])
#loc58 = loc(fused[#loc46, #loc45])
