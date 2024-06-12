#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char ch : str) {
        if (vowels.find(ch) != string::npos) {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    string word;
    stringstream ss(str);
    while (ss >> word) {
        count++;
    }
    return count;
}

// Function to reverse a string
string reverse(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string capitalized = str;
    bool capitalize = true;
    for (int i = 0; i < capitalized.size(); ++i) {
        if (isalpha(capitalized[i])) {
            if (capitalize) {
                capitalized[i] = toupper(capitalized[i]);
                capitalize = false;
            } else {
                capitalize = true;
            }
        }
    }
    return capitalized;
}

int main() {
    // Open the text file
    ifstream inputFile("textFile.txt");
    if (!inputFile) {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }

    // Read the contents of the file into a string variable
    string fileData;
    getline(inputFile, fileData);

    // Close the file
    inputFile.close();

    // Calculate and output the number of vowels
    int numVowels = countVowels(fileData);
    cout << "Number of vowels: " << numVowels << endl;

    // Calculate and output the number of words
    int numWords = countWords(fileData);
    cout << "Number of words: " << numWords << endl;

    // Reverse the statement and output it
    string reversed = reverse(fileData);
    cout << "Reversed statement: " << reversed << endl;

    // Capitalize the second letter of each word and output the result
    string capitalized = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letter of each word: " << capitalized << endl;

    return 0;
}