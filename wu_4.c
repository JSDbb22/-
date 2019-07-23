#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int input = 0;
	while ((input = getchar()) != EOF)
	{
		if ('a' <= input && input <= 'z')
			putchar(input - 32);
		printf("\n");
		if ('A' <= input && input <= 'Z')
			putchar(input + 32);
		printf("\n");
	}
	system("pause");
	return 0;
}