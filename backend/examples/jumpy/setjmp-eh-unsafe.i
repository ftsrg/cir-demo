typedef long int __jmp_buf[8];
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;

struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };

typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));




extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));



extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));





extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void abort(void);
extern void reach_error(void);


typedef struct __cxx_frame {
    jmp_buf buf;
    struct __cxx_frame *prev;
} __cxx_frame_t;

static __cxx_frame_t *__cxx_frame_top = NULL;
static void *__cxx_exn_obj = NULL;


int main(void) {
    static int __exn_buf;

    __cxx_frame_t __frame;
    __frame.prev = __cxx_frame_top;
    __cxx_frame_top = &__frame;

    if (
       _setjmp (
       __frame.buf
       ) 
                           == 0) {

        __exn_buf = 42;
        __cxx_exn_obj = (void *)&__exn_buf;
        if (__cxx_frame_top == NULL) abort();
        longjmp(__cxx_frame_top->buf, 1);

        __cxx_frame_top = __frame.prev;
    } else {

        __cxx_frame_top = __frame.prev;

        int e = *(int *)__cxx_exn_obj;
        __cxx_exn_obj = NULL;

        if (e == 42)
            reach_error();
    }

    return 0;
}
