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
#fn_attr1 = #cir<extra({nothrow = #cir.nothrow})>
#fn_attr2 = #cir<extra({uwtable = #cir.uwtable<async>})>
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":17:16)
#loc4 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":17:25)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":13:3)
!rec_myclass = !cir.record<struct "myclass" padded {!u8i} #cir.record.decl.ast>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc35 = loc(fused[#loc3, #loc4])
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
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func no_inline optnone dso_local @_Z9my_deleteP7myclass(%arg0: !cir.ptr<!rec_myclass> loc(fused[#loc3, #loc4])) extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_myclass>, !cir.ptr<!cir.ptr<!rec_myclass>>, ["q", init] {alignment = 8 : i64} loc(#loc35)
    cir.store %arg0, %0 : !cir.ptr<!rec_myclass>, !cir.ptr<!cir.ptr<!rec_myclass>> loc(#loc5)
    %1 = cir.load align(8) %0 : !cir.ptr<!cir.ptr<!rec_myclass>>, !cir.ptr<!rec_myclass> loc(#loc6)
    cir.delete.array %1 : <!rec_myclass> loc(#loc6)
    cir.return loc(#loc2)
  } loc(#loc34)
  cir.func private @_Znam(!u64i) -> !cir.ptr<!void> loc(#loc36)
  cir.func no_inline optnone linkonce_odr dso_local @_ZN7myclassC2Ev(%arg0: !cir.ptr<!rec_myclass> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":13:3)) special_member<#cir.cxx_ctor<!rec_myclass, default>> extra(#fn_attr) {
    %0 = cir.alloca !cir.ptr<!rec_myclass>, !cir.ptr<!cir.ptr<!rec_myclass>>, ["this", init] {alignment = 8 : i64} loc(#loc9)
    cir.store %arg0, %0 : !cir.ptr<!rec_myclass>, !cir.ptr<!cir.ptr<!rec_myclass>> loc(#loc11)
    %1 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_myclass>>, !cir.ptr<!rec_myclass> loc(#loc9)
    %2 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc38)
    %3 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 21>> loc(#loc14)
    %4 = cir.cast array_to_ptrdecay %3 : !cir.ptr<!cir.array<!s8i x 21>> -> !cir.ptr<!s8i> loc(#loc14)
    %5 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%2, %4) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc15)
    cir.return loc(#loc10)
  } loc(#loc37)
  cir.func private @_ZdaPvm(!cir.ptr<!void>, !u64i) extra(#fn_attr1) loc(#loc39)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr2) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc19)
    %1 = cir.alloca !cir.ptr<!rec_myclass>, !cir.ptr<!cir.ptr<!rec_myclass>>, ["pt"] {alignment = 8 : i64} loc(#loc41)
    %2 = cir.const #cir.int<3> : !u64i loc(#loc42)
    %3 = cir.const #cir.int<3> : !u64i loc(#loc42)
    %4 = cir.const #cir.int<11> : !u64i loc(#loc42)
    %5 = cir.call @_Znam(%4) : (!u64i) -> !cir.ptr<!void> loc(#loc24)
    %6 = cir.cast bitcast %5 : !cir.ptr<!void> -> !cir.ptr<!u64i> loc(#loc24)
    cir.store align(8) %2, %6 : !u64i, !cir.ptr<!u64i> loc(#loc42)
    %7 = cir.cast bitcast %5 : !cir.ptr<!void> -> !cir.ptr<!u8i> loc(#loc24)
    %8 = cir.const #cir.int<8> : !s32i loc(#loc42)
    %9 = cir.ptr_stride %7, %8 : (!cir.ptr<!u8i>, !s32i) -> !cir.ptr<!u8i> loc(#loc42)
    %10 = cir.cast bitcast %9 : !cir.ptr<!u8i> -> !cir.ptr<!rec_myclass> loc(#loc42)
    %11 = cir.cast bitcast %10 : !cir.ptr<!rec_myclass> -> !cir.ptr<!cir.array<!rec_myclass x 3>> loc(#loc42)
    %12 = cir.const #cir.int<3> : !u64i loc(#loc24)
    %13 = cir.cast array_to_ptrdecay %11 : !cir.ptr<!cir.array<!rec_myclass x 3>> -> !cir.ptr<!rec_myclass> loc(#loc24)
    %14 = cir.ptr_stride %13, %12 : (!cir.ptr<!rec_myclass>, !u64i) -> !cir.ptr<!rec_myclass> loc(#loc24)
    %15 = cir.alloca !cir.ptr<!rec_myclass>, !cir.ptr<!cir.ptr<!rec_myclass>>, ["__array_idx"] {alignment = 1 : i64} loc(#loc24)
    cir.store %13, %15 : !cir.ptr<!rec_myclass>, !cir.ptr<!cir.ptr<!rec_myclass>> loc(#loc24)
    cir.br ^bb2 loc(#loc24)
  ^bb1:  // pred: ^bb2
    %16 = cir.load %15 : !cir.ptr<!cir.ptr<!rec_myclass>>, !cir.ptr<!rec_myclass> loc(#loc24)
    %17 = cir.cmp(ne, %16, %14) : !cir.ptr<!rec_myclass>, !cir.bool loc(#loc24)
    cir.brcond %17 ^bb2, ^bb3 loc(#loc24)
  ^bb2:  // 2 preds: ^bb0, ^bb1
    %18 = cir.load %15 : !cir.ptr<!cir.ptr<!rec_myclass>>, !cir.ptr<!rec_myclass> loc(#loc24)
    cir.call exception @_ZN7myclassC2Ev(%18) : (!cir.ptr<!rec_myclass>) -> () cleanup {
      cir.call @_ZdaPvm(%5, %4) : (!cir.ptr<!void>, !u64i) -> () extra(#fn_attr1) loc(#loc24)
      cir.yield loc(#loc25)
    } loc(#loc25)
    %19 = cir.const #cir.int<1> : !u64i loc(#loc24)
    %20 = cir.ptr_stride %18, %19 : (!cir.ptr<!rec_myclass>, !u64i) -> !cir.ptr<!rec_myclass> loc(#loc24)
    cir.store %20, %15 : !cir.ptr<!rec_myclass>, !cir.ptr<!cir.ptr<!rec_myclass>> loc(#loc24)
    cir.br ^bb1 loc(#loc24)
  ^bb3:  // pred: ^bb1
    cir.store align(8) %10, %1 : !cir.ptr<!rec_myclass>, !cir.ptr<!cir.ptr<!rec_myclass>> loc(#loc43)
    %21 = cir.load align(8) %1 : !cir.ptr<!cir.ptr<!rec_myclass>>, !cir.ptr<!rec_myclass> loc(#loc27)
    cir.delete.array %21 : <!rec_myclass> loc(#loc27)
    %22 = cir.load align(8) %1 : !cir.ptr<!cir.ptr<!rec_myclass>>, !cir.ptr<!rec_myclass> loc(#loc28)
    cir.call @_Z9my_deleteP7myclass(%22) : (!cir.ptr<!rec_myclass>) -> () loc(#loc29)
    %23 = cir.const #cir.int<0> : !s32i loc(#loc30)
    cir.store align(4) %23, %0 : !s32i, !cir.ptr<!s32i> loc(#loc44)
    %24 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc44)
    cir.return %24 : !s32i loc(#loc44)
  } loc(#loc40)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc45)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc38)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"myclass constructed\0A\00" : !cir.array<!s8i x 21>> : !cir.array<!s8i x 21> {alignment = 1 : i64} loc(#loc14)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":17:1)
#loc2 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":20:1)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":18:1)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":19:12)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":140:20)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":142:53)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":13:45)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":13:13)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":13:21)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":13:19)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":151:1)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/new":153:41)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":22:1)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":31:1)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":23:3)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":23:13)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":25:8)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":25:21)
#loc24 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":22:5)
#loc25 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":25:12)
#loc26 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":25:3)
#loc27 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":26:12)
#loc28 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":28:13)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":28:3)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":30:10)
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/double_free/main.cpp":30:3)
#loc32 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc33 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc34 = loc(fused[#loc1, #loc2])
#loc36 = loc(fused[#loc7, #loc8])
#loc37 = loc(fused[#loc9, #loc10])
#loc38 = loc(fused[#loc12, #loc13])
#loc39 = loc(fused[#loc16, #loc17])
#loc40 = loc(fused[#loc18, #loc19])
#loc41 = loc(fused[#loc20, #loc21])
#loc42 = loc(fused[#loc22, #loc23])
#loc43 = loc(fused[#loc26, #loc23])
#loc44 = loc(fused[#loc31, #loc30])
#loc45 = loc(fused[#loc32, #loc33])
