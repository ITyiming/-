#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int serach(char x[], char y[], int n);
    void replace(char x[], char y[], char z[], int n, int s);
    char str[] = "East China Normal University is very beautiful. I like East China Normal University very much. There is a big playground in East China Normal University. The teachers in East China Normal University are very kind. The students are very polite and smart.";
    char a[] = "Huaqiao University";
    char b[] = "East China Normal University";
    int n = strlen(str), s;
    s = serach(str, b, n);
    while (s != -1) {
        replace(str, b, a, n, s);
        n = strlen(str);
        s = serach(str, b, n);
    }
    cout << str << endl;
}
int serach(char x[], char y[], int n) {
    bool key;
    for (int i = 0; i < n; i++) {
        key = false;
        if (x[i] == y[0]) {
            key = true;
            for (int j = 0; j < strlen(y); j++) {
                if (x[i + j] != y[j]) {
                    key = false;
                    break;
                }
            }
        }

        if (key == true) {
            return i;
        }
    }
    return -1;
}
void replace(char x[], char y[], char z[], int n, int s) {
    if (strlen(z) > strlen(y)) {
        for (int i = n; i >= s + strlen(y); i--) {
            x[i + strlen(z) - strlen(y)] = x[i];
        }
    }
    else {
        for (int i = s + strlen(y); i < n; i++) {
            x[i + strlen(z) - strlen(y)] = x[i];
        }
    }

    for (int i = 0; i < strlen(z); i++) {
        x[s + i] = z[i];
    }

    n = n + strlen(z) - strlen(y);
    x[n] = '\0';
}
