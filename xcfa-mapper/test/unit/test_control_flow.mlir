// Test: cir.br, cir.brcond, cir.return
module {
  cir.func @test_br() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<0> : !cir.int<s, 32>
    cir.br ^bb1
  ^bb1:
    cir.return %0 : !cir.int<s, 32>
  }
  
  cir.func @test_brcond() -> !cir.int<s, 32> {
    %0 = cir.const #cir.bool<true> : !cir.bool
    %1 = cir.const #cir.int<1> : !cir.int<s, 32>
    %2 = cir.const #cir.int<2> : !cir.int<s, 32>
    cir.brcond %0 ^bb1, ^bb2
  ^bb1:
    cir.return %1 : !cir.int<s, 32>
  ^bb2:
    cir.return %2 : !cir.int<s, 32>
  }
}
