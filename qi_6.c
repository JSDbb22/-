#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//µÝ¹é
/*
int fun(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fun(n - 1);
}
*/

//·ÇµÝ¹é
int fun(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; ++i)
	{
		sum = sum * i;
	}
	return sum;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = 0;
	ret = fun(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}