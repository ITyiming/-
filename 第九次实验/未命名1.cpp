#include <iostream>
using namespace std;

int main()
{
    int a[12];  // 定义存储键盘输入的12个整数的数组
    int b[12];  // 定义存储正整数的数组
    int count = 0;  // 计数器，记录正整数个数

    for (int i = 0; i < 12; i++)  // 循环输入12个整数
    {
        cin >> a[i];
        if (a[i] > 0)  // 如果是正整数
        {
            b[count] = a[i];  // 存储到b数组中
            count++;
            cout << a[i] << " ";  // 输出正整数
        }
    }
    cout << endl;

    // 插入排序
    for (int i = 1; i < count; i++)
    {
        int key = b[i];
        int j = i - 1;
        while (j >= 0 && b[j] > key)
        {
            b[j + 1] = b[j];
            j = j - 1;
        }
        b[j + 1] = key;
    }

    // 输出排序后的正整数
    for (int i = 0; i < count; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
/*#include <iostream>
using namespace std;

int main()
{
    char str[20];  // 定义存储数字字符串的数组
    cin >> str;  // 输入数字字符串

    int num = 0;  // 初始化数值为0
    for (int i = 0; str[i] != '\0'; i++)  // 遍历字符串
    {
        num = num * 10 + (str[i] - '0');  // 将字符转化为对应的数值并累加
    }

    cout << num << endl;  // 输出转化后的数值

    return 0;
}*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[5][20];  // 定义二维字符数组存储姓名
    for (int i = 0; i < 5; i++)  // 循环输入5个人的姓名
    {
        cin >> s[i];
    }

    // 交换第1个人和第5个人的名字
    char temp[20];
    strcpy(temp, s[0]);
    strcpy(s[0], s[4]);
    strcpy(s[4], temp);

    // 输出互换后的5个人姓名
    for (int i = 0; i < 5; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}


