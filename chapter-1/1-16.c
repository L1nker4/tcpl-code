#include <stdio.h>
#define MAXLINE 10
 
int getline1(char line[], int maxline);
void copy(char to[], char from[]);


int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
 
	max = 0;
	while ((len = getline1(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
 
	if (max > 0)
	{
		printf("%s", longest);
	}
	return 0;
}
 
//读入一行到s中并且返回长度
int getline1(char s[], int lim)
{
	int c, i, j;
 
	j = 0;
	for (i = 0; (c = getchar()) != EOF&&c != '\n'; ++i)
	{
		if (i < lim - 2)
		{
			s[j] = c;
			++j;
		}
		
	}
	if (c == '\n')
	{
		s[j] = c;
		++i;
		++j;
	}
 
	s[j] = '\0';
 
	return i;
}
 
//将from复制到to
void copy(char to[], char from[])
{
	int i;
 
	i = 0;
	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}