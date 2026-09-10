#include<iostream>
using namespace std;

void maximum(int*);
void minimum(int*);
void average(int*);
void getting_input(int*,int);

int main()
{
	
   cout<<"\n\n\t\t\t\t\tStudent grade management system"<<endl;
   int size=10;
   int grades[size];
   
   cout<<"\n\nConclusion result are :"<<endl;
   
   getting_input(grades,size);
   maximum(grades);
   minimum(grades);
   average(grades);
		
	return 0;
}

void getting_input(int* grades,int size)
{
	 for(int i=0;i<size;)
   {
   	cout<<"\nEnter the grades of student "<<i+1<<" is :";
   	cin>>grades[i];
   	if(grades[i]>100 || grades[i]<0)
   	{
   		cout<<"\nEnter valid grade."<<endl;	
	   }
	   else {
	   	 i++;
	   }	  
   	cout<<endl;
   }
   
}

void maximum(int*grade)
{
	int max;
	max=grade[0];
	for(int i=1; i<10;i++)
	{
		if(max<grade[i+1])
		{
			max=grade[i+1];
		}
	}
	
	cout<<"\nThe maximum grade is :"<<max<<"."<<endl;
	
}

void minimum(int*grade)
{
	int min;
	min=grade[0];
	for(int i=1; i<10;i++)
	{
		if(min>grade[i])
		{
			min=grade[i];
		}
	}
	
	cout<<"\nThe minimum grade is :"<<min<<"."<<endl;
	
}

void average(int*grade)
{
	int sum=0;
	float avg;
	for(int i=0;i<10;i++)
	{
		sum=sum+grade[i];	
	}
	avg=sum/10.0;
	
	cout<<"\nThe average grade of class is :"<<avg<<endl;
	
}

