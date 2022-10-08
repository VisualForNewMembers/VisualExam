#include<iostream>

using namespace std;

int main() {
	//创建矩阵A,B
	int A[3][3] = { {1,2,3},
				 {4,5,6},
				 {7,8,9} };
	int B[3][3] = { {9,8,7},
				    {6,5,4},
				    {3,2,1} };

	//打印矩阵A，B
	//打印A
	cout << "矩阵A为" << endl;
	for (int a = 0; a <= 2; a++) {
		for (int b = 0; b <= 2; b++) {
			cout << A[a][b] << " ";
		}
		cout << endl;
	}
	//打印B
	cout << "矩阵B为" << endl;
	for (int a = 0; a <= 2; a++) {
		for (int b = 0; b <= 2; b++) {
			cout << B[a][b] << " ";
		}
		cout << endl;
	}

	//计算A点乘B并打印
	cout << "矩阵A·B为：" << endl;
	for (int a = 0; a <= 2; a++) {
		for (int b = 0; b <= 2; b++) {
			int temp = A[a][b] * B[a][b];
			cout << temp << "\t";
		}
		cout << endl;
	}
	//计算矩阵AxB并打印
	cout << "矩阵AxB为：" << endl;
	for (int a = 0; a <= 2; a++) {
		for (int b = 0; b <= 2; b++) {
			int temp2 = 0;
			for (int c = 0; c <= 2; c++) {
				temp2 += A[a][c] * B[c][b];
			}cout << temp2 << "\t";
		}cout << endl;
	}
	system("pause");
	return 0;
}
