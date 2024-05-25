//Write a C++ program to count the number of occurrences of a number in an array  using function. 
#include <iostream> 
using namespace std; 

int count_occurrences(int arr[], int n, int x)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
            result++; 
    }
    return result;
}

int main()
{
    int nums[] = {5, 7, 9, 9, 5, 5, 9, 9}; 
    int n = sizeof(nums) / sizeof(nums[0]); 
    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
    cout << nums[i] << " "; 

    int x = 9;
    cout << "\nNumber of occurrences of 9 : " << count_occurrences(nums, n, x);
    return 0; 
}