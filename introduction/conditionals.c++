#include <iostream>
#include <string>

class Person
{
public:
    std::string name;
    int age;

    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Member function
    void displayInfo()
    {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main()
{
    // Creating objects on the stack
    Person person1("John", 30);

    // Accessing members and calling member functions
    person1.displayInfo();

    return 0;
}
