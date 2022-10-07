#include<iostream>
using namespace std;
int chacheng(int a,int b);  		//叉乘函数   				
int diancheng(int c,int d);			//点乘函数 
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};				//数组 作为全局变量 
	int b[3][3]={{11,12,13},{14,15,16},{17,18,19}};		// 同上 
int main(void)									//主调函数 
{
	int i,j;
	cout<<"int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};"<<"\n";            //直接输出函数 
	cout<<"int b[3][3]={{11,12,13},{14,15,16},{17,18,19}}"<<"\n";     
	cout<<"点乘结果为"<<diancheng(i,j)<<"\n";                         //调用函数 
	cout<<"叉乘结果为"<<chacheng(i,j)<<"\n";
	return 0;	
 }
 //点乘函数 
 int diancheng(int i,int j)
 {
 	int sum,m;
 	for(i=0;i<3;i++)
 		for(j=0;j<3;j++)
        {
		m=a[i][j]*b[i][j];
        sum=sum+m;
    	}
    return(sum);
  }
 //叉乘函数 
  int chacheng(int i,int j)
  {
  	int sum,m,g;
 	for(i=0;i<3;i++)
 		for(j=0;j<3;j++)
 		    for(g=0;g<3;g++)
        {
		m=a[i][j]*b[i][g];
        sum=sum+m;
    	}
    return(sum);
	  }  
