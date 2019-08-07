#include <stdio.h>
#include <string.h>
#include <assert.h>

void *mymemcpy(void * dst, const void * src, size_t count)
{
	void * ret = dst;
	assert(dst);
	assert(src);
	while (count--)
	{
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;
	}

	return(ret);
}
	

int main()
{
	const char *s1 = "hello";
	int a = sizeof(s1);
	char s2[1024]= { 0 };
	mymemcpy(s2, s1, strlen(s1));
	printf("%s\n", s2);
	memcpy(s2, s1, strlen(s1));
	printf("%s\n", s2);	

	return 0;
}