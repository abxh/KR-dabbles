#include <stdio.h>

/* print Fahrenheit-Celcius table in a pretty manner
    for fahr = 0, 20, ..., 300; floating point. 

    celcius = (5.0/9.0) * (fahr - 32.0);
*/

int main(void) {
    float start = 0.;
    float step  = 20.;
    float end   = 300.;

    puts("----------------------");
    printf("%*s%11s\n", 5, "fahrenheit", "celcius");
    puts("----------------------");
    float acc = 0;
    while (acc <= end) {
        printf("%#5.0f %14.2f\n", acc, (5./9.) * (acc - 32.0));
        acc += step;
    }
    // equivalent code for the reverse conversion
    puts("----------------------");
    printf("%*s%11s\n", 5, "celcius", "fahrenheit");
    puts("----------------------");
    for (float acc = start; acc <= end; acc += step) {
        printf("%#5.0f %10.2f\n", acc, (9./5.) * (acc + 32.0));
    }

    putchar('\n');
    printf("you can probably do stuff like 5.*(2+3)=%.2f, but it's probably not recommended anymore...\n", 5.*(2+3));

    // should probably be more explicit.
    printf("with explicit type casting: %.2f\n", 5. * ((float) 2+3));

}
