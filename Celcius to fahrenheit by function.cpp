#include<iostream>
using namespace std;

float converter(float);

int main()
{
   float  result;
   converter(result);
	
	return 0;
}

float converter(float celcius){
	
	float fahrenheit;
	cout<<"\n Enter the temperature in Celcius :";
	cin>>celcius;
    fahrenheit=1.8*celcius+32;
	cout<<endl;
	cout<<" "<<celcius<<" degrees celcius is equal to "<<fahrenheit<<" degrees fahrenheit";
    return fahrenheit;
}