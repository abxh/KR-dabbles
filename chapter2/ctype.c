#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    scanf("%c", &c);
    printf("isblank : %s\n", isblank(c) ? "true": "false");
    printf("isdigit : %s\n", isdigit(c) ? "true": "false");
    printf("islower : %s\n", islower(c) ? "true": "false");
    printf("isupper : %s\n", isupper(c) ? "true": "false");
    printf("isalnum (a-z,0-9): %s\n", isalnum(c) ? "true": "false");
    return 0;
}

