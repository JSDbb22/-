#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>



char *mystrcpy(char *str2, const char *str1)
{
	assert(str1 != NULL);
	assert(str2 != NULL);

	char *r = str2;
	while ((*r++ = *str1++) != '\0');

	return r;
}

int main()
{
	char str1[] = "abcdef";
	char str2[] = { 0 };
	mystrcpy(str2, str1);
	strcpy(str2, str1);

	printf("%s\n", str2);
	printf("%s\n", str2);


	return 0;
}
