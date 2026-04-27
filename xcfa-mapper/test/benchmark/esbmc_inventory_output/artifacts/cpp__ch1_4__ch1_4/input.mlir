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
!rec_std3A3Abasic_istream3Cchar3E = !cir.record<class "std::basic_istream<char>" {!cir.vptr, !s64i, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
!rec_std3A3Abasic_ostream3Cchar3E = !cir.record<class "std::basic_ostream<char>" {!cir.vptr, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc41)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc42)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Enter first integer\0A\00" : !cir.array<!s8i x 21>> : !cir.array<!s8i x 21> {alignment = 1 : i64} loc(#loc5)
  cir.global "private" external @_ZSt3cin : !rec_std3A3Abasic_istream3Cchar3E {alignment = 8 : i64} loc(#loc43)
  cir.func private @_ZNSirsERi(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc44)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"Enter second integer\0A\00" : !cir.array<!s8i x 22>> : !cir.array<!s8i x 22> {alignment = 1 : i64} loc(#loc10)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"Sum is \00" : !cir.array<!s8i x 8>> : !cir.array<!s8i x 8> {alignment = 1 : i64} loc(#loc11)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc45)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc46)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc19)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["integer1"] {alignment = 4 : i64} loc(#loc49)
    %2 = cir.alloca !s32i, !cir.ptr<!s32i>, ["integer2"] {alignment = 4 : i64} loc(#loc50)
    %3 = cir.alloca !s32i, !cir.ptr<!s32i>, ["sum"] {alignment = 4 : i64} loc(#loc51)
    %4 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc42)
    %5 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 21>> loc(#loc5)
    %6 = cir.cast array_to_ptrdecay %5 : !cir.ptr<!cir.array<!s8i x 21>> -> !cir.ptr<!s8i> loc(#loc5)
    %7 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%4, %6) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc26)
    %8 = cir.get_global @_ZSt3cin : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc43)
    %9 = cir.call @_ZNSirsERi(%8, %1) : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc27)
    %10 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc42)
    %11 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 22>> loc(#loc10)
    %12 = cir.cast array_to_ptrdecay %11 : !cir.ptr<!cir.array<!s8i x 22>> -> !cir.ptr<!s8i> loc(#loc10)
    %13 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%10, %12) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc28)
    %14 = cir.get_global @_ZSt3cin : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc43)
    %15 = cir.call @_ZNSirsERi(%14, %2) : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc29)
    %16 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc30)
    %17 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc31)
    %18 = cir.binop(add, %16, %17) nsw : !s32i loc(#loc30)
    cir.store align(4) %18, %3 : !s32i, !cir.ptr<!s32i> loc(#loc52)
    %19 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc42)
    %20 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 8>> loc(#loc11)
    %21 = cir.cast array_to_ptrdecay %20 : !cir.ptr<!cir.array<!s8i x 8>> -> !cir.ptr<!s8i> loc(#loc11)
    %22 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%19, %21) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
    %23 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc34)
    %24 = cir.call @_ZNSolsEi(%22, %23) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
    %25 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc53)
    %26 = cir.call @_ZNSolsEPFRSoS_E(%24, %25) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc38)
    %27 = cir.const #cir.int<0> : !s32i loc(#loc39)
    cir.store align(4) %27, %0 : !s32i, !cir.ptr<!s32i> loc(#loc54)
    %28 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc54)
    cir.return %28 : !s32i loc(#loc54)
  } loc(#loc48)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":19:17)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:3)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:18)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":182:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":183:26)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":22:17)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":27:17)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":13:1)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":31:1)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":15:4)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":15:8)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":16:4)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":16:8)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":17:4)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":17:8)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":19:14)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":20:13)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":22:14)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":23:13)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":25:10)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":25:21)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":25:4)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":27:14)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":27:30)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":27:27)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":27:37)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":27:42)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":27:34)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":29:11)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_4/main.cpp":29:4)
#loc41 = loc(fused[#loc1, #loc2])
#loc42 = loc(fused[#loc3, #loc4])
#loc43 = loc(fused[#loc6, #loc7])
#loc44 = loc(fused[#loc8, #loc9])
#loc45 = loc(fused[#loc12, #loc13])
#loc46 = loc(fused[#loc14, #loc15])
#loc47 = loc(fused[#loc16, #loc17])
#loc48 = loc(fused[#loc18, #loc19])
#loc49 = loc(fused[#loc20, #loc21])
#loc50 = loc(fused[#loc22, #loc23])
#loc51 = loc(fused[#loc24, #loc25])
#loc52 = loc(fused[#loc32, #loc31])
#loc53 = loc(fused[#loc36, #loc37])
#loc54 = loc(fused[#loc40, #loc39])
