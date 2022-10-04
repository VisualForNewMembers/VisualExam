#include<iostream>
using namespace std;

int main()
{
	int i,c,a[10];
	cout<<"input 10 numbers:\n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	c =a[2];
	for(i=1;i<10;i++)
	{
		if(a[i]>c)
		{
			c =a[i];
		}
	}
	cout<< c <<" ";
}
