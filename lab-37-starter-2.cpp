// COMSC-210 | Lab 37 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Function prototype
int sum_ascii(string s);

int main() {
    /*
    char a = 'A';
    cout << a << endl; 
    cout << (int) a << endl; // Prints ASCII: 65
    int b = 66; // ASCII
    cout << b << endl;
    cout << (char) b << endl;
    */

    // Checking file
    ifstream fin;
    //fin.open(); // Opens the file
    if (fin.good()) {
        string codes;

        while (fin >> codes) {
            
        }
    }

    string code = "Test";
    cout << "\nReading string " << code << "...\n" << endl; 

    sum_ascii(code);

    int result = sum_ascii(code);
    cout << "Sum of ASCII values of string " << code << ": " << result << endl;

    cout << "\nChecking the ASCII values of each character and calculating total...\n";
    char T = 'T'; // Char holds a letter
    cout << T << ": " << (int) T << endl; // Prints ASCII of T: 84
    char e = 'e';
    cout << e << ": " << (int) e << endl; // Prints ASCII of e: 101
    char s = 's';
    cout << s << ": " << (int) s << endl; // Prints ASCII of s: 115
    char t = 't';
    cout << t << ": " << (int) t << endl; // Prints ASCII of t: 116

    int total = ((int) T + (int) e + (int) s + (int) t);
    cout << "\nTotal of all character ASCII values: " << total << endl;
    cout << "Part One done: Milestone 1.";

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
