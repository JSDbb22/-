#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Isleap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d 是闰年\n", year);
	else 
		printf("%d 不是闰年！\n",year);
}
int main()
{
	int year;
	scanf("%d", &year);
	Isleap_year(year);
	system("pause");
	return 0;
}