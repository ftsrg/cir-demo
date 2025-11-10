// Test: cir.const operation with different types
module {
  cir.func @test_const_int() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<123> : !cir.int<s, 32>
    cir.return %0 : !cir.int<s, 32>
  }
  
  cir.func @test_const_bool() -> !cir.bool {
    %0 = cir.const #cir.bool<true> : !cir.bool
    cir.return %0 : !cir.bool
  }
  
  cir.func @test_const_float() -> !cir.float {
    %0 = cir.const #cir.fp<3.140000e+00> : !cir.float
    cir.return %0 : !cir.float
  }
  
  cir.func @test_const_zero_int() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<0> : !cir.int<s, 32>
    cir.return %0 : !cir.int<s, 32>
  }
}
