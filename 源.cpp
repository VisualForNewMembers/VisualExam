#include<iostream>
using namespace std;
int main()
{
	int a, b, x1, x2, y1, y2, z1, z2, h, m, n,o;
	cout << "输入向量A  ";
	cin >> x1 >> y1 >> z1;
	cout << "输入向量B  ";
	cin >> x2 >> y2 >> z2;
	h = y1 * z2 - z1 * y2;
	m = z1 * x2 - x1 * z2;
	n = x1 * y2 - y1 * x2;
	cout << "A*B= "<<"(" << " " << m << " " << n << ")" << endl;
	o = x1 * x2 + y1 * y2 + z1 + z2;
	cout << "A·B= " << o << endl;

	return 0;
}