#include <iostream>
using namespace std;

int main() {
	
    int rows, cols;
    cout<< "How many rows: ";
    cin>>rows;
    cout<< "How many coloumnns : ";
    cin>>cols;

   int original_matrix[rows][cols];
   int transpose_of_matrix[cols][rows];

    
    for(int i=0; i<rows; i++) 
	{
        for (int j=0; j<cols; j++) 
		{
           cout<< "Enter Value for index "<<i<<j<<" : ";
           cin>>original_matrix[i][j];
        }
        cout<<endl;
    }
    
       cout<<"\nOriginal Matrix:" <<endl<<endl;
    for(int i=0; i<rows; i++) 
	{
        for(int j=0; j<cols; j++) 
		{
            cout<<original_matrix[i][j] << " ";
        }
        cout<<endl;
    }

    for(int i=0; i<rows; i++) 
	{
        for(int j=0; j<cols; j++) 
		{
            transpose_of_matrix[j][i] = original_matrix[i][j];
        }
    }

    cout<< "\nTranspose of the Matrix:" <<endl<<endl;
    for(int i=0; i<cols; i++)
	 {
        for(int j=0; j<rows; j++)
		 {
            cout<<transpose_of_matrix[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
