#include<iostream>
#include<cmath>
using namespace std;
int DToB(int data,int result[])
{
	int i;
	for( i=0;data!=0;i++)
	{
		result[i]=data%2;
		data=data/2;
	}
	return i;
}
int main()
{
	int DToB(int data,int result[]);
	int data,result[32];
	cin>>data;
	int num=DToB(data,result);
	cout << "����������λ��Ϊ��" << num << endl;
    cout << "��������Ϊ��";
    for (int i = num - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
    return 0;
}
