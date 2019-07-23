#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("============\n");
	printf("1.开始游戏\n");
	printf("2.退出游戏\n");
	printf("============\n");
}
void game()
{
	int goal;
	int num = 0;
	goal = rand() % 100 + 1;
	while (1)
	{
		printf("请输入您猜想的数字(1-100):\n");
		scanf("%d", &num);
		if (num > goal)
		{
			printf("big\n");
		}
		else if (num < goal)
		{
			printf("small\n");
		}
		else
		{
			printf("You win!\n");
			break;
		}
	}
	printf("正确数字为：%d\n", goal);
}
int main()
{
	int choose = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入您的选择:");
		scanf("%d", &choose);
		if (choose == 1)
		{
			game();
			break;
		}
		else if (choose == 2)
		{
			break;
		}
		else
		{
			printf("您的输入非法，请重新输入！\n");
		}
	} while (choose);
	system("pause");
	return 0;
}