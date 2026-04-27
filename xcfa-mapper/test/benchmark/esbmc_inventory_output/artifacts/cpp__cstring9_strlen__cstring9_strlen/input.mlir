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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.global "private" constant cir_private @__const.main.szInput = #cir.const_array<"test of the string" : !cir.array<!s8i x 18>, trailing_zeros> : !cir.array<!s8i x 256> loc(#loc33)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc34)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc35)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"The sentence entered is \00" : !cir.array<!s8i x 25>> : !cir.array<!s8i x 25> {alignment = 1 : i64} loc(#loc7)
  cir.func private @_ZNSolsEj(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !u32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc36)
  cir.func private @strlen(!cir.ptr<!s8i>) -> !u64i extra(#fn_attr) loc(#loc37)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<" characters long\00" : !cir.array<!s8i x 17>> : !cir.array<!s8i x 17> {alignment = 1 : i64} loc(#loc12)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc38)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc39)
  cir.func private @__assert_fail(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) extra(#fn_attr) loc(#loc40)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"(unsigned)strlen(szInput)==18\00" : !cir.array<!s8i x 30>> : !cir.array<!s8i x 30> {alignment = 1 : i64} loc(#loc19)
  cir.global "private" constant cir_private dso_local @".str.3" = #cir.const_array<"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp\00" : !cir.array<!s8i x 94>> : !cir.array<!s8i x 94> {alignment = 1 : i64} loc(#loc20)
  cir.global "private" constant cir_private dso_local @".str.4" = #cir.const_array<"int main()\00" : !cir.array<!s8i x 11>> : !cir.array<!s8i x 11> {alignment = 1 : i64} loc(#loc19)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc22)
    %1 = cir.alloca !cir.array<!s8i x 256>, !cir.ptr<!cir.array<!s8i x 256>>, ["szInput", init] {alignment = 16 : i64} loc(#loc33)
    %2 = cir.get_global @__const.main.szInput : !cir.ptr<!cir.array<!s8i x 256>> loc(#loc33)
    cir.copy %2 to %1 : !cir.ptr<!cir.array<!s8i x 256>> loc(#loc33)
    %3 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
    %4 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 25>> loc(#loc7)
    %5 = cir.cast array_to_ptrdecay %4 : !cir.ptr<!cir.array<!s8i x 25>> -> !cir.ptr<!s8i> loc(#loc7)
    %6 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%3, %5) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc23)
    %7 = cir.get_global @strlen : !cir.ptr<!cir.func<(!cir.ptr<!s8i>) -> !u64i>> loc(#loc24)
    %8 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 256>> -> !cir.ptr<!s8i> loc(#loc25)
    %9 = cir.call @strlen(%8) : (!cir.ptr<!s8i>) -> !u64i side_effect(pure) extra(#fn_attr) loc(#loc24)
    %10 = cir.cast integral %9 : !u64i -> !u32i loc(#loc24)
    %11 = cir.call @_ZNSolsEj(%6, %10) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !u32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc26)
    %12 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 17>> loc(#loc12)
    %13 = cir.cast array_to_ptrdecay %12 : !cir.ptr<!cir.array<!s8i x 17>> -> !cir.ptr<!s8i> loc(#loc12)
    %14 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%11, %13) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc27)
    %15 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc42)
    %16 = cir.call @_ZNSolsEPFRSoS_E(%14, %15) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc30)
    %17 = cir.get_global @strlen : !cir.ptr<!cir.func<(!cir.ptr<!s8i>) -> !u64i>> loc(#loc19)
    %18 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 256>> -> !cir.ptr<!s8i> loc(#loc19)
    %19 = cir.call @strlen(%18) : (!cir.ptr<!s8i>) -> !u64i side_effect(pure) extra(#fn_attr) loc(#loc19)
    %20 = cir.cast integral %19 : !u64i -> !u32i loc(#loc19)
    %21 = cir.const #cir.int<18> : !s32i loc(#loc19)
    %22 = cir.cast integral %21 : !s32i -> !u32i loc(#loc19)
    %23 = cir.cmp(eq, %20, %22) : !u32i, !cir.bool loc(#loc19)
    cir.brcond %23 ^bb1, ^bb2 loc(#loc19)
  ^bb1:  // pred: ^bb0
    %24 = cir.const #cir.int<0> : !s32i loc(#loc19)
    cir.br ^bb3 loc(#loc19)
  ^bb2:  // pred: ^bb0
    %25 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 30>> loc(#loc19)
    %26 = cir.cast array_to_ptrdecay %25 : !cir.ptr<!cir.array<!s8i x 30>> -> !cir.ptr<!s8i> loc(#loc19)
    %27 = cir.const #cir.global_view<@".str.3"> : !cir.ptr<!s8i> loc(#loc19)
    %28 = cir.const #cir.int<17> : !u32i loc(#loc19)
    %29 = cir.get_global @".str.4" : !cir.ptr<!cir.array<!s8i x 11>> loc(#loc19)
    %30 = cir.cast array_to_ptrdecay %29 : !cir.ptr<!cir.array<!s8i x 11>> -> !cir.ptr<!s8i> loc(#loc19)
    cir.call @__assert_fail(%26, %27, %28, %30) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) -> () extra(#fn_attr) loc(#loc19)
    cir.br ^bb3 loc(#loc19)
  ^bb3:  // 2 preds: ^bb1, ^bb2
    %31 = cir.const #cir.int<0> : !s32i loc(#loc31)
    cir.store align(4) %31, %0 : !s32i, !cir.ptr<!s32i> loc(#loc43)
    %32 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc43)
    cir.return %32 : !s32i loc(#loc43)
  } loc(#loc41)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":15:3)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":15:23)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:16)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":199:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":205:7)
#loc10 = loc("/usr/include/string.h":439:1)
#loc11 = loc("/usr/include/string.h":440:33)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:75)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc17 = loc("/usr/include/assert.h":95:1)
#loc18 = loc("/usr/include/assert.h":97:45)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":17:3)
#loc20 = loc(unknown)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":13:1)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":20:1)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:13)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:56)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:63)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:43)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:72)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:97)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:102)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":16:94)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":19:10)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring9_strlen/main.cpp":19:3)
#loc33 = loc(fused[#loc1, #loc2])
#loc34 = loc(fused[#loc3, #loc4])
#loc35 = loc(fused[#loc5, #loc6])
#loc36 = loc(fused[#loc8, #loc9])
#loc37 = loc(fused[#loc10, #loc11])
#loc38 = loc(fused[#loc13, #loc14])
#loc39 = loc(fused[#loc15, #loc16])
#loc40 = loc(fused[#loc17, #loc18])
#loc41 = loc(fused[#loc21, #loc22])
#loc42 = loc(fused[#loc28, #loc29])
#loc43 = loc(fused[#loc32, #loc31])
