#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of bus stops: ";
    cin >> n;

    int bus_stops[100];
    int passenger_counts[100];
    int total_Passengers = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter bus stop number: ";
        cin >> bus_stops[i];
        cout << "Enter passenger count: ";
        cin >> passenger_counts[i];
        total_Passengers += passenger_counts[i]; 
    }


    int search_stop;
    cout << "\nEnter bus stop number to search: ";
    cin >> search_stop;


    for (int i = 0; i < n; i++) {
        if (bus_stops[i] == search_stop) {
            cout << "Bus stop " << search_stop << " found at index " << i << ".\n";
            break;
        }
    }
    
    int maxPassengers = passenger_counts[0];
    int maxStop = bus_stops[0];
    
    for (int i = 1; i < n; i++) {
        if (passenger_counts[i] > maxPassengers) {
            maxPassengers = passenger_counts[i];
            maxStop = bus_stops[i];
        }
    }
    cout << "Bus stop with the highest passenger count: " << maxStop
         << " with " << maxPassengers << " passengers.\n";


    int averagePassengers = total_Passengers / n;
    cout << "Average passenger count: " << averagePassengers << endl;
    cout << "Bus stops with passenger counts above the average:\n";

    for (int i = 0; i < n; i++) {
        if (passenger_counts[i] > averagePassengers) {
            cout << "Bus stop " << bus_stops[i] << " with " << passenger_counts[i] << " passengers.\n";
        }
    }

    return 0;
}
