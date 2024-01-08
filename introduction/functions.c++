#include <iostream>

using namespace std;

// return_type function_name()
// {
// main code foes here
// return statement
// }
void print_name()
{
    cout << "A void return type" << endl;
}
char print_char()
{
    cout << "A character function" << endl;
    return 'c';
}
int print_integer()
{
    cout << 100 << endl;
    return 0;
}
bool check_bool()
{
    cout << "bool return type" << endl;
    return false;
}
double print_double()
{
    cout << 99.004 << endl;
    return 2.3;
}
int add_numbers(int a, int b)
{
    return a + b;
}
int main()
{
    // Simple cout statement
    cout << "home" << endl;
    char my_char = print_char();
    double my_double = print_double();
    cout << my_double << endl;
    cout << my_char << endl;
    int my_sum = add_numbers(2, 3);
    cout << my_sum << endl;
    print_name();
    return 0;
}