#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

unsigned int reverse_bit(unsigned int value)
{
	int sum = 0;
	int i = 0;
	for (; i < 32; ++i)
	{
		sum += ((value >> i) & 1) << (31 - i);
	}	
	return sum;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = 0;
	ret = reverse_bit(num);
	printf("%u\n", ret);
	system("pause");
	return 0;
}