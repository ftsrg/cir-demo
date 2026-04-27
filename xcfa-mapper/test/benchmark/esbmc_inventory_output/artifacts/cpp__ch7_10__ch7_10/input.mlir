!rec_Implementation = !cir.record<class "Implementation" incomplete>
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
#fn_attr1 = #cir<extra({uwtable = #cir.uwtable<async>})>
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
!rec_Interface = !cir.record<class "Interface" {!cir.ptr<!rec_Implementation>}>
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZN9InterfaceC1Ei(!cir.ptr<!rec_Interface>, !s32i) special_member<#cir.cxx_ctor<!rec_Interface, custom>> loc(#loc46)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc48)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Interface contains: \00" : !cir.array<!s8i x 21>> : !cir.array<!s8i x 21> {alignment = 1 : i64} loc(#loc7)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
  cir.func private @_ZNK9Interface8getValueEv(!cir.ptr<!rec_Interface>) -> !s32i loc(#loc50)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<" before setValue\00" : !cir.array<!s8i x 17>> : !cir.array<!s8i x 17> {alignment = 1 : i64} loc(#loc12)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc52)
  cir.func private @_ZN9Interface8setValueEi(!cir.ptr<!rec_Interface>, !s32i) loc(#loc53)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<" after setValue\00" : !cir.array<!s8i x 16>> : !cir.array<!s8i x 16> {alignment = 1 : i64} loc(#loc19)
  cir.func private @_ZN9InterfaceD1Ev(!cir.ptr<!rec_Interface>) special_member<#cir.cxx_dtor<!rec_Interface>> extra(#fn_attr) loc(#loc54)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc23)
    %1 = cir.alloca !rec_Interface, !cir.ptr<!rec_Interface>, ["i", init] {alignment = 8 : i64} loc(#loc56)
    %2 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc26)
    %3 = cir.alloca !s32i, !cir.ptr<!s32i>, ["tmp.try.call.res"] {alignment = 4 : i64} loc(#loc27)
    %4 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc28)
    %5 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc29)
    %6 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc30)
    %7 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc31)
    %8 = cir.alloca !s32i, !cir.ptr<!s32i>, ["tmp.try.call.res"] {alignment = 4 : i64} loc(#loc32)
    %9 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc33)
    %10 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc34)
    %11 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc35)
    %12 = cir.const #cir.int<5> : !s32i loc(#loc36)
    cir.call @_ZN9InterfaceC1Ei(%1, %12) : (!cir.ptr<!rec_Interface>, !s32i) -> () loc(#loc37)
    %13 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
    %14 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 21>> loc(#loc7)
    %15 = cir.cast array_to_ptrdecay %14 : !cir.ptr<!cir.array<!s8i x 21>> -> !cir.ptr<!s8i> loc(#loc7)
    cir.br ^bb1 loc(#loc38)
  ^bb1:  // pred: ^bb0
    %16 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%13, %15) ^bb2, ^bb3 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc26)
  ^bb2:  // pred: ^bb1
    cir.store align(8) %16, %2 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc26)
    cir.br ^bb5 loc(#loc38)
  ^bb3:  // pred: ^bb1
    %exception_ptr, %type_id = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.call @_ZN9InterfaceD1Ev(%1) : (!cir.ptr<!rec_Interface>) -> () extra(#fn_attr) loc(#loc54)
    cir.br ^bb4(%exception_ptr, %type_id : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb4(%17: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %18: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb3
    cir.resume.flat %17, %18 loc(#loc38)
  ^bb5:  // pred: ^bb2
    %19 = cir.load align(8) %2 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc26)
    cir.br ^bb6 loc(#loc38)
  ^bb6:  // pred: ^bb5
    %20 = cir.try_call @_ZNK9Interface8getValueEv(%1) ^bb7, ^bb8 : (!cir.ptr<!rec_Interface>) -> !s32i loc(#loc27)
  ^bb7:  // pred: ^bb6
    cir.store align(4) %20, %3 : !s32i, !cir.ptr<!s32i> loc(#loc27)
    cir.br ^bb10 loc(#loc38)
  ^bb8:  // pred: ^bb6
    %exception_ptr_0, %type_id_1 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.br ^bb9(%exception_ptr_0, %type_id_1 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb9(%21: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %22: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb8
    cir.resume.flat %21, %22 loc(#loc38)
  ^bb10:  // pred: ^bb7
    %23 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc27)
    cir.br ^bb11 loc(#loc38)
  ^bb11:  // pred: ^bb10
    %24 = cir.try_call @_ZNSolsEi(%19, %23) ^bb12, ^bb13 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc28)
  ^bb12:  // pred: ^bb11
    cir.store align(8) %24, %4 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc28)
    cir.br ^bb15 loc(#loc38)
  ^bb13:  // pred: ^bb11
    %exception_ptr_2, %type_id_3 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.br ^bb14(%exception_ptr_2, %type_id_3 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb14(%25: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %26: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb13
    cir.resume.flat %25, %26 loc(#loc38)
  ^bb15:  // pred: ^bb12
    %27 = cir.load align(8) %4 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc28)
    %28 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 17>> loc(#loc12)
    %29 = cir.cast array_to_ptrdecay %28 : !cir.ptr<!cir.array<!s8i x 17>> -> !cir.ptr<!s8i> loc(#loc12)
    cir.br ^bb16 loc(#loc38)
  ^bb16:  // pred: ^bb15
    %30 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%27, %29) ^bb17, ^bb18 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc29)
  ^bb17:  // pred: ^bb16
    cir.store align(8) %30, %5 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc29)
    cir.br ^bb20 loc(#loc38)
  ^bb18:  // pred: ^bb16
    %exception_ptr_4, %type_id_5 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.br ^bb19(%exception_ptr_4, %type_id_5 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb19(%31: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %32: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb18
    cir.resume.flat %31, %32 loc(#loc38)
  ^bb20:  // pred: ^bb17
    %33 = cir.load align(8) %5 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc29)
    %34 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc39)
    cir.br ^bb21 loc(#loc38)
  ^bb21:  // pred: ^bb20
    %35 = cir.try_call @_ZNSolsEPFRSoS_E(%33, %34) ^bb22, ^bb23 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc30)
  ^bb22:  // pred: ^bb21
    cir.store align(8) %35, %6 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc30)
    cir.br ^bb25 loc(#loc38)
  ^bb23:  // pred: ^bb21
    %exception_ptr_6, %type_id_7 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.br ^bb24(%exception_ptr_6, %type_id_7 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb24(%36: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %37: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb23
    cir.resume.flat %36, %37 loc(#loc38)
  ^bb25:  // pred: ^bb22
    %38 = cir.const #cir.int<10> : !s32i loc(#loc40)
    cir.br ^bb26 loc(#loc38)
  ^bb26:  // pred: ^bb25
    cir.try_call @_ZN9Interface8setValueEi(%1, %38) ^bb27, ^bb28 : (!cir.ptr<!rec_Interface>, !s32i) -> () loc(#loc41)
  ^bb27:  // pred: ^bb26
    cir.br ^bb30 loc(#loc38)
  ^bb28:  // pred: ^bb26
    %exception_ptr_8, %type_id_9 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.br ^bb29(%exception_ptr_8, %type_id_9 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb29(%39: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %40: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb28
    cir.resume.flat %39, %40 loc(#loc38)
  ^bb30:  // pred: ^bb27
    %41 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
    %42 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 21>> loc(#loc42)
    %43 = cir.cast array_to_ptrdecay %42 : !cir.ptr<!cir.array<!s8i x 21>> -> !cir.ptr<!s8i> loc(#loc42)
    cir.br ^bb31 loc(#loc38)
  ^bb31:  // pred: ^bb30
    %44 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%41, %43) ^bb32, ^bb33 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc31)
  ^bb32:  // pred: ^bb31
    cir.store align(8) %44, %7 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc31)
    cir.br ^bb35 loc(#loc38)
  ^bb33:  // pred: ^bb31
    %exception_ptr_10, %type_id_11 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.br ^bb34(%exception_ptr_10, %type_id_11 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb34(%45: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %46: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb33
    cir.resume.flat %45, %46 loc(#loc38)
  ^bb35:  // pred: ^bb32
    %47 = cir.load align(8) %7 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc31)
    cir.br ^bb36 loc(#loc38)
  ^bb36:  // pred: ^bb35
    %48 = cir.try_call @_ZNK9Interface8getValueEv(%1) ^bb37, ^bb38 : (!cir.ptr<!rec_Interface>) -> !s32i loc(#loc32)
  ^bb37:  // pred: ^bb36
    cir.store align(4) %48, %8 : !s32i, !cir.ptr<!s32i> loc(#loc32)
    cir.br ^bb40 loc(#loc38)
  ^bb38:  // pred: ^bb36
    %exception_ptr_12, %type_id_13 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.br ^bb39(%exception_ptr_12, %type_id_13 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb39(%49: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %50: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb38
    cir.resume.flat %49, %50 loc(#loc38)
  ^bb40:  // pred: ^bb37
    %51 = cir.load align(4) %8 : !cir.ptr<!s32i>, !s32i loc(#loc32)
    cir.br ^bb41 loc(#loc38)
  ^bb41:  // pred: ^bb40
    %52 = cir.try_call @_ZNSolsEi(%47, %51) ^bb42, ^bb43 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
  ^bb42:  // pred: ^bb41
    cir.store align(8) %52, %9 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc33)
    cir.br ^bb45 loc(#loc38)
  ^bb43:  // pred: ^bb41
    %exception_ptr_14, %type_id_15 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.br ^bb44(%exception_ptr_14, %type_id_15 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb44(%53: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %54: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb43
    cir.resume.flat %53, %54 loc(#loc38)
  ^bb45:  // pred: ^bb42
    %55 = cir.load align(8) %9 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
    %56 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 16>> loc(#loc19)
    %57 = cir.cast array_to_ptrdecay %56 : !cir.ptr<!cir.array<!s8i x 16>> -> !cir.ptr<!s8i> loc(#loc19)
    cir.br ^bb46 loc(#loc38)
  ^bb46:  // pred: ^bb45
    %58 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%55, %57) ^bb47, ^bb48 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc34)
  ^bb47:  // pred: ^bb46
    cir.store align(8) %58, %10 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc34)
    cir.br ^bb50 loc(#loc38)
  ^bb48:  // pred: ^bb46
    %exception_ptr_16, %type_id_17 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.br ^bb49(%exception_ptr_16, %type_id_17 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb49(%59: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %60: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb48
    cir.resume.flat %59, %60 loc(#loc38)
  ^bb50:  // pred: ^bb47
    %61 = cir.load align(8) %10 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc34)
    %62 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc43)
    cir.br ^bb51 loc(#loc38)
  ^bb51:  // pred: ^bb50
    %63 = cir.try_call @_ZNSolsEPFRSoS_E(%61, %62) ^bb52, ^bb53 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
  ^bb52:  // pred: ^bb51
    cir.store align(8) %63, %11 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc35)
    cir.br ^bb55 loc(#loc38)
  ^bb53:  // pred: ^bb51
    %exception_ptr_18, %type_id_19 = cir.eh.inflight_exception cleanup loc(#loc38)
    cir.call @_ZN9InterfaceD1Ev(%1) : (!cir.ptr<!rec_Interface>) -> () extra(#fn_attr) loc(#loc54)
    cir.br ^bb54(%exception_ptr_18, %type_id_19 : !cir.ptr<!void>, !u32i) loc(#loc38)
  ^bb54(%64: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5), %65: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:5)):  // pred: ^bb53
    cir.resume.flat %64, %65 loc(#loc38)
  ^bb55:  // pred: ^bb52
    %66 = cir.const #cir.int<0> : !s32i loc(#loc44)
    cir.store align(4) %66, %0 : !s32i, !cir.ptr<!s32i> loc(#loc57)
    cir.call @_ZN9InterfaceD1Ev(%1) : (!cir.ptr<!rec_Interface>) -> () extra(#fn_attr) loc(#loc54)
    %67 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc57)
    cir.return %67 : !s32i loc(#loc57)
  } loc(#loc55)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/interface.h":16:4)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/interface.h":16:19)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":21:12)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/interface.h":18:4)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/interface.h":18:19)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":22:12)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/interface.h":17:4)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/interface.h":17:23)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":27:12)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/interface.h":19:4)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/interface.h":19:15)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":17:1)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":31:1)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":19:4)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":19:19)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":21:9)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":21:40)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":21:35)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":22:9)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":22:31)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":26:9)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":26:40)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":26:35)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":27:9)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":27:30)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":19:17)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":19:14)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":22:34)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":24:16)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":24:6)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":26:12)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":27:33)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":29:11)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_10/main.cpp":29:4)
#loc46 = loc(fused[#loc1, #loc2])
#loc47 = loc(fused[#loc3, #loc4])
#loc48 = loc(fused[#loc5, #loc6])
#loc49 = loc(fused[#loc8, #loc9])
#loc50 = loc(fused[#loc10, #loc11])
#loc51 = loc(fused[#loc13, #loc14])
#loc52 = loc(fused[#loc15, #loc16])
#loc53 = loc(fused[#loc17, #loc18])
#loc54 = loc(fused[#loc20, #loc21])
#loc55 = loc(fused[#loc22, #loc23])
#loc56 = loc(fused[#loc24, #loc25])
#loc57 = loc(fused[#loc45, #loc44])
