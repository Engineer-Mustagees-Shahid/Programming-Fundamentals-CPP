#include<iostream>
using namespace std;
int main()
{
	int value[10];
	cout<<" Enter the 10 digits :";
    for(int i=0;i<10;i++)
    {
    	cin>>value[i];
	}
	
	for(int i=0;i<10;i++)
	{
		if(value[i] % 2==0)
		cout<<value[i]<<" numbers is even  "<<endl;
		else if(value[i]%2!=0)
		cout<<value[i]<<" numbers is  odd  "<<endl;
	}
	
	return 0;
}