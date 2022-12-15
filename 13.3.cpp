#include <iostream>
#include <vector>
#include <string>

using namespace std;

string func_1(string a)
{
    vector <int> b;
    int ttemp = 0;
    for (int j = 0; j < a.size(); j++)
    {
        if ((a[j] != ' ') && (ttemp == 0))
        {
            ttemp = 1;
        }
        if ((a[j] == ' ') && (ttemp == 1))
        {
            b.push_back(j - 1);
            ttemp = 0;
        }
    }
    string c = a;
    for (int k = b.size() - 1; k >= 0; k--)
    {
        c.erase(b[k], 1);
    }
    return c;
}

int main()
{
    string a;
    cout << "RYadok:" << endl;
    getline(cin, a);
    string b = func_1(a);
    cout << b << endl;
}