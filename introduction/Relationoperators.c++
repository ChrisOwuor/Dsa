// for comparing relationship between values

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int score;
    string name ="chris";
    cout << "Enter you marks" << endl;
    cin >> score;
    if (score >= 50)
    {
        cout << "you passed "  << name << endl;
    }
    else
    {
        cout << "you failed" << endl;
    }
    return 0;
}
