#include <stdio.h>
#include <windows.h>
#include <assert.h>

char* My_Strcat(char dst[], const char *src)
{
	assert(dst);
	assert(src);
	 char *ret = dst;
	 while (*dst){
		 dst++;
	 }
	 while (*dst = *src){
		 dst++, src++;
	 }
	 return ret;
}
int main()
{
	const char *src = "abcd";
	char dst[32] = "1234"; //给dst的分配更大的空间以免访问非法内存
	char *result = My_Strcat(dst, src);
	printf("%s\n",result );
	system("pause");
	return 0;
}