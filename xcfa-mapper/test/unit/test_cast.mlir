// Test: cir.cast operation
module {
  cir.func @test_cast() -> !cir.int<s, 64> {
    %0 = cir.const #cir.int<42> : !cir.int<s, 32>
    %1 = cir.cast integral %0 : !cir.int<s, 32> -> !cir.int<s, 64>
    cir.return %1 : !cir.int<s, 64>
  }
}
