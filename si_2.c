#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num;
	printf("===ˮ�ɻ�������λ������������ֱ�Ӵ�100��ʼ===\n");
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