#include<iostream>
using namespace std;
int main(){
	
	char membership;
	cout<<"Enter membership status (p for premium/R for regular/n for none) :";
	cin>>membership;
	float cart;
		cout<<"Enter total cart value:" ;
		cin>>cart;
	float disc;
	if (membership=='p')
	   {
		 disc=(cart*15)/100;
	    cart=cart-disc;}
	else if (membership=='R')
	   {
		 disc=(cart*5)/100;
	    cart=cart-disc;}
	else if (membership=='n')
	    cart=cart;
	     
	if (cart>200)
	    cart=cart-20;
	else if (cart>500)   
	   cart=cart-50;
	   
	char holiday;
	cout<<"Is it a holiday ? (1 for yes, 0 for no) :";
	cin>>holiday;
	float disc_1;
	
	if (holiday=='1')
	    {
		disc_1=cart*10/100;
	    cart=cart-disc_1;}
	else if (holiday=='0')
	    cart==cart;
	    
	    
	char coupen;
	cout<<"Do you have a coupen ? (1 for yes, 0 for no) :";
	cin>>coupen;
	float disc_2;
	
	if (coupen=='1'&& cart>100)
	    {
		disc_2=cart*30/100;
	    cart=cart-disc_2;}
	else if(coupen=='0')
	    cart==cart;
	    
	float shipping;
	shipping==cart;
	if (cart>100)
	   cart==cart;
	else 
	    cart=cart+10;
	    
	cout<<"Final price after discount and shipping: $";
	cout<<cart;
	
	
	
	return 0;
	
}