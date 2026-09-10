#include<iostream>
using namespace std;

int main() {
	
    const int size = 15;
    int numbers[size];    
    int frequencies[size]={0};
    int count = 0;           


    cout << "Enter up to 15 integers:" << endl;
    for (int i = 0; i < size; ++i) {
        int temp;
        cin >> temp; 
        *(numbers + count) = temp; 
        count++;
    }


    for (int i = 0; i < count; ++i) 
	{
        int already_counted = 0; 
        for (int j = 0; j < i; ++j) 
		{
            if (*(numbers + i) == *(numbers + j)) 
			{
                already_counted = 1;
                break;
            }
        }
        if (already_counted == 0) 
		{
            for (int j = i; j < count; ++j) 
			{
                if (*(numbers + i) == *(numbers + j)) 
				{
                    (*(frequencies + i))++;
                }
            }
        }
    }

    cout << "\n\nFrequency of each unique number:" << endl<<endl;
    for (int i = 0; i < count; ++i) {
        if (*(frequencies + i) > 0) 
		{
            cout << "Number: " << *(numbers + i)<< "   Frequency: " << *(frequencies + i) << endl;
        }
    }

    int max_freq = 0;
    int mode = 0;
    for (int i = 0; i < count; ++i) 
	{
        if (*(frequencies + i) > max_freq) 
		{
           max_freq = *(frequencies + i);
            mode = *(numbers + i);
        }
    }
    cout << "\nThe most frequent number (mode) is: " <<mode<<endl;

    return 0;
}
