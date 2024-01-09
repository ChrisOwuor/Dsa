#include <iostream>

using namespace std;

int main()
{
    // Simple cout statement
    cout << "pointers" << endl;
    /*In C++, memory is divided into small units called bytes.
    Each byte has a unique address. When you declare a variable, the compiler assigns a memory location to store its value.
    The size of the memory allocated depends on the data type of the variable.
    */
    int num = 10;
    /*In this case, the compiler allocates 4 bytes of memory to store the integer value 10.
    The memory location is determined by the address assigned to num.*/
    /* A pointer is a variable that stores the memory address of another variable.
     It allows you to indirectly access and manipulate the value stored in that memory location.
     */
    // each variable stored in the memory has an adderess associated to it
    // now we can have a variable to store the memory address of a variables stored in the memory
    // with this address we can directly access the the variable in that address

    // int *ptr;
    // In this case, ptr is a pointer to an integer. However, it doesn't point to any specific memory location yet.
    /*To make a pointer point to a specific memory location, you need to assign the address of a variable to it.
     You can use the address-of operator & to get the address of a variable. For example:
     */
    int *ptr = &num;
    /*In this case, ptr now points to the memory location where num is stored.
     The &num expression retrieves the address of num, and it is assigned to ptr.
     */
    /*You can also access the value stored at the memory location pointed by a pointer using the dereference operator *. For example:

    */
    /*
    The process of using a pointer to access the value stored at the memory address it points to is called dereferencing.
    This is done using the dereference operator *.
    */
    cout << *ptr << endl;
    *ptr = 34;
    cout << ptr << endl;

    cout << *ptr << endl;
    /*
    In this case, *ptr retrieves the value stored at the memory location pointed by ptr, which is 10.

    Pointers are particularly useful when dealing with dynamic memory allocation, such as when working with arrays or creating objects dynamically using the new keyword. They allow you to manage memory efficiently and access data indirectly.

    It's important to note that when working with pointers, you need to be cautious to avoid common pitfalls like accessing invalid memory locations or causing memory leaks. Proper memory management is crucial to ensure the stability and efficiency of your programs.

    */
    int arr[] = {1, 2, 3, 4, 5};
    int *arr_ptr = arr; // Pointer to the first element of the array
    cout << *arr_ptr << endl; // Output: 1
    cout << arr_ptr << endl;
    arr_ptr++;                // Move the pointer to the next element
    cout << *arr_ptr << endl; // Output: 2
    cout << arr_ptr << endl;
    arr_ptr += 2;             // Move the pointer two elements ahead
    cout << *arr_ptr << endl; // Output: 4
    cout << arr_ptr << endl;
    return 0;
}