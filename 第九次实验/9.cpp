#include<iostream>
using namespace std;
int main()
{
	int a[20],*p[20],n;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
		*(p+i)=(a+i);
	}
	cout<<"�仯ǰ������Ϊ"<<endl;
	for(int i=0;i<10;i++)
	cout<<*p[i];
	cout<<'\n'<<"������һ����"<<endl; 
	cin>>n;
	for(int i=9;i>=0;i--)
	*(p+i+n)=*(p+i);
	for(int j=10,k=0;j<10+n;j++,k++)
	*(p+k)=*(p+j);
	cout<<'\n'<<"�任��Ϊ"<<endl;
	for(int i=0;i<10;i++)
	cout<<*p[i]; 
	return 0; 
}
