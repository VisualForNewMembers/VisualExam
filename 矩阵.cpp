#include<iostream>
using namespace std;

int main()
{
	int a1[3][3]= { 0 };
	int a2[3][3]= { 0 };
	int a3[3][3]= { 0 };
	cout<<"输入第一个矩形:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a1[i][j];
		}
		printf("\n");
	}
	cout<<"输入第二个矩形:\n";
	for(int l=0;l<3;l++)
	{
		for(int u=0;u<3;u++)
		{
			cin>>a2[l][u];
		}
		cout<<"\n";
	}
	for(int i=0;i<3;i++ )
	{
		for(int j=0;j<3;j++)
		{
			int sum =0;
			for (int k=0;k<3;k++)
			{
				sum= sum +a1[k][k] *a2[k][k];
			}
			a3[i][j] =sum;
			
		}
	}
	cout<<"矩阵相乘为：\n";
	for(int i =0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a3[i][j];
		}
		cout <<"\n";
	}
}
