#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Isleap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d ������\n", year);
	else 
		printf("%d �������꣡\n",year);
}
int main()
{
	int year;
	scanf("%d", &year);
	Isleap_year(year);
	system("pause");
	return 0;
}