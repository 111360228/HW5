#include<stdlib.h>
#include <stdio.h>  
#include <string.h>
char *r(char *s)
{
	int len = strlen(s);
	if (len > 1)
	{
		char temp = s[0];
		s[0] = s[len - 1];
		s[len - 1] = '\0';

		r(s + 1);

		s[len - 1] = temp;
	}
	return s;
}
int main()
{
	char s[100];
	scanf_s("%s", s, 100);
	r(s);
	puts(s);
	return 0;
}