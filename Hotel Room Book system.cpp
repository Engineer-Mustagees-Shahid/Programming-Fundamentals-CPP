#include <iostream>
using namespace std;

int main() {
	
    int nights;
    char additional_services;
    char loyalty_member;  
    float total_cost = 0;
    char room_type;
    
    cout <<"Enter room type!"<<endl; 
    cout<<"s for single room "<<endl;
    cout<<"d for double bed room "<<endl;
    cout<<"u for suite"<<endl;
    
    cout<<"\n\t\t\t";
    cin >> room_type;
    cout << "Enter number of nights you stayed: ";
    cin >> nights;
    cout << "Are you a loyalty program member? (1 for yes, 0 for no): ";
    cin >> loyalty_member;
    cout << "Choose additional services (s for spa /b for breakfast /n for none): ";
    cin >> additional_services;
    
    switch (room_type) {
        case 's':
            total_cost = 50 * nights;
            break;
        case 'd':
            total_cost = 90 * nights;
            break;
        case 'u':
            total_cost = 150 * nights;
            break;
        default:
            cout << "Please enter valid room type." << endl;
    }
    float disc;
    
    if (nights>7)
    
	{ 
	disc = (total_cost*10)/100;
	total_cost=total_cost-disc;
}
    if (loyalty_member=='1')
    
	{ 
	disc = (total_cost*5)/100;
	total_cost=total_cost-disc;
}
	else if (loyalty_member=='0') 
	   total_cost=total_cost;
	
	
    switch (additional_services) {
        case 's':
            total_cost = total_cost*(30 * nights); 
            break;
        case 'b':
            total_cost = total_cost*(10 * nights); 
            break;
        case 'n':
            
            break;
        default:
            cout << "Please enter valid character for getting additional services." << endl;
    }
    cout << "Total price of booking hotel room : $" << total_cost << endl;
    return 0;
}
