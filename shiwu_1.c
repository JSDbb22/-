#include <stdio.h>
#include <stdlib.h>



int main()
{
	int arr[] = { 9,1,2,3,3,1,4,5,6,7,8,8,7,6,5,9 };	//2 4
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	int pos = 0;
	int x = 0, y = 0;
	for (int i = 0; i < sz; ++i)
	{
		ret ^= arr[i];
	}

	for (int i = 0; i < 32; ++i)
	{
		if (1 == ((ret >> i) & 1))
		{
			pos = i;
			break;
		}
	}

	for (int i = 0; i < sz; ++i)
	{
		if (1 == ((arr[i] >> pos) & 1))
			x ^= arr[i];
		else
			y ^= arr[i];
	}

	printf("%d %d\n", x, y);
	system("pause");
	return 0;
}