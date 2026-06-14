#include<iostream>
#include<cmath>
using namespace std;
int main(){
do{
		
	int a,b;
	
	cout<<"Enter First number :";
	cin>>a;
	cout<<"Enter Second number :";
	cin>>b;
	
	cout<<"Enter Operation(+,-,*,/,%,^,s) :";
	
	char operation;
	
	cin>>operation;
	
	switch(operation){
		
		case '+':
		cout<<"Addition :"<<a+b;
		break;
		case '-' :
		cout<<"Subtraction :"<<a-b;
		break;
		case '*' :
		cout<<"Multiplication :"<<a*b;
		break;
		case '/' :
		cout<<"Division :"<<a/b;
		break;
		case '%':
		cout<<"Remainder is :"<<a%b;
		break;
		case '^':
		cout<<"Exponential :"<<pow(a,b);
		break;
		case 's' :
		cout<<"square root of first number :"<<sqrt(a)<<" \nand second number is : "<<sqrt(b);
		break;
		default:
		cout<<"Please Enter valid operator!";
	}
	
	  char descion;
	  cout<<"\nEnter your descision (y/n) :";
	  cin>>descion;
	  if(descion=='n'){
	  	
	  	cout<<"You exit the program"<<endl;
	  	return 0;
	  }
	  
	
	
}while(true);
return 0;	
	
}