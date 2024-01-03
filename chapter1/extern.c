#include <stdio.h>

int x = 0;

int f(void) {
    extern int x; // this is needed if `int x = 0;` comes after this function.
    return ++x;
}

int main(void) {
    for (int i = 0; i < 5; i++)
        printf("call: %d\n", f());
    return 0;
}
