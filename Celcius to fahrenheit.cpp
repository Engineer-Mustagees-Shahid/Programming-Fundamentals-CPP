#include<iostream>
using namespace std;
int main()
{

	int centigrade;
	float fahrenheit;
	
	cout<<"Please enter value of centigrade : ";
	
	cin>>centigrade;
	
	fahrenheit=(float) centigrade*9/5 +32;

	cout<<"The Fahrenheit Temperature is :"<<fahrenheit<<" degrees";
	
	return 0;
	
	
	
	
	
	
}