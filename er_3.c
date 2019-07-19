#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max = 0;
	int a[10] = { 0 };
	int i = 0;
	printf("请输入十个整数\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		max = a[0];
	}
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0;
}
