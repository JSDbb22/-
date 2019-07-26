#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//µİ¹é
/*
int my_strl(char *p)
{
	assert(p != NULL);
	if (*p == '\0')
		return 0;
	else
		return 1 + my_strl(p + 1);
}
*/
//·Çµİ¹é
int my_strl(char *p)
{
	assert(p != NULL);
	int num = 0;
	while (*p)
	{
		num++;
		p++;
	}
	return num;
}

int main()
{
	char *a = "abcdefg";
	int ret = my_strl(a);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
