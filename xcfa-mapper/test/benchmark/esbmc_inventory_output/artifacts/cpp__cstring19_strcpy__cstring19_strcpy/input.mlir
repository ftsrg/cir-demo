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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.global "private" constant cir_private @__const.main.str1 = #cir.const_array<"Sample string\00" : !cir.array<!s8i x 14>> : !cir.array<!s8i x 14> loc(#loc44)
  cir.func private @strncpy(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u64i) -> !cir.ptr<!s8i> extra(#fn_attr) loc(#loc45)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"copy successful\00" : !cir.array<!s8i x 16>> : !cir.array<!s8i x 16> {alignment = 1 : i64} loc(#loc5)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc46)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc47)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"\0Astr1: \00" : !cir.array<!s8i x 8>> : !cir.array<!s8i x 8> {alignment = 1 : i64} loc(#loc10)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"\0Astr2: \00" : !cir.array<!s8i x 8>> : !cir.array<!s8i x 8> {alignment = 1 : i64} loc(#loc11)
  cir.global "private" constant cir_private dso_local @".str.3" = #cir.const_array<"\0Astr3: \00" : !cir.array<!s8i x 8>> : !cir.array<!s8i x 8> {alignment = 1 : i64} loc(#loc12)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc18)
    %1 = cir.alloca !cir.array<!s8i x 14>, !cir.ptr<!cir.array<!s8i x 14>>, ["str1", init] {alignment = 1 : i64} loc(#loc44)
    %2 = cir.alloca !cir.array<!s8i x 40>, !cir.ptr<!cir.array<!s8i x 40>>, ["str2"] {alignment = 16 : i64} loc(#loc51)
    %3 = cir.alloca !cir.array<!s8i x 40>, !cir.ptr<!cir.array<!s8i x 40>>, ["str3"] {alignment = 16 : i64} loc(#loc52)
    %4 = cir.get_global @__const.main.str1 : !cir.ptr<!cir.array<!s8i x 14>> loc(#loc44)
    cir.copy %4 to %1 : !cir.ptr<!cir.array<!s8i x 14>> loc(#loc44)
    %5 = cir.get_global @strncpy : !cir.ptr<!cir.func<(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u64i) -> !cir.ptr<!s8i>>> loc(#loc23)
    %6 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 40>> -> !cir.ptr<!s8i> loc(#loc24)
    %7 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 14>> -> !cir.ptr<!s8i> loc(#loc25)
    %8 = cir.const #cir.int<6> : !s32i loc(#loc26)
    %9 = cir.cast integral %8 : !s32i -> !u64i loc(#loc26)
    %10 = cir.call @strncpy(%6, %7, %9) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u64i) -> !cir.ptr<!s8i> extra(#fn_attr) loc(#loc23)
    %11 = cir.get_global @strncpy : !cir.ptr<!cir.func<(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u64i) -> !cir.ptr<!s8i>>> loc(#loc27)
    %12 = cir.cast array_to_ptrdecay %3 : !cir.ptr<!cir.array<!s8i x 40>> -> !cir.ptr<!s8i> loc(#loc28)
    %13 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 16>> loc(#loc5)
    %14 = cir.cast array_to_ptrdecay %13 : !cir.ptr<!cir.array<!s8i x 16>> -> !cir.ptr<!s8i> loc(#loc5)
    %15 = cir.const #cir.int<15> : !s32i loc(#loc29)
    %16 = cir.cast integral %15 : !s32i -> !u64i loc(#loc29)
    %17 = cir.call @strncpy(%12, %14, %16) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u64i) -> !cir.ptr<!s8i> extra(#fn_attr) loc(#loc27)
    %18 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
    %19 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 8>> loc(#loc10)
    %20 = cir.cast array_to_ptrdecay %19 : !cir.ptr<!cir.array<!s8i x 8>> -> !cir.ptr<!s8i> loc(#loc10)
    %21 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%18, %20) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc30)
    %22 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 14>> -> !cir.ptr<!s8i> loc(#loc31)
    %23 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%21, %22) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc32)
    %24 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 8>> loc(#loc11)
    %25 = cir.cast array_to_ptrdecay %24 : !cir.ptr<!cir.array<!s8i x 8>> -> !cir.ptr<!s8i> loc(#loc11)
    %26 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%23, %25) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc33)
    %27 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 40>> -> !cir.ptr<!s8i> loc(#loc34)
    %28 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%26, %27) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
    %29 = cir.get_global @".str.3" : !cir.ptr<!cir.array<!s8i x 8>> loc(#loc12)
    %30 = cir.cast array_to_ptrdecay %29 : !cir.ptr<!cir.array<!s8i x 8>> -> !cir.ptr<!s8i> loc(#loc12)
    %31 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%28, %30) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc36)
    %32 = cir.cast array_to_ptrdecay %3 : !cir.ptr<!cir.array<!s8i x 40>> -> !cir.ptr<!s8i> loc(#loc37)
    %33 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%31, %32) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc38)
    %34 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc53)
    %35 = cir.call @_ZNSolsEPFRSoS_E(%33, %34) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc41)
    %36 = cir.const #cir.int<0> : !s32i loc(#loc42)
    cir.store align(4) %36, %0 : !s32i, !cir.ptr<!s32i> loc(#loc54)
    %37 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc54)
    cir.return %37 : !s32i loc(#loc54)
  } loc(#loc50)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":14:3)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":14:15)
#loc3 = loc("/usr/include/string.h":159:1)
#loc4 = loc("/usr/include/string.h":161:14)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":18:17)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:16)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:38)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:60)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":12:1)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":21:1)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":15:3)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":15:15)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":16:3)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":16:15)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":17:3)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":17:12)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":17:17)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":17:22)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":18:3)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":18:12)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":18:35)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:13)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:30)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:27)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:35)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:52)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:49)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:57)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:74)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:71)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:82)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:87)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":19:79)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":20:10)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring19_strcpy/main.cpp":20:3)
#loc44 = loc(fused[#loc1, #loc2])
#loc45 = loc(fused[#loc3, #loc4])
#loc46 = loc(fused[#loc6, #loc7])
#loc47 = loc(fused[#loc8, #loc9])
#loc48 = loc(fused[#loc13, #loc14])
#loc49 = loc(fused[#loc15, #loc16])
#loc50 = loc(fused[#loc17, #loc18])
#loc51 = loc(fused[#loc19, #loc20])
#loc52 = loc(fused[#loc21, #loc22])
#loc53 = loc(fused[#loc39, #loc40])
#loc54 = loc(fused[#loc43, #loc42])
