#include<stdio.h>
#include<stdlib.h>

void conversion(int,float*,float*,int*);

int main()
{
   int weight,grams;
   float pounds,tons;
   printf("\nEnter the weight in kilograms (kg): ")	;
   scanf("%d",&weight);
   
   conversion(weight,&pounds,&tons,&grams);
	
   printf("\nThe weight in grams are : %d",grams);
   printf("\nThe weight in pounds are : %.3f",pounds);
   printf("\nThe weight in tons are : %.3f",tons);
   
	
   return 0;
}

void conversion(int weight,float *pound,float *tons, int *grams)
{
	
	*grams=weight*1000;
	*pound=weight*2.20462;
	*tons=weight*0.00110231;
	
}