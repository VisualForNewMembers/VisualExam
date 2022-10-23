#include <iostream>
#include<windows.h>
using namespace std;
int main() {
	cout << "原数组为" << endl;
	const int a = 10;
	int xiabiao; int input, t = 0; int flag;
	int arr[a] = { 1,2,3,4,6,8,10,12,15 };//定义数组
	for (int i = 0; i < a - 1; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "请输入一个数,接下来将进行排列" << endl;
	cin >> input;//用户输入
	//找到合适的位置
	if (input < arr[a - 2]) {
		for (int i = 0; i < a - 1; i++) {
			if (input < arr[i]) {
				flag = i;
				break;
			}
		}
		for (int j = 9; j > flag; j--) {
			arr[j] = arr[j - 1];
		}
		arr[flag] = input;
	}
	else arr[a-1] = input;
	cout << "新数组为" << endl;
	for (int i = 0; i < a; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;

}