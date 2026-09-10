#include<iostream>
using namespace std;

void arr_pass(int[][5]);

int main()
{
	int mat[4][5];
	cout<<" Enter the values of matrix :";
	int rows=0,col;
	while(rows<4)
	{
		col=0;
		while(col<5)
		{
		  cin>>mat[rows][col];  
		  col++;	
		
		}
             rows++;				
	}
	
   arr_pass(mat);
   
   cout<<"\n\nThe matrix after sorting is :"<<endl;
    rows=0;
    while(rows<4)
	{
		col=0;
		while(col<5)
		{
		  cout<<mat[rows][col]<<" ";  
		  col++;	
		
		}
		cout<<endl;
             rows++;				
	}
    
	
	return 0;
}


void arr_pass(int array[][5])
{
	int row=0;
	while(row<4)
	{
		if(row%2==0)
		{
			int col=0;
			while(col<4)
			{
				int index=col+1;
				while(index<5)
				{
					if(array[row][col]>array[row][index])
					{
						int temp=array[row][col];
						array[row][col]=array[row][index];
						array[row][index]=temp;
					}
					index++;
				}
				col++;
			}
		}
		
		else 	
		{
			int col=0;
			while(col<4)
			{
				int index=col+1;
				while(index<5)
				{
					if(array[row][col]<array[row][index])
					{
						int temp=array[row][col];
						array[row][col]=array[row][index];
						array[row][index]=temp;
					}
					index++;
				}
				col++;
			}
			
		}
		row++;
}

}

