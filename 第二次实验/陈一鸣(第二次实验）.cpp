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
	cout << "请输入n个正整数" << '\n';
	do
	{   cin>>x;
		{if (isodd(x) != 0) isoddsum++;}
		{if (iseven(x) != 0) isevensum++; }
		{if (isprime(x) != 0||x==2) isprimesum++; }
	}
	while (getchar() != '\n');
	cout << "奇数的个数是" << isoddsum << '\n';
	cout << "偶数的个数是" << isevensum << '\n';
	cout << "素数的个数是" << isprimesum << '\n';
	system("pause");
	return 0;
}

