#include <time.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
//Находим даты в файле input и меняем их на сегодняшнюю(записываем в output)
using namespace std;
int  main()
{
    struct tm tim;
    time_t tt = time(NULL);

    localtime_s(&tim, &tt);

    ifstream file("input.txt");
    ofstream file1("output.txt");
    string s;
    string k;

    int theDay = tim.tm_mday;
    int theMonth = tim.tm_mon + 1;
    int theYear = tim.tm_year + 1900;
    //we find today date
    char line[255];
    while (!file.eof()) {
        getline(file, s);//get line in string
        //cout << s << endl;
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
        else {
            int n = s.length();
           // cout << n << endl;
            if (n > 8){
                if (s[2] != '.' && s[5] != '.' && s[2] != '/' && s[5] != '/' && s[4] != '.' && s[7] != '.') {
                    //cout << s << endl;
                    file1 << s << endl;

                }
            }
            else {
                if (s[2] != '.' && s[5] != '.' && s[2] != '/' && s[5] != '/' && s[4] != '.') {
                    //cout << s << endl;
                    file1 << s << endl;

                }

            }


        }
    }

    return 0;
}