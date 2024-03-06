#include<iostream>
using namespace std;
int main()
{
	int a[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<=i;j++)
		cin>>a[i][j];
	}
	for(int i=0;i<3;i++)
	{
		for(int j=3;j!=i;j--)
		a[i][j]=a[j][i];
	}
   for(int i=0;i<4;i++)
   {
   	for(int j=0;j<4;j++)
   	cout<<a[i][j];
   	cout<<endl;
   }
   return 0;
}
