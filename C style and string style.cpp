#include<iostream>
#include<cstring>
using namespace std;


void style(char caracters[])
{
    cout<<caracters<<"\n is  a C style string"<<endl;
}

void string_style(string phrase)
{
    cout<<phrase<<"\n is a String object"<<endl;
}
int main()
{
          
		  char caracter[]="\"Assalam-o-Alaikum! My name is Mustagees Shahid\"";
          
          string phrase="\n\"Hi I'm Aina\"";
          
          style(caracter);
          
          string_style(phrase);
          
          
return 0;
}