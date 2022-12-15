
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Находим все ссылки с помощью строки h
int main()
{
	ifstream file("test.txt");
	string h = "https";
	string line;
	while (!file.eof()) {
		getline(file, line);
		if (line.find(h) != -1) {
			cout << line << endl;
		}
	}
	file.close();
	
}

