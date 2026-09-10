#include <iostream>
using namespace std;
int main() {
	
    int student_score;
 
    cout<< "Please Enter the student score: ";
    
    cin>>student_score;
    
    if ( student_score > 100 || student_score < 0) {
        cout << " Invalid score. " << endl;
    }
    if (student_score >= 90) 
	{
		cout<<"Your grade is A";
        cout << " Feedback : Excellent work!" << endl;
        
    }
	 else if (student_score >= 80)
	 {
	 	cout<<"Your grade is B";
        cout << " Feedback : Good job, keep improving!" << endl;
           
    } 
	else if (student_score >= 70)
	 {
	 	cout<<"Your grade is C";
        cout << " Feedback : Fair effort, but room for improvement!" << endl;
        
    } 
	else if (student_score >= 60) 
	{
		cout<<"Your grade is D";
        cout << " Feedback : You passed,but consider revisiting the material!." << endl;
        
    } 
	 else
 {
        cout<<"Your grade is F";
		cout << " Feedback: Unfortunately, you failed,Better luck next time!. " << endl;
        
    }

    return 0;
}
