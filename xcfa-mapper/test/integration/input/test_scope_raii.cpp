// cir.scope case 3: RAII / destructor on block exit.
// A local with a non-trivial destructor; CIR emits the ctor, then a
// cir.cleanup.scope whose `cleanup` region holds the dtor call. The dtor MUST
// appear in the generated C (it has verifier-observable side effects).
//
// NOTE: C++20 / co_await (cir.await) is intentionally out of scope for the
// mapper for now; coroutine scopes are not handled.
struct Lock {
    int* m;
    Lock(int* mm) : m(mm) { *m = 1; }
    ~Lock() { *m = 0; }
};
void raii(int* mutex) {
    int before = *mutex;
    {
        Lock lk(mutex);
        *mutex = before + 1;
    }
}
