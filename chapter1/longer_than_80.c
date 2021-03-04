#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define MAXCHARS 80  /* max number of chars to check for */

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

/* prints input lines that are greater than 80 characters */

int main()
{
	int len; 					/* current line length */
	char line[MAXLINE];			/* current input line */
	
	while ((len = mygetline(line, MAXLINE)) > 0)
	{
		if (len > MAXCHARS) 
		{
            printf("%s\n", line);
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

/* copy: copy 'from' into 'to'; assume it is big enough */
void copy (char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0'){
		++i;
	}
}
