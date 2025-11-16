// Test: cir.cast (integral to pointer)
module {
  cir.func @test_int_to_ptr() -> !cir.ptr<!cir.int<s, 32>> {
    %0 = cir.const #cir.int<1024> : !cir.int<u, 64>
    %1 = cir.cast int_to_ptr %0 : !cir.int<u, 64> -> !cir.ptr<!cir.int<s, 32>>
    cir.return %1 : !cir.ptr<!cir.int<s, 32>>
  }
}
