#include <stdio.h>

int main(void) {
    // should prefer stdint types, but testing these for the sake of practice.

    // note: these are defined by the system.

    printf("size of char: %lu bytes\n", sizeof(char));
    printf("size of short (int): %lu bytes\n", sizeof(short));
    printf("size of int: %lu bytes\n", sizeof(int));
    printf("size of long (int): %lu bytes\n", sizeof(long));
    printf("size of long long (int): %lu bytes\n", sizeof(long long));
    printf("size of float: %lu bytes\n", sizeof(float));
    printf("size of double: %lu bytes\n", sizeof(double));
    printf("size of long double: %lu bytes\n", sizeof(long double));
    printf("size of size_t: %lu bytes\n", sizeof(size_t));

    return 0;
}
