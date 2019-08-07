#include <stdio.h>
#include <string.h>
#include <assert.h>

int mystrcmp(const char *str1, const char *str2)
{
	while (*str1 == *str2)
	{
		assert((str1 != NULL) && (str2 != NULL));
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return 1;
	else
		return -1;
}


int main()
{
	char str1[] = "abcdefd";
	char str2[] = "abcd";
	printf("%d\n", mystrcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));


	return 0;
}