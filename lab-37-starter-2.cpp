// COMSC-210 | Lab 37 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <list>
using namespace std;

// Function prototype
int gen_hash_index();

const int Map_Entries = 100;

int main() {
    map<int, list<string>> hash_table; // map where int is hash index and list is code string

    cout << "\nReading file and calculating ASCII values...\n";
    // Checking file
    ifstream fin;
    fin.open("lab-37-data-2.txt"); // Opens file containing 100,185 12-character strings of hexadecimalcodes
    if (!fin.good()) throw "I/O error";

    int sum = 0;
    string code;
    while (getline(fin, code)) { // Loop to read lines until eof
        //sum += sum_ascii(code);
    }
    fin.close(); // Closes file

    // Acessing map using range-based for loop
    cout << "Hash index and string code (range-based for loop): " << endl;
    for (auto pair : hash_table) {
        cout << pair.first << ": ";
        for (auto code : pair.second)
            cout << code << " ";        
        cout << endl;
    }

    //cout << "Sum of ASCII values of string: " << sum << endl;
    cout << "\nPart One done: Milestone 1.\n";
    cout << "Part Two done: Milestone 2.";
    return 0;
}

int gen_hash_index() {
    
}

/* 
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
