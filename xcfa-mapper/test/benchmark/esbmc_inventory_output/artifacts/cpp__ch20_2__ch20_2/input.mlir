!rec__IO_codecvt = !cir.record<struct "_IO_codecvt" incomplete>
!rec__IO_marker = !cir.record<struct "_IO_marker" incomplete>
!rec__IO_wide_data = !cir.record<struct "_IO_wide_data" incomplete>
!rec___locale_data = !cir.record<struct "__locale_data" incomplete>
!rec_std3A3Abasic_ostream3Cchar3E2Ebase = !cir.record<class "std::basic_ostream<char>.base" {!cir.vptr} #cir.record.decl.ast>
!s16i = !cir.int<s, 16>
!s32i = !cir.int<s, 32>
!s64i = !cir.int<s, 64>
!s8i = !cir.int<s, 8>
!u16i = !cir.int<u, 16>
!u32i = !cir.int<u, 32>
!u64i = !cir.int<u, 64>
!u8i = !cir.int<u, 8>
!void = !cir.void
#fn_attr = #cir<extra({nothrow = #cir.nothrow})>
#fn_attr1 = #cir<extra({uwtable = #cir.uwtable<async>})>
#loc31 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:11)
#loc32 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:15)
#loc33 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:21)
#loc34 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:32)
#loc38 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":37:45)
#loc39 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":47:7)
#loc40 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":47:27)
#loc72 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)
#loc86 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":37:16)
!rec_std3A3Abasic_istream3Cchar3E2Ebase = !cir.record<class "std::basic_istream<char>.base" {!cir.vptr, !s64i} #cir.record.decl.ast>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc125 = loc(fused[#loc31, #loc32])
#loc126 = loc(fused[#loc33, #loc34])
#loc129 = loc(fused[#loc39, #loc40])
#loc138 = loc(fused[#loc86, #loc38])
!rec__IO_FILE = !cir.record<struct "_IO_FILE" {!s32i, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!rec__IO_marker>, !cir.ptr<!cir.record<struct "_IO_FILE">>, !s32i, !cir.array<!u8i x 3>, !cir.array<!s8i x 1>, !s64i, !u16i, !s8i, !cir.array<!s8i x 1>, !cir.ptr<!void>, !s64i, !cir.ptr<!rec__IO_codecvt>, !cir.ptr<!rec__IO_wide_data>, !cir.ptr<!cir.record<struct "_IO_FILE">>, !cir.ptr<!void>, !cir.ptr<!cir.ptr<!cir.record<struct "_IO_FILE">>>, !s32i, !s32i, !u64i, !cir.array<!s8i x 8>} #cir.record.decl.ast>
!rec___pthread_internal_list = !cir.record<struct "__pthread_internal_list" {!cir.ptr<!cir.record<struct "__pthread_internal_list">>, !cir.ptr<!cir.record<struct "__pthread_internal_list">>} #cir.record.decl.ast>
!rec_anon2E0 = !cir.record<union "anon.0" {!u32i, !cir.array<!s8i x 4>} #cir.record.decl.ast>
!rec_std3A3A__codecvt_abstract_base3Cchar2C_char2C___mbstate_t3E2Ebase = !cir.record<class "std::__codecvt_abstract_base<char, char, __mbstate_t>.base" {!rec_std3A3Alocale3A3Afacet2Ebase} #cir.record.decl.ast>
!rec_std3A3Aios_base3A3A_Words = !cir.record<struct "std::ios_base::_Words" {!cir.ptr<!void>, !s64i} #cir.record.decl.ast>
!rec_std3A3Alocale3A3Afacet = !cir.record<class "std::locale::facet" packed padded {!cir.vptr, !s32i, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec_std3A3Anum_get3Cchar3E = !cir.record<class "std::num_get<char>" padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec_std3A3Anum_put3Cchar3E = !cir.record<class "std::num_put<char>" padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>} #cir.record.decl.ast>
!rec___locale_struct = !cir.record<struct "__locale_struct" {!cir.array<!cir.ptr<!rec___locale_data> x 13>, !cir.ptr<!u16i>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.array<!cir.ptr<!s8i> x 13>} #cir.record.decl.ast>
!rec___mbstate_t = !cir.record<struct "__mbstate_t" {!s32i, !rec_anon2E0} #cir.record.decl.ast>
!rec___pthread_mutex_s = !cir.record<struct "__pthread_mutex_s" {!s32i, !u32i, !s32i, !u32i, !s32i, !s16i, !s16i, !rec___pthread_internal_list} #cir.record.decl.ast>
!rec_pthread_mutex_t = !cir.record<union "pthread_mutex_t" {!rec___pthread_mutex_s, !cir.array<!s8i x 40>, !s64i} #cir.record.decl.ast>
!rec_std3A3A__basic_file3Cchar3E = !cir.record<class "std::__basic_file<char>" packed padded {!cir.ptr<!rec__IO_FILE>, !cir.bool, !cir.array<!u8i x 7>} #cir.record.decl.ast>
!rec_std3A3Aios_base3A3A_Callback_list = !cir.record<struct "std::ios_base::_Callback_list" {!cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !cir.ptr<!cir.func<(!u32i, !cir.ptr<!cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !cir.record<class "std::locale" {!cir.ptr<!cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>>} #cir.record.decl.ast>} #cir.record.decl.ast>>, !s32i)>>, !s32i, !s32i} #cir.record.decl.ast>
!rec_std3A3Acodecvt3Cchar2C_char2C_std3A3Ambstate_t3E = !cir.record<class "std::codecvt<char, char, std::mbstate_t>" {!rec_std3A3A__codecvt_abstract_base3Cchar2C_char2C___mbstate_t3E2Ebase, !cir.ptr<!rec___locale_struct>} #cir.record.decl.ast>
!rec_std3A3Actype3Cchar3E = !cir.record<class "std::ctype<char>" packed padded {!rec_std3A3Alocale3A3Afacet2Ebase, !cir.array<!u8i x 4>, !cir.ptr<!rec___locale_struct>, !cir.bool, !cir.array<!u8i x 7>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.ptr<!u16i>, !s8i, !cir.array<!s8i x 256>, !cir.array<!s8i x 256>, !s8i, !cir.array<!u8i x 6>} #cir.record.decl.ast>
!rec_std3A3Alocale3A3A_Impl = !cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !u64i, !cir.ptr<!cir.ptr<!rec_std3A3Alocale3A3Afacet>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>
!rec_std3A3Alocale = !cir.record<class "std::locale" {!cir.ptr<!rec_std3A3Alocale3A3A_Impl>} #cir.record.decl.ast>
!rec_std3A3Abasic_streambuf3Cchar3E = !cir.record<class "std::basic_streambuf<char>" {!cir.vptr, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Aios_base = !cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Callback_list>, !rec_std3A3Aios_base3A3A_Words, !cir.array<!rec_std3A3Aios_base3A3A_Words x 8>, !s32i, !cir.ptr<!rec_std3A3Aios_base3A3A_Words>, !rec_std3A3Alocale} #cir.record.decl.ast>
!rec_std3A3Abasic_filebuf3Cchar3E = !cir.record<class "std::basic_filebuf<char>" {!rec_std3A3Abasic_streambuf3Cchar3E, !rec_pthread_mutex_t, !rec_std3A3A__basic_file3Cchar3E, !s32i, !rec___mbstate_t, !rec___mbstate_t, !rec___mbstate_t, !cir.ptr<!s8i>, !u64i, !cir.bool, !cir.bool, !cir.bool, !s8i, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.bool, !cir.ptr<!rec_std3A3Acodecvt3Cchar2C_char2C_std3A3Ambstate_t3E>, !cir.ptr<!s8i>, !s64i, !cir.ptr<!s8i>, !cir.ptr<!s8i>} #cir.record.decl.ast>
!rec_std3A3Abasic_ios3Cchar3E = !cir.record<class "std::basic_ios<char>" {!rec_std3A3Aios_base, !cir.ptr<!cir.record<class "std::basic_ostream<char>" {!cir.vptr, !cir.record<class "std::basic_ios<char>">} #cir.record.decl.ast>>, !s8i, !cir.bool, !cir.ptr<!rec_std3A3Abasic_streambuf3Cchar3E>, !cir.ptr<!rec_std3A3Actype3Cchar3E>, !cir.ptr<!rec_std3A3Anum_put3Cchar3E>, !cir.ptr<!rec_std3A3Anum_get3Cchar3E>} #cir.record.decl.ast>
!rec_std3A3Abasic_ifstream3Cchar3E = !cir.record<class "std::basic_ifstream<char>" {!rec_std3A3Abasic_istream3Cchar3E2Ebase, !rec_std3A3Abasic_filebuf3Cchar3E, !rec_std3A3Abasic_ios3Cchar3E}>
!rec_std3A3Abasic_istream3Cchar3E = !cir.record<class "std::basic_istream<char>" {!cir.vptr, !s64i, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
!rec_std3A3Abasic_ofstream3Cchar3E = !cir.record<class "std::basic_ofstream<char>" {!rec_std3A3Abasic_ostream3Cchar3E2Ebase, !rec_std3A3Abasic_filebuf3Cchar3E, !rec_std3A3Abasic_ios3Cchar3E}>
!rec_std3A3Abasic_ostream3Cchar3E = !cir.record<class "std::basic_ostream<char>" {!cir.vptr, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc111)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc112)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"Usage: copyFile infile_name outfile_name\00" : !cir.array<!s8i x 41>> : !cir.array<!s8i x 41> {alignment = 1 : i64} loc(#loc5)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc113)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc114)
  cir.func private @_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode(!cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>, !cir.ptr<!s8i>, !s32i) special_member<#cir.cxx_ctor<!rec_std3A3Abasic_ifstream3Cchar3E, custom>> loc(#loc115)
  cir.func private @_ZNKSt9basic_iosIcSt11char_traitsIcEEntEv(!cir.ptr<!rec_std3A3Abasic_ios3Cchar3E>) -> !cir.bool loc(#loc116)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<" could not be opened\00" : !cir.array<!s8i x 21>> : !cir.array<!s8i x 21> {alignment = 1 : i64} loc(#loc14)
  cir.func private @_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode(!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>, !cir.ptr<!s8i>, !s32i) special_member<#cir.cxx_ctor<!rec_std3A3Abasic_ofstream3Cchar3E, custom>> loc(#loc117)
  cir.func private @_ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv(!cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>) loc(#loc118)
  cir.func private @_ZNSi3getEv(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>) -> !s32i loc(#loc119)
  cir.func private @_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv(!cir.ptr<!rec_std3A3Abasic_ios3Cchar3E>) -> !cir.bool loc(#loc120)
  cir.func private @_ZNSo3putEc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc121)
  cir.func private @_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>) special_member<#cir.cxx_dtor<!rec_std3A3Abasic_ofstream3Cchar3E>> extra(#fn_attr) loc(#loc122)
  cir.func private @_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev(!cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>) special_member<#cir.cxx_dtor<!rec_std3A3Abasic_ifstream3Cchar3E>> extra(#fn_attr) loc(#loc123)
  cir.func no_inline optnone dso_local @main(%arg0: !s32i loc(fused[#loc31, #loc32]), %arg1: !cir.ptr<!cir.ptr<!s8i>> loc(fused[#loc33, #loc34])) -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !rec_std3A3Abasic_ifstream3Cchar3E, !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>, ["inFile", init] {alignment = 8 : i64} loc(#loc127)
    %1 = cir.alloca !rec_std3A3Abasic_ofstream3Cchar3E, !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>, ["outFile", init] {alignment = 8 : i64} loc(#loc128)
    %2 = cir.alloca !s8i, !cir.ptr<!s8i>, ["c", init] {alignment = 1 : i64} loc(#loc129)
    %3 = cir.alloca !s32i, !cir.ptr<!s32i>, ["tmp.try.call.res"] {alignment = 4 : i64} loc(#loc41)
    %4 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["tmp.try.call.res"] {alignment = 1 : i64} loc(#loc42)
    %5 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc43)
    %6 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc44)
    %7 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc45)
    %8 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["tmp.try.call.res"] {alignment = 1 : i64} loc(#loc46)
    %9 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc47)
    %10 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc48)
    %11 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc49)
    %12 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["tmp.try.call.res"] {alignment = 1 : i64} loc(#loc50)
    %13 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc51)
    %14 = cir.alloca !s32i, !cir.ptr<!s32i>, ["tmp.try.call.res"] {alignment = 4 : i64} loc(#loc52)
    %15 = cir.alloca !s32i, !cir.ptr<!s32i>, ["argc", init] {alignment = 4 : i64} loc(#loc125)
    %16 = cir.alloca !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!cir.ptr<!cir.ptr<!s8i>>>, ["argv", init] {alignment = 8 : i64} loc(#loc126)
    %17 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc30)
    cir.store %arg0, %15 : !s32i, !cir.ptr<!s32i> loc(#loc53)
    cir.store %arg1, %16 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!cir.ptr<!cir.ptr<!s8i>>> loc(#loc53)
    cir.br ^bb1 loc(#loc130)
  ^bb1:  // pred: ^bb0
    %18 = cir.load align(4) %15 : !cir.ptr<!s32i>, !s32i loc(#loc56)
    %19 = cir.const #cir.int<3> : !s32i loc(#loc57)
    %20 = cir.cmp(ne, %18, %19) : !s32i, !cir.bool loc(#loc131)
    cir.brcond %20 ^bb2, ^bb3 loc(#loc132)
  ^bb2:  // pred: ^bb1
    %21 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc112)
    %22 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 41>> loc(#loc5)
    %23 = cir.cast array_to_ptrdecay %22 : !cir.ptr<!cir.array<!s8i x 41>> -> !cir.ptr<!s8i> loc(#loc5)
    %24 = cir.call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%21, %23) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc61)
    %25 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc59)
    %26 = cir.call @_ZNSolsEPFRSoS_E(%24, %25) : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc62)
    cir.br ^bb89 loc(#loc59)
  ^bb3:  // pred: ^bb1
    %27 = cir.load align(8) %16 : !cir.ptr<!cir.ptr<!cir.ptr<!s8i>>>, !cir.ptr<!cir.ptr<!s8i>> loc(#loc63)
    %28 = cir.const #cir.int<1> : !s32i loc(#loc64)
    %29 = cir.ptr_stride %27, %28 : (!cir.ptr<!cir.ptr<!s8i>>, !s32i) -> !cir.ptr<!cir.ptr<!s8i>> loc(#loc65)
    %30 = cir.load align(8) %29 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc63)
    %31 = cir.const #cir.int<8> : !s32i loc(#loc133)
    cir.call @_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode(%0, %30, %31) : (!cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>, !cir.ptr<!s8i>, !s32i) -> () loc(#loc68)
    cir.br ^bb4 loc(#loc134)
  ^bb4:  // pred: ^bb3
    %32 = cir.vtable.get_vptr %0 : !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> -> !cir.ptr<!cir.vptr> loc(#loc71)
    %33 = cir.load align(8) %32 : !cir.ptr<!cir.vptr>, !cir.vptr loc(#loc71)
    %34 = cir.cast bitcast %33 : !cir.vptr -> !cir.ptr<!u8i> loc(#loc71)
    %35 = cir.const #cir.int<-24> : !s64i loc(#loc71)
    %36 = cir.ptr_stride %34, %35 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc71)
    %37 = cir.cast bitcast %36 : !cir.ptr<!u8i> -> !cir.ptr<!s64i> loc(#loc71)
    %38 = cir.load align(8) %37 : !cir.ptr<!s64i>, !s64i loc(#loc71)
    %39 = cir.cast bitcast %0 : !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> -> !cir.ptr<!u8i> loc(#loc127)
    %40 = cir.ptr_stride %39, %38 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc71)
    %41 = cir.cast bitcast %40 : !cir.ptr<!u8i> -> !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> loc(#loc71)
    %42 = cir.cast bitcast %41 : !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> -> !cir.ptr<!rec_std3A3Abasic_ios3Cchar3E> loc(#loc71)
    cir.br ^bb5 loc(#loc72)
  ^bb5:  // pred: ^bb4
    %43 = cir.try_call @_ZNKSt9basic_iosIcSt11char_traitsIcEEntEv(%42) ^bb6, ^bb7 : (!cir.ptr<!rec_std3A3Abasic_ios3Cchar3E>) -> !cir.bool loc(#loc42)
  ^bb6:  // pred: ^bb5
    cir.store align(1) %43, %4 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc42)
    cir.br ^bb9 loc(#loc72)
  ^bb7:  // pred: ^bb5
    %exception_ptr, %type_id = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.call @_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev(%0) : (!cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc123)
    cir.br ^bb8(%exception_ptr, %type_id : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb8(%44: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %45: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb7
    cir.resume.flat %44, %45 loc(#loc72)
  ^bb9:  // pred: ^bb6
    %46 = cir.load align(1) %4 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc42)
    cir.brcond %46 ^bb10, ^bb26 loc(#loc135)
  ^bb10:  // pred: ^bb9
    %47 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc112)
    %48 = cir.load align(8) %16 : !cir.ptr<!cir.ptr<!cir.ptr<!s8i>>>, !cir.ptr<!cir.ptr<!s8i>> loc(#loc74)
    %49 = cir.const #cir.int<1> : !s32i loc(#loc75)
    %50 = cir.ptr_stride %48, %49 : (!cir.ptr<!cir.ptr<!s8i>>, !s32i) -> !cir.ptr<!cir.ptr<!s8i>> loc(#loc76)
    %51 = cir.load align(8) %50 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc74)
    cir.br ^bb11 loc(#loc72)
  ^bb11:  // pred: ^bb10
    %52 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%47, %51) ^bb12, ^bb13 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
  ^bb12:  // pred: ^bb11
    cir.store align(8) %52, %5 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc43)
    cir.br ^bb15 loc(#loc72)
  ^bb13:  // pred: ^bb11
    %exception_ptr_0, %type_id_1 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.br ^bb14(%exception_ptr_0, %type_id_1 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb14(%53: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %54: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb13
    cir.resume.flat %53, %54 loc(#loc72)
  ^bb15:  // pred: ^bb12
    %55 = cir.load align(8) %5 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc43)
    %56 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 21>> loc(#loc14)
    %57 = cir.cast array_to_ptrdecay %56 : !cir.ptr<!cir.array<!s8i x 21>> -> !cir.ptr<!s8i> loc(#loc14)
    cir.br ^bb16 loc(#loc72)
  ^bb16:  // pred: ^bb15
    %58 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%55, %57) ^bb17, ^bb18 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc44)
  ^bb17:  // pred: ^bb16
    cir.store align(8) %58, %6 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc44)
    cir.br ^bb20 loc(#loc72)
  ^bb18:  // pred: ^bb16
    %exception_ptr_2, %type_id_3 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.br ^bb19(%exception_ptr_2, %type_id_3 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb19(%59: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %60: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb18
    cir.resume.flat %59, %60 loc(#loc72)
  ^bb20:  // pred: ^bb17
    %61 = cir.load align(8) %6 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc44)
    %62 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc77)
    cir.br ^bb21 loc(#loc72)
  ^bb21:  // pred: ^bb20
    %63 = cir.try_call @_ZNSolsEPFRSoS_E(%61, %62) ^bb22, ^bb23 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc45)
  ^bb22:  // pred: ^bb21
    cir.store align(8) %63, %7 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc45)
    cir.br ^bb25 loc(#loc72)
  ^bb23:  // pred: ^bb21
    %exception_ptr_4, %type_id_5 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.br ^bb24(%exception_ptr_4, %type_id_5 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb24(%64: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %65: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb23
    cir.resume.flat %64, %65 loc(#loc72)
  ^bb25:  // pred: ^bb22
    %66 = cir.const #cir.int<1> : !s32i loc(#loc78)
    %67 = cir.unary(minus, %66) nsw : !s32i, !s32i loc(#loc79)
    cir.store align(4) %67, %17 : !s32i, !cir.ptr<!s32i> loc(#loc136)
    %68 = cir.load align(4) %17 : !cir.ptr<!s32i>, !s32i loc(#loc136)
    cir.return %68 : !s32i loc(#loc136)
  ^bb26:  // pred: ^bb9
    cir.br ^bb27 loc(#loc70)
  ^bb27:  // pred: ^bb26
    %69 = cir.load align(8) %16 : !cir.ptr<!cir.ptr<!cir.ptr<!s8i>>>, !cir.ptr<!cir.ptr<!s8i>> loc(#loc81)
    %70 = cir.const #cir.int<2> : !s32i loc(#loc82)
    %71 = cir.ptr_stride %69, %70 : (!cir.ptr<!cir.ptr<!s8i>>, !s32i) -> !cir.ptr<!cir.ptr<!s8i>> loc(#loc83)
    %72 = cir.load align(8) %71 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc81)
    %73 = cir.const #cir.int<16> : !s32i loc(#loc137)
    cir.br ^bb28 loc(#loc138)
  ^bb28:  // pred: ^bb27
    cir.try_call @_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode(%1, %72, %73) ^bb29, ^bb30 : (!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>, !cir.ptr<!s8i>, !s32i) -> () loc(#loc86)
  ^bb29:  // pred: ^bb28
    cir.br ^bb32 loc(#loc138)
  ^bb30:  // pred: ^bb28
    %exception_ptr_6, %type_id_7 = cir.eh.inflight_exception cleanup loc(#loc138)
    cir.br ^bb31(%exception_ptr_6, %type_id_7 : !cir.ptr<!void>, !u32i) loc(#loc138)
  ^bb31(%74: !cir.ptr<!void> loc(fused[#loc86, #loc38]), %75: !u32i loc(fused[#loc86, #loc38])):  // pred: ^bb30
    cir.resume.flat %74, %75 loc(#loc138)
  ^bb32:  // pred: ^bb29
    cir.br ^bb33 loc(#loc139)
  ^bb33:  // pred: ^bb32
    %76 = cir.vtable.get_vptr %1 : !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> -> !cir.ptr<!cir.vptr> loc(#loc89)
    %77 = cir.load align(8) %76 : !cir.ptr<!cir.vptr>, !cir.vptr loc(#loc89)
    %78 = cir.cast bitcast %77 : !cir.vptr -> !cir.ptr<!u8i> loc(#loc89)
    %79 = cir.const #cir.int<-24> : !s64i loc(#loc89)
    %80 = cir.ptr_stride %78, %79 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc89)
    %81 = cir.cast bitcast %80 : !cir.ptr<!u8i> -> !cir.ptr<!s64i> loc(#loc89)
    %82 = cir.load align(8) %81 : !cir.ptr<!s64i>, !s64i loc(#loc89)
    %83 = cir.cast bitcast %1 : !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> -> !cir.ptr<!u8i> loc(#loc128)
    %84 = cir.ptr_stride %83, %82 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc89)
    %85 = cir.cast bitcast %84 : !cir.ptr<!u8i> -> !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> loc(#loc89)
    %86 = cir.cast bitcast %85 : !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> -> !cir.ptr<!rec_std3A3Abasic_ios3Cchar3E> loc(#loc89)
    cir.br ^bb34 loc(#loc72)
  ^bb34:  // pred: ^bb33
    %87 = cir.try_call @_ZNKSt9basic_iosIcSt11char_traitsIcEEntEv(%86) ^bb35, ^bb36 : (!cir.ptr<!rec_std3A3Abasic_ios3Cchar3E>) -> !cir.bool loc(#loc46)
  ^bb35:  // pred: ^bb34
    cir.store align(1) %87, %8 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc46)
    cir.br ^bb38 loc(#loc72)
  ^bb36:  // pred: ^bb34
    %exception_ptr_8, %type_id_9 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.call @_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(%1) : (!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc122)
    cir.call @_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev(%0) : (!cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc123)
    cir.br ^bb37(%exception_ptr_8, %type_id_9 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb37(%88: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %89: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb36
    cir.resume.flat %88, %89 loc(#loc72)
  ^bb38:  // pred: ^bb35
    %90 = cir.load align(1) %8 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc46)
    cir.brcond %90 ^bb39, ^bb60 loc(#loc140)
  ^bb39:  // pred: ^bb38
    %91 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc112)
    %92 = cir.load align(8) %16 : !cir.ptr<!cir.ptr<!cir.ptr<!s8i>>>, !cir.ptr<!cir.ptr<!s8i>> loc(#loc91)
    %93 = cir.const #cir.int<2> : !s32i loc(#loc92)
    %94 = cir.ptr_stride %92, %93 : (!cir.ptr<!cir.ptr<!s8i>>, !s32i) -> !cir.ptr<!cir.ptr<!s8i>> loc(#loc93)
    %95 = cir.load align(8) %94 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc91)
    cir.br ^bb40 loc(#loc72)
  ^bb40:  // pred: ^bb39
    %96 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%91, %95) ^bb41, ^bb42 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
  ^bb41:  // pred: ^bb40
    cir.store align(8) %96, %9 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc47)
    cir.br ^bb44 loc(#loc72)
  ^bb42:  // pred: ^bb40
    %exception_ptr_10, %type_id_11 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.br ^bb43(%exception_ptr_10, %type_id_11 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb43(%97: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %98: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb42
    cir.resume.flat %97, %98 loc(#loc72)
  ^bb44:  // pred: ^bb41
    %99 = cir.load align(8) %9 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc47)
    %100 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 21>> loc(#loc94)
    %101 = cir.cast array_to_ptrdecay %100 : !cir.ptr<!cir.array<!s8i x 21>> -> !cir.ptr<!s8i> loc(#loc94)
    cir.br ^bb45 loc(#loc72)
  ^bb45:  // pred: ^bb44
    %102 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%99, %101) ^bb46, ^bb47 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
  ^bb46:  // pred: ^bb45
    cir.store align(8) %102, %10 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc48)
    cir.br ^bb49 loc(#loc72)
  ^bb47:  // pred: ^bb45
    %exception_ptr_12, %type_id_13 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.br ^bb48(%exception_ptr_12, %type_id_13 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb48(%103: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %104: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb47
    cir.resume.flat %103, %104 loc(#loc72)
  ^bb49:  // pred: ^bb46
    %105 = cir.load align(8) %10 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc48)
    %106 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc95)
    cir.br ^bb50 loc(#loc72)
  ^bb50:  // pred: ^bb49
    %107 = cir.try_call @_ZNSolsEPFRSoS_E(%105, %106) ^bb51, ^bb52 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc49)
  ^bb51:  // pred: ^bb50
    cir.store align(8) %107, %11 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc49)
    cir.br ^bb54 loc(#loc72)
  ^bb52:  // pred: ^bb50
    %exception_ptr_14, %type_id_15 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.br ^bb53(%exception_ptr_14, %type_id_15 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb53(%108: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %109: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb52
    cir.resume.flat %108, %109 loc(#loc72)
  ^bb54:  // pred: ^bb51
    cir.br ^bb55 loc(#loc72)
  ^bb55:  // pred: ^bb54
    cir.try_call @_ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv(%0) ^bb56, ^bb57 : (!cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>) -> () loc(#loc96)
  ^bb56:  // pred: ^bb55
    cir.br ^bb59 loc(#loc72)
  ^bb57:  // pred: ^bb55
    %exception_ptr_16, %type_id_17 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.br ^bb58(%exception_ptr_16, %type_id_17 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb58(%110: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %111: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb57
    cir.resume.flat %110, %111 loc(#loc72)
  ^bb59:  // pred: ^bb56
    %112 = cir.const #cir.int<2> : !s32i loc(#loc97)
    %113 = cir.unary(minus, %112) nsw : !s32i, !s32i loc(#loc98)
    cir.store align(4) %113, %17 : !s32i, !cir.ptr<!s32i> loc(#loc141)
    %114 = cir.load align(4) %17 : !cir.ptr<!s32i>, !s32i loc(#loc141)
    cir.return %114 : !s32i loc(#loc141)
  ^bb60:  // pred: ^bb38
    cir.br ^bb61 loc(#loc88)
  ^bb61:  // pred: ^bb60
    %115 = cir.base_class_addr %0 : !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> nonnull [0] -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc100)
    cir.br ^bb62 loc(#loc129)
  ^bb62:  // pred: ^bb61
    %116 = cir.try_call @_ZNSi3getEv(%115) ^bb63, ^bb64 : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>) -> !s32i loc(#loc41)
  ^bb63:  // pred: ^bb62
    cir.store align(4) %116, %3 : !s32i, !cir.ptr<!s32i> loc(#loc41)
    cir.br ^bb66 loc(#loc129)
  ^bb64:  // pred: ^bb62
    %exception_ptr_18, %type_id_19 = cir.eh.inflight_exception cleanup loc(#loc129)
    cir.br ^bb65(%exception_ptr_18, %type_id_19 : !cir.ptr<!void>, !u32i) loc(#loc129)
  ^bb65(%117: !cir.ptr<!void> loc(fused[#loc39, #loc40]), %118: !u32i loc(fused[#loc39, #loc40])):  // pred: ^bb64
    cir.resume.flat %117, %118 loc(#loc129)
  ^bb66:  // pred: ^bb63
    %119 = cir.load align(4) %3 : !cir.ptr<!s32i>, !s32i loc(#loc41)
    %120 = cir.cast integral %119 : !s32i -> !s8i loc(#loc41)
    cir.store align(1) %120, %2 : !s8i, !cir.ptr<!s8i> loc(#loc129)
    cir.br ^bb67 loc(#loc142)
  ^bb67:  // pred: ^bb66
    cir.br ^bb68 loc(#loc142)
  ^bb68:  // 2 preds: ^bb67, ^bb86
    %121 = cir.vtable.get_vptr %0 : !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> -> !cir.ptr<!cir.vptr> loc(#loc50)
    %122 = cir.load align(8) %121 : !cir.ptr<!cir.vptr>, !cir.vptr loc(#loc50)
    %123 = cir.cast bitcast %122 : !cir.vptr -> !cir.ptr<!u8i> loc(#loc50)
    %124 = cir.const #cir.int<-24> : !s64i loc(#loc50)
    %125 = cir.ptr_stride %123, %124 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc50)
    %126 = cir.cast bitcast %125 : !cir.ptr<!u8i> -> !cir.ptr<!s64i> loc(#loc50)
    %127 = cir.load align(8) %126 : !cir.ptr<!s64i>, !s64i loc(#loc50)
    %128 = cir.cast bitcast %0 : !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> -> !cir.ptr<!u8i> loc(#loc127)
    %129 = cir.ptr_stride %128, %127 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc50)
    %130 = cir.cast bitcast %129 : !cir.ptr<!u8i> -> !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> loc(#loc50)
    %131 = cir.cast bitcast %130 : !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> -> !cir.ptr<!rec_std3A3Abasic_ios3Cchar3E> loc(#loc50)
    cir.br ^bb69 loc(#loc72)
  ^bb69:  // pred: ^bb68
    %132 = cir.try_call @_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv(%131) ^bb70, ^bb71 : (!cir.ptr<!rec_std3A3Abasic_ios3Cchar3E>) -> !cir.bool loc(#loc50)
  ^bb70:  // pred: ^bb69
    cir.store align(1) %132, %12 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc50)
    cir.br ^bb73 loc(#loc72)
  ^bb71:  // pred: ^bb69
    %exception_ptr_20, %type_id_21 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.br ^bb72(%exception_ptr_20, %type_id_21 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb72(%133: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %134: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb71
    cir.resume.flat %133, %134 loc(#loc72)
  ^bb73:  // pred: ^bb70
    %135 = cir.load align(1) %12 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc50)
    cir.brcond %135 ^bb74, ^bb87 loc(#loc50)
  ^bb74:  // pred: ^bb73
    cir.br ^bb75 loc(#loc143)
  ^bb75:  // pred: ^bb74
    %136 = cir.base_class_addr %1 : !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> nonnull [0] -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc104)
    %137 = cir.load align(1) %2 : !cir.ptr<!s8i>, !s8i loc(#loc105)
    cir.br ^bb76 loc(#loc72)
  ^bb76:  // pred: ^bb75
    %138 = cir.try_call @_ZNSo3putEc(%136, %137) ^bb77, ^bb78 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc51)
  ^bb77:  // pred: ^bb76
    cir.store align(8) %138, %13 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc51)
    cir.br ^bb80 loc(#loc72)
  ^bb78:  // pred: ^bb76
    %exception_ptr_22, %type_id_23 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.br ^bb79(%exception_ptr_22, %type_id_23 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb79(%139: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %140: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb78
    cir.resume.flat %139, %140 loc(#loc72)
  ^bb80:  // pred: ^bb77
    %141 = cir.base_class_addr %0 : !cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E> nonnull [0] -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc106)
    cir.br ^bb81 loc(#loc72)
  ^bb81:  // pred: ^bb80
    %142 = cir.try_call @_ZNSi3getEv(%141) ^bb82, ^bb83 : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>) -> !s32i loc(#loc52)
  ^bb82:  // pred: ^bb81
    cir.store align(4) %142, %14 : !s32i, !cir.ptr<!s32i> loc(#loc52)
    cir.br ^bb85 loc(#loc72)
  ^bb83:  // pred: ^bb81
    %exception_ptr_24, %type_id_25 = cir.eh.inflight_exception cleanup loc(#loc72)
    cir.call @_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(%1) : (!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc122)
    cir.call @_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev(%0) : (!cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc123)
    cir.br ^bb84(%exception_ptr_24, %type_id_25 : !cir.ptr<!void>, !u32i) loc(#loc72)
  ^bb84(%143: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5), %144: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:5)):  // pred: ^bb83
    cir.resume.flat %143, %144 loc(#loc72)
  ^bb85:  // pred: ^bb82
    %145 = cir.load align(4) %14 : !cir.ptr<!s32i>, !s32i loc(#loc52)
    %146 = cir.cast integral %145 : !s32i -> !s8i loc(#loc52)
    cir.store align(1) %146, %2 : !s8i, !cir.ptr<!s8i> loc(#loc144)
    cir.br ^bb86 loc(#loc102)
  ^bb86:  // pred: ^bb85
    cir.br ^bb68 loc(#loc102)
  ^bb87:  // pred: ^bb73
    cir.br ^bb88 loc(#loc102)
  ^bb88:  // pred: ^bb87
    cir.call @_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(%1) : (!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc122)
    cir.call @_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev(%0) : (!cir.ptr<!rec_std3A3Abasic_ifstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc123)
    cir.br ^bb89 loc(#loc55)
  ^bb89:  // 2 preds: ^bb2, ^bb88
    cir.br ^bb90 loc(#loc55)
  ^bb90:  // pred: ^bb89
    %147 = cir.const #cir.int<0> : !s32i loc(#loc109)
    cir.store align(4) %147, %17 : !s32i, !cir.ptr<!s32i> loc(#loc145)
    %148 = cir.load align(4) %17 : !cir.ptr<!s32i>, !s32i loc(#loc145)
    cir.return %148 : !s32i loc(#loc145)
  } loc(#loc124)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":0:0)
#loc1 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":25:15)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc10 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":571:7)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":577:7)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_ios.h":131:7)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_ios.h":134:30)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":32:31)
#loc15 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":844:7)
#loc16 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":851:7)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":775:7)
#loc18 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":780:7)
#loc19 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":396:7)
#loc20 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":397:11)
#loc21 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_ios.h":123:7)
#loc22 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_ios.h":125:31)
#loc23 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":371:7)
#loc24 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":372:24)
#loc25 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":917:7)
#loc26 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":918:9)
#loc27 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":642:7)
#loc28 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":643:9)
#loc29 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":21:1)
#loc30 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":58:1)
#loc35 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":28:7)
#loc36 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":28:43)
#loc37 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":37:7)
#loc41 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":47:23)
#loc42 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":31:12)
#loc43 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":32:15)
#loc44 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":32:28)
#loc45 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":32:54)
#loc46 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":40:12)
#loc47 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":41:15)
#loc48 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":41:28)
#loc49 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":41:54)
#loc50 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":49:15)
#loc51 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":50:18)
#loc52 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":51:21)
#loc53 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":22:1)
#loc54 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":24:4)
#loc55 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":54:4)
#loc56 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":24:9)
#loc57 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":24:17)
#loc58 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":25:7)
#loc59 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":25:61)
#loc60 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":27:9)
#loc61 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":25:12)
#loc62 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":25:58)
#loc63 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":28:24)
#loc64 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":28:30)
#loc65 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":28:32)
#loc66 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":28:35)
#loc67 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":28:40)
#loc68 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":28:16)
#loc69 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":31:7)
#loc70 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":35:7)
#loc71 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":31:13)
#loc73 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":31:22)
#loc74 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":32:18)
#loc75 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":32:24)
#loc76 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":32:26)
#loc77 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":32:57)
#loc78 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":33:18)
#loc79 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":33:17)
#loc80 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":33:10)
#loc81 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":37:25)
#loc82 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":37:31)
#loc83 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":37:33)
#loc84 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":37:36)
#loc85 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":37:41)
#loc87 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":40:7)
#loc88 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":45:7)
#loc89 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":40:13)
#loc90 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":40:23)
#loc91 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":41:18)
#loc92 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":41:24)
#loc93 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":41:26)
#loc94 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":41:31)
#loc95 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":41:57)
#loc96 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":42:17)
#loc97 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":43:18)
#loc98 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":43:17)
#loc99 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":43:10)
#loc100 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":47:16)
#loc101 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":49:7)
#loc102 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":53:7)
#loc103 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":49:24)
#loc104 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":50:10)
#loc105 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":50:23)
#loc106 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":51:14)
#loc107 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":51:10)
#loc108 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":51:25)
#loc109 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":56:11)
#loc110 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch20_2/main.cpp":56:4)
#loc111 = loc(fused[#loc1, #loc2])
#loc112 = loc(fused[#loc3, #loc4])
#loc113 = loc(fused[#loc6, #loc7])
#loc114 = loc(fused[#loc8, #loc9])
#loc115 = loc(fused[#loc10, #loc11])
#loc116 = loc(fused[#loc12, #loc13])
#loc117 = loc(fused[#loc15, #loc16])
#loc118 = loc(fused[#loc17, #loc18])
#loc119 = loc(fused[#loc19, #loc20])
#loc120 = loc(fused[#loc21, #loc22])
#loc121 = loc(fused[#loc23, #loc24])
#loc122 = loc(fused[#loc25, #loc26])
#loc123 = loc(fused[#loc27, #loc28])
#loc124 = loc(fused[#loc29, #loc30])
#loc127 = loc(fused[#loc35, #loc36])
#loc128 = loc(fused[#loc37, #loc38])
#loc130 = loc(fused[#loc54, #loc55])
#loc131 = loc(fused[#loc56, #loc57])
#loc132 = loc(fused[#loc58, #loc59, #loc60, #loc55])
#loc133 = loc(fused[#loc66, #loc67])
#loc134 = loc(fused[#loc69, #loc70])
#loc135 = loc(fused[#loc73, #loc70])
#loc136 = loc(fused[#loc80, #loc78])
#loc137 = loc(fused[#loc84, #loc85])
#loc139 = loc(fused[#loc87, #loc88])
#loc140 = loc(fused[#loc90, #loc88])
#loc141 = loc(fused[#loc99, #loc97])
#loc142 = loc(fused[#loc101, #loc102])
#loc143 = loc(fused[#loc103, #loc102])
#loc144 = loc(fused[#loc107, #loc108])
#loc145 = loc(fused[#loc110, #loc109])
