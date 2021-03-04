#include <stdio.h>
#include <string.h>
#define MAXLINE 1000 /* maximum input line size */

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

/* Exercise 1.19 */
/* reverses input lines */
/* renamed the function getline() to mygetline() 
   as there exists a library function with the 
   same name */

int main()
{
	int len; 					/* current line length */
	char line[MAXLINE];			/* current input line */
    char reverse_line[MAXLINE]; /* reversed line */
    int i, j = 0;
	
	while ((len = mygetline(line, MAXLINE)) > 0)
	{
        for (i = len - 2; i >= 0; --i)
        {
            reverse_line[j] = line[i];
            ++j; 
        }
        reverse_line[j] = '\n';
        ++j;
        reverse_line[j] = '\0';
        printf("%s", reverse_line);
	}
	return 0;
}

/*mygetline: read a line to s, return length */
int mygetline(char s[], int lim)
{
	int c, i;
	for (i = 0; i<lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	return i;
}

