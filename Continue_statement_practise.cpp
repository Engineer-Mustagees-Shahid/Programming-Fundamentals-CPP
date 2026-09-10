#include<iostream>
using namespace std;
int main(){
	
	int num=5;
	
	for( int i=1;i<=10;i++)
	{
		if(i%7==0)
		continue;
		
		cout<<"5 x "<<i<<" = "<<num*i<<endl;
	}
	
	
	
	
	
	
	return 0;
}