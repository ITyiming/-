
/*#include <iostream>
#include <string>

void search(const char* str, const char* searchStr, int* indexes, int& count) {
    count = 0;
    int strLen = strlen(str);
    int searchStrLen = strlen(searchStr);

    for (int i = 0; i <= strLen - searchStrLen; i++) {
        int j;
        for (j = 0; j < searchStrLen; j++) {
            if (str[i + j] != searchStr[j]) {
                break;
            }
        }
        if (j == searchStrLen) {
            indexes[count] = i;
            count++;
        }
    }
}

void replace(char* str, const char* searchStr, const char* replaceStr, const int* indexes, int count) {
    int searchStrLen = strlen(searchStr);
    int replaceStrLen = strlen(replaceStr);

    for (int i = count - 1; i >= 0; i--) {
        int k = strlen(str) - 1;
        for (int j = indexes[i] + searchStrLen - 1; j >= indexes[i] + searchStrLen; j--, k--) {
            str[k + replaceStrLen - searchStrLen] = str[k];
        }
        for (int j = 0; j < replaceStrLen; j++) {
            str[indexes[i] + j] = replaceStr[j];
        }
    }
}

int main() {
    char str[] = "East China Normal University is very beautiful. I like East China Normal University very much. There is a big playground in East China Normal University. The teachers in East China Normal University are very kind. The students are very polite and smart.";
    char searchStr[] = "East China Normal University";
    char replaceStr[] = "Huaqiao University";
    int indexes[100];
    int count;

    search(str, searchStr, indexes, count);
    replace(str, searchStr, replaceStr, indexes, count);

    std::cout << "After replacing: " << str << std::endl;

    search(str, replaceStr, indexes, count);
    replace(str, replaceStr, searchStr, indexes, count);

    std::cout << "After replacing back: " << str << std::endl;
    system("pause");
    return 0;
}*/
