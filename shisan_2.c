#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define COW	3		//行数
#define ROW	3		//列数

//O^2(N)
int  Seek(int arr[COW][ROW],int key)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < COW; ++i)
	{
		for (j = 0; j < ROW; ++j)
		{
			if (arr[i][j] == key)
			{
				return 1;
			}
		}
	}
	return 0;
}

//从arr[0][2]开始先向下（行数增加）查找，没有的话就向左边（列数减少）查找
int _Seek(int arr[COW][ROW], int key)
{
	int i = 0;
	int j = ROW - 1;
	while ((j >= 0) && (i <= 2))
	{
		if (arr[i][j] == key)
		{
			return 1;
		}
		else if (arr[i][j] < key)
		{
			++i;
		}
		else
		{
			--j;
		}
	}
	return 0;
}
int main()
{
	int arr[COW][ROW] = { 1,2,3,4,5,6,7,8,9 };
	int key = 0;
	int ret = 0;
	scanf("%d", &key);		//输入需要查找的值
	ret = _Seek(arr, key);
	if (ret == 1)
	{
		printf("杨氏矩阵中有 %d\n", key);
	}
	else
	{
		printf("杨氏矩阵中没有 %d\n", key);
	}
	system("pause");
	return 0;
}