// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

float for_s(float*, float*, float*, float*);
float area_of_tri(float*,float*,float*,float,float*);

int main() {
   
   float a,b,c,s,area;
   printf("\nEnter the sides of the triangle :");
   scanf("%f %f %f",&a,&b,&c);
   s=for_s(&a,&b,&c,&s);
   printf("\n\nThe sum of the sides of the triangle: %.3f",s);
   area=area_of_tri(&a,&b,&c,s,&a);
   printf("\n\nThe area of the triangle :%.3f",area);
   
    return 0;
}

float for_s(float *a, float*b, float*c, float*s)
{
    *s=(*a+*b+*c)/2;
    return(*s);
}

float area_of_tri(float*a,float*b,float*c,float s,float*area)
{
    *area=sqrt(s*((s-*a)*(s-*b)*(s-*c)));
    return (*area);
}
