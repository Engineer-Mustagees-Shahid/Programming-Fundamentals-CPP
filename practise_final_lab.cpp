#include <iostream>
#include <cstring>
using namespace std;

bool Findsubstr(char* str1, char* str2) {
    
    char *result=strstr(str1,str2);
    return (result!= nullptr); // Substring not found
}

int main() {
    char* str1 = new char[100];
    char* str2 = new char[100];
  

    cout << "Enter the main string: ";
    cin.getline(str1,100);

    cout << "Enter the substring: ";
   cin.getline(str2,100);


    if (Findsubstr(str1, str2)) {
        cout << "Substring found!" << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

//    delete[] str1;
//    delete[] str2;

    return 0;
}
