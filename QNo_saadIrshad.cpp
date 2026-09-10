#include<iostream>
using namespace std;

void sum_of_two_entry(int[],int,int);

int main(){
	
	
	int nums[]= {3, 11, 10, 25};
    int target= 28;            
    int size= sizeof(nums)/sizeof(int);

    sum_of_two_entry(nums,size,target);

	return 0;
}

void sum_of_two_entry(int nums[], int size, int target)
{
    for (int i=0; i<size; i++) 
	{
        for (int j=1; j<size; j++) 
		{
            if (nums[i]+nums[j]==target) 
			{
                cout <<"Output: "<<"["<<i<< "," <<j<<"]"<< endl;
                break; 
            }
			 else
                continue; 
        }
    }
}