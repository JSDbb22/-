#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, t;
	printf("请输入三个整数\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b);
	{
		t = a; a = b; b = t;
	}
	if (b < c)
	{
		t = b; b = c; c = t;
	}
	if (a < b)
	{
		t = a; a = b, b = t;
	}
	printf("从大到小：%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}
