#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    double A, B, C,V,R,X,GAR;
    cout << "VESTI TAK:A=xxx.xxx,B=xxExxx,C=xxx.xxxx"<<endl;//15-17
    cin >> s;
    cout << s << endl;
    string a = s.substr(2, 7);
    string c = s.substr(21, 8);
    string b1 = s.substr(12, 2);
    string b2 = s.substr(15, 3);
    cout << a << endl;
    cout << c << endl;
    A = stof(a);
    C = stof(c);
    cout << "A=" << A << endl; 
    cout << "C=" << C << endl;
    B = stof(b1);
    V = stof(b2);
   // cout << "B=" << B << endl;
    //cout << "V=" << V << endl;
    R = pow(10, V);
    X = B * R;
    cout <<"B=" << X << endl;
    GAR = 3 / ((1 / A) + (1 / X) + (1 / C));
    cout <<"Garmo=" << GAR << endl;


    
}

