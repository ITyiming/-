#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int h=0,d,c,b,a,n,num=0;
cin>>n;
b=n;
do
{num=num+1;
b=b/10;}
while(b%10!=0);
cout<<"��������"<<num<<"λ��"<<'\n';
cout<<"�����ִӵ�λ����λΪ";
c=n;
for(;c!=0;c=c/10)
{a=c%10;
cout<<a<<'\t';}
cout<<'\n'<<"�����ִӸ�λ����λΪ";
d=n;
while(d!=0)
{h=d/(pow(10,num-1));
d=d-h*pow(10,num-1);
num=num-1;
cout<<h<<'\t';
};
return 0;
}
