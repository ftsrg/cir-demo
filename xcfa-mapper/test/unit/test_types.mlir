// Test: Type mapping from CIR types to C types
// This test verifies that mapTypeToC correctly handles all supported type conversions

!s8i = !cir.int<s, 8>
!u8i = !cir.int<u, 8>
!s16i = !cir.int<s, 16>
!u16i = !cir.int<u, 16>
!s32i = !cir.int<s, 32>
!u32i = !cir.int<u, 32>
!s64i = !cir.int<s, 64>
!u64i = !cir.int<u, 64>

module {
  // Test 1: Signed integer types
  cir.func @test_signed_int8() -> !s8i {
    %0 = cir.const #cir.int<42> : !s8i
    cir.return %0 : !s8i
  }
  
  cir.func @test_signed_int16() -> !s16i {
    %0 = cir.const #cir.int<1000> : !s16i
    cir.return %0 : !s16i
  }
  
  cir.func @test_signed_int32() -> !s32i {
    %0 = cir.const #cir.int<100000> : !s32i
    cir.return %0 : !s32i
  }
  
  cir.func @test_signed_int64() -> !s64i {
    %0 = cir.const #cir.int<9999999999> : !s64i
    cir.return %0 : !s64i
  }
  
  // Test 2: Unsigned integer types
  cir.func @test_unsigned_int8() -> !u8i {
    %0 = cir.const #cir.int<200> : !u8i
    cir.return %0 : !u8i
  }
  
  cir.func @test_unsigned_int16() -> !u16i {
    %0 = cir.const #cir.int<50000> : !u16i
    cir.return %0 : !u16i
  }
  
  cir.func @test_unsigned_int32() -> !u32i {
    %0 = cir.const #cir.int<3000000000> : !u32i
    cir.return %0 : !u32i
  }
  
  cir.func @test_unsigned_int64() -> !u64i {
    %0 = cir.const #cir.int<18000000000> : !u64i
    cir.return %0 : !u64i
  }
  
  // Test 3: Boolean type
  cir.func @test_bool_true() -> !cir.bool {
    %0 = cir.const #cir.bool<true> : !cir.bool
    cir.return %0 : !cir.bool
  }
  
  cir.func @test_bool_false() -> !cir.bool {
    %0 = cir.const #cir.bool<false> : !cir.bool
    cir.return %0 : !cir.bool
  }
  
  // Test 4: Floating-point types
  cir.func @test_float() -> !cir.float {
    %0 = cir.const #cir.fp<3.140000e+00> : !cir.float
    cir.return %0 : !cir.float
  }
  
  cir.func @test_double() -> !cir.double {
    %0 = cir.const #cir.fp<2.718281828459045> : !cir.double
    cir.return %0 : !cir.double
  }
  
  cir.func @test_long_double() -> !cir.long_double<!cir.f80> {
    %0 = cir.const #cir.fp<1.234567890123456789> : !cir.long_double<!cir.f80>
    cir.return %0 : !cir.long_double<!cir.f80>
  }
  
  // Test 5: Void type
  cir.func @test_void() -> !cir.void {
    cir.return
  }
  
  // Test 6: Pointer types - basic
  cir.func @test_pointer_to_int32() {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["x"] {alignment = 4 : i64}
    %1 = cir.const #cir.int<42> : !s32i
    cir.store %1, %0 : !s32i, !cir.ptr<!s32i>
    cir.return
  }
  
  cir.func @test_pointer_to_int8() {
    %0 = cir.alloca !s8i, !cir.ptr<!s8i>, ["c"] {alignment = 1 : i64}
    %1 = cir.const #cir.int<65> : !s8i
    cir.store %1, %0 : !s8i, !cir.ptr<!s8i>
    cir.return
  }
  
  cir.func @test_pointer_to_bool() {
    %0 = cir.alloca !cir.bool, !cir.ptr<!cir.bool>, ["b"] {alignment = 1 : i64}
    %1 = cir.const #cir.bool<true> : !cir.bool
    cir.store %1, %0 : !cir.bool, !cir.ptr<!cir.bool>
    cir.return
  }
  
  cir.func @test_pointer_to_float() {
    %0 = cir.alloca !cir.float, !cir.ptr<!cir.float>, ["f"] {alignment = 4 : i64}
    %1 = cir.const #cir.fp<3.14> : !cir.float
    cir.store %1, %0 : !cir.float, !cir.ptr<!cir.float>
    cir.return
  }
  
  cir.func @test_pointer_to_double() {
    %0 = cir.alloca !cir.double, !cir.ptr<!cir.double>, ["d"] {alignment = 8 : i64}
    %1 = cir.const #cir.fp<2.718> : !cir.double
    cir.store %1, %0 : !cir.double, !cir.ptr<!cir.double>
    cir.return
  }
  
  // Test 7: Pointer to pointer
  cir.func @test_pointer_to_pointer() {
    %0 = cir.alloca !cir.ptr<!s32i>, !cir.ptr<!cir.ptr<!s32i>>, ["pp"] {alignment = 8 : i64}
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["x"] {alignment = 4 : i64}
    cir.store %1, %0 : !cir.ptr<!s32i>, !cir.ptr<!cir.ptr<!s32i>>
    cir.return
  }
  
  // Test 8: Mixed operations with different types
  cir.func @test_mixed_types(%arg0: !s32i, %arg1: !cir.float) -> !s64i {
    %0 = cir.cast integral %arg0 : !s32i -> !s64i
    %1 = cir.cast float_to_int %arg1 : !cir.float -> !s32i
    %2 = cir.cast integral %1 : !s32i -> !s64i
    %3 = cir.binop(add, %0, %2) : !s64i
    cir.return %3 : !s64i
  }
  
  // Test 9: Comparison operations (produce bool)
  cir.func @test_comparison(%arg0: !s32i, %arg1: !s32i) -> !cir.bool {
    %0 = cir.cmp(lt, %arg0, %arg1) : !s32i, !cir.bool
    cir.return %0 : !cir.bool
  }
  
  // Test 10: Load and store with various types
  cir.func @test_load_store_char() {
    %0 = cir.alloca !s8i, !cir.ptr<!s8i>, ["c"] {alignment = 1 : i64}
    %1 = cir.const #cir.int<65> : !s8i
    cir.store %1, %0 : !s8i, !cir.ptr<!s8i>
    %2 = cir.load %0 : !cir.ptr<!s8i>, !s8i
    cir.return
  }
  
  cir.func @test_load_store_unsigned() {
    %0 = cir.alloca !u32i, !cir.ptr<!u32i>, ["u"] {alignment = 4 : i64}
    %1 = cir.const #cir.int<4000000000> : !u32i
    cir.store %1, %0 : !u32i, !cir.ptr<!u32i>
    %2 = cir.load %0 : !cir.ptr<!u32i>, !u32i
    cir.return
  }
}
