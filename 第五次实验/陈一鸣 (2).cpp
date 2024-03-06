/*#include<iostream>
using namespace std;
int search(char str[], char ea[], int num)
{
	int result;
	for (int i = 0; i < num; i++)
	{
		result = -1;
		if (str[i] == ea[0])
		{
			result = 1;
			for (int j = 0; j < strlen(ea); j++)
			{
				if (str[i + j] != ea[j])
				{
					result = -1;
					break;
				}
			}
		}
		if (result == 1) { return i; }
	}
	return -1;
}
void replace(char str[], char a[], char b[], int num, int x)
{
	int c = strlen(a), d = strlen(b);
	if (c > d) {
		for (int i = x; i < num + d - c; i++)
		{
			str[i + d] = str[i + c];
		}
	}
	else { {for (int i = num; i > x + c; i--) { str[i + d - c ] = str[i]; } }str[x + d] = ' ';
}
	for (int i = 0; i < d; i++) { str[x + i] = b[i]; }
	str[num + d - c] = '\0';
}
int main()
{
	int search(char str[], char ea[], int num);
	void replace(char str[], char a[], char b[], int num, int x);
	char str[] = "East China Normal University is very beautiful.I like East China Normal University very much.There is a big playground in East China Normal University.The teachers in East China Normal University are very kind.The students are very polite and smart.";
	char ea[] = "East China Normal University";
	char hq[] = "Huaqiao University";
	int num = strlen(str);
	int x = search(str, ea, num);
	do {
		replace(str, ea, hq, num, x);
		num = strlen(str);
		x = search(str, ea, num);
	} while (x != -1);
	cout << "替换后的字符为" << '\n' << str << '\n';
	int y = search(str, hq, num);
	do {
		replace(str, hq, ea, num, y);
		num = strlen(str);
		y = search(str, hq, num);
	} while (y != -1);
	cout << "重新替换回来的字符为" << str << endl;
	return 0;
}*/
