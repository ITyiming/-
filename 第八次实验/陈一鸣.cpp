#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[10][6], * p[10];
	for (int i = 0; i < 10; i++)
	{
			cin >> a[i];
		p[i] = a[i];
	}
	char *big=p[0];
	for (int t = 1; t < 10; t++)
	{
		if (strlen(big)<strlen(p[t])) big=p[t];
		
	}
	cout << big << endl;
}
