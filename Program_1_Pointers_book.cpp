#include<stdio.h>
#include<stdlib.h>
int main ()
{
	float a=13.5;
	float *b,*c;
	b=&a;
	c=b;
	printf("%u %u %u",&a,b,c);
	printf("\n%.2f %.2f %.2f %.2f %.2f",a,*b,*c,*&a,*(&a));
	
	
	
	
	
	return 0;
}