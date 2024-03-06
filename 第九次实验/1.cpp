#include<iostream>
using namespace std;
int main()
{
	int m;
	char a;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		a='a'+i-1;
		for(int j=1;j<=2*i-1;j++)
		cout<<a;
		cout<<endl;
	}
	return 0;
}
