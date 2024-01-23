#include <iostream>
#include <list>

int main()
{
    // Create a list object
    std::list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Display the elements of the list
    std::cout << "List: ";
    for (const auto &element : myList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
