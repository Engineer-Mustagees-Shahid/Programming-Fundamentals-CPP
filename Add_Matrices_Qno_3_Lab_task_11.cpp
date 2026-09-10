#include<iostream>
using namespace std;

void add_matrices(int[][3],int , int , int[][3]);

int main()
{
	int matrix_A[3][3];
	int matrix_B[3][3];
	
	cout<<"\nEnter the first matrix :"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>matrix_A[i][j];
		}
	}
	
	cout<<"\nEnter the second matrix :"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>matrix_B[i][j];
		}
	}
	
	cout<<"\nMatrix A + Matrix B is :"<<endl;
	add_matrices(matrix_A, 3, 3, matrix_B);
	
	return 0;
}


void add_matrices(int matrix_1[3][3],int rows,int cols,int matrix_2[3][3])
{
	
	int sum_matrices[3][3];
	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
	      sum_matrices[i][j]=matrix_1[i][j]+matrix_2[i][j];		
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<sum_matrices[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}