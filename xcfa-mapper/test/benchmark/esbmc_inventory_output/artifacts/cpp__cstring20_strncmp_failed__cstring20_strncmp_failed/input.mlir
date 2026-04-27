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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.global "private" constant cir_private @__const.main.str2 = #cir.const_array<"R2PO\00" : !cir.array<!s8i x 5>> : !cir.array<!s8i x 5> loc(#loc52)
  cir.global "private" constant cir_private @__const.main.str = #cir.const_array<"R2D2\00" : !cir.array<!s8i x 5>> : !cir.array<!s8i x 5> loc(#loc53)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc54)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc55)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Looking for R2 astromech droids...\00" : !cir.array<!s8i x 35>> : !cir.array<!s8i x 35> {alignment = 1 : i64} loc(#loc9)
  cir.func private @strncmp(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u64i) -> !s32i extra(#fn_attr) loc(#loc56)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"R2xx\00" : !cir.array<!s8i x 5>> : !cir.array<!s8i x 5> {alignment = 1 : i64} loc(#loc12)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc57)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"found\00" : !cir.array<!s8i x 6>> : !cir.array<!s8i x 6> {alignment = 1 : i64} loc(#loc15)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc58)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc59)
  cir.func private @__assert_fail(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) extra(#fn_attr) loc(#loc60)
  cir.global "private" constant cir_private dso_local @".str.3" = #cir.const_array<"strncmp(str, str2, 4) == 0\00" : !cir.array<!s8i x 27>> : !cir.array<!s8i x 27> {alignment = 1 : i64} loc(#loc22)
  cir.global "private" constant cir_private dso_local @".str.4" = #cir.const_array<"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp\00" : !cir.array<!s8i x 103>> : !cir.array<!s8i x 103> {alignment = 1 : i64} loc(#loc23)
  cir.global "private" constant cir_private dso_local @".str.5" = #cir.const_array<"int main()\00" : !cir.array<!s8i x 11>> : !cir.array<!s8i x 11> {alignment = 1 : i64} loc(#loc22)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc25)
    %1 = cir.alloca !cir.array<!s8i x 5>, !cir.ptr<!cir.array<!s8i x 5>>, ["str", init] {alignment = 1 : i64} loc(#loc53)
    %2 = cir.alloca !cir.array<!s8i x 5>, !cir.ptr<!cir.array<!s8i x 5>>, ["str2", init] {alignment = 1 : i64} loc(#loc52)
    %3 = cir.alloca !s32i, !cir.ptr<!s32i>, ["n"] {alignment = 4 : i64} loc(#loc62)
    %4 = cir.get_global @__const.main.str : !cir.ptr<!cir.array<!s8i x 5>> loc(#loc53)
    cir.copy %4 to %1 : !cir.ptr<!cir.array<!s8i x 5>> loc(#loc53)
    %5 = cir.get_global @__const.main.str2 : !cir.ptr<!cir.array<!s8i x 5>> loc(#loc52)
    cir.copy %5 to %2 : !cir.ptr<!cir.array<!s8i x 5>> loc(#loc52)
    %6 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
    %7 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 35>> loc(#loc9)
    %8 = cir.cast array_to_ptrdecay %7 : !cir.ptr<!cir.array<!s8i x 35>> -> !cir.ptr<!s8i> loc(#loc9)
    %9 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%6, %8) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc28)
    cir.br ^bb1 loc(#loc63)
  ^bb1:  // pred: ^bb0
    %10 = cir.const #cir.int<0> : !s32i loc(#loc31)
    cir.store align(4) %10, %3 : !s32i, !cir.ptr<!s32i> loc(#loc64)
    cir.br ^bb2 loc(#loc63)
  ^bb2:  // 2 preds: ^bb1, ^bb8
    %11 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc33)
    %12 = cir.const #cir.int<3> : !s32i loc(#loc34)
    %13 = cir.cmp(lt, %11, %12) : !s32i, !cir.bool loc(#loc65)
    cir.brcond %13 ^bb3, ^bb9 loc(#loc65)
  ^bb3:  // pred: ^bb2
    cir.br ^bb4 loc(#loc66)
  ^bb4:  // pred: ^bb3
    %14 = cir.get_global @strncmp : !cir.ptr<!cir.func<(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u64i) -> !s32i>> loc(#loc36)
    %15 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 5>> -> !cir.ptr<!s8i> loc(#loc37)
    %16 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 5>> loc(#loc12)
    %17 = cir.cast array_to_ptrdecay %16 : !cir.ptr<!cir.array<!s8i x 5>> -> !cir.ptr<!s8i> loc(#loc12)
    %18 = cir.const #cir.int<2> : !s32i loc(#loc38)
    %19 = cir.cast integral %18 : !s32i -> !u64i loc(#loc38)
    %20 = cir.call @strncmp(%15, %17, %19) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u64i) -> !s32i side_effect(pure) extra(#fn_attr) loc(#loc36)
    %21 = cir.const #cir.int<0> : !s32i loc(#loc39)
    %22 = cir.cmp(eq, %20, %21) : !s32i, !cir.bool loc(#loc67)
    cir.brcond %22 ^bb5, ^bb6 loc(#loc68)
  ^bb5:  // pred: ^bb4
    %23 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
    %24 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 6>> loc(#loc15)
    %25 = cir.cast array_to_ptrdecay %24 : !cir.ptr<!cir.array<!s8i x 6>> -> !cir.ptr<!s8i> loc(#loc15)
    %26 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%23, %25) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc41)
    %27 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc42)
    %28 = cir.get_element %1[%27] : (!cir.ptr<!cir.array<!s8i x 5>>, !s32i) -> !cir.ptr<!s8i> loc(#loc43)
    %29 = cir.load align(1) %28 : !cir.ptr<!s8i>, !s8i loc(#loc43)
    %30 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(%26, %29) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc44)
    %31 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc69)
    %32 = cir.call @_ZNSolsEPFRSoS_E(%30, %31) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
    cir.br ^bb6 loc(#loc30)
  ^bb6:  // 2 preds: ^bb4, ^bb5
    cir.br ^bb7 loc(#loc30)
  ^bb7:  // pred: ^bb6
    cir.br ^bb8 loc(#loc30)
  ^bb8:  // pred: ^bb7
    %33 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc48)
    %34 = cir.unary(inc, %33) nsw : !s32i, !s32i loc(#loc49)
    cir.store align(4) %34, %3 : !s32i, !cir.ptr<!s32i> loc(#loc70)
    cir.br ^bb2 loc(#loc63)
  ^bb9:  // pred: ^bb2
    cir.br ^bb10 loc(#loc30)
  ^bb10:  // pred: ^bb9
    %35 = cir.cast array_to_ptrdecay %1 : !cir.ptr<!cir.array<!s8i x 5>> -> !cir.ptr<!s8i> loc(#loc22)
    %36 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 5>> -> !cir.ptr<!s8i> loc(#loc22)
    %37 = cir.const #cir.int<4> : !s32i loc(#loc22)
    %38 = cir.cast integral %37 : !s32i -> !u64i loc(#loc22)
    %39 = cir.call @strncmp(%35, %36, %38) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u64i) -> !s32i side_effect(pure) extra(#fn_attr) loc(#loc22)
    %40 = cir.const #cir.int<0> : !s32i loc(#loc22)
    %41 = cir.cmp(eq, %39, %40) : !s32i, !cir.bool loc(#loc22)
    cir.brcond %41 ^bb11, ^bb12 loc(#loc22)
  ^bb11:  // pred: ^bb10
    %42 = cir.const #cir.int<0> : !s32i loc(#loc22)
    cir.br ^bb13 loc(#loc22)
  ^bb12:  // pred: ^bb10
    %43 = cir.get_global @".str.3" : !cir.ptr<!cir.array<!s8i x 27>> loc(#loc22)
    %44 = cir.cast array_to_ptrdecay %43 : !cir.ptr<!cir.array<!s8i x 27>> -> !cir.ptr<!s8i> loc(#loc22)
    %45 = cir.const #cir.global_view<@".str.4"> : !cir.ptr<!s8i> loc(#loc22)
    %46 = cir.const #cir.int<43> : !u32i loc(#loc22)
    %47 = cir.get_global @".str.5" : !cir.ptr<!cir.array<!s8i x 11>> loc(#loc22)
    %48 = cir.cast array_to_ptrdecay %47 : !cir.ptr<!cir.array<!s8i x 11>> -> !cir.ptr<!s8i> loc(#loc22)
    cir.call @__assert_fail(%44, %45, %46, %48) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) -> () extra(#fn_attr) loc(#loc22)
    cir.br ^bb13 loc(#loc22)
  ^bb13:  // 2 preds: ^bb11, ^bb12
    %49 = cir.const #cir.int<0> : !s32i loc(#loc50)
    cir.store align(4) %49, %0 : !s32i, !cir.ptr<!s32i> loc(#loc71)
    %50 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc71)
    cir.return %50 : !s32i loc(#loc71)
  } loc(#loc61)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":34:2)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":34:16)
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":33:3)
#loc4 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":33:16)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":36:16)
#loc10 = loc("/usr/include/string.h":174:1)
#loc11 = loc("/usr/include/string.h":175:33)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":38:23)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":641:5)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":648:5)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":40:19)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc18 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc19 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc20 = loc("/usr/include/assert.h":95:1)
#loc21 = loc("/usr/include/assert.h":97:45)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":43:2)
#loc23 = loc(unknown)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":31:1)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":45:1)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":35:2)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":35:6)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":36:13)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":37:3)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":41:5)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":37:10)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":37:8)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":37:14)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":37:16)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":38:5)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":38:9)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":38:18)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":38:30)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":38:36)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":39:5)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":40:17)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":40:34)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":40:30)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":40:27)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":40:40)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":40:45)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":40:37)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":37:21)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":37:20)
#loc50 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":44:10)
#loc51 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/cstring20_strncmp_failed/main.cpp":44:3)
#loc52 = loc(fused[#loc1, #loc2])
#loc53 = loc(fused[#loc3, #loc4])
#loc54 = loc(fused[#loc5, #loc6])
#loc55 = loc(fused[#loc7, #loc8])
#loc56 = loc(fused[#loc10, #loc11])
#loc57 = loc(fused[#loc13, #loc14])
#loc58 = loc(fused[#loc16, #loc17])
#loc59 = loc(fused[#loc18, #loc19])
#loc60 = loc(fused[#loc20, #loc21])
#loc61 = loc(fused[#loc24, #loc25])
#loc62 = loc(fused[#loc26, #loc27])
#loc63 = loc(fused[#loc29, #loc30])
#loc64 = loc(fused[#loc32, #loc31])
#loc65 = loc(fused[#loc33, #loc34])
#loc66 = loc(fused[#loc35, #loc30])
#loc67 = loc(fused[#loc36, #loc39])
#loc68 = loc(fused[#loc40, #loc30])
#loc69 = loc(fused[#loc45, #loc46])
#loc70 = loc(fused[#loc49, #loc48])
#loc71 = loc(fused[#loc51, #loc50])
