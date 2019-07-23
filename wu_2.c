#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int search(int num, int arr[], int sz)
{
	int left = 0;
	int right = sz;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == num)
		{
			return mid;
		}
		else if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	if (left > right)
		return -1;
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 9; i >= 0; --i)
	{
		arr[i] = i;
	}
	int num = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("����������Ҫ���ҵ�����:");
	scanf("%d", &num);
	ret = search(num, arr, sz);
	if (ret == -1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±���%d\n", ret);
	system("pause");
	return 0;
}