// Centralized error message definitions used by the mapper and handlers.
// Messages intentionally do not include trailing newlines so callers can
// decide whether to write to stderr or into the generated C (as a comment).
#pragma once

#define ERR_ALLOCA_NO_NAME "Alloca: unable to determine a precise name for allocation"
#define ERR_CONSTANT_NO_LITERAL "Constant: no integer literal found for cir.const"
#define ERR_CALL_NO_CALLEE "Call: unable to determine callee for cir.call"
#define ERR_BRCOND_NO_SUCCESSORS "BrCond: insufficient successors for cir.brcond"
#define ERR_CMP_NO_PRED "Cmp: missing or unknown predicate attribute for cir.cmp"
#define ERR_HANDLER_FAILED_PREFIX "Handler failed for op: "
#define ERR_CIRFUNC_NO_SYMBOL "cir.func without symbol - skipping"
#define ERR_MAPPING_FAILED "Mapping failed."
#define ERR_NO_HANDLER_PREFIX "No handler registered for op: "
