#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char password[] = "123456";
	char input[10] = "0";
	int i = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("���������룺");
		scanf("%s", &input);
		if (0 == strcmp(password, input))
		{
			printf("��¼�ɹ�!\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
		if (i == 2)
			printf("�˳�����\n");
	}
	system("pause");
	return 0;
}