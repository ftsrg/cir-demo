/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Centralized error message definitions used by the mapper and handlers.
// Messages intentionally do not include trailing newlines so callers can
// decide whether to write to stderr or into the generated C (as a comment).
#pragma once

#define ERR_ALLOCA_NO_NAME "Alloca: unable to determine a precise name for allocation"
#define ERR_CONSTANT_NO_LITERAL "Constant: no literal value found for cir.const"
#define ERR_CALL_NO_CALLEE "Call: unable to determine callee for cir.call"
#define ERR_BRCOND_NO_SUCCESSORS "BrCond: insufficient successors for cir.brcond"
#define ERR_CMP_NO_PRED "Cmp: missing or unknown predicate attribute for cir.cmp"
#define ERR_BINOP_NO_KIND "BinOp: missing or unknown kind attribute for cir.binop"
#define ERR_UNARY_NO_KIND "UnaryOp: missing or unknown kind attribute for cir.unary"
#define ERR_CAST_NO_KIND "Cast: missing or unknown kind attribute for cir.cast"
#define ERR_SHIFT_NO_KIND "Shift: missing or unknown kind attribute for cir.shift"
#define ERR_SWITCH_NO_CASES "Switch: missing case attributes for cir.switch"
#define ERR_GET_MEMBER_NO_NAME "GetMember: unable to determine member name for cir.get_member"
#define ERR_GET_GLOBAL_NO_NAME "GetGlobal: unable to determine global name for cir.get_global"
#define ERR_GLOBAL_NO_NAME "Global: unable to determine global variable name for cir.global"
#define ERR_HANDLER_FAILED_PREFIX "Handler failed for op: "
#define ERR_CIRFUNC_NO_SYMBOL "cir.func without symbol - skipping"
#define ERR_MAPPING_FAILED "Mapping failed."
#define ERR_NO_HANDLER_PREFIX "No handler registered for op: "
