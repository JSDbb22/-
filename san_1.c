#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int a[5] = { 1,2,3,4,5 }, b[5] = { 5,4,3,2,1 }, c[5] = { 0 };
	for (i = 0; i < 5; i++)
	{
		c[i] = a[i];
	}
	for (i = 0; i < 5; i++)
	{
		a[i] = b[i];
	}
	for (i = 0; i < 5; i++)
	{
		b[i] = c[i];
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
