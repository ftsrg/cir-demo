!rec_Door = !cir.record<class "Door" {!cir.bool} #cir.record.decl.ast>
!rec_ElevatorButton = !cir.record<class "ElevatorButton" {!cir.bool, !cir.ptr<!cir.record<class "Elevator" packed padded {!cir.record<class "ElevatorButton">, !cir.int<s, 32>, !cir.bool, !cir.array<!cir.int<u, 8> x 3>, !cir.int<s, 32>, !cir.int<s, 32>, !cir.int<s, 32>, !cir.bool, !cir.bool, !cir.array<!cir.int<u, 8> x 2>, !cir.ptr<!cir.record<class "Floor" {!cir.record<class "FloorButton" {!cir.int<s, 32>, !cir.bool, !cir.ptr<!cir.record<class "Elevator">>} #cir.record.decl.ast>, !cir.int<s, 32>, !cir.ptr<!cir.record<class "Elevator">>, !cir.ptr<!cir.record<class "Person" incomplete>>, !cir.record<class "Light" {!cir.bool, !cir.int<s, 32>} #cir.record.decl.ast>} #cir.record.decl.ast>>, !cir.ptr<!cir.record<class "Floor" {!cir.record<class "FloorButton" {!cir.int<s, 32>, !cir.bool, !cir.ptr<!cir.record<class "Elevator">>} #cir.record.decl.ast>, !cir.int<s, 32>, !cir.ptr<!cir.record<class "Elevator">>, !cir.ptr<!cir.record<class "Person" incomplete>>, !cir.record<class "Light" {!cir.bool, !cir.int<s, 32>} #cir.record.decl.ast>} #cir.record.decl.ast>>, !cir.ptr<!cir.record<class "Person" incomplete>>, !rec_Door, !cir.record<class "Bell" padded {!cir.int<u, 8>} #cir.record.decl.ast>, !cir.array<!cir.int<u, 8> x 6>} #cir.record.decl.ast>>} #cir.record.decl.ast>
!rec_Person = !cir.record<class "Person" incomplete>
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
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5)
!rec_Bell = !cir.record<class "Bell" padded {!u8i} #cir.record.decl.ast>
!rec_Clock = !cir.record<class "Clock" {!s32i} #cir.record.decl.ast>
!rec_Light = !cir.record<class "Light" {!cir.bool, !s32i} #cir.record.decl.ast>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
!rec_Elevator = !cir.record<class "Elevator" packed padded {!rec_ElevatorButton, !s32i, !cir.bool, !cir.array<!u8i x 3>, !s32i, !s32i, !s32i, !cir.bool, !cir.bool, !cir.array<!u8i x 2>, !cir.ptr<!cir.record<class "Floor" {!cir.record<class "FloorButton" {!s32i, !cir.bool, !cir.ptr<!cir.record<class "Elevator">>} #cir.record.decl.ast>, !s32i, !cir.ptr<!cir.record<class "Elevator">>, !cir.ptr<!rec_Person>, !rec_Light} #cir.record.decl.ast>>, !cir.ptr<!cir.record<class "Floor" {!cir.record<class "FloorButton" {!s32i, !cir.bool, !cir.ptr<!cir.record<class "Elevator">>} #cir.record.decl.ast>, !s32i, !cir.ptr<!cir.record<class "Elevator">>, !cir.ptr<!rec_Person>, !rec_Light} #cir.record.decl.ast>>, !cir.ptr<!rec_Person>, !rec_Door, !rec_Bell, !cir.array<!u8i x 6>} #cir.record.decl.ast>
!rec_Scheduler = !cir.record<class "Scheduler" {!s32i, !cir.ptr<!cir.record<class "Floor" {!cir.record<class "FloorButton" {!s32i, !cir.bool, !cir.ptr<!rec_Elevator>} #cir.record.decl.ast>, !s32i, !cir.ptr<!rec_Elevator>, !cir.ptr<!rec_Person>, !rec_Light} #cir.record.decl.ast>>, !cir.ptr<!cir.record<class "Floor" {!cir.record<class "FloorButton" {!s32i, !cir.bool, !cir.ptr<!rec_Elevator>} #cir.record.decl.ast>, !s32i, !cir.ptr<!rec_Elevator>, !cir.ptr<!rec_Person>, !rec_Light} #cir.record.decl.ast>>, !s32i, !s32i} #cir.record.decl.ast>
!rec_std3A3Aios_base3A3A_Words = !cir.record<struct "std::ios_base::_Words" {!cir.ptr<!void>, !s64i} #cir.record.decl.ast>
!rec_std3A3Alocale3A3Afacet = !cir.record<class "std::locale::facet" packed padded {!cir.vptr, !s32i, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec_std3A3Anum_get3Cchar3E = !cir.record<class "std::num_get<char>" padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec_std3A3Anum_put3Cchar3E = !cir.record<class "std::num_put<char>" padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec___locale_struct = !cir.record<struct "__locale_struct" {!cir.array<!cir.ptr<!rec___locale_data> x 13>, !cir.ptr<!u16i>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.array<!cir.ptr<!s8i> x 13>} #cir.record.decl.ast>
!rec_FloorButton = !cir.record<class "FloorButton" {!s32i, !cir.bool, !cir.ptr<!rec_Elevator>} #cir.record.decl.ast>
!rec_std3A3Aios_base3A3A_Callback_list = !cir.record<struct "std::ios_base::_Callback_list" {!cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !cir.ptr<!cir.func<(!u32i, !cir.ptr<!cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !cir.record<class "std::locale" {!cir.ptr<!cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>>} #cir.record.decl.ast>} #cir.record.decl.ast>>, !s32i)>>, !s32i, !s32i} #cir.record.decl.ast>
!rec_Floor = !cir.record<class "Floor" {!rec_FloorButton, !s32i, !cir.ptr<!rec_Elevator>, !cir.ptr<!rec_Person>, !rec_Light} #cir.record.decl.ast>
!rec_std3A3Actype3Cchar3E = !cir.record<class "std::ctype<char>" packed padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>, !cir.ptr<!rec___locale_struct>, !cir.bool, !cir.array<!u8i x 7>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.ptr<!u16i>, !s8i, !cir.array<!s8i x 256>, !cir.array<!s8i x 256>, !s8i, !cir.array<!u8i x 6>} #cir.record.decl.ast>
!rec_std3A3Alocale3A3A_Impl = !cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>
!rec_Building = !cir.record<class "Building" {!rec_Floor, !rec_Floor, !rec_Elevator, !rec_Clock, !rec_Scheduler}>
!rec_std3A3Alocale = !cir.record<class "std::locale" {!cir.ptr<!rec_std3A3Alocale3A3A_Impl>} #cir.record.decl.ast>
!rec_std3A3Abasic_streambuf3Cchar3E = !cir.record<class "std::basic_streambuf<char>" {!cir.vptr, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Aios_base = !cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Callback_list>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Abasic_ios3Cchar3E = !cir.record<class "std::basic_ios<char>" {!rec_std3A3Aios_base, !cir.ptr<!cir.record<class "std::basic_ostream<char>" {!cir.vptr, !cir.record<class "std::basic_ios<char>">} #cir.record.decl.ast>>, !s8i, !cir.bool, !cir.ptr<!rec_std3A3Abasic_streambuf3Cchar3E>, !cir.ptr<!rec_std3A3Actype3Cchar3E>, !cir.ptr<!rec_std3A3Anum_put3Cchar3E>, !cir.ptr<!rec_std3A3Anum_get3Cchar3E>} #cir.record.decl.ast>
!rec_std3A3Abasic_istream3Cchar3E = !cir.record<class "std::basic_istream<char>" {!cir.vptr, !s64i, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
!rec_std3A3Abasic_ostream3Cchar3E = !cir.record<class "std::basic_ostream<char>" {!cir.vptr, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc49)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Enter run time: \00" : !cir.array<!s8i x 17>> : !cir.array<!s8i x 17> {alignment = 1 : i64} loc(#loc5)
  cir.global "private" external @_ZSt3cin : !rec_std3A3Abasic_istream3Cchar3E {alignment = 8 : i64} loc(#loc50)
  cir.func private @_ZNSirsERi(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc51)
  cir.func private @_ZNSi6ignoreEv(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc52)
  cir.func private @_ZN8BuildingC1Ev(!cir.ptr<!rec_Building>) special_member<#cir.cxx_ctor<!rec_Building, default>> loc(#loc53)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc54)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"*** ELEVATOR SIMULATION BEGINS ***\00" : !cir.array<!s8i x 35>> : !cir.array<!s8i x 35> {alignment = 1 : i64} loc(#loc18)
  cir.func private @_ZN8Building13runSimulationEi(!cir.ptr<!rec_Building>, !s32i) loc(#loc56)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"*** ELEVATOR SIMULATION ENDS ***\00" : !cir.array<!s8i x 33>> : !cir.array<!s8i x 33> {alignment = 1 : i64} loc(#loc21)
  cir.func private @_ZN8BuildingD1Ev(!cir.ptr<!rec_Building>) special_member<#cir.cxx_dtor<!rec_Building>> extra(#fn_attr) loc(#loc57)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc25)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["duration"] {alignment = 4 : i64} loc(#loc59)
    %2 = cir.alloca !rec_Building, !cir.ptr<!rec_Building>, ["building", init] {alignment = 8 : i64} loc(#loc60)
    %3 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc30)
    %4 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc31)
    %5 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc32)
    %6 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc33)
    %7 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc34)
    %8 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc35)
    %9 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
    %10 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 17>> loc(#loc5)
    %11 = cir.cast array_to_ptrdecay %10 : !cir.ptr<!cir.array<!s8i x 17>> -> !cir.ptr<!s8i> loc(#loc5)
    %12 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%9, %11) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc36)
    %13 = cir.get_global @_ZSt3cin : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc50)
    %14 = cir.call @_ZNSirsERi(%13, %1) : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc37)
    %15 = cir.get_global @_ZSt3cin : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc50)
    %16 = cir.call @_ZNSi6ignoreEv(%15) : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc38)
    cir.call @_ZN8BuildingC1Ev(%2) : (!cir.ptr<!rec_Building>) -> () loc(#loc29)
    %17 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
    %18 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc39)
    cir.br ^bb1 loc(#loc40)
  ^bb1:  // pred: ^bb0
    %19 = cir.try_call @_ZNSolsEPFRSoS_E(%17, %18) ^bb2, ^bb3 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc30)
  ^bb2:  // pred: ^bb1
    cir.store align(8) %19, %3 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc30)
    cir.br ^bb5 loc(#loc40)
  ^bb3:  // pred: ^bb1
    %exception_ptr, %type_id = cir.eh.inflight_exception cleanup loc(#loc40)
    cir.call @_ZN8BuildingD1Ev(%2) : (!cir.ptr<!rec_Building>) -> () extra(#fn_attr) loc(#loc57)
    cir.br ^bb4(%exception_ptr, %type_id : !cir.ptr<!void>, !u32i) loc(#loc40)
  ^bb4(%20: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5), %21: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5)):  // pred: ^bb3
    cir.resume.flat %20, %21 loc(#loc40)
  ^bb5:  // pred: ^bb2
    %22 = cir.load align(8) %3 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc30)
    %23 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 35>> loc(#loc18)
    %24 = cir.cast array_to_ptrdecay %23 : !cir.ptr<!cir.array<!s8i x 35>> -> !cir.ptr<!s8i> loc(#loc18)
    cir.br ^bb6 loc(#loc40)
  ^bb6:  // pred: ^bb5
    %25 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%22, %24) ^bb7, ^bb8 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc31)
  ^bb7:  // pred: ^bb6
    cir.store align(8) %25, %4 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc31)
    cir.br ^bb10 loc(#loc40)
  ^bb8:  // pred: ^bb6
    %exception_ptr_0, %type_id_1 = cir.eh.inflight_exception cleanup loc(#loc40)
    cir.br ^bb9(%exception_ptr_0, %type_id_1 : !cir.ptr<!void>, !u32i) loc(#loc40)
  ^bb9(%26: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5), %27: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5)):  // pred: ^bb8
    cir.resume.flat %26, %27 loc(#loc40)
  ^bb10:  // pred: ^bb7
    %28 = cir.load align(8) %4 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc31)
    %29 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc41)
    cir.br ^bb11 loc(#loc40)
  ^bb11:  // pred: ^bb10
    %30 = cir.try_call @_ZNSolsEPFRSoS_E(%28, %29) ^bb12, ^bb13 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc32)
  ^bb12:  // pred: ^bb11
    cir.store align(8) %30, %5 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc32)
    cir.br ^bb15 loc(#loc40)
  ^bb13:  // pred: ^bb11
    %exception_ptr_2, %type_id_3 = cir.eh.inflight_exception cleanup loc(#loc40)
    cir.br ^bb14(%exception_ptr_2, %type_id_3 : !cir.ptr<!void>, !u32i) loc(#loc40)
  ^bb14(%31: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5), %32: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5)):  // pred: ^bb13
    cir.resume.flat %31, %32 loc(#loc40)
  ^bb15:  // pred: ^bb12
    %33 = cir.load align(8) %5 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc32)
    %34 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc42)
    cir.br ^bb16 loc(#loc40)
  ^bb16:  // pred: ^bb15
    %35 = cir.try_call @_ZNSolsEPFRSoS_E(%33, %34) ^bb17, ^bb18 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
  ^bb17:  // pred: ^bb16
    cir.store align(8) %35, %6 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc33)
    cir.br ^bb20 loc(#loc40)
  ^bb18:  // pred: ^bb16
    %exception_ptr_4, %type_id_5 = cir.eh.inflight_exception cleanup loc(#loc40)
    cir.br ^bb19(%exception_ptr_4, %type_id_5 : !cir.ptr<!void>, !u32i) loc(#loc40)
  ^bb19(%36: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5), %37: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5)):  // pred: ^bb18
    cir.resume.flat %36, %37 loc(#loc40)
  ^bb20:  // pred: ^bb17
    %38 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc43)
    cir.br ^bb21 loc(#loc40)
  ^bb21:  // pred: ^bb20
    cir.try_call @_ZN8Building13runSimulationEi(%2, %38) ^bb22, ^bb23 : (!cir.ptr<!rec_Building>, !s32i) -> () loc(#loc44)
  ^bb22:  // pred: ^bb21
    cir.br ^bb25 loc(#loc40)
  ^bb23:  // pred: ^bb21
    %exception_ptr_6, %type_id_7 = cir.eh.inflight_exception cleanup loc(#loc40)
    cir.br ^bb24(%exception_ptr_6, %type_id_7 : !cir.ptr<!void>, !u32i) loc(#loc40)
  ^bb24(%39: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5), %40: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5)):  // pred: ^bb23
    cir.resume.flat %39, %40 loc(#loc40)
  ^bb25:  // pred: ^bb22
    %41 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
    %42 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 33>> loc(#loc21)
    %43 = cir.cast array_to_ptrdecay %42 : !cir.ptr<!cir.array<!s8i x 33>> -> !cir.ptr<!s8i> loc(#loc21)
    cir.br ^bb26 loc(#loc40)
  ^bb26:  // pred: ^bb25
    %44 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%41, %43) ^bb27, ^bb28 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc34)
  ^bb27:  // pred: ^bb26
    cir.store align(8) %44, %7 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc34)
    cir.br ^bb30 loc(#loc40)
  ^bb28:  // pred: ^bb26
    %exception_ptr_8, %type_id_9 = cir.eh.inflight_exception cleanup loc(#loc40)
    cir.br ^bb29(%exception_ptr_8, %type_id_9 : !cir.ptr<!void>, !u32i) loc(#loc40)
  ^bb29(%45: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5), %46: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5)):  // pred: ^bb28
    cir.resume.flat %45, %46 loc(#loc40)
  ^bb30:  // pred: ^bb27
    %47 = cir.load align(8) %7 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc34)
    %48 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc45)
    cir.br ^bb31 loc(#loc40)
  ^bb31:  // pred: ^bb30
    %49 = cir.try_call @_ZNSolsEPFRSoS_E(%47, %48) ^bb32, ^bb33 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
  ^bb32:  // pred: ^bb31
    cir.store align(8) %49, %8 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc35)
    cir.br ^bb35 loc(#loc40)
  ^bb33:  // pred: ^bb31
    %exception_ptr_10, %type_id_11 = cir.eh.inflight_exception cleanup loc(#loc40)
    cir.call @_ZN8BuildingD1Ev(%2) : (!cir.ptr<!rec_Building>) -> () extra(#fn_attr) loc(#loc57)
    cir.br ^bb34(%exception_ptr_10, %type_id_11 : !cir.ptr<!void>, !u32i) loc(#loc40)
  ^bb34(%50: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5), %51: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:5)):  // pred: ^bb33
    cir.resume.flat %50, %51 loc(#loc40)
  ^bb35:  // pred: ^bb32
    %52 = cir.const #cir.int<0> : !s32i loc(#loc46)
    cir.store align(4) %52, %0 : !s32i, !cir.ptr<!s32i> loc(#loc61)
    cir.call @_ZN8BuildingD1Ev(%2) : (!cir.ptr<!rec_Building>) -> () extra(#fn_attr) loc(#loc57)
    %53 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc61)
    cir.return %53 : !s32i loc(#loc61)
  } loc(#loc58)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":22:12)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:3)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:18)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":182:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":183:26)
#loc10 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":551:7)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":552:14)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/building.h":21:4)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/building.h":21:13)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":28:20)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/building.h":23:4)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/building.h":23:28)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":33:12)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/building.h":22:4)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/building.h":22:14)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":18:1)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":37:1)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":20:4)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":20:8)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":26:4)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":26:13)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":28:9)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":28:17)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":29:9)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":29:17)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":33:9)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":33:47)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":22:9)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":23:8)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":24:8)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":28:12)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":29:12)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":29:20)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":31:28)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":31:13)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":33:50)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":35:11)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_12/main.cpp":35:4)
#loc48 = loc(fused[#loc1, #loc2])
#loc49 = loc(fused[#loc3, #loc4])
#loc50 = loc(fused[#loc6, #loc7])
#loc51 = loc(fused[#loc8, #loc9])
#loc52 = loc(fused[#loc10, #loc11])
#loc53 = loc(fused[#loc12, #loc13])
#loc54 = loc(fused[#loc14, #loc15])
#loc55 = loc(fused[#loc16, #loc17])
#loc56 = loc(fused[#loc19, #loc20])
#loc57 = loc(fused[#loc22, #loc23])
#loc58 = loc(fused[#loc24, #loc25])
#loc59 = loc(fused[#loc26, #loc27])
#loc60 = loc(fused[#loc28, #loc29])
#loc61 = loc(fused[#loc47, #loc46])
