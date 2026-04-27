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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
  cir.global "private" external @_ZSt4cerr : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc49)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"customNewHandler was called\00" : !cir.array<!s8i x 28>> : !cir.array<!s8i x 28> {alignment = 1 : i64} loc(#loc5)
  cir.func private @abort() extra(#fn_attr) loc(#loc50)
  cir.func no_inline optnone dso_local @_Z16customNewHandlerv() extra(#fn_attr1) {
    %0 = cir.get_global @_ZSt4cerr : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
    %1 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 28>> loc(#loc5)
    %2 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 28>> -> !cir.ptr<!s8i> loc(#loc5)
    %3 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%0, %2) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc10)
    %4 = cir.get_global @abort : !cir.ptr<!cir.func<()>> loc(#loc11)
    cir.call @abort() : () -> () extra(#fn_attr) loc(#loc11)
    cir.return loc(#loc9)
  } loc(#loc51)
  cir.func private @_ZSt15set_new_handlerPFvvE(!cir.ptr<!cir.func<()>>) -> !cir.ptr<!cir.func<()>> extra(#fn_attr) loc(#loc52)
  cir.func private @_Znam(!u64i) -> !cir.ptr<!void> loc(#loc53)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc54)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"Allocated 5000000 doubles in ptr[ \00" : !cir.array<!s8i x 35>> : !cir.array<!s8i x 35> {alignment = 1 : i64} loc(#loc18)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<" ]\0A\00" : !cir.array<!s8i x 4>> : !cir.array<!s8i x 4> {alignment = 1 : i64} loc(#loc21)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["i", init] {alignment = 4 : i64} loc(#loc57)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc23)
    %2 = cir.alloca !cir.array<!cir.ptr<!cir.double> x 5>, !cir.ptr<!cir.array<!cir.ptr<!cir.double> x 5>>, ["ptr"] {alignment = 16 : i64} loc(#loc58)
    %3 = cir.get_global @_Z16customNewHandlerv : !cir.ptr<!cir.func<()>> loc(#loc28)
    %4 = cir.call @_ZSt15set_new_handlerPFvvE(%3) : (!cir.ptr<!cir.func<()>>) -> !cir.ptr<!cir.func<()>> extra(#fn_attr) loc(#loc29)
    cir.br ^bb1 loc(#loc59)
  ^bb1:  // pred: ^bb0
    %5 = cir.const #cir.int<0> : !s32i loc(#loc25)
    cir.store align(4) %5, %0 : !s32i, !cir.ptr<!s32i> loc(#loc57)
    cir.br ^bb2 loc(#loc59)
  ^bb2:  // 2 preds: ^bb1, ^bb6
    %6 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc32)
    %7 = cir.const #cir.int<5> : !s32i loc(#loc33)
    %8 = cir.cmp(lt, %6, %7) : !s32i, !cir.bool loc(#loc60)
    cir.brcond %8 ^bb3, ^bb7 loc(#loc60)
  ^bb3:  // pred: ^bb2
    cir.br ^bb4 loc(#loc61)
  ^bb4:  // pred: ^bb3
    %9 = cir.const #cir.int<5000000000000> : !u64i loc(#loc62)
    %10 = cir.const #cir.int<40000000000000> : !u64i loc(#loc62)
    %11 = cir.call @_Znam(%10) : (!u64i) -> !cir.ptr<!void> loc(#loc37)
    %12 = cir.cast bitcast %11 : !cir.ptr<!void> -> !cir.ptr<!cir.double> loc(#loc62)
    %13 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc38)
    %14 = cir.get_element %2[%13] : (!cir.ptr<!cir.array<!cir.ptr<!cir.double> x 5>>, !s32i) -> !cir.ptr<!cir.ptr<!cir.double>> loc(#loc39)
    cir.store align(8) %12, %14 : !cir.ptr<!cir.double>, !cir.ptr<!cir.ptr<!cir.double>> loc(#loc63)
    %15 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc54)
    %16 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 35>> loc(#loc18)
    %17 = cir.cast array_to_ptrdecay %16 : !cir.ptr<!cir.array<!s8i x 35>> -> !cir.ptr<!s8i> loc(#loc18)
    %18 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%15, %17) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc40)
    %19 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc41)
    %20 = cir.call @_ZNSolsEi(%18, %19) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc42)
    %21 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 4>> loc(#loc21)
    %22 = cir.cast array_to_ptrdecay %21 : !cir.ptr<!cir.array<!s8i x 4>> -> !cir.ptr<!s8i> loc(#loc21)
    %23 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%20, %22) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
    cir.br ^bb5 loc(#loc31)
  ^bb5:  // pred: ^bb4
    cir.br ^bb6 loc(#loc31)
  ^bb6:  // pred: ^bb5
    %24 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc44)
    %25 = cir.unary(inc, %24) nsw : !s32i, !s32i loc(#loc45)
    cir.store align(4) %25, %0 : !s32i, !cir.ptr<!s32i> loc(#loc64)
    cir.br ^bb2 loc(#loc59)
  ^bb7:  // pred: ^bb2
    cir.br ^bb8 loc(#loc31)
  ^bb8:  // pred: ^bb7
    %26 = cir.const #cir.int<0> : !s32i loc(#loc46)
    cir.store align(4) %26, %1 : !s32i, !cir.ptr<!s32i> loc(#loc65)
    %27 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc65)
    cir.return %27 : !s32i loc(#loc65)
  } loc(#loc56)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":66:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":66:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":23:12)
#loc6 = loc("/usr/include/stdlib.h":752:1)
#loc7 = loc("/usr/include/stdlib.h":752:65)
#loc8 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":21:1)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":25:1)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":23:9)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":24:4)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":118:3)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":118:50)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":140:20)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":142:53)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":41:15)
#loc19 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc20 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":42:20)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":28:1)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":48:1)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":38:10)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":38:18)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":30:4)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":30:19)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":34:21)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":34:4)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":38:4)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":44:4)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":38:21)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":38:25)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":38:34)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":39:18)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":39:44)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":28:5)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":39:12)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":39:7)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":41:12)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":42:15)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":42:12)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":42:17)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":38:29)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":38:28)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":46:11)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_6/main.cpp":46:4)
#loc48 = loc(fused[#loc1, #loc2])
#loc49 = loc(fused[#loc3, #loc4])
#loc50 = loc(fused[#loc6, #loc7])
#loc51 = loc(fused[#loc8, #loc9])
#loc52 = loc(fused[#loc12, #loc13])
#loc53 = loc(fused[#loc14, #loc15])
#loc54 = loc(fused[#loc16, #loc17])
#loc55 = loc(fused[#loc19, #loc20])
#loc56 = loc(fused[#loc22, #loc23])
#loc57 = loc(fused[#loc24, #loc25])
#loc58 = loc(fused[#loc26, #loc27])
#loc59 = loc(fused[#loc30, #loc31])
#loc60 = loc(fused[#loc32, #loc33])
#loc61 = loc(fused[#loc34, #loc31])
#loc62 = loc(fused[#loc35, #loc36])
#loc63 = loc(fused[#loc39, #loc36])
#loc64 = loc(fused[#loc45, #loc44])
#loc65 = loc(fused[#loc47, #loc46])
