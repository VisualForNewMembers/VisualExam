#include<stdio.h>

int main() 
{

	int i, j, insetr_num, temp1, temp2;     //定义temp1，temp2为暂存的变量
	int a[11] = { 10,20,30,40,50,60,70,80,90,100};
	for (i = 0; i < 11; i++) 
	{

		printf("   %d", a[i]);
	}                               //打印数组
	printf("\n请输入一个数");
	scanf_s("%d", &insetr_num);
	

	if (insetr_num > a[9])    
	{
		a[10] = insetr_num;
	}
	else 
	{
		for (i = 0; i < 10; i++) 
		{

			if (a[i] > insetr_num)    //找到数组中第一个大于输入数字的元素
			{
				temp1 = a[i];
				a[i] = insetr_num;
				for (j = i + 1; j < 11; j++) 
				{
					temp2 = a[j];
					a[j] = temp1; 
					temp1 = temp2;


				}
				break;
			}

		}
	}

	for(i = 0; i < 11; i++)
			printf("%d,", a[i]);
	







	return 0;

}