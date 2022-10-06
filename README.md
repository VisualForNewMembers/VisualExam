#include <stdio.h>
int main()
{
	int arr[8] = {1,4,6,8,9,11,14 };
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("数组为:");
	for (n; n <= 6; n++)
	{
		printf("%d ", arr[n]);
	}
	printf(" \n");



		scanf_s("%d", &a);

	for (b; b < 7; b++)
	{ 
		if (arr[b] > a)
		
			break;
     }
	//确认a的位置

	for (c=6; b<=c ; c--)
	{
		arr[c +1] = arr[c];
	}
	arr[b] = a;

		for (d; d<= 7; d++)
		{
			printf("%d ", arr[d]);
		}
	return 0;
}
