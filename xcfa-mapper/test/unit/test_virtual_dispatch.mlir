// Unit test for CIR vtable / virtual-dispatch operations:
//   cir.vtable.get_vptr, cir.vtable.get_virtual_fn_addr, and the
//   resulting cir.call through a virtual function pointer.
//
// Expected output: the virtual call chain is collapsed into a single
//   __VERIFIER_virtual_call(obj, args...) intrinsic call.

!s32i = !cir.int<s, 32>
!u8i  = !cir.int<u, 8>

!rec_Base = !cir.record<struct "Base" {!cir.vptr}>

module attributes {cir.lang = #cir.lang<cxx>} {
  // Declaration of virtual function (no body)
  cir.func private @_ZN4Base2f2Ev(!cir.ptr<!rec_Base>, !s32i) -> !s32i

  // int f3(Base *b, int x) { return b->f2(x); }
  cir.func @_Z2f3P4Basei(%arg0: !cir.ptr<!rec_Base>, %arg1: !s32i) -> !s32i {
    // Alloca for 'b' parameter
    %0 = cir.alloca !cir.ptr<!rec_Base>, !cir.ptr<!cir.ptr<!rec_Base>>, ["b", init] {alignment = 8 : i64}
    %p = cir.alloca !s32i, !cir.ptr<!s32i>, ["x", init] {alignment = 4 : i64}
    %ret = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64}
    cir.store %arg0, %0 : !cir.ptr<!rec_Base>, !cir.ptr<!cir.ptr<!rec_Base>>
    cir.store %arg1, %p : !s32i, !cir.ptr<!s32i>

    // Load 'b' and 'x'
    %1 = cir.load %0 : !cir.ptr<!cir.ptr<!rec_Base>>, !cir.ptr<!rec_Base>
    %x = cir.load %p : !cir.ptr<!s32i>, !s32i

    // Virtual dispatch chain:
    //   get_vptr -> load vptr -> get_virtual_fn_addr -> load fn ptr -> call
    %2 = cir.vtable.get_vptr %1 : !cir.ptr<!rec_Base> -> !cir.ptr<!cir.vptr>
    %3 = cir.load align(8) %2 : !cir.ptr<!cir.vptr>, !cir.vptr
    %4 = cir.vtable.get_virtual_fn_addr %3[0] : !cir.vptr
            -> !cir.ptr<!cir.ptr<!cir.func<(!cir.ptr<!rec_Base>, !s32i) -> !s32i>>>
    %5 = cir.load align(8) %4
            : !cir.ptr<!cir.ptr<!cir.func<(!cir.ptr<!rec_Base>, !s32i) -> !s32i>>>,
              !cir.ptr<!cir.func<(!cir.ptr<!rec_Base>, !s32i) -> !s32i>>

    // This call should become: __VERIFIER_virtual_call(b, x)
    %6 = cir.call %5(%1, %x) : (!cir.ptr<!cir.func<(!cir.ptr<!rec_Base>, !s32i) -> !s32i>>,
                                  !cir.ptr<!rec_Base>, !s32i) -> !s32i
    cir.store %6, %ret : !s32i, !cir.ptr<!s32i>
    %r = cir.load %ret : !cir.ptr<!s32i>, !s32i
    cir.return %r : !s32i
  }
}
