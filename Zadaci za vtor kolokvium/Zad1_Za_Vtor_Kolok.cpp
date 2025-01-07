/*Се внесуваат низи од значи од стандарден влез. Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците. Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки. Читањето завршува кога ќе се прочита знакот #.

Пример:

IO is short for Input Output
medioio medIo song
#

Излез:

io
ou
io
oi
io
io
6
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    string line;
    int pairCount = 0;

    while (getline(cin, line) && line != "#") {
        if (line.empty()) continue;

        for (size_t i = 0; i < line.length() - 1; ++i) {
            if (isalpha(line[i]) && isalpha(line[i + 1]) && isVowel(line[i]) && isVowel(line[i + 1])) {
                cout << (char)tolower(line[i]) << (char)tolower(line[i + 1]) << endl;
                ++pairCount;
            }
        }
    }

    cout << pairCount << endl;

    return 0;
}

