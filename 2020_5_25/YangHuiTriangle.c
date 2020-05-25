#include <stdio.h>
#include <windows.h>

void ShowTriangle()
{
	int arr[10][10];
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++){
		for (j = 0; j <= i; j++){
			arr[i][j] = 1;
		}
	}
	for (i = 2; i <10; i++){
		for (j = 1; j < i; j++){
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}


	for (i = 0; i < 10; i++){
		for (j = 0; j <=i; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


int main()
{

	ShowTriangle();
	system("pause");
	return 0;
	
}