#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	int std;
	cout<<"How many students : ";
	cin>>std;
	int no_of_std=std;
	int grade,total,high;
	char name_of_student[20];
	while(std>0){
		
		cout<<"Please Enter the name of students :";
		cin>>name_of_student;
		cout<<"Enter "<<name_of_student<<" grade out of 100 is :";
		cin>>grade;
		if(name_of_student && grade>high){
			
			high=grade;
		}
        total=total+grade;
         std--;
         
	}
      float avg_class;
	  avg_class=total/no_of_std;
	  cout<<"The average grade of the class is :"<<avg_class<<endl;	
	  
	  cout<<"The highest scorer is:  with a grade of "<<high;

	
return 0;	
}