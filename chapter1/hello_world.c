#include <stdio.h>
#include <stdlib.h>

#define GOODBYE_STR "Goodbye World."

// LESSONS:
// dammit. remember to ALWAYS INITIALIZE i = 0. for while loops. it's NOT garanteed to be 0.
// also. always remember to free memory. think free when malloc. it's good practice.
// and others not verbalized... but remember the above. always.

size_t str_len(const char c[]) {
    int i = 0;
    while (c[i] != '\0') {
        // printf("str_len, i: %d", i);
        i++;
    }
    return i;
}

void str_put(char** c, const char s[], size_t n) {
    puts("Hello?");
    printf("%d\n", n);

    for (int i = 0; i < n; i++) {
        (*c)[i] = s[i];
        putc((*c)[i], stdout);
    }
    putchar('\n');
}

int main(void) {
    puts("Hello World!");

    printf("str_len(\"Goodbye World.\"): %d\n", str_len(GOODBYE_STR));
    char *c_p = malloc(sizeof(char) * str_len(GOODBYE_STR));
    str_put(&c_p, GOODBYE_STR, str_len(GOODBYE_STR));
    printf("%s\n", c_p);
    free(c_p);

    return 0;
}
