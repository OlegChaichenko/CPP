#include <iostream>
#include <string>
#include <regex>
#include <fstream>
using namespace std;
//Находим ссылки с помощью регулярного выражения 

int main()
{
    ifstream file("test.txt");
    regex regUrl("\\b((?:https?|ftp|file)://[-a-zA-Z0-9+&@#/%?=~_|!:, .;]*[-a-zA-Z0-9+&@#/%=~_|])");
    
    cmatch result;
   
    string line;
    while (!file.eof()) {
        getline(file, line);
        if (regex_search(line.c_str(), result, regUrl)){
            cout << line << endl;
        
        }
    }
    file.close();
}
