#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char *mystrcat(char *str2, const char *str1)
{
	assert(str1);
	assert(str2);
	char *r = str2;
	while (*str2 != '\0')
	{
		str2++;
	}

	while (*str2++ = *str1++);
	
	return str2;
}

int main()
{
	char str1[] = "def";
	char str2[] = "abc";
	mystrcat(str2, str1);
	strcat(str2, str1);

	printf("%s\n", str2);
	printf("%s\n", str2);


	return 0;
}