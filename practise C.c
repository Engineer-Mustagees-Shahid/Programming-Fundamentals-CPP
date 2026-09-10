#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	
	int a;
	printf("Please enter the 4 digits value = ");
	scanf("%d",&a);
	int once_digit,tenths_digit,hundred_digits,thousands_digits;
	once_digit=a%10;
	a=a/10;
	printf("\nthe one's digit is= %d\n\n",once_digit);
	tenths_digit=a%10;
	a=a/10;
	printf("the tenths digit is= %d\n\n",tenths_digit);
	hundred_digits=a%10;
	a=a/10;
	printf("the hundreds digit is= %d\n\n",hundred_digits);
	thousands_digits=a%10;
	printf("the thousands digit is %d\n\n ",thousands_digits);
	int inverse;
	inverse=once_digit*1000 +tenths_digit*100 + hundred_digits*10 + thousands_digits;
	printf("\n\t\tInverse of given number is = %d\n",inverse);
	int add=once_digit+thousands_digits;
	printf("\n\t\tAddition of first and last term is  = %d\n\n ", add);
	int _reverse;
	_reverse=once_digit*1000+hundred_digits*100+tenths_digit*10+thousands_digits;
	printf("\t\tChanging order of given number is : %d\n\n",_reverse);
	int ch_order;
	ch_order=thousands_digits*1000+tenths_digit*100+hundred_digits*10+once_digit;
	printf("\t\tYour Order Change is = %d \n\n",ch_order);
	return 0;
}

 /* 

// A0

int width_A0=841;
int height_A0=1189;

printf("A0 Paper size is :%d mm * %d mm\n",height_A0,width_A0);

//A1

int width_A1=width_A0;
int height_A1=594;

printf("A1 Paper size is : %d mm * %d mm\n",width_A1,height_A1);

// A2

int width_A2=height_A1;
int height_A2=height_A1/2;

printf("A2 Paper size is : %d mm * %d mm\n",width_A2,height_A2);

// A3

int width_A3=height_A2;
int height_A3=height_A2/2;

printf("A3 Paper size is : %d mm * %d mm\n",width_A3,height_A3);

// A4

int width_A4=height_A3;
int height_A4=height_A3/2;

printf("A4 Paper size is : %d mm * %d mm\n",width_A4,height_A4);

//A5

int width_A5=height_A4;
int height_A5=height_A4/2;

printf("A5 Paper size is : %d mm * %d mm\n",width_A5,height_A5);

//A6

int width_A6=height_A5;
int height_A6=height_A5/2;

printf("A6 Paper size is : %d mm * %d mm \n",width_A6,height_A6);


*/  


/*
 int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if (a<b)
     
	 {
	 
	   if(a<c)
          printf("a is the smallest");
      else 
	       printf("c is the smallest");
	  if (b<a)
		   if (b<c)    
	         printf("b is smallest");  } 
	else
	      printf("c is smallest")	 ;}
	      
			if (a==b==c)    
				  printf("these are equal");

*/

/*
int x,y;
float z;
printf("Enter two values of x and y :");
scanf("%d %d",&x,&y);
if (y==4)
     printf("Please don't enter the 4 because it makes 0 and division by zero goes to infinity. ");
    else 
	    {
		  if (y==-5) 
	        printf("Please don't enter the value -5 beacuse it makes 0 and division by zero goes to infinity. ");

	  }
		 z=((x+3)*pow(x,3))/((y-4)*(y+5));
		 printf("\nThe value of z is %.3f",z);


  int balance;
  int amount;
   char transaction_type;
  
  printf("Enter the initial balance :");
  scanf("%d",&balance);
  printf("Enter the transaction type :");
  scanf(" %c",&transaction_type);  

     if  (transaction_type== 'W'|| transaction_type =='w')     
       {
            printf("Enter the withdraw amount :");
            scanf("%d",&amount);
            
            if(amount<=balance)
            
		      {
			    printf("Please take your cash\n");
                balance=balance-amount;
                printf("Your remaining balance is %d",balance) ;
    }
                    else{
					
                           printf("Your balance is insufficient"); }
}
         
 else if (transaction_type== 'D'||transaction_type== 'd')
          {
          	printf("Enter the amount which you are debited :");
          	scanf("%d",&amount);
          	balance=balance+amount;
          	printf("Your new balance is: %d",balance);
		  }

    return 0;
}

*/







	
