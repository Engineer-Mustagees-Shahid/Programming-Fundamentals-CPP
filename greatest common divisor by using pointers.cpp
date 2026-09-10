#include <stdio.h>

int gdc(int*,int*);

int main() {
    
    int j,k,result;
    printf("\nEnter the value of j: ");
    scanf("%d",&j);
    printf("\nEnter the value of k: ");
    scanf("%d",&k);
    result=gdc(&j,&k);
    printf("\nThe Greatest common divisor is : %d",j);
    return 0;
}

int gdc(int *a, int*b)
{
    int r;
    while(*b!=0)
    {
        r=*a%*b;
        *a=*b;
        *b=r;
    }
    return *a;
}
