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
#fn_attr1 = #cir<extra({nothrow = #cir.nothrow})>
#fn_attr2 = #cir<extra({uwtable = #cir.uwtable<async>})>
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":24:4)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":24:13)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":24:21)
#loc27 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":109:7)
#loc28 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":109:16)
#loc29 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":109:36)
#loc40 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":200:7)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":39:9)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":39:21)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":39:25)
#loc58 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":187:7)
#loc64 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":46:8)
#loc73 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":176:7)
#loc77 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":32:4)
#loc82 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":64:55)
#loc93 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":64:24)
#loc96 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5)
!rec_Integer = !cir.record<class "Integer" {!s32i} #cir.record.decl.ast>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc115 = loc(fused[#loc11, #loc12])
#loc119 = loc(fused[#loc28, #loc29])
#loc125 = loc(fused[#loc47, #loc48])
#loc139 = loc(fused[#loc93, #loc82])
!rec_std3A3Aios_base3A3A_Words = !cir.record<struct "std::ios_base::_Words" {!cir.ptr<!void>, !s64i} #cir.record.decl.ast>
!rec_std3A3Alocale3A3Afacet = !cir.record<class "std::locale::facet" packed padded {!cir.vptr, !s32i, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec_std3A3Anum_get3Cchar3E = !cir.record<class "std::num_get<char>" padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec_std3A3Anum_put3Cchar3E = !cir.record<class "std::num_put<char>" padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec___locale_struct = !cir.record<struct "__locale_struct" {!cir.array<!cir.ptr<!rec___locale_data> x 13>, !cir.ptr<!u16i>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.array<!cir.ptr<!s8i> x 13>} #cir.record.decl.ast>
!rec_std3A3Aauto_ptr3CInteger3E = !cir.record<class "std::auto_ptr<Integer>" {!cir.ptr<!rec_Integer>}>
!rec_std3A3Aios_base3A3A_Callback_list = !cir.record<struct "std::ios_base::_Callback_list" {!cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !cir.ptr<!cir.func<(!u32i, !cir.ptr<!cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !cir.record<class "std::locale" {!cir.ptr<!cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>>} #cir.record.decl.ast>} #cir.record.decl.ast>>, !s32i)>>, !s32i, !s32i} #cir.record.decl.ast>
!rec_std3A3Actype3Cchar3E = !cir.record<class "std::ctype<char>" packed padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>, !cir.ptr<!rec___locale_struct>, !cir.bool, !cir.array<!u8i x 7>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.ptr<!u16i>, !s8i, !cir.array<!s8i x 256>, !cir.array<!s8i x 256>, !s8i, !cir.array<!u8i x 6>} #cir.record.decl.ast>
!rec_std3A3Alocale3A3A_Impl = !cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>
!rec_std3A3Alocale = !cir.record<class "std::locale" {!cir.ptr<!rec_std3A3Alocale3A3A_Impl>} #cir.record.decl.ast>
!rec_std3A3Abasic_streambuf3Cchar3E = !cir.record<class "std::basic_streambuf<char>" {!cir.vptr, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Aios_base = !cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Callback_list>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Abasic_ios3Cchar3E = !cir.record<class "std::basic_ios<char>" {!rec_std3A3Aios_base, !cir.ptr<!cir.record<class "std::basic_ostream<char>" {!cir.vptr, !cir.record<class "std::basic_ios<char>">} #cir.record.decl.ast>>, !s8i, !cir.bool, !cir.ptr<!rec_std3A3Abasic_streambuf3Cchar3E>, !cir.ptr<!rec_std3A3Actype3Cchar3E>, !cir.ptr<!rec_std3A3Anum_put3Cchar3E>, !cir.ptr<!rec_std3A3Anum_get3Cchar3E>} #cir.record.decl.ast>
!rec_std3A3Abasic_ostream3Cchar3E = !cir.record<class "std::basic_ostream<char>" {!cir.vptr, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc111)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc112)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Creating an auto_ptr object that points to an \00" : !cir.array<!s8i x 47>> : !cir.array<!s8i x 47> {alignment = 1 : i64} loc(#loc5)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"Integer\0A\00" : !cir.array<!s8i x 9>> : !cir.array<!s8i x 9> {alignment = 1 : i64} loc(#loc6)
  cir.func private @_Znwm(!u64i) -> !cir.ptr<!void> loc(#loc113)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN7IntegerC2Ei(%arg0: !cir.ptr<!rec_Integer> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":24:4), %arg1: !s32i loc(fused[#loc11, #loc12])) special_member<#cir.cxx_ctor<!rec_Integer, default>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>>, ["this", init] {alignment = 8 : i64} loc(#loc9)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["i", init] {alignment = 4 : i64} loc(#loc115)
    cir.store %arg0, %0 : !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc13)
    cir.store %arg1, %1 : !s32i, !cir.ptr<!s32i> loc(#loc13)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc9)
    %3 = cir.get_member %2[0] {name = "value"} : !cir.ptr<!rec_Integer> -> !cir.ptr<!s32i> loc(#loc14)
    %4 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc15)
    cir.store align(4) %4, %3 : !s32i, !cir.ptr<!s32i> loc(#loc116)
    %5 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc112)
    %6 = cir.get_global @".str.5" : !cir.ptr<!cir.array<!s8i x 25>> loc(#loc17)
    %7 = cir.cast array_to_ptrdecay %6 : !cir.ptr<!cir.array<!s8i x 25>> -> !cir.ptr<!s8i> loc(#loc17)
    %8 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%5, %7) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc18)
    %9 = cir.get_member %2[0] {name = "value"} : !cir.ptr<!rec_Integer> -> !cir.ptr<!s32i> loc(#loc14)
    %10 = cir.load align(4) %9 : !cir.ptr<!s32i>, !s32i loc(#loc19)
    %11 = cir.call @_ZNSolsEi(%8, %10) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc20)
    %12 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc21)
    %13 = cir.call @_ZNSolsEPFRSoS_E(%11, %12) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc22)
    cir.return loc(#loc10)
  } loc(#loc114)
  cir.func private @_ZdlPvm(!cir.ptr<!void>, !u64i) extra(#fn_attr1) loc(#loc117)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNSt8auto_ptrI7IntegerEC2EPS0_(%arg0: !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":109:7), %arg1: !cir.ptr<!rec_Integer> loc(fused[#loc28, #loc29])) special_member<#cir.cxx_ctor<!rec_std3A3Aauto_ptr3CInteger3E, default>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>>, ["this", init] {alignment = 8 : i64} loc(#loc27)
    %1 = cir.alloca !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>>, ["__p", init] {alignment = 8 : i64} loc(#loc119)
    cir.store %arg0, %0 : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>> loc(#loc30)
    cir.store %arg1, %1 : !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc30)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>>, !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> loc(#loc27)
    %3 = cir.get_member %2[0] {name = "_M_ptr"} : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> -> !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc31)
    %4 = cir.load align(8) %1 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc32)
    cir.store align(8) %4, %3 : !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc120)
    cir.return loc(#loc26)
  } loc(#loc118)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"\0AUsing the auto_ptr to manipulate the Integer\0A\00" : !cir.array<!s8i x 47>> : !cir.array<!s8i x 47> {alignment = 1 : i64} loc(#loc34)
  cir.func private @_ZSt21__glibcxx_assert_failPKciS0_S0_(!cir.ptr<!s8i>, !s32i, !cir.ptr<!s8i>, !cir.ptr<!s8i>) extra(#fn_attr1) loc(#loc121)
  cir.global "private" constant cir_private dso_local @".str.7" = #cir.const_array<"/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h\00" : !cir.array<!s8i x 93>> : !cir.array<!s8i x 93> {alignment = 1 : i64} loc(#loc37)
  cir.global "private" constant cir_private dso_local @".str.8" = #cir.const_array<"element_type *std::auto_ptr<Integer>::operator->() const [_Tp = Integer]\00" : !cir.array<!s8i x 73>> : !cir.array<!s8i x 73> {alignment = 1 : i64} loc(#loc37)
  cir.global "private" constant cir_private dso_local @".str.9" = #cir.const_array<"_M_ptr != 0\00" : !cir.array<!s8i x 12>> : !cir.array<!s8i x 12> {alignment = 1 : i64} loc(#loc37)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNKSt8auto_ptrI7IntegerEptEv(%arg0: !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":200:7)) -> !cir.ptr<!rec_Integer> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>>, ["this", init] {alignment = 8 : i64} loc(#loc40)
    %1 = cir.alloca !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>>, ["__retval"] {alignment = 8 : i64} loc(#loc39)
    cir.store %arg0, %0 : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>> loc(#loc41)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>>, !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> loc(#loc40)
    cir.br ^bb1 loc(#loc37)
  ^bb1:  // pred: ^bb0
    cir.br ^bb3 loc(#loc37)
  ^bb2:  // pred: ^bb9
    %3 = cir.const #false loc(#loc37)
    cir.brcond %3 ^bb3, ^bb10 loc(#loc37)
  ^bb3:  // 2 preds: ^bb1, ^bb2
    cir.br ^bb4 loc(#loc37)
  ^bb4:  // pred: ^bb3
    cir.br ^bb5 loc(#loc37)
  ^bb5:  // pred: ^bb4
    %4 = cir.get_member %2[0] {name = "_M_ptr"} : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> -> !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc31)
    %5 = cir.load align(8) %4 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc37)
    %6 = cir.const #cir.ptr<null> : !cir.ptr<!rec_Integer> loc(#loc37)
    %7 = cir.cmp(ne, %5, %6) : !cir.ptr<!rec_Integer>, !cir.bool loc(#loc37)
    %8 = cir.unary(not, %7) : !cir.bool, !cir.bool loc(#loc37)
    cir.brcond %8 ^bb6, ^bb7 loc(#loc37)
  ^bb6:  // pred: ^bb5
    %9 = cir.get_global @".str.7" : !cir.ptr<!cir.array<!s8i x 93>> loc(#loc37)
    %10 = cir.cast array_to_ptrdecay %9 : !cir.ptr<!cir.array<!s8i x 93>> -> !cir.ptr<!s8i> loc(#loc37)
    %11 = cir.const #cir.int<202> : !s32i loc(#loc37)
    %12 = cir.get_global @".str.8" : !cir.ptr<!cir.array<!s8i x 73>> loc(#loc37)
    %13 = cir.cast array_to_ptrdecay %12 : !cir.ptr<!cir.array<!s8i x 73>> -> !cir.ptr<!s8i> loc(#loc37)
    %14 = cir.get_global @".str.9" : !cir.ptr<!cir.array<!s8i x 12>> loc(#loc37)
    %15 = cir.cast array_to_ptrdecay %14 : !cir.ptr<!cir.array<!s8i x 12>> -> !cir.ptr<!s8i> loc(#loc37)
    cir.call @_ZSt21__glibcxx_assert_failPKciS0_S0_(%10, %11, %13, %15) : (!cir.ptr<!s8i>, !s32i, !cir.ptr<!s8i>, !cir.ptr<!s8i>) -> () extra(#fn_attr1) loc(#loc37)
    cir.br ^bb7 loc(#loc37)
  ^bb7:  // 2 preds: ^bb5, ^bb6
    cir.br ^bb8 loc(#loc37)
  ^bb8:  // pred: ^bb7
    cir.br ^bb9 loc(#loc37)
  ^bb9:  // pred: ^bb8
    cir.br ^bb2 loc(#loc37)
  ^bb10:  // pred: ^bb2
    cir.br ^bb11 loc(#loc37)
  ^bb11:  // pred: ^bb10
    %16 = cir.get_member %2[0] {name = "_M_ptr"} : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> -> !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc31)
    %17 = cir.load align(8) %16 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc42)
    cir.store align(8) %17, %1 : !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc123)
    %18 = cir.load align(8) %1 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc123)
    cir.return %18 : !cir.ptr<!rec_Integer> loc(#loc123)
  } loc(#loc122)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN7Integer10setIntegerEi(%arg0: !cir.ptr<!rec_Integer> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":39:9), %arg1: !s32i loc(fused[#loc47, #loc48])) extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>>, ["this", init] {alignment = 8 : i64} loc(#loc46)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["i", init] {alignment = 4 : i64} loc(#loc125)
    cir.store %arg0, %0 : !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc49)
    cir.store %arg1, %1 : !s32i, !cir.ptr<!s32i> loc(#loc49)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc46)
    %3 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc50)
    %4 = cir.get_member %2[0] {name = "value"} : !cir.ptr<!rec_Integer> -> !cir.ptr<!s32i> loc(#loc14)
    cir.store align(4) %3, %4 : !s32i, !cir.ptr<!s32i> loc(#loc126)
    cir.return loc(#loc45)
  } loc(#loc124)
  cir.global "private" constant cir_private dso_local @".str.3" = #cir.const_array<"Integer after setInteger: \00" : !cir.array<!s8i x 27>> : !cir.array<!s8i x 27> {alignment = 1 : i64} loc(#loc52)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc127)
  cir.global "private" constant cir_private dso_local @".str.10" = #cir.const_array<"element_type &std::auto_ptr<Integer>::operator*() const [_Tp = Integer]\00" : !cir.array<!s8i x 72>> : !cir.array<!s8i x 72> {alignment = 1 : i64} loc(#loc55)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNKSt8auto_ptrI7IntegerEdeEv(%arg0: !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":187:7)) -> !cir.ptr<!rec_Integer> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>>, ["this", init] {alignment = 8 : i64} loc(#loc58)
    %1 = cir.alloca !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>>, ["__retval"] {alignment = 8 : i64} loc(#loc57)
    cir.store %arg0, %0 : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>> loc(#loc59)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>>, !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> loc(#loc58)
    cir.br ^bb1 loc(#loc55)
  ^bb1:  // pred: ^bb0
    cir.br ^bb3 loc(#loc55)
  ^bb2:  // pred: ^bb9
    %3 = cir.const #false loc(#loc55)
    cir.brcond %3 ^bb3, ^bb10 loc(#loc55)
  ^bb3:  // 2 preds: ^bb1, ^bb2
    cir.br ^bb4 loc(#loc55)
  ^bb4:  // pred: ^bb3
    cir.br ^bb5 loc(#loc55)
  ^bb5:  // pred: ^bb4
    %4 = cir.get_member %2[0] {name = "_M_ptr"} : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> -> !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc31)
    %5 = cir.load align(8) %4 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc55)
    %6 = cir.const #cir.ptr<null> : !cir.ptr<!rec_Integer> loc(#loc55)
    %7 = cir.cmp(ne, %5, %6) : !cir.ptr<!rec_Integer>, !cir.bool loc(#loc55)
    %8 = cir.unary(not, %7) : !cir.bool, !cir.bool loc(#loc55)
    cir.brcond %8 ^bb6, ^bb7 loc(#loc55)
  ^bb6:  // pred: ^bb5
    %9 = cir.get_global @".str.7" : !cir.ptr<!cir.array<!s8i x 93>> loc(#loc55)
    %10 = cir.cast array_to_ptrdecay %9 : !cir.ptr<!cir.array<!s8i x 93>> -> !cir.ptr<!s8i> loc(#loc55)
    %11 = cir.const #cir.int<189> : !s32i loc(#loc55)
    %12 = cir.get_global @".str.10" : !cir.ptr<!cir.array<!s8i x 72>> loc(#loc55)
    %13 = cir.cast array_to_ptrdecay %12 : !cir.ptr<!cir.array<!s8i x 72>> -> !cir.ptr<!s8i> loc(#loc55)
    %14 = cir.get_global @".str.9" : !cir.ptr<!cir.array<!s8i x 12>> loc(#loc55)
    %15 = cir.cast array_to_ptrdecay %14 : !cir.ptr<!cir.array<!s8i x 12>> -> !cir.ptr<!s8i> loc(#loc55)
    cir.call @_ZSt21__glibcxx_assert_failPKciS0_S0_(%10, %11, %13, %15) : (!cir.ptr<!s8i>, !s32i, !cir.ptr<!s8i>, !cir.ptr<!s8i>) -> () extra(#fn_attr1) loc(#loc55)
    cir.br ^bb7 loc(#loc55)
  ^bb7:  // 2 preds: ^bb5, ^bb6
    cir.br ^bb8 loc(#loc55)
  ^bb8:  // pred: ^bb7
    cir.br ^bb9 loc(#loc55)
  ^bb9:  // pred: ^bb8
    cir.br ^bb2 loc(#loc55)
  ^bb10:  // pred: ^bb2
    cir.br ^bb11 loc(#loc55)
  ^bb11:  // pred: ^bb10
    %16 = cir.get_member %2[0] {name = "_M_ptr"} : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> -> !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc31)
    %17 = cir.load deref align(8) %16 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc60)
    cir.store align(8) %17, %1 : !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc129)
    %18 = cir.load align(8) %1 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc129)
    cir.return %18 : !cir.ptr<!rec_Integer> loc(#loc129)
  } loc(#loc128)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNK7Integer10getIntegerEv(%arg0: !cir.ptr<!rec_Integer> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":46:8)) -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>>, ["this", init] {alignment = 8 : i64} loc(#loc64)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc63)
    cir.store %arg0, %0 : !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc65)
    %2 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc64)
    %3 = cir.get_member %2[0] {name = "value"} : !cir.ptr<!rec_Integer> -> !cir.ptr<!s32i> loc(#loc14)
    %4 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc66)
    cir.store align(4) %4, %1 : !s32i, !cir.ptr<!s32i> loc(#loc131)
    %5 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc131)
    cir.return %5 : !s32i loc(#loc131)
  } loc(#loc130)
  cir.global "private" constant cir_private dso_local @".str.4" = #cir.const_array<"\0A\0ATerminating program\00" : !cir.array<!s8i x 22>> : !cir.array<!s8i x 22> {alignment = 1 : i64} loc(#loc68)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc132)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc133)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNSt8auto_ptrI7IntegerED2Ev(%arg0: !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":176:7)) special_member<#cir.cxx_dtor<!rec_std3A3Aauto_ptr3CInteger3E>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>>, ["this", init] {alignment = 8 : i64} loc(#loc73)
    cir.store %arg0, %0 : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>> loc(#loc75)
    %1 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>>, !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> loc(#loc73)
    %2 = cir.get_member %1[0] {name = "_M_ptr"} : !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E> -> !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc31)
    %3 = cir.load align(8) %2 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc76)
    cir.call @_ZN7IntegerD2Ev(%3) : (!cir.ptr<!rec_Integer>) -> () extra(#fn_attr1) loc(#loc135)
    %4 = cir.cast bitcast %3 : !cir.ptr<!rec_Integer> -> !cir.ptr<!void> loc(#loc76)
    %5 = cir.const #cir.int<4> : !u64i loc(#loc73)
    cir.call @_ZdlPvm(%4, %5) : (!cir.ptr<!void>, !u64i) -> () extra(#fn_attr1) loc(#loc73)
    cir.return loc(#loc74)
  } loc(#loc134)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr2) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc80)
    %1 = cir.alloca !rec_std3A3Aauto_ptr3CInteger3E, !cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, ["ptrToInteger", init] {alignment = 8 : i64} loc(#loc137)
    %2 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc83)
    %3 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc84)
    %4 = cir.alloca !s32i, !cir.ptr<!s32i>, ["tmp.try.call.res"] {alignment = 4 : i64} loc(#loc85)
    %5 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc86)
    %6 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc87)
    %7 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc88)
    %8 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc112)
    %9 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 47>> loc(#loc5)
    %10 = cir.cast array_to_ptrdecay %9 : !cir.ptr<!cir.array<!s8i x 47>> -> !cir.ptr<!s8i> loc(#loc5)
    %11 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%8, %10) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc89)
    %12 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 9>> loc(#loc6)
    %13 = cir.cast array_to_ptrdecay %12 : !cir.ptr<!cir.array<!s8i x 9>> -> !cir.ptr<!s8i> loc(#loc6)
    %14 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%11, %13) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc90)
    %15 = cir.const #cir.int<4> : !u64i loc(#loc138)
    %16 = cir.call @_Znwm(%15) : (!u64i) -> !cir.ptr<!void> loc(#loc139)
    %17 = cir.cast bitcast %16 : !cir.ptr<!void> -> !cir.ptr<!rec_Integer> loc(#loc138)
    %18 = cir.const #cir.int<7> : !s32i loc(#loc94)
    cir.br ^bb1 loc(#loc139)
  ^bb1:  // pred: ^bb0
    cir.try_call @_ZN7IntegerC2Ei(%17, %18) ^bb2, ^bb3 : (!cir.ptr<!rec_Integer>, !s32i) -> () loc(#loc95)
  ^bb2:  // pred: ^bb1
    cir.br ^bb5 loc(#loc139)
  ^bb3:  // pred: ^bb1
    %exception_ptr, %type_id = cir.eh.inflight_exception cleanup loc(#loc139)
    cir.call @_ZdlPvm(%16, %15) : (!cir.ptr<!void>, !u64i) -> () extra(#fn_attr1) loc(#loc139)
    cir.br ^bb4(%exception_ptr, %type_id : !cir.ptr<!void>, !u32i) loc(#loc139)
  ^bb4(%19: !cir.ptr<!void> loc(fused[#loc93, #loc82]), %20: !u32i loc(fused[#loc93, #loc82])):  // pred: ^bb3
    cir.resume.flat %19, %20 loc(#loc139)
  ^bb5:  // pred: ^bb2
    cir.call @_ZNSt8auto_ptrI7IntegerEC2EPS0_(%1, %17) : (!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>, !cir.ptr<!rec_Integer>) -> () extra(#fn_attr1) loc(#loc93)
    %21 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc112)
    %22 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 47>> loc(#loc34)
    %23 = cir.cast array_to_ptrdecay %22 : !cir.ptr<!cir.array<!s8i x 47>> -> !cir.ptr<!s8i> loc(#loc34)
    cir.br ^bb6 loc(#loc96)
  ^bb6:  // pred: ^bb5
    %24 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%21, %23) ^bb7, ^bb8 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc83)
  ^bb7:  // pred: ^bb6
    cir.store align(8) %24, %2 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc83)
    cir.br ^bb10 loc(#loc96)
  ^bb8:  // pred: ^bb6
    %exception_ptr_0, %type_id_1 = cir.eh.inflight_exception cleanup loc(#loc96)
    cir.call @_ZNSt8auto_ptrI7IntegerED2Ev(%1) : (!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>) -> () extra(#fn_attr1) loc(#loc134)
    cir.br ^bb9(%exception_ptr_0, %type_id_1 : !cir.ptr<!void>, !u32i) loc(#loc96)
  ^bb9(%25: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5), %26: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5)):  // pred: ^bb8
    cir.resume.flat %25, %26 loc(#loc96)
  ^bb10:  // pred: ^bb7
    %27 = cir.call @_ZNKSt8auto_ptrI7IntegerEptEv(%1) : (!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>) -> !cir.ptr<!rec_Integer> extra(#fn_attr1) loc(#loc97)
    %28 = cir.const #cir.int<99> : !s32i loc(#loc98)
    cir.br ^bb11 loc(#loc96)
  ^bb11:  // pred: ^bb10
    cir.try_call @_ZN7Integer10setIntegerEi(%27, %28) ^bb12, ^bb13 : (!cir.ptr<!rec_Integer>, !s32i) -> () loc(#loc99)
  ^bb12:  // pred: ^bb11
    cir.br ^bb15 loc(#loc96)
  ^bb13:  // pred: ^bb11
    %exception_ptr_2, %type_id_3 = cir.eh.inflight_exception cleanup loc(#loc96)
    cir.br ^bb14(%exception_ptr_2, %type_id_3 : !cir.ptr<!void>, !u32i) loc(#loc96)
  ^bb14(%29: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5), %30: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5)):  // pred: ^bb13
    cir.resume.flat %29, %30 loc(#loc96)
  ^bb15:  // pred: ^bb12
    %31 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc112)
    %32 = cir.get_global @".str.3" : !cir.ptr<!cir.array<!s8i x 27>> loc(#loc52)
    %33 = cir.cast array_to_ptrdecay %32 : !cir.ptr<!cir.array<!s8i x 27>> -> !cir.ptr<!s8i> loc(#loc52)
    cir.br ^bb16 loc(#loc96)
  ^bb16:  // pred: ^bb15
    %34 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%31, %33) ^bb17, ^bb18 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc84)
  ^bb17:  // pred: ^bb16
    cir.store align(8) %34, %3 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc84)
    cir.br ^bb20 loc(#loc96)
  ^bb18:  // pred: ^bb16
    %exception_ptr_4, %type_id_5 = cir.eh.inflight_exception cleanup loc(#loc96)
    cir.br ^bb19(%exception_ptr_4, %type_id_5 : !cir.ptr<!void>, !u32i) loc(#loc96)
  ^bb19(%35: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5), %36: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5)):  // pred: ^bb18
    cir.resume.flat %35, %36 loc(#loc96)
  ^bb20:  // pred: ^bb17
    %37 = cir.load align(8) %3 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc84)
    %38 = cir.call @_ZNKSt8auto_ptrI7IntegerEdeEv(%1) : (!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>) -> !cir.ptr<!rec_Integer> extra(#fn_attr1) loc(#loc100)
    cir.br ^bb21 loc(#loc96)
  ^bb21:  // pred: ^bb20
    %39 = cir.try_call @_ZNK7Integer10getIntegerEv(%38) ^bb22, ^bb23 : (!cir.ptr<!rec_Integer>) -> !s32i loc(#loc85)
  ^bb22:  // pred: ^bb21
    cir.store align(4) %39, %4 : !s32i, !cir.ptr<!s32i> loc(#loc85)
    cir.br ^bb25 loc(#loc96)
  ^bb23:  // pred: ^bb21
    %exception_ptr_6, %type_id_7 = cir.eh.inflight_exception cleanup loc(#loc96)
    cir.br ^bb24(%exception_ptr_6, %type_id_7 : !cir.ptr<!void>, !u32i) loc(#loc96)
  ^bb24(%40: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5), %41: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5)):  // pred: ^bb23
    cir.resume.flat %40, %41 loc(#loc96)
  ^bb25:  // pred: ^bb22
    %42 = cir.load align(4) %4 : !cir.ptr<!s32i>, !s32i loc(#loc85)
    cir.br ^bb26 loc(#loc96)
  ^bb26:  // pred: ^bb25
    %43 = cir.try_call @_ZNSolsEi(%37, %42) ^bb27, ^bb28 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc86)
  ^bb27:  // pred: ^bb26
    cir.store align(8) %43, %5 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc86)
    cir.br ^bb30 loc(#loc96)
  ^bb28:  // pred: ^bb26
    %exception_ptr_8, %type_id_9 = cir.eh.inflight_exception cleanup loc(#loc96)
    cir.br ^bb29(%exception_ptr_8, %type_id_9 : !cir.ptr<!void>, !u32i) loc(#loc96)
  ^bb29(%44: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5), %45: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5)):  // pred: ^bb28
    cir.resume.flat %44, %45 loc(#loc96)
  ^bb30:  // pred: ^bb27
    %46 = cir.load align(8) %5 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc86)
    %47 = cir.get_global @".str.4" : !cir.ptr<!cir.array<!s8i x 22>> loc(#loc68)
    %48 = cir.cast array_to_ptrdecay %47 : !cir.ptr<!cir.array<!s8i x 22>> -> !cir.ptr<!s8i> loc(#loc68)
    cir.br ^bb31 loc(#loc96)
  ^bb31:  // pred: ^bb30
    %49 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%46, %48) ^bb32, ^bb33 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc87)
  ^bb32:  // pred: ^bb31
    cir.store align(8) %49, %6 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc87)
    cir.br ^bb35 loc(#loc96)
  ^bb33:  // pred: ^bb31
    %exception_ptr_10, %type_id_11 = cir.eh.inflight_exception cleanup loc(#loc96)
    cir.br ^bb34(%exception_ptr_10, %type_id_11 : !cir.ptr<!void>, !u32i) loc(#loc96)
  ^bb34(%50: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5), %51: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5)):  // pred: ^bb33
    cir.resume.flat %50, %51 loc(#loc96)
  ^bb35:  // pred: ^bb32
    %52 = cir.load align(8) %6 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc87)
    %53 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc101)
    cir.br ^bb36 loc(#loc96)
  ^bb36:  // pred: ^bb35
    %54 = cir.try_call @_ZNSolsEPFRSoS_E(%52, %53) ^bb37, ^bb38 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc88)
  ^bb37:  // pred: ^bb36
    cir.store align(8) %54, %7 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc88)
    cir.br ^bb40 loc(#loc96)
  ^bb38:  // pred: ^bb36
    %exception_ptr_12, %type_id_13 = cir.eh.inflight_exception cleanup loc(#loc96)
    cir.call @_ZNSt8auto_ptrI7IntegerED2Ev(%1) : (!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>) -> () extra(#fn_attr1) loc(#loc134)
    cir.br ^bb39(%exception_ptr_12, %type_id_13 : !cir.ptr<!void>, !u32i) loc(#loc96)
  ^bb39(%55: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5), %56: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:5)):  // pred: ^bb38
    cir.resume.flat %55, %56 loc(#loc96)
  ^bb40:  // pred: ^bb37
    %57 = cir.const #cir.int<0> : !s32i loc(#loc102)
    cir.store align(4) %57, %0 : !s32i, !cir.ptr<!s32i> loc(#loc140)
    cir.call @_ZNSt8auto_ptrI7IntegerED2Ev(%1) : (!cir.ptr<!rec_std3A3Aauto_ptr3CInteger3E>) -> () extra(#fn_attr1) loc(#loc134)
    %58 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc140)
    cir.return %58 : !s32i loc(#loc140)
  } loc(#loc136)
  cir.global "private" constant cir_private dso_local @".str.5" = #cir.const_array<"Constructor for Integer \00" : !cir.array<!s8i x 25>> : !cir.array<!s8i x 25> {alignment = 1 : i64} loc(#loc17)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN7IntegerD2Ev(%arg0: !cir.ptr<!rec_Integer> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":32:4)) special_member<#cir.cxx_dtor<!rec_Integer>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>>, ["this", init] {alignment = 8 : i64} loc(#loc77)
    cir.store %arg0, %0 : !cir.ptr<!rec_Integer>, !cir.ptr<!cir.ptr<!rec_Integer>> loc(#loc104)
    %1 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Integer>>, !cir.ptr<!rec_Integer> loc(#loc77)
    %2 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc112)
    %3 = cir.get_global @".str.6" : !cir.ptr<!cir.array<!s8i x 24>> loc(#loc105)
    %4 = cir.cast array_to_ptrdecay %3 : !cir.ptr<!cir.array<!s8i x 24>> -> !cir.ptr<!s8i> loc(#loc105)
    %5 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%2, %4) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc106)
    %6 = cir.get_member %1[0] {name = "value"} : !cir.ptr<!rec_Integer> -> !cir.ptr<!s32i> loc(#loc14)
    %7 = cir.load align(4) %6 : !cir.ptr<!s32i>, !s32i loc(#loc107)
    %8 = cir.call @_ZNSolsEi(%5, %7) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc108)
    %9 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc109)
    %10 = cir.call @_ZNSolsEPFRSoS_E(%8, %9) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc110)
    cir.return loc(#loc78)
  } loc(#loc135)
  cir.global "private" constant cir_private dso_local @".str.6" = #cir.const_array<"Destructor for Integer \00" : !cir.array<!s8i x 24>> : !cir.array<!s8i x 24> {alignment = 1 : i64} loc(#loc105)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":60:12)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":61:12)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":137:20)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":139:53)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":29:4)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":26:4)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":53:8)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":25:16)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":53:4)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":27:15)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":27:12)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":27:45)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":27:42)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":27:54)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":27:51)
#loc23 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":148:1)
#loc24 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":150:41)
#loc25 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":108:7)
#loc26 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":109:63)
#loc30 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":109:61)
#loc31 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":96:12)
#loc32 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":109:56)
#loc33 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":96:7)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":66:12)
#loc35 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/x86_64-pc-linux-gnu/bits/c++config.h":621:16)
#loc36 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/x86_64-pc-linux-gnu/bits/c++config.h":626:3)
#loc37 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":202:2)
#loc38 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":199:7)
#loc39 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":204:7)
#loc41 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":201:7)
#loc42 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":203:9)
#loc43 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":203:2)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":39:4)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":43:4)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":40:4)
#loc50 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":41:15)
#loc51 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":41:7)
#loc52 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":72:12)
#loc53 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc54 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc55 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":189:2)
#loc56 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":186:7)
#loc57 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":191:7)
#loc59 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":188:7)
#loc60 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":190:10)
#loc61 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":190:2)
#loc62 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":46:4)
#loc63 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":50:4)
#loc65 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":47:4)
#loc66 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":48:14)
#loc67 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":48:7)
#loc68 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":74:12)
#loc69 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc70 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc71 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc72 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc74 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":176:36)
#loc75 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":176:19)
#loc76 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/backward/auto_ptr.h":176:28)
#loc78 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":36:4)
#loc79 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":58:1)
#loc80 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":78:1)
#loc81 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":64:4)
#loc83 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":66:9)
#loc84 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":72:9)
#loc85 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":73:30)
#loc86 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":73:9)
#loc87 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":74:9)
#loc88 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":74:38)
#loc89 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":60:9)
#loc90 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":61:9)
#loc91 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":64:38)
#loc92 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":64:53)
#loc94 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":64:51)
#loc95 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":64:42)
#loc97 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":69:4)
#loc98 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":69:30)
#loc99 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":69:18)
#loc100 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":73:14)
#loc101 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":74:41)
#loc102 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":76:11)
#loc103 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":76:4)
#loc104 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":33:4)
#loc105 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":34:15)
#loc106 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":34:12)
#loc107 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":34:44)
#loc108 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":34:41)
#loc109 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":34:53)
#loc110 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch13_7/main.cpp":34:50)
#loc111 = loc(fused[#loc1, #loc2])
#loc112 = loc(fused[#loc3, #loc4])
#loc113 = loc(fused[#loc7, #loc8])
#loc114 = loc(fused[#loc9, #loc10])
#loc116 = loc(fused[#loc16, #loc14])
#loc117 = loc(fused[#loc23, #loc24])
#loc118 = loc(fused[#loc25, #loc26])
#loc120 = loc(fused[#loc33, #loc31])
#loc121 = loc(fused[#loc35, #loc36])
#loc122 = loc(fused[#loc38, #loc39])
#loc123 = loc(fused[#loc43, #loc42])
#loc124 = loc(fused[#loc44, #loc45])
#loc126 = loc(fused[#loc51, #loc50])
#loc127 = loc(fused[#loc53, #loc54])
#loc128 = loc(fused[#loc56, #loc57])
#loc129 = loc(fused[#loc61, #loc60])
#loc130 = loc(fused[#loc62, #loc63])
#loc131 = loc(fused[#loc67, #loc66])
#loc132 = loc(fused[#loc69, #loc70])
#loc133 = loc(fused[#loc71, #loc72])
#loc134 = loc(fused[#loc73, #loc74])
#loc135 = loc(fused[#loc77, #loc78])
#loc136 = loc(fused[#loc79, #loc80])
#loc137 = loc(fused[#loc81, #loc82])
#loc138 = loc(fused[#loc91, #loc92])
#loc140 = loc(fused[#loc103, #loc102])
