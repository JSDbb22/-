#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int DigitSum(int n)
{
	if (n < 0)
		return -1;
	else if(n >= 0 && n <= 9)
		return n;
	return (n % 10) + DigitSum(n / 10);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}