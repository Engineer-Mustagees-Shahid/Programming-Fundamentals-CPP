#include<iostream>
using namespace std;
int main()
{
	cout<<"PLease Enter original value of a  : ";
	
	int a;
	
	cin>>a;
	
	cout<<"Please Enter original value of b  : ";
	
	int b;
	
	cin>>b;
	
	a=a+b;
	
	b=a-b;
	
    a=a-b;
    
    cout<<"The value of a is : "<<a<<endl;
    
    cout<<"The value of b is : "<<b<<endl;
        
    return 0;
	
	
	
	
}