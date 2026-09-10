#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void calculation(int*,float*,double*);

int main()
{
	int sum;
	float average;
	double std_evi;
	calculation(&sum,&average,&std_evi);
	
	return 0;
}

void calculation(int*sum,float*average,double*std_evi)
{
	int n_1,n_2,n_3,n_4,n_5;
	printf("\n Enter the five digits :\n");
	scanf("%d %d %d %d %d",&n_1,&n_2,&n_3,&n_4,&n_5);
	*sum=n_1+n_2+n_3+n_4+n_5;
	*average=*sum/5;
	*std_evi=sqrt((pow(n_1-*average,2)+pow(n_2-*average,2)+pow(n_3-*average,2)+pow(n_4-*average,2)+pow(n_5-*average,2))/5);
	printf("\n The Sum of Numbers are : %d",*sum);
	printf("\n The Average of numbers are : %.2f",*average);
	printf("\n The Standard Eviation of numbers are : %lf",*std_evi);
	
}