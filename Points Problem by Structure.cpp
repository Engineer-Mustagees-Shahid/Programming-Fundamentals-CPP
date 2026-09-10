#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

// Function to input points
void inputPoints(Point* points, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter coordinates for point " << i + 1 << " (x y): ";
        cin >> points[i].x >> points[i].y;
    }
}

// Function to translate points by (dx, dy)
void translatePoints(Point* points, int n, int dx, int dy) {
    for (int i = 0; i < n; i++) {
        points[i].x += dx;
        points[i].y += dy;
    }
}

// Function to print points
void printPoints(Point* points, int n) {
    for (int i = 0; i < n; i++) {
        cout << "(" << points[i].x << ", " << points[i].y << ")" << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of points: ";
    cin >> n;

    Point* points = new Point[n]; // Dynamically allocate memory for points
    inputPoints(points, n);

    cout << "\nOriginal Points:\n";
    printPoints(points, n);

    int dx, dy;
    cout << "\nEnter translation values (dx dy): ";
    cin >> dx >> dy;

    translatePoints(points, n, dx, dy);

    cout << "\nTranslated Points:\n";
    printPoints(points, n);

    delete[] points;
	points=NULL; // Free allocated memory
    return 0;
}
