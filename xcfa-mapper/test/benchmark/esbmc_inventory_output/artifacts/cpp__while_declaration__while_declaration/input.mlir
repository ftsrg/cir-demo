!s32i = !cir.int<s, 32>
!s8i = !cir.int<s, 8>
!u32i = !cir.int<u, 32>
!u64i = !cir.int<u, 64>
!void = !cir.void
#fn_attr = #cir<extra({nothrow = #cir.nothrow})>
#fn_attr1 = #cir<extra({nothrow = #cir.nothrow, uwtable = #cir.uwtable<async>})>
module @"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp" attributes {cir.lang = #cir.lang<cxx>, cir.module_asm = [], cir.sob = #cir.signed_overflow_behavior<undefined>, cir.triple = "x86_64-unknown-linux-gnu", cir.type_size_info = #cir.type_size_info<char = 8, int = 32, size_t = 64>, cir.uwtable = #cir.uwtable<async>, dlti.dl_spec = #dlti.dl_spec<!llvm.ptr<270> = dense<32> : vector<4xi64>, !llvm.ptr<271> = dense<32> : vector<4xi64>, !llvm.ptr<272> = dense<64> : vector<4xi64>, i64 = dense<64> : vector<2xi64>, i128 = dense<128> : vector<2xi64>, f80 = dense<128> : vector<2xi64>, !llvm.ptr = dense<64> : vector<4xi64>, i1 = dense<8> : vector<2xi64>, i8 = dense<8> : vector<2xi64>, i16 = dense<16> : vector<2xi64>, i32 = dense<32> : vector<2xi64>, f16 = dense<16> : vector<2xi64>, f64 = dense<64> : vector<2xi64>, f128 = dense<128> : vector<2xi64>, "dlti.endianness" = "little", "dlti.mangling_mode" = "e", "dlti.legal_int_widths" = array<i32: 8, 16, 32, 64>, "dlti.stack_alignment" = 128 : i64>} {
  cir.func private @_Znwm(!u64i) -> !cir.ptr<!void> loc(#loc)
  cir.func private @__assert_fail(!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) extra(#fn_attr) loc(#loc24)
  cir.global "private" constant cir_private dso_local @".str" = #cir.const_array<"a==5\00" : !cir.array<!s8i x 5>> : !cir.array<!s8i x 5> {alignment = 1 : i64} loc(#loc3)
  cir.global "private" constant cir_private dso_local @".str.1" = #cir.const_array<"/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp\00" : !cir.array<!s8i x 96>> : !cir.array<!s8i x 96> {alignment = 1 : i64} loc(#loc4)
  cir.global "private" constant cir_private dso_local @".str.2" = #cir.const_array<"int main()\00" : !cir.array<!s8i x 11>> : !cir.array<!s8i x 11> {alignment = 1 : i64} loc(#loc3)
  cir.func no_inline optnone dso_local @main() -> !s32i extra(#fn_attr1) {
    %0 = cir.alloca !cir.ptr<!s32i>, !cir.ptr<!cir.ptr<!s32i>>, ["x", init] {alignment = 8 : i64} loc(#loc26)
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64} loc(#loc6)
    %2 = cir.alloca !s32i, !cir.ptr<!s32i>, ["a", init] {alignment = 4 : i64} loc(#loc27)
    %3 = cir.const #cir.int<0> : !s32i loc(#loc10)
    cir.store align(4) %3, %2 : !s32i, !cir.ptr<!s32i> loc(#loc27)
    cir.br ^bb1 loc(#loc28)
  ^bb1:  // pred: ^bb0
    cir.br ^bb2 loc(#loc28)
  ^bb2:  // 2 preds: ^bb1, ^bb9
    %4 = cir.const #cir.int<4> : !u64i loc(#loc29)
    %5 = cir.call @_Znwm(%4) : (!u64i) -> !cir.ptr<!void> loc(#loc26)
    %6 = cir.cast bitcast %5 : !cir.ptr<!void> -> !cir.ptr<!s32i> loc(#loc29)
    cir.store align(8) %6, %0 : !cir.ptr<!s32i>, !cir.ptr<!cir.ptr<!s32i>> loc(#loc26)
    %7 = cir.load align(8) %0 : !cir.ptr<!cir.ptr<!s32i>>, !cir.ptr<!s32i> loc(#loc14)
    %8 = cir.cast ptr_to_bool %7 : !cir.ptr<!s32i> -> !cir.bool loc(#loc14)
    cir.brcond %8 ^bb3, ^bb10 loc(#loc14)
  ^bb3:  // pred: ^bb2
    cir.br ^bb4 loc(#loc30)
  ^bb4:  // pred: ^bb3
    %9 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc16)
    %10 = cir.unary(inc, %9) nsw : !s32i, !s32i loc(#loc16)
    cir.store align(4) %10, %2 : !s32i, !cir.ptr<!s32i> loc(#loc31)
    cir.br ^bb5 loc(#loc32)
  ^bb5:  // pred: ^bb4
    %11 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc20)
    %12 = cir.const #cir.int<5> : !s32i loc(#loc21)
    %13 = cir.cmp(eq, %11, %12) : !s32i, !cir.bool loc(#loc33)
    cir.brcond %13 ^bb6, ^bb7 loc(#loc19)
  ^bb6:  // pred: ^bb5
    cir.br ^bb10 loc(#loc19)
  ^bb7:  // pred: ^bb5
    cir.br ^bb8 loc(#loc19)
  ^bb8:  // pred: ^bb7
    cir.br ^bb9 loc(#loc12)
  ^bb9:  // pred: ^bb8
    cir.br ^bb2 loc(#loc12)
  ^bb10:  // 2 preds: ^bb2, ^bb6
    cir.br ^bb11 loc(#loc12)
  ^bb11:  // pred: ^bb10
    %14 = cir.load align(4) %2 : !cir.ptr<!s32i>, !s32i loc(#loc3)
    %15 = cir.const #cir.int<5> : !s32i loc(#loc3)
    %16 = cir.cmp(eq, %14, %15) : !s32i, !cir.bool loc(#loc3)
    cir.brcond %16 ^bb12, ^bb13 loc(#loc3)
  ^bb12:  // pred: ^bb11
    %17 = cir.const #cir.int<0> : !s32i loc(#loc3)
    cir.br ^bb14 loc(#loc3)
  ^bb13:  // pred: ^bb11
    %18 = cir.get_global @".str" : !cir.ptr<!cir.array<!s8i x 5>> loc(#loc3)
    %19 = cir.cast array_to_ptrdecay %18 : !cir.ptr<!cir.array<!s8i x 5>> -> !cir.ptr<!s8i> loc(#loc3)
    %20 = cir.const #cir.global_view<@".str.1"> : !cir.ptr<!s8i> loc(#loc3)
    %21 = cir.const #cir.int<22> : !u32i loc(#loc3)
    %22 = cir.get_global @".str.2" : !cir.ptr<!cir.array<!s8i x 11>> loc(#loc3)
    %23 = cir.cast array_to_ptrdecay %22 : !cir.ptr<!cir.array<!s8i x 11>> -> !cir.ptr<!s8i> loc(#loc3)
    cir.call @__assert_fail(%19, %20, %21, %23) : (!cir.ptr<!s8i>, !cir.ptr<!s8i>, !u32i, !cir.ptr<!s8i>) -> () extra(#fn_attr) loc(#loc3)
    cir.br ^bb14 loc(#loc3)
  ^bb14:  // 2 preds: ^bb12, ^bb13
    %24 = cir.const #cir.int<0> : !s32i loc(#loc22)
    cir.store align(4) %24, %1 : !s32i, !cir.ptr<!s32i> loc(#loc34)
    %25 = cir.load align(4) %1 : !cir.ptr<!s32i>, !s32i loc(#loc34)
    cir.return %25 : !s32i loc(#loc34)
  } loc(#loc25)
} loc(#loc)
#loc = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":0:0)
#loc1 = loc("/usr/include/assert.h":95:1)
#loc2 = loc("/usr/include/assert.h":97:45)
#loc3 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":22:3)
#loc4 = loc(unknown)
#loc5 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":10:1)
#loc6 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":25:1)
#loc7 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":14:9)
#loc8 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":14:20)
#loc9 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":12:3)
#loc10 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":12:9)
#loc11 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":14:3)
#loc12 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":20:3)
#loc13 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":14:16)
#loc14 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":14:14)
#loc15 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":15:3)
#loc16 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":16:5)
#loc17 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":16:7)
#loc18 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":18:5)
#loc19 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":19:7)
#loc20 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":18:8)
#loc21 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":18:11)
#loc22 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":24:10)
#loc23 = loc("/home/solarowl/Repositories/cir-demo/backend/examples/esbmc-eval/cpp/while_declaration/main.cpp":24:3)
#loc24 = loc(fused[#loc1, #loc2])
#loc25 = loc(fused[#loc5, #loc6])
#loc26 = loc(fused[#loc7, #loc8])
#loc27 = loc(fused[#loc9, #loc10])
#loc28 = loc(fused[#loc11, #loc12])
#loc29 = loc(fused[#loc13, #loc8])
#loc30 = loc(fused[#loc15, #loc12])
#loc31 = loc(fused[#loc16, #loc17])
#loc32 = loc(fused[#loc18, #loc19])
#loc33 = loc(fused[#loc20, #loc21])
#loc34 = loc(fused[#loc23, #loc22])
