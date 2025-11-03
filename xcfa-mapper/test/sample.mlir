// Simplified CIR MLIR excerpt for testing mapping.
module {
  cir.func @main() -> !s32i {
    %0 = cir.alloca !s32i, !cir.ptr<!s32i>, ["__retval"] {alignment = 4 : i64}
    %1 = cir.alloca !s32i, !cir.ptr<!s32i>, ["i", "init"] {alignment = 4 : i64}
    %2 = cir.call @_Z21__VERIFIER_nondet_intv() : () -> !s32i
    cir.store %2, %1 : !s32i, !cir.ptr<!s32i>
    cir.br ^bb1
  ^bb1:
    %3 = cir.load %1 : !cir.ptr<!s32i>, !s32i
    %4 = cir.const 0 : !s32i
    %5 = cir.cmp "lt", %3, %4 : !s32i, !cir.bool
    cir.brcond %5 ^bb2, ^bb7
  ^bb2:
    cir.br ^bb3
  ^bb3:
    %6 = cir.load %1 : !cir.ptr<!s32i>, !s32i
    %7 = cir.const 1 : !s32i
    %8 = cir.cmp "gt", %6, %7 : !s32i, !cir.bool
    cir.brcond %8 ^bb4, ^bb5
  ^bb4:
    cir.call @_Z11reach_errorv() : () -> ()
    cir.br ^bb5
  ^bb5:
    cir.br ^bb6
  ^bb6:
    cir.br ^bb7
  ^bb7:
    cir.br ^bb8
  ^bb8:
    %9 = cir.load %0 : !cir.ptr<!s32i>, !s32i
    cir.return %9 : !s32i
  }
}
