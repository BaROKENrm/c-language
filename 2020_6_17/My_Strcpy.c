#include <stdio.h>
#include <windows.h>
#include <assert.h>

char *MyStrcpy(char *dst,const char *src)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	while (*src != '\0'){
		*dst = *src;
		dst++, src++;
	}
	*dst = *src;
	return ret;
}

int main()
{
	const char *src = "hello world";
	char dst[64];
	MyStrcpy(dst, src);
	printf("%s\n", dst);

	system("pause");
	return 0;

}