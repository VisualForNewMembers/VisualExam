#include<stdio.h>

int main() {

	int a[2][4], b[4][3], c[2][3];
	int i, j, k, sum;

	printf("请输入一个2x4的矩阵\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			scanf_s("%d", &a[i][j]);

		}   
	}   //输入第一个矩阵
	printf("请输入一个4x3的矩阵\n");

	for (i= 0; i < 4; i++) {
		for (j= 0; j < 3; j ++ ) {
			scanf_s("%d", &b[i][j]);

		}
	}   //输入第二个矩阵

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			sum = 0;
			for (k = 0; k < 4; k++) {
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
	printf("得到一个2x3的矩阵为\n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%5d", c[i][j]);
			printf("\n");

		}
	}

	return 0;
}