#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	cout<<" \n\n\t\t\t\t\t\t\t Welcome in the program (*_*) "<<endl;
    int points;
    cout<< "\nHow many data points do you have (1-10): ";
    cin>>points;

    if (points < 1 || points > 10)
	 {
        cout<< "\nInvalid number" << endl;
        return 0;
    }

    double x[10], y[10];
    double sum_of_x = 0, sum_of_y = 0, sum_of_x_x = 0, sum_of_x_y = 0;

    cout<< "\n\nEnter  " << points << " 'x' and 'y' coordinates for each point (separate with space):\n";
    for (int i=0; i<points; i++)
	 {
        cout<<i+1<< ": ";
        cin>>x[i]>> y[i];
        sum_of_x += x[i];              
        sum_of_y += y[i];              
        sum_of_x_x += x[i] * x[i];    
        sum_of_x_y += x[i] * y[i];      
    }


    double m= (points * sum_of_x_y - sum_of_x * sum_of_y) / (points * sum_of_x_x - sum_of_x * sum_of_x);
    double b= (sum_of_y / points) - m * (sum_of_x / points);

 
    cout<<fixed << setprecision(2);
    cout<< "\n\nThe equation of regression line is: y = " << m << " x + " << b << endl;


    char interpolate;
    cout<< "\n\nDo you want to interpolate? (y/n): ";
    cin>>interpolate;

    if(interpolate == 'Y' || interpolate == 'y') 
	{
        double input_x;
        cout<< "\n\nEnter 'x' values one per line and terminate the program anytime with Ctrl+D(shortcut key):\n";
        while(cin>>input_x) 
		{
            double predicted_y = m * input_x + b;
            cout << "y = " << predicted_y << endl;
        }
    }
    
    else if(interpolate == 'N' || interpolate == 'n') 
    {
    	return 0;
	}

    return 0;
}



