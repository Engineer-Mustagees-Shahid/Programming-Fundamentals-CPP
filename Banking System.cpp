#include<iostream>
using namespace std;
int main(){
	int balance=0;
	int deposit,withdraw;
	char choice;	
	
do{
	cout<<"\n\n\n";
	cout<<"\t\t\t\t===Banking system Menu===";
	cout<<endl;
	cout<< " \t\t\t\tTo Deposit Money Enter 1"<<endl;
	cout<< " \t\t\t\tTo Withdraw Money Enter 2"<<endl;
	cout<<" \t\t\t\tTo Check Balance Enter 3"<<endl;
	cout<<"\t\t\t\tTo exit Enter 4"<<endl;
	
	cout<<" Chose an option (1-4) :";
	cin>>choice;
	
	switch(choice){
		
		case '1':
			cout<<" Enter amount to deposit : ";
			cin>>deposit;
			cout<<endl;
			
			if(deposit<=0)
			cout<< " invalid Amount\n"<<endl;
			
			else if(deposit>0)
			{
			
			balance+=deposit;
			cout<< " Deposit Successful New Balance:$ "<<balance<<endl;
			cout<<endl;
		}
		
		break;
		
		case '2':
			
			cout<<" Enter amount to withdraw : ";
			cin>>withdraw;
			if(withdraw>balance)
			cout<<" Your balance is low \n";
			else 
			{
			balance=balance-withdraw;
			cout<< " Withdrawl Successful New Balnace : $"<<balance<<endl;
			cout<<endl;
		}
		break;
		
		case '3':
				cout<<" Your Current balance is :"<<balance<<endl;
			break;
			
		case '4' :
			cout<<"\n Thank you! "<<endl;
			return 0;	
	}
		
}while(true);	
	return 0;
}
