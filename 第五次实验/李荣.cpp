/*1.输入你想用于替换的字符串
  2.输入你想被替换掉的字符串 
  3.从文章中搜素你想被替换掉的字符串
  4.如果搜索到了，那么这两个字符串相等
  5.用你输入的字符串赋值给想被替换掉的字符串
*/
 
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int search(char a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	a[i];
    }
    return 0;
}
void replace(char a[],char b[],char c[],int n,int m)   //a是对应n个，b是对应m个 
{
	int i;
	int j;                                  //i是b的循环，j是a的循环   
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]==c[i])
			a[j]=b[i];
		}
	}
}
int main()
{
	void search(char a[],int n);
	void replace(char a[],char b[],char c[],int n,int m); 
	char str[]="East China Normal University is very beautiful.I like East China Normal University very much.There is a big playground in East China Normal University.The teachers in East China Normal University are very kind.The students are very polite and smart.";
    char a[]="East China Normal University";
	char b[]="Huaqiao University";
	int n;
	n=strlen(str);
	int m;
	m=strlen(b);
	int p;
	p=strlen(a);
	search(str,n);
	replace(str,b,a,n,m);
	int q;
	for(q=0;q<n;q++)
	{
		cout<<str;
	}
	system("pause");
	return 0;
}


