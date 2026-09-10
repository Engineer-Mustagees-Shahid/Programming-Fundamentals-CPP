#include<iostream>
#include<cmath>
using namespace std;

int average(int,int,int);
char grade(float);

int main()
{
do{

	int no_of_students;
	cout<<" How many students ? :";
	cin>>no_of_students;
	cout<<endl;
    if(no_of_students<0){
    	cout<<" You input Invalid number! "<<endl;
    	return 0;
	}


	for(int i=1;i<=no_of_students;i++)
{
	int m_marks,e_marks,s_marks;
	float result,grd,avg;
	char name_of_students[10],result_1;
	
		
	cout<<" Enter name of a student "<<i<<":";
	cin>>name_of_students;
	cout<<endl;

		cout<<" Enter Math marks :";
		cin>>m_marks;
		cout<<endl;
		cout<<" Enter English marks :";
		cin>>e_marks;
		cout<<endl;
		cout<<" Enter Science marks :";
		cin>>s_marks;
		cout<<endl;
		cout<<"\n\n";
		
	cout<<"Student Grades:"<<endl;
	cout<<"-------------------------"<<"\n"<<endl;
	cout<<"Name : "<<name_of_students<<endl;
	cout<<"Math :"<<m_marks<<","<<" English :"<<e_marks<<","<<" Science :"<<s_marks<<endl;
	result=average(m_marks,e_marks,s_marks);
	cout<<"Average :"<<result<<endl;
	result_1=grade(result);
	cout<<"Grade :"<<result_1<<endl;
	cout<<"\n\n";

}

  char choice[10];
  cout<<"~~ Do you want to add more numbers of students ? (yes/no) :";
  cin>>choice;
  cout<<"\n"<<endl;
  if(strcmp(choice,"no")==0)
  return 0;
  
 }while(true);
	return 0;
}
 int average(int m_marks,int e_marks, int s_marks)
{
	
	int avg=(m_marks+e_marks+s_marks)/3;
	
	return(avg);
}
char grade(float average)
{
    char grade;
    
    if(average>=90)
    grade= 'A';
    else if(average>=70)
    grade='B';
    else if(average>=50)
    grade='C';
    else if(average>=45)
    grade='D';
    else if (average<45)
    grade='F';
	return(grade);
}
