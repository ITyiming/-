/*1.�������������滻���ַ���
  2.�������뱻�滻�����ַ��� 
  3.���������������뱻�滻�����ַ���
  4.����������ˣ���ô�������ַ������
  5.����������ַ�����ֵ���뱻�滻�����ַ���
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
void replace(char a[],char b[],char c[],int n,int m)   //a�Ƕ�Ӧn����b�Ƕ�Ӧm�� 
{
	int i;
	int j;                                  //i��b��ѭ����j��a��ѭ��   
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


