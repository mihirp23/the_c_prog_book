#include <stdio.h>

#define NUM_CHARS 128
/* Exercise 1.14 */
/* A program that prints histogram of the frequencies of 
   different characters in its input. */

int main()
{
    int c;
    int chars[NUM_CHARS];
    int i, j;
    
    for (i = 0; i < NUM_CHARS; ++i) {
        chars[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        chars[c] += 1;
    }

    printf("chars =");
    for (i = 0; i < NUM_CHARS; ++i) {
        if (chars[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < chars[i]; j++) {
                putchar('-');
            }
            printf("\n");
        }
    }


    return 0;
}
