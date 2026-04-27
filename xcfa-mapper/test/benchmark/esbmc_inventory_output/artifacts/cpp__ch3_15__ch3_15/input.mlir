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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc29)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc30)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"function1 takes no arguments\00" : !cir.array<!s8i x 29>> : !cir.array<!s8i x 29> {alignment = 1 : i64} loc(#loc5)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc31)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc32)
  cir.func no_inline optnone dso_local @_Z9function1v() extra(#fn_attr) {
    %0 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc30)
    %1 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 29>> loc(#loc5)
    %2 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 29>> -> !cir.ptr<!s8i> loc(#loc5)
    %3 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%0, %2) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc12)
    %4 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc13)
    %5 = cir.call @_ZNSolsEPFRSoS_E(%3, %4) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc14)
    cir.return loc(#loc15)
  } loc(#loc33)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"function2 also takes no arguments\00" : !cir.array<!s8i x 34>> : !cir.array<!s8i x 34> {alignment = 1 : i64} loc(#loc16)
  cir.func no_inline optnone dso_local @_Z9function2v() extra(#fn_attr) {
    %0 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc30)
    %1 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 34>> loc(#loc16)
    %2 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 34>> -> !cir.ptr<!s8i> loc(#loc16)
    %3 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%0, %2) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc19)
    %4 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc20)
    %5 = cir.call @_ZNSolsEPFRSoS_E(%3, %4) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc21)
    cir.return loc(#loc22)
  } loc(#loc34)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc24)
    cir.call @_Z9function1v() : () -> () loc(#loc25)
    cir.call @_Z9function2v() : () -> () loc(#loc26)
    %1 = cir.const #cir.int<0> : !s32i loc(#loc27)
    cir.store align(4) %1, %0 : !s32i, !cir.ptr<!s32i> loc(#loc36)
    %2 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc36)
    cir.return %2 : !s32i loc(#loc36)
  } loc(#loc35)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":31:12)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":15:1)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":15:16)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":31:9)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":31:46)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":31:43)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":33:1)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":39:12)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":16:1)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":16:22)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":39:9)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":39:51)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":39:48)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":41:1)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":18:1)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":25:1)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":20:4)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":21:4)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":23:11)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch3_15/main.cpp":23:4)
#loc29 = loc(fused[#loc1, #loc2])
#loc30 = loc(fused[#loc3, #loc4])
#loc31 = loc(fused[#loc6, #loc7])
#loc32 = loc(fused[#loc8, #loc9])
#loc33 = loc(fused[#loc10, #loc11])
#loc34 = loc(fused[#loc17, #loc18])
#loc35 = loc(fused[#loc23, #loc24])
#loc36 = loc(fused[#loc28, #loc27])
