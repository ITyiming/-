
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char a[10], *p[11], *temp, *pr;
    
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        p[i] = &a[i];
    }
    
    for (int j = 0; j < 10; j++) {
        for (int k = 0; k < 10 - j; k++) {
            if (strcmp(*(p+k), *(p+k+1)) > 0) {
                temp = *(p+k);
                *(p+k) = *(p+k+1);
                *(p+k+1) = temp;
               
            }
        }
    }

    cout << "请输入一个数" << endl;

    char x[2];
    pr=x;
    cin>>x[0];
    x[1]='\0';
    cout<<"OK"<<'\n';
    bool flag = false;
     int j = 0; 
    do {
        if (strcmp(*(p+j), pr) <= 0)
		 {
            if (strcmp(*(p+j+1), pr) >= 0) {
                for (int k = 10; k > j; k--)
                    *(p+k) = *(p+k-1);
                *(p+j+1) = pr;
                flag = true;
            }else {
            j++;
        } 
        }
    } while (flag == false||j==9);

    for (int i = 0; i < 11; i++)
        cout << *p[i] << '\t';

    return 0;
}

