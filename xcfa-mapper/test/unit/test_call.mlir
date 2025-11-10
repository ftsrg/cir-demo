// Test: cir.call operation
module {
  cir.func @helper(%arg0: !cir.int<s, 32>) -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<1> : !cir.int<s, 32>
    %1 = cir.binop(add, %arg0, %0) : !cir.int<s, 32>
    cir.return %1 : !cir.int<s, 32>
  }
  
  cir.func @test_call() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<10> : !cir.int<s, 32>
    %1 = cir.call @helper(%0) : (!cir.int<s, 32>) -> !cir.int<s, 32>
    cir.return %1 : !cir.int<s, 32>
  }
}
