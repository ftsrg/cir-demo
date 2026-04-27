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
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.global "private" constant cir_private @__const.main.str = #cir.const_array<"Example string\00" : !cir.array<!s8i x 15>> : !cir.array<!s8i x 15> loc(#loc46)
  cir.func private @memchr(!cir.ptr<!void>, !s32i, !u64i) -> !cir.ptr<!void> extra(#fn_attr) loc(#loc47)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc49)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"'p' found at position \00" : !cir.array<!s8i x 23>> : !cir.array<!s8i x 23> {alignment = 1 : i64} loc(#loc9)
  cir.func private @_ZNSolsEl(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s64i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc50)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<".\00" : !cir.array<!s8i x 2>> : !cir.array<!s8i x 2> {alignment = 1 : i64} loc(#loc12)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc52)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"'p' not found.\00" : !cir.array<!s8i x 15>> : !cir.array<!s8i x 15> {alignment = 1 : i64} loc(#loc17)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc19)
    %1 = cir.alloca !cir.ptr<!s8i>, !cir.ptr<!cir.ptr<!s8i>>, ["pch"] {alignment = 8 : i64} loc(#loc54)
    %2 = cir.alloca !cir.array<!s8i x 15>, !cir.ptr<!cir.array<!s8i x 15>>, ["str", init] {alignment = 1 : i64} loc(#loc46)
    %3 = cir.get_global @__const.main.str : !cir.ptr<!cir.array<!s8i x 15>> loc(#loc46)
    cir.copy %3 to %2 : !cir.ptr<!cir.array<!s8i x 15>> loc(#loc46)
    %4 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 15>> -> !cir.ptr<!s8i> loc(#loc22)
    %5 = cir.cast bitcast %4 : !cir.ptr<!s8i> -> !cir.ptr<!void> loc(#loc22)
    %6 = cir.const #cir.int<112> : !s8i loc(#loc23)
    %7 = cir.cast integral %6 : !s8i -> !s32i loc(#loc23)
    %8 = cir.const #cir.int<14> : !s32i loc(#loc24)
    %9 = cir.cast integral %8 : !s32i -> !u64i loc(#loc24)
    %10 = cir.call @memchr(%5, %7, %9) : (!cir.ptr<!void>, !s32i, !u64i) -> !cir.ptr<!void> side_effect(pure) extra(#fn_attr) loc(#loc25)
    %11 = cir.cast bitcast %10 : !cir.ptr<!void> -> !cir.ptr<!s8i> loc(#loc55)
    cir.store align(8) %11, %1 : !cir.ptr<!s8i>, !cir.ptr<!cir.ptr<!s8i>> loc(#loc56)
    cir.br ^bb1 loc(#loc57)
  ^bb1:  // pred: ^bb0
    %12 = cir.load align(8) %1 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc30)
    %13 = cir.const #cir.ptr<null> : !cir.ptr<!s8i> loc(#loc31)
    %14 = cir.cmp(ne, %12, %13) : !cir.ptr<!s8i>, !cir.bool loc(#loc58)
    cir.brcond %14 ^bb2, ^bb3 loc(#loc59)
  ^bb2:  // pred: ^bb1
    %15 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
    %16 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 23>> loc(#loc9)
    %17 = cir.cast array_to_ptrdecay %16 : !cir.ptr<!cir.array<!s8i x 23>> -> !cir.ptr<!s8i> loc(#loc9)
    %18 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%15, %17) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
    %19 = cir.load align(8) %1 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc36)
    %20 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 15>> -> !cir.ptr<!s8i> loc(#loc37)
    %21 = cir.ptr_diff %19, %20 : !cir.ptr<!s8i> -> !s64i loc(#loc60)
    %22 = cir.const #cir.int<1> : !s32i loc(#loc38)
    %23 = cir.cast integral %22 : !s32i -> !s64i loc(#loc38)
    %24 = cir.binop(add, %21, %23) nsw : !s64i loc(#loc60)
    %25 = cir.call @_ZNSolsEl(%18, %24) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s64i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc39)
    %26 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 2>> loc(#loc12)
    %27 = cir.cast array_to_ptrdecay %26 : !cir.ptr<!cir.array<!s8i x 2>> -> !cir.ptr<!s8i> loc(#loc12)
    %28 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%25, %27) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc40)
    %29 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc33)
    %30 = cir.call @_ZNSolsEPFRSoS_E(%28, %29) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc41)
    cir.br ^bb4 loc(#loc33)
  ^bb3:  // pred: ^bb1
    %31 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
    %32 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 15>> loc(#loc17)
    %33 = cir.cast array_to_ptrdecay %32 : !cir.ptr<!cir.array<!s8i x 15>> -> !cir.ptr<!s8i> loc(#loc17)
    %34 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%31, %33) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc42)
    %35 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc29)
    %36 = cir.call @_ZNSolsEPFRSoS_E(%34, %35) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
    cir.br ^bb4 loc(#loc29)
  ^bb4:  // 2 preds: ^bb2, ^bb3
    cir.br ^bb5 loc(#loc29)
  ^bb5:  // pred: ^bb4
    %37 = cir.const #cir.int<0> : !s32i loc(#loc44)
    cir.store align(4) %37, %0 : !s32i, !cir.ptr<!s32i> loc(#loc61)
    %38 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc61)
    cir.return %38 : !s32i loc(#loc61)
  } loc(#loc53)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":18:3)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":18:16)
#loc3 = loc("/usr/include/string.h":98:1)
#loc4 = loc("/usr/include/string.h":99:51)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:13)
#loc10 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":173:7)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":175:32)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:54)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":23:13)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":15:1)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":25:1)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":17:3)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":17:10)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":19:25)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":19:30)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":19:35)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":19:17)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":19:37)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":19:3)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":20:3)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":23:33)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":20:7)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":20:12)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:5)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:61)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":23:5)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:10)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:41)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:45)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:49)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:38)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:51)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":21:58)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":23:10)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":23:30)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":24:10)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring17_memchr/main.cpp":24:3)
#loc46 = loc(fused[#loc1, #loc2])
#loc47 = loc(fused[#loc3, #loc4])
#loc48 = loc(fused[#loc5, #loc6])
#loc49 = loc(fused[#loc7, #loc8])
#loc50 = loc(fused[#loc10, #loc11])
#loc51 = loc(fused[#loc13, #loc14])
#loc52 = loc(fused[#loc15, #loc16])
#loc53 = loc(fused[#loc18, #loc19])
#loc54 = loc(fused[#loc20, #loc21])
#loc55 = loc(fused[#loc25, #loc26])
#loc56 = loc(fused[#loc27, #loc26])
#loc57 = loc(fused[#loc28, #loc29])
#loc58 = loc(fused[#loc30, #loc31])
#loc59 = loc(fused[#loc32, #loc33, #loc34, #loc29])
#loc60 = loc(fused[#loc36, #loc37])
#loc61 = loc(fused[#loc45, #loc44])
