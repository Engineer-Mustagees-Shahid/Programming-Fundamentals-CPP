#include<iostream>
using namespace std;
int main(){
	

   int temp;
   
   cout<<"Please Enter the current room temperature in Celcius :" ;
   
   cin>>temp;
   
   if(temp<18)
        cout<<" Heater is turned on" ;
   else if (temp>26)
         cout<<" Air Conditioner is turned on" ;
   else if (18<temp<26)
         cout<<"no action needed" ;
	    
	return 0;
}
