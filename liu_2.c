#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Swap(int* x, int* y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}