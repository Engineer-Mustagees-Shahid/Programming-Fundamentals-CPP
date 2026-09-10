#include<iostream>
#include<cmath>
using namespace std;
float constant=14.125;
int pizza();

int main()
{
	pizza();
	
	return 0;
}



int pizza()
{
	int diameter,area,slice;
	cout<<" Enter the diameter of pizza in inches :";
	cin>>diameter;
	area=3.14*pow((diameter/2),2);
	slice=area/constant;
	cout<<endl;
	cout<<" The pizza with the diameter of "<<diameter<<" inches can be divided into "<<slice<<" slice ";
	return slice;
}