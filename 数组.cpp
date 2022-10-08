#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a[10] = {4123, 3213, 534, 35123, 53414, 5525, 6431, 5362, 437, 0};
	int i, j, k, x;
	printf("原顺序数组:\n");
	for (i = 0; i < 10; i++)
		printf("%d\n", a[i]);
	printf("请输入一个整数:");
	scanf_s("%d", &x);
	a[9] = x;
		for (i = 0; i < 10 - 1; i++)
		{
			for (j = 0; j < 10 - 1 - i; j++)
			{
				if (a[j] > a[j + 1])
					k = a[j], a[j] = a[j + 1], a[j + 1] = k;
			}
		}
		printf("排列后数组:\n");
		for (i = 0; i < 10; i++)
			printf("%d\n", a[i]);
		cout << "hello world" << endl;

		system("pause");

		return 0;
}


