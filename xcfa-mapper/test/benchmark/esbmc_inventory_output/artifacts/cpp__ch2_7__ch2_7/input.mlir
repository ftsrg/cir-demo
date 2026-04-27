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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc54)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc55)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Enter grade: \00" : !cir.array<!s8i x 14>> : !cir.array<!s8i x 14> {alignment = 1 : i64} loc(#loc5)
  cir.global "private" external @_ZSt3cin : !rec_std3A3Abasic_istream3Cchar3E {alignment = 8 : i64} loc(#loc56)
  cir.func private @_ZNSirsERi(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc57)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"Class average is \00" : !cir.array<!s8i x 18>> : !cir.array<!s8i x 18> {alignment = 1 : i64} loc(#loc10)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc58)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc59)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc60)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc18)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["total"] {alignment = 4 : i64} loc(#loc62)
    %2 = cir.alloca !s32i, !cir.ptr<!s32i>, ["gradeCounter"] {alignment = 4 : i64} loc(#loc63)
    %3 = cir.alloca !s32i, !cir.ptr<!s32i>, ["grade"] {alignment = 4 : i64} loc(#loc64)
    %4 = cir.alloca !s32i, !cir.ptr<!s32i>, ["average"] {alignment = 4 : i64} loc(#loc65)
    %5 = cir.const #cir.int<0> : !s32i loc(#loc27)
    cir.store align(4) %5, %1 : !s32i, !cir.ptr<!s32i> loc(#loc66)
    %6 = cir.const #cir.int<1> : !s32i loc(#loc29)
    cir.store align(4) %6, %2 : !s32i, !cir.ptr<!s32i> loc(#loc67)
    cir.br ^bb1 loc(#loc68)
  ^bb1:  // pred: ^bb0
    cir.br ^bb2 loc(#loc68)
  ^bb2:  // 2 preds: ^bb1, ^bb5
    %7 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc33)
    %8 = cir.const #cir.int<10> : !s32i loc(#loc34)
    %9 = cir.cmp(le, %7, %8) : !s32i, !cir.bool loc(#loc69)
    cir.brcond %9 ^bb3, ^bb6 loc(#loc69)
  ^bb3:  // pred: ^bb2
    cir.br ^bb4 loc(#loc70)
  ^bb4:  // pred: ^bb3
    %10 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
    %11 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 14>> loc(#loc5)
    %12 = cir.cast array_to_ptrdecay %11 : !cir.ptr<!cir.array<!s8i x 14>> -> !cir.ptr<!s8i> loc(#loc5)
    %13 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%10, %12) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc36)
    %14 = cir.get_global @_ZSt3cin : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc56)
    %15 = cir.call @_ZNSirsERi(%14, %3) : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc37)
    %16 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc38)
    %17 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc39)
    %18 = cir.binop(add, %16, %17) nsw : !s32i loc(#loc38)
    cir.store align(4) %18, %1 : !s32i, !cir.ptr<!s32i> loc(#loc71)
    %19 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc41)
    %20 = cir.const #cir.int<1> : !s32i loc(#loc42)
    %21 = cir.binop(add, %19, %20) nsw : !s32i loc(#loc41)
    cir.store align(4) %21, %2 : !s32i, !cir.ptr<!s32i> loc(#loc72)
    cir.br ^bb5 loc(#loc32)
  ^bb5:  // pred: ^bb4
    cir.br ^bb2 loc(#loc32)
  ^bb6:  // pred: ^bb2
    cir.br ^bb7 loc(#loc32)
  ^bb7:  // pred: ^bb6
    %22 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc44)
    %23 = cir.const #cir.int<10> : !s32i loc(#loc45)
    %24 = cir.binop(div, %22, %23) : !s32i loc(#loc73)
    cir.store align(4) %24, %4 : !s32i, !cir.ptr<!s32i> loc(#loc74)
    %25 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc55)
    %26 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 18>> loc(#loc10)
    %27 = cir.cast array_to_ptrdecay %26 : !cir.ptr<!cir.array<!s8i x 18>> -> !cir.ptr<!s8i> loc(#loc10)
    %28 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%25, %27) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
    %29 = cir.load align(4) %4 : !cir.ptr<!s32i>, !s32i loc(#loc48)
    %30 = cir.call @_ZNSolsEi(%28, %29) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
    %31 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc50)
    %32 = cir.call @_ZNSolsEPFRSoS_E(%30, %31) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
    %33 = cir.const #cir.int<0> : !s32i loc(#loc52)
    cir.store align(4) %33, %0 : !s32i, !cir.ptr<!s32i> loc(#loc75)
    %34 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc75)
    cir.return %34 : !s32i loc(#loc75)
  } loc(#loc61)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":30:15)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:3)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:18)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":182:7)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":183:26)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":40:12)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":17:1)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":44:1)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":19:4)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":19:8)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":20:4)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":20:8)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":21:4)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":21:8)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":22:4)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":22:8)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":25:12)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":25:4)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":26:19)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":26:4)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":29:4)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":34:4)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":29:12)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":29:28)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":29:33)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":30:12)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":31:11)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":32:15)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":32:23)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":32:7)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":33:22)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":33:37)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":33:7)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":37:14)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":37:22)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":37:4)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":40:9)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":40:35)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":40:32)
#loc50 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":40:46)
#loc51 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":40:43)
#loc52 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":42:11)
#loc53 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch2_7/main.cpp":42:4)
#loc54 = loc(fused[#loc1, #loc2])
#loc55 = loc(fused[#loc3, #loc4])
#loc56 = loc(fused[#loc6, #loc7])
#loc57 = loc(fused[#loc8, #loc9])
#loc58 = loc(fused[#loc11, #loc12])
#loc59 = loc(fused[#loc13, #loc14])
#loc60 = loc(fused[#loc15, #loc16])
#loc61 = loc(fused[#loc17, #loc18])
#loc62 = loc(fused[#loc19, #loc20])
#loc63 = loc(fused[#loc21, #loc22])
#loc64 = loc(fused[#loc23, #loc24])
#loc65 = loc(fused[#loc25, #loc26])
#loc66 = loc(fused[#loc28, #loc27])
#loc67 = loc(fused[#loc30, #loc29])
#loc68 = loc(fused[#loc31, #loc32])
#loc69 = loc(fused[#loc33, #loc34])
#loc70 = loc(fused[#loc35, #loc32])
#loc71 = loc(fused[#loc40, #loc39])
#loc72 = loc(fused[#loc43, #loc42])
#loc73 = loc(fused[#loc44, #loc45])
#loc74 = loc(fused[#loc46, #loc45])
#loc75 = loc(fused[#loc53, #loc52])
