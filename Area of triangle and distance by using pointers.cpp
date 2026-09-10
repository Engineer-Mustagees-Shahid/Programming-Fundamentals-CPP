#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void distance(double*,int*,int*,int*,int*);
int area(double*,int*,int*,int*,int*,int*,int*);
int check(int*,int*,int*,int*,int*,int*,int*,int*);


int main()
{
	
   int x1,x2,y1,y2,x3,y3,x,y;
   double dis_tri,area_tri;
   printf("\nEnter coordinates for distance : ");
   scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
   distance(&dis_tri,&x1,&y1,&x2,&y2);
   printf("\nThe distance between points are : %.3lf",dis_tri);
   int x_1,x_2,x_3,y_1,y_2,y_3;
   printf("\n\nEnter coordinates for the area of the triangle :");
   scanf("%d %d %d %d %d %d",&x_1,&y_1,&x_2,&y_2,&x_3,&y_3);
   area(&area_tri,&x_1,&y_1,&x_2,&y_2,&x_3,&y_3);
   printf("\nThe area of triangle is : %.3lf",area_tri);
   printf("\n\nEnter the coordinates of checking point : ");
   scanf("%d %d",&x,&y);
   check(&x,&y,&x_1,&y_1,&x_2,&y_2,&x_3,&y_3);
   if(check(&x,&y,&x_1,&y_1,&x_2,&y_2,&x_3,&y_3))
   {
   	printf("\nThe point is inside the triangle.\n");
   }
   else
   {
   	printf("\nThe point is outside the triangle.\n");
   }
	
	
	return 0;
}

void distance(double *dis_tri, int *x1, int *y1, int *x2, int *y2)
{
   *dis_tri=sqrt(pow((*x2-*x1),2)+pow((*y2-*y1),2));
    
}

int area(double *area_tri, int *x_1, int *y_1, int *x_2 , int *y_2, int *x_3,int *y_3)
{
   *area_tri=fabs(*x_1*(*y_2-*y_3)+*x_2*(*y_3-*y_1)+*x_3*(*y_1-*y_2))/2.0;
	
	return *area_tri;
}

int check(int *x, int *y, int *x_1, int *y_1, int *x_2, int *y_2, int *x_3, int *y_3)
{

	double A,A1,A2,A3;
	area(&A,x_1,y_1,x_2,y_2,x_3,y_3);
	area(&A1,x,y,x_2,y_2,x_3,y_3);
	area(&A2,x_1,y_1,x,y,x_3,y_3);
	area(&A3,x_1,y_1,x_2,y_2,x,y);
	
	return fabs(A-(A1+A2+A3)) <1e-9;
}

