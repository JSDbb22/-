#include <stdio.h>
#include <stdlib.h>


void MoveNum(int arr[], int sz)
{
	int *left = arr;
	int *right = arr + sz - 1;
	int tmp = 0;
	while (left < right)
	{
		while ((left < right) && ((*left) % 2 != 0))
		{
			left++;
		}
		//得到了奇数的位置
		while ((left < right) && ((*right) % 2 == 0))
		{
			right--;
		}
		//得到了偶数的位置
		if (left < right)
		{
			tmp = *left;
			*left = *right;
			*right = tmp;
		}
		//交换奇数与偶数位置元素
	}
	/*for (i = 0; i != j; ++i)
	{
		if (arr[i] % 2 != 0)
		{
			continue;
		}
		else 
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			if (arr[j] % 2 == 0)
				--j;
			--i;
		}
	}*/
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	MoveNum(arr, sz);
	for (int i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");		//1 9 3 7 5 6 4 8 2
	system("pause");
	return 0;
}