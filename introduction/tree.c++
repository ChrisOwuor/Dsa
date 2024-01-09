#include <iostream>
#include <string>
using namespace std;
void draw_tree()
{
    string star = "*";
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << star;
        }
        cout << endl;
    }
}
int main()
{
    // Simple cout statement
    draw_tree();

    return 0;
}