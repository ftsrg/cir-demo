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
#fn_attr1 = #cir<extra({nothrow = #cir.nothrow, uwtable = #cir.uwtable<async>})>
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.global "private" constant cir_private @__const.main.cset = #cir.const_array<"1234567890\00" : !cir.array<!s8i x 11>> : !cir.array<!s8i x 11> loc(#loc39)
  cir.global "private" constant cir_private @__const.main.strtext = #cir.const_array<"129th\00" : !cir.array<!s8i x 6>> : !cir.array<!s8i x 6> loc(#loc40)
  cir.func private @strspn(!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !u64i extra(#fn_attr) loc(#loc41)
  cir.func private @__assert_fail(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) extra(#fn_attr) loc(#loc42)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"i==3\00" : !cir.array<!s8i x 5>> : !cir.array<!s8i x 5> {alignment = 1 : i64} loc(#loc9)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp\00" : !cir.array<!s8i x 94>> : !cir.array<!s8i x 94> {alignment = 1 : i64} loc(#loc10)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"int main()\00" : !cir.array<!s8i x 11>> : !cir.array<!s8i x 11> {alignment = 1 : i64} loc(#loc9)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc44)
  cir.global "private" constant cir_private dso_local @".str.3" = #cir.const_array<"The length of initial number is \00" : !cir.array<!s8i x 33>> : !cir.array<!s8i x 33> {alignment = 1 : i64} loc(#loc15)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc45)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc46)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc23)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["i"] {alignment = 4 : i64} loc(#loc49)
    %2 = cir.alloca !cir.array<!s8i x 6>, !cir.ptr<!cir.array<!s8i x 6>>, ["strtext", init] {alignment = 1 : i64} loc(#loc40)
    %3 = cir.alloca !cir.array<!s8i x 11>, !cir.ptr<!cir.array<!s8i x 11>>, ["cset", init] {alignment = 1 : i64} loc(#loc39)
    %4 = cir.get_global @__const.main.strtext : !cir.ptr<!cir.array<!s8i x 6>> loc(#loc40)
    cir.copy %4 to %2 : !cir.ptr<!cir.array<!s8i x 6>> loc(#loc40)
    %5 = cir.get_global @__const.main.cset : !cir.ptr<!cir.array<!s8i x 11>> loc(#loc39)
    cir.copy %5 to %3 : !cir.ptr<!cir.array<!s8i x 11>> loc(#loc39)
    %6 = cir.get_global @strspn : !cir.ptr<!cir.func<(!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !u64i>> loc(#loc26)
    %7 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 6>> -> !cir.ptr<!s8i> loc(#loc27)
    %8 = cir.cast array_to_ptrdecay %3 : !cir.ptr<!cir.array<!s8i x 11>> -> !cir.ptr<!s8i> loc(#loc28)
    %9 = cir.call @strspn(%7, %8) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !u64i side_effect(pure) extra(#fn_attr) loc(#loc26)
    %10 = cir.cast integral %9 : !u64i -> !s32i loc(#loc26)
    cir.store align(4) %10, %1 : !s32i, !cir.ptr<!s32i> loc(#loc50)
    %11 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc9)
    %12 = cir.const #cir.int<3> : !s32i loc(#loc9)
    %13 = cir.cmp(eq, %11, %12) : !s32i, !cir.bool loc(#loc9)
    cir.brcond %13 ^bb1, ^bb2 loc(#loc9)
  ^bb1:  // pred: ^bb0
    %14 = cir.const #cir.int<0> : !s32i loc(#loc9)
    cir.br ^bb3 loc(#loc9)
  ^bb2:  // pred: ^bb0
    %15 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 5>> loc(#loc9)
    %16 = cir.cast array_to_ptrdecay %15 : !cir.ptr<!cir.array<!s8i x 5>> -> !cir.ptr<!s8i> loc(#loc9)
    %17 = cir.const #cir.global_view<@".str.1"> : !cir.ptr<!s8i> loc(#loc9)
    %18 = cir.const #cir.int<20> : !u32i loc(#loc9)
    %19 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 11>> loc(#loc9)
    %20 = cir.cast array_to_ptrdecay %19 : !cir.ptr<!cir.array<!s8i x 11>> -> !cir.ptr<!s8i> loc(#loc9)
    cir.call @__assert_fail(%16, %17, %18, %20) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) -> () extra(#fn_attr) loc(#loc9)
    cir.br ^bb3 loc(#loc9)
  ^bb3:  // 2 preds: ^bb1, ^bb2
    %21 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc44)
    %22 = cir.get_global @".str.3" : !cir.ptr<!cir.array<!s8i x 33>> loc(#loc15)
    %23 = cir.cast array_to_ptrdecay %22 : !cir.ptr<!cir.array<!s8i x 33>> -> !cir.ptr<!s8i> loc(#loc15)
    %24 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%21, %23) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc31)
    %25 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc32)
    %26 = cir.call @_ZNSolsEi(%24, %25) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
    %27 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc51)
    %28 = cir.call @_ZNSolsEPFRSoS_E(%26, %27) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc36)
    %29 = cir.const #cir.int<0> : !s32i loc(#loc37)
    cir.store align(4) %29, %0 : !s32i, !cir.ptr<!s32i> loc(#loc52)
    %30 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc52)
    cir.return %30 : !s32i loc(#loc52)
  } loc(#loc48)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":17:3)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":17:17)
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":16:3)
#loc4 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":16:20)
#loc5 = loc("/usr/include/string.h":320:1)
#loc6 = loc("/usr/include/string.h":321:33)
#loc7 = loc("/usr/include/assert.h":95:1)
#loc8 = loc("/usr/include/assert.h":97:45)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":20:3)
#loc10 = loc(unknown)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":21:16)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc18 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc19 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc20 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc21 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":13:1)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":23:1)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":15:3)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":15:7)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":19:7)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":19:15)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":19:23)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":19:3)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":19:27)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":21:13)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":21:54)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":21:51)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":21:59)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":21:64)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":21:56)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":22:10)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring8_strcpn/main.cpp":22:3)
#loc39 = loc(fused[#loc1, #loc2])
#loc40 = loc(fused[#loc3, #loc4])
#loc41 = loc(fused[#loc5, #loc6])
#loc42 = loc(fused[#loc7, #loc8])
#loc43 = loc(fused[#loc11, #loc12])
#loc44 = loc(fused[#loc13, #loc14])
#loc45 = loc(fused[#loc16, #loc17])
#loc46 = loc(fused[#loc18, #loc19])
#loc47 = loc(fused[#loc20, #loc21])
#loc48 = loc(fused[#loc22, #loc23])
#loc49 = loc(fused[#loc24, #loc25])
#loc50 = loc(fused[#loc29, #loc30])
#loc51 = loc(fused[#loc34, #loc35])
#loc52 = loc(fused[#loc38, #loc37])
