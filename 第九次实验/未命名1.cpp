#include <iostream>
using namespace std;

int main()
{
    int a[12];  // ����洢���������12������������
    int b[12];  // ����洢������������
    int count = 0;  // ����������¼����������

    for (int i = 0; i < 12; i++)  // ѭ������12������
    {
        cin >> a[i];
        if (a[i] > 0)  // �����������
        {
            b[count] = a[i];  // �洢��b������
            count++;
            cout << a[i] << " ";  // ���������
        }
    }
    cout << endl;

    // ��������
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

    // ���������������
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
    char str[20];  // ����洢�����ַ���������
    cin >> str;  // ���������ַ���

    int num = 0;  // ��ʼ����ֵΪ0
    for (int i = 0; str[i] != '\0'; i++)  // �����ַ���
    {
        num = num * 10 + (str[i] - '0');  // ���ַ�ת��Ϊ��Ӧ����ֵ���ۼ�
    }

    cout << num << endl;  // ���ת�������ֵ

    return 0;
}*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[5][20];  // �����ά�ַ�����洢����
    for (int i = 0; i < 5; i++)  // ѭ������5���˵�����
    {
        cin >> s[i];
    }

    // ������1���˺͵�5���˵�����
    char temp[20];
    strcpy(temp, s[0]);
    strcpy(s[0], s[4]);
    strcpy(s[4], temp);

    // ����������5��������
    for (int i = 0; i < 5; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}


