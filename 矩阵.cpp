#include <stdio.h>
int main()
{
	int a[2][2]={{1,2},{2,3}};
	int b[2][2]={{2,3},{3,4}};
	int i,j;
	printf("¾ØÕóa:\n");
	for(i=0;i<=1;i++)
	   {
	   	for(j=0;j<=1;j++)
	   	   {
			  printf("%5d",a[i][j]);  
		   }
		printf("\n");   
	   }
	printf("¾ØÕób:\n");
	for(i=0;i<=1;i++)
	   {
	   	for(j=0;j<=1;j++)
	   	   {
	   	   	printf("%5d",b[i][j]);
		   }
		printf("\n");   
	   }
	printf("A.B:\n");
	int c[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		  c[i][j] +=a[i][1]*b[1][j];
	    }
	}
	for(int i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("%d",c[i][j]);
		}
    }	       
	return 0;
}
