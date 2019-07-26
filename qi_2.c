#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int fun(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	return n * fun(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int c = fun(n, k);
	printf("%d\n", c);
	system("pause");
	return 0;
}