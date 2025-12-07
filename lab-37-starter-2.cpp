// COMSC-210 | Lab 37 | Annie Morales
// IDE used: Visual Studio Code

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <list>
using namespace std;

// Function prototype
int gen_hash_index(string s);

const int Map_Entries = 100;

int main() {
    map<int, list<string>> hash_table; // map where int is hash index and list is code string

    // Checking file
    ifstream fin;
    fin.open("lab-37-data-2.txt"); // Opens file containing 100,185 12-character strings of hexadecimalcodes
    if (!fin.good()) throw "I/O error";

    string code;
    while (getline(fin, code)) { // Loop to read lines until eof
        int index = gen_hash_index(code);
        hash_table[index].push_back(code);
    }
    fin.close(); // Closes file

    // Acessing map using range-based for loop
    int codes = 0;
    for (auto &pair : hash_table) {
        if ( codes >= Map_Entries) break;
        
        cout << "Hash Index: " << pair.first << " - ";

        for (auto &c : pair.second) {
            cout << endl;
            cout << "Codes: (" << c << ")";
        }
        cout << endl;
        codes++;
    }
    
    // last output: 956F69A6F889

    //cout << "Sum of ASCII values of string: " << sum << endl;
    cout << "\nPart One done: Milestone 1.\n";
    cout << "Part Two done: Milestone 2.";
    return 0;
}

// gen_hash_index receives string codes and return their ASCII values
// arguments: string
// returns: sum
int gen_hash_index(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += s[i];
    }
    return sum;
}

/* 
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
