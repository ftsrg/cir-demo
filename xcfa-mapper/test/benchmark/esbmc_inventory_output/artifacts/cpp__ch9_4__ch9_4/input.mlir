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
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":30:30)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":18:5)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":30:12)
!rec_Point4 = !cir.record<class "Point4" {!s32i, !s32i}>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc57 = loc(fused[#loc41, #loc23])
!rec_Circle5 = !cir.record<class "Circle5" {!rec_Point4, !cir.double}>
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZN6Point4C1Eii(!cir.ptr<!rec_Point4>, !s32i, !s32i) special_member<#cir.cxx_ctor<!rec_Point4, default>> loc(#loc45)
  cir.func private @_ZN6Point4D1Ev(!cir.ptr<!rec_Point4>) special_member<#cir.cxx_dtor<!rec_Point4>> extra(#fn_attr) loc(#loc46)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc47)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
  cir.func private @_ZN7Circle5C1Eiid(!cir.ptr<!rec_Circle5>, !s32i, !s32i, !cir.double) special_member<#cir.cxx_ctor<!rec_Circle5, default>> loc(#loc50)
  cir.func private @_ZN7Circle5D1Ev(!cir.ptr<!rec_Circle5>) special_member<#cir.cxx_dtor<!rec_Circle5>> extra(#fn_attr) loc(#loc51)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !rec_Point4, !cir.ptr<!rec_Point4>, ["point", init] {alignment = 4 : i64} loc(#loc53)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc16)
    %2 = cir.alloca !rec_Circle5, !cir.ptr<!rec_Circle5>, ["circle1", init] {alignment = 8 : i64} loc(#loc54)
    %3 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc21)
    %4 = cir.alloca !rec_Circle5, !cir.ptr<!rec_Circle5>, ["circle2", init] {alignment = 8 : i64} loc(#loc55)
    %5 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc24)
    cir.br ^bb1 loc(#loc56)
  ^bb1:  // pred: ^bb0
    %6 = cir.const #cir.int<11> : !s32i loc(#loc27)
    %7 = cir.const #cir.int<22> : !s32i loc(#loc28)
    cir.call @_ZN6Point4C1Eii(%0, %6, %7) : (!cir.ptr<!rec_Point4>, !s32i, !s32i) -> () loc(#loc29)
    cir.call @_ZN6Point4D1Ev(%0) : (!cir.ptr<!rec_Point4>) -> () extra(#fn_attr) loc(#loc46)
    cir.br ^bb2 loc(#loc26)
  ^bb2:  // pred: ^bb1
    %8 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
    %9 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc30)
    %10 = cir.call @_ZNSolsEPFRSoS_E(%8, %9) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc31)
    %11 = cir.const #cir.int<72> : !s32i loc(#loc32)
    %12 = cir.const #cir.int<29> : !s32i loc(#loc33)
    %13 = cir.const #cir.fp<4.500000e+00> : !cir.double loc(#loc34)
    cir.call @_ZN7Circle5C1Eiid(%2, %11, %12, %13) : (!cir.ptr<!rec_Circle5>, !s32i, !s32i, !cir.double) -> () loc(#loc35)
    %14 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
    %15 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc36)
    cir.br ^bb3 loc(#loc37)
  ^bb3:  // pred: ^bb2
    %16 = cir.try_call @_ZNSolsEPFRSoS_E(%14, %15) ^bb4, ^bb5 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc21)
  ^bb4:  // pred: ^bb3
    cir.store align(8) %16, %3 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc21)
    cir.br ^bb7 loc(#loc37)
  ^bb5:  // pred: ^bb3
    %exception_ptr, %type_id = cir.eh.inflight_exception cleanup loc(#loc37)
    cir.call @_ZN7Circle5D1Ev(%2) : (!cir.ptr<!rec_Circle5>) -> () extra(#fn_attr) loc(#loc51)
    cir.br ^bb6(%exception_ptr, %type_id : !cir.ptr<!void>, !u32i) loc(#loc37)
  ^bb6(%17: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":18:5), %18: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":18:5)):  // pred: ^bb5
    cir.resume.flat %17, %18 loc(#loc37)
  ^bb7:  // pred: ^bb4
    %19 = cir.const #cir.int<5> : !s32i loc(#loc38)
    %20 = cir.const #cir.int<5> : !s32i loc(#loc39)
    %21 = cir.const #cir.int<10> : !s32i loc(#loc40)
    %22 = cir.cast int_to_float %21 : !s32i -> !cir.double loc(#loc40)
    cir.br ^bb8 loc(#loc57)
  ^bb8:  // pred: ^bb7
    cir.try_call @_ZN7Circle5C1Eiid(%4, %19, %20, %22) ^bb9, ^bb10 : (!cir.ptr<!rec_Circle5>, !s32i, !s32i, !cir.double) -> () loc(#loc41)
  ^bb9:  // pred: ^bb8
    cir.br ^bb12 loc(#loc57)
  ^bb10:  // pred: ^bb8
    %exception_ptr_0, %type_id_1 = cir.eh.inflight_exception cleanup loc(#loc57)
    cir.br ^bb11(%exception_ptr_0, %type_id_1 : !cir.ptr<!void>, !u32i) loc(#loc57)
  ^bb11(%23: !cir.ptr<!void> loc(fused[#loc41, #loc23]), %24: !u32i loc(fused[#loc41, #loc23])):  // pred: ^bb10
    cir.resume.flat %23, %24 loc(#loc57)
  ^bb12:  // pred: ^bb9
    %25 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
    %26 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc42)
    cir.br ^bb13 loc(#loc37)
  ^bb13:  // pred: ^bb12
    %27 = cir.try_call @_ZNSolsEPFRSoS_E(%25, %26) ^bb14, ^bb15 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc24)
  ^bb14:  // pred: ^bb13
    cir.store align(8) %27, %5 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc24)
    cir.br ^bb17 loc(#loc37)
  ^bb15:  // pred: ^bb13
    %exception_ptr_2, %type_id_3 = cir.eh.inflight_exception cleanup loc(#loc37)
    cir.call @_ZN7Circle5D1Ev(%4) : (!cir.ptr<!rec_Circle5>) -> () extra(#fn_attr) loc(#loc51)
    cir.call @_ZN7Circle5D1Ev(%2) : (!cir.ptr<!rec_Circle5>) -> () extra(#fn_attr) loc(#loc51)
    cir.br ^bb16(%exception_ptr_2, %type_id_3 : !cir.ptr<!void>, !u32i) loc(#loc37)
  ^bb16(%28: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":18:5), %29: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":18:5)):  // pred: ^bb15
    cir.resume.flat %28, %29 loc(#loc37)
  ^bb17:  // pred: ^bb14
    %30 = cir.const #cir.int<0> : !s32i loc(#loc43)
    cir.store align(4) %30, %1 : !s32i, !cir.ptr<!s32i> loc(#loc58)
    cir.call @_ZN7Circle5D1Ev(%4) : (!cir.ptr<!rec_Circle5>) -> () extra(#fn_attr) loc(#loc51)
    cir.call @_ZN7Circle5D1Ev(%2) : (!cir.ptr<!rec_Circle5>) -> () extra(#fn_attr) loc(#loc51)
    %31 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc58)
    cir.return %31 : !s32i loc(#loc58)
  } loc(#loc52)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/point4.h":16:4)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/point4.h":16:29)
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/point4.h":17:4)
#loc4 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/point4.h":17:12)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc10 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/circle5.h":20:4)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/circle5.h":20:44)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/circle5.h":22:4)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/circle5.h":22:13)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":18:1)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":36:1)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":22:7)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":22:28)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":27:4)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":27:33)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":29:9)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":30:4)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":32:9)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":20:4)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":24:4)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":22:21)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":22:25)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":22:14)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":26:12)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":26:9)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":27:21)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":27:25)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":27:29)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":27:12)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":29:12)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":30:21)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":30:24)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":30:27)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":32:12)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":34:11)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch9_4/main.cpp":34:4)
#loc45 = loc(fused[#loc1, #loc2])
#loc46 = loc(fused[#loc3, #loc4])
#loc47 = loc(fused[#loc5, #loc6])
#loc48 = loc(fused[#loc7, #loc8])
#loc49 = loc(fused[#loc9, #loc10])
#loc50 = loc(fused[#loc11, #loc12])
#loc51 = loc(fused[#loc13, #loc14])
#loc52 = loc(fused[#loc15, #loc16])
#loc53 = loc(fused[#loc17, #loc18])
#loc54 = loc(fused[#loc19, #loc20])
#loc55 = loc(fused[#loc22, #loc23])
#loc56 = loc(fused[#loc25, #loc26])
#loc58 = loc(fused[#loc44, #loc43])
