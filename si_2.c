#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num;
	printf("===水仙花数是三位数，所以下面直接从100开始===\n");
	printf("\n");
	for (num = 100; num <= 999; ++num)
	{
		int a, b, c;
		a = num / 100;
		b = num / 10 % 10;
		c = num % 10;
		if (num == pow(a, 3) + pow(b, 3) + pow(c, 3))
			printf("%d\n", num);
	}
	system("pause");
	return 0;
}