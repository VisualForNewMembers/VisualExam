#include <stdio.h>
int main() {
	int arr[10]={1,2,3,4,5,6,7,8,9};
	int k,i,j,t,t2,h;
	int end=arr[8];
	for (k=0;k<9;k++){
		printf("%d",arr[k]);
	} 
	int n;
	scanf("%d",&n);
	if (n>end){
		arr[9]=n;
	} else {
		for(i=0;i<8;i++){
			if (arr[i]>n){
				t=arr[i];
				arr[i]=n;
			for(j=i+1;j<10;j++){
				t2=arr[j];
				arr[j]=t;
				t=t2; 
		     	}
		        break;	}
    	}
}
	for (h=0;h<10;h++){
		printf("%d",arr[h]);		
   } 

       return 0;
}
