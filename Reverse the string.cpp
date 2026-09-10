#include<iostream>
using namespace std;

void reverseit(char str[])
{
	int length= strlen(str);
	
	for(int i=0;i<length/2;i++)
	{
		char temp=str[i];
		str[i]=str[length-i-1];
		str[length-i-1] = temp;
		
	}
	
	cout<<endl;
	
	for(int i=0; i<length ; i++)
	{
		cout<<str[i];
	}
	
	cout<<endl;
}

int main()
{
	char input[100];
	cout<<"\nEnter the phrase :";
//	cin.getline(input,100);
    gets(input);
	
	reverseit(input);
	
	return 0;
}

