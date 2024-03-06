#include<iostream>
#include<string.h> 
using namespace std;
int main()
{
	char str[] = " East China Normal University is very beautiful.I like East China Normal University very much.There is a big playground in East China Normal University.The teachers in East China Normal University are very kind.The students are very polite and smart,";
	int num = 0;
	char space = 32;
	char period = 46;
	for (int i = 0; i < strlen(str); i++)
	{
		
		if (str[i] == space) num++;
		else {
			if (str[i] == period)num++;
		}
	}
	cout << num << endl;
	return 0;
}
