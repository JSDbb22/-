#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Isprime(int num)
{
	int a = sqrt(num);
	for (int i = 2; i <= a; i++)
	{
		if (num % i == 0)
		{
			printf("%d 不是素数！\n", num);
			break;
		}
		else
		{
			printf("%d 是素数!\n", num);
		}
	}
}
int main()
{
	int num = 0;
	//Isprime 函数不能判断 2，3 是否为素数，因为2与3开方得到的数字小于 2
	//后面我们用 num % 2 不能得到正确结果，所以输入的 num 需要从 4 开始
	printf("请输入任何一个大于3的数：");
	scanf("%d", &num);
	Isprime(num);
	system("pause");
	return 0;
}