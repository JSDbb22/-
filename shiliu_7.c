#include <stdio.h>
#include <string.h>
#include <assert.h>



void *mymemmove(void * dst, const void * src, size_t count)
{
	void * ret = dst;

	if (dst <= src || (char *)dst >= ((char *)src + count))
	{
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else
	{
		dst = (char *)dst + count - 1;
		src = (char *)src + count - 1;
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}

	return(ret);
}


int main()
{
	char buffer1[] = "abcdef";
	char buffer2[] = "ddadfg";

	mymemmove(buffer1, buffer2, sizeof(buffer1));
	printf("%s\n", buffer1);
	memmove(buffer1, buffer2, sizeof(buffer1));
	printf("%s\n", buffer1);

	return 0;
}