#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <iomanip> 
using namespace std;

//проверка число ли строка 
bool isdig(string s) {
    int l = s.length();
    for (int i = 0; i < l; i++) {
        if (s[i] == '-' || s[i] == ',' || s[i] == '.' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9' || s[i] == '0') {
            return true;
        }
        else {
            return false;
        }
    }
}
//получаем строки,переводим их в инт,где запятая меняем на точку 
int main() {
    ifstream file("test1.txt");
    ofstream file1("output.txt");
    string s;
    char c = ',';
    double number;
    double sum = 0;
    while (!file.eof()) {
        getline(file, s);
        if (isdig(s) == true) {
            int index = s.find(c);
            //cout << index << endl;
            if (index != -1) {
                s[index] = '.';
                 number = stof(s);

                 file1 << "(" << fixed << setprecision(4) << number << ")" << endl;

            }
            else {
                number = stof(s);

                file1 << "(" << fixed << setprecision(4) << number << ")" << endl;

            }
        }
        else {
            file1 << s << endl;
        }

    }


}

