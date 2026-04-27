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
#fn_attr1 = #cir<extra({uwtable = #cir.uwtable<async>})>
#fn_attr2 = #cir<extra({nothrow = #cir.nothrow})>
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":52:13)
#loc4 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":17:11)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":17:17)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":54:11)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":54:23)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":37:9)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":26:24)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":63:18)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":26:15)
#loc61 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":30:9)
#loc68 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":27:17)
#loc69 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":78:18)
#loc70 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":27:14)
#loc91 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":20:4)
#loc119 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":39:17)
#loc129 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)
#true = #cir.bool<true> : !cir.bool
!rec_Stack3Cdouble3E = !cir.record<class "Stack<double>" {!s32i, !s32i, !cir.ptr<!cir.double>}>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc160 = loc(fused[#loc4, #loc5])
#loc162 = loc(fused[#loc7, #loc9])
#loc172 = loc(fused[#loc37, #loc35])
#loc185 = loc(fused[#loc70, #loc68])
!rec_Stack3Cint3E = !cir.record<class "Stack<int>" {!s32i, !s32i, !cir.ptr<!s32i>}>
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func no_inline optnone linkonce_odr dso_local @_ZN5StackIdEC2Ei(%arg0: !cir.ptr<!rec_Stack3Cdouble3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":52:13), %arg1: !s32i loc(fused[#loc4, #loc5])) special_member<#cir.cxx_ctor<!rec_Stack3Cdouble3E, default>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, ["this", init] {alignment = 8 : i64} loc(#loc3)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["s", init] {alignment = 4 : i64} loc(#loc160)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>> loc(#loc6)
    cir.store %arg1, %1 : !s32i, !cir.ptr<!s32i> loc(#loc6)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, !cir.ptr<!rec_Stack3Cdouble3E> loc(#loc3)
    %3 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc7)
    %4 = cir.const #cir.int<0> : !s32i loc(#loc8)
    %5 = cir.cmp(gt, %3, %4) : !s32i, !cir.bool loc(#loc161)
    cir.brcond %5 ^bb1, ^bb2 loc(#loc162)
  ^bb1:  // pred: ^bb0
    %6 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc10)
    cir.br ^bb3(%6 : !s32i) loc(#loc162)
  ^bb2:  // pred: ^bb0
    %7 = cir.const #cir.int<10> : !s32i loc(#loc9)
    cir.br ^bb3(%7 : !s32i) loc(#loc162)
  ^bb3(%8: !s32i loc(fused[#loc7, #loc9])):  // 2 preds: ^bb1, ^bb2
    %9 = cir.get_member %2[0] {name = "size"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!s32i> loc(#loc11)
    cir.store align(8) %8, %9 : !s32i, !cir.ptr<!s32i> loc(#loc163)
    %10 = cir.const #cir.int<1> : !s32i loc(#loc13)
    %11 = cir.unary(minus, %10) nsw : !s32i, !s32i loc(#loc14)
    %12 = cir.get_member %2[1] {name = "top"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!s32i> loc(#loc15)
    cir.store align(4) %11, %12 : !s32i, !cir.ptr<!s32i> loc(#loc164)
    %13 = cir.get_member %2[0] {name = "size"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!s32i> loc(#loc11)
    %14 = cir.load align(8) %13 : !cir.ptr<!s32i>, !s32i loc(#loc17)
    %15 = cir.cast integral %14 : !s32i -> !u64i loc(#loc17)
    %16 = cir.const #cir.int<8> : !u64i loc(#loc18)
    %result, %overflow = cir.binop.overflow(mul, %15, %16) : !u64i, (!u64i, !cir.bool) loc(#loc18)
    %17 = cir.const #cir.int<18446744073709551615> : !u64i loc(#loc18)
    %18 = cir.select if %overflow then %17 else %result : (!cir.bool, !u64i, !u64i) -> !u64i loc(#loc18)
    %19 = cir.call @_Znam(%18) : (!u64i) -> !cir.ptr<!void> loc(#loc3)
    %20 = cir.cast bitcast %19 : !cir.ptr<!void> -> !cir.ptr<!cir.double> loc(#loc18)
    %21 = cir.get_member %2[2] {name = "stackPtr"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!cir.ptr<!cir.double>> loc(#loc19)
    cir.store align(8) %20, %21 : !cir.ptr<!cir.double>, !cir.ptr<!cir.ptr<!cir.double>> loc(#loc165)
    cir.return loc(#loc2)
  } loc(#loc159)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc166)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc167)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Pushing elements onto doubleStack\0A\00" : !cir.array<!s8i x 35>> : !cir.array<!s8i x 35> {alignment = 1 : i64} loc(#loc25)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNK5StackIdE6isFullEv(%arg0: !cir.ptr<!rec_Stack3Cdouble3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":37:9)) -> !cir.bool extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, ["this", init] {alignment = 8 : i64} loc(#loc28)
    %1 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["__retval"] {alignment = 1 : i64} loc(#loc27)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>> loc(#loc29)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, !cir.ptr<!rec_Stack3Cdouble3E> loc(#loc28)
    %3 = cir.get_member %2[1] {name = "top"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!s32i> loc(#loc15)
    %4 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc30)
    %5 = cir.get_member %2[0] {name = "size"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!s32i> loc(#loc11)
    %6 = cir.load align(8) %5 : !cir.ptr<!s32i>, !s32i loc(#loc31)
    %7 = cir.const #cir.int<1> : !s32i loc(#loc32)
    %8 = cir.binop(sub, %6, %7) nsw : !s32i loc(#loc31)
    %9 = cir.cmp(eq, %4, %8) : !s32i, !cir.bool loc(#loc169)
    cir.store align(1) %9, %1 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc170)
    %10 = cir.load align(1) %1 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc170)
    cir.return %10 : !cir.bool loc(#loc170)
  } loc(#loc168)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN5StackIdE4pushERKd(%arg0: !cir.ptr<!rec_Stack3Cdouble3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":63:18), %arg1: !cir.ptr<!cir.double> loc(fused[#loc37, #loc35])) -> !cir.bool extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, ["this", init] {alignment = 8 : i64} loc(#loc36)
    %1 = cir.alloca !cir.ptr<!cir.double>, !cir.ptr<!cir.ptr<!cir.double>>, ["pushValue", init, const] {alignment = 8 : i64} loc(#loc172)
    %2 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["__retval"] {alignment = 1 : i64} loc(#loc38)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>> loc(#loc39)
    cir.store %arg1, %1 : !cir.ptr<!cir.double>, !cir.ptr<!cir.ptr<!cir.double>> loc(#loc39)
    %3 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, !cir.ptr<!rec_Stack3Cdouble3E> loc(#loc36)
    cir.br ^bb1 loc(#loc173)
  ^bb1:  // pred: ^bb0
    %4 = cir.call @_ZNK5StackIdE6isFullEv(%3) : (!cir.ptr<!rec_Stack3Cdouble3E>) -> !cir.bool loc(#loc42)
    %5 = cir.unary(not, %4) : !cir.bool, !cir.bool loc(#loc42)
    cir.brcond %5 ^bb2, ^bb3 loc(#loc174)
  ^bb2:  // pred: ^bb1
    %6 = cir.load %1 : !cir.ptr<!cir.ptr<!cir.double>>, !cir.ptr<!cir.double> loc(#loc44)
    %7 = cir.load align(8) %6 : !cir.ptr<!cir.double>, !cir.double loc(#loc44)
    %8 = cir.get_member %3[2] {name = "stackPtr"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!cir.ptr<!cir.double>> loc(#loc19)
    %9 = cir.load align(8) %8 : !cir.ptr<!cir.ptr<!cir.double>>, !cir.ptr<!cir.double> loc(#loc45)
    %10 = cir.get_member %3[1] {name = "top"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!s32i> loc(#loc15)
    %11 = cir.load align(4) %10 : !cir.ptr<!s32i>, !s32i loc(#loc46)
    %12 = cir.unary(inc, %11) nsw : !s32i, !s32i loc(#loc46)
    cir.store align(4) %12, %10 : !s32i, !cir.ptr<!s32i> loc(#loc175)
    %13 = cir.ptr_stride %9, %12 : (!cir.ptr<!cir.double>, !s32i) -> !cir.ptr<!cir.double> loc(#loc48)
    cir.store align(8) %7, %13 : !cir.double, !cir.ptr<!cir.double> loc(#loc176)
    %14 = cir.const #true loc(#loc49)
    cir.store align(1) %14, %2 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc177)
    %15 = cir.load align(1) %2 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc177)
    cir.return %15 : !cir.bool loc(#loc177)
  ^bb3:  // pred: ^bb1
    cir.br ^bb4 loc(#loc41)
  ^bb4:  // pred: ^bb3
    %16 = cir.const #false loc(#loc51)
    cir.store align(1) %16, %2 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc178)
    %17 = cir.load align(1) %2 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc178)
    cir.return %17 : !cir.bool loc(#loc178)
  } loc(#loc171)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc179)
  cir.func private @_ZNSolsEd(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.double) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc180)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"\0AStack is full. Cannot push \00" : !cir.array<!s8i x 29>> : !cir.array<!s8i x 29> {alignment = 1 : i64} loc(#loc57)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"\0A\0APopping elements from doubleStack\0A\00" : !cir.array<!s8i x 37>> : !cir.array<!s8i x 37> {alignment = 1 : i64} loc(#loc58)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNK5StackIdE7isEmptyEv(%arg0: !cir.ptr<!rec_Stack3Cdouble3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":30:9)) -> !cir.bool extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, ["this", init] {alignment = 8 : i64} loc(#loc61)
    %1 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["__retval"] {alignment = 1 : i64} loc(#loc60)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>> loc(#loc62)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, !cir.ptr<!rec_Stack3Cdouble3E> loc(#loc61)
    %3 = cir.get_member %2[1] {name = "top"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!s32i> loc(#loc15)
    %4 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc63)
    %5 = cir.const #cir.int<1> : !s32i loc(#loc64)
    %6 = cir.unary(minus, %5) nsw : !s32i, !s32i loc(#loc65)
    %7 = cir.cmp(eq, %4, %6) : !s32i, !cir.bool loc(#loc182)
    cir.store align(1) %7, %1 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc183)
    %8 = cir.load align(1) %1 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc183)
    cir.return %8 : !cir.bool loc(#loc183)
  } loc(#loc181)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN5StackIdE3popERd(%arg0: !cir.ptr<!rec_Stack3Cdouble3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":78:18), %arg1: !cir.ptr<!cir.double> loc(fused[#loc70, #loc68])) -> !cir.bool extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, ["this", init] {alignment = 8 : i64} loc(#loc69)
    %1 = cir.alloca !cir.ptr<!cir.double>, !cir.ptr<!cir.ptr<!cir.double>>, ["popValue", init, const] {alignment = 8 : i64} loc(#loc185)
    %2 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["__retval"] {alignment = 1 : i64} loc(#loc71)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>> loc(#loc72)
    cir.store %arg1, %1 : !cir.ptr<!cir.double>, !cir.ptr<!cir.ptr<!cir.double>> loc(#loc72)
    %3 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, !cir.ptr<!rec_Stack3Cdouble3E> loc(#loc69)
    cir.br ^bb1 loc(#loc186)
  ^bb1:  // pred: ^bb0
    %4 = cir.call @_ZNK5StackIdE7isEmptyEv(%3) : (!cir.ptr<!rec_Stack3Cdouble3E>) -> !cir.bool loc(#loc75)
    %5 = cir.unary(not, %4) : !cir.bool, !cir.bool loc(#loc75)
    cir.brcond %5 ^bb2, ^bb3 loc(#loc187)
  ^bb2:  // pred: ^bb1
    %6 = cir.get_member %3[2] {name = "stackPtr"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!cir.ptr<!cir.double>> loc(#loc19)
    %7 = cir.load align(8) %6 : !cir.ptr<!cir.ptr<!cir.double>>, !cir.ptr<!cir.double> loc(#loc77)
    %8 = cir.get_member %3[1] {name = "top"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!s32i> loc(#loc15)
    %9 = cir.load align(4) %8 : !cir.ptr<!s32i>, !s32i loc(#loc78)
    %10 = cir.unary(dec, %9) nsw : !s32i, !s32i loc(#loc79)
    cir.store align(4) %10, %8 : !s32i, !cir.ptr<!s32i> loc(#loc188)
    %11 = cir.ptr_stride %7, %9 : (!cir.ptr<!cir.double>, !s32i) -> !cir.ptr<!cir.double> loc(#loc80)
    %12 = cir.load align(8) %11 : !cir.ptr<!cir.double>, !cir.double loc(#loc77)
    %13 = cir.load %1 : !cir.ptr<!cir.ptr<!cir.double>>, !cir.ptr<!cir.double> loc(#loc81)
    cir.store align(8) %12, %13 : !cir.double, !cir.ptr<!cir.double> loc(#loc189)
    %14 = cir.const #true loc(#loc82)
    cir.store align(1) %14, %2 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc190)
    %15 = cir.load align(1) %2 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc190)
    cir.return %15 : !cir.bool loc(#loc190)
  ^bb3:  // pred: ^bb1
    cir.br ^bb4 loc(#loc74)
  ^bb4:  // pred: ^bb3
    %16 = cir.const #false loc(#loc84)
    cir.store align(1) %16, %2 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc191)
    %17 = cir.load align(1) %2 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc191)
    cir.return %17 : !cir.bool loc(#loc191)
  } loc(#loc184)
  cir.global "private" constant cir_private dso_local @".str.3" = #cir.const_array<"\0AStack is empty. Cannot pop\0A\00" : !cir.array<!s8i x 29>> : !cir.array<!s8i x 29> {alignment = 1 : i64} loc(#loc86)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN5StackIiEC2Ei(%arg0: !cir.ptr<!rec_Stack3Cint3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":52:13), %arg1: !s32i loc(fused[#loc4, #loc5])) special_member<#cir.cxx_ctor<!rec_Stack3Cint3E, default>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, ["this", init] {alignment = 8 : i64} loc(#loc3)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["s", init] {alignment = 4 : i64} loc(#loc160)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>> loc(#loc6)
    cir.store %arg1, %1 : !s32i, !cir.ptr<!s32i> loc(#loc6)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, !cir.ptr<!rec_Stack3Cint3E> loc(#loc3)
    %3 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc7)
    %4 = cir.const #cir.int<0> : !s32i loc(#loc8)
    %5 = cir.cmp(gt, %3, %4) : !s32i, !cir.bool loc(#loc161)
    cir.brcond %5 ^bb1, ^bb2 loc(#loc162)
  ^bb1:  // pred: ^bb0
    %6 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc10)
    cir.br ^bb3(%6 : !s32i) loc(#loc162)
  ^bb2:  // pred: ^bb0
    %7 = cir.const #cir.int<10> : !s32i loc(#loc9)
    cir.br ^bb3(%7 : !s32i) loc(#loc162)
  ^bb3(%8: !s32i loc(fused[#loc7, #loc9])):  // 2 preds: ^bb1, ^bb2
    %9 = cir.get_member %2[0] {name = "size"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!s32i> loc(#loc11)
    cir.store align(8) %8, %9 : !s32i, !cir.ptr<!s32i> loc(#loc163)
    %10 = cir.const #cir.int<1> : !s32i loc(#loc13)
    %11 = cir.unary(minus, %10) nsw : !s32i, !s32i loc(#loc14)
    %12 = cir.get_member %2[1] {name = "top"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!s32i> loc(#loc15)
    cir.store align(4) %11, %12 : !s32i, !cir.ptr<!s32i> loc(#loc164)
    %13 = cir.get_member %2[0] {name = "size"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!s32i> loc(#loc11)
    %14 = cir.load align(8) %13 : !cir.ptr<!s32i>, !s32i loc(#loc17)
    %15 = cir.cast integral %14 : !s32i -> !u64i loc(#loc17)
    %16 = cir.const #cir.int<4> : !u64i loc(#loc18)
    %result, %overflow = cir.binop.overflow(mul, %15, %16) : !u64i, (!u64i, !cir.bool) loc(#loc18)
    %17 = cir.const #cir.int<18446744073709551615> : !u64i loc(#loc18)
    %18 = cir.select if %overflow then %17 else %result : (!cir.bool, !u64i, !u64i) -> !u64i loc(#loc18)
    %19 = cir.call @_Znam(%18) : (!u64i) -> !cir.ptr<!void> loc(#loc3)
    %20 = cir.cast bitcast %19 : !cir.ptr<!void> -> !cir.ptr<!s32i> loc(#loc18)
    %21 = cir.get_member %2[2] {name = "stackPtr"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!cir.ptr<!s32i>> loc(#loc19)
    cir.store align(8) %20, %21 : !cir.ptr<!s32i>, !cir.ptr<!cir.ptr<!s32i>> loc(#loc165)
    cir.return loc(#loc2)
  } loc(#loc159)
  cir.global "private" constant cir_private dso_local @".str.4" = #cir.const_array<"\0APushing elements onto intStack\0A\00" : !cir.array<!s8i x 33>> : !cir.array<!s8i x 33> {alignment = 1 : i64} loc(#loc87)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNK5StackIiE6isFullEv(%arg0: !cir.ptr<!rec_Stack3Cint3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":37:9)) -> !cir.bool extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, ["this", init] {alignment = 8 : i64} loc(#loc28)
    %1 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["__retval"] {alignment = 1 : i64} loc(#loc27)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>> loc(#loc29)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, !cir.ptr<!rec_Stack3Cint3E> loc(#loc28)
    %3 = cir.get_member %2[1] {name = "top"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!s32i> loc(#loc15)
    %4 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc30)
    %5 = cir.get_member %2[0] {name = "size"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!s32i> loc(#loc11)
    %6 = cir.load align(8) %5 : !cir.ptr<!s32i>, !s32i loc(#loc31)
    %7 = cir.const #cir.int<1> : !s32i loc(#loc32)
    %8 = cir.binop(sub, %6, %7) nsw : !s32i loc(#loc31)
    %9 = cir.cmp(eq, %4, %8) : !s32i, !cir.bool loc(#loc169)
    cir.store align(1) %9, %1 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc170)
    %10 = cir.load align(1) %1 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc170)
    cir.return %10 : !cir.bool loc(#loc170)
  } loc(#loc168)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN5StackIiE4pushERKi(%arg0: !cir.ptr<!rec_Stack3Cint3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":63:18), %arg1: !cir.ptr<!s32i> loc(fused[#loc37, #loc35])) -> !cir.bool extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, ["this", init] {alignment = 8 : i64} loc(#loc36)
    %1 = cir.alloca !cir.ptr<!s32i>, !cir.ptr<!cir.ptr<!s32i>>, ["pushValue", init, const] {alignment = 8 : i64} loc(#loc172)
    %2 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["__retval"] {alignment = 1 : i64} loc(#loc38)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>> loc(#loc39)
    cir.store %arg1, %1 : !cir.ptr<!s32i>, !cir.ptr<!cir.ptr<!s32i>> loc(#loc39)
    %3 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, !cir.ptr<!rec_Stack3Cint3E> loc(#loc36)
    cir.br ^bb1 loc(#loc173)
  ^bb1:  // pred: ^bb0
    %4 = cir.call @_ZNK5StackIiE6isFullEv(%3) : (!cir.ptr<!rec_Stack3Cint3E>) -> !cir.bool loc(#loc42)
    %5 = cir.unary(not, %4) : !cir.bool, !cir.bool loc(#loc42)
    cir.brcond %5 ^bb2, ^bb3 loc(#loc174)
  ^bb2:  // pred: ^bb1
    %6 = cir.load %1 : !cir.ptr<!cir.ptr<!s32i>>, !cir.ptr<!s32i> loc(#loc44)
    %7 = cir.load align(4) %6 : !cir.ptr<!s32i>, !s32i loc(#loc44)
    %8 = cir.get_member %3[2] {name = "stackPtr"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!cir.ptr<!s32i>> loc(#loc19)
    %9 = cir.load align(8) %8 : !cir.ptr<!cir.ptr<!s32i>>, !cir.ptr<!s32i> loc(#loc45)
    %10 = cir.get_member %3[1] {name = "top"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!s32i> loc(#loc15)
    %11 = cir.load align(4) %10 : !cir.ptr<!s32i>, !s32i loc(#loc46)
    %12 = cir.unary(inc, %11) nsw : !s32i, !s32i loc(#loc46)
    cir.store align(4) %12, %10 : !s32i, !cir.ptr<!s32i> loc(#loc175)
    %13 = cir.ptr_stride %9, %12 : (!cir.ptr<!s32i>, !s32i) -> !cir.ptr<!s32i> loc(#loc48)
    cir.store align(4) %7, %13 : !s32i, !cir.ptr<!s32i> loc(#loc176)
    %14 = cir.const #true loc(#loc49)
    cir.store align(1) %14, %2 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc177)
    %15 = cir.load align(1) %2 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc177)
    cir.return %15 : !cir.bool loc(#loc177)
  ^bb3:  // pred: ^bb1
    cir.br ^bb4 loc(#loc41)
  ^bb4:  // pred: ^bb3
    %16 = cir.const #false loc(#loc51)
    cir.store align(1) %16, %2 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc178)
    %17 = cir.load align(1) %2 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc178)
    cir.return %17 : !cir.bool loc(#loc178)
  } loc(#loc171)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc192)
  cir.global "private" constant cir_private dso_local @".str.5" = #cir.const_array<"\0A\0APopping elements from intStack\0A\00" : !cir.array<!s8i x 34>> : !cir.array<!s8i x 34> {alignment = 1 : i64} loc(#loc90)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNK5StackIiE7isEmptyEv(%arg0: !cir.ptr<!rec_Stack3Cint3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":30:9)) -> !cir.bool extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, ["this", init] {alignment = 8 : i64} loc(#loc61)
    %1 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["__retval"] {alignment = 1 : i64} loc(#loc60)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>> loc(#loc62)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, !cir.ptr<!rec_Stack3Cint3E> loc(#loc61)
    %3 = cir.get_member %2[1] {name = "top"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!s32i> loc(#loc15)
    %4 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc63)
    %5 = cir.const #cir.int<1> : !s32i loc(#loc64)
    %6 = cir.unary(minus, %5) nsw : !s32i, !s32i loc(#loc65)
    %7 = cir.cmp(eq, %4, %6) : !s32i, !cir.bool loc(#loc182)
    cir.store align(1) %7, %1 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc183)
    %8 = cir.load align(1) %1 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc183)
    cir.return %8 : !cir.bool loc(#loc183)
  } loc(#loc181)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN5StackIiE3popERi(%arg0: !cir.ptr<!rec_Stack3Cint3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":78:18), %arg1: !cir.ptr<!s32i> loc(fused[#loc70, #loc68])) -> !cir.bool extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, ["this", init] {alignment = 8 : i64} loc(#loc69)
    %1 = cir.alloca !cir.ptr<!s32i>, !cir.ptr<!cir.ptr<!s32i>>, ["popValue", init, const] {alignment = 8 : i64} loc(#loc185)
    %2 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["__retval"] {alignment = 1 : i64} loc(#loc71)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>> loc(#loc72)
    cir.store %arg1, %1 : !cir.ptr<!s32i>, !cir.ptr<!cir.ptr<!s32i>> loc(#loc72)
    %3 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, !cir.ptr<!rec_Stack3Cint3E> loc(#loc69)
    cir.br ^bb1 loc(#loc186)
  ^bb1:  // pred: ^bb0
    %4 = cir.call @_ZNK5StackIiE7isEmptyEv(%3) : (!cir.ptr<!rec_Stack3Cint3E>) -> !cir.bool loc(#loc75)
    %5 = cir.unary(not, %4) : !cir.bool, !cir.bool loc(#loc75)
    cir.brcond %5 ^bb2, ^bb3 loc(#loc187)
  ^bb2:  // pred: ^bb1
    %6 = cir.get_member %3[2] {name = "stackPtr"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!cir.ptr<!s32i>> loc(#loc19)
    %7 = cir.load align(8) %6 : !cir.ptr<!cir.ptr<!s32i>>, !cir.ptr<!s32i> loc(#loc77)
    %8 = cir.get_member %3[1] {name = "top"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!s32i> loc(#loc15)
    %9 = cir.load align(4) %8 : !cir.ptr<!s32i>, !s32i loc(#loc78)
    %10 = cir.unary(dec, %9) nsw : !s32i, !s32i loc(#loc79)
    cir.store align(4) %10, %8 : !s32i, !cir.ptr<!s32i> loc(#loc188)
    %11 = cir.ptr_stride %7, %9 : (!cir.ptr<!s32i>, !s32i) -> !cir.ptr<!s32i> loc(#loc80)
    %12 = cir.load align(4) %11 : !cir.ptr<!s32i>, !s32i loc(#loc77)
    %13 = cir.load %1 : !cir.ptr<!cir.ptr<!s32i>>, !cir.ptr<!s32i> loc(#loc81)
    cir.store align(4) %12, %13 : !s32i, !cir.ptr<!s32i> loc(#loc189)
    %14 = cir.const #true loc(#loc82)
    cir.store align(1) %14, %2 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc190)
    %15 = cir.load align(1) %2 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc190)
    cir.return %15 : !cir.bool loc(#loc190)
  ^bb3:  // pred: ^bb1
    cir.br ^bb4 loc(#loc74)
  ^bb4:  // pred: ^bb3
    %16 = cir.const #false loc(#loc84)
    cir.store align(1) %16, %2 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc191)
    %17 = cir.load align(1) %2 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc191)
    cir.return %17 : !cir.bool loc(#loc191)
  } loc(#loc184)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN5StackIiED2Ev(%arg0: !cir.ptr<!rec_Stack3Cint3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":20:4)) special_member<#cir.cxx_dtor<!rec_Stack3Cint3E>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, ["this", init] {alignment = 8 : i64} loc(#loc91)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>> loc(#loc93)
    %1 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cint3E>>, !cir.ptr<!rec_Stack3Cint3E> loc(#loc91)
    %2 = cir.get_member %1[2] {name = "stackPtr"} : !cir.ptr<!rec_Stack3Cint3E> -> !cir.ptr<!cir.ptr<!s32i>> loc(#loc19)
    %3 = cir.load align(8) %2 : !cir.ptr<!cir.ptr<!s32i>>, !cir.ptr<!s32i> loc(#loc94)
    cir.delete.array %3 : <!s32i> loc(#loc94)
    cir.return loc(#loc92)
  } loc(#loc193)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN5StackIdED2Ev(%arg0: !cir.ptr<!rec_Stack3Cdouble3E> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":20:4)) special_member<#cir.cxx_dtor<!rec_Stack3Cdouble3E>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, ["this", init] {alignment = 8 : i64} loc(#loc91)
    cir.store %arg0, %0 : !cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>> loc(#loc93)
    %1 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Stack3Cdouble3E>>, !cir.ptr<!rec_Stack3Cdouble3E> loc(#loc91)
    %2 = cir.get_member %1[2] {name = "stackPtr"} : !cir.ptr<!rec_Stack3Cdouble3E> -> !cir.ptr<!cir.ptr<!cir.double>> loc(#loc19)
    %3 = cir.load align(8) %2 : !cir.ptr<!cir.ptr<!cir.double>>, !cir.ptr<!cir.double> loc(#loc94)
    cir.delete.array %3 : <!cir.double> loc(#loc94)
    cir.return loc(#loc92)
  } loc(#loc193)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["tmp.try.call.res"] {alignment = 1 : i64} loc(#loc97)
    %1 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc98)
    %2 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc99)
    %3 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["tmp.try.call.res"] {alignment = 1 : i64} loc(#loc100)
    %4 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc101)
    %5 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc102)
    %6 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["tmp.try.call.res"] {alignment = 1 : i64} loc(#loc103)
    %7 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc104)
    %8 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc105)
    %9 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["tmp.try.call.res"] {alignment = 1 : i64} loc(#loc106)
    %10 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc107)
    %11 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc108)
    %12 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc96)
    %13 = cir.alloca !rec_Stack3Cdouble3E, !cir.ptr<!rec_Stack3Cdouble3E>, ["doubleStack", init] {alignment = 8 : i64} loc(#loc195)
    %14 = cir.alloca !cir.double, !cir.ptr<!cir.double>, ["doubleValue", init] {alignment = 8 : i64} loc(#loc196)
    %15 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc113)
    %16 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc114)
    %17 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc115)
    %18 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc116)
    %19 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc117)
    %20 = cir.alloca !rec_Stack3Cint3E, !cir.ptr<!rec_Stack3Cint3E>, ["intStack", init] {alignment = 8 : i64} loc(#loc197)
    %21 = cir.alloca !s32i, !cir.ptr<!s32i>, ["intValue", init] {alignment = 4 : i64} loc(#loc198)
    %22 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc122)
    %23 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc123)
    %24 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc124)
    %25 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc125)
    %26 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc126)
    %27 = cir.const #cir.int<5> : !s32i loc(#loc127)
    cir.call @_ZN5StackIdEC2Ei(%13, %27) : (!cir.ptr<!rec_Stack3Cdouble3E>, !s32i) -> () loc(#loc128)
    %28 = cir.const #cir.fp<1.100000e+00> : !cir.double loc(#loc112)
    cir.store align(8) %28, %14 : !cir.double, !cir.ptr<!cir.double> loc(#loc196)
    %29 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %30 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 35>> loc(#loc25)
    %31 = cir.cast array_to_ptrdecay %30 : !cir.ptr<!cir.array<!s8i x 35>> -> !cir.ptr<!s8i> loc(#loc25)
    cir.br ^bb1 loc(#loc129)
  ^bb1:  // pred: ^bb0
    %32 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%29, %31) ^bb2, ^bb3 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc113)
  ^bb2:  // pred: ^bb1
    cir.store align(8) %32, %15 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc113)
    cir.br ^bb5 loc(#loc129)
  ^bb3:  // pred: ^bb1
    %exception_ptr, %type_id = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.call @_ZN5StackIdED2Ev(%13) : (!cir.ptr<!rec_Stack3Cdouble3E>) -> () extra(#fn_attr2) loc(#loc193)
    cir.br ^bb4(%exception_ptr, %type_id : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb4(%33: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %34: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb3
    cir.resume.flat %33, %34 loc(#loc129)
  ^bb5:  // pred: ^bb2
    cir.br ^bb6 loc(#loc199)
  ^bb6:  // pred: ^bb5
    cir.br ^bb7 loc(#loc199)
  ^bb7:  // 2 preds: ^bb6, ^bb25
    cir.br ^bb8 loc(#loc129)
  ^bb8:  // pred: ^bb7
    %35 = cir.try_call @_ZN5StackIdE4pushERKd(%13, %14) ^bb9, ^bb10 : (!cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.double>) -> !cir.bool loc(#loc97)
  ^bb9:  // pred: ^bb8
    cir.store align(1) %35, %0 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc97)
    cir.br ^bb12 loc(#loc129)
  ^bb10:  // pred: ^bb8
    %exception_ptr_0, %type_id_1 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb11(%exception_ptr_0, %type_id_1 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb11(%36: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %37: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb10
    cir.resume.flat %36, %37 loc(#loc129)
  ^bb12:  // pred: ^bb9
    %38 = cir.load align(1) %0 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc97)
    cir.brcond %38 ^bb13, ^bb26 loc(#loc97)
  ^bb13:  // pred: ^bb12
    cir.br ^bb14 loc(#loc200)
  ^bb14:  // pred: ^bb13
    %39 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %40 = cir.load align(8) %14 : !cir.ptr<!cir.double>, !cir.double loc(#loc133)
    cir.br ^bb15 loc(#loc129)
  ^bb15:  // pred: ^bb14
    %41 = cir.try_call @_ZNSolsEd(%39, %40) ^bb16, ^bb17 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.double) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc98)
  ^bb16:  // pred: ^bb15
    cir.store align(8) %41, %1 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc98)
    cir.br ^bb19 loc(#loc129)
  ^bb17:  // pred: ^bb15
    %exception_ptr_2, %type_id_3 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb18(%exception_ptr_2, %type_id_3 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb18(%42: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %43: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb17
    cir.resume.flat %42, %43 loc(#loc129)
  ^bb19:  // pred: ^bb16
    %44 = cir.load align(8) %1 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc98)
    %45 = cir.const #cir.int<32> : !s8i loc(#loc134)
    cir.br ^bb20 loc(#loc129)
  ^bb20:  // pred: ^bb19
    %46 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(%44, %45) ^bb21, ^bb22 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc99)
  ^bb21:  // pred: ^bb20
    cir.store align(8) %46, %2 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc99)
    cir.br ^bb24 loc(#loc129)
  ^bb22:  // pred: ^bb20
    %exception_ptr_4, %type_id_5 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb23(%exception_ptr_4, %type_id_5 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb23(%47: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %48: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb22
    cir.resume.flat %47, %48 loc(#loc129)
  ^bb24:  // pred: ^bb21
    %49 = cir.const #cir.fp<1.100000e+00> : !cir.double loc(#loc135)
    %50 = cir.load align(8) %14 : !cir.ptr<!cir.double>, !cir.double loc(#loc136)
    %51 = cir.binop(add, %50, %49) : !cir.double loc(#loc136)
    cir.store align(8) %51, %14 : !cir.double, !cir.ptr<!cir.double> loc(#loc201)
    cir.br ^bb25 loc(#loc131)
  ^bb25:  // pred: ^bb24
    cir.br ^bb7 loc(#loc131)
  ^bb26:  // pred: ^bb12
    cir.br ^bb27 loc(#loc131)
  ^bb27:  // pred: ^bb26
    %52 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %53 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 29>> loc(#loc57)
    %54 = cir.cast array_to_ptrdecay %53 : !cir.ptr<!cir.array<!s8i x 29>> -> !cir.ptr<!s8i> loc(#loc57)
    cir.br ^bb28 loc(#loc129)
  ^bb28:  // pred: ^bb27
    %55 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%52, %54) ^bb29, ^bb30 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc114)
  ^bb29:  // pred: ^bb28
    cir.store align(8) %55, %16 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc114)
    cir.br ^bb32 loc(#loc129)
  ^bb30:  // pred: ^bb28
    %exception_ptr_6, %type_id_7 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb31(%exception_ptr_6, %type_id_7 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb31(%56: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %57: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb30
    cir.resume.flat %56, %57 loc(#loc129)
  ^bb32:  // pred: ^bb29
    %58 = cir.load align(8) %16 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc114)
    %59 = cir.load align(8) %14 : !cir.ptr<!cir.double>, !cir.double loc(#loc138)
    cir.br ^bb33 loc(#loc129)
  ^bb33:  // pred: ^bb32
    %60 = cir.try_call @_ZNSolsEd(%58, %59) ^bb34, ^bb35 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.double) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc115)
  ^bb34:  // pred: ^bb33
    cir.store align(8) %60, %17 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc115)
    cir.br ^bb37 loc(#loc129)
  ^bb35:  // pred: ^bb33
    %exception_ptr_8, %type_id_9 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb36(%exception_ptr_8, %type_id_9 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb36(%61: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %62: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb35
    cir.resume.flat %61, %62 loc(#loc129)
  ^bb37:  // pred: ^bb34
    %63 = cir.load align(8) %17 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc115)
    %64 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 37>> loc(#loc58)
    %65 = cir.cast array_to_ptrdecay %64 : !cir.ptr<!cir.array<!s8i x 37>> -> !cir.ptr<!s8i> loc(#loc58)
    cir.br ^bb38 loc(#loc129)
  ^bb38:  // pred: ^bb37
    %66 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%63, %65) ^bb39, ^bb40 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc116)
  ^bb39:  // pred: ^bb38
    cir.store align(8) %66, %18 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc116)
    cir.br ^bb42 loc(#loc129)
  ^bb40:  // pred: ^bb38
    %exception_ptr_10, %type_id_11 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb41(%exception_ptr_10, %type_id_11 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb41(%67: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %68: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb40
    cir.resume.flat %67, %68 loc(#loc129)
  ^bb42:  // pred: ^bb39
    cir.br ^bb43 loc(#loc202)
  ^bb43:  // pred: ^bb42
    cir.br ^bb44 loc(#loc202)
  ^bb44:  // 2 preds: ^bb43, ^bb60
    cir.br ^bb45 loc(#loc129)
  ^bb45:  // pred: ^bb44
    %69 = cir.try_call @_ZN5StackIdE3popERd(%13, %14) ^bb46, ^bb47 : (!cir.ptr<!rec_Stack3Cdouble3E>, !cir.ptr<!cir.double>) -> !cir.bool loc(#loc100)
  ^bb46:  // pred: ^bb45
    cir.store align(1) %69, %3 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc100)
    cir.br ^bb49 loc(#loc129)
  ^bb47:  // pred: ^bb45
    %exception_ptr_12, %type_id_13 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb48(%exception_ptr_12, %type_id_13 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb48(%70: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %71: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb47
    cir.resume.flat %70, %71 loc(#loc129)
  ^bb49:  // pred: ^bb46
    %72 = cir.load align(1) %3 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc100)
    cir.brcond %72 ^bb50, ^bb61 loc(#loc100)
  ^bb50:  // pred: ^bb49
    %73 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %74 = cir.load align(8) %14 : !cir.ptr<!cir.double>, !cir.double loc(#loc141)
    cir.br ^bb51 loc(#loc129)
  ^bb51:  // pred: ^bb50
    %75 = cir.try_call @_ZNSolsEd(%73, %74) ^bb52, ^bb53 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.double) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc101)
  ^bb52:  // pred: ^bb51
    cir.store align(8) %75, %4 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc101)
    cir.br ^bb55 loc(#loc129)
  ^bb53:  // pred: ^bb51
    %exception_ptr_14, %type_id_15 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb54(%exception_ptr_14, %type_id_15 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb54(%76: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %77: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb53
    cir.resume.flat %76, %77 loc(#loc129)
  ^bb55:  // pred: ^bb52
    %78 = cir.load align(8) %4 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc101)
    %79 = cir.const #cir.int<32> : !s8i loc(#loc140)
    cir.br ^bb56 loc(#loc129)
  ^bb56:  // pred: ^bb55
    %80 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(%78, %79) ^bb57, ^bb58 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc102)
  ^bb57:  // pred: ^bb56
    cir.store align(8) %80, %5 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc102)
    cir.br ^bb60 loc(#loc129)
  ^bb58:  // pred: ^bb56
    %exception_ptr_16, %type_id_17 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb59(%exception_ptr_16, %type_id_17 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb59(%81: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %82: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb58
    cir.resume.flat %81, %82 loc(#loc129)
  ^bb60:  // pred: ^bb57
    cir.br ^bb44 loc(#loc140)
  ^bb61:  // pred: ^bb49
    cir.br ^bb62 loc(#loc140)
  ^bb62:  // pred: ^bb61
    %83 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %84 = cir.get_global @".str.3" : !cir.ptr<!cir.array<!s8i x 29>> loc(#loc86)
    %85 = cir.cast array_to_ptrdecay %84 : !cir.ptr<!cir.array<!s8i x 29>> -> !cir.ptr<!s8i> loc(#loc86)
    cir.br ^bb63 loc(#loc129)
  ^bb63:  // pred: ^bb62
    %86 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%83, %85) ^bb64, ^bb65 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc117)
  ^bb64:  // pred: ^bb63
    cir.store align(8) %86, %19 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc117)
    cir.br ^bb67 loc(#loc129)
  ^bb65:  // pred: ^bb63
    %exception_ptr_18, %type_id_19 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb66(%exception_ptr_18, %type_id_19 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb66(%87: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %88: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb65
    cir.resume.flat %87, %88 loc(#loc129)
  ^bb67:  // pred: ^bb64
    %89 = cir.const #cir.int<10> : !s32i loc(#loc5)
    cir.br ^bb68 loc(#loc119)
  ^bb68:  // pred: ^bb67
    cir.try_call @_ZN5StackIiEC2Ei(%20, %89) ^bb69, ^bb70 : (!cir.ptr<!rec_Stack3Cint3E>, !s32i) -> () loc(#loc119)
  ^bb69:  // pred: ^bb68
    cir.br ^bb72 loc(#loc119)
  ^bb70:  // pred: ^bb68
    %exception_ptr_20, %type_id_21 = cir.eh.inflight_exception cleanup loc(#loc119)
    cir.br ^bb71(%exception_ptr_20, %type_id_21 : !cir.ptr<!void>, !u32i) loc(#loc119)
  ^bb71(%90: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":39:17), %91: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":39:17)):  // pred: ^bb70
    cir.resume.flat %90, %91 loc(#loc119)
  ^bb72:  // pred: ^bb69
    %92 = cir.const #cir.int<1> : !s32i loc(#loc121)
    cir.store align(4) %92, %21 : !s32i, !cir.ptr<!s32i> loc(#loc198)
    %93 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %94 = cir.get_global @".str.4" : !cir.ptr<!cir.array<!s8i x 33>> loc(#loc87)
    %95 = cir.cast array_to_ptrdecay %94 : !cir.ptr<!cir.array<!s8i x 33>> -> !cir.ptr<!s8i> loc(#loc87)
    cir.br ^bb73 loc(#loc129)
  ^bb73:  // pred: ^bb72
    %96 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%93, %95) ^bb74, ^bb75 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc122)
  ^bb74:  // pred: ^bb73
    cir.store align(8) %96, %22 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc122)
    cir.br ^bb77 loc(#loc129)
  ^bb75:  // pred: ^bb73
    %exception_ptr_22, %type_id_23 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.call @_ZN5StackIiED2Ev(%20) : (!cir.ptr<!rec_Stack3Cint3E>) -> () extra(#fn_attr2) loc(#loc193)
    cir.call @_ZN5StackIdED2Ev(%13) : (!cir.ptr<!rec_Stack3Cdouble3E>) -> () extra(#fn_attr2) loc(#loc193)
    cir.br ^bb76(%exception_ptr_22, %type_id_23 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb76(%97: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %98: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb75
    cir.resume.flat %97, %98 loc(#loc129)
  ^bb77:  // pred: ^bb74
    cir.br ^bb78 loc(#loc203)
  ^bb78:  // pred: ^bb77
    cir.br ^bb79 loc(#loc203)
  ^bb79:  // 2 preds: ^bb78, ^bb97
    cir.br ^bb80 loc(#loc129)
  ^bb80:  // pred: ^bb79
    %99 = cir.try_call @_ZN5StackIiE4pushERKi(%20, %21) ^bb81, ^bb82 : (!cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!s32i>) -> !cir.bool loc(#loc103)
  ^bb81:  // pred: ^bb80
    cir.store align(1) %99, %6 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc103)
    cir.br ^bb84 loc(#loc129)
  ^bb82:  // pred: ^bb80
    %exception_ptr_24, %type_id_25 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb83(%exception_ptr_24, %type_id_25 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb83(%100: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %101: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb82
    cir.resume.flat %100, %101 loc(#loc129)
  ^bb84:  // pred: ^bb81
    %102 = cir.load align(1) %6 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc103)
    cir.brcond %102 ^bb85, ^bb98 loc(#loc103)
  ^bb85:  // pred: ^bb84
    cir.br ^bb86 loc(#loc204)
  ^bb86:  // pred: ^bb85
    %103 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %104 = cir.load align(4) %21 : !cir.ptr<!s32i>, !s32i loc(#loc145)
    cir.br ^bb87 loc(#loc129)
  ^bb87:  // pred: ^bb86
    %105 = cir.try_call @_ZNSolsEi(%103, %104) ^bb88, ^bb89 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc104)
  ^bb88:  // pred: ^bb87
    cir.store align(8) %105, %7 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc104)
    cir.br ^bb91 loc(#loc129)
  ^bb89:  // pred: ^bb87
    %exception_ptr_26, %type_id_27 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb90(%exception_ptr_26, %type_id_27 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb90(%106: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %107: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb89
    cir.resume.flat %106, %107 loc(#loc129)
  ^bb91:  // pred: ^bb88
    %108 = cir.load align(8) %7 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc104)
    %109 = cir.const #cir.int<32> : !s8i loc(#loc146)
    cir.br ^bb92 loc(#loc129)
  ^bb92:  // pred: ^bb91
    %110 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(%108, %109) ^bb93, ^bb94 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc105)
  ^bb93:  // pred: ^bb92
    cir.store align(8) %110, %8 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc105)
    cir.br ^bb96 loc(#loc129)
  ^bb94:  // pred: ^bb92
    %exception_ptr_28, %type_id_29 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb95(%exception_ptr_28, %type_id_29 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb95(%111: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %112: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb94
    cir.resume.flat %111, %112 loc(#loc129)
  ^bb96:  // pred: ^bb93
    %113 = cir.load align(4) %21 : !cir.ptr<!s32i>, !s32i loc(#loc147)
    %114 = cir.unary(inc, %113) nsw : !s32i, !s32i loc(#loc147)
    cir.store align(4) %114, %21 : !s32i, !cir.ptr<!s32i> loc(#loc205)
    cir.br ^bb97 loc(#loc143)
  ^bb97:  // pred: ^bb96
    cir.br ^bb79 loc(#loc143)
  ^bb98:  // pred: ^bb84
    cir.br ^bb99 loc(#loc143)
  ^bb99:  // pred: ^bb98
    %115 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %116 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 29>> loc(#loc149)
    %117 = cir.cast array_to_ptrdecay %116 : !cir.ptr<!cir.array<!s8i x 29>> -> !cir.ptr<!s8i> loc(#loc149)
    cir.br ^bb100 loc(#loc129)
  ^bb100:  // pred: ^bb99
    %118 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%115, %117) ^bb101, ^bb102 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc123)
  ^bb101:  // pred: ^bb100
    cir.store align(8) %118, %23 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc123)
    cir.br ^bb104 loc(#loc129)
  ^bb102:  // pred: ^bb100
    %exception_ptr_30, %type_id_31 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb103(%exception_ptr_30, %type_id_31 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb103(%119: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %120: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb102
    cir.resume.flat %119, %120 loc(#loc129)
  ^bb104:  // pred: ^bb101
    %121 = cir.load align(8) %23 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc123)
    %122 = cir.load align(4) %21 : !cir.ptr<!s32i>, !s32i loc(#loc150)
    cir.br ^bb105 loc(#loc129)
  ^bb105:  // pred: ^bb104
    %123 = cir.try_call @_ZNSolsEi(%121, %122) ^bb106, ^bb107 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc124)
  ^bb106:  // pred: ^bb105
    cir.store align(8) %123, %24 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc124)
    cir.br ^bb109 loc(#loc129)
  ^bb107:  // pred: ^bb105
    %exception_ptr_32, %type_id_33 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb108(%exception_ptr_32, %type_id_33 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb108(%124: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %125: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb107
    cir.resume.flat %124, %125 loc(#loc129)
  ^bb109:  // pred: ^bb106
    %126 = cir.load align(8) %24 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc124)
    %127 = cir.get_global @".str.5" : !cir.ptr<!cir.array<!s8i x 34>> loc(#loc90)
    %128 = cir.cast array_to_ptrdecay %127 : !cir.ptr<!cir.array<!s8i x 34>> -> !cir.ptr<!s8i> loc(#loc90)
    cir.br ^bb110 loc(#loc129)
  ^bb110:  // pred: ^bb109
    %129 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%126, %128) ^bb111, ^bb112 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc125)
  ^bb111:  // pred: ^bb110
    cir.store align(8) %129, %25 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc125)
    cir.br ^bb114 loc(#loc129)
  ^bb112:  // pred: ^bb110
    %exception_ptr_34, %type_id_35 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb113(%exception_ptr_34, %type_id_35 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb113(%130: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %131: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb112
    cir.resume.flat %130, %131 loc(#loc129)
  ^bb114:  // pred: ^bb111
    cir.br ^bb115 loc(#loc206)
  ^bb115:  // pred: ^bb114
    cir.br ^bb116 loc(#loc206)
  ^bb116:  // 2 preds: ^bb115, ^bb132
    cir.br ^bb117 loc(#loc129)
  ^bb117:  // pred: ^bb116
    %132 = cir.try_call @_ZN5StackIiE3popERi(%20, %21) ^bb118, ^bb119 : (!cir.ptr<!rec_Stack3Cint3E>, !cir.ptr<!s32i>) -> !cir.bool loc(#loc106)
  ^bb118:  // pred: ^bb117
    cir.store align(1) %132, %9 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc106)
    cir.br ^bb121 loc(#loc129)
  ^bb119:  // pred: ^bb117
    %exception_ptr_36, %type_id_37 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb120(%exception_ptr_36, %type_id_37 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb120(%133: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %134: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb119
    cir.resume.flat %133, %134 loc(#loc129)
  ^bb121:  // pred: ^bb118
    %135 = cir.load align(1) %9 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc106)
    cir.brcond %135 ^bb122, ^bb133 loc(#loc106)
  ^bb122:  // pred: ^bb121
    %136 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %137 = cir.load align(4) %21 : !cir.ptr<!s32i>, !s32i loc(#loc153)
    cir.br ^bb123 loc(#loc129)
  ^bb123:  // pred: ^bb122
    %138 = cir.try_call @_ZNSolsEi(%136, %137) ^bb124, ^bb125 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc107)
  ^bb124:  // pred: ^bb123
    cir.store align(8) %138, %10 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc107)
    cir.br ^bb127 loc(#loc129)
  ^bb125:  // pred: ^bb123
    %exception_ptr_38, %type_id_39 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb126(%exception_ptr_38, %type_id_39 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb126(%139: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %140: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb125
    cir.resume.flat %139, %140 loc(#loc129)
  ^bb127:  // pred: ^bb124
    %141 = cir.load align(8) %10 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc107)
    %142 = cir.const #cir.int<32> : !s8i loc(#loc152)
    cir.br ^bb128 loc(#loc129)
  ^bb128:  // pred: ^bb127
    %143 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(%141, %142) ^bb129, ^bb130 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc108)
  ^bb129:  // pred: ^bb128
    cir.store align(8) %143, %11 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc108)
    cir.br ^bb132 loc(#loc129)
  ^bb130:  // pred: ^bb128
    %exception_ptr_40, %type_id_41 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb131(%exception_ptr_40, %type_id_41 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb131(%144: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %145: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb130
    cir.resume.flat %144, %145 loc(#loc129)
  ^bb132:  // pred: ^bb129
    cir.br ^bb116 loc(#loc152)
  ^bb133:  // pred: ^bb121
    cir.br ^bb134 loc(#loc152)
  ^bb134:  // pred: ^bb133
    %146 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc167)
    %147 = cir.get_global @".str.3" : !cir.ptr<!cir.array<!s8i x 29>> loc(#loc154)
    %148 = cir.cast array_to_ptrdecay %147 : !cir.ptr<!cir.array<!s8i x 29>> -> !cir.ptr<!s8i> loc(#loc154)
    cir.br ^bb135 loc(#loc129)
  ^bb135:  // pred: ^bb134
    %149 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%146, %148) ^bb136, ^bb137 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc126)
  ^bb136:  // pred: ^bb135
    cir.store align(8) %149, %26 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc126)
    cir.br ^bb139 loc(#loc129)
  ^bb137:  // pred: ^bb135
    %exception_ptr_42, %type_id_43 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.call @_ZN5StackIiED2Ev(%20) : (!cir.ptr<!rec_Stack3Cint3E>) -> () extra(#fn_attr2) loc(#loc193)
    cir.call @_ZN5StackIdED2Ev(%13) : (!cir.ptr<!rec_Stack3Cdouble3E>) -> () extra(#fn_attr2) loc(#loc193)
    cir.br ^bb138(%exception_ptr_42, %type_id_43 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb138(%150: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5), %151: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:5)):  // pred: ^bb137
    cir.resume.flat %150, %151 loc(#loc129)
  ^bb139:  // pred: ^bb136
    %152 = cir.const #cir.int<0> : !s32i loc(#loc155)
    cir.store align(4) %152, %12 : !s32i, !cir.ptr<!s32i> loc(#loc207)
    cir.call @_ZN5StackIiED2Ev(%20) : (!cir.ptr<!rec_Stack3Cint3E>) -> () extra(#fn_attr2) loc(#loc193)
    cir.call @_ZN5StackIdED2Ev(%13) : (!cir.ptr<!rec_Stack3Cdouble3E>) -> () extra(#fn_attr2) loc(#loc193)
    %153 = cir.load align(4) %12 : !cir.ptr<!s32i>, !s32i loc(#loc207)
    cir.return %153 : !s32i loc(#loc207)
  } loc(#loc194)
  cir.func private @_Znam(!u64i) -> !cir.ptr<!void> loc(#loc208)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":52:1)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":58:1)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":53:1)
#loc8 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":54:15)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":54:19)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":44:8)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":54:4)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":55:11)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":55:10)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":45:8)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":55:4)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":56:22)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":56:15)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":46:7)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":56:4)
#loc21 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc22 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc23 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc24 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":23:12)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":37:4)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":41:4)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":38:4)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":39:14)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":39:21)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":39:28)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":39:7)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":26:4)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":73:1)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":64:1)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":65:4)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":69:4)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":65:10)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":65:21)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":66:27)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":66:7)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":66:17)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":66:19)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":66:23)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":67:14)
#loc50 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":67:7)
#loc51 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":71:11)
#loc52 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":71:4)
#loc53 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":641:5)
#loc54 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":648:5)
#loc55 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":230:7)
#loc56 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":232:32)
#loc57 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":31:12)
#loc58 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":32:12)
#loc59 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":30:4)
#loc60 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":34:4)
#loc62 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":31:4)
#loc63 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":32:14)
#loc64 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":32:22)
#loc65 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":32:21)
#loc66 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":32:7)
#loc67 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":27:4)
#loc71 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":88:1)
#loc72 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":79:1)
#loc73 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":80:4)
#loc74 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":84:4)
#loc75 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":80:10)
#loc76 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":80:22)
#loc77 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":81:18)
#loc78 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":81:31)
#loc79 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":81:28)
#loc80 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":81:34)
#loc81 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":81:7)
#loc82 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":82:14)
#loc83 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":82:7)
#loc84 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":86:11)
#loc85 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":86:4)
#loc86 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":37:12)
#loc87 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":41:12)
#loc88 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc89 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc90 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":50:12)
#loc92 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":24:4)
#loc93 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":21:4)
#loc94 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/tstack1.h":22:17)
#loc95 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":18:1)
#loc96 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":59:1)
#loc97 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":25:24)
#loc98 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":26:12)
#loc99 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":26:27)
#loc100 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":34:24)
#loc101 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":35:12)
#loc102 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":35:27)
#loc103 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":43:21)
#loc104 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":44:12)
#loc105 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":44:24)
#loc106 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":52:21)
#loc107 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":53:12)
#loc108 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":53:24)
#loc109 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":20:4)
#loc110 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":20:35)
#loc111 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":21:4)
#loc112 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":21:25)
#loc113 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":23:9)
#loc114 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":31:9)
#loc115 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":31:44)
#loc116 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":32:9)
#loc117 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":37:9)
#loc118 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":39:4)
#loc120 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":40:4)
#loc121 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":40:19)
#loc122 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":41:9)
#loc123 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":49:9)
#loc124 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":49:44)
#loc125 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":50:9)
#loc126 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":55:9)
#loc127 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":20:33)
#loc128 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":20:20)
#loc130 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":25:4)
#loc131 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":29:4)
#loc132 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":25:46)
#loc133 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":26:15)
#loc134 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":26:30)
#loc135 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":27:22)
#loc136 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":27:19)
#loc137 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":27:7)
#loc138 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":31:47)
#loc139 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":34:4)
#loc140 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":35:30)
#loc141 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":35:15)
#loc142 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":43:4)
#loc143 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":47:4)
#loc144 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":43:40)
#loc145 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":44:15)
#loc146 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":44:27)
#loc147 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":45:7)
#loc148 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":45:9)
#loc149 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":49:12)
#loc150 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":49:47)
#loc151 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":52:4)
#loc152 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":53:27)
#loc153 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":53:15)
#loc154 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":55:12)
#loc155 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":57:11)
#loc156 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch11_2/main.cpp":57:4)
#loc157 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":140:20)
#loc158 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":142:53)
#loc159 = loc(fused[#loc1, #loc2])
#loc161 = loc(fused[#loc7, #loc8])
#loc163 = loc(fused[#loc12, #loc9])
#loc164 = loc(fused[#loc16, #loc13])
#loc165 = loc(fused[#loc20, #loc18])
#loc166 = loc(fused[#loc21, #loc22])
#loc167 = loc(fused[#loc23, #loc24])
#loc168 = loc(fused[#loc26, #loc27])
#loc169 = loc(fused[#loc30, #loc32])
#loc170 = loc(fused[#loc33, #loc32])
#loc171 = loc(fused[#loc34, #loc35])
#loc173 = loc(fused[#loc40, #loc41])
#loc174 = loc(fused[#loc43, #loc41])
#loc175 = loc(fused[#loc46, #loc47])
#loc176 = loc(fused[#loc45, #loc44])
#loc177 = loc(fused[#loc50, #loc49])
#loc178 = loc(fused[#loc52, #loc51])
#loc179 = loc(fused[#loc53, #loc54])
#loc180 = loc(fused[#loc55, #loc56])
#loc181 = loc(fused[#loc59, #loc60])
#loc182 = loc(fused[#loc63, #loc64])
#loc183 = loc(fused[#loc66, #loc64])
#loc184 = loc(fused[#loc67, #loc68])
#loc186 = loc(fused[#loc73, #loc74])
#loc187 = loc(fused[#loc76, #loc74])
#loc188 = loc(fused[#loc79, #loc78])
#loc189 = loc(fused[#loc81, #loc80])
#loc190 = loc(fused[#loc83, #loc82])
#loc191 = loc(fused[#loc85, #loc84])
#loc192 = loc(fused[#loc88, #loc89])
#loc193 = loc(fused[#loc91, #loc92])
#loc194 = loc(fused[#loc95, #loc96])
#loc195 = loc(fused[#loc109, #loc110])
#loc196 = loc(fused[#loc111, #loc112])
#loc197 = loc(fused[#loc118, #loc119])
#loc198 = loc(fused[#loc120, #loc121])
#loc199 = loc(fused[#loc130, #loc131])
#loc200 = loc(fused[#loc132, #loc131])
#loc201 = loc(fused[#loc137, #loc135])
#loc202 = loc(fused[#loc139, #loc140])
#loc203 = loc(fused[#loc142, #loc143])
#loc204 = loc(fused[#loc144, #loc143])
#loc205 = loc(fused[#loc147, #loc148])
#loc206 = loc(fused[#loc151, #loc152])
#loc207 = loc(fused[#loc156, #loc155])
#loc208 = loc(fused[#loc157, #loc158])
