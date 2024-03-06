#include <iostream>
#include <string>
using namespace std;
void search(string c);
void replace(string c);
string str[35]={"East China Normal University", "is","very","beautiful",".","I","like","East China Normal University","very","much",".","There","is","a","big","playground","in","East China Normal University",".","The","teachers","in","East China Normal University","are","very","kind",".","The","students","are","very","polite","and","smart","."};
string b="East China Normal University";
int main()
{int j,k;
string a;
string d;
search(b);
cout<<"ÇëÊäÈëÌæ»»×Ö·û"<<endl; 
cin>>a;
replace(a);
d=b;
b=a;
replace(d);
return 0;
}
void search(string c)
{
int k;
bool flag=false;
for(k=0;k<35;k++)
{
	if(str[k]==c)
	{
		flag=true;
		
	}
}
    if(flag==false)
    cout<<"can't find it";
}
void replace(string c)
{int i;
for(i=0;i<35;i++)
{
	if(str[i]==b)
	str[i]=c;
	
}
for(i=0;i<35;i++)
{
	cout<<str[i]<<" ";
	
}
cout<<endl;
}




