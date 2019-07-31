#include <stdio.h>
#include <stdlib.h>

int My_Strlen(char *str)				//Çó×Ö·û´®³¤¶È
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void Reverse(char *left, char *right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


void str_reverse(char *str)
{
	char *left = str;
	char *right = str + My_Strlen(str) - 1;
	Reverse(left, right);			//ÄæÐòÕû¸ö×Ö·û´®
	while (*str)
	{
		char *tmp = str;
		while ((*str != ' ') && (*str != '\0'))
		{
			str++;
		}
		char *end = str - 1;
		Reverse(tmp, end);
		if (*str == ' ')
		{
			str++;
		}
	}
}

int main()
{
	char str[] = "student a am i";
	str_reverse(str);
	printf("%s", str);
	printf("\n");
	system("pause");
	return 0;
}