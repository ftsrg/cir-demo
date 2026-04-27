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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_Znam(!u64i) -> !cir.ptr<!void> loc(#loc49)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc50)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc51)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Memory allocation failed for ptr[ \00" : !cir.array<!s8i x 35>> : !cir.array<!s8i x 35> {alignment = 1 : i64} loc(#loc7)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc52)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<" ]\0A\00" : !cir.array<!s8i x 4>> : !cir.array<!s8i x 4> {alignment = 1 : i64} loc(#loc10)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"Allocated 5000000 doubles in ptr[ \00" : !cir.array<!s8i x 35>> : !cir.array<!s8i x 35> {alignment = 1 : i64} loc(#loc11)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["i", init] {alignment = 4 : i64} loc(#loc54)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc13)
    %2 = cir.alloca !cir.array<!cir.ptr<!cir.double> x 50>, !cir.ptr<!cir.array<!cir.ptr<!cir.double> x 50>>, ["ptr"] {alignment = 16 : i64} loc(#loc55)
    cir.br ^bb1 loc(#loc56)
  ^bb1:  // pred: ^bb0
    %3 = cir.const #cir.int<0> : !s32i loc(#loc15)
    cir.store align(4) %3, %0 : !s32i, !cir.ptr<!s32i> loc(#loc54)
    cir.br ^bb2 loc(#loc56)
  ^bb2:  // 2 preds: ^bb1, ^bb11
    %4 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc20)
    %5 = cir.const #cir.int<50> : !s32i loc(#loc21)
    %6 = cir.cmp(lt, %4, %5) : !s32i, !cir.bool loc(#loc57)
    cir.brcond %6 ^bb3, ^bb12 loc(#loc57)
  ^bb3:  // pred: ^bb2
    cir.br ^bb4 loc(#loc58)
  ^bb4:  // pred: ^bb3
    %7 = cir.const #cir.int<5000000> : !u64i loc(#loc59)
    %8 = cir.const #cir.int<40000000> : !u64i loc(#loc59)
    %9 = cir.call @_Znam(%8) : (!u64i) -> !cir.ptr<!void> loc(#loc25)
    %10 = cir.cast bitcast %9 : !cir.ptr<!void> -> !cir.ptr<!cir.double> loc(#loc59)
    %11 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc26)
    %12 = cir.get_element %2[%11] : (!cir.ptr<!cir.array<!cir.ptr<!cir.double> x 50>>, !s32i) -> !cir.ptr<!cir.ptr<!cir.double>> loc(#loc27)
    cir.store align(8) %10, %12 : !cir.ptr<!cir.double>, !cir.ptr<!cir.ptr<!cir.double>> loc(#loc60)
    cir.br ^bb5 loc(#loc61)
  ^bb5:  // pred: ^bb4
    %13 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc30)
    %14 = cir.get_element %2[%13] : (!cir.ptr<!cir.array<!cir.ptr<!cir.double> x 50>>, !s32i) -> !cir.ptr<!cir.ptr<!cir.double>> loc(#loc31)
    %15 = cir.load align(8) %14 : !cir.ptr<!cir.ptr<!cir.double>>, !cir.ptr<!cir.double> loc(#loc31)
    %16 = cir.const #cir.ptr<null> : !cir.ptr<!cir.double> loc(#loc32)
    %17 = cir.cmp(eq, %15, %16) : !cir.ptr<!cir.double>, !cir.bool loc(#loc62)
    cir.brcond %17 ^bb6, ^bb7 loc(#loc63)
  ^bb6:  // pred: ^bb5
    %18 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
    %19 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 35>> loc(#loc7)
    %20 = cir.cast array_to_ptrdecay %19 : !cir.ptr<!cir.array<!s8i x 35>> -> !cir.ptr<!s8i> loc(#loc7)
    %21 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%18, %20) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc36)
    %22 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc37)
    %23 = cir.call @_ZNSolsEi(%21, %22) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc38)
    %24 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 4>> loc(#loc10)
    %25 = cir.cast array_to_ptrdecay %24 : !cir.ptr<!cir.array<!s8i x 4>> -> !cir.ptr<!s8i> loc(#loc10)
    %26 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%23, %25) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc39)
    cir.br ^bb12 loc(#loc40)
  ^bb7:  // pred: ^bb5
    %27 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
    %28 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 35>> loc(#loc11)
    %29 = cir.cast array_to_ptrdecay %28 : !cir.ptr<!cir.array<!s8i x 35>> -> !cir.ptr<!s8i> loc(#loc11)
    %30 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%27, %29) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc41)
    %31 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc42)
    %32 = cir.call @_ZNSolsEi(%30, %31) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
    %33 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 4>> loc(#loc29)
    %34 = cir.cast array_to_ptrdecay %33 : !cir.ptr<!cir.array<!s8i x 4>> -> !cir.ptr<!s8i> loc(#loc29)
    %35 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%32, %34) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc44)
    cir.br ^bb8 loc(#loc29)
  ^bb8:  // pred: ^bb7
    cir.br ^bb9 loc(#loc29)
  ^bb9:  // pred: ^bb8
    cir.br ^bb10 loc(#loc19)
  ^bb10:  // pred: ^bb9
    cir.br ^bb11 loc(#loc19)
  ^bb11:  // pred: ^bb10
    %36 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc45)
    %37 = cir.unary(inc, %36) nsw : !s32i, !s32i loc(#loc46)
    cir.store align(4) %37, %0 : !s32i, !cir.ptr<!s32i> loc(#loc64)
    cir.br ^bb2 loc(#loc56)
  ^bb12:  // 2 preds: ^bb2, ^bb6
    cir.br ^bb13 loc(#loc19)
  ^bb13:  // pred: ^bb12
    %38 = cir.const #cir.int<0> : !s32i loc(#loc47)
    cir.store align(4) %38, %1 : !s32i, !cir.ptr<!s32i> loc(#loc65)
    %39 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc65)
    cir.return %39 : !s32i loc(#loc65)
  } loc(#loc53)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":140:20)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":142:53)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":19:15)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":20:19)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":24:15)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":11:1)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":28:1)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":15:9)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":15:17)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":13:3)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":13:19)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":15:3)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":26:3)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":15:20)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":15:24)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":15:34)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":16:16)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":16:36)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":11:5)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":16:10)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":16:5)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":18:5)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":25:15)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":18:15)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":18:10)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":18:22)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":18:26)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":22:5)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":24:7)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":19:12)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":20:14)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":20:11)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":20:16)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":21:7)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":24:12)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":25:10)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":25:7)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":25:12)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":15:29)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":15:28)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":27:10)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_4/main.cpp":27:3)
#loc49 = loc(fused[#loc1, #loc2])
#loc50 = loc(fused[#loc3, #loc4])
#loc51 = loc(fused[#loc5, #loc6])
#loc52 = loc(fused[#loc8, #loc9])
#loc53 = loc(fused[#loc12, #loc13])
#loc54 = loc(fused[#loc14, #loc15])
#loc55 = loc(fused[#loc16, #loc17])
#loc56 = loc(fused[#loc18, #loc19])
#loc57 = loc(fused[#loc20, #loc21])
#loc58 = loc(fused[#loc22, #loc19])
#loc59 = loc(fused[#loc23, #loc24])
#loc60 = loc(fused[#loc27, #loc24])
#loc61 = loc(fused[#loc28, #loc29])
#loc62 = loc(fused[#loc31, #loc32])
#loc63 = loc(fused[#loc33, #loc34, #loc35, #loc29])
#loc64 = loc(fused[#loc46, #loc45])
#loc65 = loc(fused[#loc48, #loc47])
