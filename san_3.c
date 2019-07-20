#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int count = 0;
	for (n = 1; n < 100; n++)
	{
		if (n % 10 == 9) count++;
		if (n / 9 == 9) count++;
	}
	printf("%d\n", count + 1);		//Ã»ÓÐ¿¼ÂÇµ½9
	system("pause");
	return 0;
}