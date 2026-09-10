#include<stdio.h>
#include<stdlib.h>

void circular_shift(int*,int*,int*);

int main()
{
	int a,b,c;
	printf("\nEnter three values :");
	scanf("%d %d %d",&a,&b,&c);
	
	circular_shift( &a, &b, &c);
	
	printf(" a=%d b=%d c=%d ",a,b,c);
	
	
	return 0;
}


void circular_shift(int *x, int *y, int *z)
{
	int temp;
	temp=*x;
	*x=*z;
	*z=*y;
	*y=temp;
	
}