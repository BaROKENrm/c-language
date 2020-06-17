#include <stdio.h>
#include <windows.h>
#include <assert.h>

int My_Strcmp(const char*str1, const char *str2)
{
	int ret = 0;
	assert(str1);
	assert(str2);
	while (!(ret = *(unsigned char *)str1 - *(unsigned char *)str2) && *str2){
		++str1, ++str2;
	}
		if (ret < 0){
			return -1;
		}
		else {
			return 1;
		}
}
int main()
{
	const char *str1 = "abcDef";
	const char *str2 = "abcdef";
	My_Strcmp(str1, str2);
	printf("%d\n", My_Strcmp(str1, str2));
	system("pause");
	return 0;
}