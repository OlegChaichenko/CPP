#include <iostream>
#include <iterator>
#include <regex>
#include <string>
#include <fstream>

using namespace std;
//находим даты заданых форматов и меняем их на едниный


int main(int argc, char** argv) {
    regex pattern("\\b\\d{4}[.]\\d{2}[.]\\d{2}\\b");//data with year(4 dig).month(2).day(2)
    regex pattern1("\\b\\d{2}[.]\\d{2}[.]\\d{4}\\b");//data(2).month(2).year(4)
    regex pattern2("\\b\\d{2}[/]\\d{2}[/]\\d{4}\\b");//data(2)/month(2)/year(2)
    regex pattern3("\\b\\d{2}[.]\\d{2}[.]\\d{2}\\b");//data(2).month(2).year(2)
    cmatch result;

    ifstream file("test.txt");
    ofstream file1("output.txt");
    string line;
    while (!file.eof()) {
        getline(file, line);
        if (regex_search(line.c_str(), result, pattern) || regex_search(line.c_str(), result, pattern1) || regex_search(line.c_str(), result, pattern2) || regex_search(line.c_str(), result, pattern3)) {
            cout << line << endl;
            if (line.length() == 8) {
                if (line[3] == '0') {
                    if (line[4] == '1') {
                        //fprintf(file1, "%c%c year,jan,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,jan " << line[0] << line[1]<<endl;
                    }
                    else if (line[4] == '2')
                    {
                       // fprintf(file1W, "%c%c year,feb,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,feb " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '3')
                    {
                        //fprintf(file1W, "%c%c year,march,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,march " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '4')
                    {
                        //fprintf(file1W, "%c%c year,april,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,april " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '5')
                    {
                        //fprintf(file1W, "%c%c year,may,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,may " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '6')
                    {
                        //fprintf(file1W, "%c%c year,june,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,june " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '7')
                    {
                        //fprintf(file1W, "%c%c year,july,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,july " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '8')
                    {
                        //fprintf(file1W, "%c%c year,august,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,august " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '9')
                    {
                       // fprintf(file1W, "%c%c year,setem,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,setem " << line[0] << line[1] << endl;
                    }

                }
                else {
                    if (line[4] == '0') {
                        //fprintf(file1W, "%c%c year,oct,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,oct " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '1')
                    {
                        //fprintf(file1W, "%c%c year,novem,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,novem " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '2')
                    {
                        //fprintf(file1W, "%c%c year,dec,%c%c\n", line[6], line[7], line[0], line[1]);
                        file1 << line[6] << line[7] << " year,decem " << line[0] << line[1] << endl;
                    }
                }

            }else {
                if (line[3] == '0') {
                    if (line[4] == '1') {
                        //fprintf(file1W, "%c%c%c%c year,jan,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7]<< line[8] << line[9] << " year,jan " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '2')
                    {
                        //fprintf(file1W, "%c%c%c%c year,feb,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,feb " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '3')
                    {
                        //fprintf(file1W, "%c%c%c%c year,march,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,march " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '4')
                    {
                       // fprintf(file1W, "%c%c%c%c year,april,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,april " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '5')
                    {
                        //fprintf(file1W, "%c%c%c%c year,may,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,may " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '6')
                    {
                        //fprintf(file1W, "%c%c%c%c year,june,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,june " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '7')
                    {
                        //fprintf(file1W, "%c%c%c%c year,july,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,july " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '8')
                    {
                        //fprintf(file1W, "%c%c%c%c year,august,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,august " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '9')
                    {
                        //fprintf(file1W, "%c%c%c%c year,setem,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,setem " << line[0] << line[1] << endl;
                    }

                }
                else {
                    if (line[4] == '0') {
                        //fprintf(file1W, "%c%c%c%c year,oct,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,oct " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '1')
                    {
                        //fprintf(file1W, "%c%c%c%c year,novem,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,novem " << line[0] << line[1] << endl;
                    }
                    else if (line[4] == '2')
                    {
                       // fprintf(file1W, "%c%c%c%c year,dec,%c%c\n", line[6], line[7], line[8], line[9], line[0], line[1]);
                        file1 << line[6] << line[7] << line[8] << line[9] << " year,dec " << line[0] << line[1] << endl;
                    }
                }
            }
            if (line[2] != '.' && line[2] != '/') {
                if (line[5] == '0') {
                    if (line[6] == '1') {
                        //fprintf(file1W, "%c%c%c%c year,jan,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,jan " << line[8] << line[9] << endl;
                    }
                    else if (line[6] == '2')
                    {
                        //fprintf(file1W, "%c%c%c%c year,feb,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,feb " << line[8] << line[9] << endl;
                    }
                    else if (line[6] == '3')
                    {
                        //fprintf(file1W, "%c%c%c%c year,march,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,march " << line[8] << line[9] << endl;
                    }
                    else if (line[6] == '4')
                    {
                       // fprintf(file1W, "%c%c%c%c year,april,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,april " << line[8] << line[9] << endl;
                    }
                    else if (line[6] == '5')
                    {
                       // fprintf(file1W, "%c%c%c%c year,may,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,may " << line[8] << line[9] << endl;
                    }
                    else if (line[6] == '6')
                    {
                        //fprintf(file1W, "%c%c%c%c year,june,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,june " << line[8] << line[9] << endl;
                    }
                    else if (line[6] == '7')
                    {
                        //fprintf(file1W, "%c%c%c%c year,july,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,july " << line[8] << line[9] << endl;
                    }
                    else if (line[6] == '8')
                    {
                        //fprintf(file1W, "%c%c%c%c year,august,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,august " << line[8] << line[9] << endl;
                    }
                    else if (line[6] == '9')
                    {
                        //fprintf(file1W, "%c%c%c%c year,setem,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,setem " << line[8] << line[9] << endl;
                    }

                }
                else {
                    if (line[6] == '0') {
                       // fprintf(file1W, "%c%c%c%c year,oct,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,oct " << line[8] << line[9] << endl;
                    }

                    else if (line[6] == '1')
                    {
                        //fprintf(file1W, "%c%c%c%c year,novem,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,novem " << line[8] << line[9] << endl;
                    }
                    else if (line[6] == '2')
                    {
                        //fprintf(file1W, "%c%c%c%c year,dec,%c%c\n", line[0], line[1], line[2], line[3], line[8], line[9]);
                        file1 << line[0] << line[1] << line[2] << line[3] << " year,dec " << line[8] << line[9] << endl;
                    }

                }
            }

           

        }
      

                  
    }

    return 0;
}