#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int avg = num1 - (num1 - num2) / 2;
	printf("%d\n", avg);
	system("pause");
	return 0;
}