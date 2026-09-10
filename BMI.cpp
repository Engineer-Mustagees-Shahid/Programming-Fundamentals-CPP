#include<iostream>
#include<iomanip>

using namespace std;

float BMI(float,float);

int main(){
	
	float result,a,b;
	result= BMI(a,b);
	cout<<"\n BMI is :"<<fixed<<setprecision(3)<<result;
	
	return 0;
}

float BMI(float height,float weight)
{
	float BMI;
	cout<<"\n Enter height in meters :";
	cin>>height;
	cout<<"\n Enter weight in kilograms :";
	cin>>weight;
	height*=height;
	BMI=(weight/height);
	return BMI;
}