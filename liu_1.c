#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	printf("ÇëÊäÈë½×Êı£º\n");
	scanf("%d", &n);
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			printf("%d * %d = %d  ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}