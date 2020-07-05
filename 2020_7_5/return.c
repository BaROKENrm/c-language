#include <stdio.h>
#include <windows.h>
#include <errno.h>
#include <string.h>
#pragma warning(disable:4996)

//main函数退出，代表程序退出。程序退出时返回值为0则程序无误，如果不为0，则程序出错
//具体的错误原因都会有一个数字对对应
//错误码：一般是表示用户在调用c标准库函数的时候，如果在调用期间，出错了
//c语言中有一个全局变量errno，就会被设置（默认是0）
int main()
{
	for (int i = 0; i < 43 ; i++){//windows中只有43个错误码
		printf("%d errno String:%s\n", i, strerror(i));
	}
	system("pause");
	return 0;//程序退出码
}