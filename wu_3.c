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
		printf("请输入密码：");
		scanf("%s", &input);
		if (0 == strcmp(password, input))
		{
			printf("登录成功!\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
		if (i == 2)
			printf("退出程序\n");
	}
	system("pause");
	return 0;
}