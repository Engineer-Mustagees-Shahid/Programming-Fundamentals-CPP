#include<stdio.h>
int main(){
	
	float dollar;
	double rupees;
	printf("Please enter the amount in Dollars $ =");
	scanf("%f",&dollar);
	rupees=dollar*285;
	printf("Your rupees is = %.2lf",rupees);
	return 0;
	
}