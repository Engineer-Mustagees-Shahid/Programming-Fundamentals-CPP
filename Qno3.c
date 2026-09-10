#include<stdio.h>
int main()
{
    long long int _phone_no;
    short int _age;
    printf("Please enter your Phone no\n ");
    	scanf("%lld",&_phone_no);
    printf("Please type your age\n");
	scanf("%hd",&_age);
	printf("Your phone no is %lld \nYour age is %hd",_phone_no,_age);
	return 0;
	
	
}