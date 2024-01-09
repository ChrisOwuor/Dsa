#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // Simple cout statement
    cout << "Datatypes" << endl;
    /*
    integer
        integer 4 bytes;
        short 2 bytes;
        long 4 or 8 bytes
    float
        float 4 bytes
        double 8 bytes
    boolean
        true
        false
    char
        single character
    void
    */
    //    Type casting
    int age = 34;
    float weight = 55.8f;
    bool isAdmin = true;
    double avg = 45.5;
    cout << typeid(age).name() << endl;
    cout << typeid(isAdmin).name() << endl;

    //    Type casting
    // convert the types of variables

    int my_age = 10;
    float my_avg = age;
    cout << typeid(my_age).name() << endl;
    cout << typeid(my_avg).name() << endl;

    return 0;
}