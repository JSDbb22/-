#include<stdio.h>
#include<stdlib.h>

char reverse_string(char *string)
{
	if (*string == '\0')
		printf("%c", *string);
	else
	{
		reverse_string(++string);
		printf("%c", *(--string));
	}
}

int main()
{
	char *a = "abcde";
	reverse_string(a);
	printf("\n");
	system("pause");
	return 0;
}