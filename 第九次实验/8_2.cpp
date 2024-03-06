#include <iostream>
using namespace std;

int search(char* str, char* sub)
{
    int count = 0;
    bool flag = false;
    while (*str != '\0')
    {
        if (*str == *sub)
        {
            char* temp_str = str;
            char* temp_sub = sub;
            while (*temp_sub != '\0')
            {
                if (*temp_str != *temp_sub)
                    break;
                temp_str++;
                temp_sub++;
            }
            if (*temp_sub == '\0')
                count++;
        }
        str++;
    }
    return count;
}

int main()
{
    char s[40] = "10238741023874465038740";
    char sub[5];
    for (int i = 0; i < 4; i++)
        cin >> sub[i];
    sub[4] = '\0'; 
    int num = search(s, sub);
    cout << num << endl;
    return 0;
}

