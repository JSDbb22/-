#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	signed int a = -1;
	for (int i = 1; i <= 13; ++i)
	{
		if (i <= 7)
		{
			for (int j = 1; j <= 2 * i - 1; ++j)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= i - 3 * a; ++j)
			{
				printf("*");
			}
			a = a + 1;
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
