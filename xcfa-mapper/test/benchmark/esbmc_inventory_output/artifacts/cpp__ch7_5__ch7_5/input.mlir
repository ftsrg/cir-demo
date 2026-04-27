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
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":44:12)
#loc4 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":44:19)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":44:22)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":44:26)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":23:4)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":31:9)
!rec_Count = !cir.record<class "Count" {!s32i}>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc49 = loc(fused[#loc3, #loc4])
#loc50 = loc(fused[#loc5, #loc6])
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func no_inline optnone dso_local @_Z4setXR5Counti(%arg0: !cir.ptr<!rec_Count> loc(fused[#loc3, #loc4]), %arg1: !s32i loc(fused[#loc5, #loc6])) extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Count>, !cir.ptr<!cir.ptr<!rec_Count>>, ["c", init, const] {alignment = 8 : i64} loc(#loc49)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["val", init] {alignment = 4 : i64} loc(#loc50)
    cir.store %arg0, %0 : !cir.ptr<!rec_Count>, !cir.ptr<!cir.ptr<!rec_Count>> loc(#loc7)
    cir.store %arg1, %1 : !s32i, !cir.ptr<!s32i> loc(#loc7)
    %2 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc8)
    %3 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Count>>, !cir.ptr<!rec_Count> loc(#loc9)
    %4 = cir.get_member %3[0] {name = "x"} : !cir.ptr<!rec_Count> -> !cir.ptr<!s32i> loc(#loc10)
    cir.store align(4) %2, %4 : !s32i, !cir.ptr<!s32i> loc(#loc51)
    cir.return loc(#loc2)
  } loc(#loc48)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN5CountC2Ev(%arg0: !cir.ptr<!rec_Count> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":23:4)) special_member<#cir.cxx_ctor<!rec_Count, default>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Count>, !cir.ptr<!cir.ptr<!rec_Count>>, ["this", init] {alignment = 8 : i64} loc(#loc11)
    cir.store %arg0, %0 : !cir.ptr<!rec_Count>, !cir.ptr<!cir.ptr<!rec_Count>> loc(#loc13)
    %1 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Count>>, !cir.ptr<!rec_Count> loc(#loc11)
    %2 = cir.get_member %1[0] {name = "x"} : !cir.ptr<!rec_Count> -> !cir.ptr<!s32i> loc(#loc10)
    %3 = cir.const #cir.int<0> : !s32i loc(#loc14)
    cir.store align(4) %3, %2 : !s32i, !cir.ptr<!s32i> loc(#loc53)
    cir.return loc(#loc12)
  } loc(#loc52)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc54)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc55)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"counter.x after instantiation: \00" : !cir.array<!s8i x 32>> : !cir.array<!s8i x 32> {alignment = 1 : i64} loc(#loc20)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc56)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc57)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc58)
  cir.func no_inline optnone linkonce_odr dso_local @_ZNK5Count5printEv(%arg0: !cir.ptr<!rec_Count> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":31:9)) extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_Count>, !cir.ptr<!cir.ptr<!rec_Count>>, ["this", init] {alignment = 8 : i64} loc(#loc29)
    cir.store %arg0, %0 : !cir.ptr<!rec_Count>, !cir.ptr<!cir.ptr<!rec_Count>> loc(#loc30)
    %1 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Count>>, !cir.ptr<!rec_Count> loc(#loc29)
    %2 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
    %3 = cir.get_member %1[0] {name = "x"} : !cir.ptr<!rec_Count> -> !cir.ptr<!s32i> loc(#loc10)
    %4 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc31)
    %5 = cir.call @_ZNSolsEi(%2, %4) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc32)
    %6 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc33)
    %7 = cir.call @_ZNSolsEPFRSoS_E(%5, %6) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc34)
    cir.return loc(#loc28)
  } loc(#loc59)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"counter.x after call to setX friend function: \00" : !cir.array<!s8i x 47>> : !cir.array<!s8i x 47> {alignment = 1 : i64} loc(#loc35)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc37)
    %1 = cir.alloca !rec_Count, !cir.ptr<!rec_Count>, ["counter", init] {alignment = 4 : i64} loc(#loc61)
    cir.call @_ZN5CountC2Ev(%1) : (!cir.ptr<!rec_Count>) -> () loc(#loc39)
    %2 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
    %3 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 32>> loc(#loc20)
    %4 = cir.cast array_to_ptrdecay %3 : !cir.ptr<!cir.array<!s8i x 32>> -> !cir.ptr<!s8i> loc(#loc20)
    %5 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%2, %4) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc40)
    cir.call @_ZNK5Count5printEv(%1) : (!cir.ptr<!rec_Count>) -> () loc(#loc41)
    %6 = cir.const #cir.int<8> : !s32i loc(#loc42)
    cir.call @_Z4setXR5Counti(%1, %6) : (!cir.ptr<!rec_Count>, !s32i) -> () loc(#loc43)
    %7 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
    %8 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 47>> loc(#loc35)
    %9 = cir.cast array_to_ptrdecay %8 : !cir.ptr<!cir.array<!s8i x 47>> -> !cir.ptr<!s8i> loc(#loc35)
    %10 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%7, %9) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc44)
    cir.call @_ZNK5Count5printEv(%1) : (!cir.ptr<!rec_Count>) -> () loc(#loc45)
    %11 = cir.const #cir.int<0> : !s32i loc(#loc46)
    cir.store align(4) %11, %0 : !s32i, !cir.ptr<!s32i> loc(#loc62)
    %12 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc62)
    cir.return %12 : !s32i loc(#loc62)
  } loc(#loc60)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":44:1)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":48:1)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":45:1)
#loc8 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":46:10)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":46:4)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":38:8)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":28:4)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":25:4)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":24:12)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":38:4)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc18 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc19 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":54:12)
#loc21 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc22 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc23 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc24 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc25 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc26 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":31:4)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":35:4)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":32:4)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":33:15)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":33:12)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":33:20)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":33:17)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":59:12)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":50:1)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":64:1)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":52:4)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":52:10)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":54:9)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":55:12)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":57:19)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":57:4)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":59:9)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":60:12)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":62:11)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch7_5/main.cpp":62:4)
#loc48 = loc(fused[#loc1, #loc2])
#loc51 = loc(fused[#loc9, #loc8])
#loc52 = loc(fused[#loc11, #loc12])
#loc53 = loc(fused[#loc15, #loc10])
#loc54 = loc(fused[#loc16, #loc17])
#loc55 = loc(fused[#loc18, #loc19])
#loc56 = loc(fused[#loc21, #loc22])
#loc57 = loc(fused[#loc23, #loc24])
#loc58 = loc(fused[#loc25, #loc26])
#loc59 = loc(fused[#loc27, #loc28])
#loc60 = loc(fused[#loc36, #loc37])
#loc61 = loc(fused[#loc38, #loc39])
#loc62 = loc(fused[#loc47, #loc46])
