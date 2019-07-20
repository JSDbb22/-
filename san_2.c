#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, a;
	double y = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 2 == 0) a = -1;
		else a = 1;
		y = y + a * (1.0 / i);
	}
	printf("%lf\n", y);
	system("pause");
	return 0;
}
