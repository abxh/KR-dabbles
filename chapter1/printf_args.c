#include <stdio.h>
#include <stdlib.h>

// this is a dabble into printf. not strictly an K & R exercise in chapter 1.

// reference:
// https://cplusplus.com/reference/cstdio/printf/
// https://learn.microsoft.com/en-us/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=msvc-170

// Lessons:
// variables are sometimes 0 in and pointers sometimes point to NILL. however i should not
// rely on this behaivour. is unreliable.

// sidenote:
// printf prints (null) as pointer address to NILL for some reason...
// https://stackoverflow.com/a/55181027
// NULL pointer is (void*) 0, but the 0 there is not garanteed.
// it is an address such that no other object has that addres, and typing (void*) 1 in a system
// where NULL = (void*) 0, gives errors (it seems like). you cannot deference (void*) as some
// specification (probably) disallows it... thought as there is no value at (void*) 0.

int main(void) {
    
    int x1 = 1;
    printf("signed decimal integer, %%d: \t\t\t\t%d\n", x1);

    int x2 = 2;
    printf("signed decimal integer, %%i: \t\t\t\t%i\n", x2);

    int x3 = 010; // numbers starting with 0 are octals.
    // int x3 = (0)8; //   8 is a invalid octal.
    // int x3 = (0)10; // 10 is a valid octal
    printf("unsigned octal, %%o: \t\t\t\t\t%o\n", x3);

    int x4 = 0;
    sscanf("010", "%o", &x4); // read input as octal.
    printf("unsigned octal to integer, \"010\" -> %%i: \t\t%i\n", x4); // print input as integer.

    int x5 = 0xf;
    printf("unsigned hexadecimal integer, %%x: \t\t\t%x\n", x5);

    int x6;
    sscanf("0xf", "%x", &x6); // read input as hexadecimal.
    printf("unsigned hexadecimal integer, \"0xf\" -> %%i: \t\t%i\n", x6); // print input as integer

    int x7;
    sscanf("0x10", "%x", &x7); // read input as hexadecimal.
    printf("unsigned hexadecimal integer to integer, \"0x10\" -> %%i: \t%i\n", x7); // print input as integer.

    float x8;
    sscanf("1234.5", "%f", &x8); // read input as floating point. %f and %F seems to be equivalent.
    printf("unsigned floating point with 2 decimals, %%.2f or %%.2F: \t%.2f\n", x8);

    printf("scientific notation, 123.45 to %%.4e or %%.4E: \t\t%.4e or %.4E\n", 1234.5, 1234.5);

    printf("shortest notation, 12345.678 to %%g (%%e | %%f) or %%G (%%E or %%F): %g %G\n", 12345.678, 12345.678);
    printf("shortest notation, 1000000000. to %%g (%%e | %%f) or %%G (%%E or %%F): %g %G\n", 1000000000., 1000000000.);

    int *x9 = (void*) 0;
    printf("pointer address, %%p (such that it points to NILL or (void*)): %p\n", x9);
    free(x9);

    int *x10 = malloc(2*sizeof(int));
    printf("pointer adress, %%p (such that it points to int[2]): \t%p\n", x10);
    free(x10);

    float x11 = 5.123456;
    printf("float with precision provided, %.*f\n", 3, x11);

    return 0;
}
