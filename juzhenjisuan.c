#include<stdio.h>
int A[2][2] = { {1,2}
               ,{3,4} };
int B[2][2] = { {5,6}
               ,{7,8} };
int C[2][2] = { 0 };
int D[2][2] = { 0 };
int i,j,k; //计数器
int main(void) 
{
    printf("矩阵A");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("%d ",A[i][j]);
        }

    }
    printf("\n");
    printf("矩阵B");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("%d ",B[i][j]);
        }

    }
    printf("\n");
    printf("矩阵A x 矩阵B\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            C[i][j]=0;
            for(k=0;k<2;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
            
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            D[i][j]=0;
            D[i][j]=A[i][j]*B[i][j];
        }
    }
      
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        printf("%d ",C[i][j]);
    }
    printf("\n");
    printf("矩阵A * 矩阵B\n");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        printf("%d ",D[i][j]);
    }
}