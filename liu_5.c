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
			printf("%d ����������\n", num);
			break;
		}
		else
		{
			printf("%d ������!\n", num);
		}
	}
}
int main()
{
	int num = 0;
	//Isprime ���������ж� 2��3 �Ƿ�Ϊ��������Ϊ2��3�����õ�������С�� 2
	//���������� num % 2 ���ܵõ���ȷ�������������� num ��Ҫ�� 4 ��ʼ
	printf("�������κ�һ������3������");
	scanf("%d", &num);
	Isprime(num);
	system("pause");
	return 0;
}