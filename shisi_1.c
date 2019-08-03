#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//需要左旋的字符为前 n - 1 个，每一次内层 j 循环完将所以字符向前搬移一位
//先记录 a[0] 元素值，每次内层 i 循环完后，将首元素放到最后
//外层 i 循环控制需要搬移的元素个数
void Left_handed(char a[], int key, int len)
{
	for (int i=0; i < key; ++i)
	{
		int j = 0;
		char tmp = a[0];
		for (j = 0; j < len; ++j)
		{
			a[j] = a[j + 1];
		}
		a[len - 1] = tmp;
	}
}


int main()
{
	char a[] = "ABCDEF";
	int key;
	scanf("%d", &key);		//输入需要左旋 k 个字符
	int len = strlen(a);		//给出字符串长度
	Left_handed(a, key, len);
	for (int i = 0; i < len; ++i)		//打印左旋后的字符串
	{
		printf("%c ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}