#include<iostream>
using namespace std;
int main()
{
// Variable Declaration
	
	float hours,hourly_rate,salery,tax;
	
// Display message for taking hours from user
	
	cout<<"\n\t\tPlease Enter your Working hours in a week :"; 
	
	cin>> hours;
	
// Specify rate of one hour
	
	hourly_rate=100;
	
// Applying Condition
	
	if(hours>40)
	
	{
		cout<<"\n\n\t\t Your Salery is :";
		salery=hours*100;
		cout<<salery;
		salery=hours*1.5*100;
		cout<< "\n\n\t\t Your Total salery after overtime is : ";
		cout<< salery;
		tax=salery*20/100;
		cout<<" \n\n\t\t Tax is deducted from your salery is : ";
		cout<<tax;
		salery=salery-tax;
		cout<< "\n\n\t\t Your salery after tax deduction is : ";
		cout<<salery<<"\n";
	}
	
    else
         {
		   salery=hours*100;
          cout<< "\n\n\t\t Your Total salery is : ";
          cout<<salery;
          tax=salery*20/100;
 		  cout<<" \n\n\t\t Tax is deducted from your salery is : ";
		  cout<<tax;         
		  salery=salery-tax;
		  cout<< "\n\n\t\t Your salery after tax deduction is : ";
		  cout<<salery<<"\n";	
	 }
	
	
	
	return 0;
}