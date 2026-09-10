#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char name[50];
    int numSubjects;
    float *scores, average;
};

// Function to input data and calculate averages
void input_students(Student* students, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin.ignore();
        cin.getline(students[i].name, 50);

        cout << "Enter number of subjects: ";
        cin >> students[i].numSubjects;
        students[i].scores = new float[students[i].numSubjects];

        float sum = 0;
        cout << "Enter scores: ";
        for (int j = 0; j < students[i].numSubjects; j++) {
            cin >> students[i].scores[j];
            sum += students[i].scores[j];
        }
        students[i].average = sum / students[i].numSubjects;
    }
}

// Function to sort students by average in descending order
void sort_students(Student* students, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (students[i].average < students[j].average)
                swap(students[i], students[j]);
}

// Function to display student data
void display_students(Student* students, int n) {
    cout << "\nStudents sorted by average score:\n";
    for (int i = 0; i < n; i++)
        cout << students[i].name << " - Average Score: " << students[i].average << endl;
    cout << "\nTop student: " << students[0].name << " with " << students[0].average << endl;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    input_students(students, n);
    sort_students(students, n);
    display_students(students, n);

    for (int i = 0; i < n; i++) delete[] students[i].scores;
    delete[] students;
}
