#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��Ҫ�������ַ�Ϊǰ n - 1 ����ÿһ���ڲ� j ѭ���꽫�����ַ���ǰ����һλ
//�ȼ�¼ a[0] Ԫ��ֵ��ÿ���ڲ� i ѭ����󣬽���Ԫ�طŵ����
//��� i ѭ��������Ҫ���Ƶ�Ԫ�ظ���
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
	scanf("%d", &key);		//������Ҫ���� k ���ַ�
	int len = strlen(a);		//�����ַ�������
	Left_handed(a, key, len);
	for (int i = 0; i < len; ++i)		//��ӡ��������ַ���
	{
		printf("%c ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}