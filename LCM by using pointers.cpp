#include <stdio.h>

int lcm(int*,int*);


int main() {
    
    int j,k,result;
    printf("\nEnter the value of j: ");
    scanf("%d",&j);
    printf("\nEnter the value of k: ");
    scanf("%d",&k);
    result=lcm(&j,&k);
    printf("\nThe least common multiple is : %d",result);
    return 0;
}



int lcm(int *a, int *b)
{
     int r,result;
     result=*a * *b;
    while(*b!=0)
    {
        r=*a%*b;
        *a=*b;
        *b=r;
    }
    
    return (result / *a);
}