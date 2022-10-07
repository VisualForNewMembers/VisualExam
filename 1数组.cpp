#include <iostream>
using namespace std;
int main()
{
	int num,i,j,s[8]={1,3,5,8,9,16,18};
	cin>>num;
	i=6;
	while((i>=0)&&(num<s[i]))
	{
		s[i+1]=s[i];
		i--;
	}
	s[i+1]=num;
	for(i=0;i<=7;i++)
	cout<<""<<s[i];
}
