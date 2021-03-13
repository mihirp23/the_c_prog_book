#include <stdio.h>

/* program that prints numeric values 
   associated with each capital alphabet
   letter in the ascii table */
int main()
{

    char c = 'A';
    while (c <= 'Z') 
    {
        printf("%c is %d\n", c, c);
        c++;
    }
    return 0;
}
