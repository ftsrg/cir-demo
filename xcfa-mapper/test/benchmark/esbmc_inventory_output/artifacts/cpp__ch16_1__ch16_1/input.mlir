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
!rec_tm = !cir.record<struct "tm" {!s32i, !s32i, !s32i, !s32i, !s32i, !s32i, !s32i, !s32i, !s32i, !s64i, !cir.ptr<!s8i>} #cir.record.decl.ast>
!rec___locale_struct = !cir.record<struct "__locale_struct" {!cir.array<!cir.ptr<!rec___locale_data> x 13>, !cir.ptr<!u16i>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.array<!cir.ptr<!s8i> x 13>} #cir.record.decl.ast>
!rec_std3A3Aios_base3A3A_Callback_list = !cir.record<struct "std::ios_base::_Callback_list" {!cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !cir.ptr<!cir.func<(!u32i, !cir.ptr<!cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !cir.record<class "std::locale" {!cir.ptr<!cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>>} #cir.record.decl.ast>} #cir.record.decl.ast>>, !s32i)>>, !s32i, !s32i} #cir.record.decl.ast>
!rec_std3A3Actype3Cchar3E = !cir.record<class "std::ctype<char>" packed padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>, !cir.ptr<!rec___locale_struct>, !cir.bool, !cir.array<!u8i x 7>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.ptr<!u16i>, !s8i, !cir.array<!s8i x 256>, !cir.array<!s8i x 256>, !s8i, !cir.array<!u8i x 6>} #cir.record.decl.ast>
!rec_std3A3Alocale3A3A_Impl = !cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>
!rec_std3A3Alocale = !cir.record<class "std::locale" {!cir.ptr<!rec_std3A3Alocale3A3A_Impl>} #cir.record.decl.ast>
!rec_std3A3Abasic_streambuf3Cchar3E = !cir.record<class "std::basic_streambuf<char>" {!cir.vptr, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Aios_base = !cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Callback_list>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Abasic_ios3Cchar3E = !cir.record<class "std::basic_ios<char>" {!rec_std3A3Aios_base, !cir.ptr<!cir.record<class "std::basic_ostream<char>" {!cir.vptr, !cir.record<class "std::basic_ios<char>">} #cir.record.decl.ast>>, !s8i, !cir.bool, !cir.ptr<!rec_std3A3Abasic_streambuf3Cchar3E>, !cir.ptr<!rec_std3A3Actype3Cchar3E>, !cir.ptr<!rec_std3A3Anum_put3Cchar3E>, !cir.ptr<!rec_std3A3Anum_get3Cchar3E>} #cir.record.decl.ast>
!rec_std3A3Abasic_ostream3Cchar3E = !cir.record<class "std::basic_ostream<char>" {!cir.vptr, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc39)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc40)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Content-type: text/html\0A\0A\00" : !cir.array<!s8i x 26>> : !cir.array<!s8i x 26> {alignment = 1 : i64} loc(#loc5)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"<?xml version = \221.0\22?>\00" : !cir.array<!s8i x 24>> : !cir.array<!s8i x 24> {alignment = 1 : i64} loc(#loc6)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"<!DOCTYPE html PUBLIC \22-//W3C//DTD XHTML 1.0 \00" : !cir.array<!s8i x 46>> : !cir.array<!s8i x 46> {alignment = 1 : i64} loc(#loc7)
  cir.global "private" constant cir_private dso_local @".str.3" = #cir.const_array<"Transitional//EN\22 \22http://www.w3.org/TR/xhtml1\00" : !cir.array<!s8i x 47>> : !cir.array<!s8i x 47> {alignment = 1 : i64} loc(#loc8)
  cir.global "private" constant cir_private dso_local @".str.4" = #cir.const_array<"/DTD/xhtml1-transitional.dtd\22>\00" : !cir.array<!s8i x 31>> : !cir.array<!s8i x 31> {alignment = 1 : i64} loc(#loc9)
  cir.func private @time(!cir.ptr<!s64i>) -> !s64i extra(#fn_attr) loc(#loc41)
  cir.global "private" constant cir_private dso_local @".str.5" = #cir.const_array<"<html xmlns = \22http://www.w3.org/1999/xhtml\22>\00" : !cir.array<!s8i x 46>> : !cir.array<!s8i x 46> {alignment = 1 : i64} loc(#loc12)
  cir.global "private" constant cir_private dso_local @".str.6" = #cir.const_array<"<head><title>Current date and time</title></head>\00" : !cir.array<!s8i x 50>> : !cir.array<!s8i x 50> {alignment = 1 : i64} loc(#loc13)
  cir.global "private" constant cir_private dso_local @".str.7" = #cir.const_array<"<body><p>\00" : !cir.array<!s8i x 10>> : !cir.array<!s8i x 10> {alignment = 1 : i64} loc(#loc14)
  cir.func private @asctime(!cir.ptr<!rec_tm>) -> !cir.ptr<!s8i> extra(#fn_attr) loc(#loc42)
  cir.func private @localtime(!cir.ptr<!s64i>) -> !cir.ptr<!rec_tm> extra(#fn_attr) loc(#loc43)
  cir.global "private" constant cir_private dso_local @".str.8" = #cir.const_array<"</p></body></html>\00" : !cir.array<!s8i x 19>> : !cir.array<!s8i x 19> {alignment = 1 : i64} loc(#loc19)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc21)
    %1 = cir.alloca !s64i, !cir.ptr<!s64i>, ["currentTime"] {alignment = 8 : i64} loc(#loc45)
    %2 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc40)
    %3 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 26>> loc(#loc5)
    %4 = cir.cast array_to_ptrdecay %3 : !cir.ptr<!cir.array<!s8i x 26>> -> !cir.ptr<!s8i> loc(#loc5)
    %5 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%2, %4) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc24)
    %6 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc40)
    %7 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 24>> loc(#loc6)
    %8 = cir.cast array_to_ptrdecay %7 : !cir.ptr<!cir.array<!s8i x 24>> -> !cir.ptr<!s8i> loc(#loc6)
    %9 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%6, %8) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc25)
    %10 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 46>> loc(#loc7)
    %11 = cir.cast array_to_ptrdecay %10 : !cir.ptr<!cir.array<!s8i x 46>> -> !cir.ptr<!s8i> loc(#loc7)
    %12 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%9, %11) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc26)
    %13 = cir.get_global @".str.3" : !cir.ptr<!cir.array<!s8i x 47>> loc(#loc8)
    %14 = cir.cast array_to_ptrdecay %13 : !cir.ptr<!cir.array<!s8i x 47>> -> !cir.ptr<!s8i> loc(#loc8)
    %15 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%12, %14) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc27)
    %16 = cir.get_global @".str.4" : !cir.ptr<!cir.array<!s8i x 31>> loc(#loc9)
    %17 = cir.cast array_to_ptrdecay %16 : !cir.ptr<!cir.array<!s8i x 31>> -> !cir.ptr<!s8i> loc(#loc9)
    %18 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%15, %17) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc28)
    %19 = cir.call @time(%1) : (!cir.ptr<!s64i>) -> !s64i extra(#fn_attr) loc(#loc29)
    %20 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc40)
    %21 = cir.get_global @".str.5" : !cir.ptr<!cir.array<!s8i x 46>> loc(#loc12)
    %22 = cir.cast array_to_ptrdecay %21 : !cir.ptr<!cir.array<!s8i x 46>> -> !cir.ptr<!s8i> loc(#loc12)
    %23 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%20, %22) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc30)
    %24 = cir.get_global @".str.6" : !cir.ptr<!cir.array<!s8i x 50>> loc(#loc13)
    %25 = cir.cast array_to_ptrdecay %24 : !cir.ptr<!cir.array<!s8i x 50>> -> !cir.ptr<!s8i> loc(#loc13)
    %26 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%23, %25) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc31)
    %27 = cir.get_global @".str.7" : !cir.ptr<!cir.array<!s8i x 10>> loc(#loc14)
    %28 = cir.cast array_to_ptrdecay %27 : !cir.ptr<!cir.array<!s8i x 10>> -> !cir.ptr<!s8i> loc(#loc14)
    %29 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%26, %28) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc32)
    %30 = cir.call @localtime(%1) : (!cir.ptr<!s64i>) -> !cir.ptr<!rec_tm> extra(#fn_attr) loc(#loc33)
    %31 = cir.call @asctime(%30) : (!cir.ptr<!rec_tm>) -> !cir.ptr<!s8i> extra(#fn_attr) loc(#loc34)
    %32 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%29, %31) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc35)
    %33 = cir.get_global @".str.8" : !cir.ptr<!cir.array<!s8i x 19>> loc(#loc19)
    %34 = cir.cast array_to_ptrdecay %33 : !cir.ptr<!cir.array<!s8i x 19>> -> !cir.ptr<!s8i> loc(#loc19)
    %35 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%32, %34) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc36)
    %36 = cir.const #cir.int<0> : !s32i loc(#loc37)
    cir.store align(4) %36, %0 : !s32i, !cir.ptr<!s32i> loc(#loc46)
    %37 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc46)
    cir.return %37 : !s32i loc(#loc46)
  } loc(#loc44)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":22:12)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":25:12)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":26:12)
#loc8 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":27:12)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":28:12)
#loc10 = loc("/usr/include/time.h":85:1)
#loc11 = loc("/usr/include/time.h":85:38)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":33:12)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":34:12)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":35:12)
#loc15 = loc("/usr/include/time.h":188:1)
#loc16 = loc("/usr/include/time.h":188:46)
#loc17 = loc("/usr/include/time.h":145:1)
#loc18 = loc("/usr/include/time.h":145:53)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":36:12)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":17:1)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":40:1)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":19:4)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":19:11)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":22:9)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":25:9)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":26:9)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":27:9)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":28:9)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":30:4)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":33:9)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":34:9)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":35:9)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":35:36)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":35:27)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":35:24)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":36:9)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":38:11)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch16_1/main.cpp":38:4)
#loc39 = loc(fused[#loc1, #loc2])
#loc40 = loc(fused[#loc3, #loc4])
#loc41 = loc(fused[#loc10, #loc11])
#loc42 = loc(fused[#loc15, #loc16])
#loc43 = loc(fused[#loc17, #loc18])
#loc44 = loc(fused[#loc20, #loc21])
#loc45 = loc(fused[#loc22, #loc23])
#loc46 = loc(fused[#loc38, #loc37])
