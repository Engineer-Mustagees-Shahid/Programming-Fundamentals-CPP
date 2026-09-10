#include<iostream>
using namespace std;
int main()
{
// Welcome invitation
	
	cout<<"\n\t\t\tWelcome in my restuarant Sir/Miss (*_*)\n";
	
// Variable Declaration for 1 item price
	
	int fries,burger,soda,coffe,total_cost;
	
// Price initialization
	
	fries=150;
	burger=300;
	soda=200;
	coffe=350;
	
// Showing Prices for Clients
	
	cout<<"\n\n\t\t Price of Fries is : 150";
	cout<<"\n\n\t\t Price of burger is : 300";	
	cout<<"\n\n\t\t Price of Soda is : 200";	
	cout<<"\n\n\t\t Price of Coffe is : 350";	

// variable declaration for multiple number of orders	

	int f,b,s,c;
	    
// Take order from User
	    
	cout<<"\n\n\n\tPlease Enter your order in quantity : \n\n \t\t\t\tFries=";
	    cin>> f;
        f=fries*f;
    cout<<" \n\t\t\t\tBurgers=";
        cin>> b;
        b=burger*b;
    cout<<" \n\t\t\t\tSoda=";
	    cin>> s;
	    s=soda*s;
    cout<<" \n\t\t\t\tCoffee=";
        cin>> c;
        c=coffe*c;
   
// Total cost of order
		    
    total_cost=f+b+s+c;
    
// Variable declaration for discount
     
	int disc=0;
// Applying Condition for discount
	
	if(total_cost>1000)
	   {
	   cout<<"\n\n\t\tYour Total cost is :";
	   cout<<total_cost;
	   disc=total_cost*10/100;
	   cout<<"\n\n\t\tYou get Discount of : ";
	   cout<<disc;
	   total_cost=total_cost-disc;
	   cout<<"\n\n\t\tYour total cost after getting Discount is : ";
	        cout<<total_cost;
	   	    cout<<"\n\n\t\tThanks for your order(*_*)";
}
	else
		 {
		     total_cost=total_cost-disc;
	   cout<<"\n\n\t\tYour total cost is ";
	        cout<<total_cost;
	    cout<<"\n\n\t\tThanks for your order(*_*)";
}
	return 0;
}