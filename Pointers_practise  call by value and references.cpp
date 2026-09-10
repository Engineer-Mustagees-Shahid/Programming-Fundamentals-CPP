#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<strings.h>

void func_by_call(int,int);
void func_by_reference(int*,int*);
void area_perimeter_of_square(int,int*,int*);

int main()
{
	int  i=-53;
	int *j=&i;	 
	int **k;
	k=&j;
	
	
	printf(" \n\n\t\t\tthe value of i is %u",&i);
	printf(" \n\n\t\t\tthe value at adrees stored in j is %d",*j);
	printf("\n\n\t\t\t the vlue of j is :%d",j);
	
	printf(" \n\n\t\t\tThe sum of the i and j is :%d",i+*j);
//    printf(" The sum of the addresees is :%u",&i + &j);// <>addresses can't be add<>

   printf("\n\n\t\t\t The address of j is :%u",&j);
   printf("\n\n\t\t\t The address of k is :%u",&k);
   
   printf("\n\n\t\t\t The sum of j and **k is : %d",&j+**k);
   // <>unexpected result generated due to we add the address and integer which violates the rule <>
	
	
	float array[10];
	char arr[10];
	printf("\n\n\t\t\t The address of the float array is %u",&array);
	printf("\n\n\t\t\t The address of the char arr is %u",&arr);
	
	
	printf("\n\n\n\n <>Function call by the values of swaping<> ");
	
	int a=10,b=20;
	int c=10,d=20;
	func_by_call(a,b);
	printf("\n\n The value of a is:%d ",a);
	printf("\n\n The value of b is:%d ",b);
	
	printf("\n\n\n\n <>Function call by the references of swaping<> ");
	func_by_reference(&c,&d);
	printf("\n\n The value of c is:%d ",c);
	printf("\n\n The value of d is:%d ",d);
	
int length,area,perimeter;
int x=1;
 do{
 	
	printf("\n\n\n\n <>Function call by the references and getting two or three return values as permanent <> ");
	printf("\n\n Enter the length of square :");
	scanf("%d",&length);
	area_perimeter_of_square(length,&area,&perimeter);
	printf("\n\n Area of the square is :%d",area);
	printf("\n\n Perimeter of the square is :%d",perimeter);
	x++;
}while(x<3);
	
	// remain last time and permanently stored value or then overwrite when loop is going then after this last value stored in address of area and perimeter is then actual value
	printf("\n\n Area of the square is :%d",area);
	printf("\n\n Perimeter of the square is :%d",perimeter);
	
	return 0;
}


void  func_by_call(int a,int b)
{
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\n The value of a is:%d ",a);
	printf("\n\n The value of b is:%d ",b);
	
}

void func_by_reference(int *a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
	printf("\n\n The value of c is:%d ",*a);
	printf("\n\n The value of d is:%d ",*b);	
	
}

void area_perimeter_of_square(int length,int *area,int *perimeter)
{
	
	*area=length*length;
	*perimeter=length*length*length*length;
		
}
