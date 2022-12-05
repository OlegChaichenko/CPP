#include <iostream>
#include <iterator>
#include <regex>
#include <string>
#include <fstream>
#include <time.h>
//Находим даты в файле input и меняем их на сегодняшнюю(записываем в output)
using namespace std;
int main() {
    regex pattern("\\b\\d{4}[.]\\d{2}[.]\\d{2}\\b");//data with year(4 dig).month(2).day(2)
    regex pattern1("\\b\\d{2}[.]\\d{2}[.]\\d{4}\\b");//data(2).month(2).year(4)
    regex pattern2("\\b\\d{2}[/]\\d{2}[/]\\d{4}\\b");//data(2)/month(2)/year(2)
    regex pattern3("\\b\\d{2}[.]\\d{2}[.]\\d{2}\\b");//data(2).month(2).year(2)
    cmatch result;
    struct tm tim;
    time_t tt = time(NULL);

    localtime_s(&tim, &tt);
    int theDay = tim.tm_mday;
    int theMonth = tim.tm_mon + 1;
    int theYear = tim.tm_year + 1900;
    //today date 

    ifstream file("test.txt");
    ofstream file1("output.txt");
    string s;
    while (!file.eof()) {
        getline(file, s);
        if (regex_search(s.c_str(), result, pattern) || regex_search(s.c_str(), result, pattern1) || regex_search(s.c_str(), result, pattern2) || regex_search(s.c_str(), result, pattern3)){
            cout << s << endl;
            if (s[2] == '.' && s[5] == '.') {
                //cout << s << endl;
                file1 << theYear << '.' << theMonth << '.' << theDay << endl;
            }
            if (s[2] == '/' && s[5] == '/') {
                //cout << s << endl;
                file1 << theYear << '.' << theMonth << '.' << theDay << endl;
            }
            if (s[4] == '.' && s[7] == '.') {
                // cout << s << endl;
                file1 << theYear << '.' << theMonth << '.' << theDay << endl;
            }
            
        }
        else {
            int n = s.length();
            // cout << n << endl;
            if (n > 8) {
                if (s[2] != '.' && s[5] != '.' && s[2] != '/' && s[5] != '/' && s[4] != '.' && s[7] != '.') {
                    //cout << s << endl;
                    file1 << s << endl;

                }
            }
            else {
                if (s[2] != '.' && s[5] != '.' && s[2] != '/' && s[5] != '/' && s[4] != '.') {
                   // cout << s << endl;
                    file1 << s << endl;

                }

            }


        }
    }

}

