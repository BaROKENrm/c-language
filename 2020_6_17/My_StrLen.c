#include <stdio.h>
#include <windows.h>


int MyStrLen(const char *str)
{
	if (*str == '\0'){
		return 0;
	}

	return 1 + MyStrLen(str+1);


	//·½·¨2
	//int i = 0;
	//while (str[i] != '\0'){
	//	i++;
	//}
	//return i;
}
int main()
{
	const char *str = "abcd1234";
	MyStrLen(str);
	int a = MyStrLen(str);
	printf("%d", a);
	system("pause");
	return 0;
}