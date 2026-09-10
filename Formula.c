#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main(){
	
	
	int a,b;
	printf("PLease enter the first value :  ");
	scanf("%d",&a);
	printf("\nPlease enter the second value :  ");
	scanf("%d",&b);
	int formula;
	formula=(3*a*a*a)-(b*b*b)-3*a*b*(a-b);
	printf("\n%d",formula);
	return 0;

	
	
}