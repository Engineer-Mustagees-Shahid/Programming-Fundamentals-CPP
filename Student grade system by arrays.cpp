#include<iostream>
using namespace std;
int main()
{
	const int students=4;
	const  int subjects=3;
	int student_data[students][subjects];
	int sum[students]={0,0,0,0};
	
	for(int i=0;i<students;i++)
	{
		cout<<" Enter the marks of the student "<<i+1<<" : "<<endl<<endl;
	  for(int j=0;j<subjects;j++)	
		{
			cout<<" Subject "<<j+1<<" : ";
			cin>>student_data[i][j];
			cout<<endl;	
			sum[i]+=student_data[i][j];
		}	
	}
	
	for(int i=0;i<students;i++)
	{	
	       cout<<" Total marks for student "<<i+1<<" : "<<sum[i];
		   cout<<endl;			
	}
	
      int max = student_data[0][0];
      int min = student_data[0][0];

    for (int i=0; i<students; ++i) 
	{
        for (int j=0; j<subjects; ++j) 
		{
            if (student_data[i][j]>max) 
			{
                max=student_data[i][j];
            }
            if (student_data[i][j]<min) 
			{
                min=student_data[i][j];
            }
        }
    }

    cout << "\nThe highest mark is: " <<max<< endl;
    cout << "\nThe lowest mark is: " <<min<< endl;
	
	return 0;
}