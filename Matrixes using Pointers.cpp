#include <iostream>
using namespace std;

// Function to dynamically allocate memory for an n x n matrix
int** allocate_matrix(int n) 
{
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) 
	{
        matrix[i] = new int[n];
    }
    return matrix;
}

// Function to fill the matrix with user input
void fill_matrix(int** matrix, int n) 
{
    cout << "Enter " << n * n << " elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cin >> matrix[i][j];  // User input for each matrix element
        }
    }
}

// Function to display the matrix
void display_matrix(int** matrix, int n) 
{
    cout << "Matrix:" << endl;
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << matrix[i][j] << "\t";  // Formatting for better readability
        }
        cout << endl;
    }
}

// Function to calculate the sum of the main diagonal
int sum_main_diagonal(int** matrix, int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
	{
        sum += matrix[i][i];  // Main diagonal elements (i == j)
    }
    return sum;
}

// Function to calculate the sum of the secondary diagonal
int sum_secondary_diagonal(int** matrix, int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
	{
        sum += matrix[i][n - i - 1];  // Secondary diagonal elements (i + j == n - 1)
    }
    return sum;
}

// Function to compute the absolute difference without using abs()
int absolute_difference(int sum_1, int sum_2) 
{
    if (sum_1 > sum_2) 
	{
        return sum_1 - sum_2;
    } else 
	{
        return sum_2 - sum_1;
    }
}

// Function to free allocated memory
void deallocate_matrix(int** matrix, int n) 
{
    for (int i = 0; i < n; i++) 
	{
        delete[] matrix[i];
        matrix[i]=NULL;
    }
    delete[] matrix;
    matrix=NULL;
}

int main() 
{
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    // Allocate memory for the matrix
    int** matrix = allocate_matrix(n);

    // Fill the matrix with user input
    fill_matrix(matrix, n);

    // Display the matrix
    display_matrix(matrix, n);

    // Calculate diagonal sums
    int main_diagonal = sum_main_diagonal(matrix, n);
    int secondary_diagonal = sum_secondary_diagonal(matrix, n);
    int abs_diff = absolute_difference(main_diagonal, secondary_diagonal);

    // Display results
    cout << "Sum of Main Diagonal: " << main_diagonal << endl;
    cout << "Sum of Secondary Diagonal: " << secondary_diagonal << endl;
    cout << "Absolute Difference: " << abs_diff << endl;

    // Free dynamically allocated memory
    deallocate_matrix(matrix, n);

    return 0;
}
