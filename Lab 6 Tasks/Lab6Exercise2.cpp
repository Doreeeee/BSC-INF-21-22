#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    
     cout << "The value must not exceed 3 \n Enter number of rows: ";
     cin >> rows;
    while (rows < 1 || rows > 3) {
         cout << "Invalid input. Please enter a number between 1 and 3: ";
         cin >> rows;
    }

     cout << "The value must not exceed \n Enter number of columns: ";
     cin >> cols;
    while (cols < 1 || cols > 3) {
         cout << "Invalid input. Please enter a number between 1 and 3: ";
         cin >> cols;
    }

    
    double** arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j + 1; 
        }
    }

     cout << "Array dimensions: " << rows << " x " << cols <<    endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
             cout << arr[i][j] << " ";
        }
         cout <<endl;
    }

    
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}