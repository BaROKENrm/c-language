#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

//�����е����ֱȴ�С
int main()
{
	printf("��������Ҫ�Ƚϵ����ֵĸ�����");
	int num = 0;
	scanf("%d", &num);
	int *p = (int *)malloc(num*sizeof(int));
	if (NULL == p){
		perror("malloc error\n");
		return 1;
	}
	printf("������Ҫ�Ƚϵ����֣�");
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