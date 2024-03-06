#include<iostream>
using namespace std;
int main()
{
	char str[]="East China Normal University is very beautiful.I like East China Normal University very much.There is a big playground in East China Normal University.The teachers in East China Normal University are very kind.The students are very polite and smart.";
	char symbol[] = " .";
	char* name[42];
	char* p = str;
	char* a = p;
	int i = 0;
	while (*p != '\0')
	{
		
		char* b = symbol;
		while (*b != '\0')
		{
			if (*p == *b)
			{
				*p = '\0', p++;
				name[i] = a;
				i++, a = p;
			}
			b++;
		}
		p++;
	}
	for(int j=0;j<42;j++)
	{
		cout << "name[" << j << "]=" << name[j] << endl;
	}
	int k=0;
	while(*name[k]!='\0')
	{
		if(*name[k]!=0)
		{
		int num=1;
		for(int j=k+1;j<42;j++)
		{
			
			if(*name[k]==*name[j]) *name[j]=0,num++;
		}
		cout<<name[k]<<"的次数为"<<num<<endl;
		k++;
	    }
	    else k++;
	}
	return 0;
}
