#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
Exercise 2-1. Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers 
and by direct computation. Harder if you compute them: determine the ranges of the various 
floating-point types.
*/

int main()
{
    printf("Signed int: %d - %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int: 0 - %d\n\n", UINT_MAX);

    printf("Signed long: %d - %d\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long: 0 - %d\n\n", ULONG_MAX);

    printf("Signed short: %d - %d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short: 0 - %d\n\n", USHRT_MAX);

    printf("Signed char: %d - %d\n", CHAR_MIN, CHAR_MAX);
    printf("Unsigned char: 0 - %d\n\n", UCHAR_MAX);



}