#include <stdio.h>
#include <stdlib.h>

// https://man7.org/linux/man-pages/man3/getline.3.html

int main(void) {
    char* lineptr = NULL;
    size_t size = 0;
    int n = getline(&lineptr, &size, stdin);
    if (n < 0) {
        return 1;
    }
    int x = atoi(lineptr);
    printf("%i + %i = %i\n", x, x, x+x);

    free(lineptr); // damn. i need to remember to do this.
    return 0;
}
