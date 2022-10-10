#include<iostream>
using namespace std;
int main()
{
	int a[2][3] = { 1,3,5,7,9,11};//定义矩阵A
	cout << "矩阵A为：" << endl;
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "矩阵B为：" << endl;
	int b[2][3] = { 2,4,6,8,10,12};//定义矩阵B
	for (int k = 0;k < 2;k++)
	{
		for (int l = 0;l < 3;l++)
		{
			cout << b[k][l] << "  ";
		}
		cout << endl;
	}
	cout << "A·B的结果为：" << endl;
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << a[i][j] * b[i][j] << "  ";//求点乘
		}
		cout << endl;
	}
	int c[3][2];
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			c[j][i] = b[i][j];
		}
	}
	cout << "矩阵B转置后为：" << endl;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			cout << c[i][j] << "  ";//转置矩阵B
		}
		cout << endl;
	}
	int d[3][3];
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			d[i][j] = 0;//提前将d[i][j]初始化
			for(int k = 1;k<2;k++)
			{
				d[i][j] += c[i][k] * a[k][j];//第二矩阵列数与第一矩阵行数相乘连加求叉乘
			}
		}
	}
	cout << "AxB的结果为：" << endl;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << d[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}