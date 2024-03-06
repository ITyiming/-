#include<iostream>
using namespace std;
int search(char str[],char sub[])
{
	bool flag=false;
	for(int i=0;flag==false;i++)
	{
		if(str[i]==sub[0])
		{
			for(int j=1;j<sizeof(sub);j++)
			{
				if(str[i+j]!=sub[j]) break;
				else flag=true;
			}
		}
		if(flag==true) return i;
	}
	if(flag==false) return 0;
}
int main()
{
	char s[40],sub[5];
	for(int i=0;i<40;i++)
	cin>>s[i];
	cout<<"OK";
	for(int i=0;i<5;i++)
	cin>>sub[5];
	cout<<"OK";
	int num=search(s,sub),n=0;
	for(;num<35&&num!=0;)
	{
		n++;
		num=search(s,sub);
	}
	cout<<n<<endl;
	return 0;
	
 } 
