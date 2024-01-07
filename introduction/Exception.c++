#include <iostream>

using namespace std;
// exceptions provide a mechanism for handling errors or exceptional conditions that may occur during the execution of a program
int main()
{
    int num = 10;
    int den = 2;
    double res = 0;
    cout << "home" << endl;
    try
    {
        if (den == 0)
        {
            throw "division by zero not allowed";
        }
        else
        {
            res = num / den;
            cout << res << endl;
        }
    }
    catch (const char *error)
    {
        cout << error << endl;
    }

    return 0;
}