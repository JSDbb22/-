#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define N 1024


//while ѭ���ڲ����� for ѭ��ÿ�ζ�ʹ�ַ�������һλ
//ÿ������һλ������жϣ������ַ����Ƿ���ת����ȣ�����ȷ���1�����򷵻�0
//while ѭ���� k ���ƽ��ж��ٴ�����
//�������� len1 ��֮����û���ҵ������ַ�����ת��ȣ��򷵻�0��
//�������������������������ַ����� + �����ַ����� = len1
int Is_Rotate(char a[], char b[]) {
	assert(a);
	assert(b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	//��a,b�ַ������Ȳ����ֱ�ӷ��� 0
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
			/*���������ַ���Ϊstr1��str2��
				��str1 = str2���򷵻��㣻
				��str1 < str2���򷵻ظ�����
				��str1 > str2���򷵻�������*/
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
	printf("������������Ҫ�Ƚϵ��ַ�����\n");
	scanf("%s", &a);		//�����ַ��� a
	scanf("%s", &b);		//�����ַ��� b
	int ret = Is_Rotate(a, b);
	if (ret == 0)
	{
		printf("b����a�Ŀ���\n");
	}
	else
	{
		printf("b��a�Ŀ���\n");
	}
	system("pause");
	return 0;
}