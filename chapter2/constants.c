#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define Hello "Hello"
#define World "World"

// https://cplusplus.com/reference/cstdio/printf/

int main(void) {
    printf("%d\n", 5);
    printf("%ld\n", 5L);
    printf("%lld\n", 5LL);
    printf("%lldu\n", 5LLu);
    printf("%f, size: %lu bytes\n", 5.F, sizeof(5.F));
    printf("%f, size: %lu bytes\n", 5., sizeof(5.));
    printf("%u\n", 13u);
    printf("%o\n", 13u);
    printf("%x\n", 13u);
    printf("%X\n", 13u);
    printf("%c\n", 'a');
    printf("%s\n", Hello " " World); // string concat compile time.

    char* c1 = strdup("Goodbye");
    char* c2 = strdup("World");
    printf("%s\n", strcat(strcat(c1, " "), c2)); // string concat run-time.

    free(c1);
    free(c2);
}
