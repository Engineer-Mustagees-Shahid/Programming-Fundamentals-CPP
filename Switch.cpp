#include<iostream>
using namespace std;
int main(){
	
	int num_1,num_2;
	char operat;
	cout<<"Please enter the first number: ";
	cin>>num_1;
	cout<<"Please enter the second number:";
	cin>>num_2;
	cout<<"Please enter the operator: ";
	cin>>operat;
	switch(operat){
		
		case '+':
			cout<<num_1+num_2;
		
		break;
		
		case '-':	
		    cout<<num_1-num_2;
		break;
		
		case '*' :
		    cout<<num_1*num_2;
		break;
		
		case '/' :
		    cout<<num_1/num_2;
		break;
		
		case '%' :
		    cout<<num_1%num_2;
		break;
			 	 	     
		default:
			cout<<"Please Enter the correct arithematic operator ";
	}
	
	
	
	
	
	return 0;
}