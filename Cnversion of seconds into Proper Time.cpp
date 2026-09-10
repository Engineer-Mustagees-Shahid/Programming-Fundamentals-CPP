#include<iostream>
#include<iomanip>
using namespace std;

void conversion();

int main(){
	
	conversion();
	
	return 0;
}

void conversion(){
	
	int sec,result,hours,min,rem,rem_1;
	cout<<"\n Enter the total number of seconds :";
	cin>>sec;
	min=sec/60;
	rem_1=min%60;
	rem=sec%60;
	hours=min/60;
	sec=rem;
	min=rem_1;
	cout<<setfill('0')<<setw(2)<<hours<<" : "<<setfill('0')<<setw(2)<<min<<" : "<<setfill('0')<<setw(2)<<sec;
}