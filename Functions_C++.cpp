#include<iostream>
#include<cmath>
using namespace std;

float sum(float,float);
float sub(float,float);
float mult(float,float);
float division(float,float);
int mod(int,int);
int sqr(int,int);
float root(float);
int prime(int);
int even(int);
int odd(int);
double factorial(int);
float pye(float,float);
float Euler(float,float);
int is_prime(int);


 float pie=3.14;
 float e = 2.718;

int main(){
	
	char i=3;
	char p= 2;
	cout<<"\n\t\t\t\t\t\t\t\t\t\tWelcome users "<<(char)i<<" in my Program "<<(char)p<<endl;
	
do{
	// Manual of program
	
	cout<<"\n\t\tManual of the Program (*_*)\n\n\n"<<endl;
	cout<<"(1) To perform Sum Enter \"+\" \n"<<endl;
	cout<<"(2) To perform Subtraction Enter \"-\" \n"<<endl;
	cout<<"(3) To perform Multipilication Enter \"*, x\" \n"<<endl;
	cout<<"(4) To perform Division Enter \"/\" \n"<<endl;
	cout<<"(5) To perform Modulus or get remainder Enter \" % , m, M\" \n"<<endl;
	cout<<"(6) To perform Power of first with respect to second Enter \"S, s\" \n"<<endl;
	cout<<"(7) To perform Square root of number Enter \"R, r\" \n"<<endl;
	cout<<"(8) To Get the number is even or not Enter \"e, E\" \n"<<endl;
	cout<<"(9) To Get the number is odd or not Enter \"O, o\" \n"<<endl;
	cout<<"(10) To Know the number is prime or not Enter \"p, P\" \n"<<endl;
	cout<<"(11) To Get factorial of the number  Enter \"f, F\" \n"<<endl;
	cout<<"(12) Addition of pie with the number  Enter \"g, G\" \n"<<endl;
	cout<<"(13) Addition of Euler's number with the number  Enter \"n, N\" \n"<<endl;
	
	cout<<"--------------------------------------------------------------------------------------WAITING?FOR?CHOICE?---------------------------------------------------------------------------------------\n"<<endl;
	
	float num_1,num_2;
	float result;
	char choice;
	cout<<" Enter your choice : ";
    cin>>choice;
    cout<<endl;
    
    // Operations of two values
    
if (choice== '+' || choice=='-' || choice=='*' || choice== 'x' || choice=='/' || choice=='%' ||choice=='m'||choice=='M' || choice=='S'||choice=='s')
{

	cout<<" Enter first number :";
	cin>>num_1;
	cout<<endl;

	cout<<" Enter second number : ";
	cin>>num_2;
	cout<<endl;
}
    // Cases of Operaions
    
	switch(choice){
		
		case '+':
			result=sum(num_1,num_2);
			cout<<" Addition of the values is :"<<result<<endl;
			break;
		case '-':
			result=sub(num_1,num_2);
			cout<<" Subtraction of the values is :"<<result<<endl;
		    break;
		case '*':
		case 'x':
			result=mult(num_1,num_2);
			cout<<" Product of the values are :"<<result<<endl;
			break;
	    case '/':
	    	result=division(num_1,num_2);
	    	cout<<" Division of the values are :"<<result<<endl;
	    	break;
	    case '%' :
	    case 'M':
	    case 'm':
	    	result=mod(num_1,num_2);
	    	cout<<" Remainder of the values are :"<<result<<endl;
	    	break;
	    case 'S':
	    case 's':
	    	result=sqr(num_1,num_2);
	    	cout<<" Square of first value with respect to second value is :"<<result<<endl;
	    	break;
	    case 'R':
	    case 'r':
	    	result=root(num_1);
	    	cout<<" Square root of first number is :"<<result<<endl;
	    	break;
	    case 'P' :
	    case 'p' :
	    	result=prime(num_1);
	        break;
	    case 'E':
	    case 'e':
	    	result=even(num_1);
	    	break;
	    case 'o':
	    case 'O':
	    	result=odd(num_1);
	    	break;
	    case 'f':
	    case 'F':
	    	result=factorial(num_1);
	    	break;
	    case 'G':
	    case 'g':
	    	result=pye(num_1,pie);
	    	cout<<" The sum of pie and given value is :"<<result<<endl;
	    	cout<<endl;
	    	break;
	    case 'N':
	    case 'n':
	    	result=Euler(num_1,e);
	    	cout<<" The sum of e and given number is :"<<result<<endl;
	    	cout<<endl;
	    	break;
	    	
	    case 'I':
	    case 'i':
	    	is_prime(num_1>=num_2);
	    	
	    	break;
		
		default:
			cout<<"Please read the manual and enter correct choice\n"<<endl;
	}
	
	cout<<"-------------------------------------------------------------------------------------WAITING?FOR?NEXT?CHOICE?---------------------------------------------------------------------------------------\n"<<endl;

// Choice of continue program
	
	char choice_1[10];
	cout<<" If you want to continue Write (yes) or exit from the program Write (exit) :";
	cin>>choice_1;
	if(strcmp(choice_1,"exit")==0)
	{
		return 0;
	}
	else if (strcmp(choice_1,"Exit")==0)
	{
		return 0;
	}
	else if (strcmp(choice_1,"No")==0)
	{
		return 0;
	}
	else if(strcmp(choice_1,"no")==0)
	{
		return 0;
	}
	cout<<"-------------------------------------------------------------------------------------WAITING?FOR?NEXT?CHOICE?---------------------------------------------------------------------------------------\n"<<endl;
	
	
	
	
}while(true);

	return 0;
}

// Functions making

    float sum( float num_1, float num_2)
   {
   	return(num_1+num_2);
   }
    float sub(float num_1, float num_2)
   {
   	return (num_1-num_2);
   }
    float mult( float num_1,float num_2)
   {
   return(num_1*num_2);
   }
   float division(float num_1, float num_2)
   {
   	return (num_1/num_2);
   }
    mod(int num_1, int num_2)
   {
   	return(num_1%num_2);
   }
   sqr(int num_1, int num_2)
   {
   	return ( pow(num_1,num_2));
   }
   float root(float num_1)
   {
   	int num;
   	cout<<" Enter the number :";
   	cin>>num;
   	cout<<endl;
   	return sqrt(num);
   }
   prime(int num_1)
   {
   	int num,counter_zero;
   	counter_zero=1;
   	cout<<"Enter the number :";
   	cin>>num;
   	cout<<endl;
   	
   	for(int i=1;i<num;i++){
   		if(num%i==0)
   		counter_zero++;
	   }
    if(counter_zero==2)
      cout<<"The number is prime\n"<<endl;
    else 
      cout<<" The number is not prime\n"<<endl;
      return(num);
   }
   
   even(int num_1)
   {
      int num;
	  cout<<"Enter the number :";
	  cin>>num;
	  cout<<endl;
	  if(num%2==0)	
	  cout<<"The number is even.\n"<<endl;
	  
	  return (num);
   }
   
   odd(int num_1)
   {
   	int num;
   	cout<<" Enter the number :";
   	cin>>num;
   	cout<<endl;
   	if(num%2!=0)
   	cout<<" The number is odd\n"<<endl;
   	return(num);
   }
   
   double factorial(int num_1)
   {
   	double num,fact;
   	fact=1;
   	cout<<" Enter the number :";
   	cin>>num;
   	cout<<endl;
   	for(int i=1;i<=num;i++)
   		fact*=i;
	cout<<" The factorial of "<<num<<" is " <<fact<<"\n"<<endl;
	return(fact);
   }
    float pye(float num_1,float num_2)
   {
   	float num;
   	cout<<" Enter the first number: ";
   	cin>>num;
   	cout<<"\n";
   	return(num+pie);
   }
   float Euler(float num_1,float num_2)
   {
   	float num;
   	cout<<" Enter the number :";
   	cin>>num;
   	cout<<endl;
   	return(num+e);
   }
   
   is_prime(int a)
   {
   	int l_limit,u_limit,counter_zero;
   	cout<<" Enter the lower limit :";
   	cin>> l_limit;
   	cout<<endl;
   	cout<<" Enter the upper limit :";
   	cin>> u_limit;
   	cout<<endl;
   	
   	counter_zero=0;
   	
  	if(l_limit!=1 && l_limit!=2)
	   {
	   
   	for(int i=2; l_limit <= u_limit ; l_limit++)
   	{
   		if((l_limit % 2 != 0))
   		{
          cout<<l_limit<<endl;
         }
	   }
 }  	
/*   	else if(l_limit==1 || l_limit==0  )
   	{
   		counter_zero=1;
   		for(int i=2;l_limit<=u_limit;i){
   			
   			if(l_limit%i==0)
   			counter_zero++;
   			if(counter_zero==0)
   			cout<<l_limit;
   			l_limit++;
   			
		   }
	   }
  */ 	
  return(l_limit);
   }