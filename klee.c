#import <stdio.h>
#import <stdlib.h>

int main() {
    int a, b;
    klee_make_symbolic(&a, sizeof(a), "a");
    klee_make_symbolic(&b, sizeof(b), "b");

    a = rand();
    for (;;) {
        b = rand();
        printf("%d\n", b);
        if (a == b) break;
        a = b;
    }
    assert(a == b);
    puts("SUCCESS");
    return 0;
}
