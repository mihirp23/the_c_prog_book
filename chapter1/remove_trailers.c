#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int mygetline(char line[], int maxline);
int remove_trailers(char s[]);

/* Exercise 1.18 */
/* prints input to output removing trailing blank spaces,
   tabs, and empty lines */
/* note : used online resource (learntosolveit.com) to
          make sense of the solution */

int main()
{
	int len; 					/* current line length */
	int max;					/* maximum length seen so far */
	char line[MAXLINE];			/* current input line */
   
	max = 0;
	while ((len = mygetline(line, MAXLINE)) > 0)
	{
        if (remove_trailers(line) > 0)
        {
            printf("%s", line);
        }
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

int remove_trailers(char s[])
{
    int i;
    for (i = 0; s[i] != '\n'; ++i)
    ;
    --i;

    for (i > 0; ((s[i] == ' ' || s[i] == '\t')); --i)
    ; 

    if (i >= 0)
    {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}

