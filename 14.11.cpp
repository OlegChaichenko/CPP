#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string func(string s, int len) {
    string k = " ";
    string res = "";
    for (int i = 0; i < (50-len)/2; i++) {
        res += k;
    }
    res += s;
    for (int i = 0; i < (50 - len) / 2; i++) {
        res += k;
    }
    return res;

}

int main()
{
    ifstream file("test.txt");
    ofstream file1("H.txt");
    ofstream file2("G.txt");
    string h;
    string g;
    string k;
    int number;
    int count = 0;
    while (!file.eof()) {
        getline(file, h);
        string x = func(h, h.length());
        cout << x << endl;
        count++;
        file1 << x << endl;
    }
    file.close();
    file1.close();
    ifstream file12("H.txt");
    ofstream file13("test.txt");
    while (!file12.eof()) {
        getline(file12, g);
        cout <<"G=" << g << endl;
        file13 << g << endl;
    }

  /*  string* a = new string[count];
    int i = 0;
    file.clear();
    file.seekg(0);
    while (!file.eof())
    {
        getline(file, k);
       // cout <<"k=" << k << endl;
        a[i] = k;
        i++;
    }
    for (int i = 0; i < count; i++) {
        cout <<"a[i]=" << a[i] << endl;
    }
    */
}
