#include<iostream>
using namespace std;
int Count(char*s)
{
	int num=0;
	char space=32;
	for(int i=0;*(s+i)!='\0';i++)
	{
		if(*(s+i)==space) num++;
	}
	return num;
}
int main()
{
	int Count(char*s);
	char* CStr="Hello, my name is XiaoMing. I am a student. I like English very much. I want to be an English teacher. ";
    int num=Count(CStr);
    cout<<"该字符串含有的词数为"<<num<<endl;
	return 0; 
}
