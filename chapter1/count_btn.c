#include <stdio.h>

/*  exercise 1.8
   write a program to count blanks, tabs, and newlines */
int main ()
{
    int c, blanks, tabs, newlines;
    blanks = 0;
    tabs = 0;
    newlines =0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') { // blank
            ++blanks;
        }
        else if (c == '\t') { // tab
            ++tabs;
        }
        else if (c == '\n')  { // newline
            ++newlines;
        }
    }
    printf("  Blanks: %d\n", blanks);
    printf("    Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);

    return 0;
}
