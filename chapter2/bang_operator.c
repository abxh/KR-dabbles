#include <stdio.h>

int main(void) {
    printf("!0 = %i\n", !0);
    printf("!1 = %i\n", !1);
    printf("!3 = %i\n", !3);
    printf("!-2 = %i\n", !-2);
    printf("!NULL = %i (NULL = 0)\n", !NULL);

    if (!0) {
        printf("!0=1 is true\n");
        printf("0 is false\n");
    } else if (!1) {
        printf("!1 is true\n");
        printf("1 is false\n");
    }
    printf("thought as in (non-zero) is true\n");
    return 0;
}
