#include<stdio.h>

void BubbleSort(int a[], int n){
	int i, j, temp, flag;
	flag = 1;
	
	for(i = 0; i < n-1 && flag; i++){
		for(j = n-1; j > i; j--){
			flag = 0;
			if(a[j-1] > a[j]){
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;
				flag = 1;
			}
		}
	}
}

int main(){
	int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int k;
	
	printf("数组为：1, 2, 3, 4, 5, 6, 7, 8, 9, 0 \n");
	printf("请输入一个数：");
	scanf("%d", &k); 
	
	a[10] = k;
	BubbleSort(a, 11);
	
	printf("排序后的结果是：");
	for(int i = 0; i < 11; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
