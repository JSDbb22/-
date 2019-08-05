#include <stdio.h>
#include <stdlib.h>


int a(int k)
{
	int e = k / 2 + k % 2;
	if (e > 1)
		return k / 2 + a(e);
	else
		return k / 2;
}


int main()
{
	int y = 20;
	int k = y;
	printf("%d\n", y + a(k));
	

	system("pause");
	return 0;
}