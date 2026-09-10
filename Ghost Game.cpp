#include<iostream>
using namespace std;
int main()
{

	char living_room;
	char kitchen;
	char basement;
    char exitgate;
	cout<<"\nPlease give command by 'Y' ";
	
	cout<<"\nLiving Room"<<endl;
	cin>>living_room;
	
	if(living_room=='Y')
	   {
	   cout<<"\nIf You want to sleep then Ghost will vatch you and enter in your dreams"<<endl;
	   	}
	   	
	cout<<"\nKitchen"<<endl;
	cin>>kitchen;
	   
    if (kitchen=='Y')
     {
	    cout<<"\nWelcome to the kitchen what you want to eat or can I say what I want to eat hahaha!"<<endl ;
       	 }

    cout<<"\nbasement"<<endl;
	cin>>basement;

	if (basement=='Y')
	  {
	   cout<<"\nWinner";  }
	   
	   cout<<"\nExit gate"<<endl;
	   cin>>exitgate;

	if (exitgate=='Y')
	   cout<<"\nYou are loosing the game";
	
	
	return 0;
}