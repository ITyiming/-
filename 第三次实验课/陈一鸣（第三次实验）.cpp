#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	int a[20] = { 1,2,4,2,1,2,7,3,4,3,3,5,6,7,6,7,8,9,9,8 };
	while(i<19) {
		if (a[i] < a[i + 1]) {
			cout << a[i];
		}
		else if ( a[i] > a[i - 1]) {
			cout << a[i] << '\n';
		}
		i = i + 1;
	}
	system("pause");
	return 0;
}
