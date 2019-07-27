#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 3
#define COL 3

void menu()
{
	printf("*****************\n");
	printf("1 ==> 开始游戏\n");
	printf("2 ==> 结束游戏\n");
	printf("*****************\n");
}
void Initboard(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; ++i)
	{
		for (j = 0; j < COL; ++j)
		{
			board[i][j] = ' ';
		}
	}
}
void Showboard(char board[ROW][COL])
{
	int i;
	for (i = 0; i < ROW; ++i)
	{
		printf("%c  |%c  |%c\n", board[i][0],board[i][1],board[i][2]);
		if (i != ROW - 1)
		{
			printf("--- --- ---\n");
		}
	}
	printf("\n");
}
void Player(char board[ROW][COL])
{
	while (1)
	{
		int x, y;
		printf("请输入坐标,格式如（x y）：");
		scanf("%d %d", &x, &y);
		if (0 <= x && x <= 2 && 0 <= y && y <= 2)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = 'o';
				break;
			}
			else 
			{
				printf("该位置已被占用，请重新输入：\n");
			}
			
		}
		else 
		{
			printf("您的输入非法，请重新输入：\n");
		}
	}
}
void Computer(char board[ROW][COL])
{
	printf("电脑下棋！\n");
	int x, y, i;
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		for (i = 0; i < ROW; ++i)
		{
			if (board[i][0] == board[i][1] && board[i][0] == 'x' && board[i][2] == ' ')
			{
				board[i][2] = 'x';
				goto flag1;
			}
			else if (board[i][1] == board[i][2] && board[i][1] == 'x' && board[i][0] == ' ')
			{
				board[i][0] = 'x';
				goto flag1;
			}
			else if (board[i][0] == board[i][2] && board[i][2] == 'x' && board[i][1] == ' ')
			{
				board[i][1] = 'x';
				goto flag1;
			}
			else if (board[0][i] == board[1][i] && board[0][i] == 'x' && board[2][i] == ' ')
			{
				board[2][i] = 'x';
				goto flag1;
			}
			else if (board[1][i] == board[2][i] && board[1][i] == 'x' && board[0][i] == ' ')
			{
				board[0][i] = 'x';
				goto flag1;
			}
			else if (board[0][i] == board[2][i] && board[2][i] == 'x' && board[1][i] == ' ')
			{
				board[1][i] = 'x';
				goto flag1;
			}
			else if (board[0][0] == board[1][1] && board[0][0] == 'x' && board[2][2] == ' ')
			{
				board[2][2] = 'x';
				goto flag1;
			}
			else if (board[1][1] == board[2][2] && board[1][1] == 'x' && board[0][0] == ' ')
			{
				board[0][0] = 'x';
				goto flag1;
			}
			else if (board[0][0] == board[2][2] && board[0][0] == 'x' && board[1][1] == ' ')
			{
				board[1][1] = 'x';
				goto flag1;
			}
			else if (board[0][2] == board[1][1] && board[1][1] == 'x' && board[2][0] == ' ')
			{
				board[2][0] = 'x';
				goto flag1;
			}
			else if (board[1][1] == board[2][0] && board[1][1] == 'x' && board[0][2] == ' ')
			{
				board[0][2] = 'x';
				goto flag1;
			}
			else if (board[2][0] == board[0][2] && board[2][0] == 'x' && board[1][1] == ' ')
			{
				board[1][1] = 'x';
				goto flag1;
			}
		}
		for (i = 0; i < ROW; ++i)
		{
			if (board[i][0] == board[i][1] && board[i][0] == 'o' && board[i][2] == ' ')
			{
				board[i][2] = 'x';
				goto flag1;
			}
			else if (board[i][1] == board[i][2] && board[i][1] == 'o' && board[i][0] == ' ')
			{
				board[i][0] = 'x';
				goto flag1;
			}
			else if (board[i][0] == board[i][2] && board[i][2] == 'o' && board[i][1] == ' ')
			{
				board[i][1] = 'x';
				goto flag1;
			}
			else if (board[0][i] == board[1][i] && board[0][i] == 'o' && board[2][i] == ' ')
			{
				board[2][i] = 'x';
				goto flag1;
			}
			else if (board[1][i] == board[2][i] && board[1][i] == 'o' && board[0][i] == ' ')
			{
				board[0][i] = 'x';
				goto flag1;
			}
			else if (board[0][i] == board[2][i] && board[2][i] == 'o' && board[1][i] == ' ')
			{
				board[1][i] = 'x';
				goto flag1;
			}
			else if (board[0][0] == board[1][1] && board[0][0] == 'o' && board[2][2] == ' ')
			{
				board[2][2] = 'x';
				goto flag1;
			}
			else if (board[1][1] == board[2][2] && board[1][1] == 'o' && board[0][0] == ' ')
			{
				board[0][0] = 'x';
				goto flag1;
			}
			else if (board[0][0] == board[2][2] && board[0][0] == 'o' && board[1][1] == ' ')
			{
				board[1][1] = 'x';
				goto flag1;
			}
			else if (board[0][2] == board[1][1] && board[1][1] == 'o' && board[2][0] == ' ')
			{
				board[2][0] = 'x';
				goto flag1;
			}
			else if (board[1][1] == board[2][0] && board[1][1] == 'o' && board[0][2] == ' ')
			{
				board[0][2] = 'x';
				goto flag1;
			}
			else if (board[2][0] == board[0][2] && board[2][0] == 'o' && board[1][1] == ' ')
			{
				board[1][1] = 'x';
				goto flag1;
			}
		}
		if (board[x][y] == ' ')
		{
			board[x][y] = 'x';
			goto flag1;
		}
	}
	flag1:;
}
int Isfull(char board[ROW][COL])
{
	int i, j;
	for (i = 0; i < ROW; ++i)
	{
		for (j = 0; j < COL; ++j)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}	
	}
	return 1;
}
char Iswin(char board[ROW][COL])
{
	int i = 0;
	for (i = 0; i < ROW; ++i)
	{
		if (board[i][0] == board[i][1] &&
			board[i][0] == board[i][2] &&
			board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < COL; ++i)
	{
		if (board[0][i] == board[1][i] &&
			board[0][i] == board[2][i] &&
			board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] &&
		board[0][0] == board[2][2] &&
		board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] &&
		board[0][2] == board[2][0] &&
		board[0][2] != ' ')
	{
		return board[0][0];
	}
	else if(Isfull(board)==1)
	{
		return 'w';
	}
	else
	{
		return ' ';
	}
}
void game()
{
	char board[ROW][COL];
	char ret;
	Initboard(board);
	Showboard(board);
	while (1)
	{
		Player(board);
		Showboard(board);
		ret = Iswin(board);
		if (ret == 'o')
		{
			printf("您真棒，You win!\n");
			break;
		}
		else if (ret == 'x')
		{
			printf("你真菜，You lose!!!\n");
			break;
		}
		else if (ret == 'w')
		{
			printf("平局！\n");
			break;
		}
		Computer(board);
		Showboard(board);
		ret = Iswin(board);
		if (ret == 'o')
		{
			printf("您真棒，You win\n");
			break;
		}
		else if(ret=='x')
		{
			printf("你真菜，You lose\n");
			break;
		}
		else if (ret == 'w')
		{
			printf("平局！\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int choose = 0;
	menu();
	printf("请输入您的选择：\n");
	scanf("%d", &choose);
	while (choose)
	{
		if (choose == 1)
		{
			game();
			break;
		}
		else
		{
			break;
		}
	}
	system("pause");
	return 0;
}