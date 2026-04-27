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
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":34:26)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":34:32)
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc60 = loc(fused[#loc13, #loc14])
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.global "private" constant cir_private @__const.main.phrase = #cir.const_array<"characters and $32.98\00" : !cir.array<!s8i x 22>> : !cir.array<!s8i x 22> loc(#loc55)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc56)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc57)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"The phrase before conversion is: \00" : !cir.array<!s8i x 34>> : !cir.array<!s8i x 34> {alignment = 1 : i64} loc(#loc7)
  cir.func private @islower(!s32i) -> !s32i extra(#fn_attr) loc(#loc8)
  cir.func private @toupper(!s32i) -> !s32i extra(#fn_attr) loc(#loc58)
  cir.func no_inline optnone dso_local @_Z18convertToUppercasePc(%arg0: !cir.ptr<!s8i> loc(fused[#loc13, #loc14])) extra(#fn_attr1) {
    %0 = cir.alloca !cir.ptr<!s8i>, !cir.ptr<!cir.ptr<!s8i>>, ["sPtr", init] {alignment = 8 : i64} loc(#loc60)
    cir.store %arg0, %0 : !cir.ptr<!s8i>, !cir.ptr<!cir.ptr<!s8i>> loc(#loc15)
    cir.br ^bb1 loc(#loc61)
  ^bb1:  // pred: ^bb0
    cir.br ^bb2 loc(#loc61)
  ^bb2:  // 2 preds: ^bb1, ^bb9
    %1 = cir.load deref align(8) %0 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc18)
    %2 = cir.load align(1) %1 : !cir.ptr<!s8i>, !s8i loc(#loc19)
    %3 = cir.cast integral %2 : !s8i -> !s32i loc(#loc19)
    %4 = cir.const #cir.int<0> : !s8i loc(#loc20)
    %5 = cir.cast integral %4 : !s8i -> !s32i loc(#loc20)
    %6 = cir.cmp(ne, %3, %5) : !s32i, !cir.bool loc(#loc62)
    cir.brcond %6 ^bb3, ^bb10 loc(#loc62)
  ^bb3:  // pred: ^bb2
    cir.br ^bb4 loc(#loc63)
  ^bb4:  // pred: ^bb3
    cir.br ^bb5 loc(#loc64)
  ^bb5:  // pred: ^bb4
    %7 = cir.get_global @islower : !cir.ptr<!cir.func<(!s32i) -> !s32i>> loc(#loc24)
    %8 = cir.load deref align(8) %0 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc25)
    %9 = cir.load align(1) %8 : !cir.ptr<!s8i>, !s8i loc(#loc26)
    %10 = cir.cast integral %9 : !s8i -> !s32i loc(#loc26)
    %11 = cir.call @islower(%10) : (!s32i) -> !s32i side_effect(pure) extra(#fn_attr) loc(#loc24)
    %12 = cir.cast int_to_bool %11 : !s32i -> !cir.bool loc(#loc65)
    cir.brcond %12 ^bb6, ^bb7 loc(#loc66)
  ^bb6:  // pred: ^bb5
    %13 = cir.get_global @toupper : !cir.ptr<!cir.func<(!s32i) -> !s32i>> loc(#loc29)
    %14 = cir.load deref align(8) %0 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc30)
    %15 = cir.load align(1) %14 : !cir.ptr<!s8i>, !s8i loc(#loc31)
    %16 = cir.cast integral %15 : !s8i -> !s32i loc(#loc31)
    %17 = cir.call @toupper(%16) : (!s32i) -> !s32i side_effect(pure) extra(#fn_attr) loc(#loc29)
    %18 = cir.cast integral %17 : !s32i -> !s8i loc(#loc29)
    %19 = cir.load deref align(8) %0 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc32)
    cir.store align(1) %18, %19 : !s8i, !cir.ptr<!s8i> loc(#loc66)
    cir.br ^bb7 loc(#loc23)
  ^bb7:  // 2 preds: ^bb5, ^bb6
    cir.br ^bb8 loc(#loc23)
  ^bb8:  // pred: ^bb7
    %20 = cir.load align(8) %0 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc33)
    %21 = cir.const #cir.int<1> : !s32i loc(#loc67)
    %22 = cir.ptr_stride %20, %21 : (!cir.ptr<!s8i>, !s32i) -> !cir.ptr<!s8i> loc(#loc67)
    cir.store align(8) %22, %0 : !cir.ptr<!s8i>, !cir.ptr<!cir.ptr<!s8i>> loc(#loc67)
    cir.br ^bb9 loc(#loc17)
  ^bb9:  // pred: ^bb8
    cir.br ^bb2 loc(#loc17)
  ^bb10:  // pred: ^bb2
    cir.br ^bb11 loc(#loc17)
  ^bb11:  // pred: ^bb10
    cir.return loc(#loc35)
  } loc(#loc59)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"\0AThe phrase after conversion is:  \00" : !cir.array<!s8i x 35>> : !cir.array<!s8i x 35> {alignment = 1 : i64} loc(#loc36)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc68)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc69)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc42)
    %1 = cir.alloca !cir.array<!s8i x 22>, !cir.ptr<!cir.array<!s8i x 22>>, ["phrase", init] {alignment = 16 : i64} loc(#loc55)
    %2 = cir.get_global @__const.main.phrase : !cir.ptr<!cir.array<!s8i x 22>> loc(#loc55)
    cir.copy %2 to %1 : !cir.ptr<!cir.array<!s8i x 22>> loc(#loc55)
    %3 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc57)
    %4 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 34>> loc(#loc7)
    %5 = cir.cast array_to_ptrdecay %4 : !cir.ptr<!cir.array<!s8i x 34>> -> !cir.ptr<!s8i> loc(#loc7)
    %6 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%3, %5) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
    %7 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 22>> -> !cir.ptr<!s8i> loc(#loc44)
    %8 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%6, %7) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc45)
    %9 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 22>> -> !cir.ptr<!s8i> loc(#loc46)
    cir.call @_Z18convertToUppercasePc(%9) : (!cir.ptr<!s8i>) -> () loc(#loc47)
    %10 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc57)
    %11 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 35>> loc(#loc36)
    %12 = cir.cast array_to_ptrdecay %11 : !cir.ptr<!cir.array<!s8i x 35>> -> !cir.ptr<!s8i> loc(#loc36)
    %13 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%10, %12) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
    %14 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 22>> -> !cir.ptr<!s8i> loc(#loc49)
    %15 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%13, %14) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc50)
    %16 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc51)
    %17 = cir.call @_ZNSolsEPFRSoS_E(%15, %16) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc52)
    %18 = cir.const #cir.int<0> : !s32i loc(#loc53)
    cir.store align(4) %18, %0 : !s32i, !cir.ptr<!s32i> loc(#loc71)
    %19 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc71)
    cir.return %19 : !s32i loc(#loc71)
  } loc(#loc70)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":22:4)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":22:20)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":24:12)
#loc8 = loc("/usr/include/ctype.h":112:1)
#loc9 = loc("/usr/include/ctype.h":125:1)
#loc10 = loc("/usr/include/ctype.h":125:30)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":18:1)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":18:33)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":35:1)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":36:4)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":43:4)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":36:13)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":36:12)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":36:21)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":36:28)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":38:7)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":39:33)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":38:12)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":38:22)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":38:21)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":38:27)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":39:10)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":39:18)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":39:28)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":39:27)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":39:11)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":41:7)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":41:9)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":45:1)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":26:12)
#loc37 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc38 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc39 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc40 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":20:1)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":31:1)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":24:9)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":24:51)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":24:48)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":25:24)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":25:4)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":26:9)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":27:12)
#loc50 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":27:9)
#loc51 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":27:22)
#loc52 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":27:19)
#loc53 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":29:11)
#loc54 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch5_7/main.cpp":29:4)
#loc55 = loc(fused[#loc1, #loc2])
#loc56 = loc(fused[#loc3, #loc4])
#loc57 = loc(fused[#loc5, #loc6])
#loc58 = loc(fused[#loc9, #loc10])
#loc59 = loc(fused[#loc11, #loc12])
#loc61 = loc(fused[#loc16, #loc17])
#loc62 = loc(fused[#loc19, #loc20])
#loc63 = loc(fused[#loc21, #loc17])
#loc64 = loc(fused[#loc22, #loc23])
#loc65 = loc(fused[#loc24, #loc27])
#loc66 = loc(fused[#loc28, #loc23])
#loc67 = loc(fused[#loc33, #loc34])
#loc68 = loc(fused[#loc37, #loc38])
#loc69 = loc(fused[#loc39, #loc40])
#loc70 = loc(fused[#loc41, #loc42])
#loc71 = loc(fused[#loc54, #loc53])
