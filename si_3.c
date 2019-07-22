#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=0;
	int n = 0;
	int sum = 0;
	int tmp = 0;
	printf("请输入基数：");
	scanf("%d", &num);
	printf("请输入计算的最高位位数：");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		
		tmp = tmp * 10 +num;
		sum = sum + tmp;
	}
	printf("最后结果为：%d\n", sum);
	system("pause");
	return 0;
}