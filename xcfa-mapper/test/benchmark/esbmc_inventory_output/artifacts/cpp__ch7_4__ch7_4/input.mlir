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
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":20:27)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":21:50)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":27:34)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":20:9)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":21:13)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:5)
#loc52 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":27:9)
!rec_Date = !cir.record<class "Date" {!s32i, !s32i, !s32i}>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc71 = loc(fused[#loc44, #loc29])
#loc72 = loc(fused[#loc45, #loc31])
#loc73 = loc(fused[#loc52, #loc35])
!rec_Employee = !cir.record<class "Employee" {!cir.array<!s8i x 25>, !cir.array<!s8i x 25>, !rec_Date, !rec_Date}>
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZN4DateC1Eiii(!cir.ptr<!rec_Date>, !s32i, !s32i, !s32i) special_member<#cir.cxx_ctor<!rec_Date, default>> loc(#loc56)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Bob\00" : !cir.array<!s8i x 4>> : !cir.array<!s8i x 4> {alignment = 1 : i64} loc(#loc3)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"Jones\00" : !cir.array<!s8i x 6>> : !cir.array<!s8i x 6> {alignment = 1 : i64} loc(#loc4)
  cir.func private @_ZN8EmployeeC1EPKcS1_RK4DateS4_(!cir.ptr<!rec_Employee>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!rec_Date>, !cir.ptr<!rec_Date>) special_member<#cir.cxx_ctor<!rec_Employee, custom>> loc(#loc57)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc58)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc59)
  cir.func private @_ZNK8Employee5printEv(!cir.ptr<!rec_Employee>) loc(#loc60)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc61)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"\0ATest Date constructor with invalid values:\0A\00" : !cir.array<!s8i x 45>> : !cir.array<!s8i x 45> {alignment = 1 : i64} loc(#loc15)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc62)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc63)
  cir.func private @_ZN4DateD1Ev(!cir.ptr<!rec_Date>) special_member<#cir.cxx_dtor<!rec_Date>> extra(#fn_attr) loc(#loc64)
  cir.func private @_ZN8EmployeeD1Ev(!cir.ptr<!rec_Employee>) special_member<#cir.cxx_dtor<!rec_Employee>> extra(#fn_attr) loc(#loc65)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc25)
    %1 = cir.alloca !rec_Date, !cir.ptr<!rec_Date>, ["birth", init] {alignment = 4 : i64} loc(#loc67)
    %2 = cir.alloca !rec_Date, !cir.ptr<!rec_Date>, ["hire", init] {alignment = 4 : i64} loc(#loc68)
    %3 = cir.alloca !rec_Employee, !cir.ptr<!rec_Employee>, ["manager", init] {alignment = 4 : i64} loc(#loc69)
    %4 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc32)
    %5 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc33)
    %6 = cir.alloca !rec_Date, !cir.ptr<!rec_Date>, ["lastDayOff", init] {alignment = 4 : i64} loc(#loc70)
    %7 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc36)
    %8 = cir.const #cir.int<7> : !s32i loc(#loc37)
    %9 = cir.const #cir.int<24> : !s32i loc(#loc38)
    %10 = cir.const #cir.int<1949> : !s32i loc(#loc39)
    cir.call @_ZN4DateC1Eiii(%1, %8, %9, %10) : (!cir.ptr<!rec_Date>, !s32i, !s32i, !s32i) -> () loc(#loc40)
    %11 = cir.const #cir.int<3> : !s32i loc(#loc41)
    %12 = cir.const #cir.int<12> : !s32i loc(#loc42)
    %13 = cir.const #cir.int<1988> : !s32i loc(#loc43)
    cir.br ^bb1 loc(#loc71)
  ^bb1:  // pred: ^bb0
    cir.try_call @_ZN4DateC1Eiii(%2, %11, %12, %13) ^bb2, ^bb3 : (!cir.ptr<!rec_Date>, !s32i, !s32i, !s32i) -> () loc(#loc44)
  ^bb2:  // pred: ^bb1
    cir.br ^bb5 loc(#loc71)
  ^bb3:  // pred: ^bb1
    %exception_ptr, %type_id = cir.eh.inflight_exception cleanup loc(#loc71)
    cir.call @_ZN4DateD1Ev(%1) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.br ^bb4(%exception_ptr, %type_id : !cir.ptr<!void>, !u32i) loc(#loc71)
  ^bb4(%14: !cir.ptr<!void> loc(fused[#loc44, #loc29]), %15: !u32i loc(fused[#loc44, #loc29])):  // pred: ^bb3
    cir.resume.flat %14, %15 loc(#loc71)
  ^bb5:  // pred: ^bb2
    %16 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 4>> loc(#loc3)
    %17 = cir.cast array_to_ptrdecay %16 : !cir.ptr<!cir.array<!s8i x 4>> -> !cir.ptr<!s8i> loc(#loc3)
    %18 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 6>> loc(#loc4)
    %19 = cir.cast array_to_ptrdecay %18 : !cir.ptr<!cir.array<!s8i x 6>> -> !cir.ptr<!s8i> loc(#loc4)
    cir.br ^bb6 loc(#loc72)
  ^bb6:  // pred: ^bb5
    cir.try_call @_ZN8EmployeeC1EPKcS1_RK4DateS4_(%3, %17, %19, %1, %2) ^bb7, ^bb8 : (!cir.ptr<!rec_Employee>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!rec_Date>, !cir.ptr<!rec_Date>) -> () loc(#loc45)
  ^bb7:  // pred: ^bb6
    cir.br ^bb10 loc(#loc72)
  ^bb8:  // pred: ^bb6
    %exception_ptr_0, %type_id_1 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.call @_ZN4DateD1Ev(%2) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.call @_ZN4DateD1Ev(%1) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.br ^bb9(%exception_ptr_0, %type_id_1 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb9(%20: !cir.ptr<!void> loc(fused[#loc45, #loc31]), %21: !u32i loc(fused[#loc45, #loc31])):  // pred: ^bb8
    cir.resume.flat %20, %21 loc(#loc72)
  ^bb10:  // pred: ^bb7
    %22 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc59)
    %23 = cir.const #cir.int<10> : !s8i loc(#loc46)
    cir.br ^bb11 loc(#loc47)
  ^bb11:  // pred: ^bb10
    %24 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(%22, %23) ^bb12, ^bb13 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc32)
  ^bb12:  // pred: ^bb11
    cir.store align(8) %24, %4 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc32)
    cir.br ^bb15 loc(#loc47)
  ^bb13:  // pred: ^bb11
    %exception_ptr_2, %type_id_3 = cir.eh.inflight_exception cleanup loc(#loc47)
    cir.call @_ZN8EmployeeD1Ev(%3) : (!cir.ptr<!rec_Employee>) -> () extra(#fn_attr) loc(#loc65)
    cir.call @_ZN4DateD1Ev(%2) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.call @_ZN4DateD1Ev(%1) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.br ^bb14(%exception_ptr_2, %type_id_3 : !cir.ptr<!void>, !u32i) loc(#loc47)
  ^bb14(%25: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:5), %26: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:5)):  // pred: ^bb13
    cir.resume.flat %25, %26 loc(#loc47)
  ^bb15:  // pred: ^bb12
    cir.br ^bb16 loc(#loc47)
  ^bb16:  // pred: ^bb15
    cir.try_call @_ZNK8Employee5printEv(%3) ^bb17, ^bb18 : (!cir.ptr<!rec_Employee>) -> () loc(#loc48)
  ^bb17:  // pred: ^bb16
    cir.br ^bb20 loc(#loc47)
  ^bb18:  // pred: ^bb16
    %exception_ptr_4, %type_id_5 = cir.eh.inflight_exception cleanup loc(#loc47)
    cir.br ^bb19(%exception_ptr_4, %type_id_5 : !cir.ptr<!void>, !u32i) loc(#loc47)
  ^bb19(%27: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:5), %28: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:5)):  // pred: ^bb18
    cir.resume.flat %27, %28 loc(#loc47)
  ^bb20:  // pred: ^bb17
    %29 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc59)
    %30 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 45>> loc(#loc15)
    %31 = cir.cast array_to_ptrdecay %30 : !cir.ptr<!cir.array<!s8i x 45>> -> !cir.ptr<!s8i> loc(#loc15)
    cir.br ^bb21 loc(#loc47)
  ^bb21:  // pred: ^bb20
    %32 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%29, %31) ^bb22, ^bb23 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
  ^bb22:  // pred: ^bb21
    cir.store align(8) %32, %5 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc33)
    cir.br ^bb25 loc(#loc47)
  ^bb23:  // pred: ^bb21
    %exception_ptr_6, %type_id_7 = cir.eh.inflight_exception cleanup loc(#loc47)
    cir.br ^bb24(%exception_ptr_6, %type_id_7 : !cir.ptr<!void>, !u32i) loc(#loc47)
  ^bb24(%33: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:5), %34: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:5)):  // pred: ^bb23
    cir.resume.flat %33, %34 loc(#loc47)
  ^bb25:  // pred: ^bb22
    %35 = cir.const #cir.int<14> : !s32i loc(#loc49)
    %36 = cir.const #cir.int<35> : !s32i loc(#loc50)
    %37 = cir.const #cir.int<1994> : !s32i loc(#loc51)
    cir.br ^bb26 loc(#loc73)
  ^bb26:  // pred: ^bb25
    cir.try_call @_ZN4DateC1Eiii(%6, %35, %36, %37) ^bb27, ^bb28 : (!cir.ptr<!rec_Date>, !s32i, !s32i, !s32i) -> () loc(#loc52)
  ^bb27:  // pred: ^bb26
    cir.br ^bb30 loc(#loc73)
  ^bb28:  // pred: ^bb26
    %exception_ptr_8, %type_id_9 = cir.eh.inflight_exception cleanup loc(#loc73)
    cir.br ^bb29(%exception_ptr_8, %type_id_9 : !cir.ptr<!void>, !u32i) loc(#loc73)
  ^bb29(%38: !cir.ptr<!void> loc(fused[#loc52, #loc35]), %39: !u32i loc(fused[#loc52, #loc35])):  // pred: ^bb28
    cir.resume.flat %38, %39 loc(#loc73)
  ^bb30:  // pred: ^bb27
    %40 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc59)
    %41 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc53)
    cir.br ^bb31 loc(#loc47)
  ^bb31:  // pred: ^bb30
    %42 = cir.try_call @_ZNSolsEPFRSoS_E(%40, %41) ^bb32, ^bb33 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc36)
  ^bb32:  // pred: ^bb31
    cir.store align(8) %42, %7 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc36)
    cir.br ^bb35 loc(#loc47)
  ^bb33:  // pred: ^bb31
    %exception_ptr_10, %type_id_11 = cir.eh.inflight_exception cleanup loc(#loc47)
    cir.call @_ZN4DateD1Ev(%6) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.call @_ZN8EmployeeD1Ev(%3) : (!cir.ptr<!rec_Employee>) -> () extra(#fn_attr) loc(#loc65)
    cir.call @_ZN4DateD1Ev(%2) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.call @_ZN4DateD1Ev(%1) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.br ^bb34(%exception_ptr_10, %type_id_11 : !cir.ptr<!void>, !u32i) loc(#loc47)
  ^bb34(%43: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:5), %44: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:5)):  // pred: ^bb33
    cir.resume.flat %43, %44 loc(#loc47)
  ^bb35:  // pred: ^bb32
    %45 = cir.const #cir.int<0> : !s32i loc(#loc54)
    cir.store align(4) %45, %0 : !s32i, !cir.ptr<!s32i> loc(#loc74)
    cir.call @_ZN4DateD1Ev(%6) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.call @_ZN8EmployeeD1Ev(%3) : (!cir.ptr<!rec_Employee>) -> () extra(#fn_attr) loc(#loc65)
    cir.call @_ZN4DateD1Ev(%2) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    cir.call @_ZN4DateD1Ev(%1) : (!cir.ptr<!rec_Date>) -> () extra(#fn_attr) loc(#loc64)
    %46 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc74)
    cir.return %46 : !s32i loc(#loc74)
  } loc(#loc66)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/date1.h":17:4)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/date1.h":17:39)
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":21:22)
#loc4 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":21:29)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/employee1.h":20:4)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/employee1.h":21:62)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":641:5)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":648:5)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc10 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/employee1.h":23:4)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/employee1.h":23:17)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":26:12)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc18 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc19 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/date1.h":19:4)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/date1.h":19:10)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/employee1.h":24:4)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/employee1.h":24:14)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":17:1)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":32:1)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":19:4)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":19:28)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":20:4)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":21:4)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":23:9)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":26:9)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":27:4)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":28:9)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":19:16)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":19:19)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":19:23)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":19:9)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":20:15)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":20:18)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":20:22)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":23:12)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":24:12)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":27:21)
#loc50 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":27:25)
#loc51 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":27:29)
#loc53 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":28:12)
#loc54 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":30:11)
#loc55 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_4/main.cpp":30:4)
#loc56 = loc(fused[#loc1, #loc2])
#loc57 = loc(fused[#loc5, #loc6])
#loc58 = loc(fused[#loc7, #loc8])
#loc59 = loc(fused[#loc9, #loc10])
#loc60 = loc(fused[#loc11, #loc12])
#loc61 = loc(fused[#loc13, #loc14])
#loc62 = loc(fused[#loc16, #loc17])
#loc63 = loc(fused[#loc18, #loc19])
#loc64 = loc(fused[#loc20, #loc21])
#loc65 = loc(fused[#loc22, #loc23])
#loc66 = loc(fused[#loc24, #loc25])
#loc67 = loc(fused[#loc26, #loc27])
#loc68 = loc(fused[#loc28, #loc29])
#loc69 = loc(fused[#loc30, #loc31])
#loc70 = loc(fused[#loc34, #loc35])
#loc74 = loc(fused[#loc55, #loc54])
