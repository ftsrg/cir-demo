/*
 * SV-COMP reachability task — SAFE (expected verdict: true)
 * Cross-function throw variant.
 *
 * Simulates:
 *   void thrower() { throw 42; }
 *   int main() {
 *       try { thrower(); }
 *       catch (int e) { if (e != 42) __VERIFIER_error(); }
 *   }
 *
 * Tests that longjmp correctly unwinds across a function call boundary.
 * __VERIFIER_error() is unreachable.
 */

#include <setjmp.h>
extern void abort(void);
extern void reach_error(void);

/* --- exception runtime state -------------------------------------------- */
typedef struct __cxx_frame {
    jmp_buf buf;
    struct __cxx_frame *prev;
} __cxx_frame_t;

static __cxx_frame_t *__cxx_frame_top = NULL;
static void          *__cxx_exn_obj   = NULL;
static int            __exn_buf;

/* --- thrower() -------------------------------------------------------------- */
void thrower(void) {
    __exn_buf     = 42;
    __cxx_exn_obj = (void *)&__exn_buf;
    if (__cxx_frame_top == NULL) abort();  /* unhandled throw */
    longjmp(__cxx_frame_top->buf, 1);      /* unwind to nearest try frame */
}

/* --- main ------------------------------------------------------------------- */
int main(void) {
    __cxx_frame_t __frame;
    __frame.prev    = __cxx_frame_top;
    __cxx_frame_top = &__frame;

    if (setjmp(__frame.buf) == 0) {
        thrower();                          /* throws — longjmp jumps over this */
        __cxx_frame_top = __frame.prev;     /* normal exit — not reached */
    } else {
        /* catch (int e) */
        __cxx_frame_top = __frame.prev;

        int e = *(int *)__cxx_exn_obj;
        __cxx_exn_obj = NULL;

        if (e != 42)
            reach_error();             /* UNREACHABLE */
    }

    return 0;
}
