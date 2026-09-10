#include <iostream>
#include<climits>
using namespace std;

// Function to display the array
void display_array(int *arr, int size) 
{
    for (int i=0; i<size; i++) 
	{
        cout<<*(arr+i)<< " ";
    }
    cout<<endl;
}


// Function to reverse the array using pointer arithmetic
void reverse_array(int *arr, int size) 
{
    for (int i=0; i<size/2; i++) 
	{
        int temp= *(arr+i);                 
        *(arr+i)= *(arr+size-1- i); 
        *(arr+size-1-i)= temp; 
    }
}

// Function to find the second largest element using pointers
int find_second_largest(int *arr, int size) 
{
    int first=*arr; 
	int second = INT_MIN;
    for (int i=1; i<size; i++) 
	{
        if (*(arr+i)>first) 
		{
            second=first;
            first=*(arr + i);
        } 
		else if (*(arr+i)>second && *(arr+i)!=first) 
		{
            second=*(arr+i);
        }
    }
    return second;
}

// Function to rotate the array to the right by k positions
void rotate_array(int *arr, int size, int k) 
{
    k=k%size;  // Handle cases where k is greater than size
    int *temp = new int[size]; // Dynamic allocation for temporary array

    for (int i = 0; i < size; i++) 
	{
        temp[(i + k)% size] = *(arr + i);
    }

    for (int i = 0; i < size; i++) {
        *(arr + i) = temp[i];
    }

    delete[] temp; // Free allocated memory
}


int main() 
{
    int size = 10; 
    int *arr = new int[size]{3, 8, 12, 5, 6, 10, 15, 2, 9, 14}; 

    cout<<"Original array: ";
    display_array(arr,size);

    reverse_array(arr,size);
    cout<<"Reversed array: ";
    display_array(arr,size);

    int second_largest = find_second_largest(arr,size);
    cout<<"Second largest element: " <<second_largest<<endl;

    int k;
    cout << "Enter number of positions to rotate: ";
    cin >> k;
    
    rotate_array(arr, size, k);
    cout << "Array after rotation: ";
    display_array(arr, size);

    // Free allocated memory
    delete[] arr;

    return 0;
}
