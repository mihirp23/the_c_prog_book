#include <stdio.h>

#define IN  1 /* inside a word */
#define OUT 0 /* outside a word */

/* Exercise 1-13 */
/* a program that prints histogram of the length
   of words in its input. Histogram will be 
   drawn with the bars horizontal */
int main()
{
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            // since we are out of a word, let's print
            // a newline character
            printf("\n");
        }
        else if (state == OUT) {
            state = IN;
        }

        // since we are in a line, let's put the character
        // to output stream
        if (state == IN) {
            putchar('-');
        }
    }

    return 0;
}
