#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char a[10], *p[11], *temp, *pr;
    
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        p[i] = &a[i];
    }
    
    for (int j = 0; j < 9; j++) {
        for (int k = 0; k < 9 - j; k++) {
            if (strcmp(p[k], p[k+1]) > 0) {
                temp = p[k];
                p[k] = p[k+1];
                p[k+1] = temp;
            }
        }
    }

    cout << "����ǰ�Ľ����" << endl;
    for (int i = 0; i < 10; i++) {
        cout << *p[i] << '\t';
    }
    cout << endl;

    cout << "������һ����ĸ��" << endl;

    char x[2];
    pr = x;
    cin >> x[0];
    x[1] = '\0';
    cout << "OK" << '\n';

    int j = 0;
    while (strcmp(p[j], pr) <= 0 && j < 10) {
        j++;
    }

    for (int k = 10; k > j; k--) {
        p[k] = p[k-1];
    }
    p[j] = pr;

    cout << "�����Ľ����" << endl;
    for (int i = 0; i < 11; i++) {
        cout << *p[i] << '\t';
    }

    return 0;
}
