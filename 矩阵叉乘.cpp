#include<stdio.h>


int main() {

	int a[2][3] = { 1,2,3,4,5,6 };
	int b[3][2] = { 1,2,3,4,5,6 };
	int c[3][2] = { 0 };
	int i, j, k, sum;

	printf(" 矩阵a为：");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
				
		}
	}
	printf("\n");
	printf("矩阵b为：");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d\t", b[i][j]);

		}
	}
	printf("\n");

	printf("矩阵a*矩阵b的值为：");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			sum = 0;
			for (k = 0; k < 3; k++) {
				sum+=a[i][k] * b[k][j];

			}
			c[i][j] = sum;
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("   %d", c[i][j]);

		}
	}






	return 0;

}