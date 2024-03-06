/*#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int i, k, l, temp;
	int search(char str[]);
	int replace(char str[]);

	char str[] =
		"East China Normal University is very beautiful.I like East China Normal University very much. There is a bigplayground in East China Normal University. The teachers in East China Normal University are very kind. The students arevery polite and smart";
	char newchar[strlen(str)], oldchar[strlen(str)];
	cout << "原文为：";
	for (k = 0; k < strlen(str); k++) {
		cout << str[k];
	}
	cout << endl;
	cout << "请输入新的字符串：";
	cin >> newchar;

	cout << "请输入需要被替换的字符串：";
	cin >> oldchar;
	search(str);
	cout << "主函数中i和temp:" << i << "," << temp << endl;
	if (temp == -1) {
		cout << "没有找到该词汇";
	}
	else if (temp != -1) {
		cout << "更改后的文章为：";
		for (l = 0; l < strlen(str); l++) {
			cout << str[l];
		}
	}

}

int search(char str[]) {
	int replace(char str[]);
	int i, j = 0, temp;
	bool ret;
	char oldchar[strlen(str)];
	for (i = 0; i < strlen(str) - strlen(oldchar); i++) {
		i = i + j;
		int temp, n = 0;

		for (j = 0; j < strlen(oldchar); j++) {

			if (str[i] != oldchar[j]) {
				temp = -1;
				break;

			}
			else if (str[i] == oldchar[j]) {
				ret = true;
				temp = i;
				n++;
			}
		}
		temp = i + 1 - n;
		replace(str);

	}



	cout << "循环中i和temp" << i << "," << temp << endl;
}

int replace(char str[]) {

	int i, j, temp, n;
	char newchar[strlen(str)];

	if (temp != -1) {
		for (i = temp; i < strlen(str); i++) {
			for (j = 0; j < strlen(newchar); j++) {
				str[i] = newchar[j];
			}
		}
	}
}*/