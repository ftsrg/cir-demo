// Test: cir.binop operation
module {
  cir.func @test_binop() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<10> : !cir.int<s, 32>
    %1 = cir.const #cir.int<20> : !cir.int<s, 32>
    %2 = cir.binop(add, %0, %1) : !cir.int<s, 32>
    %3 = cir.binop(sub, %2, %1) : !cir.int<s, 32>
    %4 = cir.binop(mul, %3, %1) : !cir.int<s, 32>
    %5 = cir.binop(div, %4, %0) : !cir.int<s, 32>
    cir.return %5 : !cir.int<s, 32>
  }
}
