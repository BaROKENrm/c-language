#include <stdio.h>
#include <windows.h>
#include <errno.h>
#include <string.h>
#pragma warning(disable:4996)

//main�����˳�����������˳��������˳�ʱ����ֵΪ0��������������Ϊ0����������
//����Ĵ���ԭ�򶼻���һ�����ֶԶ�Ӧ
//�����룺һ���Ǳ�ʾ�û��ڵ���c��׼�⺯����ʱ������ڵ����ڼ䣬������
//c��������һ��ȫ�ֱ���errno���ͻᱻ���ã�Ĭ����0��
int main()
{
	for (int i = 0; i < 43 ; i++){//windows��ֻ��43��������
		printf("%d errno String:%s\n", i, strerror(i));
	}
	system("pause");
	return 0;//�����˳���
}