#include <stdio.h>
#include <windows.h>
#include <assert.h>

void *My_Memmove(void* dst, void* src, size_t num)
{
	assert(dst);
	assert(src);
	const char*src_cpy = (char*)src;
	char *dst_cpy = (char*)dst;
	if (dst_cpy > src_cpy&&dst_cpy<src_cpy + num){
		//从右向左
		src_cpy = src_cpy + num - 1;
		dst_cpy = dst_cpy + num - 1;
		while (num > 0){
			*dst_cpy = *src_cpy;
			src_cpy--;
			dst_cpy--;
			num--;
		}
	}
	else {
		//从左向右
		while (num > 0){
			*dst_cpy = *src_cpy;
			src_cpy++;
			dst_cpy++;
			num--;
		}
		return dst;
	}
}
	int main()
{
		char str[32] = "abcdefg123456";
		int len = strlen(str);
		char str1[32];
		My_Memmove(str, str + 3, len);
		My_Memmove(str + 3, str, len);
		My_Memmove(str1, str, len);
	system("pause");
	return 0;
}





//int main()
//{
//	//memmove的用法
//	char str[32] = "abcdefg123456";
//	int len = strlen(str);
//	char str1[32];
//	memmove(str, str + 3, len);
//	memmove(str+3, str , len);
//	memmove(str1, str,len);
//	system("pause");
//	return 0;
//}