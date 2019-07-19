#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, temp = 0;
	scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d\n%d\n", a, b);
	system("pause");
	return 0;
}
