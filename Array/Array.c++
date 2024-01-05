#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMax(int arr[], int size)
{
    if (size == 0)
    {
        cerr << "Error: Array is empty." << endl;
        return -1;
    }

    int maxElement = arr[0];

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }

    return maxElement;
}
int findMin(int arr[], int size)
{

    if (size == 0)
    {
        cout << "array cannot be zero " << endl;
        return -1;
    };
    int minElement = arr[0];
    for (int i=1; i < size; ++i)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        };
    };
    return minElement;
}

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; ++i)
    {
        // Swap elements at the beginning and end of the array
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
bool containsDuplicate(vector<int> &nums)
{
    // Sort the array and check for adjacent duplicates
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[i] == nums[i - 1])
        {
            return true;
        }
    }

    return false;
}
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n; // To handle cases where k is greater than the array size

    // Reverse the entire array
    reverse(nums.begin(), nums.end());

    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Reverse the remaining elements
    reverse(nums.begin() + k, nums.end());
}
int main()
{
    const int size = 5;
    int myArray[size] = {42, 17, 8, 99, 23};

    // int result = findMax(myArray, size);
    int result = findMin(myArray, size);

    if (result != -1)
    {
        cout << "The minimum element in the array is: " << result << endl;
        // cout << "The maximum element in the array is: " << result << endl;
    }

    return 0;
}