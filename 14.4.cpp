#include <iostream>
#include <fstream>
#include <string>

using namespace std;



void func_1(string name)
{
    fstream f;
    f.open(name, ios::in);

    string temp;
    string qwe = "<td>";
    string qwe1 = "</td>";

    int l = 0;
    int k = 0;
    while ((!f.eof()))
    {
        getline(f, temp);


        if (temp.find(qwe) != -1) {
            l += 1;
            if (temp.find(qwe1) != -1) {
                k += 1;


            }
        }
        else if (temp.find(qwe1) != -1) {
            k += 1;
            if (temp.find(qwe) != -1) {
                l += 1;
            }

        }
        f.close();
        if (l != k) {
            cout << "TEGI NEPRAV" << endl;

        }
        else {

            cout << "PRAVILNO" << endl;
        }
    }
}



int main()
{
    func_1("test.txt");
}
