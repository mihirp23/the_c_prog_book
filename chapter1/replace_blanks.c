#include <stdio.h>

/* exercise 1.9
   write a program to copy its input to its output, 
   replacing each string of one or more blanks by
   a single blank
*/
int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
        if (c == ' ') {
            while ((c = getchar()) == ' ') {
                // keep looping through spaces
                // while loop will exit once the next non-space
                // character is encountered
            }
            // since we are out of loop, let's display the next char
            putchar(c);
        }
    }

    return 0;
}
