#include<iostream>
using namespace std;
int isodd(int num)
{
	if (num % 2 != 0) return num;
	else return 0;
}
int iseven(int num)
{
	if (num % 2 == 0) return num;
	else return 0;
}
int isprime(int num)
{
	int d, a = num / 2, c = 2;
	do { d = num % c; c = c + 1; } while (c <= a && d != 0);
	if (d == 0) return 0;
	else return num;
}
int main()
{

	int  v, x, g, isoddsum = 0, isevensum = 0, isprimesum = 0;
	cout << "������n��������" << '\n';
	do
	{   cin>>x;
		{if (isodd(x) != 0) isoddsum++;}
		{if (iseven(x) != 0) isevensum++; }
		{if (isprime(x) != 0||x==2) isprimesum++; }
	}
	while (getchar() != '\n');
	cout << "�����ĸ�����" << isoddsum << '\n';
	cout << "ż���ĸ�����" << isevensum << '\n';
	cout << "�����ĸ�����" << isprimesum << '\n';
	system("pause");
	return 0;
}

