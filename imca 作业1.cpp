#include<iostream>
using namespace std;
int main(void)
{
	int a[10]={11,22,33,44,55,66,77,88,99};       //数组 
	int i,j,t;
	cout<<"数组如下所示"<<"\n"; 
	for(i=0;i<=8;i++)
		cout<<a[i]<<"\n"; 
	cout<<"输入一个数"<<"\n";
	cin>>a[9];                          //将输入的数放进数组 
 	for(i=0;i<=9;i++)					//按顺系排列数组 
	    for(j=i+1;j<=9;j++)
	    
	    	if(a[i]>a[j])
	    	{
				t=a[i];
	    		a[i]=a[j];
	    		a[j]=t;
			}
	
	cout<<"输入后数组如下"<<"\n";
	for(i=0;i<=9;i++)                   //输出数组 
	cout<<a[i]<<"\n"; 
	    	
	return 0; 
	
}
