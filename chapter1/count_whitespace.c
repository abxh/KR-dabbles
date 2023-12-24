#include <stdio.h>
#include <stdlib.h>

// remember to break out of case statements.

int main(void) {
    int count = 0;
    for (int c; c != EOF; c = fgetc(stdin)) {
        switch (c) {
            case ' ':
                count++;
                break;
            case '\t':
                count+=4;
                break;
        }
        if (c == (int) '\n') {
            printf("%d\n", count);
        }
    }
    return EXIT_SUCCESS;
}
