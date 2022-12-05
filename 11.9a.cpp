#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("test.txt");
    ofstream file1("H.txt");
    ofstream file2("G.txt");
    string h;
    string g;
    int number;
    int count = 0;
    int c = 0;
    while (!file.eof()) {
        getline(file, h);
       // cout << h << endl;
        number = atoi(h.c_str());
        if (number >= 0) {
            count++;
        }
        else {
            count--;
        }
        c++;
    }
   // cout << count << endl;
    if (count == 0) {
        file.clear();
        file.seekg(0);
        cout << "razmer " << c << endl;
        int* a = new int[c / 2];
        int* b = new int[c / 2];
        int i = 0, k;
        int z = 0;
        while (file >> k)
        {
            //cout <<"dsadasd" << k << endl;
            if (k >= 0) {
                a[i] = k; // !!
               // cout << "i=" << i << endl;
               // cout << "dsadasd " << k << endl;
                i++;
            }
            else {
                b[z] = k;
                // cout << "z=" << z << endl;
                // cout << "ssss " << k << endl;
                z++;
            }
        }
        //cout << a[0] << endl;
       // cout << a[1] << endl;
       // cout << a[2] << endl;
       // cout << a[3] << endl;
        for (int i = 0; i < c / 2; i++) {
            cout << a[i] << endl;
            cout << "b=" << b[i] << endl;
            file2 << a[i] << endl;
            file2 << b[i] << endl;
        }
        file1 << "Spasibo za pomozh " << endl;
        file1.close();
        file2.close();



        file.close();
    }
    else {
        cout << "Oshibka" << endl;

    }

    
}

