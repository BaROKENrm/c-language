#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

void Menu()
{
	printf("###########################################\n");
	printf("#1.��Ϸ��ʼ                         2.�˳�#\n");
	printf("###########################################\n");
	printf("���������ѡ��:");
}
void Game()
{
	    int count = 10;
		printf("��Ϸ��ʼ!\n");
		srand((unsigned)time(NULL));
		int data = rand() % 100 + 1;//���������[1,100]
		while (count>0){
			printf("��������Ҫ�µ���:");
			int x = 0;
			scanf("%d", &x);
			if (x > data){
				printf("��´���\n");
				--count;
				printf("�㻹ʣ%d�λ���\n", count);
				if (count == 0){
					printf("���ź���û�³�����\n");
					break;
				}
			}
			else if (x < data){
				printf("���С��\n");
				--count;
				printf("�㻹ʣ%d�λ���\n", count);
				if (count == 0){
					printf("���ź���û�³�����\n");
					break;
				}
				
			}
			else {
				printf("��¶���,������%d\n", data);
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
			printf("�Ƿ�������һ��?\n");
			break;

		case 2:
			quit = 1;
			printf("��Ϸ����!\n");
			break;
		default:
			printf("���ѡ������,������ѡ��!\n");
			break;
		}
		
	}
	system("pause");
	return 0;
}