#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int A, S, D;
	//输出原顺序数组给用户
	int arr[10] = { 1, 3, 5, 6, 7, 9 ,10, 12, 14 };//arr[10]是因为后面要把元素向后移动腾位置，不然'14'会消失
	printf("这是原来的数组：\n");
	for (A = 0; A < 9; A++)//这行不要用分号，不然就一直在这一行循环，一直加到9才到下一行，然后输出最后一个数15
	{
		printf(" %d", arr[A]);
	}
	//用户输入一个值,寻找这个值的位置
	printf("\n请输入一个数：");
	scanf_s("%d", &S);//这里我用scanf时，它警告我返回值被忽略，用scanf_s就没有这个警告了，我也不知道为什么。
	for (A = 0; A < 9; A++)
	{
		if (arr[A] >= S) break;//break是跳出该循环，
	}
	D = A;//找到了位置对应的值，赋值给一个新的变量
	//把部分元素向后移动，将这个值插入他应该在的位置，并输出新的数组
	for (A = 8; A >=D; A--)
	{
		arr[A + 1] = arr[A];
	}
	arr[D] = S;
	printf("\n现在展示新的数组给你看");
	for (A = 0; A < 10; A++)
	{
		printf(" %d", arr[A]);
	}

	return 0;
}