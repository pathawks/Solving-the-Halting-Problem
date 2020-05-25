#import <stdio.h>
#import <stdlib.h>

int main() {
    int a = rand();
    for (;;) {
        int b = rand();
        printf("%d\n", b);
        if (a == b) break;
        a = b;
    }
    puts("SUCCESS");
    return 0;
}
