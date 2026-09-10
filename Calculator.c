#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
int a,b;	
int sum;
int subtraction;
int multiplication;
float division;
int modulus;
printf("\n\t\tPlease enter the first value : ");
scanf("%d",&a);
printf("\t\tPlease enter the second value : ");
scanf("%d",&b);
sum=a+b;
printf("\n\t\tSum of %d and %d is:  %d \n ",a,b,sum);
subtraction=a-b;
printf("\n\t\tSub of %d and %d is : %d\n",a,b,subtraction);
multiplication=a*b;
printf("\n\t\tMultiplication of %d and %d is : %d \n",a,b,multiplication);
division=(float)a/b;
printf("\n\t\tDivision of %d and %d is : %.2f\n",a,b,division);
modulus=a%b;
printf("\n\t\tModulus of %d and %d is : %d\n",a,b,modulus);

	
	return 0;
}