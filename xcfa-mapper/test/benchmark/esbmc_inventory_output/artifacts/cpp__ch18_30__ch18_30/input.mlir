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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.global "private" constant cir_private @__const.main.s2 = #cir.const_array<"Copy this string\00" : !cir.array<!s8i x 17>> : !cir.array<!s8i x 17> loc(#loc38)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc39)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc40)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc41)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"After s2 is copied into s1 with memcpy,\0A\00" : !cir.array<!s8i x 41>> : !cir.array<!s8i x 41> {alignment = 1 : i64} loc(#loc9)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"s1 contains \22\00" : !cir.array<!s8i x 14>> : !cir.array<!s8i x 14> {alignment = 1 : i64} loc(#loc10)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc42)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
  cir.func private @__assert_fail(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) extra(#fn_attr) loc(#loc44)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"s1==s2\00" : !cir.array<!s8i x 7>> : !cir.array<!s8i x 7> {alignment = 1 : i64} loc(#loc17)
  cir.global "private" constant cir_private dso_local @".str.3" = #cir.const_array<"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp\00" : !cir.array<!s8i x 86>> : !cir.array<!s8i x 86> {alignment = 1 : i64} loc(#loc18)
  cir.global "private" constant cir_private dso_local @".str.4" = #cir.const_array<"int main()\00" : !cir.array<!s8i x 11>> : !cir.array<!s8i x 11> {alignment = 1 : i64} loc(#loc17)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc20)
    %1 = cir.alloca !cir.array<!s8i x 17>, !cir.ptr<!cir.array<!s8i x 17>>, ["s1"] {alignment = 16 : i64} loc(#loc46)
    %2 = cir.alloca !cir.array<!s8i x 17>, !cir.ptr<!cir.array<!s8i x 17>>, ["s2", init] {alignment = 16 : i64} loc(#loc38)
    %3 = cir.get_global @__const.main.s2 : !cir.ptr<!cir.array<!s8i x 17>> loc(#loc38)
    cir.copy %3 to %2 : !cir.ptr<!cir.array<!s8i x 17>> loc(#loc38)
    %4 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 17>> -> !cir.ptr<!s8i> loc(#loc23)
    %5 = cir.cast bitcast %4 : !cir.ptr<!s8i> -> !cir.ptr<!void> loc(#loc23)
    %6 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 17>> -> !cir.ptr<!s8i> loc(#loc24)
    %7 = cir.cast bitcast %6 : !cir.ptr<!s8i> -> !cir.ptr<!void> loc(#loc24)
    %8 = cir.const #cir.int<17> : !s32i loc(#loc25)
    %9 = cir.cast integral %8 : !s32i -> !u64i loc(#loc25)
    cir.libc.memcpy %9 bytes from %7 to %5 : !u64i, !cir.ptr<!void> -> !cir.ptr<!void> loc(#loc47)
    %10 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc41)
    %11 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 41>> loc(#loc9)
    %12 = cir.cast array_to_ptrdecay %11 : !cir.ptr<!cir.array<!s8i x 41>> -> !cir.ptr<!s8i> loc(#loc9)
    %13 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%10, %12) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc28)
    %14 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 14>> loc(#loc10)
    %15 = cir.cast array_to_ptrdecay %14 : !cir.ptr<!cir.array<!s8i x 14>> -> !cir.ptr<!s8i> loc(#loc10)
    %16 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%13, %15) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc29)
    %17 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 17>> -> !cir.ptr<!s8i> loc(#loc30)
    %18 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%16, %17) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc31)
    %19 = cir.const #cir.int<34> : !s8i loc(#loc32)
    %20 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(%18, %19) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
    %21 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc34)
    %22 = cir.call @_ZNSolsEPFRSoS_E(%20, %21) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
    %23 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 7>> loc(#loc17)
    %24 = cir.cast array_to_ptrdecay %23 : !cir.ptr<!cir.array<!s8i x 7>> -> !cir.ptr<!s8i> loc(#loc17)
    %25 = cir.const #cir.global_view<@".str.3"> : !cir.ptr<!s8i> loc(#loc17)
    %26 = cir.const #cir.int<28> : !u32i loc(#loc17)
    %27 = cir.get_global @".str.4" : !cir.ptr<!cir.array<!s8i x 11>> loc(#loc17)
    %28 = cir.cast array_to_ptrdecay %27 : !cir.ptr<!cir.array<!s8i x 11>> -> !cir.ptr<!s8i> loc(#loc17)
    cir.call @__assert_fail(%24, %25, %26, %28) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) -> () extra(#fn_attr) loc(#loc17)
    %29 = cir.const #cir.int<0> : !s32i loc(#loc36)
    cir.store align(4) %29, %0 : !s32i, !cir.ptr<!s32i> loc(#loc48)
    %30 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc48)
    cir.return %30 : !s32i loc(#loc48)
  } loc(#loc45)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":21:4)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":21:16)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":641:5)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":648:5)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":25:12)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":26:12)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc15 = loc("/usr/include/assert.h":95:1)
#loc16 = loc("/usr/include/assert.h":97:45)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":28:4)
#loc18 = loc(unknown)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":18:1)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":32:1)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":20:4)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":20:16)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":23:12)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":23:16)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":23:20)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":23:4)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":23:23)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":25:9)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":26:9)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":26:32)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":26:29)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":26:38)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":26:35)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":26:46)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":26:43)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":30:11)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch18_30/main.cpp":30:4)
#loc38 = loc(fused[#loc1, #loc2])
#loc39 = loc(fused[#loc3, #loc4])
#loc40 = loc(fused[#loc5, #loc6])
#loc41 = loc(fused[#loc7, #loc8])
#loc42 = loc(fused[#loc11, #loc12])
#loc43 = loc(fused[#loc13, #loc14])
#loc44 = loc(fused[#loc15, #loc16])
#loc45 = loc(fused[#loc19, #loc20])
#loc46 = loc(fused[#loc21, #loc22])
#loc47 = loc(fused[#loc26, #loc27])
#loc48 = loc(fused[#loc37, #loc36])
