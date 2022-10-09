#include<stdio.h> 
#define row 3
#define col 4
int main() {
	int	arr1[row][col] = { 0 };
	int arr2[row][col] = { 0 };
	int arr3[row][col] = { 0 };
	printf("输入第一个矩阵\n");
	for (int  i = 0; i < row; i++)
	{
		printf("输入第%d行：",i+1);
		for (int  j = 0; j < col; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
		printf("\n");
	}
	printf("第二个矩阵为\n");
	for (int  i = 0; i < row; i++)
	{
		printf("输入第%d行：", i + 1);
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
		printf("\n");
	}
	printf("矩阵点乘的结果为：\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%4d", arr2[i][j]*arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}

