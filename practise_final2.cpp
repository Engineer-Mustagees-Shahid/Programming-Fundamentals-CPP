#include<stdio.h>
#include<math.h>

void calc(int,int,int,int*,int*);

int main()
{
	int num_1,num_2;
	printf("\nEnter the two numbers which is raised to be power :");
	scanf("%d %d",&num_1,&num_2);
	int num;
	printf("\nEnter the number to find factorial :");
	scanf("%d",&num);
	int pow,fact;
	calc(num_1,num_2,num,&pow,&fact);
	printf("\nThe power raised to first of second is : %d",pow);
	printf("\n\nThe factorial of number is : %d",fact);
	
	return 0;
}

void calc(int x,int y,int num,int*pow,int*fact)
{
	int result=1,result_1=1;
	
	for (int i=1;i<=y;i++)
	{
	   	result*=x;
	}
	
	*pow=result;
	
	for(int i=1;i<=num;i++)
	{
	    result_1*=i;
	}
	
	*fact=result_1;
}