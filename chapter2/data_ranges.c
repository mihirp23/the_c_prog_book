#include <stdio.h>
#include <limits.h>
#include <float.h>

/* Exercise 2-1 */
/* Program that determines/prints the ranges of char, short, int,
   and long variables, both signed and unsigned. */
   
int main() 
{
    printf("Minimum signed char %d\n", SCHAR_MIN);
    printf("Maximum signed char %d\n", SCHAR_MAX);

    printf("Minimum signed short %d\n", SHRT_MIN);
    printf("Maximum signed short %d\n", SHRT_MAX);

    printf("Minimum signed int %d\n", INT_MIN);
    printf("Maximum signed int %d\n", INT_MAX);

    printf("Minimum signed long %ld\n", LONG_MIN);
    printf("Maximum signed long %ld\n", LONG_MAX);

    printf("Maximum unsigned char %d\n", UCHAR_MAX);
    printf("Maximum unsigned short %d\n", USHRT_MAX);
    printf("Maximum unsigned int %u\n", UINT_MAX);
    printf("Maximum unsigned long %lu\n", ULONG_MAX);
    return 0;
}
