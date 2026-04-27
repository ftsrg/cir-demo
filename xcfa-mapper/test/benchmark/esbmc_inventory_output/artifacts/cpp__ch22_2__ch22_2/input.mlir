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
#fn_attr1 = #cir<extra({nothrow = #cir.nothrow})>
#fn_attr2 = #cir<extra({uwtable = #cir.uwtable<async>})>
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":31:19)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":31:32)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":18:5)
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc41 = loc(fused[#loc13, #loc14])
!rec_Array = !cir.record<class "Array" {!s32i, !cir.ptr<!s32i>}>
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZN5ArrayC1Ei(!cir.ptr<!rec_Array>, !s32i) special_member<#cir.cxx_ctor<!rec_Array, default>> loc(#loc36)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc37)
  cir.func private @_ZlsRSoRK5Array(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!rec_Array>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc38)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc39)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"The array received contains:\0A\00" : !cir.array<!s8i x 30>> : !cir.array<!s8i x 30> {alignment = 1 : i64} loc(#loc9)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"\0A\0A\00" : !cir.array<!s8i x 3>> : !cir.array<!s8i x 3> {alignment = 1 : i64} loc(#loc10)
  cir.func no_inline optnone dso_local @_Z11outputArrayRK5Array(%arg0: !cir.ptr<!rec_Array> loc(fused[#loc13, #loc14])) extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Array>, !cir.ptr<!cir.ptr<!rec_Array>>, ["arrayToOutput", init, const] {alignment = 8 : i64} loc(#loc41)
    cir.store %arg0, %0 : !cir.ptr<!rec_Array>, !cir.ptr<!cir.ptr<!rec_Array>> loc(#loc15)
    %1 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc39)
    %2 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 30>> loc(#loc9)
    %3 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 30>> -> !cir.ptr<!s8i> loc(#loc9)
    %4 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%1, %3) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc16)
    %5 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Array>>, !cir.ptr<!rec_Array> loc(#loc17)
    %6 = cir.call @_ZlsRSoRK5Array(%4, %5) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!rec_Array>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc18)
    %7 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 3>> loc(#loc10)
    %8 = cir.cast array_to_ptrdecay %7 : !cir.ptr<!cir.array<!s8i x 3>> -> !cir.ptr<!s8i> loc(#loc10)
    %9 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%6, %8) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc19)
    cir.return loc(#loc20)
  } loc(#loc40)
  cir.func private @_ZN5ArrayD1Ev(!cir.ptr<!rec_Array>) special_member<#cir.cxx_dtor<!rec_Array>> extra(#fn_attr1) loc(#loc42)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr2) {
    %0 = cir.alloca !rec_Array, !cir.ptr<!rec_Array>, ["ref.tmp0"] {alignment = 8 : i64} loc(#loc25)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc24)
    %2 = cir.alloca !rec_Array, !cir.ptr<!rec_Array>, ["integers1", init] {alignment = 8 : i64} loc(#loc44)
    %3 = cir.const #cir.int<7> : !s32i loc(#loc28)
    cir.call @_ZN5ArrayC1Ei(%2, %3) : (!cir.ptr<!rec_Array>, !s32i) -> () loc(#loc29)
    cir.br ^bb1 loc(#loc30)
  ^bb1:  // pred: ^bb0
    cir.try_call @_Z11outputArrayRK5Array(%2) ^bb2, ^bb3 : (!cir.ptr<!rec_Array>) -> () loc(#loc31)
  ^bb2:  // pred: ^bb1
    cir.br ^bb5 loc(#loc30)
  ^bb3:  // pred: ^bb1
    %exception_ptr, %type_id = cir.eh.inflight_exception cleanup loc(#loc30)
    cir.call @_ZN5ArrayD1Ev(%2) : (!cir.ptr<!rec_Array>) -> () extra(#fn_attr1) loc(#loc42)
    cir.br ^bb4(%exception_ptr, %type_id : !cir.ptr<!void>, !u32i) loc(#loc30)
  ^bb4(%4: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":18:5), %5: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":18:5)):  // pred: ^bb3
    cir.resume.flat %4, %5 loc(#loc30)
  ^bb5:  // pred: ^bb2
    cir.br ^bb6 loc(#loc45)
  ^bb6:  // pred: ^bb5
    %6 = cir.const #cir.int<15> : !s32i loc(#loc25)
    cir.br ^bb7 loc(#loc30)
  ^bb7:  // pred: ^bb6
    cir.try_call @_ZN5ArrayC1Ei(%0, %6) ^bb8, ^bb9 : (!cir.ptr<!rec_Array>, !s32i) -> () loc(#loc25)
  ^bb8:  // pred: ^bb7
    cir.br ^bb11 loc(#loc30)
  ^bb9:  // pred: ^bb7
    %exception_ptr_0, %type_id_1 = cir.eh.inflight_exception cleanup loc(#loc30)
    cir.br ^bb10(%exception_ptr_0, %type_id_1 : !cir.ptr<!void>, !u32i) loc(#loc30)
  ^bb10(%7: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":18:5), %8: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":18:5)):  // pred: ^bb9
    cir.resume.flat %7, %8 loc(#loc30)
  ^bb11:  // pred: ^bb8
    cir.br ^bb12 loc(#loc30)
  ^bb12:  // pred: ^bb11
    cir.try_call @_Z11outputArrayRK5Array(%0) ^bb13, ^bb14 : (!cir.ptr<!rec_Array>) -> () loc(#loc32)
  ^bb13:  // pred: ^bb12
    cir.br ^bb16 loc(#loc30)
  ^bb14:  // pred: ^bb12
    %exception_ptr_2, %type_id_3 = cir.eh.inflight_exception cleanup loc(#loc30)
    cir.call @_ZN5ArrayD1Ev(%0) : (!cir.ptr<!rec_Array>) -> () extra(#fn_attr1) loc(#loc42)
    cir.call @_ZN5ArrayD1Ev(%2) : (!cir.ptr<!rec_Array>) -> () extra(#fn_attr1) loc(#loc42)
    cir.br ^bb15(%exception_ptr_2, %type_id_3 : !cir.ptr<!void>, !u32i) loc(#loc30)
  ^bb15(%9: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":18:5), %10: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":18:5)):  // pred: ^bb14
    cir.resume.flat %9, %10 loc(#loc30)
  ^bb16:  // pred: ^bb13
    cir.call @_ZN5ArrayD1Ev(%0) : (!cir.ptr<!rec_Array>) -> () extra(#fn_attr1) loc(#loc42)
    cir.br ^bb17 loc(#loc30)
  ^bb17:  // pred: ^bb16
    %11 = cir.const #cir.int<0> : !s32i loc(#loc34)
    cir.store align(4) %11, %1 : !s32i, !cir.ptr<!s32i> loc(#loc46)
    cir.call @_ZN5ArrayD1Ev(%2) : (!cir.ptr<!rec_Array>) -> () extra(#fn_attr1) loc(#loc42)
    %12 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc46)
    cir.return %12 : !s32i loc(#loc46)
  } loc(#loc43)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/array.h":21:4)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/array.h":21:20)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/array.h":19:4)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/array.h":19:57)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":33:12)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":34:29)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":16:1)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":16:33)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":32:1)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":33:9)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":34:12)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":34:9)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":34:26)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":36:1)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/array.h":22:4)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/array.h":22:11)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":18:1)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":28:1)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":24:17)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":20:4)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":20:23)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":20:21)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":20:10)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":22:4)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":24:4)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":24:20)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":26:11)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch22_2/main.cpp":26:4)
#loc36 = loc(fused[#loc1, #loc2])
#loc37 = loc(fused[#loc3, #loc4])
#loc38 = loc(fused[#loc5, #loc6])
#loc39 = loc(fused[#loc7, #loc8])
#loc40 = loc(fused[#loc11, #loc12])
#loc42 = loc(fused[#loc21, #loc22])
#loc43 = loc(fused[#loc23, #loc24])
#loc44 = loc(fused[#loc26, #loc27])
#loc45 = loc(fused[#loc32, #loc33])
#loc46 = loc(fused[#loc35, #loc34])
