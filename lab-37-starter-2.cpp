// COMSC-210 | Lab 37 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
using namespace std;

// Function prototype
int sum_ascii(string s);

int main() {
    /*
    char a = 'A';
    cout << a << endl; // ASCII: 65
    cout << (int) a << endl;
    int b = 66; // ASCII
    cout << b << endl;
    cout << (char) b << endl;
    */
    cout << "\nReading string...\n"; 
    string code = "Test";

    sum_ascii(code);

    int result = sum_ascii(code);
    cout << "Sum of string's ASCII values: " << result << endl;
    return 0;
}

int sum_ascii(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum = sum + s[i]; // ASCII value is calculated
    }
    return sum; // Total is returned
}

/* 
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
