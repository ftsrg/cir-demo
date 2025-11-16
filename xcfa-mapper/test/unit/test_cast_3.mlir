// Test: cir.cast (floating to integral)
module {
  cir.func @test_float_to_int() -> !cir.int<s, 32> {
    %0 = cir.const #cir.fp<2.7> : !cir.float
    %1 = cir.cast float_to_int %0 : !cir.float -> !cir.int<s, 32>
    cir.return %1 : !cir.int<s, 32>
  }
}
