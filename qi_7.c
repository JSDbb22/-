#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Prit(int num)
{
	if (num < 10)
		printf("%d\n", num);
	else
	{
		Prit(num / 10);
		printf("%d\n", num % 10);
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	Prit(num);
	system("pause");
	return 0;
}