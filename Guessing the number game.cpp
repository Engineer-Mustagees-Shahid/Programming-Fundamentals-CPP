#include<iostream>
using namespace std;
int main(){
	
	int secrete,guess1;
	cout<<" Enter a secrete number between 1-100 (don't let the guser see it ) :";
	cin>>secrete;
	
	cout<<"\nLet the gussing begin you have 5 attempts to guess the number\n"<<endl;
for(int i=1; i<=5; )	
{
	cout<<" Attempt "<<i<< " of 5: Enter your guess(1-100) :";
	cin>>guess1;
	if(guess1>100)
	{
	cout<<" \n Invalid guess! Please Enter a number between 1 and 100.\n"<<endl;
	continue;
	}
	int b=i;
	i++;
	if(guess1!=secrete && guess1<secrete)
	cout<<" \n Too low Try Again \n"<<endl;
	else if ((guess1!=secrete ) && (guess1>secrete))
	cout<<" \n Too high Try Again \n"<<endl;
	else if(guess1==secrete)
	{
	cout<<"\n Congratulatons you guessed the number "<<secrete<<" in "<<b<<" attempts "<<endl;
    break;	
    }
}
	return 0;
}
