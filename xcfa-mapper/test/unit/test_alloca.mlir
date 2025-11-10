// Test: cir.alloca operation
module {
  cir.func @test_alloca() -> !cir.int<s, 32> {
    %0 = cir.alloca !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>, ["x"] {alignment = 4 : i64}
    %1 = cir.const #cir.int<42> : !cir.int<s, 32>
    cir.store %1, %0 : !cir.int<s, 32>, !cir.ptr<!cir.int<s, 32>>
    %2 = cir.load %0 : !cir.ptr<!cir.int<s, 32>>, !cir.int<s, 32>
    cir.return %2 : !cir.int<s, 32>
  }
}
