#include<iostream>
using namespace std;
int main()
{
// Variable Declaration
	
	int score;
// Display message for the user
	
	cout<<"Enter your score in PF :";
	
// Taking input from user	

	cin>> score;
	
// Applying Condition
	
	if (score>=90)
	
	   cout<< "\t\tA+"<<endl;
	   
	else
	     if(score>=80 && score<=89)
	     
	     cout<< "\t\t Your grade is :A"<<endl;
	     
	else
	     if (score>=70 && score<=79)     
	     
	     cout<< "\t\t Your grade is :B"<<endl;
	else
	     if (score>=60 && score<=69)
	     
	     cout<< "\t\t Your grade is :C"<<endl;
	else
	     if (score>=50 && score<=59)
	     
	     cout<< "\t\t Your grade is :D" <<endl;
	     
	else 
	     cout<< "\t\t Your grade is :F"  <<endl;
	
	
	
	
	
}