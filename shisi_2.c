#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define N 1024


//while 循环内部两个 for 循环每次都使字符串左旋一位
//每次左旋一位后进行判断，两个字符串是否旋转后相等，若相等返回1，否则返回0
//while 循环的 k 控制进行多少次左旋
//若进行完 len1 次之后仍没有找到两个字符串旋转相等，则返回0；
//至于右旋与左旋互补，右旋字符次数 + 左旋字符次数 = len1
int Is_Rotate(char a[], char b[]) {
	assert(a);
	assert(b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	//若a,b字符串长度不相等直接返回 0
	if (len1 != len2) {
		return 0;
	}
	int k = 0;
	while (k < len1) 
	{
		for (int i = 0; i < len1; ++i) {
			char temp = a[0];
			for (int j = 0; j < len1 - 1; ++j) {
				a[j] = a[j + 1];
			}
			a[len1 - 1] = temp;
			//int strcmp ( const char * str1, const char * str2 );
			/*设这两个字符串为str1，str2，
				若str1 = str2，则返回零；
				若str1 < str2，则返回负数；
				若str1 > str2，则返回正数。*/
			if (strcmp(a, b) == 0) {
				return 1;
			}
		}
		++k;
	}
	return 0;
}

int main()
{
	char a[N];
	char b[N];
	printf("请输入两个需要比较的字符串：\n");
	scanf("%s", &a);		//输入字符串 a
	scanf("%s", &b);		//输入字符串 b
	int ret = Is_Rotate(a, b);
	if (ret == 0)
	{
		printf("b不是a的拷贝\n");
	}
	else
	{
		printf("b是a的拷贝\n");
	}
	system("pause");
	return 0;
}