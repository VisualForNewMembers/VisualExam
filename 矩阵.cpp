#include <stdio.h>
int main()
{
	int A[2][2] = {
		{1,2},
		{4,5} };
	int B[2][2] = {
		{1,2},
		{4,5} };
	int C[2][2] = {};
	int a1, b1, j, c = 0;
	printf("AxB的结果为：\n");
	for (a1 = 0; a1 < 2; a1++)
	{
		for (b1 = 0; b1 < 2; b1++)
		{
			c = 0;//重置c的数据，让之后的数值不会累积
			for (j = 0; j < 2; j++)
			{
				c += A[a1][j] * B[j][b1];
			}
			C[a1][b1] = c;

			printf("%d ", C[a1][b1]);
		}
		printf("\n");
	}
	printf("A·B的结果为：\n");
	int i, k,sum;
	for (i = 0; i < 2; i++)
	{
		for (k = 0; k < 2; k++)
		{
		sum=A[i][k] * B[i][k];
		C[i][k] = sum;
		printf("%d ", C[i][k]);
		}
		printf("\n");
	}
}