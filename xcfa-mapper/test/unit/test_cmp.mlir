// Test: cir.cmp operation
module {
  cir.func @test_cmp() -> !cir.bool {
    %0 = cir.const #cir.int<10> : !cir.int<s, 32>
    %1 = cir.const #cir.int<20> : !cir.int<s, 32>
    %2 = cir.cmp(lt, %0, %1) : !cir.int<s, 32>, !cir.bool
    %3 = cir.cmp(gt, %0, %1) : !cir.int<s, 32>, !cir.bool
    %4 = cir.cmp(eq, %0, %1) : !cir.int<s, 32>, !cir.bool
    %5 = cir.cmp(ne, %0, %1) : !cir.int<s, 32>, !cir.bool
    cir.return %2 : !cir.bool
  }
}
