#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int count = 0;
    bool space_counted = false;
    for (int c; c != EOF; c = fgetc(stdin)) {
        switch (c) {
            case ' ':
                if (space_counted)
                    continue;
                space_counted = true;
                break;
            default:
                space_counted = false;
                break;
        }
        putchar(c);
    }
    return EXIT_SUCCESS;
}
