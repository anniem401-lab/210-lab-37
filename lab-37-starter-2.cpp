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
    int codesPrinted = 0;
    for (auto &pair : hash_table) {
        if ( codesPrinted >= Map_Entries) break;
        
        cout << "# " << codesPrinted + 1 << "| Hash Index " << pair.first << "\n";
        cout << "Codes: ";
        cout << "\n----- ";
        for (auto &c : pair.second) {
            cout << "(" << c << ") ";
        }
        cout << "\n\n=====================*\n";

        codesPrinted++;
    }
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