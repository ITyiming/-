/*#include <iostream>
#include <string>
using namespace std;
void searchandreplace(string& str, const string& searchstr, const string& replacestr)
{
    size_t pos = str.find(searchstr);//��fiind�����ҵ�searchstr��������pos�� 
    while (pos != string::npos) //���pos�����ַ�����string::npos���ĳ��ȣ������repalce���� 
    {
        str.replace(pos, searchstr.length(), replacestr);//
        pos = str.find(searchstr, pos + replacestr.length());
    }
}
int main() {
    string str = "East China Normal University is very beautiful. I like East China Normal University very much. There is a big playground in East China Normal University. The teachers in East China Normal University are very kind. The students are very polite and smart.";
    string searchstr = "East China Normal University";
    string replacestr = "Huaqiao University";
    cout << "ԭ��:" << str << endl;
    searchandreplace(str, searchstr, replacestr);
    cout << "�滻��:" << str << endl;
    searchandreplace(str, replacestr, searchstr);
    cout << "�ָ���:" << str << endl;
    return 0;
}*/
