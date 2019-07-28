#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 10

int main()
{
	int array[N][N] = { 0 };
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < N; i++)
	{
		array[i][1] = 1;
		array[i][j] = 1;
	}
	for (i = 2; i < N; ++i)
	{
		for (j = 1; j < 10; ++j)
		{
			array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
		}
	}
	for (i = 0; i < N; ++i)
	{
		
		for (j = 0; j <= i; ++j)
		{
			printf("%d  ", array[i][j]);
		}
		for (k = 0; k < N - i; ++k)
		{
			printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}