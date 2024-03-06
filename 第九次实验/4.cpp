#include<iostream>
using namespace std;

int Fib(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    a[0] = 1;
    a[1] = 1;
    a[n-1] = Fib(n-1);
    cout << a[n-1] << endl;
    delete[] a;
    return 0;
}


