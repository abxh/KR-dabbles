#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char* lineptr;
    size_t size;
    int n = getline(&lineptr, &size, stdin);
    if (n < 0) {
        return 1;
    }
    int x = atoi(lineptr);
    printf("%i + %i = %i\n", x, x, x+x);

    free(lineptr); // damn. i need to remember to do this.
    return 0;
}
