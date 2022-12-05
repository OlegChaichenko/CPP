#include <iostream>
#include <string>
#include <regex>
#include <fstream>
#include <iomanip> 
using namespace std;
//Находим число с помощью регулярного выр,меняем запятую где есть

int main()
{
    ifstream file("test1.txt");
    ofstream file1("output.txt");
    regex x("([\\d])");
    cmatch result;
    string s;
    char c = ',';
    double number;
    while (!file.eof()) {
        getline(file, s);
        if (regex_search(s.c_str(), result, x)) {
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
    file.close();
}
