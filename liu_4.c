#include<stdio.h>
#include<stdlib.h>
#define N 10
void display(int a[])
{
	for (int i = 0; i < N; ++i)
	{
		printf("%d\n", a[i]);
	}
	printf("\n");
}
void init(int a[])
{
	for (int i = 0; i < 20; i += 2)
	{
		a[i] = i;
		printf("%d\n", a[i]);
	}
	printf("\n");
}
void empty(int a[])
{
	for (int i = 0; i < N; ++i)
	{
		a[i] = 0;
		printf("%d\n", a[i]);
	}
	printf("\n");
}
void reverse(int a[])
{
	int left = 0;
	int right = N - 1;
	while (left < right)
	{
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
	display(a);
}
int main()
{
	int a[N] = { 0 };
	int a1[N] = { 0 };
	init(a);
	for (int i = 0; i < N; ++i)
	{
		a1[i] = i;
	}
	empty(a);
	reverse(a1);
	system("pause");
	return 0;
}