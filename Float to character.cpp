#include <iostream>
using namespace std;
int main() {
    float num;
    cout<< "Please Enter a float number: ";
    cin>>num;
    if (num>0)
{
	cout<<"\nASCII code: ";
	cout<<char(num)<< endl;
}
    else   
	     cout<<"\nYour typed Number is :"<<num<< endl;
    return 0;
}
