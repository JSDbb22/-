#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	printf("请输入两个整数：\n");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	while ((a%b) != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}
	printf("%d\n", b);
	system("pause");
	return 0;
}