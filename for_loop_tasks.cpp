// Task 01 (chatgpt)

#include<iostream>
#include<cstring>
#include<cmath>
#include<climits>
using namespace std;
int main(){
	
do{

	
	cout<<" \nManual for perform functions \n"<<endl;
	cout<<"To get table of number Enter \"table\" \n"<<endl<<"To get sum of even numbers between 1 and 100 Enter \"even\" \n"<<endl;
	cout<<"To get factorial of any number Enter \"factorial\" \n"<<endl;
	cout<<"To exit the program Enter \"exit\" \n"<<endl;
    cout<<"-------------------------------------------------CHOICE?----------------------------------------"<<endl;
	char choice[10];
	
	cout<<"Please Enter your choice (*_*) : ";
	cin>>choice;
	
	if(strcmp(choice,"table")==0){
	
	
	int num,for_print,table;
	cout<<"\nEnter the number for table :";
	cin>>num;
	for_print=num;
	for(int i=1;i<=10;i++){
		
		table=num*i;
		cout<<for_print<<"x"<<i<<"="<<table<<"\n"<<endl;	
	}
   cout<<"-------------------------------------------------WAITING?FOR?NEXT?CHOICE?----------------------------------------"<<endl;
}

// Task 02

else if(strcmp(choice,"even")==0){

                                       //another logic	
  int sum=0;                             // int sum=0;

	for(int even=1;even<=100;even++){  //  for(int i=2;i<=100;i+=2)
		                               //  { sum+=i;}
		even++;	                       // cout<<sum;
		sum=sum+even;
	}
	
	cout<<endl<<"\n"<<sum<<endl;
	
	  cout<<"-------------------------------------------------WAITING?FOR?NEXT?CHOICE?----------------------------------------"<<endl;
	
}	



	else if(strcmp(choice,"factorial")==0){
	

// Task 03
  
	int integer;
	long long int factorial;
	factorial=1;
	cout<<"\nPleae enter the integer :";
	cin>>integer;
     if (integer<0)
     cout<<"\nTHE FACTORIAL OF NEGATIVE NUMBER IS NOT DEFINED"<<endl;
     else 
	{
	for(int i=integer;(i<=integer) && (i>0);i--){
		
		factorial=factorial*i;		
	}
	cout<<"\nThe factorial of "<<integer<<" is "<<factorial<<endl;
}
  cout<<"-------------------------------------------------WAITING?FOR?NEXT?CHOICE?----------------------------------------"<<endl;
}

  else if(strcmp(choice,"exit")==0){
  	
  	return 0;
  }




}while(true);

	return 0;
}













