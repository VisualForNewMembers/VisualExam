#include <stdio.h>//点乘
int main()//我是先写的叉乘再写的点乘，就感觉点乘比较简单，就没什么注释了
{
	int a,c;
	int arrA[2][3] = { 1,2,3,4,5,6};
	int arrB[2][3] = { 5,6,7,8,9,10 };//点乘的矩阵的行数和列数要相等
	printf("矩阵A:\n");
	for (a = 0; a < 2; a++)
	{
		for (c = 0; c < 3; c++)
			printf(" %d", arrA[a][c]);
		printf("\n");
	}
	printf("矩阵B:\n");
	for (a = 0; a < 2; a++)
	{
		for (c = 0; c < 3; c++)
			printf(" %d", arrB[a][c]);
		printf("\n");
	}
	int arrC[2][3]={0};
	printf("矩阵A点乘B的结果:\n");
	for (a = 0; a < 2; a++)
	{
		for (c = 0; c < 3; c++)
		{
			arrC[a][c] = arrA[a][c]*arrB[a][c];//点乘就是两个矩阵相同坐标的数相乘，然后得到的数的坐标不变，所以循环时ABC矩阵的坐标都一样
		}
	}
	for (a = 0; a < 2; a++)
	{
		for (c = 0; c < 3; c++)
			printf(" %d", arrC[a][c]);
		printf("\n");
	}

	return 0;
}