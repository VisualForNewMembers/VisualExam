#include<stdio.h>
int main()
{
	int a,b,c,d;
	int i,j,k,l,m,n;
	int A[3][3]={{0,1,2},{3,5,4},{9,8,7}} ,B[3][3]={{7,9,5},{2,4,7},{9,0,1}};
	int arry1[3]={0},arry2[9]={0},arry3[9]={0};
	for(a=0;a<=2;a++)
	{
		for(d=0,k=0;d<=2,k<=8;d++,k++)
		{
			for(b=0,c=0,i=0;b<=2,i<=2,c<=2;b++,c++,i++)
			{
				arry1[i]=A[a][b]*B[c][d];
	     	}
	     	
			for(i=0,j=0;i<=2;i++)
			{
				j=arry1[i]+j;
			}	
			arry2[k]= j;	
		}
	
	}
	 printf("A*B的结果是:\n");
	 for(k=0;k<=8;k++)
	{
		printf("%d\t",arry2[k]);
		
	} 
	printf("\n");
	for(a=0,c=0,l=0;a<=2,c<=2;a++,c++)
	{
		for(b=0,d=0;b<=2,d<=2,l<=8;l++,b++,d++)
		{
			arry3[l]=A[a][b]*B[c][d];
		}
			
	}
	printf("A·B的结果是:\n");
	for(l=0;l<=8;l++)
	{
		printf("%d\t",arry3[l]);
	}
	return 0;
 } 
