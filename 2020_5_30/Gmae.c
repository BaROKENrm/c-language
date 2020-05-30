#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

void Menu()
{
	printf("###########################################\n");
	printf("#1.游戏开始                         2.退出#\n");
	printf("###########################################\n");
	printf("请输入你的选择:");
}
void Game()
{
	    int count = 10;
		printf("游戏开始!\n");
		srand((unsigned)time(NULL));
		int data = rand() % 100 + 1;//随机生成数[1,100]
		while (count>0){
			printf("请输入你要猜的数:");
			int x = 0;
			scanf("%d", &x);
			if (x > data){
				printf("你猜大了\n");
				--count;
				printf("你还剩%d次机会\n", count);
				if (count == 0){
					printf("很遗憾你没猜出来！\n");
					break;
				}
			}
			else if (x < data){
				printf("你猜小了\n");
				--count;
				printf("你还剩%d次机会\n", count);
				if (count == 0){
					printf("很遗憾你没猜出来！\n");
					break;
				}
				
			}
			else {
				printf("你猜对了,数字是%d\n", data);
				break;
			}
		}
	}

int main()
{
	int quit = 0;
	while (!quit){
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			printf("是否想再来一局?\n");
			break;

		case 2:
			quit = 1;
			printf("游戏结束!\n");
			break;
		default:
			printf("你的选择有误,请重新选择!\n");
			break;
		}
		
	}
	system("pause");
	return 0;
}