#include <iostream>
#include <fstream>
using namespace std;

int main() {
    streampos size;
    char* memblock;

    // Open the binary file in input mode, with binary mode and set the file pointer at the end of the file
    ifstream file("example.bin", ios::in | ios::binary | ios::ate);

    if (file.is_open()) {
        // Get the size of the file
        size = file.tellg();
        
        // Allocate memory to contain the entire file content
        memblock = new char[size];
        
        // Set the file pointer to the beginning of the file
        file.seekg(0, ios::beg);
        
        // Read the entire file into memory
        file.read(memblock, size);
        
        // Close the file
        file.close();

        // Print a message indicating that the entire file content is in memory
        cout << "The entire file content is in memory." << endl;

        // Free the dynamically allocated memory
        delete[] memblock;
    } else {
        // Display an error message if the file couldn't be opened
        cout << "Unable to open file." << endl;
    }

    return 0;
}
