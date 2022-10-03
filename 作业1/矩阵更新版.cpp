#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	const int A = 2; const int B = 3;
	int sum = 0;
	int a[A][B] = { 1,2,3,4,5,6 };//定义一个两行三列的数组
	int b[A][B] = { 1,2,3,4,5,6 };//定义一个两行两列的数组
	int c[B][A] = { 0 };
	int d[B][B] = { 0 };
	
	cout << "矩阵1为" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << "\t" << a[i][j];
		}
		cout << "\n";//打印矩阵1
	}
	cout << "矩阵2为" << endl;
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++) 
		{
			cout << "\t" << b[i][j];
		}
		cout << "\n";//打印矩阵2
	}
	cout << "那么矩阵1·矩阵2的值为" << endl;
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++)
		{
			cout << "\t" << a[i][j] * b[i][j];//打印点乘结果
		}
		cout << "\n";
	}
	cout << "矩阵1转置后" << endl;
	for (int i = 0; i < B; i++)
	{
		for (int j = 0; j < A; j++)
		{
			c[i][j] = a[j][i];//矩阵转置a转c
		}
	}
	for (int i = 0; i < B; i++) {
		for (int j = 0; j < A; j++) {
			cout <<"\t" << c[i][j];
		}
		cout << endl;
	}
	cout << "那么矩阵1×矩阵2的值为" << endl;
	for (int k = 0; k < B; k++) 
	{
		for (int i = 0; i < B; i++) 
		{
			for (int j = 0; j < A; j++) 
			{
				d[k][i] += c[k][j] * b[j][i];
			}
		}
	}//三重循环运算矩阵叉乘
	for (int k = 0; k < B; k++) 
	{
		cout << endl;
		for (int i = 0; i < B; i++)
		{
			cout << "\t" << d[k][i];
		}
	}
	
	system("pause");
	return 0;
}