#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("============\n");
	printf("1.��ʼ��Ϸ\n");
	printf("2.�˳���Ϸ\n");
	printf("============\n");
}
void game()
{
	int goal;
	int num = 0;
	goal = rand() % 100 + 1;
	while (1)
	{
		printf("�����������������(1-100):\n");
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
	printf("��ȷ����Ϊ��%d\n", goal);
}
int main()
{
	int choose = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����������ѡ��:");
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
			printf("��������Ƿ������������룡\n");
		}
	} while (choose);
	system("pause");
	return 0;
}