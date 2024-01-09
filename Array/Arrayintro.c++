#include <iostream>
#include <string>
using namespace std;
void loop_array()
{
    int my_arr[5] = {1, 2, 3, 5, 4};
    for (int i = 0; i < 5; i++)
    {
        cout << my_arr[i] << " ";
    };
    cout << endl;
}
int find_min()
{
    int my_arr[5] = {10, 2, 3, 5, 4};
    int min = my_arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (my_arr[i] < min)
        {
            min = my_arr[i];
        }
    }
    return min;
}
int del_item()
{
    int my_arr[5] = {10, 2, 3, 5, 4};
    return 0;
}
void print_array()
{
    int my_arr[] = {1, 2, 3,4,5};

    for (int i = 0; i < 5; i++)
    {
        cout << my_arr[i]<< " " ;
    }
    cout <<  endl;
}
int main()
{
    cout << "Arrays " << endl;
    loop_array();
    print_array();
    cout << find_min() << endl;

    return 0;
}
