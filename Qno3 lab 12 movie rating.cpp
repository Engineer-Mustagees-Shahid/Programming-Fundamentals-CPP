#include<iostream>
using namespace std;
int main()
{
	int rating[10];
	int max_rating;
    int min_rating;
    int sum=0;
    float average;
	
	for(int i=0; i<10; )
	{
	
	cout<<"\n Enter the rate of movie (1 to 5) : ";
	cin>>rating[i];
	
	if (rating[i]>5)
	{
	cout<<"\n You rating is invalid\n Rate the movie from 1 to 5 stars! "<<endl;
	continue;
	}
		sum+=rating[i];
	i++;

}
    max_rating = rating[0];
    min_rating = rating[0];
    for(int i = 1 ; i < 10 ; i++)
    {
	if(max_rating<rating[i])
	max_rating=rating[i];
	
	if(min_rating>rating[i])
	min_rating=rating[i];
	}
	
	average=sum/10.0;
	cout<<"\n The maximum rating is :"<<max_rating<<endl;
	cout<<"\n The minimum rating is :"<<min_rating<<endl;
	cout<< " \n The average rating is :"<<average<<endl;
	
	return 0;
}