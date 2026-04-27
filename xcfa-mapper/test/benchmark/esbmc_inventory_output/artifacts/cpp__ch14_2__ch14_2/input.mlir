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
#fn_attr1 = #cir<extra({nothrow = #cir.nothrow, uwtable = #cir.uwtable<async>})>
#fn_attr2 = #cir<extra({uwtable = #cir.uwtable<async>})>
#loc25 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":898:16)
#loc26 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":898:48)
#loc27 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":898:54)
#loc28 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":898:62)
#loc95 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)
!rec_std3A3Abasic_ostream3Cchar3E = !cir.record<class "std::basic_ostream<char>" {!cir.vptr, !cir.record<class "std::basic_ios<char>" {!cir.record<class "std::ios_base" {!cir.vptr, !s64i, !s64i, !s32i, !s32i, !s32i, !cir.ptr<!cir.record<struct "std::ios_base::_Callback_list" {!cir.ptr<!cir.record<struct "std::ios_base::_Callback_list">>, !cir.ptr<!cir.func<(!u32i, !cir.ptr<!cir.record<class "std::ios_base">>, !s32i)>>, !s32i, !s32i} #cir.record.decl.ast>>, !cir.record<struct "std::ios_base::_Words" {!cir.ptr<!void>, !s64i} #cir.record.decl.ast>, !cir.array<!cir.record<struct "std::ios_base::_Words" {!cir.ptr<!void>, !s64i} #cir.record.decl.ast> x 8>, !s32i, !cir.ptr<!cir.record<struct "std::ios_base::_Words" {!cir.ptr<!void>, !s64i} #cir.record.decl.ast>>, !cir.record<class "std::locale" {!cir.ptr<!cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!cir.record<class "std::locale::facet" packed padded {!cir.vptr, !s32i, !cir.array<!u8i x 4>} #cir.record.decl.ast>>>, !u64i, !cir.ptr<!cir.ptr<!cir.record<class "std::locale::facet" packed padded {!cir.vptr, !s32i, !cir.array<!u8i x 4>} #cir.record.decl.ast>>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>>} #cir.record.decl.ast>} #cir.record.decl.ast>, !cir.ptr<!cir.record<class "std::basic_ostream<char>">>, !s8i, !cir.bool, !cir.ptr<!cir.record<class "std::basic_streambuf<char>" {!cir.vptr, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.ptr<!s8i>, !cir.record<class "std::locale" {!cir.ptr<!cir.record<class "std::locale::_Impl" {!s32i, !cir.ptr<!cir.ptr<!cir.record<class "std::locale::facet" packed padded {!cir.vptr, !s32i, !cir.array<!u8i x 4>} #cir.record.decl.ast>>>, !u64i, !cir.ptr<!cir.ptr<!cir.record<class "std::locale::facet" packed padded {!cir.vptr, !s32i, !cir.array<!u8i x 4>} #cir.record.decl.ast>>>, !cir.ptr<!cir.ptr<!s8i>>} #cir.record.decl.ast>>} #cir.record.decl.ast>} #cir.record.decl.ast>>, !cir.ptr<!cir.record<class "std::ctype<char>" packed padded {!cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>, !cir.array<!u8i x 4>, !cir.ptr<!cir.record<struct "__locale_struct" {!cir.array<!cir.ptr<!rec___locale_data> x 13>, !cir.ptr<!u16i>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.array<!cir.ptr<!s8i> x 13>} #cir.record.decl.ast>>, !cir.bool, !cir.array<!u8i x 7>, !cir.ptr<!s32i>, !cir.ptr<!s32i>, !cir.ptr<!u16i>, !s8i, !cir.array<!s8i x 256>, !cir.array<!s8i x 256>, !s8i, !cir.array<!u8i x 6>} #cir.record.decl.ast>>, !cir.ptr<!cir.record<class "std::num_put<char>" padded {!cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>, !cir.array<!u8i x 4>} #cir.record.decl.ast>>, !cir.ptr<!cir.record<class "std::num_get<char>" padded {!cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>, !cir.array<!u8i x 4>} #cir.record.decl.ast>>} #cir.record.decl.ast>} #cir.record.decl.ast>
!rec_std3A3Alocale3A3Afacet2Ebase = !cir.record<class "std::locale::facet.base" packed {!cir.vptr, !s32i} #cir.record.decl.ast>
#loc124 = loc(fused[#loc25, #loc26])
#loc125 = loc(fused[#loc27, #loc28])
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
!rec_std3A3Abasic_ios3Cchar3E = !cir.record<class "std::basic_ios<char>" {!rec_std3A3Aios_base, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i, !cir.bool, !cir.ptr<!rec_std3A3Abasic_streambuf3Cchar3E>, !cir.ptr<!rec_std3A3Actype3Cchar3E>, !cir.ptr<!rec_std3A3Anum_put3Cchar3E>, !cir.ptr<!rec_std3A3Anum_get3Cchar3E>} #cir.record.decl.ast>
!rec_std3A3Abasic_istream3Cchar3E = !cir.record<class "std::basic_istream<char>" {!cir.vptr, !s64i, !rec_std3A3Abasic_ios3Cchar3E} #cir.record.decl.ast>
!rec_std3A3Abasic_ofstream3Cchar3E = !cir.record<class "std::basic_ofstream<char>" {!rec_std3A3Abasic_ostream3Cchar3E2Ebase, !rec_std3A3Abasic_filebuf3Cchar3E, !rec_std3A3Abasic_ios3Cchar3E}>
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [".globl _ZSt21ios_base_library_initv"], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"clients.dat\00" : !cir.array<!s8i x 12>> : !cir.array<!s8i x 12> {alignment = 1 : i64} loc(#loc1)
  cir.func private @_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode(!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>, !cir.ptr<!s8i>, !s32i) special_member<#cir.cxx_ctor<!rec_std3A3Abasic_ofstream3Cchar3E, custom>> loc(#loc114)
  cir.func private @_ZNKSt9basic_iosIcSt11char_traitsIcEEntEv(!cir.ptr<!rec_std3A3Abasic_ios3Cchar3E>) -> !cir.bool loc(#loc115)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc116)
  cir.global "private" external @_ZSt4cerr : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc117)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"File could not be opened\00" : !cir.array<!s8i x 25>> : !cir.array<!s8i x 25> {alignment = 1 : i64} loc(#loc10)
  cir.func private @_ZNSolsEPFRSoS_E(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc118)
  cir.func private @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc119)
  cir.func private @exit(!s32i) extra(#fn_attr) loc(#loc120)
  cir.global "private" external @_ZSt4cout : !rec_std3A3Abasic_ostream3Cchar3E {alignment = 8 : i64} loc(#loc121)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"Enter the account, name, and balance.\00" : !cir.array<!s8i x 38>> : !cir.array<!s8i x 38> {alignment = 1 : i64} loc(#loc19)
  cir.global "private" constant cir_private dso_local @".str.3" = #cir.const_array<"Enter end-of-file to end input.\0A? \00" : !cir.array<!s8i x 35>> : !cir.array<!s8i x 35> {alignment = 1 : i64} loc(#loc20)
  cir.func private @_ZSt17__istream_extractRSiPcl(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s8i>, !s64i) loc(#loc122)
  cir.func no_inline optnone linkonce_odr dso_local @_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_(%arg0: !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(fused[#loc25, #loc26]), %arg1: !cir.ptr<!s8i> loc(fused[#loc27, #loc28])) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> extra(#fn_attr1) {
    %0 = cir.alloca !s64i, !cir.ptr<!s64i>, ["__n", init] {alignment = 8 : i64} loc(#loc126)
    %1 = cir.alloca !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, ["__in", init, const] {alignment = 8 : i64} loc(#loc124)
    %2 = cir.alloca !cir.ptr<!s8i>, !cir.ptr<!cir.ptr<!s8i>>, ["__s", init] {alignment = 8 : i64} loc(#loc125)
    %3 = cir.alloca !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, ["__retval"] {alignment = 8 : i64} loc(#loc24)
    cir.store %arg0, %1 : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>> loc(#loc31)
    cir.store %arg1, %2 : !cir.ptr<!s8i>, !cir.ptr<!cir.ptr<!s8i>> loc(#loc31)
    cir.br ^bb1 loc(#loc127)
  ^bb1:  // pred: ^bb0
    %4 = cir.const #cir.int<9223372036854775807> : !s64i loc(#loc128)
    cir.store align(8) %4, %0 : !s64i, !cir.ptr<!s64i> loc(#loc126)
    %5 = cir.const #cir.int<1> : !u64i loc(#loc129)
    %6 = cir.load align(8) %0 : !cir.ptr<!s64i>, !s64i loc(#loc37)
    %7 = cir.cast integral %6 : !s64i -> !u64i loc(#loc37)
    %8 = cir.binop(div, %7, %5) : !u64i loc(#loc130)
    %9 = cir.cast integral %8 : !u64i -> !s64i loc(#loc130)
    cir.store align(8) %9, %0 : !s64i, !cir.ptr<!s64i> loc(#loc130)
    %10 = cir.load %1 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc39)
    %11 = cir.load align(8) %2 : !cir.ptr<!cir.ptr<!s8i>>, !cir.ptr<!s8i> loc(#loc40)
    %12 = cir.load align(8) %0 : !cir.ptr<!s64i>, !s64i loc(#loc41)
    cir.call @_ZSt17__istream_extractRSiPcl(%10, %11, %12) : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s8i>, !s64i) -> () loc(#loc42)
    cir.br ^bb2 loc(#loc33)
  ^bb2:  // pred: ^bb1
    %13 = cir.load %1 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc43)
    cir.store align(8) %13, %3 : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>> loc(#loc131)
    %14 = cir.load align(8) %3 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc131)
    cir.return %14 : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc131)
  } loc(#loc123)
  cir.global "private" external @_ZSt3cin : !rec_std3A3Abasic_istream3Cchar3E {alignment = 8 : i64} loc(#loc132)
  cir.func private @_ZNSirsERi(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc133)
  cir.func private @_ZNSirsERd(!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.double>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc134)
  cir.func private @_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv(!cir.ptr<!rec_std3A3Abasic_ios3Cchar3E>) -> !cir.bool loc(#loc135)
  cir.func private @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc136)
  cir.func private @_ZNSolsEi(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc137)
  cir.func private @_ZNSolsEd(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.double) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc138)
  cir.global "private" constant cir_private dso_local @".str.4" = #cir.const_array<"? \00" : !cir.array<!s8i x 3>> : !cir.array<!s8i x 3> {alignment = 1 : i64} loc(#loc59)
  cir.func private @_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>) special_member<#cir.cxx_dtor<!rec_std3A3Abasic_ofstream3Cchar3E>> extra(#fn_attr) loc(#loc139)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr2) {
    %0 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["tmp.try.call.res"] {alignment = 1 : i64} loc(#loc64)
    %1 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc65)
    %2 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc66)
    %3 = cir.alloca !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc67)
    %4 = cir.alloca !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc68)
    %5 = cir.alloca !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc69)
    %6 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["tmp.try.call.res"] {alignment = 1 : i64} loc(#loc70)
    %7 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc71)
    %8 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc72)
    %9 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc73)
    %10 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc74)
    %11 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc75)
    %12 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc76)
    %13 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc77)
    %14 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc63)
    %15 = cir.alloca !rec_std3A3Abasic_ofstream3Cchar3E, !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>, ["outClientFile", init] {alignment = 8 : i64} loc(#loc141)
    %16 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc80)
    %17 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc81)
    %18 = cir.alloca !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, ["tmp.try.call.res"] {alignment = 8 : i64} loc(#loc82)
    %19 = cir.alloca !s32i, !cir.ptr<!s32i>, ["account"] {alignment = 4 : i64} loc(#loc142)
    %20 = cir.alloca !cir.array<!s8i x 30>, !cir.ptr<!cir.array<!s8i x 30>>, ["name"] {alignment = 16 : i64} loc(#loc143)
    %21 = cir.alloca !cir.double, !cir.ptr<!cir.double>, ["balance"] {alignment = 8 : i64} loc(#loc144)
    %22 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 12>> loc(#loc1)
    %23 = cir.cast array_to_ptrdecay %22 : !cir.ptr<!cir.array<!s8i x 12>> -> !cir.ptr<!s8i> loc(#loc1)
    %24 = cir.const #cir.int<16> : !s32i loc(#loc145)
    cir.call @_ZNSt14basic_ofstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode(%15, %23, %24) : (!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>, !cir.ptr<!s8i>, !s32i) -> () loc(#loc91)
    cir.br ^bb1 loc(#loc146)
  ^bb1:  // pred: ^bb0
    %25 = cir.vtable.get_vptr %15 : !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> -> !cir.ptr<!cir.vptr> loc(#loc94)
    %26 = cir.load align(8) %25 : !cir.ptr<!cir.vptr>, !cir.vptr loc(#loc94)
    %27 = cir.cast bitcast %26 : !cir.vptr -> !cir.ptr<!u8i> loc(#loc94)
    %28 = cir.const #cir.int<-24> : !s64i loc(#loc94)
    %29 = cir.ptr_stride %27, %28 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc94)
    %30 = cir.cast bitcast %29 : !cir.ptr<!u8i> -> !cir.ptr<!s64i> loc(#loc94)
    %31 = cir.load align(8) %30 : !cir.ptr<!s64i>, !s64i loc(#loc94)
    %32 = cir.cast bitcast %15 : !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> -> !cir.ptr<!u8i> loc(#loc141)
    %33 = cir.ptr_stride %32, %31 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc94)
    %34 = cir.cast bitcast %33 : !cir.ptr<!u8i> -> !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> loc(#loc94)
    %35 = cir.cast bitcast %34 : !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> -> !cir.ptr<!rec_std3A3Abasic_ios3Cchar3E> loc(#loc94)
    cir.br ^bb2 loc(#loc95)
  ^bb2:  // pred: ^bb1
    %36 = cir.try_call @_ZNKSt9basic_iosIcSt11char_traitsIcEEntEv(%35) ^bb3, ^bb4 : (!cir.ptr<!rec_std3A3Abasic_ios3Cchar3E>) -> !cir.bool loc(#loc64)
  ^bb3:  // pred: ^bb2
    cir.store align(1) %36, %0 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc64)
    cir.br ^bb6 loc(#loc95)
  ^bb4:  // pred: ^bb2
    %exception_ptr, %type_id = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.call @_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(%15) : (!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc139)
    cir.br ^bb5(%exception_ptr, %type_id : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb5(%37: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %38: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb4
    cir.resume.flat %37, %38 loc(#loc95)
  ^bb6:  // pred: ^bb3
    %39 = cir.load align(1) %0 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc64)
    cir.brcond %39 ^bb7, ^bb18 loc(#loc147)
  ^bb7:  // pred: ^bb6
    %40 = cir.get_global @_ZSt4cerr : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc117)
    %41 = cir.get_global @".str.1" : !cir.ptr<!cir.array<!s8i x 25>> loc(#loc10)
    %42 = cir.cast array_to_ptrdecay %41 : !cir.ptr<!cir.array<!s8i x 25>> -> !cir.ptr<!s8i> loc(#loc10)
    cir.br ^bb8 loc(#loc95)
  ^bb8:  // pred: ^bb7
    %43 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%40, %42) ^bb9, ^bb10 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc65)
  ^bb9:  // pred: ^bb8
    cir.store align(8) %43, %1 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc65)
    cir.br ^bb12 loc(#loc95)
  ^bb10:  // pred: ^bb8
    %exception_ptr_0, %type_id_1 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb11(%exception_ptr_0, %type_id_1 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb11(%44: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %45: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb10
    cir.resume.flat %44, %45 loc(#loc95)
  ^bb12:  // pred: ^bb9
    %46 = cir.load align(8) %1 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc65)
    %47 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc97)
    cir.br ^bb13 loc(#loc95)
  ^bb13:  // pred: ^bb12
    %48 = cir.try_call @_ZNSolsEPFRSoS_E(%46, %47) ^bb14, ^bb15 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc66)
  ^bb14:  // pred: ^bb13
    cir.store align(8) %48, %2 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc66)
    cir.br ^bb17 loc(#loc95)
  ^bb15:  // pred: ^bb13
    %exception_ptr_2, %type_id_3 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb16(%exception_ptr_2, %type_id_3 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb16(%49: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %50: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb15
    cir.resume.flat %49, %50 loc(#loc95)
  ^bb17:  // pred: ^bb14
    %51 = cir.const #cir.int<1> : !s32i loc(#loc98)
    cir.call @exit(%51) : (!s32i) -> () extra(#fn_attr) loc(#loc99)
    cir.br ^bb18 loc(#loc93)
  ^bb18:  // 2 preds: ^bb6, ^bb17
    cir.br ^bb19 loc(#loc93)
  ^bb19:  // pred: ^bb18
    %52 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc121)
    %53 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 38>> loc(#loc19)
    %54 = cir.cast array_to_ptrdecay %53 : !cir.ptr<!cir.array<!s8i x 38>> -> !cir.ptr<!s8i> loc(#loc19)
    cir.br ^bb20 loc(#loc95)
  ^bb20:  // pred: ^bb19
    %55 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%52, %54) ^bb21, ^bb22 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc80)
  ^bb21:  // pred: ^bb20
    cir.store align(8) %55, %16 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc80)
    cir.br ^bb24 loc(#loc95)
  ^bb22:  // pred: ^bb20
    %exception_ptr_4, %type_id_5 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb23(%exception_ptr_4, %type_id_5 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb23(%56: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %57: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb22
    cir.resume.flat %56, %57 loc(#loc95)
  ^bb24:  // pred: ^bb21
    %58 = cir.load align(8) %16 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc80)
    %59 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc100)
    cir.br ^bb25 loc(#loc95)
  ^bb25:  // pred: ^bb24
    %60 = cir.try_call @_ZNSolsEPFRSoS_E(%58, %59) ^bb26, ^bb27 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc81)
  ^bb26:  // pred: ^bb25
    cir.store align(8) %60, %17 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc81)
    cir.br ^bb29 loc(#loc95)
  ^bb27:  // pred: ^bb25
    %exception_ptr_6, %type_id_7 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb28(%exception_ptr_6, %type_id_7 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb28(%61: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %62: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb27
    cir.resume.flat %61, %62 loc(#loc95)
  ^bb29:  // pred: ^bb26
    %63 = cir.load align(8) %17 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc81)
    %64 = cir.get_global @".str.3" : !cir.ptr<!cir.array<!s8i x 35>> loc(#loc20)
    %65 = cir.cast array_to_ptrdecay %64 : !cir.ptr<!cir.array<!s8i x 35>> -> !cir.ptr<!s8i> loc(#loc20)
    cir.br ^bb30 loc(#loc95)
  ^bb30:  // pred: ^bb29
    %66 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%63, %65) ^bb31, ^bb32 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc82)
  ^bb31:  // pred: ^bb30
    cir.store align(8) %66, %18 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc82)
    cir.br ^bb34 loc(#loc95)
  ^bb32:  // pred: ^bb30
    %exception_ptr_8, %type_id_9 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb33(%exception_ptr_8, %type_id_9 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb33(%67: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %68: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb32
    cir.resume.flat %67, %68 loc(#loc95)
  ^bb34:  // pred: ^bb31
    cir.br ^bb35 loc(#loc148)
  ^bb35:  // pred: ^bb34
    cir.br ^bb36 loc(#loc148)
  ^bb36:  // 2 preds: ^bb35, ^bb94
    %69 = cir.get_global @_ZSt3cin : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc132)
    cir.br ^bb37 loc(#loc95)
  ^bb37:  // pred: ^bb36
    %70 = cir.try_call @_ZNSirsERi(%69, %19) ^bb38, ^bb39 : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s32i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc67)
  ^bb38:  // pred: ^bb37
    cir.store align(8) %70, %3 : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>> loc(#loc67)
    cir.br ^bb41 loc(#loc95)
  ^bb39:  // pred: ^bb37
    %exception_ptr_10, %type_id_11 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb40(%exception_ptr_10, %type_id_11 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb40(%71: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %72: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb39
    cir.resume.flat %71, %72 loc(#loc95)
  ^bb41:  // pred: ^bb38
    %73 = cir.load align(8) %3 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc67)
    %74 = cir.cast array_to_ptrdecay %20 : !cir.ptr<!cir.array<!s8i x 30>> -> !cir.ptr<!s8i> loc(#loc103)
    cir.br ^bb42 loc(#loc95)
  ^bb42:  // pred: ^bb41
    %75 = cir.try_call @_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_(%73, %74) ^bb43, ^bb44 : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc68)
  ^bb43:  // pred: ^bb42
    cir.store align(8) %75, %4 : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>> loc(#loc68)
    cir.br ^bb46 loc(#loc95)
  ^bb44:  // pred: ^bb42
    %exception_ptr_12, %type_id_13 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb45(%exception_ptr_12, %type_id_13 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb45(%76: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %77: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb44
    cir.resume.flat %76, %77 loc(#loc95)
  ^bb46:  // pred: ^bb43
    %78 = cir.load align(8) %4 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc68)
    cir.br ^bb47 loc(#loc95)
  ^bb47:  // pred: ^bb46
    %79 = cir.try_call @_ZNSirsERd(%78, %21) ^bb48, ^bb49 : (!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.double>) -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc69)
  ^bb48:  // pred: ^bb47
    cir.store align(8) %79, %5 : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>> loc(#loc69)
    cir.br ^bb51 loc(#loc95)
  ^bb49:  // pred: ^bb47
    %exception_ptr_14, %type_id_15 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb50(%exception_ptr_14, %type_id_15 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb50(%80: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %81: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb49
    cir.resume.flat %80, %81 loc(#loc95)
  ^bb51:  // pred: ^bb48
    %82 = cir.load align(8) %5 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_istream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc69)
    %83 = cir.vtable.get_vptr %82 : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> -> !cir.ptr<!cir.vptr> loc(#loc70)
    %84 = cir.load align(8) %83 : !cir.ptr<!cir.vptr>, !cir.vptr loc(#loc70)
    %85 = cir.cast bitcast %84 : !cir.vptr -> !cir.ptr<!u8i> loc(#loc70)
    %86 = cir.const #cir.int<-24> : !s64i loc(#loc70)
    %87 = cir.ptr_stride %85, %86 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc70)
    %88 = cir.cast bitcast %87 : !cir.ptr<!u8i> -> !cir.ptr<!s64i> loc(#loc70)
    %89 = cir.load align(8) %88 : !cir.ptr<!s64i>, !s64i loc(#loc70)
    %90 = cir.cast bitcast %82 : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> -> !cir.ptr<!u8i> loc(#loc69)
    %91 = cir.ptr_stride %90, %89 : (!cir.ptr<!u8i>, !s64i) -> !cir.ptr<!u8i> loc(#loc70)
    %92 = cir.cast bitcast %91 : !cir.ptr<!u8i> -> !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> loc(#loc70)
    %93 = cir.cast bitcast %92 : !cir.ptr<!rec_std3A3Abasic_istream3Cchar3E> -> !cir.ptr<!rec_std3A3Abasic_ios3Cchar3E> loc(#loc70)
    cir.br ^bb52 loc(#loc95)
  ^bb52:  // pred: ^bb51
    %94 = cir.try_call @_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv(%93) ^bb53, ^bb54 : (!cir.ptr<!rec_std3A3Abasic_ios3Cchar3E>) -> !cir.bool loc(#loc70)
  ^bb53:  // pred: ^bb52
    cir.store align(1) %94, %6 : !cir.bool, !cir.ptr<!cir.bool> loc(#loc70)
    cir.br ^bb56 loc(#loc95)
  ^bb54:  // pred: ^bb52
    %exception_ptr_16, %type_id_17 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb55(%exception_ptr_16, %type_id_17 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb55(%95: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %96: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb54
    cir.resume.flat %95, %96 loc(#loc95)
  ^bb56:  // pred: ^bb53
    %97 = cir.load align(1) %6 : !cir.ptr<!cir.bool>, !cir.bool loc(#loc70)
    cir.brcond %97 ^bb57, ^bb95 loc(#loc70)
  ^bb57:  // pred: ^bb56
    cir.br ^bb58 loc(#loc149)
  ^bb58:  // pred: ^bb57
    %98 = cir.base_class_addr %15 : !cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E> nonnull [0] -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc105)
    %99 = cir.load align(4) %19 : !cir.ptr<!s32i>, !s32i loc(#loc106)
    cir.br ^bb59 loc(#loc95)
  ^bb59:  // pred: ^bb58
    %100 = cir.try_call @_ZNSolsEi(%98, %99) ^bb60, ^bb61 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s32i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc71)
  ^bb60:  // pred: ^bb59
    cir.store align(8) %100, %7 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc71)
    cir.br ^bb63 loc(#loc95)
  ^bb61:  // pred: ^bb59
    %exception_ptr_18, %type_id_19 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb62(%exception_ptr_18, %type_id_19 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb62(%101: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %102: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb61
    cir.resume.flat %101, %102 loc(#loc95)
  ^bb63:  // pred: ^bb60
    %103 = cir.load align(8) %7 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc71)
    %104 = cir.const #cir.int<32> : !s8i loc(#loc107)
    cir.br ^bb64 loc(#loc95)
  ^bb64:  // pred: ^bb63
    %105 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(%103, %104) ^bb65, ^bb66 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc72)
  ^bb65:  // pred: ^bb64
    cir.store align(8) %105, %8 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc72)
    cir.br ^bb68 loc(#loc95)
  ^bb66:  // pred: ^bb64
    %exception_ptr_20, %type_id_21 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb67(%exception_ptr_20, %type_id_21 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb67(%106: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %107: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb66
    cir.resume.flat %106, %107 loc(#loc95)
  ^bb68:  // pred: ^bb65
    %108 = cir.load align(8) %8 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc72)
    %109 = cir.cast array_to_ptrdecay %20 : !cir.ptr<!cir.array<!s8i x 30>> -> !cir.ptr<!s8i> loc(#loc108)
    cir.br ^bb69 loc(#loc95)
  ^bb69:  // pred: ^bb68
    %110 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%108, %109) ^bb70, ^bb71 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc73)
  ^bb70:  // pred: ^bb69
    cir.store align(8) %110, %9 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc73)
    cir.br ^bb73 loc(#loc95)
  ^bb71:  // pred: ^bb69
    %exception_ptr_22, %type_id_23 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb72(%exception_ptr_22, %type_id_23 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb72(%111: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %112: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb71
    cir.resume.flat %111, %112 loc(#loc95)
  ^bb73:  // pred: ^bb70
    %113 = cir.load align(8) %9 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc73)
    %114 = cir.const #cir.int<32> : !s8i loc(#loc109)
    cir.br ^bb74 loc(#loc95)
  ^bb74:  // pred: ^bb73
    %115 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c(%113, %114) ^bb75, ^bb76 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !s8i) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc74)
  ^bb75:  // pred: ^bb74
    cir.store align(8) %115, %10 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc74)
    cir.br ^bb78 loc(#loc95)
  ^bb76:  // pred: ^bb74
    %exception_ptr_24, %type_id_25 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb77(%exception_ptr_24, %type_id_25 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb77(%116: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %117: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb76
    cir.resume.flat %116, %117 loc(#loc95)
  ^bb78:  // pred: ^bb75
    %118 = cir.load align(8) %10 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc74)
    %119 = cir.load align(8) %21 : !cir.ptr<!cir.double>, !cir.double loc(#loc110)
    cir.br ^bb79 loc(#loc95)
  ^bb79:  // pred: ^bb78
    %120 = cir.try_call @_ZNSolsEd(%118, %119) ^bb80, ^bb81 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.double) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc75)
  ^bb80:  // pred: ^bb79
    cir.store align(8) %120, %11 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc75)
    cir.br ^bb83 loc(#loc95)
  ^bb81:  // pred: ^bb79
    %exception_ptr_26, %type_id_27 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb82(%exception_ptr_26, %type_id_27 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb82(%121: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %122: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb81
    cir.resume.flat %121, %122 loc(#loc95)
  ^bb83:  // pred: ^bb80
    %123 = cir.load align(8) %11 : !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>, !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc75)
    %124 = cir.get_global @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_ : !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>> loc(#loc111)
    cir.br ^bb84 loc(#loc95)
  ^bb84:  // pred: ^bb83
    %125 = cir.try_call @_ZNSolsEPFRSoS_E(%123, %124) ^bb85, ^bb86 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.func<(!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>>>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc76)
  ^bb85:  // pred: ^bb84
    cir.store align(8) %125, %12 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc76)
    cir.br ^bb88 loc(#loc95)
  ^bb86:  // pred: ^bb84
    %exception_ptr_28, %type_id_29 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.br ^bb87(%exception_ptr_28, %type_id_29 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb87(%126: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %127: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb86
    cir.resume.flat %126, %127 loc(#loc95)
  ^bb88:  // pred: ^bb85
    %128 = cir.get_global @_ZSt4cout : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc121)
    %129 = cir.get_global @".str.4" : !cir.ptr<!cir.array<!s8i x 3>> loc(#loc59)
    %130 = cir.cast array_to_ptrdecay %129 : !cir.ptr<!cir.array<!s8i x 3>> -> !cir.ptr<!s8i> loc(#loc59)
    cir.br ^bb89 loc(#loc95)
  ^bb89:  // pred: ^bb88
    %131 = cir.try_call @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%128, %130) ^bb90, ^bb91 : (!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!s8i>) -> !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E> loc(#loc77)
  ^bb90:  // pred: ^bb89
    cir.store align(8) %131, %13 : !cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>, !cir.ptr<!cir.ptr<!rec_std3A3Abasic_ostream3Cchar3E>> loc(#loc77)
    cir.br ^bb93 loc(#loc95)
  ^bb91:  // pred: ^bb89
    %exception_ptr_30, %type_id_31 = cir.eh.inflight_exception cleanup loc(#loc95)
    cir.call @_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(%15) : (!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc139)
    cir.br ^bb92(%exception_ptr_30, %type_id_31 : !cir.ptr<!void>, !u32i) loc(#loc95)
  ^bb92(%132: !cir.ptr<!void> loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5), %133: !u32i loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:5)):  // pred: ^bb91
    cir.resume.flat %132, %133 loc(#loc95)
  ^bb93:  // pred: ^bb90
    cir.br ^bb94 loc(#loc102)
  ^bb94:  // pred: ^bb93
    cir.br ^bb36 loc(#loc102)
  ^bb95:  // pred: ^bb56
    cir.br ^bb96 loc(#loc102)
  ^bb96:  // pred: ^bb95
    %134 = cir.const #cir.int<0> : !s32i loc(#loc112)
    cir.store align(4) %134, %14 : !s32i, !cir.ptr<!s32i> loc(#loc150)
    cir.call @_ZNSt14basic_ofstreamIcSt11char_traitsIcEED1Ev(%15) : (!cir.ptr<!rec_std3A3Abasic_ofstream3Cchar3E>) -> () extra(#fn_attr) loc(#loc139)
    %135 = cir.load align(4) %14 : !cir.ptr<!s32i>, !s32i loc(#loc150)
    cir.return %135 : !s32i loc(#loc150)
  } loc(#loc140)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":0:0)
#loc1 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":27:28)
#loc2 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":844:7)
#loc3 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":851:7)
#loc4 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_ios.h":131:7)
#loc5 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_ios.h":134:30)
#loc6 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":733:5)
#loc7 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":742:5)
#loc8 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":66:3)
#loc9 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":66:18)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":31:15)
#loc11 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":115:7)
#loc12 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":122:7)
#loc13 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":65:5)
#loc14 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/ostream":67:49)
#loc15 = loc("/usr/include/stdlib.h":778:1)
#loc16 = loc("/usr/include/stdlib.h":778:70)
#loc17 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:3)
#loc18 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":65:18)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":36:12)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":37:12)
#loc21 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":865:3)
#loc22 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":865:53)
#loc23 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":896:5)
#loc24 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":936:5)
#loc29 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":931:4)
#loc30 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":931:62)
#loc31 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":899:5)
#loc32 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":929:2)
#loc33 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":934:2)
#loc34 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":931:21)
#loc35 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":932:11)
#loc36 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":932:24)
#loc37 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":932:8)
#loc38 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":932:4)
#loc39 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":933:27)
#loc40 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":933:33)
#loc41 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":933:38)
#loc42 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":933:4)
#loc43 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":935:14)
#loc44 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":935:7)
#loc45 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:3)
#loc46 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/iostream":64:18)
#loc47 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":182:7)
#loc48 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":183:26)
#loc49 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":224:7)
#loc50 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/istream":226:33)
#loc51 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_ios.h":123:7)
#loc52 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/basic_ios.h":125:31)
#loc53 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":641:5)
#loc54 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":648:5)
#loc55 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":196:7)
#loc56 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":197:25)
#loc57 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":230:7)
#loc58 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/ostream.h":232:32)
#loc59 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":47:15)
#loc60 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":917:7)
#loc61 = loc("/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/fstream":918:9)
#loc62 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":24:1)
#loc63 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":53:1)
#loc64 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":30:9)
#loc65 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":31:12)
#loc66 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":31:42)
#loc67 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":44:16)
#loc68 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":44:27)
#loc69 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":44:35)
#loc70 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":44:12)
#loc71 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:21)
#loc72 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:32)
#loc73 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:39)
#loc74 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:47)
#loc75 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:54)
#loc76 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":46:21)
#loc77 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":47:12)
#loc78 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":27:4)
#loc79 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":27:52)
#loc80 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":36:9)
#loc81 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":36:52)
#loc82 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":37:9)
#loc83 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":39:4)
#loc84 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":39:8)
#loc85 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":40:4)
#loc86 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":40:18)
#loc87 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":41:4)
#loc88 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":41:11)
#loc89 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":27:43)
#loc90 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":27:48)
#loc91 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":27:13)
#loc92 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":30:4)
#loc93 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":34:4)
#loc94 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":30:10)
#loc96 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":30:26)
#loc97 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":31:45)
#loc98 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":32:13)
#loc99 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":32:7)
#loc100 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":36:55)
#loc101 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":44:4)
#loc102 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":49:4)
#loc103 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":44:30)
#loc104 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":44:48)
#loc105 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:7)
#loc106 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:24)
#loc107 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:35)
#loc108 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:42)
#loc109 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:50)
#loc110 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":45:57)
#loc111 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":46:24)
#loc112 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":51:11)
#loc113 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch14_2/main.cpp":51:4)
#loc114 = loc(fused[#loc2, #loc3])
#loc115 = loc(fused[#loc4, #loc5])
#loc116 = loc(fused[#loc6, #loc7])
#loc117 = loc(fused[#loc8, #loc9])
#loc118 = loc(fused[#loc11, #loc12])
#loc119 = loc(fused[#loc13, #loc14])
#loc120 = loc(fused[#loc15, #loc16])
#loc121 = loc(fused[#loc17, #loc18])
#loc122 = loc(fused[#loc21, #loc22])
#loc123 = loc(fused[#loc23, #loc24])
#loc126 = loc(fused[#loc29, #loc30])
#loc127 = loc(fused[#loc32, #loc33])
#loc128 = loc(fused[#loc34, #loc30])
#loc129 = loc(fused[#loc35, #loc36])
#loc130 = loc(fused[#loc38, #loc36])
#loc131 = loc(fused[#loc44, #loc43])
#loc132 = loc(fused[#loc45, #loc46])
#loc133 = loc(fused[#loc47, #loc48])
#loc134 = loc(fused[#loc49, #loc50])
#loc135 = loc(fused[#loc51, #loc52])
#loc136 = loc(fused[#loc53, #loc54])
#loc137 = loc(fused[#loc55, #loc56])
#loc138 = loc(fused[#loc57, #loc58])
#loc139 = loc(fused[#loc60, #loc61])
#loc140 = loc(fused[#loc62, #loc63])
#loc141 = loc(fused[#loc78, #loc79])
#loc142 = loc(fused[#loc83, #loc84])
#loc143 = loc(fused[#loc85, #loc86])
#loc144 = loc(fused[#loc87, #loc88])
#loc145 = loc(fused[#loc89, #loc90])
#loc146 = loc(fused[#loc92, #loc93])
#loc147 = loc(fused[#loc96, #loc93])
#loc148 = loc(fused[#loc101, #loc102])
#loc149 = loc(fused[#loc104, #loc102])
#loc150 = loc(fused[#loc113, #loc112])
