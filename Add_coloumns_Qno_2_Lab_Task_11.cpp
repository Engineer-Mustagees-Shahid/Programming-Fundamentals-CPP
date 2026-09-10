#include<iostream>
using namespace std;
void sum_of_coloumn(int[][4],int,int,int[]);

int main()
{

	int sum_col[4];
	int array[3][4];
	cout<<"\nEnter the matrix of 3 by 4 :"<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>array[i][j];
		}
	}

   sum_of_coloumn ( array , 3 , 4 , sum_col);
   
   cout<<"\n Sum of each coloumn is :\n"<<endl;
   for(int i=0;i<4;i++)
   {
   	
   	cout<<" Sum of coloumn "<<i+1<<" is :"<<sum_col[i]<<endl;
   	
   }

	return 0;
}


void sum_of_coloumn(int array[3][4],int row,int cols,int sum_col[])
{
  	int sum;
  	for(int j=0; j<cols;j++)
	  {
	  	sum=0;
  	    for(int i=0;i<row;i++)	
  	    {
  	    	sum+=array[i][j];
  	    	
		  }	            
 	          sum_col[j]=sum;	            
	  }
  		
}
