#include<iostream>
using namespace std;

int main()
{
	int	b1[3][3] = { 0 };
	int b2[3][3] = { 0 };
	int b3[3][3] = { 0 };
	cout<<"输入第一个矩阵\n";
	for (int i = 0;i <3;i++)
	{
		for (int j = 0;j <3; j++)
		{
			cin>>b1[i][j];
		}
		cout<<"\n";
	}
	cout<<"第二个矩阵为\n";
	for (int i = 0;i < 3; i++)
	{
        for (int j = 0;j <3;j++)
		{
			cin>>b2[i][j];
		}
		cout<<"\n";  
	}
	cout<<"矩阵点乘的结果：\n";
	for  (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<b1[i][j ] *b2[i][j];
		}
		cout<<"\n";
	}
}
