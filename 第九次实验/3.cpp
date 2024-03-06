#include<iostream>
using namespace std;

struct Student{
    int num;
    string name;
    float score;
}; 

int main()
{
    Student student[50];
    for(int i=0;i<50;i++)
    {
        cin>>student[i].num;
        cin>>student[i].name;
        cin>>student[i].score;
    }
    float high=student[0].score;
    string temp=student[0].name;
    for(int j=0;j<50;j++)
    {
        if(high<student[j].score)
        {
            temp=student[j].name;
            high=student[j].score;
        }
    }
    cout<<temp;
    return 0;
}
