#include<stdio.h>

int diancheng(int A[3][3], int B[3][3], int C[3][3]){
	for(int i =0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			C[i][j] = A[i][j] * B[i][j];
	    }
	}
	return C[3][3];
}

int chacheng(int A[3][3], int B[3][3], int D[3][3]){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			D[i][j] = (A[i][0] * B[0][j]) + (A[i][1] * B[1][j]) + (A[i][2] * B[2][j]);
	    }
    }
	return D[3][3];
}

int main(){
	int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int B[3][3] = {{1, 2, 4}, {3, 5, 6}, {7, 8, 9}};
	int C[3][3] = {};
	int D[3][3] = {};
	
	printf("A矩阵为：\n[1 2 3\n 4 5 6\n7 8 9]\n");
	printf("B矩阵为：\n[1 2 4\n 3 5 6\n7 8 9]\n");
	
	C[3][3] = diancheng(A, B, C);
	D[3][3] = chacheng(A, B, D);
	
	printf("A·B的结果是：[\n");
    for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", C[i][j]);
	    }
	    printf("\n");
    }
    printf("]\n");
	
	printf("A×B的结果是：[\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", D[i][j]);
	    }
	    printf("\n"); 
    }
	printf("]");
	
	return 0;
}
