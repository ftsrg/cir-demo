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
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":25:36)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":25:20)
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc57 = loc(fused[#loc29, #loc6])
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc42)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc43)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"<\00" : !cir.array<!s8i x 2>> : !cir.array<!s8i x 2> {alignment = 1 : i64} loc(#loc5)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<">\00" : !cir.array<!s8i x 2>> : !cir.array<!s8i x 2> {alignment = 1 : i64} loc(#loc6)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc44)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc45)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc12)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["row", init] {alignment = 4 : i64} loc(#loc47)
    %2 = cir.alloca !s32i, !cir.ptr<!s32i>, ["column"] {alignment = 4 : i64} loc(#loc48)
    %3 = cir.const #cir.int<10> : !s32i loc(#loc14)
    cir.store align(4) %3, %1 : !s32i, !cir.ptr<!s32i> loc(#loc47)
    cir.br ^bb1 loc(#loc49)
  ^bb1:  // pred: ^bb0
    cir.br ^bb2 loc(#loc49)
  ^bb2:  // 2 preds: ^bb1, ^bb15
    %4 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc19)
    %5 = cir.const #cir.int<1> : !s32i loc(#loc20)
    %6 = cir.cmp(ge, %4, %5) : !s32i, !cir.bool loc(#loc50)
    cir.brcond %6 ^bb3, ^bb16 loc(#loc50)
  ^bb3:  // pred: ^bb2
    cir.br ^bb4 loc(#loc51)
  ^bb4:  // pred: ^bb3
    %7 = cir.const #cir.int<1> : !s32i loc(#loc22)
    cir.store align(4) %7, %2 : !s32i, !cir.ptr<!s32i> loc(#loc52)
    cir.br ^bb5 loc(#loc53)
  ^bb5:  // pred: ^bb4
    cir.br ^bb6 loc(#loc53)
  ^bb6:  // 2 preds: ^bb5, ^bb12
    %8 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc26)
    %9 = cir.const #cir.int<10> : !s32i loc(#loc27)
    %10 = cir.cmp(le, %8, %9) : !s32i, !cir.bool loc(#loc54)
    cir.brcond %10 ^bb7, ^bb13 loc(#loc54)
  ^bb7:  // pred: ^bb6
    cir.br ^bb8 loc(#loc55)
  ^bb8:  // pred: ^bb7
    %11 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
    %12 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc29)
    %13 = cir.const #cir.int<2> : !s32i loc(#loc30)
    %14 = cir.binop(rem, %12, %13) : !s32i loc(#loc56)
    %15 = cir.cast int_to_bool %14 : !s32i -> !cir.bool loc(#loc56)
    cir.brcond %15 ^bb9, ^bb10 loc(#loc57)
  ^bb9:  // pred: ^bb8
    %16 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 2>> loc(#loc5)
    cir.br ^bb11(%16 : !cir.ptr<!cir.array<!s8i x 2>>) loc(#loc57)
  ^bb10:  // pred: ^bb8
    %17 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 2>> loc(#loc6)
    cir.br ^bb11(%17 : !cir.ptr<!cir.array<!s8i x 2>>) loc(#loc57)
  ^bb11(%18: !cir.ptr<!cir.array<!s8i x 2>> loc(fused[#loc29, #loc6])):  // 2 preds: ^bb9, ^bb10
    %19 = cir.cast array_to_ptrdecay %18 : !cir.ptr<!cir.array<!s8i x 2>> -> !cir.ptr<!s8i> loc(#loc58)
    %20 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%11, %19) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
    %21 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc34)
    %22 = cir.unary(inc, %21) nsw : !s32i, !s32i loc(#loc34)
    cir.store align(4) %22, %2 : !s32i, !cir.ptr<!s32i> loc(#loc59)
    cir.br ^bb12 loc(#loc25)
  ^bb12:  // pred: ^bb11
    cir.br ^bb6 loc(#loc25)
  ^bb13:  // pred: ^bb6
    cir.br ^bb14 loc(#loc25)
  ^bb14:  // pred: ^bb13
    %23 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc36)
    %24 = cir.unary(dec, %23) nsw : !s32i, !s32i loc(#loc36)
    cir.store align(4) %24, %1 : !s32i, !cir.ptr<!s32i> loc(#loc60)
    %25 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
    %26 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc38)
    %27 = cir.call @_ZNSolsEPFRSoS_E(%25, %26) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc39)
    cir.br ^bb15 loc(#loc18)
  ^bb15:  // pred: ^bb14
    cir.br ^bb2 loc(#loc18)
  ^bb16:  // pred: ^bb2
    cir.br ^bb17 loc(#loc18)
  ^bb17:  // pred: ^bb16
    %28 = cir.const #cir.int<0> : !s32i loc(#loc40)
    cir.store align(4) %28, %0 : !s32i, !cir.ptr<!s32i> loc(#loc61)
    %29 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc61)
    cir.return %29 : !s32i loc(#loc61)
  } loc(#loc46)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":25:30)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc10 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":16:1)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":37:1)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":18:4)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":18:14)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":19:4)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":19:8)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":21:4)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":33:4)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":21:12)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":21:19)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":21:23)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":22:16)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":22:7)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":24:7)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":28:7)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":24:15)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":24:25)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":24:30)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":25:26)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":25:18)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":25:40)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":25:15)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":26:10)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":26:12)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":30:7)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":30:9)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":31:15)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":31:12)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":35:11)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_5/main.cpp":35:4)
#loc42 = loc(fused[#loc1, #loc2])
#loc43 = loc(fused[#loc3, #loc4])
#loc44 = loc(fused[#loc7, #loc8])
#loc45 = loc(fused[#loc9, #loc10])
#loc46 = loc(fused[#loc11, #loc12])
#loc47 = loc(fused[#loc13, #loc14])
#loc48 = loc(fused[#loc15, #loc16])
#loc49 = loc(fused[#loc17, #loc18])
#loc50 = loc(fused[#loc19, #loc20])
#loc51 = loc(fused[#loc21, #loc18])
#loc52 = loc(fused[#loc23, #loc22])
#loc53 = loc(fused[#loc24, #loc25])
#loc54 = loc(fused[#loc26, #loc27])
#loc55 = loc(fused[#loc28, #loc25])
#loc56 = loc(fused[#loc29, #loc30])
#loc58 = loc(fused[#loc31, #loc32])
#loc59 = loc(fused[#loc34, #loc35])
#loc60 = loc(fused[#loc36, #loc37])
#loc61 = loc(fused[#loc41, #loc40])
