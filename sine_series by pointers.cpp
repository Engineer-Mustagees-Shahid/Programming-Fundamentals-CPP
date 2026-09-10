#include<stdio.h>
#include<math.h>

long long factorial(int);
double sine_series(double*,int*);

int main()
{
    
    double x,fact,result;
    int terms;
    printf("\nEnter the value of x :");
    scanf("%lf",&x);
    printf("\nEnter the terms :");
    scanf("%d",&terms);
    result=sine_series(&x,&terms);
    printf("\n The sin(%lf) using %d terms are: %.6lf",x,terms,result);
    double result_1=sin(x);
    printf("\n\n The sin (%lf) using %d terms by built in function are :%.6lf",x,terms,result_1);
     
    return 0;
}

long long factorial(int n)
{
    long long fact=1;
    for (int i=1; i<=n; i++){
        fact=fact*i;
    }
    return (fact);
}

double sine_series(double *x, int *terms)
{
    double result=0.0;
    int sign=1;
    for(int i=1; i<=*terms*2-1; i+=2)
    {
        double term=sign* pow(*x,i)/factorial(i);
        result=result+term;
        sign=sign*-1;
    }
    
    return result;
}