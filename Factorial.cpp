#include<iostream>
using namespace std;
int main()
{
	
	int num;
	int factorial=1;
	int num_1;
	cout<<"Enter the num:";
	cin>>num;
	num_1=num;
	for(int i=1;i<=num;i++)
	{
		
		factorial=factorial*i;
		
	}
	   cout<<"The factorial of "<<num_1<<" is "<< factorial;
	
	
	
	
	return 0;
}