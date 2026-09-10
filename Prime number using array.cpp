#include<iostream>
using namespace std;

int main(){
	
int n;
int prime;

   cout<<"How many numbers you want to check : ";
   cin>>n;
   
int size[n];

   cout<<"\n Enter the numbers: ";
   
   int counter=0;
   
for(int i = 0 ; i < n ; i++)
{
cin>>size[i];
}
for(int i = 0, j = 0; i < n, j < n ; i++, j++)
{

   for(int j = 2 ; j < size[i] ; j++)
   {
   if(size[i] % j == 0)
    {
   counter++;
   break;
   }
    }
   if(counter == 0)
   {
   cout<<"\n  Prime number is: "<<size[i];
   prime++;
   }
}
   cout<<"\n The total prime numbers are: "<<prime;
return 0;
}