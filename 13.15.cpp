#include<iostream>
using namespace std;
#include<sstream>

int printWords(string str,char k)
{
    int a = 0;
    int index = 0;
    // word variable to store word
    string word;

    // making a string stream
    stringstream iss(str);

    // Read and print each word.
    while (iss >> word) {
       // cout << word << endl;
        index = word.find(k);
       // cout << index << endl;
        if (index != -1) {
            a++;
        }
        int index = 0;
    }
   return a;
}

// Driver code
int main()
{
    string s = " isy skyyy    sdadasd   bluey";
    char q = 'y';
    int res=printWords(s,q);
    cout << res << endl;
    return 0;
}
