// Copyright 2025 Budapest University of Technology and Economics
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Test: cir.get_bitfield / cir.set_bitfield with unsigned and signed fields.
// Struct Bits { uint8_t val; } where val is the storage byte for two bitfields:
//   unsigned nibble : 4 at offset 0  (bits 3:0)
//   signed   sn     : 2 at offset 4  (bits 5:4)
// Both use get_member index [0] with name "val" (the physical storage field).
!s32i = !cir.int<s, 32>
!u8i  = !cir.int<u, 8>
!u32i = !cir.int<u, 32>

#bfi_nibble = #cir.bitfield_info<name = "nibble", storage_type = !u8i, size = 4, offset = 0, is_signed = false>
#bfi_sn     = #cir.bitfield_info<name = "sn",     storage_type = !u8i, size = 2, offset = 4, is_signed = true>

!rec_Bits = !cir.record<struct "Bits" {!u8i}>

module {
  // Unsigned bitfield read: extract 4-bit nibble from bits 3:0
  cir.func @test_bf_get_unsigned(%arg0: !cir.ptr<!rec_Bits>) -> !u32i {
    %0 = cir.get_member %arg0[0] {name = "val"} : !cir.ptr<!rec_Bits> -> !cir.ptr<!u8i>
    %1 = cir.get_bitfield align(1) (#bfi_nibble, %0 : !cir.ptr<!u8i>) -> !u32i
    cir.return %1 : !u32i
  }

  // Signed bitfield read: extract 2-bit signed field from bits 5:4 with sign extension
  cir.func @test_bf_get_signed(%arg0: !cir.ptr<!rec_Bits>) -> !s32i {
    // Both nibble and sn share storage field "val" at index [0]
    %0 = cir.get_member %arg0[0] {name = "val"} : !cir.ptr<!rec_Bits> -> !cir.ptr<!u8i>
    %1 = cir.get_bitfield align(1) (#bfi_sn, %0 : !cir.ptr<!u8i>) -> !s32i
    cir.return %1 : !s32i
  }

  // Bitfield write: update the 4-bit nibble and return the new bitfield value
  cir.func @test_bf_set(%arg0: !cir.ptr<!rec_Bits>, %arg1: !u32i) -> !u32i {
    %0 = cir.get_member %arg0[0] {name = "val"} : !cir.ptr<!rec_Bits> -> !cir.ptr<!u8i>
    %1 = cir.set_bitfield align(1) (#bfi_nibble, %0 : !cir.ptr<!u8i>, %arg1 : !u32i) -> !u32i
    cir.return %1 : !u32i
  }
}
