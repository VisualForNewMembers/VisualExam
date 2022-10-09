#include <stdio.h>
int main(){
	int arr1[3][4]={0};
	int arr2[4][3]={0};
	int arr3[3][3]={0};
	for (int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&arr1[i][j]);
		} printf("\n");
	}  
	for (int i=0;i<4;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&arr2[i][j]) ;
		} printf("\n"); 
	}
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int sum=0;
			for (int k=0;k<4;k++){
				 sum=sum+arr1[i][k]*arr2[k][j];
			}arr3[i][j]=sum;
		} 
	}
	for (int i=0;i<3;i++){
		for (int 
		
		j=0;j<3;j++){
			printf("%d",arr3[i][j]);
		}
	} printf("\n");
	return 0;
}
