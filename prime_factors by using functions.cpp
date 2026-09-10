#include <stdio.h>
#include<stdlib.h>

void is_prime_factor(int);

int main() {
   
   int integer;
   printf("\nEnter the positive integer :");
   scanf("%d",&integer);
   if(integer<0)
   {
       printf("\nPlease enter the positive integer.");
   }
   else{
      
   is_prime_factor(integer);
   
   }
   
    return 0;
}

void is_prime_factor(int integer)
{
    while(integer%2==0)
    {
        printf("2 ");
        integer/=2;
    }
    
    for(int i=3; i*i<=integer; i+=2)
    {
        while(integer%i==0)
        {
            printf("%d ",i);
            integer/=i;
        }
    }
    
    if(integer>2)
    {
        printf("%d ",integer);
    }
    
}