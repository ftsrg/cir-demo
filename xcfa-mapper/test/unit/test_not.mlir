// Unit test: distinguish logical not on bool vs bitwise not on int
module {
  // Logical not on bool: return !(_Bool)1 -> 0
  cir.func @test_logical_not() -> !cir.int<s, 32> {
    %c1 = cir.const #cir.int<1> : !cir.int<s, 32>
    %b = cir.cast int_to_bool %c1 : !cir.int<s, 32> -> !cir.bool
    %nb = cir.unary(not, %b) : !cir.bool, !cir.bool
    %i = cir.cast bool_to_int %nb : !cir.bool -> !cir.int<s, 32>
    cir.return %i : !cir.int<s, 32>
  }

  // Bitwise not on int: return ~0xF0
  cir.func @test_bitwise_not() -> !cir.int<s, 32> {
    %c = cir.const #cir.int<240> : !cir.int<s, 32>
    %r = cir.unary(not, %c) : !cir.int<s, 32>, !cir.int<s, 32>
    cir.return %r : !cir.int<s, 32>
  }
}
