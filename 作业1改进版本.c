#include <stdio.h>
#include <stdlib.h>

int main(){
	
	system("chcp 65001");
	
	int a[10] = {1,4,5,6,8}; //创建一个原顺序数组
	int i;
	int d;
	
	printf("原顺序数组:");
	
	for(i=0;i<10;i++){
		printf("%d\t", a[i]); //将原顺序数组展示给用户
		
	}
	
	printf("\n");
		
	scanf("%d", &d); //要求用户输入的值d
	
	for(i=0;i<5;i++){  //找出在原数组中比d大或相等的数的下标i
		if(d<a[i]){
			break;
		}
	}
	
	int b[10] = {0}; //创建一个空白数组
	int t;
	
	b[i] = d;  //将新数组i位置放置上d
	for(t=0;t<i;t++){  //将原数组比d小的数放置在新数组的相同位置上
		b[t] = a[t];
		
	}
	
	for(t=i;t<5;t++){  //将原数组比的大或相等的数放置在新数组上，放置位置为原位置加一
		b[t+1] = a[t];
	}
	
	printf("新数组:");
		
	for(i=0;i<10;i++){
		printf("%d\t", b[i]); //输出数组
		
	}
	
}