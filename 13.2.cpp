#include <iostream>
#include <string>
//13_2

using namespace std;

string func_1(string a)
{
    int start = a.find('.');
    int end = a.rfind('.');
    //cout << start << " " << end << endl;
    string b;
    if ((start == end) && (end == -1))
    {
        b = a;
        if (a[0] != ' ')
        {
            return b;
        }
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != ' ')
            {
                b.erase(0, i - 1);
            }
            return b;
        }
    }
    if ((start == end) && (end != -1))
    {
        b = a;
        b.erase(0, end);
        return b;
    }
    else
    {
        b = a;
        b.erase(start + 1, a.length() - end);
        return b;
    }
}

int main()
{
    string a;
    cout << "___.___.___:" << endl;
    cin >> a;
    string b = func_1(a);
    cout << b << endl;
}