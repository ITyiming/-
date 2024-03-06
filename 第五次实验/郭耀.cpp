/*#include <iostream>
#include <string>
using namespace std;
void searchandreplace(string& str, const string& searchstr, const string& replacestr)
{
    size_t pos = str.find(searchstr);//用fiind函数找到searchstr并储存在pos中 
    while (pos != string::npos) //如果pos不是字符串（string::npos）的长度，则调用repalce函数 
    {
        str.replace(pos, searchstr.length(), replacestr);//
        pos = str.find(searchstr, pos + replacestr.length());
    }
}
int main() {
    string str = "East China Normal University is very beautiful. I like East China Normal University very much. There is a big playground in East China Normal University. The teachers in East China Normal University are very kind. The students are very polite and smart.";
    string searchstr = "East China Normal University";
    string replacestr = "Huaqiao University";
    cout << "原文:" << str << endl;
    searchandreplace(str, searchstr, replacestr);
    cout << "替换后:" << str << endl;
    searchandreplace(str, replacestr, searchstr);
    cout << "恢复后:" << str << endl;
    return 0;
}*/
