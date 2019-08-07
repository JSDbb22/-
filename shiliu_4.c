#include <stdio.h>
#include <string.h>


char *mystrchr(const char *str, int c)
{
	while (*str != '\0' && *str!= c)
	{
		++str;
	}
	return (*str == c )? str : NULL;
}


int main()
{
	char str[] = "abcdefd";
	char c = 'd';
	printf("%s\n", mystrchr(str, c));
	printf("%s\n", strchr(str, c));


	return 0;
}