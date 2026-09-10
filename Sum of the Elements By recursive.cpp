#include <iostream>
using namespace std;

// Recursive function to compute the sum of array elements
int sum_array(int *arr, int size) 
{
    if (size == 0) return 0;  // Base case
    return *arr + sum_array(arr + 1, size - 1);  // Recursive call
}

// Recursive function to compute factorial of a number
int factorial(int n) 
{
    return (n <= 1) ? 1 : n * factorial(n - 1);  // Base case and recursive call
}

int main() 
{
    int size = 5;  // Size of array
    int *arr = new int[size]{3, 8, 12, 5, 6};  // Dynamically allocated array

    cout << "Sum of array elements: " << sum_array(arr, size) << endl;
    cout << "Factorial of array size is : " << factorial(size) << endl;

    delete[] arr;  // Free dynamically allocated memory
    return 0;
}
