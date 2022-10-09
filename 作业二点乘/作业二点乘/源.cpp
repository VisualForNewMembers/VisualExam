#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[3][3]= { 0 };
	int b[3][3]= { 0 };
	int c[3][3]= { 0 };
	int i, j, k;
	printf("a:\n");
	for (i = 0; i < 3; i++);
	{
		for (j = 0; j < 3;j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("b:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3;j++)
		{
			scanf_s("%d",&b[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				c[i][k] = a[i][j] * b[j][k];
			}
		}
	}
printf("½á¹ûÎª:\n");
for (i = 0; i < 3; i++)
{
	for (j = 0; j < 3; j++)
	{
		printf("%3d", c[i][j]);
	}
 }
	return 0;
}