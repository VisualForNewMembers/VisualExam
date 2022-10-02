#include<iostream>
#include<windows.h>
using namespace std;
int main() {
	int sum=0;
	int a[2][3] = { 1,2,3,4,5,6 };//定义一个两行三列的数组
	int b[2][3] = { 1,2,3,4,5,6 };//定义一个两行两列的数组
	int c[3][2] = { 0 };
	cout << "矩阵1为" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\t" << a[i][j];
		}
		cout << "\n";//打印矩阵1
	}
	cout << "矩阵2为" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\t" << b[i][j];
		}
		cout << "\n";//打印矩阵2
	}
	cout << "那么矩阵1·矩阵2的值为" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "\t" << a[i][j] * b[i][j];//打印点乘结果
		}
		cout << "\n";
	}
	cout << "矩阵1转置后" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			c[i][j] = a[j][i];//矩阵转置a转c
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "那么矩阵1×矩阵2的值为" << endl;
	for (int k = 0; k < 3; k++) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2; j++) {
				;
				sum += c[k][j] * b[j][i];
			}
			cout << sum << "\t"; sum = 0;
		}
		cout << "\n";
	}//三重循环运算矩阵叉乘
	system("pause");
	return 0;
}