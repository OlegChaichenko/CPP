#include <iostream>
#include <string>
using namespace std;

string func_1(string a)
{
    int b = a.find(':');
    int c = a.find(',');
    if (b == -1)
    {
        return a;
    }
    else
    {
        string d = "";
        if (c == -1)
        {
            for (int g = b + 1; g < a.length(); g++)
            {
                d += a[g];
            }
            return d;
        }
        else
        {
            for (int g = b + 1; g < c; g++)
            {
                d += a[g];
            }
            return d;
        }

    }

}


int main()
{
    string a;
    cout << "Ryadok _____:....,_______:" << endl;
    cin >> a;
    string b = func_1(a);
    cout << b << endl;
}