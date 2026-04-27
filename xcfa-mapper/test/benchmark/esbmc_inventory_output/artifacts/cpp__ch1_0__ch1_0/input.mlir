!s32i = !cir.int<s, 32>
!s8i = !cir.int<s, 8>
!u32i = !cir.int<u, 32>
#fn_attr = #cir<extra({nothrow = #cir.nothrow})>
#fn_attr1 = #cir<extra({nothrow = #cir.nothrow, uwtable = #cir.uwtable<async>})>
#true = #cir.bool<true> : !cir.bool
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @__assert_fail(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) extra(#fn_attr) loc(#loc11)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"0\00" : !cir.array<!s8i x 2>> : !cir.array<!s8i x 2> {alignment = 1 : i64} loc(#loc3)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp\00" : !cir.array<!s8i x 84>> : !cir.array<!s8i x 84> {alignment = 1 : i64} loc(#loc4)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"int main()\00" : !cir.array<!s8i x 11>> : !cir.array<!s8i x 11> {alignment = 1 : i64} loc(#loc3)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc6)
    cir.br ^bb1 loc(#loc13)
  ^bb1:  // pred: ^bb0
    %1 = cir.const #true loc(#loc8)
    cir.brcond %1 ^bb2, ^bb3 loc(#loc3)
  ^bb2:  // pred: ^bb1
    %2 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 2>> loc(#loc3)
    %3 = cir.cast array_to_ptrdecay %2 : !cir.ptr<!cir.array<!s8i x 2>> -> !cir.ptr<!s8i> loc(#loc3)
    %4 = cir.const #cir.global_view<@".str.1"> : !cir.ptr<!s8i> loc(#loc3)
    %5 = cir.const #cir.int<13> : !u32i loc(#loc3)
    %6 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 11>> loc(#loc3)
    %7 = cir.cast array_to_ptrdecay %6 : !cir.ptr<!cir.array<!s8i x 11>> -> !cir.ptr<!s8i> loc(#loc3)
    cir.call @__assert_fail(%3, %4, %5, %7) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) -> () extra(#fn_attr) loc(#loc3)
    cir.br ^bb3 loc(#loc3)
  ^bb3:  // 2 preds: ^bb1, ^bb2
    cir.br ^bb4 loc(#loc3)
  ^bb4:  // pred: ^bb3
    %8 = cir.const #cir.int<0> : !s32i loc(#loc9)
    cir.store align(4) %8, %0 : !s32i, !cir.ptr<!s32i> loc(#loc14)
    %9 = cir.load align(4) %0 : !cir.ptr<!s32i>, !s32i loc(#loc14)
    cir.return %9 : !s32i loc(#loc14)
  } loc(#loc12)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp":0:0)
#loc1 = loc("/usr/include/assert.h":95:1)
#loc2 = loc("/usr/include/assert.h":97:45)
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp":13:5)
#loc4 = loc(unknown)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp":10:1)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp":15:1)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp":12:3)
#loc8 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp":12:8)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp":14:10)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/ch1_0/main.cpp":14:3)
#loc11 = loc(fused[#loc1, #loc2])
#loc12 = loc(fused[#loc5, #loc6])
#loc13 = loc(fused[#loc7, #loc3])
#loc14 = loc(fused[#loc10, #loc9])
