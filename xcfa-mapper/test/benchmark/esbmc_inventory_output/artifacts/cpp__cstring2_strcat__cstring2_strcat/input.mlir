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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.global "private" constant cir_private @__const.main.str = #cir.const_array<"these " : !cir.array<!s8i x 6>, trailing_zeros> : !cir.array<!s8i x 80> loc(#loc31)
  cir.func private @strcat(!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !cir.ptr<!s8i> extra(#fn_attr) loc(#loc32)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"strings \00" : !cir.array<!s8i x 9>> : !cir.array<!s8i x 9> {alignment = 1 : i64} loc(#loc5)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"are \00" : !cir.array<!s8i x 5>> : !cir.array<!s8i x 5> {alignment = 1 : i64} loc(#loc6)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"concatenated.\00" : !cir.array<!s8i x 14>> : !cir.array<!s8i x 14> {alignment = 1 : i64} loc(#loc7)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc34)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc36)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc17)
    %1 = cir.alloca !cir.array<!s8i x 80>, !cir.ptr<!cir.array<!s8i x 80>>, ["str", init] {alignment = 16 : i64} loc(#loc31)
    %2 = cir.get_global @__const.main.str : !cir.ptr<!cir.array<!s8i x 80>> loc(#loc31)
    cir.copy %2 to %1 : !cir.ptr<!cir.array<!s8i x 80>> loc(#loc31)
    %3 = cir.get_global @strcat : !cir.ptr<!cir.func<(!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !cir.ptr<!s8i>>> loc(#loc18)
    %4 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 80>> -> !cir.ptr<!s8i> loc(#loc19)
    %5 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 9>> loc(#loc5)
    %6 = cir.cast array_to_ptrdecay %5 : !cir.ptr<!cir.array<!s8i x 9>> -> !cir.ptr<!s8i> loc(#loc5)
    %7 = cir.call @strcat(%4, %6) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !cir.ptr<!s8i> extra(#fn_attr) loc(#loc18)
    %8 = cir.get_global @strcat : !cir.ptr<!cir.func<(!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !cir.ptr<!s8i>>> loc(#loc20)
    %9 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 80>> -> !cir.ptr<!s8i> loc(#loc21)
    %10 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 5>> loc(#loc6)
    %11 = cir.cast array_to_ptrdecay %10 : !cir.ptr<!cir.array<!s8i x 5>> -> !cir.ptr<!s8i> loc(#loc6)
    %12 = cir.call @strcat(%9, %11) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !cir.ptr<!s8i> extra(#fn_attr) loc(#loc20)
    %13 = cir.get_global @strcat : !cir.ptr<!cir.func<(!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !cir.ptr<!s8i>>> loc(#loc22)
    %14 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 80>> -> !cir.ptr<!s8i> loc(#loc23)
    %15 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 14>> loc(#loc7)
    %16 = cir.cast array_to_ptrdecay %15 : !cir.ptr<!cir.array<!s8i x 14>> -> !cir.ptr<!s8i> loc(#loc7)
    %17 = cir.call @strcat(%14, %16) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>) -> !cir.ptr<!s8i> extra(#fn_attr) loc(#loc22)
    %18 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc34)
    %19 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 80>> -> !cir.ptr<!s8i> loc(#loc24)
    %20 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%18, %19) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc25)
    %21 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc38)
    %22 = cir.call @_ZNSolsEPFRSoS_E(%20, %21) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc28)
    %23 = cir.const #cir.int<0> : !s32i loc(#loc29)
    cir.store align(4) %23, %0 : !s32i, !cir.ptr<!s32i> loc(#loc39)
    %24 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc39)
    cir.return %24 : !s32i loc(#loc39)
  } loc(#loc37)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":14:3)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":14:18)
#loc3 = loc("/usr/include/string.h":164:1)
#loc4 = loc("/usr/include/string.h":165:14)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":15:15)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":16:15)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":17:15)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc10 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":12:1)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":20:1)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":15:3)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":15:11)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":16:3)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":16:11)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":17:3)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":17:11)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":18:16)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":18:13)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":18:23)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":18:28)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":18:20)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":19:10)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring2_strcat/main.cpp":19:3)
#loc31 = loc(fused[#loc1, #loc2])
#loc32 = loc(fused[#loc3, #loc4])
#loc33 = loc(fused[#loc8, #loc9])
#loc34 = loc(fused[#loc10, #loc11])
#loc35 = loc(fused[#loc12, #loc13])
#loc36 = loc(fused[#loc14, #loc15])
#loc37 = loc(fused[#loc16, #loc17])
#loc38 = loc(fused[#loc26, #loc27])
#loc39 = loc(fused[#loc30, #loc29])
