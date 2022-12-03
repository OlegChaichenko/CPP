#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void func_1(string name)
{
    fstream f;
    f.open(name);
    string a;
    getline(f, a);
    f.close();

    int sum = 0;
    int temp = 0;
    int ttmp = 0;
    string sub = "";
    for (char b : a)
    {
        
        if ((b != '+') && (b != '-') && (b != '='))
        {
            sub += b;
        }
        else
        {
            if (ttmp == 0)
            {
           
                sum += stoi(sub);
                ttmp = 1;
                if (b == '-') { temp = -1; }
                if (b == '+') { temp = 1; }
                sub = "";
            }
            else
            {
                if (temp == -1)
                {
                    sum -= stoi(sub);
                }
                if (temp == 1)
                {
                    sum += stoi(sub);
                }
                sub = "";
                if (b == '-') 
                { temp = -1; }
                if (b == '+') 
                { temp = 1; }
                if (b == '=') 
                { temp = 0; break; }
            }
        }
        if (b == '=')
        {
            break;
        }
    }

    cout << sum << endl;

}

int main()
{
    func_1("test.txt");
}