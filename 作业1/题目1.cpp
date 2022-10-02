#include <iostream>
#include<windows.h>
using namespace std;
int main() {
	cout << "原数组为" << endl;
	const int a = 10; int input, t;
	int example[a] = {1,2,3,4,6,8,10,12,15};//定义数组
	for (int i = 0; i < a-1; i++) {
		cout << example[i] << "\t" ;
	}
	cout << endl;
	cout << "请输入一个数,接下来将进行排列" << endl;
	cin >> input;//用户输入
	for (int i = 0; i < a-1; i++) {
		if (input < example[i]) 
		{
			t = i; break;
		}
	}
	for (int i =a-2; i>=t; i--) 
	{
		example[i + 1] = example[i];
	}
	example[t] = input;
	cout << "新数组为" << endl;
	for (int i = 0; i < a; i++) {
		cout << example[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
	
}
