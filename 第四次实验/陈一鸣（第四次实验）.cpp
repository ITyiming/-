#include<iostream>
using namespace std;
void select(int a[], int n)
{
	int t;
	for (int i = 0; i < n-1; i++)
		for (int j = i + 1; j < n ; j++)
		{
			if (a[i] == a[j]) {
				t = j;
				do {
					a[t] = a[t + 1];
					t = t + 1;
				} while (t < n - 1);
				n = n - 1;
				j = j - 1;
			}
		}
}
int main()
{
	void select(int a[], int n);
	int a[20] = { 1,2,4,2,1,2,7,3,4,3,3,5,6,7,6,7,8,9,9,8 };
	int n = 20;
	select(a,n);
	cout << "处理完后的数组为{";
	for (int k = 0; k < n - 1; k++)
		cout << a[k] << ",";
	cout << "}" << '\n' ;
	int g = n - 1;
	for (int i = 0; i < g ; i++)
		if (a[i] = a[19]) g = g - 1;
	cout << "元素的个数是" << g << endl;
	system("pause");
	return 0;
}
