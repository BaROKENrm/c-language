#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

//数组中的数字比大小
int main()
{
	printf("请输入你要比较的数字的个数：");
	int num = 0;
	scanf("%d", &num);
	int *p = (int *)malloc(num*sizeof(int));
	if (NULL == p){
		perror("malloc error\n");
		return 1;
	}
	printf("输入你要比较的数字：");
	for (int i = 0; i < num; i++){
		scanf("%d", p + i);
	}
	int max = p[0];//p[0]==*(p+0)
	for (int i = 1; i < num; i++){
		if (max < p[i]){
			max = p[i];
		}
	}
	printf("max=%d\n",max);
	free(p);
	system("pause");
	return 0;

}