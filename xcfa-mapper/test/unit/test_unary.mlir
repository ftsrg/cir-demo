// Test: cir.unary operation
module {
  cir.func @test_unary() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<42> : !cir.int<s, 32>
    %1 = cir.unary(minus, %0) : !cir.int<s, 32>, !cir.int<s, 32>
    %2 = cir.unary(plus, %1) : !cir.int<s, 32>, !cir.int<s, 32>
    cir.return %2 : !cir.int<s, 32>
  }
}
