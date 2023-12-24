#include <stdio.h>
#include <stdlib.h>

int main() {
    // c must be int, as EOF is -1.
    // fgetc(sdtin) is the same as getchar.

    // prentend a file stream is a file. then EOF is end-of-file char.
    
    for (int c; c != EOF; c = fgetc(stdin)) {
        putchar(c);
    }
    return EXIT_SUCCESS;
}
