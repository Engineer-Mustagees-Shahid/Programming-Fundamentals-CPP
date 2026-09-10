#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void palindrome(char phrase[])
{
	int length=strlen(phrase);
	
	for(int i=0;i<length;i++)
	{
		if(isupper(phrase[i]))
		{
			phrase[i]=tolower(phrase[i]);
		}
	}
	
	int k=0;
	char cleaned[100];
	
	for(int i=0;i<length;i++)
	{
		if(isalnum(phrase[i]))
		{
			phrase[k++]=phrase[i];
		}
			
	}
	
    phrase[k]='\0';


    char reversed[100];
    for (int i = 0; i < k; i++) {
        reversed[i] = cleaned[k - i - 1];
    }
    reversed[k] = '\0';

	
//	for(int i=0;i<length/2;i++)
//	{
//		char temp=phrase[i];
//		phrase[i]=phrase[length-i-1];
//		phrase[length-i-1]=temp;
//	}
	
    cout<<endl;
    
     int new_length = strlen(phrase);
     
    for (int i=0; i<new_length/2; i++) 
	{
        if (phrase[i] != phrase[new_length-i-1]) 
		{
            cout<< "\n\nIt is not a palindrome" <<endl;
            return ;
        }
    }

    cout<< "\n\nIt is a Palindrome" <<endl;
}

int main()
{
	char phrase[100]; 
	cout<<"\nEnter the phrase:";
	cin.getline(phrase,100);
	
	palindrome(phrase);
	
	
	return 0;
}