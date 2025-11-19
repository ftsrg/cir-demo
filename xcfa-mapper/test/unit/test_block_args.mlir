// Test: Block arguments (phi nodes)
// This tests that block arguments are properly handled when branching
module {
  cir.func @test_block_args() -> !cir.int<s, 32> {
    %0 = cir.const #cir.int<10> : !cir.int<s, 32>
    %1 = cir.const #cir.int<20> : !cir.int<s, 32>
    %2 = cir.const #cir.int<1> : !cir.int<s, 32>
    %3 = cir.cast int_to_bool %2 : !cir.int<s, 32> -> !cir.bool
    cir.brcond %3 ^bb1(%0 : !cir.int<s, 32>), ^bb1(%1 : !cir.int<s, 32>)
  ^bb1(%4: !cir.int<s, 32>):  // 2 preds with different values
    cir.return %4 : !cir.int<s, 32>
  }
}
